#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x180 (0x180 - 0x0)
// Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.ExecuteUbergraph_GA_Athena_HidingProp_LandedOn
struct UGA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8161[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8163[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0xC0(0xB0)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8164[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


