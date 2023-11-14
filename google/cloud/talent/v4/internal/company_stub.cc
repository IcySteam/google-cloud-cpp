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
// source: google/cloud/talent/v4/company_service.proto

#include "google/cloud/talent/v4/internal/company_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/talent/v4/company_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CompanyServiceStub::~CompanyServiceStub() = default;

StatusOr<google::cloud::talent::v4::Company>
DefaultCompanyServiceStub::CreateCompany(
    grpc::ClientContext& context,
    google::cloud::talent::v4::CreateCompanyRequest const& request) {
  google::cloud::talent::v4::Company response;
  auto status = grpc_stub_->CreateCompany(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::talent::v4::Company>
DefaultCompanyServiceStub::GetCompany(
    grpc::ClientContext& context,
    google::cloud::talent::v4::GetCompanyRequest const& request) {
  google::cloud::talent::v4::Company response;
  auto status = grpc_stub_->GetCompany(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::talent::v4::Company>
DefaultCompanyServiceStub::UpdateCompany(
    grpc::ClientContext& context,
    google::cloud::talent::v4::UpdateCompanyRequest const& request) {
  google::cloud::talent::v4::Company response;
  auto status = grpc_stub_->UpdateCompany(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultCompanyServiceStub::DeleteCompany(
    grpc::ClientContext& context,
    google::cloud::talent::v4::DeleteCompanyRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteCompany(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::talent::v4::ListCompaniesResponse>
DefaultCompanyServiceStub::ListCompanies(
    grpc::ClientContext& context,
    google::cloud::talent::v4::ListCompaniesRequest const& request) {
  google::cloud::talent::v4::ListCompaniesResponse response;
  auto status = grpc_stub_->ListCompanies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
