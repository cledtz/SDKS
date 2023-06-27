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


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaximumDistance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PointsToDisable                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPointProvidersEnabler::RemoveClosestPointProvidersToPoint(struct FVector& Point, float MaximumDistance, int32 PointsToDisable)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "RemoveClosestPointProvidersToPoint");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_RemoveClosestPointProvidersToPoint_Params Parms;

	Parms.Point = Point;
	Parms.MaximumDistance = MaximumDistance;
	Parms.PointsToDisable = PointsToDisable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPointProvidersEnabler::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<FInterfaceProperty_>        EnabledPointProviders                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPointProvidersEnabler::OnCompletedEvaluation__DelegateSignature(TArray<FInterfaceProperty_>& EnabledPointProviders)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCompletedEvaluation__DelegateSignature");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_OnCompletedEvaluation__DelegateSignature_Params Parms;

	Parms.EnabledPointProviders = EnabledPointProviders;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaLivingWorldPointProvidersEnabler::HasCompletedEvaluation()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "HasCompletedEvaluation");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_HasCompletedEvaluation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer AFortAthenaLivingWorldPointProvidersEnabler::GetEnablerTags()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnablerTags");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_GetEnablerTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<FInterfaceProperty_>        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<FInterfaceProperty_> AFortAthenaLivingWorldPointProvidersEnabler::GetEnabledLinkedPointProviders()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnabledLinkedPointProviders");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_GetEnabledLinkedPointProviders_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldPointProvidersEnabler::EvaluateAndEnablePointProviders()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "EvaluateAndEnablePointProviders");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_EvaluateAndEnablePointProviders_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaLivingWorldPointProvidersEnabler::DoesStartEnabled()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "DoesStartEnabled");

	Params::AFortAthenaLivingWorldPointProvidersEnabler_DoesStartEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnStageCompleted
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AFortPickup*>         SpawnedRewards                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnStageCompleted(TArray<class AFortPickup*>& SpawnedRewards)
{
	static auto Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnStageCompleted");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnStageCompleted_Params Parms;

	Parms.SpawnedRewards = SpawnedRewards;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterStart
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaLivingWorldEncounterInstance*InAttackerEncounter                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounterInstance*InDefenderEncounter                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter)
{
	static auto Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnEncounterStart");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnEncounterStart_Params Parms;

	Parms.InAttackerEncounter = InAttackerEncounter;
	Parms.InDefenderEncounter = InDefenderEncounter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterEnd
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLinearEncounterAnalyticComponent::OnEncounterEnd()
{
	static auto Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnEncounterEnd");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnEncounterEnd_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderSpawned
// (Final, Native, Private)
// Parameters:
// class AActor*                      SpawnedDefender                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderSpawned(class AActor* SpawnedDefender)
{
	static auto Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderSpawned");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnDefenderSpawned_Params Parms;

	Parms.SpawnedDefender = SpawnedDefender;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDied");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDied_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDidDamage
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDidDamage");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDidDamage_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDamaged
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDamaged");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDamaged_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnAttackerSpawned
// (Final, Native, Private)
// Parameters:
// class AActor*                      SpawnedAttacker                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnAttackerSpawned(class AActor* SpawnedAttacker)
{
	static auto Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnAttackerSpawned");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnAttackerSpawned_Params Parms;

	Parms.SpawnedAttacker = SpawnedAttacker;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.StartEncounterStage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StageIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::StartEncounterStage(int32 StageIndex)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "StartEncounterStage");

	Params::UFortAthenaLivingWorldEncounterInstance_StartEncounterStage_Params Parms;

	Parms.StageIndex = StageIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::ResumeEncounter()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "ResumeEncounter");

	Params::UFortAthenaLivingWorldEncounterInstance_ResumeEncounter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.Reset
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::Reset()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "Reset");

	Params::UFortAthenaLivingWorldEncounterInstance_Reset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::RequestEventGeneration()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "RequestEventGeneration");

	Params::UFortAthenaLivingWorldEncounterInstance_RequestEventGeneration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.RemoveAllowedPointProvider
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                PointProvider                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::RemoveAllowedPointProvider(FInterfaceProperty_& PointProvider)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "RemoveAllowedPointProvider");

	Params::UFortAthenaLivingWorldEncounterInstance_RemoveAllowedPointProvider_Params Parms;

	Parms.PointProvider = PointProvider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::PauseEncounter()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "PauseEncounter");

	Params::UFortAthenaLivingWorldEncounterInstance_PauseEncounter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.OwnsActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldEncounterInstance::OwnsActor(class AActor* Actor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OwnsActor");

	Params::UFortAthenaLivingWorldEncounterInstance_OwnsActor_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnEncounterActorDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnEncounterActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnEncounterActorDied");

	Params::UFortAthenaLivingWorldEncounterInstance_OnEncounterActorDied_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorSpawned__DelegateSignature(class AActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorSpawned__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDied__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      DiedActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorDied__DelegateSignature(class AActor* DiedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorDied__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorDied__DelegateSignature_Params Parms;

	Parms.DiedActor = DiedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorDestroyed__DelegateSignature(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorDestroyed__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorDestroyed__DelegateSignature_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.HasReachedMaxSpawnedCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldEncounterInstance::HasReachedMaxSpawnedCount()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "HasReachedMaxSpawnedCount");

	Params::UFortAthenaLivingWorldEncounterInstance_HasReachedMaxSpawnedCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldEncounterInstance::GetTotalActorCount()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "GetTotalActorCount");

	Params::UFortAthenaLivingWorldEncounterInstance_GetTotalActorCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetAliveSpawnedActorCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldEncounterInstance::GetAliveSpawnedActorCount()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "GetAliveSpawnedActorCount");

	Params::UFortAthenaLivingWorldEncounterInstance_GetAliveSpawnedActorCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::AdvanceEncounterStage()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "AdvanceEncounterStage");

	Params::UFortAthenaLivingWorldEncounterInstance_AdvanceEncounterStage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AddAllowedPointProvider
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                PointProvider                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::AddAllowedPointProvider(FInterfaceProperty_& PointProvider)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "AddAllowedPointProvider");

	Params::UFortAthenaLivingWorldEncounterInstance_AddAllowedPointProvider_Params Parms;

	Parms.PointProvider = PointProvider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::UnregisterDensityReservoir(class AActor* ActorDensityReservoir)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "UnregisterDensityReservoir");

	Params::UFortAthenaLivingWorldManager_UnregisterDensityReservoir_Params Parms;

	Parms.ActorDensityReservoir = ActorDensityReservoir;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         EventEntry                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnLocation                                                    (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnRequestFinished                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldManager::TrySpawnEvent(const struct FDataTableRowHandle& EventEntry, const struct FTransform& SpawnLocation, FDelegateProperty_& OnRequestFinished, int32* RequestID)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "TrySpawnEvent");

	Params::UFortAthenaLivingWorldManager_TrySpawnEvent_Params Parms;

	Parms.EventEntry = EventEntry;
	Parms.SpawnLocation = SpawnLocation;
	Parms.OnRequestFinished = OnRequestFinished;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (RequestID != nullptr)
		*RequestID = Parms.RequestID;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.StartEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UFortAthenaLivingWorldEncounter>EncounterType                                                    (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<FInterfaceProperty_>        EncounterPointProviders                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// class AActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounterInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::StartEncounter(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType, TArray<FInterfaceProperty_>& EncounterPointProviders, class AActor* ActorDensityReservoir)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "StartEncounter");

	Params::UFortAthenaLivingWorldManager_StartEncounter_Params Parms;

	Parms.EncounterType = EncounterType;
	Parms.EncounterPointProviders = EncounterPointProviders;
	Parms.ActorDensityReservoir = ActorDensityReservoir;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaLivingWorldEncounterInstance*EncounterInstance                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::ResetEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "ResetEncounter");

	Params::UFortAthenaLivingWorldManager_ResetEncounter_Params Parms;

	Parms.EncounterInstance = EncounterInstance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldManager::RequestEventGeneration()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "RequestEventGeneration");

	Params::UFortAthenaLivingWorldManager_RequestEventGeneration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.RegisterTagDensityReservoir
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration>TagsDensity                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::RegisterTagDensityReservoir(class AActor* ActorDensityReservoir, TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "RegisterTagDensityReservoir");

	Params::UFortAthenaLivingWorldManager_RegisterTagDensityReservoir_Params Parms;

	Parms.ActorDensityReservoir = ActorDensityReservoir;
	Parms.TagsDensity = TagsDensity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Density                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::RegisterDensityReservoir(class AActor* ActorDensityReservoir, float Density, float Range)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "RegisterDensityReservoir");

	Params::UFortAthenaLivingWorldManager_RegisterDensityReservoir_Params Parms;

	Parms.ActorDensityReservoir = ActorDensityReservoir;
	Parms.Density = Density;
	Parms.Range = Range;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         EventEntry                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      SpawnLocation                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldManager::QueryEventBudget(const struct FDataTableRowHandle& EventEntry, class AActor* SpawnLocation)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "QueryEventBudget");

	Params::UFortAthenaLivingWorldManager_QueryEventBudget_Params Parms;

	Parms.EventEntry = EventEntry;
	Parms.SpawnLocation = SpawnLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnWorldFinishedInitialization");

	Params::UFortAthenaLivingWorldManager_OnWorldFinishedInitialization_Params Parms;

	Parms.ContextTags = ContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnUnmanagedDensityReservoirActorDestroy(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnUnmanagedDensityReservoirActorDestroy");

	Params::UFortAthenaLivingWorldManager_OnUnmanagedDensityReservoirActorDestroy_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnSpawnedActorDestroy");

	Params::UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator
// (Final, Native, Private)
// Parameters:
// class UFortAthenaLivingWorldDebugDensityMiniMapIndicator*OldMapIndicator                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnRep_DebugDensityMinimapIndicator");

	Params::UFortAthenaLivingWorldManager_OnRep_DebugDensityMinimapIndicator_Params Parms;

	Parms.OldMapIndicator = OldMapIndicator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient
// (Final, Native, Private)
// Parameters:

void UFortAthenaLivingWorldManager::OnRep_ActorClassToPreloadOnClient()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnRep_ActorClassToPreloadOnClient");

	Params::UFortAthenaLivingWorldManager_OnRep_ActorClassToPreloadOnClient_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
// (Final, Native, Private)
// Parameters:
// class AFortAthenaPatrolPath*       PatrolPath                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnPatrolPathAdded");

	Params::UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params Parms;

	Parms.PatrolPath = PatrolPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class AActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnDebugSpawnEventSpawned(TArray<class AActor*>& SpawnedActors, bool bSuccess)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnDebugSpawnEventSpawned");

	Params::UFortAthenaLivingWorldManager_OnDebugSpawnEventSpawned_Params Parms;

	Parms.SpawnedActors = SpawnedActors;
	Parms.bSuccess = bSuccess;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnActorSpawned(class AActor* Actor, int32 RequestID)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnActorSpawned");

	Params::UFortAthenaLivingWorldManager_OnActorSpawned_Params Parms;

	Parms.Actor = Actor;
	Parms.RequestID = RequestID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LWMTAM
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LWMTAM(const class FString& Name)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LWMTAM");

	Params::UFortAthenaLivingWorldManager_LWMTAM_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LWMF
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LWMF()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LWMF");

	Params::UFortAthenaLivingWorldManager_LWMF_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      PointProvider                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerUnregisterPointProvider");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params Parms;

	Parms.PointProvider = PointProvider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleVerboseLogging");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerToggleVerboseLogging_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleGenerateEvents");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerToggleGenerateEvents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleDensityDisplay()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleDensityDisplay");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerToggleDensityDisplay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap(const class FString& Name)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleActorMinimap");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerToggleActorMinimap_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSetEventGenerationEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInGenerateEvents                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerSetEventGenerationEnabled");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerSetEventGenerationEnabled_Params Parms;

	Parms.bInGenerateEvents = bInGenerateEvents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      PointProvider                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(class AActor* PointProvider)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerRegisterPointProvider");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params Parms;

	Parms.PointProvider = PointProvider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              ProviderIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int32 ProviderIndex)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerProviderDebugActor");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params Parms;

	Parms.ProviderIndex = ProviderIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerGenerateEvents");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerGenerateEvents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerFlush");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerFlush_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpSpawnCount()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpSpawnCount");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerDumpSpawnCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpPrefabLevelBounds
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpPrefabLevelBounds()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpPrefabLevelBounds");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerDumpPrefabLevelBounds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpEventInstances()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpEventInstances");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerDumpEventInstances_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDebugEvent
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DebugIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RuntimeSpawnDataName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EncounterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerDebugEvent(const class FString& EventName, int32 DebugIndex, const class FString& RuntimeSpawnDataName, const class FString& EncounterName)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDebugEvent");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerDebugEvent_Params Parms;

	Parms.EventName = EventName;
	Parms.DebugIndex = DebugIndex;
	Parms.RuntimeSpawnDataName = RuntimeSpawnDataName;
	Parms.EncounterName = EncounterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UFortAthenaLivingWorldEncounter>EncounterType                                                    (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldManager::IsEncounterCategoryActive(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "IsEncounterCategoryActive");

	Params::UFortAthenaLivingWorldManager_IsEncounterCategoryActive_Params Parms;

	Parms.EncounterType = EncounterType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounterInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::GetOwningEncounter(class AActor* Actor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "GetOwningEncounter");

	Params::UFortAthenaLivingWorldManager_GetOwningEncounter_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldManager*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldManager* UFortAthenaLivingWorldManager::GetLivingWorldManager(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "GetLivingWorldManager");

	Params::UFortAthenaLivingWorldManager_GetLivingWorldManager_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.EndEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaLivingWorldEncounterInstance*EncounterInstance                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "EndEncounter");

	Params::UFortAthenaLivingWorldManager_EndEncounter_Params Parms;

	Parms.EncounterInstance = EncounterInstance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::CancelSpawnRequest(int32 RequestID)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "CancelSpawnRequest");

	Params::UFortAthenaLivingWorldManager_CancelSpawnRequest_Params Parms;

	Parms.RequestID = RequestID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.BuildDataRegistryResolverScope_Implementation
// (Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class FName>                InOutResolverScopes                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              InOutPriority                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldManager::BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "BuildDataRegistryResolverScope_Implementation");

	Params::UFortAthenaLivingWorldManager_BuildDataRegistryResolverScope_Implementation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutResolverScopes != nullptr)
		*InOutResolverScopes = Parms.InOutResolverScopes;

	if (InOutPriority != nullptr)
		*InOutPriority = Parms.InOutPriority;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent.OnCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldNavigationInvokerComponent::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldNavigationInvokerComponent", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldNavigationInvokerComponent_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortAthenaLivingWorldPointProviderInterface::GetPointProviderLocation()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetPointProviderLocation");

	Params::UFortAthenaLivingWorldPointProviderInterface_GetPointProviderLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       FilterTags                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPointProviderInterface::GetFiltersTags(struct FGameplayTagContainer* FilterTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetFiltersTags");

	Params::UFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FilterTags != nullptr)
		*FilterTags = Parms.FilterTags;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPointProviderInterface::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "EnablePointProvider");

	Params::UFortAthenaLivingWorldPointProviderInterface_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPointProviderInterface::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "DisablePointProvider");

	Params::UFortAthenaLivingWorldPointProviderInterface_DisablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.RemoveFoliageInsideLevelBound
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldPrefab::RemoveFoliageInsideLevelBound()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "RemoveFoliageInsideLevelBound");

	Params::AFortAthenaLivingWorldPrefab_RemoveFoliageInsideLevelBound_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible
// (Final, Native, Protected)
// Parameters:

void AFortAthenaLivingWorldPrefab::OnRep_ShouldLevelBeVisible()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnRep_ShouldLevelBeVisible");

	Params::AFortAthenaLivingWorldPrefab_OnRep_ShouldLevelBeVisible_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature
// (Public, Delegate)
// Parameters:

void AFortAthenaLivingWorldPrefab::OnBuildingInLevelBoundsDestroyed__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnBuildingInLevelBoundsDestroyed__DelegateSignature");

	Params::AFortAthenaLivingWorldPrefab_OnBuildingInLevelBoundsDestroyed__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawnedDelegate__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class AActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPrefab::OnAllActorSpawnedDelegate__DelegateSignature(TArray<class AActor*>& SpawnedActors)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnAllActorSpawnedDelegate__DelegateSignature");

	Params::AFortAthenaLivingWorldPrefab_OnAllActorSpawnedDelegate__DelegateSignature_Params Parms;

	Parms.SpawnedActors = SpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class AActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPrefab::OnAllActorSpawned__DelegateSignature(TArray<class AActor*>& SpawnedActors)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnAllActorSpawned__DelegateSignature");

	Params::AFortAthenaLivingWorldPrefab_OnAllActorSpawned__DelegateSignature_Params Parms;

	Parms.SpawnedActors = SpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldPrefab::MakeLevelVisible()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "MakeLevelVisible");

	Params::AFortAthenaLivingWorldPrefab_MakeLevelVisible_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaLivingWorldPrefab*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaLivingWorldPrefab* AFortAthenaLivingWorldPrefab::GetOwningLivingWorldPrefab(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "GetOwningLivingWorldPrefab");

	Params::AFortAthenaLivingWorldPrefab_GetOwningLivingWorldPrefab_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.GetLevelBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox AFortAthenaLivingWorldPrefab::GetLevelBounds()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "GetLevelBounds");

	Params::AFortAthenaLivingWorldPrefab_GetLevelBounds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.DestroyBuildingsInLevelBounds
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 FinishedDelegate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPrefab::DestroyBuildingsInLevelBounds(FDelegateProperty_& FinishedDelegate)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "DestroyBuildingsInLevelBounds");

	Params::AFortAthenaLivingWorldPrefab_DestroyBuildingsInLevelBounds_Params Parms;

	Parms.FinishedDelegate = FinishedDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.CallWhenAllActorHaveSpawned
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 DelegateToCall                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPrefab::CallWhenAllActorHaveSpawned(FDelegateProperty_& DelegateToCall)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "CallWhenAllActorHaveSpawned");

	Params::AFortAthenaLivingWorldPrefab_CallWhenAllActorHaveSpawned_Params Parms;

	Parms.DelegateToCall = DelegateToCall;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.AllowSpawnerToSpawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldPrefab::AllowSpawnerToSpawn()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "AllowSpawnerToSpawn");

	Params::AFortAthenaLivingWorldPrefab_AllowSpawnerToSpawn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnSnapCompleted
// (Final, Native, Protected, HasOutParams, HasDefaults)
// Parameters:
// class UFortSnapOnSurfaceComponent* Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  OldTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  NewTransfom                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPrefabActorSpawner::OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, struct FTransform& OldTransform, struct FTransform& NewTransfom)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnSnapCompleted");

	Params::AFortAthenaLivingWorldPrefabActorSpawner_OnSnapCompleted_Params Parms;

	Parms.Component = Component;
	Parms.OldTransform = OldTransform;
	Parms.NewTransfom = NewTransfom;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawnedDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPrefabActorSpawner::OnActorSpawnedDelegate__DelegateSignature(class AActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnActorSpawnedDelegate__DelegateSignature");

	Params::AFortAthenaLivingWorldPrefabActorSpawner_OnActorSpawnedDelegate__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPrefabActorSpawner::OnActorSpawned__DelegateSignature(class AActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnActorSpawned__DelegateSignature");

	Params::AFortAthenaLivingWorldPrefabActorSpawner_OnActorSpawned__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* AFortAthenaLivingWorldPrefabActorSpawner::GetSpawnedActor()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "GetSpawnedActor");

	Params::AFortAthenaLivingWorldPrefabActorSpawner_GetSpawnedActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.CallWhenActorSpawned
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 DelegateToCall                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldPrefabActorSpawner::CallWhenActorSpawned(FDelegateProperty_& DelegateToCall)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "CallWhenActorSpawned");

	Params::AFortAthenaLivingWorldPrefabActorSpawner_CallWhenActorSpawned_Params Parms;

	Parms.DelegateToCall = DelegateToCall;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              SpawnedActor                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldSpawnActionBlueprint::K2_OnAllActorSpawned(TArray<class AActor*>& SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldSpawnActionBlueprint", "K2_OnAllActorSpawned");

	Params::UFortAthenaLivingWorldSpawnActionBlueprint_K2_OnAllActorSpawned_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldStaticPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaLivingWorldStaticPointProvider_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldStaticPointProvider::OnActorSpawned__DelegateSignature(class AActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "OnActorSpawned__DelegateSignature");

	Params::AFortAthenaLivingWorldStaticPointProvider_OnActorSpawned__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldStaticPointProvider::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "EnablePointProvider");

	Params::AFortAthenaLivingWorldStaticPointProvider_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldStaticPointProvider::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "DisablePointProvider");

	Params::AFortAthenaLivingWorldStaticPointProvider_DisablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::SetSpawnRotation(struct FRotator& Rotation)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetSpawnRotation");

	Params::AFortAthenaLivingWorldVolume_SetSpawnRotation_Params Parms;

	Parms.Rotation = Rotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::SetFiltersTags(struct FGameplayTagContainer& TagContainer)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetFiltersTags");

	Params::AFortAthenaLivingWorldVolume_SetFiltersTags_Params Parms;

	Parms.TagContainer = TagContainer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::SetEQSQueryConfigParam(class FName ParameterName, float Value)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQueryConfigParam");

	Params::AFortAthenaLivingWorldVolume_SetEQSQueryConfigParam_Params Parms;

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvQuery*                   Query                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::SetEQSQuery(class UEnvQuery* Query)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQuery");

	Params::AFortAthenaLivingWorldVolume_SetEQSQuery_Params Parms;

	Parms.Query = Query;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.RunEQS
// (Final, Native, Private)
// Parameters:

void AFortAthenaLivingWorldVolume::RunEQS()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "RunEQS");

	Params::AFortAthenaLivingWorldVolume_RunEQS_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldVolume::ResetSpawnRotation()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "ResetSpawnRotation");

	Params::AFortAthenaLivingWorldVolume_ResetSpawnRotation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnWorldFinishedInitialization");

	Params::AFortAthenaLivingWorldVolume_OnWorldFinishedInitialization_Params Parms;

	Parms.ContextTags = ContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AFortAthenaLivingWorldVolume*PointProviderVolume                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnPointProviderRegistered__DelegateSignature(class AFortAthenaLivingWorldVolume* PointProviderVolume)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnPointProviderRegistered__DelegateSignature");

	Params::AFortAthenaLivingWorldVolume_OnPointProviderRegistered__DelegateSignature_Params Parms;

	Parms.PointProviderVolume = PointProviderVolume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaLivingWorldVolume::OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnActorSpawnedResult__DelegateSignature");

	Params::AFortAthenaLivingWorldVolume_OnActorSpawnedResult__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaLivingWorldVolume::IsPointProviderEnabled()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "IsPointProviderEnabled");

	Params::AFortAthenaLivingWorldVolume_IsPointProviderEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldVolume::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "EnablePointProvider");

	Params::AFortAthenaLivingWorldVolume_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortAthenaLivingWorldVolume::DoesStartEnabled()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DoesStartEnabled");

	Params::AFortAthenaLivingWorldVolume_DoesStartEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaLivingWorldVolume::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DisablePointProvider");

	Params::AFortAthenaLivingWorldVolume_DisablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldWardComponent.SetWardRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldWardComponent::SetWardRadius(float Radius)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "SetWardRadius");

	Params::UFortAthenaLivingWorldWardComponent_SetWardRadius_Params Parms;

	Parms.Radius = Radius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldWardComponent.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldWardComponent::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "OnWorldFinishedInitialization");

	Params::UFortAthenaLivingWorldWardComponent_OnWorldFinishedInitialization_Params Parms;

	Parms.ContextTags = ContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldWardComponent.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldWardComponent::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldWardComponent_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaPatrolPathPointProvider::OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnActorSpawnedResult__DelegateSignature");

	Params::AFortAthenaPatrolPathPointProvider_OnActorSpawnedResult__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaPatrolPathPointProvider::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "EnablePointProvider");

	Params::AFortAthenaPatrolPathPointProvider_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaPatrolPathPointProvider::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "DisablePointProvider");

	Params::AFortAthenaPatrolPathPointProvider_DisablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaPointAroundPlayerProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnCurrentPlaylistLoaded");

	Params::AFortAthenaPointAroundPlayerProvider_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortAthenaPointAroundPlayerProvider::OnActorSpawnedResult__DelegateSignature(class AActor* SpawnedActor, bool bResult)
{
	static auto Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnActorSpawnedResult__DelegateSignature");

	Params::AFortAthenaPointAroundPlayerProvider_OnActorSpawnedResult__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaPointAroundPlayerProvider::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "EnablePointProvider");

	Params::AFortAthenaPointAroundPlayerProvider_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortAthenaPointAroundPlayerProvider::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "DisablePointProvider");

	Params::AFortAthenaPointAroundPlayerProvider_DisablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMTE
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LWMTE(const class FString& EventDataName)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMTE");

	Params::UFortCheatManager_LivingWorldManager_LWMTE_Params Parms;

	Parms.EventDataName = EventDataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMSE
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SpawnerDataNames                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LWMSE(const class FString& EventDataName, const class FString& SpawnerDataNames)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMSE");

	Params::UFortCheatManager_LivingWorldManager_LWMSE_Params Parms;

	Parms.EventDataName = EventDataName;
	Parms.SpawnerDataNames = SpawnerDataNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMS
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LWMS(const class FString& EventDataName)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMS");

	Params::UFortCheatManager_LivingWorldManager_LWMS_Params Parms;

	Parms.EventDataName = EventDataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTriggerEvent
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTriggerEvent(const class FString& EventDataName)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTriggerEvent");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerTriggerEvent_Params Parms;

	Parms.EventDataName = EventDataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTeleportToSpawnPosition(const class FString& EventDataName)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTeleportToSpawnPosition");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportToSpawnPosition_Params Parms;

	Parms.EventDataName = EventDataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTeleportTo(const class FString& EventDataName)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTeleportTo");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportTo_Params Parms;

	Parms.EventDataName = EventDataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEventAtLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, HasDefaults)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      SpawnerDataNames                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnEventAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation, const class FString& SpawnerDataNames)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnEventAtLocation");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnEventAtLocation_Params Parms;

	Parms.EventDataName = EventDataName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.SpawnerDataNames = SpawnerDataNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEvent
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SpawnerDataNames                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnEvent(const class FString& EventDataName, const class FString& SpawnerDataNames)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnEvent");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnEvent_Params Parms;

	Parms.EventDataName = EventDataName;
	Parms.SpawnerDataNames = SpawnerDataNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, HasDefaults)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnAtLocation");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnAtLocation_Params Parms;

	Parms.EventDataName = EventDataName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawn(const class FString& EventDataName)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawn");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params Parms;

	Parms.EventDataName = EventDataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerGDTNextDensityGrid
// (Final, Exec, Native, Public)
// Parameters:

void UFortCheatManager_LivingWorldManager::LivingWorldManagerGDTNextDensityGrid()
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerGDTNextDensityGrid");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerGDTNextDensityGrid_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerDisplaySpawnPoints
// (Final, Exec, Native, Public)
// Parameters:
// float                              MaxDisplayDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance)
{
	static auto Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerDisplaySpawnPoints");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerDisplaySpawnPoints_Params Parms;

	Parms.MaxDisplayDistance = MaxDisplayDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
