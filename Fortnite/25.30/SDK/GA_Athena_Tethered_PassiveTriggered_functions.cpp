#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Tethered_PassiveTriggered_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_Tethered_PassiveTriggered_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// class UActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Tethered_PassiveTriggered_C::ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered(int32 EntryPoint, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Tethered_PassiveTriggered_C", "ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered");

	Params::UGA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
