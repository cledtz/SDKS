#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Athena_Consumable_Throw_Parent_C::ShouldOnlyShowTrajectoryOnUse()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ShouldOnlyShowTrajectoryOnUse");

	Params::UGA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSpawnOnEquip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortProjectileTrajectory*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortProjectileTrajectory* UGA_Athena_Consumable_Throw_Parent_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "SpawnTrajectoryIndicator");

	Params::UGA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator_Params Parms;

	Parms.bSpawnOnEquip = bSpawnOnEquip;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UFortProjectileTrajectory>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class UFortProjectileTrajectory> UGA_Athena_Consumable_Throw_Parent_C::GetProjectileTrajectoryActor()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileTrajectoryActor");

	Params::UGA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>             OutSplinePoints                                                  (Parm, OutParm)
// TArray<struct FVector>             OutSplineTangents                                                (Parm, OutParm)
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSpawnLocationAndRotation_Location                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSpawnLocationAndRotation_Rotation                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_CalculateProjectileTrajectory_OutHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectory_OutSplinePoints           (ReferenceParm)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectory_OutSplineTangents         (ReferenceParm)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_CalculateProjectileTrajectory_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectory_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectory_OutSplineTangents, double CallFunc_Multiply_VectorFloat_B_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileTrajectoryPoints");

	Params::UGA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints_Params Parms;

	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetSpawnLocationAndRotation_Location = CallFunc_GetSpawnLocationAndRotation_Location;
	Parms.CallFunc_GetSpawnLocationAndRotation_Rotation = CallFunc_GetSpawnLocationAndRotation_Rotation;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_CalculateProjectileTrajectory_OutHitResult = CallFunc_CalculateProjectileTrajectory_OutHitResult;
	Parms.CallFunc_CalculateProjectileTrajectory_OutSplinePoints = CallFunc_CalculateProjectileTrajectory_OutSplinePoints;
	Parms.CallFunc_CalculateProjectileTrajectory_OutSplineTangents = CallFunc_CalculateProjectileTrajectory_OutSplineTangents;
	Parms.CallFunc_Multiply_VectorFloat_B_ImplicitCast = CallFunc_Multiply_VectorFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = Parms.OutSplinePoints;

	if (OutSplineTangents != nullptr)
		*OutSplineTangents = Parms.OutSplineTangents;

	if (OutHitResult != nullptr)
		*OutHitResult = Parms.OutHitResult;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.Get Throw Montage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingFirstPersonCamera_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::Get_Throw_Montage(class UAnimMontage** Montage, bool CallFunc_IsValid_ReturnValue, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "Get Throw Montage");

	Params::UGA_Athena_Consumable_Throw_Parent_C_Get_Throw_Montage_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsUsingFirstPersonCamera_ReturnValue = CallFunc_IsUsingFirstPersonCamera_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetCookMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingFirstPersonCamera_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::GetCookMontage(class UAnimMontage** Montage, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class UController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetCookMontage");

	Params::UGA_Athena_Consumable_Throw_Parent_C_GetCookMontage_Params Parms;

	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsUsingFirstPersonCamera_ReturnValue = CallFunc_IsUsingFirstPersonCamera_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.CalculateProjectileTrajectory
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPawn*                   Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InitialLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InitialVelocity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FVector>             OutSplinePoints                                                  (Parm, OutParm)
// TArray<struct FVector>             OutSplineTangents                                                (Parm, OutParm)
// TArray<class UActor*>              ProjectileIgnoredActors                                          (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class UActor*>              CallFunc_GetProjectileIgnoredActors_ReturnValue                  (ReferenceParm)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult(IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints(ReferenceParm)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents(ReferenceParm)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints(ReferenceParm)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents(ReferenceParm)
// double                             CallFunc_FMax_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateProjectileTrajectorySplineWithHit_TraceExtent_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_B_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TraceExtent_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TimeStep_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateProjectileTrajectorySplineWithHit_TimeStep_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::CalculateProjectileTrajectory(class UFortPawn* Instigator, const struct FVector& InitialLocation, const struct FVector& InitialVelocity, struct FHitResult* OutHitResult, TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, const TArray<class UActor*>& ProjectileIgnoredActors, TArray<class UActor*>& CallFunc_GetProjectileIgnoredActors_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_FMax_ReturnValue_1, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue, int32 K2Node_Select_Default, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents, int32 K2Node_Select_Default_1, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents, double CallFunc_FMax_A_ImplicitCast, double CallFunc_FMax_B_ImplicitCast, float CallFunc_CalculateProjectileTrajectorySplineWithHit_TraceExtent_ImplicitCast, double CallFunc_FMax_A_ImplicitCast_1, double CallFunc_FMax_B_ImplicitCast_1, float CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TraceExtent_ImplicitCast, float CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TimeStep_ImplicitCast, float CallFunc_CalculateProjectileTrajectorySplineWithHit_TimeStep_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "CalculateProjectileTrajectory");

	Params::UGA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory_Params Parms;

	Parms.Instigator = Instigator;
	Parms.InitialLocation = InitialLocation;
	Parms.InitialVelocity = InitialVelocity;
	Parms.ProjectileIgnoredActors = ProjectileIgnoredActors;
	Parms.CallFunc_GetProjectileIgnoredActors_ReturnValue = CallFunc_GetProjectileIgnoredActors_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult = CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints = CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents = CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents;
	Parms.CallFunc_FMax_A_ImplicitCast = CallFunc_FMax_A_ImplicitCast;
	Parms.CallFunc_FMax_B_ImplicitCast = CallFunc_FMax_B_ImplicitCast;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_TraceExtent_ImplicitCast = CallFunc_CalculateProjectileTrajectorySplineWithHit_TraceExtent_ImplicitCast;
	Parms.CallFunc_FMax_A_ImplicitCast_1 = CallFunc_FMax_A_ImplicitCast_1;
	Parms.CallFunc_FMax_B_ImplicitCast_1 = CallFunc_FMax_B_ImplicitCast_1;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TraceExtent_ImplicitCast = CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TraceExtent_ImplicitCast;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TimeStep_ImplicitCast = CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TimeStep_ImplicitCast;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_TimeStep_ImplicitCast = CallFunc_CalculateProjectileTrajectorySplineWithHit_TimeStep_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHitResult != nullptr)
		*OutHitResult = Parms.OutHitResult;

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = Parms.OutSplinePoints;

	if (OutSplineTangents != nullptr)
		*OutSplineTangents = Parms.OutSplineTangents;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Athena_Consumable_Throw_Parent_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, bool Temp_bool_Variable, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "K2_CanActivateAbility");

	Params::UGA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.IsTrajectoryLocationValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>             SplinePoints                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>             SplineTangents                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHitResult                  TrajectoryHitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               bIsLocationValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOverlappingDeployableBlockVolume_bOverlapping         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::IsTrajectoryLocationValid(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents, const struct FHitResult& TrajectoryHitResult, bool* bIsLocationValid, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, bool CallFunc_IsOverlappingDeployableBlockVolume_bOverlapping, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "IsTrajectoryLocationValid");

	Params::UGA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid_Params Parms;

	Parms.SplinePoints = SplinePoints;
	Parms.SplineTangents = SplineTangents;
	Parms.TrajectoryHitResult = TrajectoryHitResult;
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
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_IsOverlappingDeployableBlockVolume_bOverlapping = CallFunc_IsOverlappingDeployableBlockVolume_bOverlapping;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsLocationValid != nullptr)
		*bIsLocationValid = Parms.bIsLocationValid;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnUpdateTrajectory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             SplinePoints                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>             SplineTangents                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FHitResult                  TrajectoryHitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Athena_Consumable_Throw_Parent_C::OnUpdateTrajectory(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents, const struct FHitResult& TrajectoryHitResult)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnUpdateTrajectory");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory_Params Parms;

	Parms.SplinePoints = SplinePoints;
	Parms.SplineTangents = SplineTangents;
	Parms.TrajectoryHitResult = TrajectoryHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.AddValidCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::AddValidCamera(bool CallFunc_IsValidClass_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "AddValidCamera");

	Params::UGA_Athena_Consumable_Throw_Parent_C_AddValidCamera_Params Parms;

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetOwningPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerPawn*             Player_Pawn                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::GetOwningPlayer(class UFortPlayerPawn** Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetOwningPlayer");

	Params::UGA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Pawn != nullptr)
		*Player_Pawn = Parms.Player_Pawn;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ExecuteThrowGC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::ExecuteThrowGC(bool CallFunc_IsGameplayTagValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ExecuteThrowGC");

	Params::UGA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC_Params Parms;

	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.K2_OverrideFailedReason
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       FailedReason                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       OverridenFailedReason                                            (Parm, OutParm)
// struct FGameplayTagContainer       CallFunc_K2_OverrideFailedReason_OverridenFailedReason           ()
// class UActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::K2_OverrideFailedReason(struct FGameplayTagContainer& FailedReason, struct FGameplayTagContainer* OverridenFailedReason, const struct FGameplayTagContainer& CallFunc_K2_OverrideFailedReason_OverridenFailedReason, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "K2_OverrideFailedReason");

	Params::UGA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason_Params Parms;

	Parms.FailedReason = FailedReason;
	Parms.CallFunc_K2_OverrideFailedReason_OverridenFailedReason = CallFunc_K2_OverrideFailedReason_OverridenFailedReason;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OverridenFailedReason != nullptr)
		*OverridenFailedReason = Parms.OverridenFailedReason;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.RemoveCookGC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::RemoveCookGC(bool CallFunc_IsGameplayTagValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "RemoveCookGC");

	Params::UGA_Athena_Consumable_Throw_Parent_C_RemoveCookGC_Params Parms;

	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.AddCookGC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::AddCookGC(bool CallFunc_IsGameplayTagValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "AddCookGC");

	Params::UGA_Athena_Consumable_Throw_Parent_C_AddCookGC_Params Parms;

	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileAdditionalThrowAngleToUse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             AdditionalThrowAngleToUse                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeapon*                 AbilitySourceWeapon                                              (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProjectilePitchOffset_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeapon*                 CallFunc_GetCurrentSourceWeapon_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::GetProjectileAdditionalThrowAngleToUse(double* AdditionalThrowAngleToUse, class UFortWeapon* AbilitySourceWeapon, float CallFunc_GetProjectilePitchOffset_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileAdditionalThrowAngleToUse");

	Params::UGA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse_Params Parms;

	Parms.AbilitySourceWeapon = AbilitySourceWeapon;
	Parms.CallFunc_GetProjectilePitchOffset_ReturnValue = CallFunc_GetProjectilePitchOffset_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetCurrentSourceWeapon_ReturnValue = CallFunc_GetCurrentSourceWeapon_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (AdditionalThrowAngleToUse != nullptr)
		*AdditionalThrowAngleToUse = Parms.AdditionalThrowAngleToUse;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileInitialGravityScaleToUse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             GravityScaleToUse                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      GetProjectileInitialGravityScaleContext                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurveTableRowValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_GravityScaleToUse_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_GravityScaleToUse_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::GetProjectileInitialGravityScaleToUse(double* GravityScaleToUse, const class FString& GetProjectileInitialGravityScaleContext, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_IsCurveTableRowValid_ReturnValue, double K2Node_FunctionResult_GravityScaleToUse_ImplicitCast, double K2Node_FunctionResult_GravityScaleToUse_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileInitialGravityScaleToUse");

	Params::UGA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse_Params Parms;

	Parms.GetProjectileInitialGravityScaleContext = GetProjectileInitialGravityScaleContext;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;
	Parms.CallFunc_IsCurveTableRowValid_ReturnValue = CallFunc_IsCurveTableRowValid_ReturnValue;
	Parms.K2Node_FunctionResult_GravityScaleToUse_ImplicitCast = K2Node_FunctionResult_GravityScaleToUse_ImplicitCast;
	Parms.K2Node_FunctionResult_GravityScaleToUse_ImplicitCast_1 = K2Node_FunctionResult_GravityScaleToUse_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (GravityScaleToUse != nullptr)
		*GravityScaleToUse = Parms.GravityScaleToUse;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileInitialSpeedToUse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             ProjectileSpeedToUse                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      GetProjectileInitialSpeedToUseContext                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateCurveTableRow_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurveTableRowValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::GetProjectileInitialSpeedToUse(double* ProjectileSpeedToUse, const class FString& GetProjectileInitialSpeedToUseContext, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_IsCurveTableRowValid_ReturnValue, double K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast, double K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetProjectileInitialSpeedToUse");

	Params::UGA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse_Params Parms;

	Parms.GetProjectileInitialSpeedToUseContext = GetProjectileInitialSpeedToUseContext;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_ReturnValue = CallFunc_EvaluateCurveTableRow_ReturnValue;
	Parms.CallFunc_IsCurveTableRowValid_ReturnValue = CallFunc_IsCurveTableRowValid_ReturnValue;
	Parms.K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast = K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast;
	Parms.K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast_1 = K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileSpeedToUse != nullptr)
		*ProjectileSpeedToUse = Parms.ProjectileSpeedToUse;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.CleanupTrajectory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::CleanupTrajectory(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "CleanupTrajectory");

	Params::UGA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.PostThrowCleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::PostThrowCleanup(bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "PostThrowCleanup");

	Params::UGA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup_Params Parms;

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints           (ReferenceParm)
// TArray<struct FVector>             CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents         (ReferenceParm)
// struct FHitResult                  CallFunc_GetProjectileTrajectoryPoints_OutHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsTrajectoryLocationValid_bIsLocationValid              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::UpdateTrajectorySpline(TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents, const struct FHitResult& CallFunc_GetProjectileTrajectoryPoints_OutHitResult, bool CallFunc_IsTrajectoryLocationValid_bIsLocationValid, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "UpdateTrajectorySpline");

	Params::UGA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline_Params Parms;

	Parms.CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints = CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints;
	Parms.CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents = CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents;
	Parms.CallFunc_GetProjectileTrajectoryPoints_OutHitResult = CallFunc_GetProjectileTrajectoryPoints_OutHitResult;
	Parms.CallFunc_IsTrajectoryLocationValid_bIsLocationValid = CallFunc_IsTrajectoryLocationValid_bIsLocationValid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortProjectileTrajectory*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ProjectileTrajectory_C*  K2Node_DynamicCast_AsBP_Projectile_Trajectory                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::SetupDummyProjectile(class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UFortProjectileTrajectory* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "SetupDummyProjectile");

	Params::UGA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile_Params Parms;

	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Trajectory = K2Node_DynamicCast_AsBP_Projectile_Trajectory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortProjectileBase*         SpawnedProjectile                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::OnProjectileSpawned(class UFortProjectileBase* SpawnedProjectile)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnProjectileSpawned");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned_Params Parms;

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.SpawnThrownProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ProjectileClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ProjectileSpawnLocation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ProjectileSpawnDirection                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecHitEffectContainerSpec                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortGameplayEffectContainerSpecExplosionEffectContainerSpec                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             ProjectileInitialSpeed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ProjectileGravityScale                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortProjectileBase*         SpawnedProjectile                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SpawnProjectile_GravityScale_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::SpawnThrownProjectile(class UClass* ProjectileClass, struct FVector& ProjectileSpawnLocation, struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, double ProjectileInitialSpeed, double ProjectileGravityScale, class UFortProjectileBase** SpawnedProjectile, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class UFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, float CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast, float CallFunc_SpawnProjectile_GravityScale_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "SpawnThrownProjectile");

	Params::UGA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile_Params Parms;

	Parms.ProjectileClass = ProjectileClass;
	Parms.ProjectileSpawnLocation = ProjectileSpawnLocation;
	Parms.ProjectileSpawnDirection = ProjectileSpawnDirection;
	Parms.HitEffectContainerSpec = HitEffectContainerSpec;
	Parms.ExplosionEffectContainerSpec = ExplosionEffectContainerSpec;
	Parms.ProjectileInitialSpeed = ProjectileInitialSpeed;
	Parms.ProjectileGravityScale = ProjectileGravityScale;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;
	Parms.CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast = CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast;
	Parms.CallFunc_SpawnProjectile_GravityScale_ImplicitCast = CallFunc_SpawnProjectile_GravityScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedProjectile != nullptr)
		*SpawnedProjectile = Parms.SpawnedProjectile;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnProjectileSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnProjectileSetup()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnProjectileSetup");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnProjectileSetup_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetSpawnLocationAndRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSurfaceSwimming_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_Angle_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation, double CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsSurfaceSwimming_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, double CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& K2Node_Select_Default_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double CallFunc_FMin_A_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "GetSpawnLocationAndRotation");

	Params::UGA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation_Params Parms;

	Parms.CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse = CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn_1 = CallFunc_GetOwningPlayer_Player_Pawn_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsSurfaceSwimming_ReturnValue = CallFunc_IsSurfaceSwimming_ReturnValue;
	Parms.CallFunc_NormalizeAxis_ReturnValue = CallFunc_NormalizeAxis_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NormalizeAxis_Angle_ImplicitCast = CallFunc_NormalizeAxis_Angle_ImplicitCast;
	Parms.CallFunc_FMin_A_ImplicitCast = CallFunc_FMin_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = Parms.Location;

	if (Rotation != nullptr)
		*Rotation = Parms.Rotation;

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.PrethrowSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::PrethrowSetup(const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "PrethrowSetup");

	Params::UGA_Athena_Consumable_Throw_Parent_C_PrethrowSetup_Params Parms;

	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnFinish_96367E244486362FDDE5ED87D909C17B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnFinish_96367E244486362FDDE5ED87D909C17B()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnFinish_96367E244486362FDDE5ED87D909C17B");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnFinish_96367E244486362FDDE5ED87D909C17B_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.Completed_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::Completed_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "Completed_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::UGA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::UGA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.Triggered_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::Triggered_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "Triggered_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::UGA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeHeld                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0(float TimeHeld)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0_Params Parms;

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_Throw_Parent_C::EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F(const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F");

	Params::UGA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F_Params Parms;

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnSync_9C8FDC8044B1444580A9809C231F294D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnSync_9C8FDC8044B1444580A9809C231F294D()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnSync_9C8FDC8044B1444580A9809C231F294D");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnSync_9C8FDC8044B1444580A9809C231F294D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_Throw_Parent_C::EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6(const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6");

	Params::UGA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6_Params Parms;

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.AttemptSpawnThrownProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::AttemptSpawnThrownProjectile()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "AttemptSpawnThrownProjectile");

	Params::UGA_Athena_Consumable_Throw_Parent_C_AttemptSpawnThrownProjectile_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::InitTrajectoryVariables()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "InitTrajectoryVariables");

	Params::UGA_Athena_Consumable_Throw_Parent_C_InitTrajectoryVariables_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ThrowProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::ThrowProjectile()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ThrowProjectile");

	Params::UGA_Athena_Consumable_Throw_Parent_C_ThrowProjectile_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ThrowMontageStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::ThrowMontageStarted()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ThrowMontageStarted");

	Params::UGA_Athena_Consumable_Throw_Parent_C_ThrowMontageStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnAbilityInputReleased()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnAbilityInputReleased");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnAbilityInputReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "K2_ActivateAbility");

	Params::UGA_Athena_Consumable_Throw_Parent_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::UpdateTrajectory()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "UpdateTrajectory");

	Params::UGA_Athena_Consumable_Throw_Parent_C_UpdateTrajectory_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "CleanupTrajectoryIndicatorOnUnequip");

	Params::UGA_Athena_Consumable_Throw_Parent_C_CleanupTrajectoryIndicatorOnUnequip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "K2_OnEndAbility");

	Params::UGA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetWeaponData_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeHeld                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputRelease*CallFunc_WaitInputRelease_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload_1                                     ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable_2                                           ()
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_NetworkSyncPoint*CallFunc_WaitNetSync_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       ()
// struct FGameplayEventData          Temp_struct_Variable_3                                           ()
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   CallFunc_GetWeaponData_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSpawnLocationAndRotation_Location                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSpawnLocationAndRotation_Rotation                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortProjectileTrajectory*   CallFunc_SpawnTrajectoryIndicator_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1           ()
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2           ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortProjectileTrajectoryDataCallFunc_GetProjectileTrajectoryData_TrajectoryData              (NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCookMontage_Montage                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortProjectileBase*         CallFunc_SpawnThrownProjectile_SpawnedProjectile                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData_1                            ()
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Get_Throw_Montage_Montage                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProjectileTrajectoryData_DefaultSpeed_ImplicitCast   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SpawnThrownProjectile_ProjectileInitialSpeed_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Consumable_Throw_Parent_C::ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent(int32 EntryPoint, bool CallFunc_IsUsingTouch_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, float K2Node_CustomEvent_TimeHeld, float Temp_real_Variable, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayEventData& Temp_struct_Variable_2, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable_3, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, class UFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class UFortProjectileTrajectory* CallFunc_SpawnTrajectoryIndicator_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, bool K2Node_Event_bWasCancelled, double CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse, double CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse, const struct FFortProjectileTrajectoryData& CallFunc_GetProjectileTrajectoryData_TrajectoryData, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UAnimMontage* CallFunc_GetCookMontage_Montage, class UFortProjectileBase* CallFunc_SpawnThrownProjectile_SpawnedProjectile, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsValid_ReturnValue_8, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, bool CallFunc_IsValid_ReturnValue_9, class UAnimMontage* CallFunc_Get_Throw_Montage_Montage, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, float CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast, float CallFunc_GetProjectileTrajectoryData_DefaultSpeed_ImplicitCast, double CallFunc_SpawnThrownProjectile_ProjectileInitialSpeed_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent");

	Params::UGA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetWeaponData_ReturnValue = CallFunc_GetWeaponData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_CustomEvent_TimeHeld = K2Node_CustomEvent_TimeHeld;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_WaitInputRelease_ReturnValue = CallFunc_WaitInputRelease_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Payload_1 = K2Node_CustomEvent_Payload_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_WaitNetSync_ReturnValue = CallFunc_WaitNetSync_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue_1 = CallFunc_WaitGameplayEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetWeaponData_ReturnValue_1 = CallFunc_GetWeaponData_ReturnValue_1;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetSpawnLocationAndRotation_Location = CallFunc_GetSpawnLocationAndRotation_Location;
	Parms.CallFunc_GetSpawnLocationAndRotation_Rotation = CallFunc_GetSpawnLocationAndRotation_Rotation;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_SpawnTrajectoryIndicator_ReturnValue = CallFunc_SpawnTrajectoryIndicator_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1 = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2 = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse = CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse;
	Parms.CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse = CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse;
	Parms.CallFunc_GetProjectileTrajectoryData_TrajectoryData = CallFunc_GetProjectileTrajectoryData_TrajectoryData;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_GetCookMontage_Montage = CallFunc_GetCookMontage_Montage;
	Parms.CallFunc_SpawnThrownProjectile_SpawnedProjectile = CallFunc_SpawnThrownProjectile_SpawnedProjectile;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_MakeStruct_GameplayEventData_1 = K2Node_MakeStruct_GameplayEventData_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Get_Throw_Montage_Montage = CallFunc_Get_Throw_Montage_Montage;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast = CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast;
	Parms.CallFunc_GetProjectileTrajectoryData_DefaultSpeed_ImplicitCast = CallFunc_GetProjectileTrajectoryData_DefaultSpeed_ImplicitCast;
	Parms.CallFunc_SpawnThrownProjectile_ProjectileInitialSpeed_ImplicitCast = CallFunc_SpawnThrownProjectile_ProjectileInitialSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnProjectileSpawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Consumable_Throw_Parent_C::OnProjectileSpawn__DelegateSignature()
{
	static auto Func = Class->GetFunction("GA_Athena_Consumable_Throw_Parent_C", "OnProjectileSpawn__DelegateSignature");

	Params::UGA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawn__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
