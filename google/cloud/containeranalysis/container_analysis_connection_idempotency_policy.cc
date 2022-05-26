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
// source: google/devtools/containeranalysis/v1/containeranalysis.proto

#include "google/cloud/containeranalysis/container_analysis_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace containeranalysis {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ContainerAnalysisConnectionIdempotencyPolicy::
    ~ContainerAnalysisConnectionIdempotencyPolicy() = default;

namespace {
class DefaultContainerAnalysisConnectionIdempotencyPolicy
    : public ContainerAnalysisConnectionIdempotencyPolicy {
 public:
  ~DefaultContainerAnalysisConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<ContainerAnalysisConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultContainerAnalysisConnectionIdempotencyPolicy>(*this);
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

  Idempotency GetVulnerabilityOccurrencesSummary(
      google::devtools::containeranalysis::v1::
          GetVulnerabilityOccurrencesSummaryRequest const&) override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<ContainerAnalysisConnectionIdempotencyPolicy>
MakeDefaultContainerAnalysisConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultContainerAnalysisConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis
}  // namespace cloud
}  // namespace google
