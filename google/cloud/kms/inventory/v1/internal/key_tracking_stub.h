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
// source: google/cloud/kms/inventory/v1/key_tracking_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_INTERNAL_KEY_TRACKING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_INTERNAL_KEY_TRACKING_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/kms/inventory/v1/key_tracking_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace kms_inventory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class KeyTrackingServiceStub {
 public:
  virtual ~KeyTrackingServiceStub() = 0;

  virtual StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
  GetProtectedResourcesSummary(
      grpc::ClientContext& context,
      google::cloud::kms::inventory::v1::
          GetProtectedResourcesSummaryRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::kms::inventory::v1::SearchProtectedResourcesResponse>
  SearchProtectedResources(
      grpc::ClientContext& context,
      google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest const&
          request) = 0;
};

class DefaultKeyTrackingServiceStub : public KeyTrackingServiceStub {
 public:
  explicit DefaultKeyTrackingServiceStub(
      std::unique_ptr<
          google::cloud::kms::inventory::v1::KeyTrackingService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
  GetProtectedResourcesSummary(
      grpc::ClientContext& context,
      google::cloud::kms::inventory::v1::
          GetProtectedResourcesSummaryRequest const& request) override;

  StatusOr<google::cloud::kms::inventory::v1::SearchProtectedResourcesResponse>
  SearchProtectedResources(
      grpc::ClientContext& context,
      google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest const&
          request) override;

 private:
  std::unique_ptr<
      google::cloud::kms::inventory::v1::KeyTrackingService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_INTERNAL_KEY_TRACKING_STUB_H
