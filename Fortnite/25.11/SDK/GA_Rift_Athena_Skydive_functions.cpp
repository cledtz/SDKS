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


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.RemoveSkydivingGameplayEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_C::RemoveSkydivingGameplayEffect(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "RemoveSkydivingGameplayEffect");

	Params::UGA_Rift_Athena_Skydive_C_RemoveSkydivingGameplayEffect_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_C::K2_OnEndAbility(bool bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "K2_OnEndAbility");

	Params::UGA_Rift_Athena_Skydive_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCancelled_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::OnCancelled_AA0523504B7CA4F488E1E6A11F48308A()
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnCancelled_AA0523504B7CA4F488E1E6A11F48308A");

	Params::UGA_Rift_Athena_Skydive_C_OnCancelled_AA0523504B7CA4F488E1E6A11F48308A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A()
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A");

	Params::UGA_Rift_Athena_Skydive_C_OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A()
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A");

	Params::UGA_Rift_Athena_Skydive_C_OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCompleted_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::OnCompleted_AA0523504B7CA4F488E1E6A11F48308A()
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnCompleted_AA0523504B7CA4F488E1E6A11F48308A");

	Params::UGA_Rift_Athena_Skydive_C_OnCompleted_AA0523504B7CA4F488E1E6A11F48308A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.Added_C39EFBAB480B446A6927009E5953EC41
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::Added_C39EFBAB480B446A6927009E5953EC41()
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "Added_C39EFBAB480B446A6927009E5953EC41");

	Params::UGA_Rift_Athena_Skydive_C_Added_C39EFBAB480B446A6927009E5953EC41_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "K2_ActivateAbility");

	Params::UGA_Rift_Athena_Skydive_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.SetPlayerToSkydive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::SetPlayerToSkydive()
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "SetPlayerToSkydive");

	Params::UGA_Rift_Athena_Skydive_C_SetPlayerToSkydive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnDestroyed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_C::OnDestroyed_Event_0(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnDestroyed_Event_0");

	Params::UGA_Rift_Athena_Skydive_C_OnDestroyed_Event_0_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnPawnEnteredWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             FortPlayerPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_C::OnPawnEnteredWater(class AFortPlayerPawn* FortPlayerPawn)
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnPawnEnteredWater");

	Params::UGA_Rift_Athena_Skydive_C_OnPawnEnteredWater_Params Parms;

	Parms.FortPlayerPawn = FortPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnPawnLanded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Rift_Athena_Skydive_C::OnPawnLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnPawnLanded");

	Params::UGA_Rift_Athena_Skydive_C_OnPawnLanded_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.HandleForceEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Rift_Athena_Skydive_C::HandleForceEnd()
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "HandleForceEnd");

	Params::UGA_Rift_Athena_Skydive_C_HandleForceEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSkydiving_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetVehicleUInterface_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_VehicleIsInAir_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1             (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetVehicleUInterface_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortCharacterVehicle_Ostrich*K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaJackalVehicle*    K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaFerretVehicle*    K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetVehicleUInterface_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPassengerInVehicle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_FortPlayerPawn                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_C::ExecuteUbergraph_GA_Rift_Athena_Skydive(int32 EntryPoint, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_VehicleIsInAir_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue_1, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_2, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class AFortCharacterVehicle_Ostrich* K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich, bool K2Node_DynamicCast_bSuccess_4, class AFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle, bool K2Node_DynamicCast_bSuccess_5, class AFortAthenaFerretVehicle* K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_4, class AController* CallFunc_GetController_ReturnValue_2, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_7, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue_2, bool CallFunc_IsInVehicle_ReturnValue_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class AController* CallFunc_GetController_ReturnValue_3, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_3, bool K2Node_DynamicCast_bSuccess_8, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsPassengerInVehicle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* K2Node_CustomEvent_DestroyedActor, bool Temp_bool_IsClosed_Variable, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, class AFortPlayerPawn* K2Node_CustomEvent_FortPlayerPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FHitResult& K2Node_CustomEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "ExecuteUbergraph_GA_Rift_Athena_Skydive");

	Params::UGA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.CallFunc_IsSkydiving_ReturnValue = CallFunc_IsSkydiving_ReturnValue;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue = CallFunc_GetVehicleUInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_VehicleIsInAir_ReturnValue = CallFunc_VehicleIsInAir_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Controller_1 = K2Node_DynamicCast_AsPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Movement_Component = K2Node_DynamicCast_AsCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue_1 = CallFunc_GetVehicleUInterface_ReturnValue_1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich = K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle = K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle = K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPlayer_Controller_2 = K2Node_DynamicCast_AsPlayer_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue_2 = CallFunc_GetVehicleUInterface_ReturnValue_2;
	Parms.CallFunc_IsInVehicle_ReturnValue_1 = CallFunc_IsInVehicle_ReturnValue_1;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsPlayer_Controller_3 = K2Node_DynamicCast_AsPlayer_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsPassengerInVehicle_ReturnValue = CallFunc_IsPassengerInVehicle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_FortPlayerPawn = K2Node_CustomEvent_FortPlayerPawn;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
