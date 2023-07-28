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


// Function GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Riding_Creature_IsBeingRidden_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_C", "K2_ActivateAbility");

	Params::UGA_Riding_Creature_IsBeingRidden_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Riding_Creature_IsBeingRidden_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_C", "K2_OnEndAbility");

	Params::UGA_Riding_Creature_IsBeingRidden_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UGA_Riding_Creature_IsBeingRidden_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_C", "FailedToActivatePassiveAbility");

	Params::UGA_Riding_Creature_IsBeingRidden_C_FailedToActivatePassiveAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   K2Node_Event_ActorInfo                                           (ContainsInstancedReference)

void UGA_Riding_Creature_IsBeingRidden_C::ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_C", "ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden");

	Params::UGA_Riding_Creature_IsBeingRidden_C_ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_ActorInfo = K2Node_Event_ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
