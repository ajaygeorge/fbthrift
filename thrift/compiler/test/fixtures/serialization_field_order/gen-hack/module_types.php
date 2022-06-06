<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'field2',
      'type' => \TType::I32,
    ),
    2 => shape(
      'var' => 'field3',
      'type' => \TType::I32,
    ),
    3 => shape(
      'var' => 'field1',
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'field2' => 1,
    'field3' => 2,
    'field1' => 3,
  ];

  const type TConstructorShape = shape(
    ?'field1' => ?int,
    ?'field2' => ?int,
    ?'field3' => ?int,
  );

  const type TShape = shape(
    'field1' => int,
    'field2' => int,
    'field3' => int,
  );
  const int STRUCTURAL_ID = 1700330082146725318;
  /**
   * Original thrift field:-
   * 3: i32 field1
   */
  public int $field1;
  /**
   * Original thrift field:-
   * 1: i32 field2
   */
  public int $field2;
  /**
   * Original thrift field:-
   * 2: i32 field3
   */
  public int $field3;

  public function __construct(?int $field1 = null, ?int $field2 = null, ?int $field3 = null)[] {
    $this->field1 = $field1 ?? 0;
    $this->field2 = $field2 ?? 0;
    $this->field3 = $field3 ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'field1'),
      Shapes::idx($shape, 'field2'),
      Shapes::idx($shape, 'field3'),
    );
  }

  public function getName()[]: string {
    return 'Foo';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Foo",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "field1",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "field2",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "field3",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'facebook_thrift_annotation_SerializeInFieldIdOrder' => facebook_thrift_annotation_SerializeInFieldIdOrder::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['field1'],
      $shape['field2'],
      $shape['field3'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'field1' => $this->field1,
      'field2' => $this->field2,
      'field3' => $this->field3,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'field1') !== null) {
      $_tmp0 = (int)/* HH_FIXME[4110] */ $parsed['field1'];
      if ($_tmp0 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->field1 = (int)$_tmp0;
      }
    }    
    if (idx($parsed, 'field2') !== null) {
      $_tmp1 = (int)/* HH_FIXME[4110] */ $parsed['field2'];
      if ($_tmp1 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->field2 = (int)$_tmp1;
      }
    }    
    if (idx($parsed, 'field3') !== null) {
      $_tmp2 = (int)/* HH_FIXME[4110] */ $parsed['field3'];
      if ($_tmp2 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->field3 = (int)$_tmp2;
      }
    }    
  }

}

/**
 * Original thrift struct:-
 * Foo2
 */
class Foo2 implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    3 => shape(
      'var' => 'field1',
      'type' => \TType::I32,
    ),
    1 => shape(
      'var' => 'field2',
      'type' => \TType::I32,
    ),
    2 => shape(
      'var' => 'field3',
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'field1' => 3,
    'field2' => 1,
    'field3' => 2,
  ];

  const type TConstructorShape = shape(
    ?'field1' => ?int,
    ?'field2' => ?int,
    ?'field3' => ?int,
  );

  const type TShape = shape(
    'field1' => int,
    'field2' => int,
    'field3' => int,
  );
  const int STRUCTURAL_ID = 1700330082146725318;
  /**
   * Original thrift field:-
   * 3: i32 field1
   */
  public int $field1;
  /**
   * Original thrift field:-
   * 1: i32 field2
   */
  public int $field2;
  /**
   * Original thrift field:-
   * 2: i32 field3
   */
  public int $field3;

  public function __construct(?int $field1 = null, ?int $field2 = null, ?int $field3 = null)[] {
    $this->field1 = $field1 ?? 0;
    $this->field2 = $field2 ?? 0;
    $this->field3 = $field3 ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'field1'),
      Shapes::idx($shape, 'field2'),
      Shapes::idx($shape, 'field3'),
    );
  }

  public function getName()[]: string {
    return 'Foo2';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Foo2",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "field1",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "field2",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "field3",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['field1'],
      $shape['field2'],
      $shape['field3'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'field1' => $this->field1,
      'field2' => $this->field2,
      'field3' => $this->field3,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'field1') !== null) {
      $_tmp0 = (int)/* HH_FIXME[4110] */ $parsed['field1'];
      if ($_tmp0 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->field1 = (int)$_tmp0;
      }
    }    
    if (idx($parsed, 'field2') !== null) {
      $_tmp1 = (int)/* HH_FIXME[4110] */ $parsed['field2'];
      if ($_tmp1 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->field2 = (int)$_tmp1;
      }
    }    
    if (idx($parsed, 'field3') !== null) {
      $_tmp2 = (int)/* HH_FIXME[4110] */ $parsed['field3'];
      if ($_tmp2 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->field3 = (int)$_tmp2;
      }
    }    
  }

}

