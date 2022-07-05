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

#include "google/cloud/container/internal/cluster_manager_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/container/v1/cluster_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace container_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClusterManagerLogging::ClusterManagerLogging(
    std::shared_ptr<ClusterManagerStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::container::v1::ListClustersResponse>
ClusterManagerLogging::ListClusters(
    grpc::ClientContext& context,
    google::container::v1::ListClustersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::ListClustersRequest const& request) {
        return child_->ListClusters(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Cluster> ClusterManagerLogging::GetCluster(
    grpc::ClientContext& context,
    google::container::v1::GetClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::GetClusterRequest const& request) {
        return child_->GetCluster(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::CreateCluster(
    grpc::ClientContext& context,
    google::container::v1::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::CreateClusterRequest const& request) {
        return child_->CreateCluster(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::UpdateCluster(
    grpc::ClientContext& context,
    google::container::v1::UpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::UpdateClusterRequest const& request) {
        return child_->UpdateCluster(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::UpdateNodePool(
    grpc::ClientContext& context,
    google::container::v1::UpdateNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::UpdateNodePoolRequest const& request) {
        return child_->UpdateNodePool(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::SetNodePoolAutoscaling(
    grpc::ClientContext& context,
    google::container::v1::SetNodePoolAutoscalingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::container::v1::SetNodePoolAutoscalingRequest const& request) {
        return child_->SetNodePoolAutoscaling(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::SetLoggingService(
    grpc::ClientContext& context,
    google::container::v1::SetLoggingServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::SetLoggingServiceRequest const& request) {
        return child_->SetLoggingService(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::SetMonitoringService(
    grpc::ClientContext& context,
    google::container::v1::SetMonitoringServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::container::v1::SetMonitoringServiceRequest const& request) {
        return child_->SetMonitoringService(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::SetAddonsConfig(
    grpc::ClientContext& context,
    google::container::v1::SetAddonsConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::SetAddonsConfigRequest const& request) {
        return child_->SetAddonsConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::SetLocations(
    grpc::ClientContext& context,
    google::container::v1::SetLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::SetLocationsRequest const& request) {
        return child_->SetLocations(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::UpdateMaster(
    grpc::ClientContext& context,
    google::container::v1::UpdateMasterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::UpdateMasterRequest const& request) {
        return child_->UpdateMaster(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::SetMasterAuth(
    grpc::ClientContext& context,
    google::container::v1::SetMasterAuthRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::SetMasterAuthRequest const& request) {
        return child_->SetMasterAuth(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::DeleteCluster(
    grpc::ClientContext& context,
    google::container::v1::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::DeleteClusterRequest const& request) {
        return child_->DeleteCluster(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::ListOperationsResponse>
ClusterManagerLogging::ListOperations(
    grpc::ClientContext& context,
    google::container::v1::ListOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::ListOperationsRequest const& request) {
        return child_->ListOperations(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::GetOperation(
    grpc::ClientContext& context,
    google::container::v1::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::GetOperationRequest const& request) {
        return child_->GetOperation(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status ClusterManagerLogging::CancelOperation(
    grpc::ClientContext& context,
    google::container::v1::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::CancelOperationRequest const& request) {
        return child_->CancelOperation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::ServerConfig>
ClusterManagerLogging::GetServerConfig(
    grpc::ClientContext& context,
    google::container::v1::GetServerConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::GetServerConfigRequest const& request) {
        return child_->GetServerConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::GetJSONWebKeysResponse>
ClusterManagerLogging::GetJSONWebKeys(
    grpc::ClientContext& context,
    google::container::v1::GetJSONWebKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::GetJSONWebKeysRequest const& request) {
        return child_->GetJSONWebKeys(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::ListNodePoolsResponse>
ClusterManagerLogging::ListNodePools(
    grpc::ClientContext& context,
    google::container::v1::ListNodePoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::ListNodePoolsRequest const& request) {
        return child_->ListNodePools(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::NodePool> ClusterManagerLogging::GetNodePool(
    grpc::ClientContext& context,
    google::container::v1::GetNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::GetNodePoolRequest const& request) {
        return child_->GetNodePool(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::CreateNodePool(
    grpc::ClientContext& context,
    google::container::v1::CreateNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::CreateNodePoolRequest const& request) {
        return child_->CreateNodePool(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::DeleteNodePool(
    grpc::ClientContext& context,
    google::container::v1::DeleteNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::DeleteNodePoolRequest const& request) {
        return child_->DeleteNodePool(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status ClusterManagerLogging::CompleteNodePoolUpgrade(
    grpc::ClientContext& context,
    google::container::v1::CompleteNodePoolUpgradeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::CompleteNodePoolUpgradeRequest const&
                 request) {
        return child_->CompleteNodePoolUpgrade(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::RollbackNodePoolUpgrade(
    grpc::ClientContext& context,
    google::container::v1::RollbackNodePoolUpgradeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::RollbackNodePoolUpgradeRequest const&
                 request) {
        return child_->RollbackNodePoolUpgrade(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::SetNodePoolManagement(
    grpc::ClientContext& context,
    google::container::v1::SetNodePoolManagementRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::container::v1::SetNodePoolManagementRequest const& request) {
        return child_->SetNodePoolManagement(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::SetLabels(
    grpc::ClientContext& context,
    google::container::v1::SetLabelsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::SetLabelsRequest const& request) {
        return child_->SetLabels(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation> ClusterManagerLogging::SetLegacyAbac(
    grpc::ClientContext& context,
    google::container::v1::SetLegacyAbacRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::SetLegacyAbacRequest const& request) {
        return child_->SetLegacyAbac(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::StartIPRotation(
    grpc::ClientContext& context,
    google::container::v1::StartIPRotationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::StartIPRotationRequest const& request) {
        return child_->StartIPRotation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::CompleteIPRotation(
    grpc::ClientContext& context,
    google::container::v1::CompleteIPRotationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::CompleteIPRotationRequest const& request) {
        return child_->CompleteIPRotation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::SetNodePoolSize(
    grpc::ClientContext& context,
    google::container::v1::SetNodePoolSizeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::SetNodePoolSizeRequest const& request) {
        return child_->SetNodePoolSize(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::SetNetworkPolicy(
    grpc::ClientContext& context,
    google::container::v1::SetNetworkPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::container::v1::SetNetworkPolicyRequest const& request) {
        return child_->SetNetworkPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::Operation>
ClusterManagerLogging::SetMaintenancePolicy(
    grpc::ClientContext& context,
    google::container::v1::SetMaintenancePolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::container::v1::SetMaintenancePolicyRequest const& request) {
        return child_->SetMaintenancePolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::container::v1::ListUsableSubnetworksResponse>
ClusterManagerLogging::ListUsableSubnetworks(
    grpc::ClientContext& context,
    google::container::v1::ListUsableSubnetworksRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::container::v1::ListUsableSubnetworksRequest const& request) {
        return child_->ListUsableSubnetworks(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace container_internal
}  // namespace cloud
}  // namespace google
