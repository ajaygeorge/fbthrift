#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions


import facebook.thrift.annotation.scope.thrift_types

import facebook.thrift.annotation.thrift.thrift_types


class GeneratePatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.GeneratePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/GeneratePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_GeneratePatch()



class GenerateOptionalPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.GenerateOptionalPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/GenerateOptionalPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_GenerateOptionalPatch()



class BoolPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "invert",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BoolPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BoolPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BoolPatch()



class BytePatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BytePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BytePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BytePatch()



class I16Patch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_py3lite_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I16Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I16Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I16Patch()



class I32Patch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I32Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I32Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I32Patch()



class I64Patch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.I64Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/I64Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_I64Patch()



class FloatPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_py3lite_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.FloatPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/FloatPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_FloatPatch()



class DoublePatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "add",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.DoublePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/DoublePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_DoublePatch()



class StringPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "prepend",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "append",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.StringPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/StringPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_StringPatch()



class BinaryPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "assign",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.BinaryPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/BinaryPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_BinaryPatch()



class OptionalBoolPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(BoolPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(BoolPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBoolPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBoolPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBoolPatch()



class OptionalBytePatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(BytePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_byte,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(BytePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBytePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBytePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBytePatch()



class OptionalI16Patch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(I16Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_i16,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(I16Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI16Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI16Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI16Patch()



class OptionalI32Patch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(I32Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(I32Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI32Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI32Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI32Patch()



class OptionalI64Patch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(I64Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(I64Patch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalI64Patch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalI64Patch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalI64Patch()



class OptionalFloatPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(FloatPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_float,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(FloatPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalFloatPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalFloatPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalFloatPatch()



class OptionalDoublePatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(DoublePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_double,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(DoublePatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalDoublePatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalDoublePatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalDoublePatch()



class OptionalStringPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(StringPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(StringPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalStringPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalStringPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalStringPatch()



class OptionalBinaryPatch(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            2,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "clear",  # name
            _fbthrift_py3lite_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            3,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patch",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(BinaryPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            4,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "ensure",  # name
            _fbthrift_py3lite_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
        (
            5,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "patchAfter",  # name
            lambda: _fbthrift_py3lite_types.StructTypeInfo(BinaryPatch),  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "patch.OptionalBinaryPatch"

    @staticmethod
    def __get_thrift_uri__():
        return "facebook.com/thrift/op/OptionalBinaryPatch"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_OptionalBinaryPatch()


# This unfortunately has to be down here to prevent circular imports
import apache.thrift.op.patch.thrift_metadata


def _fbthrift_metadata__struct_GeneratePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_GeneratePatch()
def _fbthrift_metadata__struct_GenerateOptionalPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_GenerateOptionalPatch()
def _fbthrift_metadata__struct_BoolPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BoolPatch()
def _fbthrift_metadata__struct_BytePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BytePatch()
def _fbthrift_metadata__struct_I16Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I16Patch()
def _fbthrift_metadata__struct_I32Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I32Patch()
def _fbthrift_metadata__struct_I64Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_I64Patch()
def _fbthrift_metadata__struct_FloatPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_FloatPatch()
def _fbthrift_metadata__struct_DoublePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_DoublePatch()
def _fbthrift_metadata__struct_StringPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_StringPatch()
def _fbthrift_metadata__struct_BinaryPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_BinaryPatch()
def _fbthrift_metadata__struct_OptionalBoolPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBoolPatch()
def _fbthrift_metadata__struct_OptionalBytePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBytePatch()
def _fbthrift_metadata__struct_OptionalI16Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI16Patch()
def _fbthrift_metadata__struct_OptionalI32Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI32Patch()
def _fbthrift_metadata__struct_OptionalI64Patch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalI64Patch()
def _fbthrift_metadata__struct_OptionalFloatPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalFloatPatch()
def _fbthrift_metadata__struct_OptionalDoublePatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalDoublePatch()
def _fbthrift_metadata__struct_OptionalStringPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalStringPatch()
def _fbthrift_metadata__struct_OptionalBinaryPatch():
    return apache.thrift.op.patch.thrift_metadata.gen_metadata_struct_OptionalBinaryPatch()

_fbthrift_all_structs = [
    GeneratePatch,
    GenerateOptionalPatch,
    BoolPatch,
    BytePatch,
    I16Patch,
    I32Patch,
    I64Patch,
    FloatPatch,
    DoublePatch,
    StringPatch,
    BinaryPatch,
    OptionalBoolPatch,
    OptionalBytePatch,
    OptionalI16Patch,
    OptionalI32Patch,
    OptionalI64Patch,
    OptionalFloatPatch,
    OptionalDoublePatch,
    OptionalStringPatch,
    OptionalBinaryPatch,
]
_fbthrift_py3lite_types.fill_specs(*_fbthrift_all_structs)
