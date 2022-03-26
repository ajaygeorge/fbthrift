/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/service2AsyncClient.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/reflection_dep_B_types.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/reflection_dep_C_types.h"
#include "thrift/test/fatal_custom_types.h"

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

namespace test_cpp2 { namespace cpp_reflection {
class service2;
class service2AsyncProcessor;

class service2ServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};
}} // test_cpp2::cpp_reflection

namespace apache::thrift {
template <>
class ServiceHandler<::test_cpp2::cpp_reflection::service2> : public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "service2"; }

  typedef ::test_cpp2::cpp_reflection::service2AsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const override;

  virtual void methodA();
  virtual folly::Future<folly::Unit> future_methodA();
  virtual folly::SemiFuture<folly::Unit> semifuture_methodA();
  virtual void async_tm_methodA(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback);
  virtual void methodB(::std::int32_t /*x*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/);
  virtual folly::Future<folly::Unit> future_methodB(::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z);
  virtual folly::SemiFuture<folly::Unit> semifuture_methodB(::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z);
  virtual void async_tm_methodB(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int32_t p_x, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_y, double p_z);
  virtual ::std::int32_t methodC();
  virtual folly::Future<::std::int32_t> future_methodC();
  virtual folly::SemiFuture<::std::int32_t> semifuture_methodC();
  virtual void async_tm_methodC(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback);
  virtual ::std::int32_t methodD(::std::int32_t /*i*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/);
  virtual folly::Future<::std::int32_t> future_methodD(::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k);
  virtual folly::SemiFuture<::std::int32_t> semifuture_methodD(::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k);
  virtual void async_tm_methodD(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback, ::std::int32_t p_i, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_j, double p_k);
  virtual void methodE(::test_cpp2::cpp_reflection::struct2& /*_return*/);
  virtual folly::Future<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> future_methodE();
  virtual folly::SemiFuture<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> semifuture_methodE();
  virtual void async_tm_methodE(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>>> callback);
  virtual void methodF(::test_cpp2::cpp_reflection::struct2& /*_return*/, ::std::int32_t /*l*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/);
  virtual folly::Future<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> future_methodF(::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n);
  virtual folly::SemiFuture<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>> semifuture_methodF(::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n);
  virtual void async_tm_methodF(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::test_cpp2::cpp_reflection::struct2>>> callback, ::std::int32_t p_l, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> p_m, double p_n);
 private:
  static ::test_cpp2::cpp_reflection::service2ServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodA{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodB{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodC{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodD{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodE{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_methodF{apache::thrift::detail::si::InvocationType::AsyncTm};
};

} // namespace apache::thrift

namespace test_cpp2 { namespace cpp_reflection {
class service2SvIf : public ::apache::thrift::ServiceHandler<service2> {};
}} // test_cpp2::cpp_reflection
namespace test_cpp2 { namespace cpp_reflection {
class service2SvNull : public service2SvIf {
 public:
  void methodA() override;
  void methodB(::std::int32_t /*x*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) override;
  ::std::int32_t methodC() override;
  ::std::int32_t methodD(::std::int32_t /*i*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) override;
  void methodE(::test_cpp2::cpp_reflection::struct2& /*_return*/) override;
  void methodF(::test_cpp2::cpp_reflection::struct2& /*_return*/, ::std::int32_t /*l*/, std::unique_ptr<::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) override;
};

class service2AsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ::apache::thrift::ServiceHandler<::test_cpp2::cpp_reflection::service2>* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<service2AsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const service2AsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const service2AsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodA(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodA(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodA(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodA(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodA(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodB(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodB(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodB(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodB(apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodB(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodC(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodC(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodC(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodC(apache::thrift::ContextStack* ctx, ::std::int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodC(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodD(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodD(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodD(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodD(apache::thrift::ContextStack* ctx, ::std::int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodD(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodE(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodE(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodE(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodE(apache::thrift::ContextStack* ctx, ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodE(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_methodF(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_methodF(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodF(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_methodF(apache::thrift::ContextStack* ctx, ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodF(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  service2AsyncProcessor(::apache::thrift::ServiceHandler<::test_cpp2::cpp_reflection::service2>* iface) :
      iface_(iface) {}
  ~service2AsyncProcessor() override {}

  apache::thrift::SelectPoolResult selectResourcePool(apache::thrift::ServerRequest const& request,
    const apache::thrift::AsyncProcessorFactory::MethodMetadata&) const override {
    return iface_->selectResourcePool(request);
  }
};

}} // test_cpp2::cpp_reflection
