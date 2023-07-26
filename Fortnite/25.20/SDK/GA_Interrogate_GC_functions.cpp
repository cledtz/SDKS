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


// Function GA_Interrogate_GC.GA_Interrogate_GC_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Interrogate_GC_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Interrogate_GC_C", "K2_ActivateAbility");

	Params::UGA_Interrogate_GC_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Interrogate_GC.GA_Interrogate_GC_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UGA_Interrogate_GC_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Interrogate_GC_C", "FailedToActivatePassiveAbility");

	Params::UGA_Interrogate_GC_C_FailedToActivatePassiveAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Interrogate_GC.GA_Interrogate_GC_C.ExecuteUbergraph_GA_Interrogate_GC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue                   ()
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// struct FGameplayAbilityActorInfo   K2Node_Event_ActorInfo                                           (ContainsInstancedReference)

void UGA_Interrogate_GC_C::ExecuteUbergraph_GA_Interrogate_GC(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Interrogate_GC_C", "ExecuteUbergraph_GA_Interrogate_GC");

	Params::UGA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue = CallFunc_GetGrantedByEffectContext_ReturnValue;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue = CallFunc_EffectContextGetSourceObject_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.K2Node_Event_ActorInfo = K2Node_Event_ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
