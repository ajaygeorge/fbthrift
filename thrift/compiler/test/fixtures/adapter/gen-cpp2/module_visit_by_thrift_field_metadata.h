/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::facebook::thrift::test::Foo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).intField_ref());
    case 2:
      return f(1, static_cast<T&&>(t).optionalIntField_ref());
    case 3:
      return f(2, static_cast<T&&>(t).intFieldWithDefault_ref());
    case 4:
      return f(3, static_cast<T&&>(t).setField_ref());
    case 5:
      return f(4, static_cast<T&&>(t).optionalSetField_ref());
    case 6:
      return f(5, static_cast<T&&>(t).mapField_ref());
    case 7:
      return f(6, static_cast<T&&>(t).optionalMapField_ref());
    case 8:
      return f(7, static_cast<T&&>(t).binaryField_ref());
    case 9:
      return f(8, static_cast<T&&>(t).longField_ref());
    case 10:
      return f(9, static_cast<T&&>(t).adaptedLongField_ref());
    case 11:
      return f(10, static_cast<T&&>(t).doubleAdaptedField_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Foo");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Baz> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).intField_ref());
    case 4:
      return f(1, static_cast<T&&>(t).setField_ref());
    case 6:
      return f(2, static_cast<T&&>(t).mapField_ref());
    case 8:
      return f(3, static_cast<T&&>(t).binaryField_ref());
    case 9:
      return f(4, static_cast<T&&>(t).longField_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Baz");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::detail::DirectlyAdapted> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::detail::DirectlyAdapted");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Bar> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).structField_ref());
    case 2:
      return f(1, static_cast<T&&>(t).optionalStructField_ref());
    case 3:
      return f(2, static_cast<T&&>(t).structListField_ref());
    case 4:
      return f(3, static_cast<T&&>(t).optionalStructListField_ref());
    case 5:
      return f(4, static_cast<T&&>(t).unionField_ref());
    case 6:
      return f(5, static_cast<T&&>(t).optionalUnionField_ref());
    case 7:
      return f(6, static_cast<T&&>(t).adaptedStructField_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Bar");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::StructWithFieldAdapter> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).shared_field_ref());
    case 3:
      return f(2, static_cast<T&&>(t).opt_shared_field_ref());
    case 4:
      return f(3, static_cast<T&&>(t).opt_boxed_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::StructWithFieldAdapter");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::TerseAdaptedFields> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).int_field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).string_field_ref());
    case 3:
      return f(2, static_cast<T&&>(t).set_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::TerseAdaptedFields");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::A> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::A");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::B> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).a_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::B");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Config> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).path_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Config");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::MyStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).set_string_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::MyStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
