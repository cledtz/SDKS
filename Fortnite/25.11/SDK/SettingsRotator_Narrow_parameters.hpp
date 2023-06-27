#pragma once

// Dumper.

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

// 0x4 (0x4 - 0x0)
// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionsPopulated
struct USettingsRotator_Narrow_C_BP_OnOptionsPopulated_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnOptionSelected
struct USettingsRotator_Narrow_C_BP_OnOptionSelected_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.BP_OnDefaultOptionSpecified
struct USettingsRotator_Narrow_C_BP_OnDefaultOptionSpecified_Params
{
public:
	int32                                        DefaultOptionIndex;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnHover Animation
struct USettingsRotator_Narrow_C_OnHover_Animation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.OnUnHover Animation
struct USettingsRotator_Narrow_C_OnUnHover_Animation_Params
{
public:
};

// 0x64 (0x64 - 0x0)
// Function SettingsRotator_Narrow.SettingsRotator_Narrow_C.ExecuteUbergraph_SettingsRotator_Narrow
struct USettingsRotator_Narrow_C_ExecuteUbergraph_SettingsRotator_Narrow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Count;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Index;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1727[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_DefaultOptionIndex;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1728[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_2; // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
