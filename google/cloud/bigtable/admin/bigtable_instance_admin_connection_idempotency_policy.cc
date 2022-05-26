// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#include "google/cloud/bigtable/admin/bigtable_instance_admin_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

BigtableInstanceAdminConnectionIdempotencyPolicy::
    ~BigtableInstanceAdminConnectionIdempotencyPolicy() = default;

namespace {
class DefaultBigtableInstanceAdminConnectionIdempotencyPolicy
    : public BigtableInstanceAdminConnectionIdempotencyPolicy {
 public:
  ~DefaultBigtableInstanceAdminConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<BigtableInstanceAdminConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultBigtableInstanceAdminConnectionIdempotencyPolicy>(*this);
  }

  Idempotency CreateInstance(
      google::bigtable::admin::v2::CreateInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetInstance(
      google::bigtable::admin::v2::GetInstanceRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListInstances(
      google::bigtable::admin::v2::ListInstancesRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateInstance(
      google::bigtable::admin::v2::Instance const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency PartialUpdateInstance(
      google::bigtable::admin::v2::PartialUpdateInstanceRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteInstance(
      google::bigtable::admin::v2::DeleteInstanceRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateCluster(
      google::bigtable::admin::v2::CreateClusterRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetCluster(
      google::bigtable::admin::v2::GetClusterRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListClusters(
      google::bigtable::admin::v2::ListClustersRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateCluster(
      google::bigtable::admin::v2::Cluster const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency PartialUpdateCluster(
      google::bigtable::admin::v2::PartialUpdateClusterRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteCluster(
      google::bigtable::admin::v2::DeleteClusterRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateAppProfile(
      google::bigtable::admin::v2::CreateAppProfileRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetAppProfile(
      google::bigtable::admin::v2::GetAppProfileRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListAppProfiles(
      google::bigtable::admin::v2::ListAppProfilesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateAppProfile(
      google::bigtable::admin::v2::UpdateAppProfileRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteAppProfile(
      google::bigtable::admin::v2::DeleteAppProfileRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override {
    return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                           : Idempotency::kIdempotent;
  }

  Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListHotTablets(
      google::bigtable::admin::v2::ListHotTabletsRequest) override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<BigtableInstanceAdminConnectionIdempotencyPolicy>
MakeDefaultBigtableInstanceAdminConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultBigtableInstanceAdminConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin
}  // namespace cloud
}  // namespace google
