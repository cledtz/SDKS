#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
// (None)

class UClass* UGA_Riding_Player_StopRidingOnTriggered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Riding_Player_StopRidingOnTriggered_C");

	return Clss;
}


// GA_Riding_Player_StopRidingOnTriggered_C GA_Riding_Player_StopRidingOnTriggered.Default__GA_Riding_Player_StopRidingOnTriggered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Riding_Player_StopRidingOnTriggered_C* UGA_Riding_Player_StopRidingOnTriggered_C::GetDefaultObj()
{
	static class UGA_Riding_Player_StopRidingOnTriggered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Riding_Player_StopRidingOnTriggered_C*>(UGA_Riding_Player_StopRidingOnTriggered_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Riding_Player_StopRidingOnTriggered_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Riding_Player_StopRidingOnTriggered_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Riding_Player_StopRidingOnTriggered_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C.ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URiderComponent*             CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StopRidingActor_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Riding_Player_StopRidingOnTriggered_C::ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32 EntryPoint, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_StopRidingActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Riding_Player_StopRidingOnTriggered_C", "ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered");

	Params::UGA_Riding_Player_StopRidingOnTriggered_C_ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StopRidingActor_ReturnValue = CallFunc_StopRidingActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


