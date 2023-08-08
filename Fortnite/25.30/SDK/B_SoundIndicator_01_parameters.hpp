#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x228 - 0x0)
// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetStrengthCurveForActiveType
struct UB_SoundIndicator_01_C_GetStrengthCurveForActiveType_Params
{
public:
	struct FRuntimeFloatCurve                    ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	enum class EFortSoundIndicatorTypes          Temp_byte_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2476[0x7];                                     // Fixing Size After Last Property
	struct FRuntimeFloatCurve                    Temp_struct_Variable;                              // 0x90(0x88)()
	struct FRuntimeFloatCurve                    CallFunc_GetWeaponCurve_ReturnValue;               // 0x118(0x88)()
	struct FRuntimeFloatCurve                    K2Node_Select_Default;                             // 0x1A0(0x88)()
};

// 0xB4 (0xB4 - 0x0)
// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultTint
struct UB_SoundIndicator_01_C_GetDefaultTint_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortSoundIndicatorTypes          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_248D[0x3];                                     // Fixing Size After Last Property
	struct FLinearColor                          Temp_struct_Variable;                              // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_5;                            // 0x64(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_6;                            // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_7;                            // 0x84(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_8;                            // 0x94(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultIcon
struct UB_SoundIndicator_01_C_GetDefaultIcon_Params
{
public:
	class UTexture*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	enum class EFortSoundIndicatorTypes          Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_249B[0x7];                                     // Fixing Size After Last Property
	class UTexture*                              Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_1;                            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_4;                            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_5;                            // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_6;                            // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_7;                            // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_8;                            // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve
struct UB_SoundIndicator_01_C_GetWeaponCurve_Params
{
public:
	struct FRuntimeFloatCurve                    ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24AF[0x4];                                     // Fixing Size After Last Property
	struct FRuntimeFloatCurve                    K2Node_Select_Default;                             // 0x90(0x88)()
	struct FRuntimeFloatCurve                    K2Node_Select_Default_1;                           // 0x118(0x88)()
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01
struct UB_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
