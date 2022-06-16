/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

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

@SuppressWarnings({ "unused", "serial" })
public class InnerUnionPatch implements TBase, java.io.Serializable, Cloneable, Comparable<InnerUnionPatch> {
  private static final TStruct STRUCT_DESC = new TStruct("InnerUnionPatch");
  private static final TField INNER_OPTION_FIELD_DESC = new TField("innerOption", TType.STRUCT, (short)1);

  public com.facebook.thrift.op.BinaryPatch innerOption;
  public static final int INNEROPTION = 1;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(INNEROPTION, new FieldMetaData("innerOption", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, com.facebook.thrift.op.BinaryPatch.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(InnerUnionPatch.class, metaDataMap);
  }

  public InnerUnionPatch() {
  }

  public InnerUnionPatch(
      com.facebook.thrift.op.BinaryPatch innerOption) {
    this();
    this.innerOption = innerOption;
  }

  public static class Builder {
    private com.facebook.thrift.op.BinaryPatch innerOption;

    public Builder() {
    }

    public Builder setInnerOption(final com.facebook.thrift.op.BinaryPatch innerOption) {
      this.innerOption = innerOption;
      return this;
    }

    public InnerUnionPatch build() {
      InnerUnionPatch result = new InnerUnionPatch();
      result.setInnerOption(this.innerOption);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public InnerUnionPatch(InnerUnionPatch other) {
    if (other.isSetInnerOption()) {
      this.innerOption = TBaseHelper.deepCopy(other.innerOption);
    }
  }

  public InnerUnionPatch deepCopy() {
    return new InnerUnionPatch(this);
  }

  public com.facebook.thrift.op.BinaryPatch getInnerOption() {
    return this.innerOption;
  }

  public InnerUnionPatch setInnerOption(com.facebook.thrift.op.BinaryPatch innerOption) {
    this.innerOption = innerOption;
    return this;
  }

  public void unsetInnerOption() {
    this.innerOption = null;
  }

  // Returns true if field innerOption is set (has been assigned a value) and false otherwise
  public boolean isSetInnerOption() {
    return this.innerOption != null;
  }

  public void setInnerOptionIsSet(boolean __value) {
    if (!__value) {
      this.innerOption = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case INNEROPTION:
      if (__value == null) {
        unsetInnerOption();
      } else {
        setInnerOption((com.facebook.thrift.op.BinaryPatch)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case INNEROPTION:
      return getInnerOption();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof InnerUnionPatch))
      return false;
    InnerUnionPatch that = (InnerUnionPatch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetInnerOption(), that.isSetInnerOption(), this.innerOption, that.innerOption)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {innerOption});
  }

  @Override
  public int compareTo(InnerUnionPatch other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetInnerOption()).compareTo(other.isSetInnerOption());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(innerOption, other.innerOption);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case INNEROPTION:
          if (__field.type == TType.STRUCT) {
            this.innerOption = new com.facebook.thrift.op.BinaryPatch();
            this.innerOption.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.innerOption != null) {
      oprot.writeFieldBegin(INNER_OPTION_FIELD_DESC);
      this.innerOption.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("InnerUnionPatch");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("innerOption");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getInnerOption() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getInnerOption(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

