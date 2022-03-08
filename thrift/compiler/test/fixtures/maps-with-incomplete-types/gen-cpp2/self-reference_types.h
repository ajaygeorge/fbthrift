/**
 * Autogenerated by Thrift for src/self-reference.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <thrift/lib/cpp2/type/Tag.h>


namespace apache {
namespace thrift {
namespace tag {
struct some_map;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_some_map
#define APACHE_THRIFT_ACCESSOR_some_map
APACHE_THRIFT_DEFINE_ACCESSOR(some_map);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace apache { namespace thrift { namespace test {
class A;
}}} // apache::thrift::test
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace apache { namespace thrift { namespace test {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
}}} // apache::thrift::test
namespace apache { namespace thrift { namespace test {
class A final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = A;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  A() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  A(apache::thrift::FragileConstructor, ::std::map<::std::int32_t, ::apache::thrift::test::A> some_map__arg);

  A(A&&) noexcept;

  A(const A& src);


  A& operator=(A&&) noexcept;
  A& operator=(const A& src);
 private:
  ::std::map<::std::int32_t, ::apache::thrift::test::A> __fbthrift_field_some_map;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const A&) const;
  bool operator<(const A&) const;

  template <typename..., typename T = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> some_map_ref() const& {
    return {this->__fbthrift_field_some_map, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> some_map_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_some_map), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> some_map_ref() & {
    return {this->__fbthrift_field_some_map, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> some_map_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_some_map), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> some_map() const& {
    return {this->__fbthrift_field_some_map, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> some_map() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_some_map), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> some_map() & {
    return {this->__fbthrift_field_some_map, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> some_map() && {
    return {static_cast<T&&>(this->__fbthrift_field_some_map), __isset.at(0), __isset.bit(0)};
  }
  const ::std::map<::std::int32_t, ::apache::thrift::test::A>* get_some_map() const&;
  ::std::map<::std::int32_t, ::apache::thrift::test::A>* get_some_map() &;
  ::std::map<::std::int32_t, ::apache::thrift::test::A>* get_some_map() && = delete;

  template <typename T_A_some_map_struct_setter = ::std::map<::std::int32_t, ::apache::thrift::test::A>>
  [[deprecated("Use `FOO.some_map_ref() = BAR;` instead of `FOO.set_some_map(BAR);`")]]
  ::std::map<::std::int32_t, ::apache::thrift::test::A>& set_some_map(T_A_some_map_struct_setter&& some_map_) {
    some_map_ref() = std::forward<T_A_some_map_struct_setter>(some_map_);
    return __fbthrift_field_some_map;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<A>;
  friend void swap(A& a, A& b);
};

template <class Protocol_>
unsigned long A::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::test
