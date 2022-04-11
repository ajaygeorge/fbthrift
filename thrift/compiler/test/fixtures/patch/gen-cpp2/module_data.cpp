/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/patch/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::MyData>::fields_names = {{
  "data1",
  "data2",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::MyData>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::MyData>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 23> TStructDataStorage<::cpp2::MyStruct>::fields_names = {{
  "boolVal",
  "byteVal",
  "i16Val",
  "i32Val",
  "i64Val",
  "floatVal",
  "doubleVal",
  "stringVal",
  "binaryVal",
  "structVal",
  "optBoolVal",
  "optByteVal",
  "optI16Val",
  "optI32Val",
  "optI64Val",
  "optFloatVal",
  "optDoubleVal",
  "optStringVal",
  "optBinaryVal",
  "optStructVal",
  "optListVal",
  "optSetVal",
  "optMapVal",
}};
const std::array<int16_t, 23> TStructDataStorage<::cpp2::MyStruct>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
}};
const std::array<protocol::TType, 23> TStructDataStorage<::cpp2::MyStruct>::fields_types = {{
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I32,
  TType::T_I64,
  TType::T_FLOAT,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I32,
  TType::T_I64,
  TType::T_FLOAT,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::MyDataPatch>::fields_names = {{
  "data1",
  "data2",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::MyDataPatch>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::MyDataPatch>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::MyDataValuePatch>::fields_names = {{
  "assign",
  "clear",
  "patch",
}};
const std::array<int16_t, 3> TStructDataStorage<::cpp2::MyDataValuePatch>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::MyDataValuePatch>::fields_types = {{
  TType::T_STRUCT,
  TType::T_BOOL,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::OptionalMyDataValuePatch>::fields_names = {{
  "clear",
  "patch",
  "ensure",
  "patchAfter",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::OptionalMyDataValuePatch>::fields_ids = {{
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::OptionalMyDataValuePatch>::fields_types = {{
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::MyStructField21Patch>::fields_names = {{
  "assign",
  "clear",
  "prepend",
  "append",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::MyStructField21Patch>::fields_ids = {{
  1,
  2,
  4,
  5,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::MyStructField21Patch>::fields_types = {{
  TType::T_LIST,
  TType::T_BOOL,
  TType::T_LIST,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::OptionalMyStructField21Patch>::fields_names = {{
  "clear",
  "patch",
  "ensure",
  "patchAfter",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::OptionalMyStructField21Patch>::fields_ids = {{
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::OptionalMyStructField21Patch>::fields_types = {{
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::MyStructField22Patch>::fields_names = {{
  "assign",
  "clear",
  "remove",
  "add",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::MyStructField22Patch>::fields_ids = {{
  1,
  2,
  4,
  5,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::MyStructField22Patch>::fields_types = {{
  TType::T_SET,
  TType::T_BOOL,
  TType::T_SET,
  TType::T_SET,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::OptionalMyStructField22Patch>::fields_names = {{
  "clear",
  "patch",
  "ensure",
  "patchAfter",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::OptionalMyStructField22Patch>::fields_ids = {{
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::OptionalMyStructField22Patch>::fields_types = {{
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_SET,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::MyStructField23Patch>::fields_names = {{
  "assign",
  "clear",
  "put",
}};
const std::array<int16_t, 3> TStructDataStorage<::cpp2::MyStructField23Patch>::fields_ids = {{
  1,
  2,
  7,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::MyStructField23Patch>::fields_types = {{
  TType::T_MAP,
  TType::T_BOOL,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::OptionalMyStructField23Patch>::fields_names = {{
  "clear",
  "patch",
  "ensure",
  "patchAfter",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::OptionalMyStructField23Patch>::fields_ids = {{
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::OptionalMyStructField23Patch>::fields_types = {{
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_MAP,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 23> TStructDataStorage<::cpp2::MyStructPatch>::fields_names = {{
  "boolVal",
  "byteVal",
  "i16Val",
  "i32Val",
  "i64Val",
  "floatVal",
  "doubleVal",
  "stringVal",
  "binaryVal",
  "structVal",
  "optBoolVal",
  "optByteVal",
  "optI16Val",
  "optI32Val",
  "optI64Val",
  "optFloatVal",
  "optDoubleVal",
  "optStringVal",
  "optBinaryVal",
  "optStructVal",
  "optListVal",
  "optSetVal",
  "optMapVal",
}};
const std::array<int16_t, 23> TStructDataStorage<::cpp2::MyStructPatch>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
}};
const std::array<protocol::TType, 23> TStructDataStorage<::cpp2::MyStructPatch>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::MyStructValuePatch>::fields_names = {{
  "assign",
  "clear",
  "patch",
}};
const std::array<int16_t, 3> TStructDataStorage<::cpp2::MyStructValuePatch>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::MyStructValuePatch>::fields_types = {{
  TType::T_STRUCT,
  TType::T_BOOL,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::OptionalMyStructValuePatch>::fields_names = {{
  "clear",
  "patch",
  "ensure",
  "patchAfter",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::OptionalMyStructValuePatch>::fields_ids = {{
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::OptionalMyStructValuePatch>::fields_types = {{
  TType::T_BOOL,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

} // namespace thrift
} // namespace apache
