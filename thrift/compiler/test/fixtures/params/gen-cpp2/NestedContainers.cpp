/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.h"
#include "thrift/compiler/test/fixtures/params/gen-cpp2/NestedContainers.tcc"
#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::getProcessor() {
  return std::make_unique<::cpp2::NestedContainersAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::cpp2::NestedContainers>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::cpp2::NestedContainers>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::cpp2::NestedContainersAsyncProcessor>();
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::cpp2::NestedContainersServiceInfoHolder apache::thrift::ServiceHandler<::cpp2::NestedContainers>::__fbthrift_serviceInfoHolder;


void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mapList");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::semifuture_mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_mapList.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  mapList(std::move(p_foo));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::future_mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_mapList.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_mapList(std::move(p_foo)), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::async_tm_mapList(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> p_foo) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_mapList.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_mapList.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_mapList(std::move(p_foo));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_mapList(std::move(p_foo));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        mapList(std::move(p_foo));
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("mapSet");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::semifuture_mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_mapSet.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  mapSet(std::move(p_foo));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::future_mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_mapSet.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_mapSet(std::move(p_foo)), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::async_tm_mapSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> p_foo) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_mapSet.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_mapSet.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_mapSet(std::move(p_foo));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_mapSet(std::move(p_foo));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        mapSet(std::move(p_foo));
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("listMap");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::semifuture_listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_listMap.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  listMap(std::move(p_foo));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::future_listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_listMap.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_listMap(std::move(p_foo)), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::async_tm_listMap(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> p_foo) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_listMap.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_listMap.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_listMap(std::move(p_foo));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_listMap(std::move(p_foo));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        listMap(std::move(p_foo));
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("listSet");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::semifuture_listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_listSet.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  listSet(std::move(p_foo));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::future_listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_listSet.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_listSet(std::move(p_foo)), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::async_tm_listSet(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> p_foo) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_listSet.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_listSet.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_listSet(std::move(p_foo));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_listSet(std::move(p_foo));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        listSet(std::move(p_foo));
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> /*foo*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("turtles");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::semifuture_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_turtles.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  turtles(std::move(p_foo));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::NestedContainers>::future_turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> p_foo) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_turtles.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_turtles(std::move(p_foo)), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::NestedContainers>::async_tm_turtles(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> p_foo) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_turtles.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_turtles.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_turtles(std::move(p_foo));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_turtles(std::move(p_foo));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        turtles(std::move(p_foo));
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace cpp2 {

void NestedContainersSvNull::mapList(std::unique_ptr<::std::map<::std::int32_t, ::std::vector<::std::int32_t>>> /*foo*/) {
  return;
}

void NestedContainersSvNull::mapSet(std::unique_ptr<::std::map<::std::int32_t, ::std::set<::std::int32_t>>> /*foo*/) {
  return;
}

void NestedContainersSvNull::listMap(std::unique_ptr<::std::vector<::std::map<::std::int32_t, ::std::int32_t>>> /*foo*/) {
  return;
}

void NestedContainersSvNull::listSet(std::unique_ptr<::std::vector<::std::set<::std::int32_t>>> /*foo*/) {
  return;
}

void NestedContainersSvNull::turtles(std::unique_ptr<::std::vector<::std::vector<::std::map<::std::int32_t, ::std::map<::std::int32_t, ::std::set<::std::int32_t>>>>>> /*foo*/) {
  return;
}


const char* NestedContainersAsyncProcessor::getServiceName() {
  return "NestedContainers";
}

void NestedContainersAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::NestedContainers>>::gen(response);
}

void NestedContainersAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void NestedContainersAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void NestedContainersAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const NestedContainersAsyncProcessor::ProcessMap& NestedContainersAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const NestedContainersAsyncProcessor::ProcessMap NestedContainersAsyncProcessor::kOwnProcessMap_ {
  {"mapList",
    {&NestedContainersAsyncProcessor::setUpAndProcess_mapList<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::setUpAndProcess_mapList<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_mapList<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_mapList<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"mapSet",
    {&NestedContainersAsyncProcessor::setUpAndProcess_mapSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::setUpAndProcess_mapSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_mapSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_mapSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"listMap",
    {&NestedContainersAsyncProcessor::setUpAndProcess_listMap<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::setUpAndProcess_listMap<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_listMap<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_listMap<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"listSet",
    {&NestedContainersAsyncProcessor::setUpAndProcess_listSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::setUpAndProcess_listSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_listSet<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_listSet<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"turtles",
    {&NestedContainersAsyncProcessor::setUpAndProcess_turtles<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::setUpAndProcess_turtles<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_turtles<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &NestedContainersAsyncProcessor::executeRequest_turtles<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& NestedContainersServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap NestedContainersServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"mapList",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "NestedContainers.mapList",
     std::nullopt}},
  {"mapSet",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "NestedContainers.mapSet",
     std::nullopt}},
  {"listMap",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "NestedContainers.listMap",
     std::nullopt}},
  {"listSet",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "NestedContainers.listSet",
     std::nullopt}},
  {"turtles",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "NestedContainers.turtles",
     std::nullopt}},
  };

  return requestInfoMap;
}
} // cpp2
