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
// source: google/cloud/contentwarehouse/v1/synonymset_service.proto

#include "google/cloud/contentwarehouse/v1/internal/synonym_set_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contentwarehouse/v1/synonymset_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SynonymSetServiceStub::~SynonymSetServiceStub() = default;

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
DefaultSynonymSetServiceStub::CreateSynonymSet(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::CreateSynonymSetRequest const&
        request) {
  google::cloud::contentwarehouse::v1::SynonymSet response;
  auto status = grpc_stub_->CreateSynonymSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
DefaultSynonymSetServiceStub::GetSynonymSet(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::GetSynonymSetRequest const& request) {
  google::cloud::contentwarehouse::v1::SynonymSet response;
  auto status = grpc_stub_->GetSynonymSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
DefaultSynonymSetServiceStub::UpdateSynonymSet(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::UpdateSynonymSetRequest const&
        request) {
  google::cloud::contentwarehouse::v1::SynonymSet response;
  auto status = grpc_stub_->UpdateSynonymSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSynonymSetServiceStub::DeleteSynonymSet(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::DeleteSynonymSetRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSynonymSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::contentwarehouse::v1::ListSynonymSetsResponse>
DefaultSynonymSetServiceStub::ListSynonymSets(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::ListSynonymSetsRequest const&
        request) {
  google::cloud::contentwarehouse::v1::ListSynonymSetsResponse response;
  auto status = grpc_stub_->ListSynonymSets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
