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
// Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature
struct ABP_BotController_NPC_Base_C_BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature
struct ABP_BotController_NPC_Base_C_BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature_Params
{
public:
};

// 0x1C (0x1C - 0x0)
// Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.ExecuteUbergraph_BP_BotController_NPC_Base
struct ABP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F2F[0x4];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F30[0x1];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x14(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
