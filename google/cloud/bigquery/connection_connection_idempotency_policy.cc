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
// source: google/cloud/bigquery/connection/v1/connection.proto

#include "google/cloud/bigquery/connection_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConnectionServiceConnectionIdempotencyPolicy::
    ~ConnectionServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultConnectionServiceConnectionIdempotencyPolicy
    : public ConnectionServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultConnectionServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<ConnectionServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultConnectionServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency CreateConnection(
      google::cloud::bigquery::connection::v1::CreateConnectionRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetConnection(
      google::cloud::bigquery::connection::v1::GetConnectionRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListConnections(
      google::cloud::bigquery::connection::v1::ListConnectionsRequest)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateConnection(
      google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteConnection(
      google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&)
      override {
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
};
}  // namespace

std::unique_ptr<ConnectionServiceConnectionIdempotencyPolicy>
MakeDefaultConnectionServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultConnectionServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
