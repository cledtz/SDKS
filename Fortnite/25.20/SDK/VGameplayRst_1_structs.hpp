#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVGameplayRst_Components_activation_state : uint8
{
	Active                         = 0,
	Inactive                       = 1,
	VGameplayRst_Components_activation_MAX = 2,
};

enum class EVGameplayRst_Geometry_collision_type : uint8
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	SimulationOnly                 = 2,
	QueryAndSimulation             = 3,
	VGameplayRst_Geometry_collision_MAX = 4,
};

enum class EVGameplayRst_Geometry_default_animation_mode_type : uint8
{
	UseAnimationBlueprint          = 0,
	UseAnimationInstance           = 1,
	UseAnimationAsset              = 2,
	UseCustomMode                  = 3,
	VGameplayRst_Geometry_default_animation_mode_MAX = 4,
};

enum class EVGameplayRst_Geometry_default_mesh_type : uint8
{
	Cube                           = 0,
	Sphere                         = 1,
	Cylinder                       = 2,
	Cone                           = 3,
	Plane                          = 4,
	VGameplayRst_Geometry_default_mesh_MAX = 5,
};

enum class EVGameplayRst_Physics_collision_shape_mode : uint8
{
	CollisionMesh                  = 0,
	CollisionBox                   = 1,
	CollisionCapsule               = 2,
	CollisionSphere                = 3,
	VGameplayRst_Physics_collision_shape_MAX = 4,
};

enum class EVGameplayRst_Physics_dof_movement_mode : uint8
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	NoConstraints                  = 6,
	VGameplayRst_Physics_dof_movement_MAX = 7,
};

enum class EVGameplayRst_Physics_physics_trace_category : uint8
{
	Channel                        = 0,
	Profile                        = 1,
	Object                         = 2,
	VGameplayRst_Physics_physics_trace_MAX = 3,
};

enum class EVGameplayRst_Physics_physics_trace_channel : uint8
{
	WorldStatic                    = 0,
	WorldDynamic                   = 1,
	Pawn                           = 2,
	Visibility                     = 3,
	Camera                         = 4,
	PhysicsBody                    = 5,
	Vehicle                        = 6,
	Destructible                   = 7,
	GameTraceChannel1              = 8,
	GameTraceChannel2              = 9,
	GameTraceChannel3              = 10,
	GameTraceChannel4              = 11,
	GameTraceChannel5              = 12,
	GameTraceChannel6              = 13,
	VGameplayRst_Physics_physics_trace_MAX = 14,
};

enum class EVGameplayRst_Physics_physics_trace_shape : uint8
{
	Line                           = 0,
	Box                            = 1,
	ShapeSphere                    = 2,
	VGameplayRst_Physics_physics_trace_MAX = 3,
};

enum class EVGameplayRst_Physics_physics_trace_type : uint8
{
	Single                         = 0,
	Multi                          = 1,
	Test                           = 2,
	VGameplayRst_Physics_physics_trace_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x80 - 0x0)
// VerseStruct VGameplayRst.tuple_L_Kchar_Mtransform_M_Kchar_R
struct FTuple_L_Kchar_Mtransform_M_Kchar_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	struct FSpatialMath_transform                __verse_0x7D844C3C_Elem1;                          // 0x10(0x60)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x932BF92E_Elem2;                          // 0x70(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// VerseStruct VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_Mmaterial_R
struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_Mmaterial_R
{
public:
	TArray<class UClass*>                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FSpatialMath_transform                __verse_0x7D844C3C_Elem1;                          // 0x10(0x60)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x932BF92E_Elem2;                          // 0x70(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_mesh*                          __verse_0xF64C4596_Elem3;                          // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAssets_material*                      __verse_0x4F74920B_Elem4;                          // 0x88(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// VerseStruct VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R
struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R
{
public:
	TArray<class UClass*>                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FSpatialMath_transform                __verse_0x7D844C3C_Elem1;                          // 0x10(0x60)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x932BF92E_Elem2;                          // 0x70(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_mesh*                          __verse_0xF64C4596_Elem3;                          // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// VerseStruct VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R
struct FTuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R
{
public:
	TArray<class UClass*>                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x10(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7DE3[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x932BF92E_Elem2;                          // 0x30(0x20)(InstancedReference, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0xF64C4596_Elem3;                          // 0x50(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        __verse_0x4F74920B_Elem4;                          // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_mesh*                          __verse_0x2A132EB3_Elem5;                          // 0x78(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAssets_material*                      __verse_0xC4BC9BA1_Elem6;                          // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct VGameplayRst.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VGameplayRst.tuple_Lcomponent_Many_R
struct FTuple_Lcomponent_Many_R
{
public:
	class UEntityComponent*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VGameplayRst.tuple_Lcomponent_Mint_Many_R
struct FTuple_Lcomponent_Mint_Many_R
{
public:
	class UEntityComponent*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                __verse_0x932BF92E_Elem2;                          // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// VerseStruct VGameplayRst.tuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R
struct FTuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R
{
public:
	class UEntityComponent*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVGameplayRst_Physics_physics_trace_category __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVGameplayRst_Physics_physics_trace_type __verse_0x932BF92E_Elem2;                          // 0x9(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVGameplayRst_Physics_physics_trace_shape __verse_0xF64C4596_Elem3;                          // 0xA(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVGameplayRst_Physics_physics_trace_channel __verse_0x4F74920B_Elem4;                          // 0xB(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DE4[0x4];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  __verse_0x2A132EB3_Elem5;                          // 0x10(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0xC4BC9BA1_Elem6;                          // 0x28(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        __verse_0xA1DB2719_Elem7 : 1;                      // Mask: 0x1, PropSize: 0x10x40(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_437 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7DE5[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  __verse_0xF7CB4441_Elem8;                          // 0x48(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x92ACF8F9_Elem9;                          // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x2E90A5DD_Elem10;                         // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VGameplayRst.tuple_Lentity_M_Ksubtype_Lcomponent_R_R
struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R
{
public:
	class UVerseEngine_Entity_entity*            __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UClass*>                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, ContainsInstancedReference)
};

// 0x9 (0x9 - 0x0)
// VerseStruct VGameplayRst.tuple_Lfloat_Mactivation__state_R
struct FTuple_Lfloat_Mactivation__state_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVGameplayRst_Components_activation_state __verse_0x7D844C3C_Elem1;                          // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VGameplayRst.tuple_Lfloat_Mfloat_R
struct FTuple_Lfloat_Mfloat_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// VerseStruct VGameplayRst.tuple_Lfloat_Mlogic_R
struct FTuple_Lfloat_Mlogic_R
{
public:
	double                                       __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0x7D844C3C_Elem1 : 1;                      // Mask: 0x1, PropSize: 0x10x8(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VGameplayRst.tuple_Lint_Mcomponent_R
struct FTuple_Lint_Mcomponent_R
{
public:
	int64                                        __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct VGameplayRst.tuple_Llevel_Mtime__span_M_Kchar_R
struct FTuple_Llevel_Mtime__span_M_Kchar_R
{
public:
	class UAssets_level*                         __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVerseExperimental_time_span          __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x932BF92E_Elem2;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// VerseStruct VGameplayRst.tuple_Llogic_Mlogic_R
struct FTuple_Llogic_Mlogic_R
{
public:
	uint8                                        __verse_0x18E3F084_Elem0 : 1;                      // Mask: 0x1, PropSize: 0x10x0(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_438 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        __verse_0x7D844C3C_Elem1 : 1;                      // Mask: 0x1, PropSize: 0x10x1(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VGameplayRst.tuple_Lmaterial_Mint_R
struct FTuple_Lmaterial_Mint_R
{
public:
	class UAssets_material*                      __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct VGameplayRst.tuple_Lplayer__component_M_Kchar_M_Kchar_R
struct FTuple_Lplayer__component_M_Kchar_M_Kchar_R
{
public:
	class USimulation_player_component*          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x932BF92E_Elem2;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VGameplayRst.tuple_Lplayer__component_M_Kchar_Mint_R
struct FTuple_Lplayer__component_M_Kchar_Mint_R
{
public:
	class USimulation_player_component*          __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
	int64                                        __verse_0x932BF92E_Elem2;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// VerseStruct VGameplayRst.tuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R
struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R
{
public:
	struct FVerseRotation                        __verse_0x18E3F084_Elem0;                          // 0x0(0x20)(InstancedReference, NoDestructor)
	struct FTuple_L_R                            __verse_0x7D844C3C_Elem1;                          // 0x20(0x1)(InstancedReference, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0x932BF92E_Elem2;                          // 0x21(0x1)(InstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VGameplayRst.tuple_Ltime__span_M_Kchar_R
struct FTuple_Ltime__span_M_Kchar_R
{
public:
	struct FVerseExperimental_time_span          __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// VerseStruct VGameplayRst.tuple_Ltransform_M_Kchar_Mmesh_Mmaterial_R
struct FTuple_Ltransform_M_Kchar_Mmesh_Mmaterial_R
{
public:
	struct FSpatialMath_transform                __verse_0x18E3F084_Elem0;                          // 0x0(0x60)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x60(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_mesh*                          __verse_0x932BF92E_Elem2;                          // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAssets_material*                      __verse_0xF64C4596_Elem3;                          // 0x78(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// VerseStruct VGameplayRst.tuple_Ltransform_M_Kchar_Mmesh_R
struct FTuple_Ltransform_M_Kchar_Mmesh_R
{
public:
	struct FSpatialMath_transform                __verse_0x18E3F084_Elem0;                          // 0x0(0x60)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x60(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_mesh*                          __verse_0x932BF92E_Elem2;                          // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// VerseStruct VGameplayRst.tuple_Ltransform_M_Kchar_R
struct FTuple_Ltransform_M_Kchar_R
{
public:
	struct FSpatialMath_transform                __verse_0x18E3F084_Elem0;                          // 0x0(0x60)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x60(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// VerseStruct VGameplayRst.tuple_Lvector3_M_Kchar_Mmesh_Mmaterial_R
struct FTuple_Lvector3_M_Kchar_Mmesh_Mmaterial_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_mesh*                          __verse_0x932BF92E_Elem2;                          // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAssets_material*                      __verse_0xF64C4596_Elem3;                          // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct VGameplayRst.tuple_Lvector3_M_Kchar_R
struct FTuple_Lvector3_M_Kchar_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// VerseStruct VGameplayRst.tuple_Lvector3_Mrotation_M_Kchar_Mmesh_Mmaterial_R
struct FTuple_Lvector3_Mrotation_M_Kchar_Mmesh_Mmaterial_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7DE6[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
	FVerseStringProperty_                        __verse_0x932BF92E_Elem2;                          // 0x40(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_mesh*                          __verse_0xF64C4596_Elem3;                          // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAssets_material*                      __verse_0x4F74920B_Elem4;                          // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// VerseStruct VGameplayRst.tuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R
struct FTuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7DE7[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x932BF92E_Elem2;                          // 0x40(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        __verse_0xF64C4596_Elem3;                          // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_mesh*                          __verse_0x4F74920B_Elem4;                          // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAssets_material*                      __verse_0x2A132EB3_Elem5;                          // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// VerseStruct VGameplayRst.tuple_Lvector3_Mvector3_Mvector3_M_Kchar_R
struct FTuple_Lvector3_Mvector3_Mvector3_M_Kchar_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x932BF92E_Elem2;                          // 0x30(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        __verse_0xF64C4596_Elem3;                          // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct VGameplayRst.tuple_Lvector3_Mvector3_R
struct FTuple_Lvector3_Mvector3_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// VerseStruct VGameplayRst.VGameplayRst_Physics_hit_result
struct FVGameplayRst_Physics_hit_result
{
public:
	int64                                        __verse_0x592C3A0F_OtherEntityID;                  // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVGameplayRst_Physics_collision_component* __verse_0x15DAA648_OtherComponent;                 // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xA0175DA6_HitNormal;                      // 0x10(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0xE16733E1_HitLocation;                    // 0x28(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
