#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)

cimport patch.types as _patch_types

cimport module.types as _module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__MyData():
    cdef _module_types.MyData defaults = _module_types.MyData._fbthrift_create(
        constant_shared_ptr[_module_types.cMyData](
            default_inst[_module_types.cMyData]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyData",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="data1",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="data2",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyStruct():
    cdef _module_types.MyStruct defaults = _module_types.MyStruct._fbthrift_create(
        constant_shared_ptr[_module_types.cMyStruct](
            default_inst[_module_types.cMyStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="boolVal",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="byteVal",
            type=int,
            kind=__NumberType.BYTE,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="i16Val",
            type=int,
            kind=__NumberType.I16,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="i32Val",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="i64Val",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=6,
            name="floatVal",
            type=float,
            kind=__NumberType.FLOAT,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=7,
            name="doubleVal",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=8,
            name="stringVal",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=9,
            name="binaryVal",
            type=bytes,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=10,
            name="structVal",
            type=_module_types.MyData,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=11,
            name="optBoolVal",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=12,
            name="optByteVal",
            type=int,
            kind=__NumberType.BYTE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=13,
            name="optI16Val",
            type=int,
            kind=__NumberType.I16,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=14,
            name="optI32Val",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=15,
            name="optI64Val",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=16,
            name="optFloatVal",
            type=float,
            kind=__NumberType.FLOAT,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=17,
            name="optDoubleVal",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=18,
            name="optStringVal",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=19,
            name="optBinaryVal",
            type=bytes,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=20,
            name="optStructVal",
            type=_module_types.MyData,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=21,
            name="optListVal",
            type=_module_types.List__i16,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=22,
            name="optSetVal",
            type=_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=23,
            name="optMapVal",
            type=_module_types.Map__string_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyDataPatch():
    cdef _module_types.MyDataPatch defaults = _module_types.MyDataPatch._fbthrift_create(
        constant_shared_ptr[_module_types.cMyDataPatch](
            default_inst[_module_types.cMyDataPatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyDataPatch",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="data1",
            type=_patch_types.StringPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="data2",
            type=_patch_types.I32Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyDataValuePatch():
    cdef _module_types.MyDataValuePatch defaults = _module_types.MyDataValuePatch._fbthrift_create(
        constant_shared_ptr[_module_types.cMyDataValuePatch](
            default_inst[_module_types.cMyDataValuePatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyDataValuePatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::StructPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=_module_types.MyData,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
                """thrift.box""": "1",            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="patch",
            type=_module_types.MyDataPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__OptionalMyDataValuePatch():
    cdef _module_types.OptionalMyDataValuePatch defaults = _module_types.OptionalMyDataValuePatch._fbthrift_create(
        constant_shared_ptr[_module_types.cOptionalMyDataValuePatch](
            default_inst[_module_types.cOptionalMyDataValuePatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="OptionalMyDataValuePatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::OptionalPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="patch",
            type=_module_types.MyDataValuePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="ensure",
            type=_module_types.MyData,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
                """thrift.box""": "1",            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="patchAfter",
            type=_module_types.MyDataValuePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyStructPatch():
    cdef _module_types.MyStructPatch defaults = _module_types.MyStructPatch._fbthrift_create(
        constant_shared_ptr[_module_types.cMyStructPatch](
            default_inst[_module_types.cMyStructPatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyStructPatch",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="boolVal",
            type=_patch_types.BoolPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="byteVal",
            type=_patch_types.BytePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="i16Val",
            type=_patch_types.I16Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="i32Val",
            type=_patch_types.I32Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="i64Val",
            type=_patch_types.I64Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=6,
            name="floatVal",
            type=_patch_types.FloatPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=7,
            name="doubleVal",
            type=_patch_types.DoublePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=8,
            name="stringVal",
            type=_patch_types.StringPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=9,
            name="binaryVal",
            type=_patch_types.BinaryPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=10,
            name="structVal",
            type=_module_types.MyDataValuePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=11,
            name="optBoolVal",
            type=_patch_types.OptionalBoolPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=12,
            name="optByteVal",
            type=_patch_types.OptionalBytePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=13,
            name="optI16Val",
            type=_patch_types.OptionalI16Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=14,
            name="optI32Val",
            type=_patch_types.OptionalI32Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=15,
            name="optI64Val",
            type=_patch_types.OptionalI64Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=16,
            name="optFloatVal",
            type=_patch_types.OptionalFloatPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=17,
            name="optDoubleVal",
            type=_patch_types.OptionalDoublePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=18,
            name="optStringVal",
            type=_patch_types.OptionalStringPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=19,
            name="optBinaryVal",
            type=_patch_types.OptionalBinaryPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=20,
            name="optStructVal",
            type=_module_types.OptionalMyDataValuePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=21,
            name="optListVal",
            type=_module_types.OptionalMyStructField21Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=22,
            name="optSetVal",
            type=_module_types.OptionalMyStructField22Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=23,
            name="optMapVal",
            type=_module_types.OptionalMyStructField23Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyStructField21Patch():
    cdef _module_types.MyStructField21Patch defaults = _module_types.MyStructField21Patch._fbthrift_create(
        constant_shared_ptr[_module_types.cMyStructField21Patch](
            default_inst[_module_types.cMyStructField21Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyStructField21Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::ListPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=_module_types.List__i16,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="prepend",
            type=_module_types.List__i16,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="append",
            type=_module_types.List__i16,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__OptionalMyStructField21Patch():
    cdef _module_types.OptionalMyStructField21Patch defaults = _module_types.OptionalMyStructField21Patch._fbthrift_create(
        constant_shared_ptr[_module_types.cOptionalMyStructField21Patch](
            default_inst[_module_types.cOptionalMyStructField21Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="OptionalMyStructField21Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::OptionalPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="patch",
            type=_module_types.MyStructField21Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="ensure",
            type=_module_types.List__i16,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="patchAfter",
            type=_module_types.MyStructField21Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyStructField22Patch():
    cdef _module_types.MyStructField22Patch defaults = _module_types.MyStructField22Patch._fbthrift_create(
        constant_shared_ptr[_module_types.cMyStructField22Patch](
            default_inst[_module_types.cMyStructField22Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyStructField22Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::SetPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="remove",
            type=_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="add",
            type=_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__OptionalMyStructField22Patch():
    cdef _module_types.OptionalMyStructField22Patch defaults = _module_types.OptionalMyStructField22Patch._fbthrift_create(
        constant_shared_ptr[_module_types.cOptionalMyStructField22Patch](
            default_inst[_module_types.cOptionalMyStructField22Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="OptionalMyStructField22Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::OptionalPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="patch",
            type=_module_types.MyStructField22Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="ensure",
            type=_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="patchAfter",
            type=_module_types.MyStructField22Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyStructField23Patch():
    cdef _module_types.MyStructField23Patch defaults = _module_types.MyStructField23Patch._fbthrift_create(
        constant_shared_ptr[_module_types.cMyStructField23Patch](
            default_inst[_module_types.cMyStructField23Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyStructField23Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::MapPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=_module_types.Map__string_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=7,
            name="put",
            type=_module_types.Map__string_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__OptionalMyStructField23Patch():
    cdef _module_types.OptionalMyStructField23Patch defaults = _module_types.OptionalMyStructField23Patch._fbthrift_create(
        constant_shared_ptr[_module_types.cOptionalMyStructField23Patch](
            default_inst[_module_types.cOptionalMyStructField23Patch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="OptionalMyStructField23Patch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::OptionalPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="patch",
            type=_module_types.MyStructField23Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="ensure",
            type=_module_types.Map__string_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="patchAfter",
            type=_module_types.MyStructField23Patch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyStructValuePatch():
    cdef _module_types.MyStructValuePatch defaults = _module_types.MyStructValuePatch._fbthrift_create(
        constant_shared_ptr[_module_types.cMyStructValuePatch](
            default_inst[_module_types.cMyStructValuePatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyStructValuePatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::StructPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="assign",
            type=_module_types.MyStruct,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
                """thrift.box""": "1",            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="patch",
            type=_module_types.MyStructPatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__OptionalMyStructValuePatch():
    cdef _module_types.OptionalMyStructValuePatch defaults = _module_types.OptionalMyStructValuePatch._fbthrift_create(
        constant_shared_ptr[_module_types.cOptionalMyStructValuePatch](
            default_inst[_module_types.cOptionalMyStructValuePatch]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="OptionalMyStructValuePatch",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.adapter""": """::apache::thrift::op::detail::OptionalPatchAdapter""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="clear",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="patch",
            type=_module_types.MyStructValuePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=4,
            name="ensure",
            type=_module_types.MyStruct,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
                """thrift.box""": "1",            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="patchAfter",
            type=_module_types.MyStructValuePatch,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __ListSpec get_reflection__List__i16():
    return __ListSpec._fbthrift_create(
        value=int,
        kind=__NumberType.I16,
    )

cdef __SetSpec get_reflection__Set__string():
    return __SetSpec._fbthrift_create(
        value=str,
        kind=__NumberType.NOT_A_NUMBER,
     )

cdef __MapSpec get_reflection__Map__string_string():
    return __MapSpec._fbthrift_create(
        key=str,
        key_kind=__NumberType.NOT_A_NUMBER,
        value=str,
        value_kind=__NumberType.NOT_A_NUMBER,
    )

