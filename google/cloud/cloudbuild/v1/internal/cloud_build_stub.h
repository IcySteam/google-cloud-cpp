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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/devtools/cloudbuild/v1/cloudbuild.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudBuildStub {
 public:
  virtual ~CloudBuildStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateBuild(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::Build> GetBuild(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetBuildRequest const& request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse>
  ListBuilds(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListBuildsRequest const& request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::Build> CancelBuild(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::CancelBuildRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRetryBuild(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncApproveBuild(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
  CreateBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
  GetBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetBuildTriggerRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::ListBuildTriggersResponse>
  ListBuildTriggers(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListBuildTriggersRequest const&
          request) = 0;

  virtual Status DeleteBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
  UpdateBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncRunBuildTrigger(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const&
          request) = 0;

  virtual StatusOr<
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
  ReceiveTriggerWebhook(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::WorkerPool> GetWorkerPool(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetWorkerPoolRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const&
          request) = 0;

  virtual StatusOr<google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>
  ListWorkerPools(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const&
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

class DefaultCloudBuildStub : public CloudBuildStub {
 public:
  DefaultCloudBuildStub(
      std::unique_ptr<
          google::devtools::cloudbuild::v1::CloudBuild::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBuild(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::Build> GetBuild(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetBuildRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse> ListBuilds(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListBuildsRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::Build> CancelBuild(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::CancelBuildRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRetryBuild(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncApproveBuild(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> CreateBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> GetBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::ListBuildTriggersResponse>
  ListBuildTriggers(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListBuildTriggersRequest const& request)
      override;

  Status DeleteBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> UpdateBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRunBuildTrigger(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
  ReceiveTriggerWebhook(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::WorkerPool> GetWorkerPool(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>
  ListWorkerPools(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::devtools::cloudbuild::v1::CloudBuild::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V1_INTERNAL_CLOUD_BUILD_STUB_H
