/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "src/gen-py3/module/metadata.h"

namespace test {
namespace namespace_from_package {
namespace module {
::apache::thrift::metadata::ThriftMetadata module_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::StructMetadata<Foo>::gen(metadata);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::namespace_from_package::module::TestService>>::gen(response);
  return metadata;
}
} // namespace test
} // namespace namespace_from_package
} // namespace module