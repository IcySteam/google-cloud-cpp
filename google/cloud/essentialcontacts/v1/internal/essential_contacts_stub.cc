// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/essentialcontacts/v1/service.proto

#include "google/cloud/essentialcontacts/v1/internal/essential_contacts_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/essentialcontacts/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace essentialcontacts_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EssentialContactsServiceStub::~EssentialContactsServiceStub() = default;

StatusOr<google::cloud::essentialcontacts::v1::Contact>
DefaultEssentialContactsServiceStub::CreateContact(
    grpc::ClientContext& context,
    google::cloud::essentialcontacts::v1::CreateContactRequest const& request) {
  google::cloud::essentialcontacts::v1::Contact response;
  auto status = grpc_stub_->CreateContact(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
DefaultEssentialContactsServiceStub::UpdateContact(
    grpc::ClientContext& context,
    google::cloud::essentialcontacts::v1::UpdateContactRequest const& request) {
  google::cloud::essentialcontacts::v1::Contact response;
  auto status = grpc_stub_->UpdateContact(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::essentialcontacts::v1::ListContactsResponse>
DefaultEssentialContactsServiceStub::ListContacts(
    grpc::ClientContext& context,
    google::cloud::essentialcontacts::v1::ListContactsRequest const& request) {
  google::cloud::essentialcontacts::v1::ListContactsResponse response;
  auto status = grpc_stub_->ListContacts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
DefaultEssentialContactsServiceStub::GetContact(
    grpc::ClientContext& context,
    google::cloud::essentialcontacts::v1::GetContactRequest const& request) {
  google::cloud::essentialcontacts::v1::Contact response;
  auto status = grpc_stub_->GetContact(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultEssentialContactsServiceStub::DeleteContact(
    grpc::ClientContext& context,
    google::cloud::essentialcontacts::v1::DeleteContactRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteContact(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::essentialcontacts::v1::ComputeContactsResponse>
DefaultEssentialContactsServiceStub::ComputeContacts(
    grpc::ClientContext& context,
    google::cloud::essentialcontacts::v1::ComputeContactsRequest const&
        request) {
  google::cloud::essentialcontacts::v1::ComputeContactsResponse response;
  auto status = grpc_stub_->ComputeContacts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultEssentialContactsServiceStub::SendTestMessage(
    grpc::ClientContext& context,
    google::cloud::essentialcontacts::v1::SendTestMessageRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->SendTestMessage(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace essentialcontacts_v1_internal
}  // namespace cloud
}  // namespace google
