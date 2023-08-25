#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
// (None)

class UClass* UGA_Riding_Creature_IsBeingRidden_Passive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Riding_Creature_IsBeingRidden_Passive_C");

	return Clss;
}


// GA_Riding_Creature_IsBeingRidden_Passive_C GA_Riding_Creature_IsBeingRidden_Passive.Default__GA_Riding_Creature_IsBeingRidden_Passive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Riding_Creature_IsBeingRidden_Passive_C* UGA_Riding_Creature_IsBeingRidden_Passive_C::GetDefaultObj()
{
	static class UGA_Riding_Creature_IsBeingRidden_Passive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Riding_Creature_IsBeingRidden_Passive_C*>(UGA_Riding_Creature_IsBeingRidden_Passive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Riding_Creature_IsBeingRidden_Passive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_Passive_C", "K2_ActivateAbility");

	Params::UGA_Riding_Creature_IsBeingRidden_Passive_C_K2_ActivateAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Riding_Creature_IsBeingRidden_Passive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_Passive_C", "K2_OnEndAbility");

	Params::UGA_Riding_Creature_IsBeingRidden_Passive_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UGA_Riding_Creature_IsBeingRidden_Passive_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_Passive_C", "FailedToActivatePassiveAbility");

	Params::UGA_Riding_Creature_IsBeingRidden_Passive_C_FailedToActivatePassiveAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   K2Node_Event_ActorInfo                                           (ContainsInstancedReference)

void UGA_Riding_Creature_IsBeingRidden_Passive_C::ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Riding_Creature_IsBeingRidden_Passive_C", "ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive");

	Params::UGA_Riding_Creature_IsBeingRidden_Passive_C_ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_ActorInfo = K2Node_Event_ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


