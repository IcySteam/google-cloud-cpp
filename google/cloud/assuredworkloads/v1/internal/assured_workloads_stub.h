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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/assuredworkloads/v1/assuredworkloads.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AssuredWorkloadsServiceStub {
 public:
  virtual ~AssuredWorkloadsServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkload(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::assuredworkloads::v1::Workload>
  UpdateWorkload(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
  RestrictAllowedResources(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::
          RestrictAllowedResourcesRequest const& request) = 0;

  virtual Status DeleteWorkload(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
  ListWorkloads(grpc::ClientContext& context,
                google::cloud::assuredworkloads::v1::ListWorkloadsRequest const&
                    request) = 0;

  virtual StatusOr<google::cloud::assuredworkloads::v1::ListViolationsResponse>
  ListViolations(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::ListViolationsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::assuredworkloads::v1::Violation> GetViolation(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::GetViolationRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
  AcknowledgeViolation(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultAssuredWorkloadsServiceStub : public AssuredWorkloadsServiceStub {
 public:
  DefaultAssuredWorkloadsServiceStub(
      std::unique_ptr<google::cloud::assuredworkloads::v1::
                          AssuredWorkloadsService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkload(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request)
      override;

  StatusOr<
      google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
  RestrictAllowedResources(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::
          RestrictAllowedResourcesRequest const& request) override;

  Status DeleteWorkload(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
  ListWorkloads(grpc::ClientContext& context,
                google::cloud::assuredworkloads::v1::ListWorkloadsRequest const&
                    request) override;

  StatusOr<google::cloud::assuredworkloads::v1::ListViolationsResponse>
  ListViolations(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::ListViolationsRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::Violation> GetViolation(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::GetViolationRequest const& request)
      override;

  StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
  AcknowledgeViolation(
      grpc::ClientContext& context,
      google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::assuredworkloads::v1::AssuredWorkloadsService::
                      StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_V1_INTERNAL_ASSURED_WORKLOADS_STUB_H
