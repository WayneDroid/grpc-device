
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFSG-RESTRICTED.
//---------------------------------------------------------------------
#ifndef NIRFSG_RESTRICTED_GRPC_CLIENT_H
#define NIRFSG_RESTRICTED_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nirfsg_restricted.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nirfsg_restricted_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiRFSGRestricted::Stub>;
using namespace nidevice_grpc::experimental::client;


GetErrorResponse get_error(const StubPtr& stub, const nidevice_grpc::Session& vi);
ErrorMessageResponse error_message(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& error_code);
CreateDeembeddingSparameterTableResponse create_deembedding_sparameter_table(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& port, const std::string& table_name, const pb::int32& number_of_frequencies, const pb::int32& number_of_ports);
ConfigureSparameterTableFrequenciesResponse configure_sparameter_table_frequencies(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& port, const std::string& table_name, const std::vector<double>& frequencies);
ConfigureSparameterTableSparametersResponse configure_sparameter_table_sparameters(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& port, const std::string& table_name, const std::vector<nidevice_grpc::NIComplexNumber>& sparameter_table, const simple_variant<SParameterOrientation, pb::int32>& sparameter_orientation);

} // namespace nirfsg_restricted_grpc::experimental::client

#endif /* NIRFSG_RESTRICTED_GRPC_CLIENT_H */
