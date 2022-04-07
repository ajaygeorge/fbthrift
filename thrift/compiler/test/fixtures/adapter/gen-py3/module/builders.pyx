#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class Foo_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.Foo

    def __iter__(self):
        yield "intField", self.intField
        yield "optionalIntField", self.optionalIntField
        yield "intFieldWithDefault", self.intFieldWithDefault
        yield "setField", self.setField
        yield "optionalSetField", self.optionalSetField
        yield "mapField", self.mapField
        yield "optionalMapField", self.optionalMapField
        yield "binaryField", self.binaryField
        yield "longField", self.longField

cdef class Baz_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.Baz

    def __iter__(self):
        yield "intField", self.intField
        yield "setField", self.setField
        yield "mapField", self.mapField
        yield "binaryField", self.binaryField
        yield "longField", self.longField

cdef class Bar_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.Bar

    def __iter__(self):
        yield "structField", self.structField
        yield "optionalStructField", self.optionalStructField
        yield "structListField", self.structListField
        yield "optionalStructListField", self.optionalStructListField
        yield "unionField", self.unionField
        yield "optionalUnionField", self.optionalUnionField

cdef class StructWithFieldAdapter_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithFieldAdapter

    def __iter__(self):
        yield "field", self.field
        yield "shared_field", self.shared_field
        yield "opt_shared_field", self.opt_shared_field
        yield "opt_boxed_field", self.opt_boxed_field

