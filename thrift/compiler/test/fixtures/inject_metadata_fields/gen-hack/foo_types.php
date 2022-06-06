<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Fields
 */
class Fields implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    100 => shape(
      'var' => 'injected_field',
      'type' => \TType::STRING,
    ),
    101 => shape(
      'var' => 'injected_structured_annotation_field',
      'type' => \TType::STRING,
    ),
    102 => shape(
      'var' => 'injected_unstructured_annotation_field',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'injected_field' => 100,
    'injected_structured_annotation_field' => 101,
    'injected_unstructured_annotation_field' => 102,
  ];

  const type TConstructorShape = shape(
    ?'injected_field' => ?string,
    ?'injected_structured_annotation_field' => ?string,
    ?'injected_unstructured_annotation_field' => ?string,
  );

  const int STRUCTURAL_ID = 1725960953533133382;
  /**
   * Original thrift field:-
   * 100: string injected_field
   */
  public string $injected_field;
  /**
   * Original thrift field:-
   * 101: string injected_structured_annotation_field
   */
  public ?string $injected_structured_annotation_field;
  /**
   * Original thrift field:-
   * 102: string injected_unstructured_annotation_field
   */
  public ?string $injected_unstructured_annotation_field;

  public function __construct(?string $injected_field = null, ?string $injected_structured_annotation_field = null, ?string $injected_unstructured_annotation_field = null)[] {
    $this->injected_field = $injected_field ?? '';
    $this->injected_structured_annotation_field = $injected_structured_annotation_field;
    $this->injected_unstructured_annotation_field = $injected_unstructured_annotation_field;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'injected_field'),
      Shapes::idx($shape, 'injected_structured_annotation_field'),
      Shapes::idx($shape, 'injected_unstructured_annotation_field'),
    );
  }

  public function getName()[]: string {
    return 'Fields';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "foo.Fields",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 100,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_field",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 101,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_structured_annotation_field",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 102,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "injected_unstructured_annotation_field",
              "is_optional" => true,
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
        'injected_structured_annotation_field' => shape(
          'field' => dict[
            'facebook_thrift_annotation_Box' => facebook_thrift_annotation_Box::fromShape(
              shape(
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

