<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * Animal
 */
enum Animal: int {
  DOG = 1;
  CAT = 2;
  TARANTULA = 3;
}

class Animal_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.Animal",
        "elements" => dict[
          1 => "DOG",
          2 => "CAT",
          3 => "TARANTULA",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * Color
 */
class Color implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'red',
      'type' => \TType::DOUBLE,
    ),
    2 => shape(
      'var' => 'green',
      'type' => \TType::DOUBLE,
    ),
    3 => shape(
      'var' => 'blue',
      'type' => \TType::DOUBLE,
    ),
    4 => shape(
      'var' => 'alpha',
      'type' => \TType::DOUBLE,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'red' => 1,
    'green' => 2,
    'blue' => 3,
    'alpha' => 4,
  ];

  const type TConstructorShape = shape(
    ?'red' => ?float,
    ?'green' => ?float,
    ?'blue' => ?float,
    ?'alpha' => ?float,
  );

  const int STRUCTURAL_ID = 5495510740722957663;
  /**
   * Original thrift field:-
   * 1: double red
   */
  public float $red;
  /**
   * Original thrift field:-
   * 2: double green
   */
  public float $green;
  /**
   * Original thrift field:-
   * 3: double blue
   */
  public float $blue;
  /**
   * Original thrift field:-
   * 4: double alpha
   */
  public float $alpha;

  public function __construct(?float $red = null, ?float $green = null, ?float $blue = null, ?float $alpha = null)[] {
    $this->red = $red ?? 0.0;
    $this->green = $green ?? 0.0;
    $this->blue = $blue ?? 0.0;
    $this->alpha = $alpha ?? 0.0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'red'),
      Shapes::idx($shape, 'green'),
      Shapes::idx($shape, 'blue'),
      Shapes::idx($shape, 'alpha'),
    );
  }

  public function getName()[]: string {
    return 'Color';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Color",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_DOUBLE_TYPE,
                )
              ),
              "name" => "red",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_DOUBLE_TYPE,
                )
              ),
              "name" => "green",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_DOUBLE_TYPE,
                )
              ),
              "name" => "blue",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_DOUBLE_TYPE,
                )
              ),
              "name" => "alpha",
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

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * Vehicle
 */
class Vehicle implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'color',
      'type' => \TType::STRUCT,
      'class' => Color::class,
    ),
    2 => shape(
      'var' => 'licensePlate',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'description',
      'type' => \TType::STRING,
    ),
    4 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
    5 => shape(
      'var' => 'hasAC',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'color' => 1,
    'licensePlate' => 2,
    'description' => 3,
    'name' => 4,
    'hasAC' => 5,
  ];

  const type TConstructorShape = shape(
    ?'color' => ?Color,
    ?'licensePlate' => ?string,
    ?'description' => ?string,
    ?'name' => ?string,
    ?'hasAC' => ?bool,
  );

  const int STRUCTURAL_ID = 2222890000100114781;
  /**
   * Original thrift field:-
   * 1: struct module.Color color
   */
  public ?Color $color;
  /**
   * Original thrift field:-
   * 2: string licensePlate
   */
  public ?string $licensePlate;
  /**
   * Original thrift field:-
   * 3: string description
   */
  public ?string $description;
  /**
   * Original thrift field:-
   * 4: string name
   */
  public ?string $name;
  /**
   * Original thrift field:-
   * 5: bool hasAC
   */
  public bool $hasAC;

  public function __construct(?Color $color = null, ?string $licensePlate = null, ?string $description = null, ?string $name = null, ?bool $hasAC = null)[] {
    $this->color = $color;
    $this->licensePlate = $licensePlate;
    $this->description = $description;
    $this->name = $name;
    $this->hasAC = $hasAC ?? false;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'color'),
      Shapes::idx($shape, 'licensePlate'),
      Shapes::idx($shape, 'description'),
      Shapes::idx($shape, 'name'),
      Shapes::idx($shape, 'hasAC'),
    );
  }

  public function getName()[]: string {
    return 'Vehicle';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Vehicle",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.Color",
                    )
                  ),
                )
              ),
              "name" => "color",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "licensePlate",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "description",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 5,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "hasAC",
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
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift struct:-
 * Person
 */
class Person implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'id',
      'type' => \TType::I64,
    ),
    2 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'age',
      'type' => \TType::I16,
    ),
    4 => shape(
      'var' => 'address',
      'type' => \TType::STRING,
    ),
    5 => shape(
      'var' => 'favoriteColor',
      'type' => \TType::STRUCT,
      'class' => Color::class,
    ),
    6 => shape(
      'var' => 'friends',
      'type' => \TType::SET,
      'etype' => \TType::I64,
      'elem' => shape(
        'type' => \TType::I64,
      ),
      'format' => 'collection',
    ),
    7 => shape(
      'var' => 'bestFriend',
      'type' => \TType::I64,
    ),
    8 => shape(
      'var' => 'petNames',
      'type' => \TType::MAP,
      'ktype' => \TType::I32,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::I32,
        'enum' => Animal::class,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    9 => shape(
      'var' => 'afraidOfAnimal',
      'type' => \TType::I32,
      'enum' => Animal::class,
    ),
    10 => shape(
      'var' => 'vehicles',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => Vehicle::class,
      ),
      'format' => 'collection',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'id' => 1,
    'name' => 2,
    'age' => 3,
    'address' => 4,
    'favoriteColor' => 5,
    'friends' => 6,
    'bestFriend' => 7,
    'petNames' => 8,
    'afraidOfAnimal' => 9,
    'vehicles' => 10,
  ];

  const type TConstructorShape = shape(
    ?'id' => ?int,
    ?'name' => ?string,
    ?'age' => ?int,
    ?'address' => ?string,
    ?'favoriteColor' => ?Color,
    ?'friends' => ?Set<int>,
    ?'bestFriend' => ?int,
    ?'petNames' => ?Map<Animal, string>,
    ?'afraidOfAnimal' => ?Animal,
    ?'vehicles' => ?Vector<Vehicle>,
  );

  const int STRUCTURAL_ID = 5615342512964403351;
  /**
   * Original thrift field:-
   * 1: i64 id
   */
  public int $id;
  /**
   * Original thrift field:-
   * 2: string name
   */
  public string $name;
  /**
   * Original thrift field:-
   * 3: i16 age
   */
  public ?int $age;
  /**
   * Original thrift field:-
   * 4: string address
   */
  public ?string $address;
  /**
   * Original thrift field:-
   * 5: struct module.Color favoriteColor
   */
  public ?Color $favoriteColor;
  /**
   * Original thrift field:-
   * 6: set<i64> friends
   */
  public ?Set<int> $friends;
  /**
   * Original thrift field:-
   * 7: i64 bestFriend
   */
  public ?int $bestFriend;
  /**
   * Original thrift field:-
   * 8: map<enum module.Animal, string> petNames
   */
  public ?Map<Animal, string> $petNames;
  /**
   * Original thrift field:-
   * 9: enum module.Animal afraidOfAnimal
   */
  public ?Animal $afraidOfAnimal;
  /**
   * Original thrift field:-
   * 10: list<struct module.Vehicle> vehicles
   */
  public ?Vector<Vehicle> $vehicles;

  public function __construct(?int $id = null, ?string $name = null, ?int $age = null, ?string $address = null, ?Color $favoriteColor = null, ?Set<int> $friends = null, ?int $bestFriend = null, ?Map<Animal, string> $petNames = null, ?Animal $afraidOfAnimal = null, ?Vector<Vehicle> $vehicles = null)[] {
    $this->id = $id ?? 0;
    $this->name = $name ?? '';
    $this->age = $age;
    $this->address = $address;
    $this->favoriteColor = $favoriteColor;
    $this->friends = $friends;
    $this->bestFriend = $bestFriend;
    $this->petNames = $petNames;
    $this->afraidOfAnimal = $afraidOfAnimal;
    $this->vehicles = $vehicles;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'id'),
      Shapes::idx($shape, 'name'),
      Shapes::idx($shape, 'age'),
      Shapes::idx($shape, 'address'),
      Shapes::idx($shape, 'favoriteColor'),
      Shapes::idx($shape, 'friends'),
      Shapes::idx($shape, 'bestFriend'),
      Shapes::idx($shape, 'petNames'),
      Shapes::idx($shape, 'afraidOfAnimal'),
      Shapes::idx($shape, 'vehicles'),
    );
  }

  public function getName()[]: string {
    return 'Person';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Person",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_typedef" => tmeta_ThriftTypedefType::fromShape(
                    shape(
                      "name" => "module.PersonID",
                      "underlyingType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "id",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "name",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I16_TYPE,
                )
              ),
              "name" => "age",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "address",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 5,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.Color",
                    )
                  ),
                )
              ),
              "name" => "favoriteColor",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 6,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_set" => tmeta_ThriftSetType::fromShape(
                    shape(
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_typedef" => tmeta_ThriftTypedefType::fromShape(
                            shape(
                              "name" => "module.PersonID",
                              "underlyingType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                                )
                              ),
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "friends",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 7,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_typedef" => tmeta_ThriftTypedefType::fromShape(
                    shape(
                      "name" => "module.PersonID",
                      "underlyingType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "bestFriend",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 8,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_map" => tmeta_ThriftMapType::fromShape(
                    shape(
                      "keyType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_enum" => tmeta_ThriftEnumType::fromShape(
                            shape(
                              "name" => "module.Animal",
                            )
                          ),
                        )
                      ),
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "petNames",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 9,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.Animal",
                    )
                  ),
                )
              ),
              "name" => "afraidOfAnimal",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 10,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_list" => tmeta_ThriftListType::fromShape(
                    shape(
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_struct" => tmeta_ThriftStructType::fromShape(
                            shape(
                              "name" => "module.Vehicle",
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "vehicles",
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
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

