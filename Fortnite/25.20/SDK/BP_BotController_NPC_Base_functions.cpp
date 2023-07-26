#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_BotController_NPC_Base_C::BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_BotController_NPC_Base_C", "BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature");

	Params::ABP_BotController_NPC_Base_C_BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_0_PatrollingComponentOnStartPatrolling__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_BotController_NPC_Base_C::BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_BotController_NPC_Base_C", "BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature");

	Params::ABP_BotController_NPC_Base_C_BndEvt__FortAthenaNpcPatrolling_K2Node_ComponentBoundEvent_1_PatrollingComponentOnStopPatrolling__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BotController_NPC_Base.BP_BotController_NPC_Base_C.ExecuteUbergraph_BP_BotController_NPC_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)

void ABP_BotController_NPC_Base_C::ExecuteUbergraph_BP_BotController_NPC_Base(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_BotController_NPC_Base_C", "ExecuteUbergraph_BP_BotController_NPC_Base");

	Params::ABP_BotController_NPC_Base_C_ExecuteUbergraph_BP_BotController_NPC_Base_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
