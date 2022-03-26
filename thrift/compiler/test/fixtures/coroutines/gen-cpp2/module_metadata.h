/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/coroutines/gen-cpp2/module_types.h"

namespace cpp2 {
class MyService;
class MyServiceSvIf;
} // namespace cpp2

namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_ping(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getRandomData(ThriftMetadata& metadata, ThriftService& context);
  static void gen_hasDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getDataById(ThriftMetadata& metadata, ThriftService& context);
  static void gen_putDataById(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::cpp2::MyServiceSvIf> final
    : public ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>> {};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
