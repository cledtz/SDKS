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


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OnRep_AttachedPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::OnRep_AttachedPlayer()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "OnRep_AttachedPlayer");

	Params::UBP_ZipLine_Athena_Harness_C_OnRep_AttachedPlayer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Update Audio and VFXParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Alpha                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpeedFactor                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_1                 (ContainsInstancedReference)
// float                              CallFunc_GetZiplineSpeedFactor_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetZiplineSpeedFactorTarget_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SpeedFactor_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZipLine_Athena_Harness_C::Update_Audio_and_VFXParams(double Alpha, double SpeedFactor, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, float CallFunc_GetZiplineSpeedFactor_ReturnValue, float CallFunc_GetZiplineSpeedFactorTarget_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1, double K2Node_VariableSet_SpeedFactor_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Update Audio and VFXParams");

	Params::UBP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams_Params Parms;

	Parms.Alpha = Alpha;
	Parms.SpeedFactor = SpeedFactor;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_1 = CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	Parms.CallFunc_GetZiplineSpeedFactor_ReturnValue = CallFunc_GetZiplineSpeedFactor_ReturnValue;
	Parms.CallFunc_GetZiplineSpeedFactorTarget_ReturnValue = CallFunc_GetZiplineSpeedFactorTarget_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;
	Parms.CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1 = CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1;
	Parms.K2Node_VariableSet_SpeedFactor_ImplicitCast = K2Node_VariableSet_SpeedFactor_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ReceiveBeginPlay");

	Params::UBP_ZipLine_Athena_Harness_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::Start_Travel_Audio()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Start Travel Audio");

	Params::UBP_ZipLine_Athena_Harness_C_Start_Travel_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::Stop_Travel_Audio()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Stop Travel Audio");

	Params::UBP_ZipLine_Athena_Harness_C_Stop_Travel_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ReceiveDestroyed");

	Params::UBP_ZipLine_Athena_Harness_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZipLine_Athena_Harness_C::HandleOnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "HandleOnDied");

	Params::UBP_ZipLine_Athena_Harness_C_HandleOnDied_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::Chime_Visual()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Chime Visual");

	Params::UBP_ZipLine_Athena_Harness_C_Chime_Visual_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OrientMotorForZipline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAthenaZiplineBase*      Zipline                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DesiredZiplineOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZipLine_Athena_Harness_C::OrientMotorForZipline(class UFortAthenaZiplineBase* Zipline, const struct FVector& DesiredZiplineOffset)
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "OrientMotorForZipline");

	Params::UBP_ZipLine_Athena_Harness_C_OrientMotorForZipline_Params Parms;

	Parms.Zipline = Zipline;
	Parms.DesiredZiplineOffset = DesiredZiplineOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.RotateToZiplineDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::RotateToZiplineDirection()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "RotateToZiplineDirection");

	Params::UBP_ZipLine_Athena_Harness_C_RotateToZiplineDirection_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToSpline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::UpdateMotorToSpline()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "UpdateMotorToSpline");

	Params::UBP_ZipLine_Athena_Harness_C_UpdateMotorToSpline_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateParamsForAudioAndVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::UpdateParamsForAudioAndVFX()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "UpdateParamsForAudioAndVFX");

	Params::UBP_ZipLine_Athena_Harness_C_UpdateParamsForAudioAndVFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Cleanup On DownhillGCN
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::Cleanup_On_DownhillGCN()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "Cleanup On DownhillGCN");

	Params::UBP_ZipLine_Athena_Harness_C_Cleanup_On_DownhillGCN_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateZiplineOffsetLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::UpdateZiplineOffsetLocation()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "UpdateZiplineOffsetLocation");

	Params::UBP_ZipLine_Athena_Harness_C_UpdateZiplineOffsetLocation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToDynSpline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ZipLine_Athena_Harness_C::UpdateMotorToDynSpline()
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "UpdateMotorToDynSpline");

	Params::UBP_ZipLine_Athena_Harness_C_UpdateMotorToDynSpline_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array                                           (ReferenceParm)
// class UFortAthenaZiplineBase*      K2Node_CustomEvent_Zipline                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_DesiredZiplineOffset                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C*K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Athena_Environmental_ZipLine_Spline_C*K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_FindDirectionClosestToWorldLocation_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue_1                 (ContainsInstancedReference)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class UFortPlayerController*>Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ZipLine_Athena_Harness_C::ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UController* K2Node_CustomEvent_InstigatedBy, class UActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool Temp_bool_Variable_1, class UParticleSystem* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, class UFortAthenaZiplineBase* K2Node_CustomEvent_Zipline, const struct FVector& K2Node_CustomEvent_DesiredZiplineOffset, uint8 CallFunc_GetActorTeam_ReturnValue, class UPROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_FindDirectionClosestToWorldLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* K2Node_Select_Default_1, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, TArray<class UFortPlayerController*>& Temp_object_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FVector& CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2)
{
	static auto Func = Class->GetFunction("BP_ZipLine_Athena_Harness_C", "ExecuteUbergraph_BP_ZipLine_Athena_Harness");

	Params::UBP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_Zipline = K2Node_CustomEvent_Zipline;
	Parms.K2Node_CustomEvent_DesiredZiplineOffset = K2Node_CustomEvent_DesiredZiplineOffset;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline = K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline = K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_FindDirectionClosestToWorldLocation_ReturnValue = CallFunc_FindDirectionClosestToWorldLocation_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_1 = CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1 = CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
