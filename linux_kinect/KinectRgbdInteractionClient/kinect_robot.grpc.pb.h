// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: kinect_robot.proto
#ifndef GRPC_kinect_5frobot_2eproto__INCLUDED
#define GRPC_kinect_5frobot_2eproto__INCLUDED

#include "kinect_robot.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace kinectrobot {

class KinectRobot GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status UpdateTimeStamp(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>> AsyncUpdateTimeStamp(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>>(AsyncUpdateTimeStampRaw(context, request, cq));
    }
    virtual ::grpc::Status ReturnCameraInfo(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::CameraInfo* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::CameraInfo>> AsyncReturnCameraInfo(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::CameraInfo>>(AsyncReturnCameraInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::kinectrobot::Points>> ReturnPoints(::grpc::ClientContext* context, const ::kinectrobot::Request& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::kinectrobot::Points>>(ReturnPointsRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::kinectrobot::Points>> AsyncReturnPoints(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::kinectrobot::Points>>(AsyncReturnPointsRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::kinectrobot::Pixels>> ReturnImage(::grpc::ClientContext* context, const ::kinectrobot::Request& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::kinectrobot::Pixels>>(ReturnImageRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::kinectrobot::Pixels>> AsyncReturnImage(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::kinectrobot::Pixels>>(AsyncReturnImageRaw(context, request, cq, tag));
    }
    virtual ::grpc::Status ReturnPixelBoundsFromSpaceBounds(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::BitStream* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::BitStream>> AsyncReturnPixelBoundsFromSpaceBounds(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::BitStream>>(AsyncReturnPixelBoundsFromSpaceBoundsRaw(context, request, cq));
    }
    virtual ::grpc::Status ReturnCognition(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::DataStream* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::DataStream>> AsyncReturnCognition(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::DataStream>>(AsyncReturnCognitionRaw(context, request, cq));
    }
    virtual ::grpc::Status SetStreamSettings(::grpc::ClientContext* context, const ::kinectrobot::StreamSettings& request, ::kinectrobot::Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>> AsyncSetStreamSettings(::grpc::ClientContext* context, const ::kinectrobot::StreamSettings& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>>(AsyncSetStreamSettingsRaw(context, request, cq));
    }
    virtual ::grpc::Status SendSpeech(::grpc::ClientContext* context, const ::kinectrobot::Speech& request, ::kinectrobot::Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>> AsyncSendSpeech(::grpc::ClientContext* context, const ::kinectrobot::Speech& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>>(AsyncSendSpeechRaw(context, request, cq));
    }
    virtual ::grpc::Status SetSTTBehavior(::grpc::ClientContext* context, const ::kinectrobot::VoiceTriggers& request, ::kinectrobot::Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>> AsyncSetSTTBehavior(::grpc::ClientContext* context, const ::kinectrobot::VoiceTriggers& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>>(AsyncSetSTTBehaviorRaw(context, request, cq));
    }
    virtual ::grpc::Status WebAgent(::grpc::ClientContext* context, const ::kinectrobot::UrlInfo& request, ::kinectrobot::Response* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>> AsyncWebAgent(::grpc::ClientContext* context, const ::kinectrobot::UrlInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>>(AsyncWebAgentRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>* AsyncUpdateTimeStampRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::CameraInfo>* AsyncReturnCameraInfoRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::kinectrobot::Points>* ReturnPointsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::kinectrobot::Points>* AsyncReturnPointsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientReaderInterface< ::kinectrobot::Pixels>* ReturnImageRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::kinectrobot::Pixels>* AsyncReturnImageRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::BitStream>* AsyncReturnPixelBoundsFromSpaceBoundsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::DataStream>* AsyncReturnCognitionRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>* AsyncSetStreamSettingsRaw(::grpc::ClientContext* context, const ::kinectrobot::StreamSettings& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>* AsyncSendSpeechRaw(::grpc::ClientContext* context, const ::kinectrobot::Speech& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>* AsyncSetSTTBehaviorRaw(::grpc::ClientContext* context, const ::kinectrobot::VoiceTriggers& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::kinectrobot::Response>* AsyncWebAgentRaw(::grpc::ClientContext* context, const ::kinectrobot::UrlInfo& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status UpdateTimeStamp(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::Response* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>> AsyncUpdateTimeStamp(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>>(AsyncUpdateTimeStampRaw(context, request, cq));
    }
    ::grpc::Status ReturnCameraInfo(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::CameraInfo* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::CameraInfo>> AsyncReturnCameraInfo(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::CameraInfo>>(AsyncReturnCameraInfoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::kinectrobot::Points>> ReturnPoints(::grpc::ClientContext* context, const ::kinectrobot::Request& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::kinectrobot::Points>>(ReturnPointsRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::kinectrobot::Points>> AsyncReturnPoints(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::kinectrobot::Points>>(AsyncReturnPointsRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientReader< ::kinectrobot::Pixels>> ReturnImage(::grpc::ClientContext* context, const ::kinectrobot::Request& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::kinectrobot::Pixels>>(ReturnImageRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::kinectrobot::Pixels>> AsyncReturnImage(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::kinectrobot::Pixels>>(AsyncReturnImageRaw(context, request, cq, tag));
    }
    ::grpc::Status ReturnPixelBoundsFromSpaceBounds(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::BitStream* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::BitStream>> AsyncReturnPixelBoundsFromSpaceBounds(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::BitStream>>(AsyncReturnPixelBoundsFromSpaceBoundsRaw(context, request, cq));
    }
    ::grpc::Status ReturnCognition(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::kinectrobot::DataStream* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::DataStream>> AsyncReturnCognition(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::DataStream>>(AsyncReturnCognitionRaw(context, request, cq));
    }
    ::grpc::Status SetStreamSettings(::grpc::ClientContext* context, const ::kinectrobot::StreamSettings& request, ::kinectrobot::Response* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>> AsyncSetStreamSettings(::grpc::ClientContext* context, const ::kinectrobot::StreamSettings& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>>(AsyncSetStreamSettingsRaw(context, request, cq));
    }
    ::grpc::Status SendSpeech(::grpc::ClientContext* context, const ::kinectrobot::Speech& request, ::kinectrobot::Response* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>> AsyncSendSpeech(::grpc::ClientContext* context, const ::kinectrobot::Speech& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>>(AsyncSendSpeechRaw(context, request, cq));
    }
    ::grpc::Status SetSTTBehavior(::grpc::ClientContext* context, const ::kinectrobot::VoiceTriggers& request, ::kinectrobot::Response* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>> AsyncSetSTTBehavior(::grpc::ClientContext* context, const ::kinectrobot::VoiceTriggers& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>>(AsyncSetSTTBehaviorRaw(context, request, cq));
    }
    ::grpc::Status WebAgent(::grpc::ClientContext* context, const ::kinectrobot::UrlInfo& request, ::kinectrobot::Response* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>> AsyncWebAgent(::grpc::ClientContext* context, const ::kinectrobot::UrlInfo& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>>(AsyncWebAgentRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* AsyncUpdateTimeStampRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::kinectrobot::CameraInfo>* AsyncReturnCameraInfoRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::kinectrobot::Points>* ReturnPointsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::kinectrobot::Points>* AsyncReturnPointsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::kinectrobot::Pixels>* ReturnImageRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::kinectrobot::Pixels>* AsyncReturnImageRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::kinectrobot::BitStream>* AsyncReturnPixelBoundsFromSpaceBoundsRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::kinectrobot::DataStream>* AsyncReturnCognitionRaw(::grpc::ClientContext* context, const ::kinectrobot::Request& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* AsyncSetStreamSettingsRaw(::grpc::ClientContext* context, const ::kinectrobot::StreamSettings& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* AsyncSendSpeechRaw(::grpc::ClientContext* context, const ::kinectrobot::Speech& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* AsyncSetSTTBehaviorRaw(::grpc::ClientContext* context, const ::kinectrobot::VoiceTriggers& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::kinectrobot::Response>* AsyncWebAgentRaw(::grpc::ClientContext* context, const ::kinectrobot::UrlInfo& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_UpdateTimeStamp_;
    const ::grpc::RpcMethod rpcmethod_ReturnCameraInfo_;
    const ::grpc::RpcMethod rpcmethod_ReturnPoints_;
    const ::grpc::RpcMethod rpcmethod_ReturnImage_;
    const ::grpc::RpcMethod rpcmethod_ReturnPixelBoundsFromSpaceBounds_;
    const ::grpc::RpcMethod rpcmethod_ReturnCognition_;
    const ::grpc::RpcMethod rpcmethod_SetStreamSettings_;
    const ::grpc::RpcMethod rpcmethod_SendSpeech_;
    const ::grpc::RpcMethod rpcmethod_SetSTTBehavior_;
    const ::grpc::RpcMethod rpcmethod_WebAgent_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status UpdateTimeStamp(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::Response* response);
    virtual ::grpc::Status ReturnCameraInfo(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::CameraInfo* response);
    virtual ::grpc::Status ReturnPoints(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::grpc::ServerWriter< ::kinectrobot::Points>* writer);
    virtual ::grpc::Status ReturnImage(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::grpc::ServerWriter< ::kinectrobot::Pixels>* writer);
    virtual ::grpc::Status ReturnPixelBoundsFromSpaceBounds(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::BitStream* response);
    virtual ::grpc::Status ReturnCognition(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::DataStream* response);
    virtual ::grpc::Status SetStreamSettings(::grpc::ServerContext* context, const ::kinectrobot::StreamSettings* request, ::kinectrobot::Response* response);
    virtual ::grpc::Status SendSpeech(::grpc::ServerContext* context, const ::kinectrobot::Speech* request, ::kinectrobot::Response* response);
    virtual ::grpc::Status SetSTTBehavior(::grpc::ServerContext* context, const ::kinectrobot::VoiceTriggers* request, ::kinectrobot::Response* response);
    virtual ::grpc::Status WebAgent(::grpc::ServerContext* context, const ::kinectrobot::UrlInfo* request, ::kinectrobot::Response* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateTimeStamp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_UpdateTimeStamp() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_UpdateTimeStamp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateTimeStamp(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateTimeStamp(::grpc::ServerContext* context, ::kinectrobot::Request* request, ::grpc::ServerAsyncResponseWriter< ::kinectrobot::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ReturnCameraInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ReturnCameraInfo() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ReturnCameraInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnCameraInfo(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::CameraInfo* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReturnCameraInfo(::grpc::ServerContext* context, ::kinectrobot::Request* request, ::grpc::ServerAsyncResponseWriter< ::kinectrobot::CameraInfo>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ReturnPoints : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ReturnPoints() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_ReturnPoints() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnPoints(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::grpc::ServerWriter< ::kinectrobot::Points>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReturnPoints(::grpc::ServerContext* context, ::kinectrobot::Request* request, ::grpc::ServerAsyncWriter< ::kinectrobot::Points>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(2, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ReturnImage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ReturnImage() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_ReturnImage() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnImage(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::grpc::ServerWriter< ::kinectrobot::Pixels>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReturnImage(::grpc::ServerContext* context, ::kinectrobot::Request* request, ::grpc::ServerAsyncWriter< ::kinectrobot::Pixels>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(3, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ReturnPixelBoundsFromSpaceBounds : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ReturnPixelBoundsFromSpaceBounds() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_ReturnPixelBoundsFromSpaceBounds() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnPixelBoundsFromSpaceBounds(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::BitStream* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReturnPixelBoundsFromSpaceBounds(::grpc::ServerContext* context, ::kinectrobot::Request* request, ::grpc::ServerAsyncResponseWriter< ::kinectrobot::BitStream>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ReturnCognition : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ReturnCognition() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_ReturnCognition() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnCognition(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::DataStream* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestReturnCognition(::grpc::ServerContext* context, ::kinectrobot::Request* request, ::grpc::ServerAsyncResponseWriter< ::kinectrobot::DataStream>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SetStreamSettings : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SetStreamSettings() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_SetStreamSettings() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetStreamSettings(::grpc::ServerContext* context, const ::kinectrobot::StreamSettings* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetStreamSettings(::grpc::ServerContext* context, ::kinectrobot::StreamSettings* request, ::grpc::ServerAsyncResponseWriter< ::kinectrobot::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(6, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SendSpeech : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SendSpeech() {
      ::grpc::Service::MarkMethodAsync(7);
    }
    ~WithAsyncMethod_SendSpeech() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSpeech(::grpc::ServerContext* context, const ::kinectrobot::Speech* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendSpeech(::grpc::ServerContext* context, ::kinectrobot::Speech* request, ::grpc::ServerAsyncResponseWriter< ::kinectrobot::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(7, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SetSTTBehavior : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SetSTTBehavior() {
      ::grpc::Service::MarkMethodAsync(8);
    }
    ~WithAsyncMethod_SetSTTBehavior() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetSTTBehavior(::grpc::ServerContext* context, const ::kinectrobot::VoiceTriggers* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetSTTBehavior(::grpc::ServerContext* context, ::kinectrobot::VoiceTriggers* request, ::grpc::ServerAsyncResponseWriter< ::kinectrobot::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(8, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_WebAgent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_WebAgent() {
      ::grpc::Service::MarkMethodAsync(9);
    }
    ~WithAsyncMethod_WebAgent() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WebAgent(::grpc::ServerContext* context, const ::kinectrobot::UrlInfo* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestWebAgent(::grpc::ServerContext* context, ::kinectrobot::UrlInfo* request, ::grpc::ServerAsyncResponseWriter< ::kinectrobot::Response>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(9, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_UpdateTimeStamp<WithAsyncMethod_ReturnCameraInfo<WithAsyncMethod_ReturnPoints<WithAsyncMethod_ReturnImage<WithAsyncMethod_ReturnPixelBoundsFromSpaceBounds<WithAsyncMethod_ReturnCognition<WithAsyncMethod_SetStreamSettings<WithAsyncMethod_SendSpeech<WithAsyncMethod_SetSTTBehavior<WithAsyncMethod_WebAgent<Service > > > > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_UpdateTimeStamp : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_UpdateTimeStamp() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_UpdateTimeStamp() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateTimeStamp(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ReturnCameraInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ReturnCameraInfo() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ReturnCameraInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnCameraInfo(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::CameraInfo* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ReturnPoints : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ReturnPoints() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_ReturnPoints() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnPoints(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::grpc::ServerWriter< ::kinectrobot::Points>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ReturnImage : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ReturnImage() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_ReturnImage() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnImage(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::grpc::ServerWriter< ::kinectrobot::Pixels>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ReturnPixelBoundsFromSpaceBounds : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ReturnPixelBoundsFromSpaceBounds() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_ReturnPixelBoundsFromSpaceBounds() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnPixelBoundsFromSpaceBounds(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::BitStream* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ReturnCognition : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ReturnCognition() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_ReturnCognition() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ReturnCognition(::grpc::ServerContext* context, const ::kinectrobot::Request* request, ::kinectrobot::DataStream* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SetStreamSettings : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SetStreamSettings() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_SetStreamSettings() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetStreamSettings(::grpc::ServerContext* context, const ::kinectrobot::StreamSettings* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SendSpeech : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SendSpeech() {
      ::grpc::Service::MarkMethodGeneric(7);
    }
    ~WithGenericMethod_SendSpeech() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendSpeech(::grpc::ServerContext* context, const ::kinectrobot::Speech* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SetSTTBehavior : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SetSTTBehavior() {
      ::grpc::Service::MarkMethodGeneric(8);
    }
    ~WithGenericMethod_SetSTTBehavior() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetSTTBehavior(::grpc::ServerContext* context, const ::kinectrobot::VoiceTriggers* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_WebAgent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_WebAgent() {
      ::grpc::Service::MarkMethodGeneric(9);
    }
    ~WithGenericMethod_WebAgent() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status WebAgent(::grpc::ServerContext* context, const ::kinectrobot::UrlInfo* request, ::kinectrobot::Response* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace kinectrobot


#endif  // GRPC_kinect_5frobot_2eproto__INCLUDED
