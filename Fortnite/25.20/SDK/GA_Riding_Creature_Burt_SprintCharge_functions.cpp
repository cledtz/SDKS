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


// Function GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Riding_Creature_Burt_SprintCharge_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Riding_Creature_Burt_SprintCharge_C", "K2_ActivateAbility");

	Params::UGA_Riding_Creature_Burt_SprintCharge_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Riding_Creature_Burt_SprintCharge_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Riding_Creature_Burt_SprintCharge_C", "K2_OnEndAbility");

	Params::UGA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UGA_Riding_Creature_Burt_SprintCharge_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Riding_Creature_Burt_SprintCharge_C", "FailedToActivatePassiveAbility");

	Params::UGA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   K2Node_Event_ActorInfo                                           (ContainsInstancedReference)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaCollisionReactionComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Run_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaCollisionReactionComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Riding_Creature_Burt_SprintCharge_C::ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge(int32 EntryPoint, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAthenaCollisionReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Run_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class UFortAthenaCollisionReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static auto Func = Class->GetFunction("GA_Riding_Creature_Burt_SprintCharge_C", "ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge");

	Params::UGA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActorInfo = K2Node_Event_ActorInfo;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Run_ReturnValue = CallFunc_Run_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
