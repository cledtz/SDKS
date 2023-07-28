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


// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_PreSlideFeedback_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_Player_PreSlideFeedback_C", "K2_ActivateAbility");

	Params::UGA_Athena_Player_PreSlideFeedback_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_PreSlideFeedback_C::CustomEvent_0()
{
	static auto Func = Class->GetFunction("GA_Athena_Player_PreSlideFeedback_C", "CustomEvent_0");

	Params::UGA_Athena_Player_PreSlideFeedback_C_CustomEvent_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UGA_Athena_Player_PreSlideFeedback_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_PreSlideFeedback_C", "FailedToActivatePassiveAbility");

	Params::UGA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraShakeBase*            CallFunc_StartCameraShake_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   K2Node_Event_ActorInfo                                           (ContainsInstancedReference)

void UGA_Athena_Player_PreSlideFeedback_C::ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_PreSlideFeedback_C", "ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback");

	Params::UGA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_StartCameraShake_ReturnValue = CallFunc_StartCameraShake_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_ActorInfo = K2Node_Event_ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
