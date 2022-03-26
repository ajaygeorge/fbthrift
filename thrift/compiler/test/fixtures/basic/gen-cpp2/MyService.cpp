/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/MyService.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/MyService.tcc"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::cpp2::MyService>::getProcessor() {
  return std::make_unique<::cpp2::MyServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::cpp2::MyService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::cpp2::MyService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::cpp2::MyServiceAsyncProcessor>();
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::cpp2::MyService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::cpp2::MyServiceServiceInfoHolder apache::thrift::ServiceHandler<::cpp2::MyService>::__fbthrift_serviceInfoHolder;


void apache::thrift::ServiceHandler<::cpp2::MyService>::ping() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("ping");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_ping() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  ping();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::future_ping() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_ping(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_ping.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_ping.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_ping();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_ping();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ping();
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

void apache::thrift::ServiceHandler<::cpp2::MyService>::getRandomData(::std::string& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getRandomData");
}

folly::SemiFuture<std::unique_ptr<::std::string>> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_getRandomData() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_getRandomData.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::string>();
  getRandomData(*ret);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::string>> apache::thrift::ServiceHandler<::cpp2::MyService>::future_getRandomData() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_getRandomData.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_getRandomData(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_getRandomData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_getRandomData.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_getRandomData.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_getRandomData();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_getRandomData();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::string _return;
        getRandomData(_return);
        callback->result(_return);
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

void apache::thrift::ServiceHandler<::cpp2::MyService>::sink(::std::int64_t /*sink*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("sink");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_sink(::std::int64_t p_sink) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_sink.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  sink(p_sink);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::future_sink(::std::int64_t p_sink) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_sink.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_sink(p_sink), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_sink(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int64_t p_sink) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_sink.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_sink.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_sink(p_sink);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_sink(p_sink);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        sink(p_sink);
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

void apache::thrift::ServiceHandler<::cpp2::MyService>::putDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("putDataById");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_putDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_putDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  putDataById(p_id, std::move(p_data));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::future_putDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_putDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_putDataById(p_id, std::move(p_data)), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_putDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_putDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_putDataById(p_id, std::move(p_data));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_putDataById(p_id, std::move(p_data));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        putDataById(p_id, std::move(p_data));
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

bool apache::thrift::ServiceHandler<::cpp2::MyService>::hasDataById(::std::int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("hasDataById");
}

folly::SemiFuture<bool> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_hasDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_hasDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return hasDataById(p_id);
}

folly::Future<bool> apache::thrift::ServiceHandler<::cpp2::MyService>::future_hasDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_hasDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_hasDataById(p_id), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, ::std::int64_t p_id) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_hasDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_hasDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_hasDataById(p_id);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_hasDataById(p_id);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(hasDataById(p_id));
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

void apache::thrift::ServiceHandler<::cpp2::MyService>::getDataById(::std::string& /*_return*/, ::std::int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("getDataById");
}

folly::SemiFuture<std::unique_ptr<::std::string>> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_getDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_getDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::string>();
  getDataById(*ret, p_id);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::string>> apache::thrift::ServiceHandler<::cpp2::MyService>::future_getDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_getDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_getDataById(p_id), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, ::std::int64_t p_id) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_getDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_getDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_getDataById(p_id);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_getDataById(p_id);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::string _return;
        getDataById(_return, p_id);
        callback->result(_return);
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

void apache::thrift::ServiceHandler<::cpp2::MyService>::deleteDataById(::std::int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("deleteDataById");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_deleteDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_deleteDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  deleteDataById(p_id);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::future_deleteDataById(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_deleteDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_deleteDataById(p_id), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_deleteDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, ::std::int64_t p_id) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_deleteDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_deleteDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_deleteDataById(p_id);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_deleteDataById(p_id);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        deleteDataById(p_id);
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

void apache::thrift::ServiceHandler<::cpp2::MyService>::lobDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("lobDataById");
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_lobDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_lobDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  lobDataById(p_id, std::move(p_data));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::future_lobDataById(::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_lobDataById.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_lobDataById(p_id, std::move(p_data)), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, ::std::int64_t p_id, std::unique_ptr<::std::string> p_data) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_lobDataById.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_lobDataById.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_lobDataById(p_id, std::move(p_data));
        apache::thrift::detail::si::async_tm_future_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_lobDataById(p_id, std::move(p_data));
        apache::thrift::detail::si::async_tm_semifuture_oneway(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        lobDataById(p_id, std::move(p_data));
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

void apache::thrift::ServiceHandler<::cpp2::MyService>::invalid_return_for_hack(::std::set<float>& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("invalid_return_for_hack");
}

folly::SemiFuture<std::unique_ptr<::std::set<float>>> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_invalid_return_for_hack() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_invalid_return_for_hack.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::set<float>>();
  invalid_return_for_hack(*ret);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::set<float>>> apache::thrift::ServiceHandler<::cpp2::MyService>::future_invalid_return_for_hack() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_invalid_return_for_hack.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_invalid_return_for_hack(), getInternalKeepAlive());
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_invalid_return_for_hack(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::set<float>>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_invalid_return_for_hack.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_invalid_return_for_hack.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_invalid_return_for_hack();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_invalid_return_for_hack();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::set<float> _return;
        invalid_return_for_hack(_return);
        callback->result(_return);
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

void MyServiceSvNull::ping() {
  return;
}

void MyServiceSvNull::getRandomData(::std::string& /*_return*/) {}

void MyServiceSvNull::sink(::std::int64_t /*sink*/) {
  return;
}

void MyServiceSvNull::putDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  return;
}

bool MyServiceSvNull::hasDataById(::std::int64_t /*id*/) {
  return 0;
}

void MyServiceSvNull::getDataById(::std::string& /*_return*/, ::std::int64_t /*id*/) {}

void MyServiceSvNull::deleteDataById(::std::int64_t /*id*/) {
  return;
}

void MyServiceSvNull::lobDataById(::std::int64_t /*id*/, std::unique_ptr<::std::string> /*data*/) {
  return;
}

void MyServiceSvNull::invalid_return_for_hack(::std::set<float>& /*_return*/) {}


const char* MyServiceAsyncProcessor::getServiceName() {
  return "MyService";
}

void MyServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen(response);
}

void MyServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void MyServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void MyServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::kOwnProcessMap_ {
  {"ping",
    {&MyServiceAsyncProcessor::setUpAndProcess_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_ping<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_ping<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"getRandomData",
    {&MyServiceAsyncProcessor::setUpAndProcess_getRandomData<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_getRandomData<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_getRandomData<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_getRandomData<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"sink",
    {&MyServiceAsyncProcessor::setUpAndProcess_sink<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_sink<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_sink<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_sink<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"putDataById",
    {&MyServiceAsyncProcessor::setUpAndProcess_putDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_putDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_putDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_putDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"hasDataById",
    {&MyServiceAsyncProcessor::setUpAndProcess_hasDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_hasDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_hasDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_hasDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"getDataById",
    {&MyServiceAsyncProcessor::setUpAndProcess_getDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_getDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_getDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_getDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"deleteDataById",
    {&MyServiceAsyncProcessor::setUpAndProcess_deleteDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_deleteDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_deleteDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_deleteDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"lobDataById",
    {&MyServiceAsyncProcessor::setUpAndProcess_lobDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_lobDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_lobDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_lobDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"invalid_return_for_hack",
    {&MyServiceAsyncProcessor::setUpAndProcess_invalid_return_for_hack<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_invalid_return_for_hack<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_invalid_return_for_hack<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_invalid_return_for_hack<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& MyServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap MyServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"ping",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.ping",
     std::nullopt}},
  {"getRandomData",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.getRandomData",
     std::nullopt}},
  {"sink",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.sink",
     std::nullopt}},
  {"putDataById",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.putDataById",
     std::nullopt}},
  {"hasDataById",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.hasDataById",
     std::nullopt}},
  {"getDataById",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.getDataById",
     std::nullopt}},
  {"deleteDataById",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.deleteDataById",
     std::nullopt}},
  {"lobDataById",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE,
     "MyService.lobDataById",
     std::nullopt}},
  {"invalid_return_for_hack",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.invalid_return_for_hack",
     std::nullopt}},
  };

  return requestInfoMap;
}
} // cpp2
