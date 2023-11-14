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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/security_settings.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecuritySettingsServiceStub {
 public:
  virtual ~SecuritySettingsServiceStub() = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  CreateSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  GetSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  UpdateSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::dialogflow::cx::v3::ListSecuritySettingsResponse>
  ListSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest const&
          request) = 0;

  virtual Status DeleteSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
          request) = 0;
};

class DefaultSecuritySettingsServiceStub : public SecuritySettingsServiceStub {
 public:
  explicit DefaultSecuritySettingsServiceStub(
      std::unique_ptr<google::cloud::dialogflow::cx::v3::
                          SecuritySettingsService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  CreateSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  GetSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  UpdateSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::ListSecuritySettingsResponse>
  ListSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest const&
          request) override;

  Status DeleteSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
          request) override;

 private:
  std::unique_ptr<
      google::cloud::dialogflow::cx::v3::SecuritySettingsService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_STUB_H
