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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_CONNECTION_H

#include "google/cloud/tpu/v1/internal/tpu_retry_traits.h"
#include "google/cloud/tpu/v1/internal/tpu_stub.h"
#include "google/cloud/tpu/v1/tpu_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace tpu_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using TpuRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    tpu_v1_internal::TpuRetryTraits>;

using TpuLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        tpu_v1_internal::TpuRetryTraits>;

using TpuLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        tpu_v1_internal::TpuRetryTraits>;

/**
 * The `TpuConnection` object for `TpuClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `TpuClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `TpuClient`.
 *
 * To create a concrete instance, see `MakeTpuConnection()`.
 *
 * For mocking, see `tpu_v1_mocks::MockTpuConnection`.
 */
class TpuConnection {
 public:
  virtual ~TpuConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::tpu::v1::Node> ListNodes(
      google::cloud::tpu::v1::ListNodesRequest request);

  virtual StatusOr<google::cloud::tpu::v1::Node> GetNode(
      google::cloud::tpu::v1::GetNodeRequest const& request);

  virtual future<StatusOr<google::cloud::tpu::v1::Node>> CreateNode(
      google::cloud::tpu::v1::CreateNodeRequest const& request);

  virtual future<StatusOr<google::cloud::tpu::v1::Node>> DeleteNode(
      google::cloud::tpu::v1::DeleteNodeRequest const& request);

  virtual future<StatusOr<google::cloud::tpu::v1::Node>> ReimageNode(
      google::cloud::tpu::v1::ReimageNodeRequest const& request);

  virtual future<StatusOr<google::cloud::tpu::v1::Node>> StopNode(
      google::cloud::tpu::v1::StopNodeRequest const& request);

  virtual future<StatusOr<google::cloud::tpu::v1::Node>> StartNode(
      google::cloud::tpu::v1::StartNodeRequest const& request);

  virtual StreamRange<google::cloud::tpu::v1::TensorFlowVersion>
  ListTensorFlowVersions(
      google::cloud::tpu::v1::ListTensorFlowVersionsRequest request);

  virtual StatusOr<google::cloud::tpu::v1::TensorFlowVersion>
  GetTensorFlowVersion(
      google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request);

  virtual StreamRange<google::cloud::tpu::v1::AcceleratorType>
  ListAcceleratorTypes(
      google::cloud::tpu::v1::ListAcceleratorTypesRequest request);

  virtual StatusOr<google::cloud::tpu::v1::AcceleratorType> GetAcceleratorType(
      google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request);
};

/**
 * A factory function to construct an object of type `TpuConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of TpuClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `TpuConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::tpu_v1::TpuPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `TpuConnection` created by
 * this function.
 */
std::shared_ptr<TpuConnection> MakeTpuConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_CONNECTION_H
