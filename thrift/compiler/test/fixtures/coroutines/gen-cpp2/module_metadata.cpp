/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/coroutines/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);



void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_ping(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "ping";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getRandomData(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getRandomData";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_hasDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "hasDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_hasDataById_id_1;
  module_MyService_hasDataById_id_1.id_ref() = 1;
  module_MyService_hasDataById_id_1.name_ref() = "id";
  module_MyService_hasDataById_id_1.is_optional_ref() = false;
  auto module_MyService_hasDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_hasDataById_id_1_type->writeAndGenType(*module_MyService_hasDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_hasDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getDataById_id_1;
  module_MyService_getDataById_id_1.id_ref() = 1;
  module_MyService_getDataById_id_1.name_ref() = "id";
  module_MyService_getDataById_id_1.is_optional_ref() = false;
  auto module_MyService_getDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_getDataById_id_1_type->writeAndGenType(*module_MyService_getDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_getDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_putDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "putDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_id_1;
  module_MyService_putDataById_id_1.id_ref() = 1;
  module_MyService_putDataById_id_1.name_ref() = "id";
  module_MyService_putDataById_id_1.is_optional_ref() = false;
  auto module_MyService_putDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_putDataById_id_1_type->writeAndGenType(*module_MyService_putDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_putDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_data_2;
  module_MyService_putDataById_data_2.id_ref() = 2;
  module_MyService_putDataById_data_2.name_ref() = "data";
  module_MyService_putDataById_data_2.is_optional_ref() = false;
  auto module_MyService_putDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_putDataById_data_2_type->writeAndGenType(*module_MyService_putDataById_data_2.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_putDataById_data_2));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata_ref(), *response.services_ref());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module_ref() = *self->module_ref();
  context.service_info_ref() = response.metadata_ref()->services_ref()->at(*self->service_name_ref());
  response.context_ref() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name_ref() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_ping,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getRandomData,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_hasDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_getDataById,
    ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen_putDataById,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services_ref()->emplace("module.MyService", std::move(module_MyService));
  context.service_name_ref() = "module.MyService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
