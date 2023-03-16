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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_V1_CONNECTION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_V1_CONNECTION_CLIENT_H

#include "google/cloud/bigquery/connection/v1/connection_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_connection_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages external data source connections and credentials.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ConnectionServiceClient {
 public:
  explicit ConnectionServiceClient(
      std::shared_ptr<ConnectionServiceConnection> connection,
      Options opts = {});
  ~ConnectionServiceClient();

  ///@{
  /// @name Copy and move support
  ConnectionServiceClient(ConnectionServiceClient const&) = default;
  ConnectionServiceClient& operator=(ConnectionServiceClient const&) = default;
  ConnectionServiceClient(ConnectionServiceClient&&) = default;
  ConnectionServiceClient& operator=(ConnectionServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ConnectionServiceClient const& a,
                         ConnectionServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ConnectionServiceClient const& a,
                         ConnectionServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a new connection.
  ///
  /// @param parent  Required. Parent resource name.
  ///  Must be in the format `projects/{project_id}/locations/{location_id}`
  /// @param connection  Required. Connection to create.
  /// @param connection_id  Optional. Connection id that should be assigned to
  /// the created connection.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::connection::v1::Connection,google/cloud/bigquery/connection/v1/connection.proto#L223}
  ///
  /// [google.cloud.bigquery.connection.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L223}
  /// [google.cloud.bigquery.connection.v1.CreateConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L130}
  ///
  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  CreateConnection(
      std::string const& parent,
      google::cloud::bigquery::connection::v1::Connection const& connection,
      std::string const& connection_id, Options opts = {});

  ///
  /// Creates a new connection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::connection::v1::CreateConnectionRequest,google/cloud/bigquery/connection/v1/connection.proto#L130}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::connection::v1::Connection,google/cloud/bigquery/connection/v1/connection.proto#L223}
  ///
  /// [google.cloud.bigquery.connection.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L223}
  /// [google.cloud.bigquery.connection.v1.CreateConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L130}
  ///
  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  CreateConnection(
      google::cloud::bigquery::connection::v1::CreateConnectionRequest const&
          request,
      Options opts = {});

  ///
  /// Returns specified connection.
  ///
  /// @param name  Required. Name of the requested connection, for example:
  ///  `projects/{project_id}/locations/{location_id}/connections/{connection_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::connection::v1::Connection,google/cloud/bigquery/connection/v1/connection.proto#L223}
  ///
  /// [google.cloud.bigquery.connection.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L223}
  /// [google.cloud.bigquery.connection.v1.GetConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L149}
  ///
  StatusOr<google::cloud::bigquery::connection::v1::Connection> GetConnection(
      std::string const& name, Options opts = {});

  ///
  /// Returns specified connection.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::connection::v1::GetConnectionRequest,google/cloud/bigquery/connection/v1/connection.proto#L149}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::connection::v1::Connection,google/cloud/bigquery/connection/v1/connection.proto#L223}
  ///
  /// [google.cloud.bigquery.connection.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L223}
  /// [google.cloud.bigquery.connection.v1.GetConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L149}
  ///
  StatusOr<google::cloud::bigquery::connection::v1::Connection> GetConnection(
      google::cloud::bigquery::connection::v1::GetConnectionRequest const&
          request,
      Options opts = {});

  ///
  /// Returns a list of connections in the given project.
  ///
  /// @param parent  Required. Parent resource name.
  ///  Must be in the form: `projects/{project_id}/locations/{location_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::connection::v1::Connection,google/cloud/bigquery/connection/v1/connection.proto#L223}
  ///
  /// [google.cloud.bigquery.connection.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L223}
  /// [google.cloud.bigquery.connection.v1.ListConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L162}
  ///
  StreamRange<google::cloud::bigquery::connection::v1::Connection>
  ListConnections(std::string const& parent, Options opts = {});

  ///
  /// Returns a list of connections in the given project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::connection::v1::ListConnectionsRequest,google/cloud/bigquery/connection/v1/connection.proto#L162}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::connection::v1::Connection,google/cloud/bigquery/connection/v1/connection.proto#L223}
  ///
  /// [google.cloud.bigquery.connection.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L223}
  /// [google.cloud.bigquery.connection.v1.ListConnectionsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L162}
  ///
  StreamRange<google::cloud::bigquery::connection::v1::Connection>
  ListConnections(
      google::cloud::bigquery::connection::v1::ListConnectionsRequest request,
      Options opts = {});

  ///
  /// Updates the specified connection. For security reasons, also resets
  /// credential if connection properties are in the update field mask.
  ///
  /// @param name  Required. Name of the connection to update, for example:
  ///  `projects/{project_id}/locations/{location_id}/connections/{connection_id}`
  /// @param connection  Required. Connection containing the updated fields.
  /// @param update_mask  Required. Update mask for the connection fields to be
  /// updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::connection::v1::Connection,google/cloud/bigquery/connection/v1/connection.proto#L223}
  ///
  /// [google.cloud.bigquery.connection.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L223}
  /// [google.cloud.bigquery.connection.v1.UpdateConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L191}
  ///
  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  UpdateConnection(
      std::string const& name,
      google::cloud::bigquery::connection::v1::Connection const& connection,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified connection. For security reasons, also resets
  /// credential if connection properties are in the update field mask.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::connection::v1::UpdateConnectionRequest,google/cloud/bigquery/connection/v1/connection.proto#L191}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::connection::v1::Connection,google/cloud/bigquery/connection/v1/connection.proto#L223}
  ///
  /// [google.cloud.bigquery.connection.v1.Connection]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L223}
  /// [google.cloud.bigquery.connection.v1.UpdateConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L191}
  ///
  StatusOr<google::cloud::bigquery::connection::v1::Connection>
  UpdateConnection(
      google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes connection and associated credential.
  ///
  /// @param name  Required. Name of the deleted connection, for example:
  ///  `projects/{project_id}/locations/{location_id}/connections/{connection_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.connection.v1.DeleteConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L210}
  ///
  Status DeleteConnection(std::string const& name, Options opts = {});

  ///
  /// Deletes connection and associated credential.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::connection::v1::DeleteConnectionRequest,google/cloud/bigquery/connection/v1/connection.proto#L210}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.connection.v1.DeleteConnectionRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/connection/v1/connection.proto#L210}
  ///
  Status DeleteConnection(
      google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&
          request,
      Options opts = {});

  ///
  /// Gets the access control policy for a resource.
  /// Returns an empty policy if the resource exists and does not have a policy
  /// set.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param options  OPTIONAL: A `GetPolicyOptions` object for specifying
  /// options to
  ///  `GetIamPolicy`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L98}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L98}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      std::string const& resource,
      google::iam::v1::GetPolicyOptions const& options, Options opts = {});

  ///
  /// Gets the access control policy for a resource.
  /// Returns an empty policy if the resource exists and does not have a policy
  /// set.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L98}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L98}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy.
  ///
  /// Can return `NOT_FOUND`, `INVALID_ARGUMENT`, and `PERMISSION_DENIED`
  /// errors.
  ///
  /// @param resource  REQUIRED: The resource for which the policy is being
  /// specified.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param policy  REQUIRED: The complete policy to be applied to the
  /// `resource`. The size of
  ///  the policy is limited to a few 10s of KB. An empty policy is a
  ///  valid policy but certain Cloud Platform services (such as Projects)
  ///  might reject them.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L98}
  ///
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L98}
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      std::string const& resource, google::iam::v1::Policy const& policy,
      Options opts = {});

  ///
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy.
  ///
  /// Can return `NOT_FOUND`, `INVALID_ARGUMENT`, and `PERMISSION_DENIED`
  /// errors.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L98}
  ///
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L98}
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns permissions that a caller has on the specified resource.
  /// If the resource does not exist, this will return an empty set of
  /// permissions, not a `NOT_FOUND` error.
  ///
  /// Note: This operation is designed to be used for building permission-aware
  /// UIs and command-line tools, not for authorization checking. This operation
  /// may "fail open" without warning.
  ///
  /// @param resource  REQUIRED: The resource for which the policy detail is
  /// being requested.
  ///  See the operation documentation for the appropriate value for this field.
  /// @param permissions  The set of permissions to check for the `resource`.
  /// Permissions with
  ///  wildcards (such as '*' or 'storage.*') are not allowed. For more
  ///  information see
  ///  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      std::string const& resource, std::vector<std::string> const& permissions,
      Options opts = {});

  ///
  /// Returns permissions that a caller has on the specified resource.
  /// If the resource does not exist, this will return an empty set of
  /// permissions, not a `NOT_FOUND` error.
  ///
  /// Note: This operation is designed to be used for building permission-aware
  /// UIs and command-line tools, not for authorization checking. This operation
  /// may "fail open" without warning.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ConnectionServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_connection_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_CONNECTION_V1_CONNECTION_CLIENT_H
