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


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaximumDistance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PointsToDisable                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPointProvidersEnabler::RemoveClosestPointProvidersToPoint(struct FVector& Point, float MaximumDistance, int32 PointsToDisable)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "RemoveClosestPointProvidersToPoint");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_RemoveClosestPointProvidersToPoint_Params Parms;

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

void UFortAthenaLivingWorldPointProvidersEnabler::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_OnCurrentPlaylistLoaded_Params Parms;

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
// TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>EnabledPointProviders                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPointProvidersEnabler::OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>& EnabledPointProviders)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCompletedEvaluation__DelegateSignature");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_OnCompletedEvaluation__DelegateSignature_Params Parms;

	Parms.EnabledPointProviders = EnabledPointProviders;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldPointProvidersEnabler::HasCompletedEvaluation()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "HasCompletedEvaluation");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_HasCompletedEvaluation_Params Parms;


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

struct FGameplayTagContainer UFortAthenaLivingWorldPointProvidersEnabler::GetEnablerTags()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnablerTags");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_GetEnablerTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> UFortAthenaLivingWorldPointProvidersEnabler::GetEnabledLinkedPointProviders()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnabledLinkedPointProviders");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_GetEnabledLinkedPointProviders_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPointProvidersEnabler::EvaluateAndEnablePointProviders()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "EvaluateAndEnablePointProviders");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_EvaluateAndEnablePointProviders_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldPointProvidersEnabler::DoesStartEnabled()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "DoesStartEnabled");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_DoesStartEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnStageCompleted
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortPickup*>         SpawnedRewards                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnStageCompleted(TArray<class UFortPickup*>& SpawnedRewards)
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
// class UActor*                      SpawnedDefender                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderSpawned(class UActor* SpawnedDefender)
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
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
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
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
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
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
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
// class UActor*                      SpawnedAttacker                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnAttackerSpawned(class UActor* SpawnedAttacker)
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
// TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>PointProvider                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::RemoveAllowedPointProvider(TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& PointProvider)
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
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldEncounterInstance::OwnsActor(class UActor* Actor)
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
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnEncounterActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
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
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorSpawned__DelegateSignature(class UActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorSpawned__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDied__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      DiedActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorDied__DelegateSignature(class UActor* DiedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorDied__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorDied__DelegateSignature_Params Parms;

	Parms.DiedActor = DiedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorDestroyed__DelegateSignature(class UActor* DestroyedActor)
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
// TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>PointProvider                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::AddAllowedPointProvider(TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& PointProvider)
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
// class UActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::UnregisterDensityReservoir(class UActor* ActorDensityReservoir)
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
// TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>EncounterPointProviders                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// class UActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounterInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::StartEncounter(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType, TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, class UActor* ActorDensityReservoir)
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
// class UActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration>TagsDensity                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::RegisterTagDensityReservoir(class UActor* ActorDensityReservoir, TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity)
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
// class UActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Density                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::RegisterDensityReservoir(class UActor* ActorDensityReservoir, float Density, float Range)
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
// class UActor*                      SpawnLocation                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldManager::QueryEventBudget(const struct FDataTableRowHandle& EventEntry, class UActor* SpawnLocation)
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
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnUnmanagedDensityReservoirActorDestroy(class UActor* DestroyedActor)
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
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(class UActor* DestroyedActor)
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
// class UFortAthenaPatrolPath*       PatrolPath                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(class UFortAthenaPatrolPath* PatrolPath)
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
// TArray<class UActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnDebugSpawnEventSpawned(TArray<class UActor*>& SpawnedActors, bool bSuccess)
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
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnActorSpawned(class UActor* Actor, int32 RequestID)
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
// class UActor*                      PointProvider                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(class UActor* PointProvider)
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


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSwitchDensityDisplay
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              DensityMapIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerSwitchDensityDisplay(int32 DensityMapIndex)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerSwitchDensityDisplay");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerSwitchDensityDisplay_Params Parms;

	Parms.DensityMapIndex = DensityMapIndex;

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
// class UActor*                      PointProvider                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(class UActor* PointProvider)
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
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounterInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::GetOwningEncounter(class UActor* Actor)
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


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderMaxRadius
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaLivingWorldPointProviderInterface::GetPointProviderMaxRadius()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetPointProviderMaxRadius");

	Params::UFortAthenaLivingWorldPointProviderInterface_GetPointProviderMaxRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

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

void UFortAthenaLivingWorldPrefab::RemoveFoliageInsideLevelBound()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "RemoveFoliageInsideLevelBound");

	Params::UFortAthenaLivingWorldPrefab_RemoveFoliageInsideLevelBound_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible
// (Final, Native, Protected)
// Parameters:

void UFortAthenaLivingWorldPrefab::OnRep_ShouldLevelBeVisible()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnRep_ShouldLevelBeVisible");

	Params::UFortAthenaLivingWorldPrefab_OnRep_ShouldLevelBeVisible_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature
// (Public, Delegate)
// Parameters:

void UFortAthenaLivingWorldPrefab::OnBuildingInLevelBoundsDestroyed__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnBuildingInLevelBoundsDestroyed__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefab_OnBuildingInLevelBoundsDestroyed__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawnedDelegate__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefab::OnAllActorSpawnedDelegate__DelegateSignature(TArray<class UActor*>& SpawnedActors)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnAllActorSpawnedDelegate__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefab_OnAllActorSpawnedDelegate__DelegateSignature_Params Parms;

	Parms.SpawnedActors = SpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefab::OnAllActorSpawned__DelegateSignature(TArray<class UActor*>& SpawnedActors)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnAllActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefab_OnAllActorSpawned__DelegateSignature_Params Parms;

	Parms.SpawnedActors = SpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPrefab::MakeLevelVisible()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "MakeLevelVisible");

	Params::UFortAthenaLivingWorldPrefab_MakeLevelVisible_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldPrefab*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldPrefab* UFortAthenaLivingWorldPrefab::GetOwningLivingWorldPrefab(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "GetOwningLivingWorldPrefab");

	Params::UFortAthenaLivingWorldPrefab_GetOwningLivingWorldPrefab_Params Parms;

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

struct FBox UFortAthenaLivingWorldPrefab::GetLevelBounds()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "GetLevelBounds");

	Params::UFortAthenaLivingWorldPrefab_GetLevelBounds_Params Parms;


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

void UFortAthenaLivingWorldPrefab::DestroyBuildingsInLevelBounds(FDelegateProperty_& FinishedDelegate)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "DestroyBuildingsInLevelBounds");

	Params::UFortAthenaLivingWorldPrefab_DestroyBuildingsInLevelBounds_Params Parms;

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

void UFortAthenaLivingWorldPrefab::CallWhenAllActorHaveSpawned(FDelegateProperty_& DelegateToCall)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "CallWhenAllActorHaveSpawned");

	Params::UFortAthenaLivingWorldPrefab_CallWhenAllActorHaveSpawned_Params Parms;

	Parms.DelegateToCall = DelegateToCall;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.AllowSpawnerToSpawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPrefab::AllowSpawnerToSpawn()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "AllowSpawnerToSpawn");

	Params::UFortAthenaLivingWorldPrefab_AllowSpawnerToSpawn_Params Parms;


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

void UFortAthenaLivingWorldPrefabActorSpawner::OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, struct FTransform& OldTransform, struct FTransform& NewTransfom)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnSnapCompleted");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_OnSnapCompleted_Params Parms;

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
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefabActorSpawner::OnActorSpawnedDelegate__DelegateSignature(class UActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnActorSpawnedDelegate__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_OnActorSpawnedDelegate__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefabActorSpawner::OnActorSpawned__DelegateSignature(class UActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_OnActorSpawned__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAthenaLivingWorldPrefabActorSpawner::GetSpawnedActor()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "GetSpawnedActor");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_GetSpawnedActor_Params Parms;


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

void UFortAthenaLivingWorldPrefabActorSpawner::CallWhenActorSpawned(FDelegateProperty_& DelegateToCall)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "CallWhenActorSpawned");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_CallWhenActorSpawned_Params Parms;

	Parms.DelegateToCall = DelegateToCall;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class UActor*>              SpawnedActor                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>SourcePointProvider                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldSpawnActionBlueprint::K2_OnAllActorSpawned(TArray<class UActor*>& SpawnedActor, TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& SourcePointProvider)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldSpawnActionBlueprint", "K2_OnAllActorSpawned");

	Params::UFortAthenaLivingWorldSpawnActionBlueprint_K2_OnAllActorSpawned_Params Parms;

	Parms.SpawnedActor = SpawnedActor;
	Parms.SourcePointProvider = SourcePointProvider;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldStaticPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldStaticPointProvider_OnCurrentPlaylistLoaded_Params Parms;

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
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldStaticPointProvider::OnActorSpawned__DelegateSignature(class UActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "OnActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldStaticPointProvider_OnActorSpawned__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldStaticPointProvider::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "EnablePointProvider");

	Params::UFortAthenaLivingWorldStaticPointProvider_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldStaticPointProvider::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "DisablePointProvider");

	Params::UFortAthenaLivingWorldStaticPointProvider_DisablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::SetSpawnRotation(struct FRotator& Rotation)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetSpawnRotation");

	Params::UFortAthenaLivingWorldVolume_SetSpawnRotation_Params Parms;

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

void UFortAthenaLivingWorldVolume::SetFiltersTags(struct FGameplayTagContainer& TagContainer)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetFiltersTags");

	Params::UFortAthenaLivingWorldVolume_SetFiltersTags_Params Parms;

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

void UFortAthenaLivingWorldVolume::SetEQSQueryConfigParam(class FName ParameterName, float Value)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQueryConfigParam");

	Params::UFortAthenaLivingWorldVolume_SetEQSQueryConfigParam_Params Parms;

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

void UFortAthenaLivingWorldVolume::SetEQSQuery(class UEnvQuery* Query)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQuery");

	Params::UFortAthenaLivingWorldVolume_SetEQSQuery_Params Parms;

	Parms.Query = Query;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.RunEQS
// (Final, Native, Private)
// Parameters:

void UFortAthenaLivingWorldVolume::RunEQS()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "RunEQS");

	Params::UFortAthenaLivingWorldVolume_RunEQS_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldVolume::ResetSpawnRotation()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "ResetSpawnRotation");

	Params::UFortAthenaLivingWorldVolume_ResetSpawnRotation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnWorldFinishedInitialization");

	Params::UFortAthenaLivingWorldVolume_OnWorldFinishedInitialization_Params Parms;

	Parms.ContextTags = ContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortAthenaLivingWorldVolume*PointProviderVolume                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::OnPointProviderRegistered__DelegateSignature(class UFortAthenaLivingWorldVolume* PointProviderVolume)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnPointProviderRegistered__DelegateSignature");

	Params::UFortAthenaLivingWorldVolume_OnPointProviderRegistered__DelegateSignature_Params Parms;

	Parms.PointProviderVolume = PointProviderVolume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params Parms;

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
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult)
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnActorSpawnedResult__DelegateSignature");

	Params::UFortAthenaLivingWorldVolume_OnActorSpawnedResult__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldVolume::IsPointProviderEnabled()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "IsPointProviderEnabled");

	Params::UFortAthenaLivingWorldVolume_IsPointProviderEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldVolume::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "EnablePointProvider");

	Params::UFortAthenaLivingWorldVolume_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldVolume::DoesStartEnabled()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DoesStartEnabled");

	Params::UFortAthenaLivingWorldVolume_DoesStartEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldVolume::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DisablePointProvider");

	Params::UFortAthenaLivingWorldVolume_DisablePointProvider_Params Parms;


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

void UFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params Parms;

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
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPathPointProvider::OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnActorSpawnedResult__DelegateSignature");

	Params::UFortAthenaPatrolPathPointProvider_OnActorSpawnedResult__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPatrolPathPointProvider::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "EnablePointProvider");

	Params::UFortAthenaPatrolPathPointProvider_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPatrolPathPointProvider::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "DisablePointProvider");

	Params::UFortAthenaPatrolPathPointProvider_DisablePointProvider_Params Parms;


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

void UFortAthenaPointAroundPlayerProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaPointAroundPlayerProvider_OnCurrentPlaylistLoaded_Params Parms;

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
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPointAroundPlayerProvider::OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult)
{
	static auto Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnActorSpawnedResult__DelegateSignature");

	Params::UFortAthenaPointAroundPlayerProvider_OnActorSpawnedResult__DelegateSignature_Params Parms;

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPointAroundPlayerProvider::EnablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "EnablePointProvider");

	Params::UFortAthenaPointAroundPlayerProvider_EnablePointProvider_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPointAroundPlayerProvider::DisablePointProvider()
{
	static auto Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "DisablePointProvider");

	Params::UFortAthenaPointAroundPlayerProvider_DisablePointProvider_Params Parms;


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
