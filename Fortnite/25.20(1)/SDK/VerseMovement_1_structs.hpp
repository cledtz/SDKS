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

enum class EVerseMovement_move_response_effect : uint8
{
	Force                          = 0,
	VelocityChange                 = 1,
	Transform                      = 2,
	move_response_effect_MAX       = 3,
	VerseMovement_move_response_MAX = 4,
};

enum class EVerseMovement_move_response_frame : uint8
{
	Absolute                       = 0,
	move_response_frame_Object     = 1,
	move_response_frame_Camera     = 2,
	move_response_frame_MAX        = 3,
	VerseMovement_move_response_MAX = 4,
};

enum class EVerseMovement_move_response_modifier : uint8
{
	move_response_modifier_Add     = 0,
	TargetTransform                = 1,
	TargetVelocity                 = 2,
	OverrideTransform              = 3,
	OverrideVelocity               = 4,
	move_response_modifier_MAX     = 5,
	VerseMovement_move_response_MAX = 6,
};

enum class EVerseMovement_move_response_type : uint8
{
	Linear                         = 0,
	Angular                        = 1,
	move_response_type_MAX         = 2,
	VerseMovement_move_response_MAX = 3,
};

enum class EVerseMovement_move_trigger_type : uint8
{
	Input                          = 0,
	Constraint                     = 1,
	Physics                        = 2,
	Trace                          = 3,
	Constant                       = 4,
	move_trigger_type_MAX          = 5,
	VerseMovement_move_trigger_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// VerseStruct VerseMovement.VerseMovement_move_input_trigger_params
struct FVerseMovement_move_input_trigger_params
{
public:
	uint8                                        __verse_0x7D5B20A2_IsAxis : 1;                     // Mask: 0x1, PropSize: 0x10x0(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_476 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_895B[0x7];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        __verse_0x38D9A616_Name;                           // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2A186A5F_AxisToMagnitudeCurve;           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0xC35555B9_AccumulateAxisInput : 1;        // Mask: 0x1, PropSize: 0x10x20(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_477 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_895C[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  __verse_0x9EA11583_ClampAxis;                      // 0x28(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseMovement.VerseMovement_move_physics_trigger_params
struct FVerseMovement_move_physics_trigger_params
{
public:
	struct FSpatialMath_vector3                  __verse_0xE78E15A1_SpeedInDirection;               // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// VerseStruct VerseMovement.VerseMovement_move_trace_trigger_params
struct FVerseMovement_move_trace_trigger_params
{
public:
	struct FSpatialMath_vector3                  __verse_0x722EF6A3_Direction;                      // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	enum class EVerseMovement_move_response_frame __verse_0x08A22912_Frame;                          // 0x18(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_895D[0x7];                                     // Fixing Size After Last Property..
	double                                       __verse_0x2AC13C27_TraceLength;                    // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0x99455FC7_ProportionalToHitDistance : 1;  // Mask: 0x1, PropSize: 0x10x28(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_478 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_895E[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0x0C3D14E7_HitDistanceToMagnitudeCurve;    // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// VerseStruct VerseMovement.VerseMovement_move_trigger
struct FVerseMovement_move_trigger
{
public:
	enum class EVerseMovement_move_trigger_type  __verse_0x72E298E9_Type;                           // 0x0(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_895F[0x7];                                     // Fixing Size After Last Property..
	struct FVerseMovement_move_input_trigger_params __verse_0xD3F71544_InputParams;                    // 0x8(0x38)(InstancedReference)
	struct FVerseMovement_move_physics_trigger_params __verse_0x4D939126_PhysicsParams;                  // 0x40(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FVerseMovement_move_trace_trigger_params __verse_0x874565E7_TraceParams;                    // 0x58(0x38)(InstancedReference, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// VerseStruct VerseMovement.VerseMovement_move_response
struct FVerseMovement_move_response
{
public:
	struct FSpatialMath_vector3                  __verse_0x0464FDB1_Vector;                         // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0xA6A970E7_Magnitude;                      // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x9D526629_MagnitudeCurve;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class EVerseMovement_move_response_type __verse_0x72E298E9_Type;                           // 0x28(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseMovement_move_response_frame __verse_0x08A22912_Frame;                          // 0x29(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseMovement_move_response_effect __verse_0xCDC901A6_Effect;                         // 0x2A(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseMovement_move_response_modifier __verse_0xCDC9EFBD_Modifier;                       // 0x2B(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8960[0x4];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  __verse_0x7B949B4B_ClampVector;                    // 0x30(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	enum class EVerseMovement_move_response_frame __verse_0x3B045791_ClampFrame;                     // 0x48(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8961[0x7];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// VerseStruct VerseMovement.VerseMovement_move_config_entry
struct FVerseMovement_move_config_entry
{
public:
	FVerseStringProperty_                        __verse_0x38D9A616_Name;                           // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<struct FVerseMovement_move_trigger>   __verse_0x6DA99CE5_Triggers;                       // 0x10(0x10)(InstancedReference, ContainsInstancedReference)
	TArray<struct FVerseMovement_move_response>  __verse_0xBAC32A9B_Responses;                      // 0x20(0x10)(InstancedReference, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseMovement.VerseMovement_move_config
struct FVerseMovement_move_config
{
public:
	TArray<struct FVerseMovement_move_config_entry> __verse_0xCE82C4DD_Entries;                        // 0x0(0x10)(InstancedReference, ContainsInstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
