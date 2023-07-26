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

// 0x1C (0x1C - 0x0)
// Function TODM_Disabled.TODM_Disabled_C.SetReflectionQualityMPC
struct ATODM_Disabled_C_SetReflectionQualityMPC_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetReflectionQuality_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8144[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function TODM_Disabled.TODM_Disabled_C.SetGlobalIlluminationMPC
struct ATODM_Disabled_C_SetGlobalIlluminationMPC_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetGlobalIlluminationQuality_ReturnValue; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8145[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TODM_Disabled.TODM_Disabled_C.UserConstructionScript
struct ATODM_Disabled_C_UserConstructionScript_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
struct ATODM_Disabled_C_DisableLightAndFog_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
struct ATODM_Disabled_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TODM_Disabled.TODM_Disabled_C.Update Scalabilty Settings
struct ATODM_Disabled_C_Update_Scalabilty_Settings_Params
{
public:
};

// 0x3C (0x3C - 0x0)
// Function TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
struct ATODM_Disabled_C_ExecuteUbergraph_TODM_Disabled_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8146[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8147[0x4];                                     // Fixing Size After Last Property..
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8148[0x2];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
