/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/FooServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"
#include "thrift/annotation/gen-cpp2/hack_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace test { namespace fixtures { namespace basic {
class FooService;
class FooServiceAsyncProcessor;

class FooServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
}}} // test::fixtures::basic

namespace apache::thrift {
template <>
class ServiceHandler<::test::fixtures::basic::FooService> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "FooService"; }

  static const char* __fbthrift_thrift_uri() {
    return "test.dev/fixtures/basic/FooService";
  }

  typedef ::test::fixtures::basic::FooServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
 private:
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const;
 public:

  virtual void simple_rpc();
  virtual folly::Future<folly::Unit> future_simple_rpc();
  virtual folly::SemiFuture<folly::Unit> semifuture_simple_rpc();
  virtual void async_tm_simple_rpc(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
 private:
  static ::test::fixtures::basic::FooServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_simple_rpc{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace test { namespace fixtures { namespace basic {
using FooServiceSvIf [[deprecated("Use apache::thrift::ServiceHandler<FooService> instead")]] = ::apache::thrift::ServiceHandler<FooService>;
}}} // test::fixtures::basic
namespace test { namespace fixtures { namespace basic {
class FooServiceSvNull : public ::apache::thrift::ServiceHandler<FooService> {
 public:
  void simple_rpc() override;
};

class FooServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<FooServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const FooServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const FooServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_simple_rpc(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_simple_rpc(apache::thrift::ServerRequest&& serverRequest);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_simple_rpc(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_simple_rpc(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  FooServiceAsyncProcessor(::apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>* iface) :
      iface_(iface) {}
  ~FooServiceAsyncProcessor() override {}
};

}}} // test::fixtures::basic
