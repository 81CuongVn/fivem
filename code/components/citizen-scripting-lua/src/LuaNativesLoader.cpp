#include "StdInc.h"

#include <VFSManager.h>
#include <VFSZipFile.h>
#include <ResourceManager.h>

namespace fx
{
bool mountedAnyNatives = false;
}

static void MountNatives(const std::string& name)
{
	static std::map<std::string, std::vector<uint8_t>> storedFiles;

	const void* thisData = nullptr;
	size_t thisDataSize = 0;

	{
		auto stream = vfs::OpenRead(fmt::sprintf("citizen:/scripting/lua/%s.zip", name));

		if (stream.GetRef())
		{
			storedFiles[name] = stream->ReadToEnd();

			thisData = storedFiles[name].data();
			thisDataSize = storedFiles[name].size();
		}
	}

	if (thisData)
	{
		fwRefContainer<vfs::ZipFile> device = new vfs::ZipFile();

		if (device->OpenArchive(fmt::sprintf("memory:$%016llx,%d,0:%s", (uintptr_t)thisData, thisDataSize, name)))
		{
			fx::mountedAnyNatives = true;
			vfs::Mount(device, fmt::sprintf("nativesLua:/%s/", name));
		}
	}
}

static InitFunction initFunction([]()
{
	fx::ResourceManager::OnInitializeInstance.Connect([](fx::ResourceManager*)
	{
		static bool mountedFiles = false;

		if (!mountedFiles)
		{
#if defined(IS_RDR3)
			MountNatives("rdr3_universal");
#elif defined(GTA_NY)
			MountNatives("ny_universal");
#elif defined(GTA_FIVE)
			MountNatives("natives_universal");
			MountNatives("natives_21e43a33");
			MountNatives("natives_0193d0af");
#elif defined(IS_FXSERVER)
			MountNatives("natives_server");
#endif

			mountedFiles = true;
		}
	});
});
