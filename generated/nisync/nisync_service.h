
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-SYNC Metadata
//---------------------------------------------------------------------
#ifndef NISYNC_GRPC_SERVICE_H
#define NISYNC_GRPC_SERVICE_H

#include <nisync.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nisync_library_interface.h"

namespace nisync_grpc {

class NiSyncService final : public NiSync::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiSyncService(
    NiSyncLibraryInterface* library,
    ResourceRepositorySharedPtr session_repository,
    const nidevice_grpc::FeatureToggles& feature_toggles = {});
  virtual ~NiSyncService();
  
  ::grpc::Status Init(::grpc::ServerContext* context, const InitRequest* request, InitResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status ErrorMessage(::grpc::ServerContext* context, const ErrorMessageRequest* request, ErrorMessageResponse* response) override;
  ::grpc::Status Reset(::grpc::ServerContext* context, const ResetRequest* request, ResetResponse* response) override;
  ::grpc::Status PersistConfig(::grpc::ServerContext* context, const PersistConfigRequest* request, PersistConfigResponse* response) override;
  ::grpc::Status SelfTest(::grpc::ServerContext* context, const SelfTestRequest* request, SelfTestResponse* response) override;
  ::grpc::Status RevisionQuery(::grpc::ServerContext* context, const RevisionQueryRequest* request, RevisionQueryResponse* response) override;
  ::grpc::Status ConnectTrigTerminals(::grpc::ServerContext* context, const ConnectTrigTerminalsRequest* request, ConnectTrigTerminalsResponse* response) override;
  ::grpc::Status DisconnectTrigTerminals(::grpc::ServerContext* context, const DisconnectTrigTerminalsRequest* request, DisconnectTrigTerminalsResponse* response) override;
  ::grpc::Status ConnectSWTrigToTerminal(::grpc::ServerContext* context, const ConnectSWTrigToTerminalRequest* request, ConnectSWTrigToTerminalResponse* response) override;
  ::grpc::Status DisconnectSWTrigFromTerminal(::grpc::ServerContext* context, const DisconnectSWTrigFromTerminalRequest* request, DisconnectSWTrigFromTerminalResponse* response) override;
  ::grpc::Status SendSoftwareTrigger(::grpc::ServerContext* context, const SendSoftwareTriggerRequest* request, SendSoftwareTriggerResponse* response) override;
  ::grpc::Status ConnectClkTerminals(::grpc::ServerContext* context, const ConnectClkTerminalsRequest* request, ConnectClkTerminalsResponse* response) override;
  ::grpc::Status DisconnectClkTerminals(::grpc::ServerContext* context, const DisconnectClkTerminalsRequest* request, DisconnectClkTerminalsResponse* response) override;
  ::grpc::Status MeasureFrequency(::grpc::ServerContext* context, const MeasureFrequencyRequest* request, MeasureFrequencyResponse* response) override;
  ::grpc::Status MeasureFrequencyEx(::grpc::ServerContext* context, const MeasureFrequencyExRequest* request, MeasureFrequencyExResponse* response) override;
  ::grpc::Status Start1588(::grpc::ServerContext* context, const Start1588Request* request, Start1588Response* response) override;
  ::grpc::Status Stop1588(::grpc::ServerContext* context, const Stop1588Request* request, Stop1588Response* response) override;
  ::grpc::Status Start8021AS(::grpc::ServerContext* context, const Start8021ASRequest* request, Start8021ASResponse* response) override;
  ::grpc::Status Stop8021AS(::grpc::ServerContext* context, const Stop8021ASRequest* request, Stop8021ASResponse* response) override;
  ::grpc::Status SetTime(::grpc::ServerContext* context, const SetTimeRequest* request, SetTimeResponse* response) override;
  ::grpc::Status GetTime(::grpc::ServerContext* context, const GetTimeRequest* request, GetTimeResponse* response) override;
  ::grpc::Status ResetFrequency(::grpc::ServerContext* context, const ResetFrequencyRequest* request, ResetFrequencyResponse* response) override;
  ::grpc::Status CreateFutureTimeEvent(::grpc::ServerContext* context, const CreateFutureTimeEventRequest* request, CreateFutureTimeEventResponse* response) override;
  ::grpc::Status ClearFutureTimeEvents(::grpc::ServerContext* context, const ClearFutureTimeEventsRequest* request, ClearFutureTimeEventsResponse* response) override;
  ::grpc::Status EnableTimeStampTrigger(::grpc::ServerContext* context, const EnableTimeStampTriggerRequest* request, EnableTimeStampTriggerResponse* response) override;
  ::grpc::Status EnableTimeStampTriggerWithDecimation(::grpc::ServerContext* context, const EnableTimeStampTriggerWithDecimationRequest* request, EnableTimeStampTriggerWithDecimationResponse* response) override;
  ::grpc::Status ReadTriggerTimeStamp(::grpc::ServerContext* context, const ReadTriggerTimeStampRequest* request, ReadTriggerTimeStampResponse* response) override;
  ::grpc::Status ReadMultipleTriggerTimeStamp(::grpc::ServerContext* context, const ReadMultipleTriggerTimeStampRequest* request, ReadMultipleTriggerTimeStampResponse* response) override;
  ::grpc::Status DisableTimeStampTrigger(::grpc::ServerContext* context, const DisableTimeStampTriggerRequest* request, DisableTimeStampTriggerResponse* response) override;
  ::grpc::Status CreateClock(::grpc::ServerContext* context, const CreateClockRequest* request, CreateClockResponse* response) override;
  ::grpc::Status ClearClock(::grpc::ServerContext* context, const ClearClockRequest* request, ClearClockResponse* response) override;
  ::grpc::Status SetTimeReferenceFreeRunning(::grpc::ServerContext* context, const SetTimeReferenceFreeRunningRequest* request, SetTimeReferenceFreeRunningResponse* response) override;
  ::grpc::Status SetTimeReferenceGPS(::grpc::ServerContext* context, const SetTimeReferenceGPSRequest* request, SetTimeReferenceGPSResponse* response) override;
  ::grpc::Status SetTimeReferenceIRIG(::grpc::ServerContext* context, const SetTimeReferenceIRIGRequest* request, SetTimeReferenceIRIGResponse* response) override;
  ::grpc::Status SetTimeReferencePPS(::grpc::ServerContext* context, const SetTimeReferencePPSRequest* request, SetTimeReferencePPSResponse* response) override;
  ::grpc::Status SetTimeReference1588OrdinaryClock(::grpc::ServerContext* context, const SetTimeReference1588OrdinaryClockRequest* request, SetTimeReference1588OrdinaryClockResponse* response) override;
  ::grpc::Status SetTimeReference8021AS(::grpc::ServerContext* context, const SetTimeReference8021ASRequest* request, SetTimeReference8021ASResponse* response) override;
  ::grpc::Status EnableGPSTimestamping(::grpc::ServerContext* context, const EnableGPSTimestampingRequest* request, EnableGPSTimestampingResponse* response) override;
  ::grpc::Status EnableIRIGTimestamping(::grpc::ServerContext* context, const EnableIRIGTimestampingRequest* request, EnableIRIGTimestampingResponse* response) override;
  ::grpc::Status ReadLastGPSTimestamp(::grpc::ServerContext* context, const ReadLastGPSTimestampRequest* request, ReadLastGPSTimestampResponse* response) override;
  ::grpc::Status ReadLastIRIGTimestamp(::grpc::ServerContext* context, const ReadLastIRIGTimestampRequest* request, ReadLastIRIGTimestampResponse* response) override;
  ::grpc::Status DisableGPSTimestamping(::grpc::ServerContext* context, const DisableGPSTimestampingRequest* request, DisableGPSTimestampingResponse* response) override;
  ::grpc::Status DisableIRIGTimestamping(::grpc::ServerContext* context, const DisableIRIGTimestampingRequest* request, DisableIRIGTimestampingResponse* response) override;
  ::grpc::Status GetVelocity(::grpc::ServerContext* context, const GetVelocityRequest* request, GetVelocityResponse* response) override;
  ::grpc::Status GetLocation(::grpc::ServerContext* context, const GetLocationRequest* request, GetLocationResponse* response) override;
  ::grpc::Status GetTimeReferenceNames(::grpc::ServerContext* context, const GetTimeReferenceNamesRequest* request, GetTimeReferenceNamesResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status SetAttributeViInt32(::grpc::ServerContext* context, const SetAttributeViInt32Request* request, SetAttributeViInt32Response* response) override;
  ::grpc::Status SetAttributeViReal64(::grpc::ServerContext* context, const SetAttributeViReal64Request* request, SetAttributeViReal64Response* response) override;
  ::grpc::Status SetAttributeViBoolean(::grpc::ServerContext* context, const SetAttributeViBooleanRequest* request, SetAttributeViBooleanResponse* response) override;
  ::grpc::Status SetAttributeViString(::grpc::ServerContext* context, const SetAttributeViStringRequest* request, SetAttributeViStringResponse* response) override;
  ::grpc::Status GetExtCalLastDateAndTime(::grpc::ServerContext* context, const GetExtCalLastDateAndTimeRequest* request, GetExtCalLastDateAndTimeResponse* response) override;
  ::grpc::Status GetExtCalLastTemp(::grpc::ServerContext* context, const GetExtCalLastTempRequest* request, GetExtCalLastTempResponse* response) override;
  ::grpc::Status GetExtCalRecommendedInterval(::grpc::ServerContext* context, const GetExtCalRecommendedIntervalRequest* request, GetExtCalRecommendedIntervalResponse* response) override;
  ::grpc::Status ChangeExtCalPassword(::grpc::ServerContext* context, const ChangeExtCalPasswordRequest* request, ChangeExtCalPasswordResponse* response) override;
  ::grpc::Status ReadCurrentTemperature(::grpc::ServerContext* context, const ReadCurrentTemperatureRequest* request, ReadCurrentTemperatureResponse* response) override;
  ::grpc::Status CalGetOscillatorVoltage(::grpc::ServerContext* context, const CalGetOscillatorVoltageRequest* request, CalGetOscillatorVoltageResponse* response) override;
  ::grpc::Status CalGetClk10PhaseVoltage(::grpc::ServerContext* context, const CalGetClk10PhaseVoltageRequest* request, CalGetClk10PhaseVoltageResponse* response) override;
  ::grpc::Status CalGetDDSStartPulsePhaseVoltage(::grpc::ServerContext* context, const CalGetDDSStartPulsePhaseVoltageRequest* request, CalGetDDSStartPulsePhaseVoltageResponse* response) override;
  ::grpc::Status CalGetDDSInitialPhase(::grpc::ServerContext* context, const CalGetDDSInitialPhaseRequest* request, CalGetDDSInitialPhaseResponse* response) override;
  ::grpc::Status InitExtCal(::grpc::ServerContext* context, const InitExtCalRequest* request, InitExtCalResponse* response) override;
  ::grpc::Status CloseExtCal(::grpc::ServerContext* context, const CloseExtCalRequest* request, CloseExtCalResponse* response) override;
  ::grpc::Status CalAdjustOscillatorVoltage(::grpc::ServerContext* context, const CalAdjustOscillatorVoltageRequest* request, CalAdjustOscillatorVoltageResponse* response) override;
  ::grpc::Status CalAdjustClk10PhaseVoltage(::grpc::ServerContext* context, const CalAdjustClk10PhaseVoltageRequest* request, CalAdjustClk10PhaseVoltageResponse* response) override;
  ::grpc::Status CalAdjustDDSStartPulsePhaseVoltage(::grpc::ServerContext* context, const CalAdjustDDSStartPulsePhaseVoltageRequest* request, CalAdjustDDSStartPulsePhaseVoltageResponse* response) override;
  ::grpc::Status CalAdjustDDSInitialPhase(::grpc::ServerContext* context, const CalAdjustDDSInitialPhaseRequest* request, CalAdjustDDSInitialPhaseResponse* response) override;

  bool is_enabled();
private:
  NiSyncLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;

  struct NiSyncFeatureToggles
  {
    using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
    NiSyncFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles);

    bool is_enabled;
  };

  NiSyncFeatureToggles feature_toggles_;
};

} // namespace nisync_grpc

#endif  // NISYNC_GRPC_SERVICE_H
