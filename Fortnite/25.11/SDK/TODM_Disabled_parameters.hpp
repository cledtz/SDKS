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

// 0x28 (0x28 - 0x0)
// Function TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
struct ATODM_Disabled_C_ExecuteUbergraph_TODM_Disabled_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Enable;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80FF[0x3];                                     // Fixing Size After Last Property..
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8100[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8101[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
