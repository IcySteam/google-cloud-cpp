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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/v1/internal/key_management_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/kms/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyManagementServiceStub::~KeyManagementServiceStub() = default;

StatusOr<google::cloud::kms::v1::ListKeyRingsResponse>
DefaultKeyManagementServiceStub::ListKeyRings(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListKeyRingsRequest const& request) {
  google::cloud::kms::v1::ListKeyRingsResponse response;
  auto status = grpc_stub_->ListKeyRings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::ListCryptoKeysResponse>
DefaultKeyManagementServiceStub::ListCryptoKeys(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListCryptoKeysRequest const& request) {
  google::cloud::kms::v1::ListCryptoKeysResponse response;
  auto status = grpc_stub_->ListCryptoKeys(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::ListCryptoKeyVersionsResponse>
DefaultKeyManagementServiceStub::ListCryptoKeyVersions(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListCryptoKeyVersionsRequest const& request) {
  google::cloud::kms::v1::ListCryptoKeyVersionsResponse response;
  auto status = grpc_stub_->ListCryptoKeyVersions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::ListImportJobsResponse>
DefaultKeyManagementServiceStub::ListImportJobs(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListImportJobsRequest const& request) {
  google::cloud::kms::v1::ListImportJobsResponse response;
  auto status = grpc_stub_->ListImportJobs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::KeyRing>
DefaultKeyManagementServiceStub::GetKeyRing(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetKeyRingRequest const& request) {
  google::cloud::kms::v1::KeyRing response;
  auto status = grpc_stub_->GetKeyRing(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKey>
DefaultKeyManagementServiceStub::GetCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetCryptoKeyRequest const& request) {
  google::cloud::kms::v1::CryptoKey response;
  auto status = grpc_stub_->GetCryptoKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
DefaultKeyManagementServiceStub::GetCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) {
  google::cloud::kms::v1::CryptoKeyVersion response;
  auto status = grpc_stub_->GetCryptoKeyVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::PublicKey>
DefaultKeyManagementServiceStub::GetPublicKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetPublicKeyRequest const& request) {
  google::cloud::kms::v1::PublicKey response;
  auto status = grpc_stub_->GetPublicKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::ImportJob>
DefaultKeyManagementServiceStub::GetImportJob(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetImportJobRequest const& request) {
  google::cloud::kms::v1::ImportJob response;
  auto status = grpc_stub_->GetImportJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::KeyRing>
DefaultKeyManagementServiceStub::CreateKeyRing(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateKeyRingRequest const& request) {
  google::cloud::kms::v1::KeyRing response;
  auto status = grpc_stub_->CreateKeyRing(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKey>
DefaultKeyManagementServiceStub::CreateCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateCryptoKeyRequest const& request) {
  google::cloud::kms::v1::CryptoKey response;
  auto status = grpc_stub_->CreateCryptoKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
DefaultKeyManagementServiceStub::CreateCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request) {
  google::cloud::kms::v1::CryptoKeyVersion response;
  auto status =
      grpc_stub_->CreateCryptoKeyVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
DefaultKeyManagementServiceStub::ImportCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request) {
  google::cloud::kms::v1::CryptoKeyVersion response;
  auto status =
      grpc_stub_->ImportCryptoKeyVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::ImportJob>
DefaultKeyManagementServiceStub::CreateImportJob(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateImportJobRequest const& request) {
  google::cloud::kms::v1::ImportJob response;
  auto status = grpc_stub_->CreateImportJob(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKey>
DefaultKeyManagementServiceStub::UpdateCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) {
  google::cloud::kms::v1::CryptoKey response;
  auto status = grpc_stub_->UpdateCryptoKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
DefaultKeyManagementServiceStub::UpdateCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request) {
  google::cloud::kms::v1::CryptoKeyVersion response;
  auto status =
      grpc_stub_->UpdateCryptoKeyVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKey>
DefaultKeyManagementServiceStub::UpdateCryptoKeyPrimaryVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
        request) {
  google::cloud::kms::v1::CryptoKey response;
  auto status =
      grpc_stub_->UpdateCryptoKeyPrimaryVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
DefaultKeyManagementServiceStub::DestroyCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request) {
  google::cloud::kms::v1::CryptoKeyVersion response;
  auto status =
      grpc_stub_->DestroyCryptoKeyVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
DefaultKeyManagementServiceStub::RestoreCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request) {
  google::cloud::kms::v1::CryptoKeyVersion response;
  auto status =
      grpc_stub_->RestoreCryptoKeyVersion(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
DefaultKeyManagementServiceStub::Encrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::EncryptRequest const& request) {
  google::cloud::kms::v1::EncryptResponse response;
  auto status = grpc_stub_->Encrypt(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
DefaultKeyManagementServiceStub::Decrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::DecryptRequest const& request) {
  google::cloud::kms::v1::DecryptResponse response;
  auto status = grpc_stub_->Decrypt(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::RawEncryptResponse>
DefaultKeyManagementServiceStub::RawEncrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::RawEncryptRequest const& request) {
  google::cloud::kms::v1::RawEncryptResponse response;
  auto status = grpc_stub_->RawEncrypt(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::RawDecryptResponse>
DefaultKeyManagementServiceStub::RawDecrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::RawDecryptRequest const& request) {
  google::cloud::kms::v1::RawDecryptResponse response;
  auto status = grpc_stub_->RawDecrypt(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
DefaultKeyManagementServiceStub::AsymmetricSign(
    grpc::ClientContext& context,
    google::cloud::kms::v1::AsymmetricSignRequest const& request) {
  google::cloud::kms::v1::AsymmetricSignResponse response;
  auto status = grpc_stub_->AsymmetricSign(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
DefaultKeyManagementServiceStub::AsymmetricDecrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::AsymmetricDecryptRequest const& request) {
  google::cloud::kms::v1::AsymmetricDecryptResponse response;
  auto status = grpc_stub_->AsymmetricDecrypt(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
DefaultKeyManagementServiceStub::MacSign(
    grpc::ClientContext& context,
    google::cloud::kms::v1::MacSignRequest const& request) {
  google::cloud::kms::v1::MacSignResponse response;
  auto status = grpc_stub_->MacSign(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
DefaultKeyManagementServiceStub::MacVerify(
    grpc::ClientContext& context,
    google::cloud::kms::v1::MacVerifyRequest const& request) {
  google::cloud::kms::v1::MacVerifyResponse response;
  auto status = grpc_stub_->MacVerify(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
DefaultKeyManagementServiceStub::GenerateRandomBytes(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GenerateRandomBytesRequest const& request) {
  google::cloud::kms::v1::GenerateRandomBytesResponse response;
  auto status = grpc_stub_->GenerateRandomBytes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google
