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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/database_admin_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DatabaseAdminConnectionIdempotencyPolicy::
    ~DatabaseAdminConnectionIdempotencyPolicy() = default;

namespace {
class DefaultDatabaseAdminConnectionIdempotencyPolicy
    : public DatabaseAdminConnectionIdempotencyPolicy {
 public:
  ~DefaultDatabaseAdminConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultDatabaseAdminConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency ListDatabases(
      google::spanner::admin::database::v1::ListDatabasesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateDatabase(
      google::spanner::admin::database::v1::CreateDatabaseRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetDatabase(
      google::spanner::admin::database::v1::GetDatabaseRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateDatabaseDdl(
      google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DropDatabase(
      google::spanner::admin::database::v1::DropDatabaseRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetDatabaseDdl(
      google::spanner::admin::database::v1::GetDatabaseDdlRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override {
    return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                           : Idempotency::kIdempotent;
  }

  Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateBackup(
      google::spanner::admin::database::v1::CreateBackupRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CopyBackup(
      google::spanner::admin::database::v1::CopyBackupRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetBackup(
      google::spanner::admin::database::v1::GetBackupRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateBackup(
      google::spanner::admin::database::v1::UpdateBackupRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteBackup(
      google::spanner::admin::database::v1::DeleteBackupRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListBackups(
      google::spanner::admin::database::v1::ListBackupsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency RestoreDatabase(
      google::spanner::admin::database::v1::RestoreDatabaseRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListDatabaseOperations(
      google::spanner::admin::database::v1::ListDatabaseOperationsRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListBackupOperations(
      google::spanner::admin::database::v1::ListBackupOperationsRequest)
      override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<DatabaseAdminConnectionIdempotencyPolicy>
MakeDefaultDatabaseAdminConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultDatabaseAdminConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google
