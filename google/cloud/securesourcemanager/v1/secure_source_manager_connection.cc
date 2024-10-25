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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#include "google/cloud/securesourcemanager/v1/secure_source_manager_connection.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_connection_impl.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_option_defaults.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_stub_factory.h"
#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_tracing_connection.h"
#include "google/cloud/securesourcemanager/v1/secure_source_manager_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securesourcemanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecureSourceManagerConnection::~SecureSourceManagerConnection() = default;

StreamRange<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerConnection::ListInstances(
    google::cloud::securesourcemanager::v1::
        ListInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securesourcemanager::v1::Instance>>();
}

StatusOr<google::cloud::securesourcemanager::v1::Instance>
SecureSourceManagerConnection::GetInstance(
    google::cloud::securesourcemanager::v1::GetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::securesourcemanager::v1::Instance>>
SecureSourceManagerConnection::CreateInstance(
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerConnection::CreateInstance(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::CreateInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::Instance>>
SecureSourceManagerConnection::CreateInstance(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::Instance>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnection::DeleteInstance(
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerConnection::DeleteInstance(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnection::DeleteInstance(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerConnection::ListRepositories(
    google::cloud::securesourcemanager::v1::
        ListRepositoriesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securesourcemanager::v1::Repository>>();
}

StatusOr<google::cloud::securesourcemanager::v1::Repository>
SecureSourceManagerConnection::GetRepository(
    google::cloud::securesourcemanager::v1::GetRepositoryRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::securesourcemanager::v1::Repository>>
SecureSourceManagerConnection::CreateRepository(
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::Repository>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerConnection::CreateRepository(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::Repository>>
SecureSourceManagerConnection::CreateRepository(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::Repository>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnection::DeleteRepository(
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerConnection::DeleteRepository(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnection::DeleteRepository(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerConnection::GetIamPolicyRepo(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy>
SecureSourceManagerConnection::SetIamPolicyRepo(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerConnection::TestIamPermissionsRepo(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::securesourcemanager::v1::BranchRule>>
SecureSourceManagerConnection::CreateBranchRule(
    google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::BranchRule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerConnection::CreateBranchRule(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::CreateBranchRuleRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::BranchRule>>
SecureSourceManagerConnection::CreateBranchRule(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::BranchRule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::securesourcemanager::v1::BranchRule>
SecureSourceManagerConnection::ListBranchRules(
    google::cloud::securesourcemanager::v1::
        ListBranchRulesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::securesourcemanager::v1::BranchRule>>();
}

StatusOr<google::cloud::securesourcemanager::v1::BranchRule>
SecureSourceManagerConnection::GetBranchRule(
    google::cloud::securesourcemanager::v1::GetBranchRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::securesourcemanager::v1::BranchRule>>
SecureSourceManagerConnection::UpdateBranchRule(
    google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::BranchRule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerConnection::UpdateBranchRule(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::UpdateBranchRuleRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::BranchRule>>
SecureSourceManagerConnection::UpdateBranchRule(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::BranchRule>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnection::DeleteBranchRule(
    google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerConnection::DeleteBranchRule(
    NoAwaitTag,
    google::cloud::securesourcemanager::v1::DeleteBranchRuleRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>
SecureSourceManagerConnection::DeleteBranchRule(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::securesourcemanager::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::location::Location>
SecureSourceManagerConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location>
SecureSourceManagerConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> SecureSourceManagerConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecureSourceManagerConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
SecureSourceManagerConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
SecureSourceManagerConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SecureSourceManagerConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SecureSourceManagerConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<SecureSourceManagerConnection>
MakeSecureSourceManagerConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SecureSourceManagerPolicyOptionList>(options,
                                                                      __func__);
  options = securesourcemanager_v1_internal::SecureSourceManagerDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      securesourcemanager_v1_internal::CreateDefaultSecureSourceManagerStub(
          std::move(auth), options);
  return securesourcemanager_v1_internal::
      MakeSecureSourceManagerTracingConnection(
          std::make_shared<securesourcemanager_v1_internal::
                               SecureSourceManagerConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1
}  // namespace cloud
}  // namespace google
