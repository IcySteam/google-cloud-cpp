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
// source: google/container/v1/cluster_service.proto

#include "google/cloud/container/internal/cluster_manager_auth_decorator.h"
#include <google/container/v1/cluster_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace container_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClusterManagerAuth::ClusterManagerAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ClusterManagerStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::container::v1::ListClustersResponse>
ClusterManagerAuth::ListClusters(
    grpc::ClientContext& context,
    google::container::v1::ListClustersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListClusters(context, request);
}

StatusOr<google::container::v1::Cluster> ClusterManagerAuth::GetCluster(
    grpc::ClientContext& context,
    google::container::v1::GetClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCluster(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::CreateCluster(
    grpc::ClientContext& context,
    google::container::v1::CreateClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCluster(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::UpdateCluster(
    grpc::ClientContext& context,
    google::container::v1::UpdateClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCluster(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::UpdateNodePool(
    grpc::ClientContext& context,
    google::container::v1::UpdateNodePoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateNodePool(context, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerAuth::SetNodePoolAutoscaling(
    grpc::ClientContext& context,
    google::container::v1::SetNodePoolAutoscalingRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetNodePoolAutoscaling(context, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerAuth::SetLoggingService(
    grpc::ClientContext& context,
    google::container::v1::SetLoggingServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetLoggingService(context, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerAuth::SetMonitoringService(
    grpc::ClientContext& context,
    google::container::v1::SetMonitoringServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetMonitoringService(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::SetAddonsConfig(
    grpc::ClientContext& context,
    google::container::v1::SetAddonsConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetAddonsConfig(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::SetLocations(
    grpc::ClientContext& context,
    google::container::v1::SetLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetLocations(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::UpdateMaster(
    grpc::ClientContext& context,
    google::container::v1::UpdateMasterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateMaster(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::SetMasterAuth(
    grpc::ClientContext& context,
    google::container::v1::SetMasterAuthRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetMasterAuth(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::DeleteCluster(
    grpc::ClientContext& context,
    google::container::v1::DeleteClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCluster(context, request);
}

StatusOr<google::container::v1::ListOperationsResponse>
ClusterManagerAuth::ListOperations(
    grpc::ClientContext& context,
    google::container::v1::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::GetOperation(
    grpc::ClientContext& context,
    google::container::v1::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, request);
}

Status ClusterManagerAuth::CancelOperation(
    grpc::ClientContext& context,
    google::container::v1::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, request);
}

StatusOr<google::container::v1::ServerConfig>
ClusterManagerAuth::GetServerConfig(
    grpc::ClientContext& context,
    google::container::v1::GetServerConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetServerConfig(context, request);
}

StatusOr<google::container::v1::GetJSONWebKeysResponse>
ClusterManagerAuth::GetJSONWebKeys(
    grpc::ClientContext& context,
    google::container::v1::GetJSONWebKeysRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetJSONWebKeys(context, request);
}

StatusOr<google::container::v1::ListNodePoolsResponse>
ClusterManagerAuth::ListNodePools(
    grpc::ClientContext& context,
    google::container::v1::ListNodePoolsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListNodePools(context, request);
}

StatusOr<google::container::v1::NodePool> ClusterManagerAuth::GetNodePool(
    grpc::ClientContext& context,
    google::container::v1::GetNodePoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetNodePool(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::CreateNodePool(
    grpc::ClientContext& context,
    google::container::v1::CreateNodePoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateNodePool(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::DeleteNodePool(
    grpc::ClientContext& context,
    google::container::v1::DeleteNodePoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteNodePool(context, request);
}

Status ClusterManagerAuth::CompleteNodePoolUpgrade(
    grpc::ClientContext& context,
    google::container::v1::CompleteNodePoolUpgradeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CompleteNodePoolUpgrade(context, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerAuth::RollbackNodePoolUpgrade(
    grpc::ClientContext& context,
    google::container::v1::RollbackNodePoolUpgradeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RollbackNodePoolUpgrade(context, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerAuth::SetNodePoolManagement(
    grpc::ClientContext& context,
    google::container::v1::SetNodePoolManagementRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetNodePoolManagement(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::SetLabels(
    grpc::ClientContext& context,
    google::container::v1::SetLabelsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetLabels(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::SetLegacyAbac(
    grpc::ClientContext& context,
    google::container::v1::SetLegacyAbacRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetLegacyAbac(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::StartIPRotation(
    grpc::ClientContext& context,
    google::container::v1::StartIPRotationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartIPRotation(context, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerAuth::CompleteIPRotation(
    grpc::ClientContext& context,
    google::container::v1::CompleteIPRotationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CompleteIPRotation(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::SetNodePoolSize(
    grpc::ClientContext& context,
    google::container::v1::SetNodePoolSizeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetNodePoolSize(context, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerAuth::SetNetworkPolicy(
    grpc::ClientContext& context,
    google::container::v1::SetNetworkPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetNetworkPolicy(context, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerAuth::SetMaintenancePolicy(
    grpc::ClientContext& context,
    google::container::v1::SetMaintenancePolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetMaintenancePolicy(context, request);
}

StatusOr<google::container::v1::ListUsableSubnetworksResponse>
ClusterManagerAuth::ListUsableSubnetworks(
    grpc::ClientContext& context,
    google::container::v1::ListUsableSubnetworksRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListUsableSubnetworks(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace container_internal
}  // namespace cloud
}  // namespace google
