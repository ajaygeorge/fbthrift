/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <vector>

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_metadata.h"

namespace extra {
namespace svc {
class ExtraService;
class ExtraServiceSvIf;
}} // namespace extra::svc

namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class StructMetadata<::extra::svc::containerStruct2> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class ServiceMetadata<::apache::thrift::ServiceHandler<::extra::svc::ExtraService>> {
 public:
  static void gen(ThriftServiceMetadataResponse& response);
 private:
  static const ThriftServiceContextRef* genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services);

  template <typename T>
  friend class ServiceMetadata;

  static void gen_simple_function(ThriftMetadata& metadata, ThriftService& context);
  static void gen_throws_function(ThriftMetadata& metadata, ThriftService& context);
  static void gen_throws_function2(ThriftMetadata& metadata, ThriftService& context);
  static void gen_throws_function3(ThriftMetadata& metadata, ThriftService& context);
  static void gen_oneway_void_ret(ThriftMetadata& metadata, ThriftService& context);
  static void gen_oneway_void_ret_i32_i32_i32_i32_i32_param(ThriftMetadata& metadata, ThriftService& context);
  static void gen_oneway_void_ret_map_setlist_param(ThriftMetadata& metadata, ThriftService& context);
  static void gen_oneway_void_ret_struct_param(ThriftMetadata& metadata, ThriftService& context);
  static void gen_oneway_void_ret_listunion_param(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::extra::svc::ExtraServiceSvIf> final
    : public ServiceMetadata<::apache::thrift::ServiceHandler<::extra::svc::ExtraService>> {};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
