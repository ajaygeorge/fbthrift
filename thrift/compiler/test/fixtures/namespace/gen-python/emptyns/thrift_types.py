#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions



class Foo(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "MyInt",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "emptyns.Foo"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_Foo()


# This unfortunately has to be down here to prevent circular imports
import emptyns.thrift_metadata


def _fbthrift_metadata__struct_Foo():
    return emptyns.thrift_metadata.gen_metadata_struct_Foo()

_fbthrift_all_structs = [
    Foo,
]
_fbthrift_py3lite_types.fill_specs(*_fbthrift_all_structs)


class _fbthrift_TestService_init_args(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_py3lite_types.FieldQualifier.Unqualified, # qualifier
            "int1",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


class _fbthrift_TestService_init_result(metaclass=_fbthrift_py3lite_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_py3lite_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_py3lite_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter class
        ),
    )


_fbthrift_py3lite_types.fill_specs(
    _fbthrift_TestService_init_args,
    _fbthrift_TestService_init_result,
)
