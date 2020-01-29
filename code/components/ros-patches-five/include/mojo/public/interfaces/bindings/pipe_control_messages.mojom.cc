// vendor/chromium/mojo/public/interfaces/bindings/pipe_control_messages.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "vendor/chromium/mojo/public/interfaces/bindings/pipe_control_messages.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/hash/md5_constexpr.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "vendor/chromium/mojo/public/interfaces/bindings/pipe_control_messages.mojom-params-data.h"
#include "vendor/chromium/mojo/public/interfaces/bindings/pipe_control_messages.mojom-shared-message-ids.h"

#include "vendor/chromium/mojo/public/interfaces/bindings/pipe_control_messages.mojom-import-headers.h"


#ifndef VENDOR_CHROMIUM_MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_JUMBO_H_
#define VENDOR_CHROMIUM_MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_JUMBO_H_
#endif
namespace mojo {
namespace pipe_control {
RunOrClosePipeMessageParams::RunOrClosePipeMessageParams()
    : input() {}

RunOrClosePipeMessageParams::RunOrClosePipeMessageParams(
    RunOrClosePipeInputPtr input_in)
    : input(std::move(input_in)) {}

RunOrClosePipeMessageParams::~RunOrClosePipeMessageParams() = default;

bool RunOrClosePipeMessageParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DisconnectReason::DisconnectReason()
    : custom_reason(),
      description() {}

DisconnectReason::DisconnectReason(
    uint32_t custom_reason_in,
    const std::string& description_in)
    : custom_reason(std::move(custom_reason_in)),
      description(std::move(description_in)) {}

DisconnectReason::~DisconnectReason() = default;
size_t DisconnectReason::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->custom_reason);
  seed = mojo::internal::Hash(seed, this->description);
  return seed;
}

bool DisconnectReason::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PeerAssociatedEndpointClosedEvent::PeerAssociatedEndpointClosedEvent()
    : id(),
      disconnect_reason() {}

PeerAssociatedEndpointClosedEvent::PeerAssociatedEndpointClosedEvent(
    uint32_t id_in,
    DisconnectReasonPtr disconnect_reason_in)
    : id(std::move(id_in)),
      disconnect_reason(std::move(disconnect_reason_in)) {}

PeerAssociatedEndpointClosedEvent::~PeerAssociatedEndpointClosedEvent() = default;

bool PeerAssociatedEndpointClosedEvent::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PauseUntilFlushCompletes::PauseUntilFlushCompletes()
    : flush_pipe() {}

PauseUntilFlushCompletes::PauseUntilFlushCompletes(
    mojo::ScopedMessagePipeHandle flush_pipe_in)
    : flush_pipe(std::move(flush_pipe_in)) {}

PauseUntilFlushCompletes::~PauseUntilFlushCompletes() = default;

bool PauseUntilFlushCompletes::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FlushAsync::FlushAsync()
    : flusher_pipe() {}

FlushAsync::FlushAsync(
    mojo::ScopedMessagePipeHandle flusher_pipe_in)
    : flusher_pipe(std::move(flusher_pipe_in)) {}

FlushAsync::~FlushAsync() = default;

bool FlushAsync::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RunOrClosePipeInput::RunOrClosePipeInput() : tag_(Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT) {
  data_.peer_associated_endpoint_closed_event = new PeerAssociatedEndpointClosedEventPtr;
}

RunOrClosePipeInput::~RunOrClosePipeInput() {
  DestroyActive();
}


void RunOrClosePipeInput::set_peer_associated_endpoint_closed_event(
    PeerAssociatedEndpointClosedEventPtr peer_associated_endpoint_closed_event) {
  if (tag_ == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT) {
    *(data_.peer_associated_endpoint_closed_event) = std::move(peer_associated_endpoint_closed_event);
  } else {
    DestroyActive();
    tag_ = Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT;
    data_.peer_associated_endpoint_closed_event = new PeerAssociatedEndpointClosedEventPtr(
        std::move(peer_associated_endpoint_closed_event));
  }
}
void RunOrClosePipeInput::set_pause_until_flush_completes(
    PauseUntilFlushCompletesPtr pause_until_flush_completes) {
  if (tag_ == Tag::PAUSE_UNTIL_FLUSH_COMPLETES) {
    *(data_.pause_until_flush_completes) = std::move(pause_until_flush_completes);
  } else {
    DestroyActive();
    tag_ = Tag::PAUSE_UNTIL_FLUSH_COMPLETES;
    data_.pause_until_flush_completes = new PauseUntilFlushCompletesPtr(
        std::move(pause_until_flush_completes));
  }
}
void RunOrClosePipeInput::set_flush_async(
    FlushAsyncPtr flush_async) {
  if (tag_ == Tag::FLUSH_ASYNC) {
    *(data_.flush_async) = std::move(flush_async);
  } else {
    DestroyActive();
    tag_ = Tag::FLUSH_ASYNC;
    data_.flush_async = new FlushAsyncPtr(
        std::move(flush_async));
  }
}

void RunOrClosePipeInput::DestroyActive() {
  switch (tag_) {

    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:

      delete data_.peer_associated_endpoint_closed_event;
      break;
    case Tag::PAUSE_UNTIL_FLUSH_COMPLETES:

      delete data_.pause_until_flush_completes;
      break;
    case Tag::FLUSH_ASYNC:

      delete data_.flush_async;
      break;
  }
}

bool RunOrClosePipeInput::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace pipe_control
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::pipe_control::RunOrClosePipeMessageParams::DataView, ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr>::Read(
    ::mojo::pipe_control::RunOrClosePipeMessageParams::DataView input,
    ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr* output) {
  bool success = true;
  ::mojo::pipe_control::RunOrClosePipeMessageParamsPtr result(::mojo::pipe_control::RunOrClosePipeMessageParams::New());
  
      if (success && !input.ReadInput(&result->input))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::pipe_control::DisconnectReason::DataView, ::mojo::pipe_control::DisconnectReasonPtr>::Read(
    ::mojo::pipe_control::DisconnectReason::DataView input,
    ::mojo::pipe_control::DisconnectReasonPtr* output) {
  bool success = true;
  ::mojo::pipe_control::DisconnectReasonPtr result(::mojo::pipe_control::DisconnectReason::New());
  
      if (success)
        result->custom_reason = input.custom_reason();
      if (success && !input.ReadDescription(&result->description))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::DataView, ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr>::Read(
    ::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::DataView input,
    ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr* output) {
  bool success = true;
  ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr result(::mojo::pipe_control::PeerAssociatedEndpointClosedEvent::New());
  
      if (success)
        result->id = input.id();
      if (success && !input.ReadDisconnectReason(&result->disconnect_reason))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::pipe_control::PauseUntilFlushCompletes::DataView, ::mojo::pipe_control::PauseUntilFlushCompletesPtr>::Read(
    ::mojo::pipe_control::PauseUntilFlushCompletes::DataView input,
    ::mojo::pipe_control::PauseUntilFlushCompletesPtr* output) {
  bool success = true;
  ::mojo::pipe_control::PauseUntilFlushCompletesPtr result(::mojo::pipe_control::PauseUntilFlushCompletes::New());
  
      if (success)
        result->flush_pipe = input.TakeFlushPipe();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::pipe_control::FlushAsync::DataView, ::mojo::pipe_control::FlushAsyncPtr>::Read(
    ::mojo::pipe_control::FlushAsync::DataView input,
    ::mojo::pipe_control::FlushAsyncPtr* output) {
  bool success = true;
  ::mojo::pipe_control::FlushAsyncPtr result(::mojo::pipe_control::FlushAsync::New());
  
      if (success)
        result->flusher_pipe = input.TakeFlusherPipe();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::mojo::pipe_control::RunOrClosePipeInput::DataView, ::mojo::pipe_control::RunOrClosePipeInputPtr>::Read(
    ::mojo::pipe_control::RunOrClosePipeInput::DataView input,
    ::mojo::pipe_control::RunOrClosePipeInputPtr* output) {
  using UnionType = ::mojo::pipe_control::RunOrClosePipeInput;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {
      ::mojo::pipe_control::PeerAssociatedEndpointClosedEventPtr result_peer_associated_endpoint_closed_event;
      if (!input.ReadPeerAssociatedEndpointClosedEvent(&result_peer_associated_endpoint_closed_event))
        return false;

      *output = UnionType::NewPeerAssociatedEndpointClosedEvent(
          std::move(result_peer_associated_endpoint_closed_event));
      break;
    }
    case Tag::PAUSE_UNTIL_FLUSH_COMPLETES: {
      ::mojo::pipe_control::PauseUntilFlushCompletesPtr result_pause_until_flush_completes;
      if (!input.ReadPauseUntilFlushCompletes(&result_pause_until_flush_completes))
        return false;

      *output = UnionType::NewPauseUntilFlushCompletes(
          std::move(result_pause_until_flush_completes));
      break;
    }
    case Tag::FLUSH_ASYNC: {
      ::mojo::pipe_control::FlushAsyncPtr result_flush_async;
      if (!input.ReadFlushAsync(&result_flush_async))
        return false;

      *output = UnionType::NewFlushAsync(
          std::move(result_flush_async));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif