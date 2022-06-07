/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.basic;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial", "unchecked" })
public class UnionToBeRenamed extends TUnion<UnionToBeRenamed> {
  private static final TStruct STRUCT_DESC = new TStruct("UnionToBeRenamed");
  private static final TField RESERVED_FIELD_FIELD_DESC = new TField("reserved_field", TType.I32, (short)1);

  public static final int RESERVED_FIELD = 1;

  public static final Map<Integer, FieldMetaData> metaDataMap = new HashMap<>();

  public UnionToBeRenamed() {
    super();
  }

  public UnionToBeRenamed(int setField, Object __value) {
    super(setField, __value);
  }

  public UnionToBeRenamed(UnionToBeRenamed other) {
    super(other);
  }

  public UnionToBeRenamed deepCopy() {
    return new UnionToBeRenamed(this);
  }

  public static UnionToBeRenamed reserved_field(Integer __value) {
    UnionToBeRenamed x = new UnionToBeRenamed();
    x.setReserved_field(__value);
    return x;
  }


  @Override
  protected Object readValue(TProtocol iprot, TField __field) throws TException {
    switch (__field.id) {
      case RESERVED_FIELD:
        if (__field.type == RESERVED_FIELD_FIELD_DESC.type) {
          Integer reserved_field;
          reserved_field = iprot.readI32();
          return reserved_field;
        }
        break;
    }
    TProtocolUtil.skip(iprot, __field.type);
    return null;
  }

  @Override
  protected void writeValue(TProtocol oprot, short setField, Object __value) throws TException {
    switch (setField) {
      case RESERVED_FIELD:
        Integer reserved_field = (Integer)getFieldValue();
        oprot.writeI32(reserved_field);
        return;
      default:
        throw new IllegalStateException("Cannot write union with unknown field " + setField);
    }
  }

  @Override
  protected TField getFieldDesc(int setField) {
    switch (setField) {
      case RESERVED_FIELD:
        return RESERVED_FIELD_FIELD_DESC;
      default:
        throw new IllegalArgumentException("Unknown field id " + setField);
    }
  }

  @Override
  protected TStruct getStructDesc() {
    return STRUCT_DESC;
  }

  @Override
  protected Map<Integer, FieldMetaData> getMetaDataMap() { return metaDataMap; }

  private Object __getValue(int expectedFieldId) {
    if (getSetField() == expectedFieldId) {
      return getFieldValue();
    } else {
      throw new RuntimeException("Cannot get field '" + getFieldDesc(expectedFieldId).name + "' because union is currently set to " + getFieldDesc(getSetField()).name);
    }
  }

  private void __setValue(int fieldId, Object __value) {
    if (__value == null) throw new NullPointerException();
    setField_ = fieldId;
    value_ = __value;
  }

  public Integer getReserved_field() {
    return (Integer) __getValue(RESERVED_FIELD);
  }

  public void setReserved_field(Integer __value) {
    __setValue(RESERVED_FIELD, __value);
  }

  public boolean equals(Object other) {
    if (other instanceof UnionToBeRenamed) {
      return equals((UnionToBeRenamed)other);
    } else {
      return false;
    }
  }

  public boolean equals(UnionToBeRenamed other) {
    return equalsNobinaryImpl(other);
  }


  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {getSetField(), getFieldValue()});
  }

}