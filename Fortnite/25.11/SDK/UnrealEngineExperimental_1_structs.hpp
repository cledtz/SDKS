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

enum class EDiagnostics_debug_draw_duration_policy : uint8
{
	SingleFrame                    = 0,
	FiniteDuration                 = 1,
	Persistent                     = 2,
	Diagnostics_debug_draw_duration_MAX = 3,
};

enum class EDiagnostics_log_level : uint8
{
	Debug                          = 0,
	Verbose                        = 1,
	Normal                         = 2,
	Warning                        = 3,
	Error                          = 4,
	Diagnostics_log_MAX            = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x12 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_Lvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x38(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x48(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_79CC[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x18(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x28(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x48(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x58(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x68(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_79CD[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xC4BC9BA1_Elem6;                          // 0x70(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_Lvector3_Mrotation_M_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_Mrotation_M_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_79CE[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x40(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x60(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x80(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x90(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_79CF[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xC4BC9BA1_Elem6;                          // 0x98(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_Lvector3_Mrotation_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_Mrotation_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_79D0[0x8];                                     // Fixing Size After Last Property..
	struct FVerseRotation                        __verse_0x7D844C3C_Elem1;                          // 0x20(0x20)(InstancedReference, NoDestructor)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x60(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x80(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xC4BC9BA1_Elem6;                          // 0x90(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_79D1[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xA1DB2719_Elem7;                          // 0x98(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_Lvector3_Mvector3_M_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_Mvector3_M_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x40(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x60(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x70(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_79D2[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xC4BC9BA1_Elem6;                          // 0x78(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_Lvector3_Mvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_Mvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x30(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x60(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_79D3[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x68(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_Lvector3_Mvector3_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QNumSides_Nint_20_3d_20_2e_2e_2e_M_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_Mvector3_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QNumSides_Nint_20_3d_20_2e_2e_2e_M_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x60(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xC4BC9BA1_Elem6;                          // 0x70(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0xA1DB2719_Elem7;                          // 0x90(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xF7CB4441_Elem8;                          // 0xA0(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_79D4[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0x92ACF8F9_Elem9;                          // 0xA8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// VerseStruct UnrealEngineExperimental.tuple_Lvector3_Mvector3_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
struct FTuple_Lvector3_Mvector3_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
{
public:
	struct FSpatialMath_vector3                  __verse_0x18E3F084_Elem0;                          // 0x0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0x7D844C3C_Elem1;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x50(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0x2A132EB3_Elem5;                          // 0x70(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xC4BC9BA1_Elem6;                          // 0x80(0x2)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_79D5[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             __verse_0xA1DB2719_Elem7;                          // 0x88(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
