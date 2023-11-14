// Copyright 2022 Google LLC
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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/osconfig/v1/osconfig_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigServiceStub::~OsConfigServiceStub() = default;

StatusOr<google::cloud::osconfig::v1::PatchJob>
DefaultOsConfigServiceStub::ExecutePatchJob(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ExecutePatchJobRequest const& request) {
  google::cloud::osconfig::v1::PatchJob response;
  auto status = grpc_stub_->ExecutePatchJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
DefaultOsConfigServiceStub::GetPatchJob(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetPatchJobRequest const& request) {
  google::cloud::osconfig::v1::PatchJob response;
  auto status = grpc_stub_->GetPatchJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
DefaultOsConfigServiceStub::CancelPatchJob(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::CancelPatchJobRequest const& request) {
  google::cloud::osconfig::v1::PatchJob response;
  auto status = grpc_stub_->CancelPatchJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::ListPatchJobsResponse>
DefaultOsConfigServiceStub::ListPatchJobs(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListPatchJobsRequest const& request) {
  google::cloud::osconfig::v1::ListPatchJobsResponse response;
  auto status = grpc_stub_->ListPatchJobs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse>
DefaultOsConfigServiceStub::ListPatchJobInstanceDetails(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest const&
        request) {
  google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse response;
  auto status =
      grpc_stub_->ListPatchJobInstanceDetails(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
DefaultOsConfigServiceStub::CreatePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request) {
  google::cloud::osconfig::v1::PatchDeployment response;
  auto status = grpc_stub_->CreatePatchDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
DefaultOsConfigServiceStub::GetPatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request) {
  google::cloud::osconfig::v1::PatchDeployment response;
  auto status = grpc_stub_->GetPatchDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::ListPatchDeploymentsResponse>
DefaultOsConfigServiceStub::ListPatchDeployments(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ListPatchDeploymentsRequest const& request) {
  google::cloud::osconfig::v1::ListPatchDeploymentsResponse response;
  auto status = grpc_stub_->ListPatchDeployments(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultOsConfigServiceStub::DeletePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeletePatchDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
DefaultOsConfigServiceStub::UpdatePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request) {
  google::cloud::osconfig::v1::PatchDeployment response;
  auto status = grpc_stub_->UpdatePatchDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
DefaultOsConfigServiceStub::PausePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request) {
  google::cloud::osconfig::v1::PatchDeployment response;
  auto status = grpc_stub_->PausePatchDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
DefaultOsConfigServiceStub::ResumePatchDeployment(
    grpc::ClientContext& context,
    google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request) {
  google::cloud::osconfig::v1::PatchDeployment response;
  auto status = grpc_stub_->ResumePatchDeployment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
