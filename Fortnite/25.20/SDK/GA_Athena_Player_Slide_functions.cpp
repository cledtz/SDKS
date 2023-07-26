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


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndAbilityServerSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_Generic_C*K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_Slide_C::EndAbilityServerSide(class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "EndAbilityServerSide");

	Params::UGA_Athena_Player_Slide_C_EndAbilityServerSide_Params Parms;

	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndAbilityClientSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier_Athena_Sliding_C*K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_Slide_C::EndAbilityClientSide(class UCameraModifier_Athena_Sliding_C* K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "EndAbilityClientSide");

	Params::UGA_Athena_Player_Slide_C_EndAbilityClientSide_Params Parms;

	Parms.K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding = K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.BuildDataRegistryResolverScope
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class FName>                InOutResolverScopes                                              (Parm, OutParm)
// int32                              InOutPriority                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Athena_Player_Slide_C::BuildDataRegistryResolverScope(TArray<class FName>* InOutResolverScopes, int32* InOutPriority)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "BuildDataRegistryResolverScope");

	Params::UGA_Athena_Player_Slide_C_BuildDataRegistryResolverScope_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (InOutResolverScopes != nullptr)
		*InOutResolverScopes = Parms.InOutResolverScopes;

	if (InOutPriority != nullptr)
		*InOutPriority = Parms.InOutPriority;

	return Parms.ReturnValue;

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Player_Slide_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_Slide_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "K2_OnEndAbility");

	Params::UGA_Athena_Player_Slide_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.AddMomentum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_Slide_C::AddMomentum()
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "AddMomentum");

	Params::UGA_Athena_Player_Slide_C_AddMomentum_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndLevelGroundSlide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_Slide_C::EndLevelGroundSlide()
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "EndLevelGroundSlide");

	Params::UGA_Athena_Player_Slide_C_EndLevelGroundSlide_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.CameraFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_Slide_C::CameraFX()
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "CameraFX");

	Params::UGA_Athena_Player_Slide_C_CameraFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.OnFinishedCharacterCustomization_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_Slide_C::OnFinishedCharacterCustomization_Event_0(class AFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "OnFinishedCharacterCustomization_Event_0");

	Params::UGA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0_Params Parms;

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.ForceRemoveSlideGC
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Player_Slide_C::ForceRemoveSlideGC()
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "ForceRemoveSlideGC");

	Params::UGA_Athena_Player_Slide_C_ForceRemoveSlideGC_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.ExecuteUbergraph_GA_Athena_Player_Slide
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_1              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier*             CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_3                               (NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraShakeBase*            CallFunc_StartCameraShake_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Generic_C*       K2Node_DynamicCast_AsPlayer_Pawn_Generic                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_Generic_C*K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_Pawn                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_2              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_3              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Player_Slide_C::ExecuteUbergraph_GA_Athena_Player_Slide(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, bool Temp_bool_Has_Been_Initd_Variable, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UCameraModifier* CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_3, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess_2, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7, class AFortPlayerPawn* K2Node_CustomEvent_Pawn, bool CallFunc_IsValid_ReturnValue_4, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_IsClosed_Variable, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_2, bool K2Node_DynamicCast_bSuccess_4, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_6, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_3, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, bool CallFunc_RemoveCameraModifier_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Player_Slide_C", "ExecuteUbergraph_GA_Athena_Player_Slide");

	Params::UGA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character_1 = K2Node_DynamicCast_AsFort_Movement_Comp_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue = CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_3 = CallFunc_K2_SetTimer_ReturnValue_3;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	Parms.CallFunc_StartCameraShake_ReturnValue = CallFunc_StartCameraShake_ReturnValue;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic = K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character_2 = K2Node_DynamicCast_AsFort_Movement_Comp_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character_3 = K2Node_DynamicCast_AsFort_Movement_Comp_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11 = CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2;
	Parms.CallFunc_RemoveCameraModifier_ReturnValue = CallFunc_RemoveCameraModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
