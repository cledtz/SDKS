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


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.CheckSurfaceType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              SurfaceTypeInt                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFootstepSurfaceTypeCallFunc_GetFootstepSurfaceType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::CheckSurfaceType(class AFortPawn* Pawn, int32* SurfaceTypeInt, enum class EFortFootstepSurfaceType CallFunc_GetFootstepSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "CheckSurfaceType");

	Params::AGCNL_Athena_Player_Sliding_Player_C_CheckSurfaceType_Params Parms;

	Parms.Pawn = Pawn;
	Parms.CallFunc_GetFootstepSurfaceType_ReturnValue = CallFunc_GetFootstepSurfaceType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (SurfaceTypeInt != nullptr)
		*SurfaceTypeInt = Parms.SurfaceTypeInt;

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ToggleLoopingSoundIndicator
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnableSoundIndicator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::ToggleLoopingSoundIndicator(bool bEnableSoundIndicator, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "ToggleLoopingSoundIndicator");

	Params::AGCNL_Athena_Player_Sliding_Player_C_ToggleLoopingSoundIndicator_Params Parms;

	Parms.bEnableSoundIndicator = bEnableSoundIndicator;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.On Target Pawn Actor Hit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnCollision_OutResult                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_OnCollision_OutMagnitude                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::On_Target_Pawn_Actor_Hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_OnCollision_OutResult, float CallFunc_OnCollision_OutMagnitude)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "On Target Pawn Actor Hit");

	Params::AGCNL_Athena_Player_Sliding_Player_C_On_Target_Pawn_Actor_Hit_Params Parms;

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_OnCollision_OutResult = CallFunc_OnCollision_OutResult;
	Parms.CallFunc_OnCollision_OutMagnitude = CallFunc_OnCollision_OutMagnitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.UpdateSoundComponentParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetBoolParameter_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetBoolParameter_self_CastInput_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::UpdateSoundComponentParameters(class AFortPlayerPawn* PlayerPawn, class UAudioComponent* AudioComponent, bool CallFunc_IsLocallyViewed_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput_1)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "UpdateSoundComponentParameters");

	Params::AGCNL_Athena_Player_Sliding_Player_C_UpdateSoundComponentParameters_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.AudioComponent = AudioComponent;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue = CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetBoolParameter_self_CastInput = CallFunc_SetBoolParameter_self_CastInput;
	Parms.CallFunc_SetBoolParameter_self_CastInput_1 = CallFunc_SetBoolParameter_self_CastInput_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.StopSlideAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::StopSlideAudio(bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "StopSlideAudio");

	Params::AGCNL_Athena_Player_Sliding_Player_C_StopSlideAudio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.UpdateSlideAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastUpdateVelocity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameterExt_Value_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameterExt_Value_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::UpdateSlideAudio(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_SetFloatParameterExt_Value_ImplicitCast, float CallFunc_SetFloatParameterExt_Value_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "UpdateSlideAudio");

	Params::AGCNL_Athena_Player_Sliding_Player_C_UpdateSlideAudio_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLastUpdateVelocity_ReturnValue = CallFunc_GetLastUpdateVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_SetFloatParameterExt_Value_ImplicitCast = CallFunc_SetFloatParameterExt_Value_ImplicitCast;
	Parms.CallFunc_SetFloatParameterExt_Value_ImplicitCast_1 = CallFunc_SetFloatParameterExt_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.StartSlideAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetBoolParameter_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_SetBoolParameter_self_CastInput_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::StartSlideAudio(bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "StartSlideAudio");

	Params::AGCNL_Athena_Player_Sliding_Player_C_StartSlideAudio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue = CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetBoolParameter_self_CastInput = CallFunc_SetBoolParameter_self_CastInput;
	Parms.CallFunc_SetBoolParameter_self_CastInput_1 = CallFunc_SetBoolParameter_self_CastInput_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ResetAudioData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::ResetAudioData(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "ResetAudioData");

	Params::AGCNL_Athena_Player_Sliding_Player_C_ResetAudioData_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Sliding Failsafe Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Player_Sliding_Player_C::Sliding_Failsafe_Check()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "Sliding Failsafe Check");

	Params::AGCNL_Athena_Player_Sliding_Player_C_Sliding_Failsafe_Check_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Stop Sliding Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Player_Sliding_Player_C::Stop_Sliding_Audio()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "Stop Sliding Audio");

	Params::AGCNL_Athena_Player_Sliding_Player_C_Stop_Sliding_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.OnLoopingStartGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_Athena_Player_Sliding_Player_C::OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "OnLoopingStartGeneric");

	Params::AGCNL_Athena_Player_Sliding_Player_C_OnLoopingStartGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.OnRemovalGeneric
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "OnRemovalGeneric");

	Params::AGCNL_Athena_Player_Sliding_Player_C_OnRemovalGeneric_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ResumeSlidingAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Player_Sliding_Player_C::ResumeSlidingAudio()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "ResumeSlidingAudio");

	Params::AGCNL_Athena_Player_Sliding_Player_C_ResumeSlidingAudio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Update Speed Line
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Player_Sliding_Player_C::Update_Speed_Line()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "Update Speed Line");

	Params::AGCNL_Athena_Player_Sliding_Player_C_Update_Speed_Line_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.UpdateSurfaceType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Athena_Player_Sliding_Player_C::UpdateSurfaceType()
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "UpdateSurfaceType");

	Params::AGCNL_Athena_Player_Sliding_Player_C_UpdateSurfaceType_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters_1                                        (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents_1                                (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents_1                                   (ConstParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CheckSurfaceType_SurfaceTypeInt                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_Player_Sliding_Player_C::ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class UFXSystemComponent* CallFunc_Array_Get_Item, class UFortMovementComp_Character* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_CheckSurfaceType_SurfaceTypeInt)
{
	static auto Func = Class->GetFunction("GCNL_Athena_Player_Sliding_Player_C", "ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player");

	Params::AGCNL_Athena_Player_Sliding_Player_C_ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MyTarget_1 = K2Node_Event_MyTarget_1;
	Parms.K2Node_Event_Parameters_1 = K2Node_Event_Parameters_1;
	Parms.K2Node_Event_ParticleComponents_1 = K2Node_Event_ParticleComponents_1;
	Parms.K2Node_Event_AudioComponents_1 = K2Node_Event_AudioComponents_1;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CheckSurfaceType_SurfaceTypeInt = CallFunc_CheckSurfaceType_SurfaceTypeInt;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
