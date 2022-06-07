/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/enums/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::test::fixtures::enums::SomeStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).reasonable_ref());
    case 2:
      return f(1, static_cast<T&&>(t).fine_ref());
    case 3:
      return f(2, static_cast<T&&>(t).questionable_ref());
    case 4:
      return f(3, static_cast<T&&>(t).tags_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::enums::SomeStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
