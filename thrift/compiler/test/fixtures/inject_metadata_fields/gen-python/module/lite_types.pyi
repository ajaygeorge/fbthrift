#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions

import facebook.thrift.annotation.internal.lite_types

import foo.lite_types


class Fields(_fbthrift_py3lite_types.Struct):
    injected_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> Fields: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...


class FieldsInjectedToEmptyStruct(_fbthrift_py3lite_types.Struct):
    injected_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> FieldsInjectedToEmptyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...


class FieldsInjectedToStruct(_fbthrift_py3lite_types.Struct):
    string_field: _typing.Final[str] = ...
    injected_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        string_field: _typing.Optional[str]=...,
        injected_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        string_field: _typing.Optional[str]=...,
        injected_field: _typing.Optional[str]=...
    ) -> FieldsInjectedToStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str]]]: ...


class FieldsInjectedWithIncludedStruct(_fbthrift_py3lite_types.Struct):
    string_field: _typing.Final[str] = ...
    injected_field: _typing.Final[str] = ...
    injected_structured_annotation_field: _typing.Final[_typing.Optional[str]] = ...
    injected_unstructured_annotation_field: _typing.Final[_typing.Optional[str]] = ...
    def __init__(
        self, *,
        string_field: _typing.Optional[str]=...,
        injected_field: _typing.Optional[str]=...,
        injected_structured_annotation_field: _typing.Optional[str]=...,
        injected_unstructured_annotation_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        string_field: _typing.Optional[str]=...,
        injected_field: _typing.Optional[str]=...,
        injected_structured_annotation_field: _typing.Optional[str]=...,
        injected_unstructured_annotation_field: _typing.Optional[str]=...
    ) -> FieldsInjectedWithIncludedStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str, str, str]]]: ...