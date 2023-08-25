#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
// (Actor)

class UClass* UFortAthenaLivingWorldPointProvidersEnabler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProvidersEnabler");

	return Clss;
}


// FortAthenaLivingWorldPointProvidersEnabler LagerRuntime.Default__FortAthenaLivingWorldPointProvidersEnabler
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldPointProvidersEnabler* UFortAthenaLivingWorldPointProvidersEnabler::GetDefaultObj()
{
	static class UFortAthenaLivingWorldPointProvidersEnabler* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldPointProvidersEnabler*>(UFortAthenaLivingWorldPointProvidersEnabler::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaximumDistance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PointsToDisable                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPointProvidersEnabler::RemoveClosestPointProvidersToPoint(struct FVector& Point, float MaximumDistance, int32 PointsToDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "RemoveClosestPointProvidersToPoint");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_RemoveClosestPointProvidersToPoint_Params Parms{};

	Parms.Point = Point;
	Parms.MaximumDistance = MaximumDistance;
	Parms.PointsToDisable = PointsToDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPointProvidersEnabler::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>EnabledPointProviders                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPointProvidersEnabler::OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>& EnabledPointProviders)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCompletedEvaluation__DelegateSignature");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_OnCompletedEvaluation__DelegateSignature_Params Parms{};

	Parms.EnabledPointProviders = EnabledPointProviders;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldPointProvidersEnabler::HasCompletedEvaluation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "HasCompletedEvaluation");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_HasCompletedEvaluation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UFortAthenaLivingWorldPointProvidersEnabler::GetEnablerTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnablerTags");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_GetEnablerTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> UFortAthenaLivingWorldPointProvidersEnabler::GetEnabledLinkedPointProviders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnabledLinkedPointProviders");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_GetEnabledLinkedPointProviders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPointProvidersEnabler::EvaluateAndEnablePointProviders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "EvaluateAndEnablePointProviders");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_EvaluateAndEnablePointProviders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldPointProvidersEnabler::DoesStartEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "DoesStartEnabled");

	Params::UFortAthenaLivingWorldPointProvidersEnabler_DoesStartEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
// (Actor)

class UClass* UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride");

	return Clss;
}


// FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride LagerRuntime.Default__FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride* UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::GetDefaultObj()
{
	static class UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride*>(UFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
// (None)

class UClass* UFortAthenaLinearEncounterAnalyticComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLinearEncounterAnalyticComponent");

	return Clss;
}


// FortAthenaLinearEncounterAnalyticComponent LagerRuntime.Default__FortAthenaLinearEncounterAnalyticComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLinearEncounterAnalyticComponent* UFortAthenaLinearEncounterAnalyticComponent::GetDefaultObj()
{
	static class UFortAthenaLinearEncounterAnalyticComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLinearEncounterAnalyticComponent*>(UFortAthenaLinearEncounterAnalyticComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnStageCompleted
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortPickup*>         SpawnedRewards                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnStageCompleted(TArray<class UFortPickup*>& SpawnedRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnStageCompleted");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnStageCompleted_Params Parms{};

	Parms.SpawnedRewards = SpawnedRewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterStart
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaLivingWorldEncounterInstance*InAttackerEncounter                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounterInstance*InDefenderEncounter                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnEncounterStart");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnEncounterStart_Params Parms{};

	Parms.InAttackerEncounter = InAttackerEncounter;
	Parms.InDefenderEncounter = InDefenderEncounter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterEnd
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLinearEncounterAnalyticComponent::OnEncounterEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnEncounterEnd");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnEncounterEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderSpawned
// (Final, Native, Private)
// Parameters:
// class UActor*                      SpawnedDefender                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderSpawned(class UActor* SpawnedDefender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderSpawned");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnDefenderSpawned_Params Parms{};

	Parms.SpawnedDefender = SpawnedDefender;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDied");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDidDamage");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDidDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDamaged");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDamaged_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnAttackerSpawned
// (Final, Native, Private)
// Parameters:
// class UActor*                      SpawnedAttacker                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLinearEncounterAnalyticComponent::OnAttackerSpawned(class UActor* SpawnedAttacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnAttackerSpawned");

	Params::UFortAthenaLinearEncounterAnalyticComponent_OnAttackerSpawned_Params Parms{};

	Parms.SpawnedAttacker = SpawnedAttacker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldConditionSchema
// (None)

class UClass* UFortAthenaLivingWorldConditionSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldConditionSchema");

	return Clss;
}


// FortAthenaLivingWorldConditionSchema LagerRuntime.Default__FortAthenaLivingWorldConditionSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldConditionSchema* UFortAthenaLivingWorldConditionSchema::GetDefaultObj()
{
	static class UFortAthenaLivingWorldConditionSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldConditionSchema*>(UFortAthenaLivingWorldConditionSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema
// (None)

class UClass* UFortAthenaLivingWorldEventDataConditionSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEventDataConditionSchema");

	return Clss;
}


// FortAthenaLivingWorldEventDataConditionSchema LagerRuntime.Default__FortAthenaLivingWorldEventDataConditionSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEventDataConditionSchema* UFortAthenaLivingWorldEventDataConditionSchema::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEventDataConditionSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEventDataConditionSchema*>(UFortAthenaLivingWorldEventDataConditionSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldConfigData
// (None)

class UClass* UFortAthenaLivingWorldConfigData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldConfigData");

	return Clss;
}


// FortAthenaLivingWorldConfigData LagerRuntime.Default__FortAthenaLivingWorldConfigData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldConfigData* UFortAthenaLivingWorldConfigData::GetDefaultObj()
{
	static class UFortAthenaLivingWorldConfigData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldConfigData*>(UFortAthenaLivingWorldConfigData::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
// (None)

class UClass* UFortAthenaLivingWorldDebugDensityMiniMapIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldDebugDensityMiniMapIndicator");

	return Clss;
}


// FortAthenaLivingWorldDebugDensityMiniMapIndicator LagerRuntime.Default__FortAthenaLivingWorldDebugDensityMiniMapIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* UFortAthenaLivingWorldDebugDensityMiniMapIndicator::GetDefaultObj()
{
	static class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldDebugDensityMiniMapIndicator*>(UFortAthenaLivingWorldDebugDensityMiniMapIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema
// (None)

class UClass* UFortAthenaLivingWorldDespawnConditionSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldDespawnConditionSchema");

	return Clss;
}


// FortAthenaLivingWorldDespawnConditionSchema LagerRuntime.Default__FortAthenaLivingWorldDespawnConditionSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldDespawnConditionSchema* UFortAthenaLivingWorldDespawnConditionSchema::GetDefaultObj()
{
	static class UFortAthenaLivingWorldDespawnConditionSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldDespawnConditionSchema*>(UFortAthenaLivingWorldDespawnConditionSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldEncounter
// (None)

class UClass* UFortAthenaLivingWorldEncounter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEncounter");

	return Clss;
}


// FortAthenaLivingWorldEncounter LagerRuntime.Default__FortAthenaLivingWorldEncounter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEncounter* UFortAthenaLivingWorldEncounter::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEncounter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEncounter*>(UFortAthenaLivingWorldEncounter::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldEncounterInstance
// (None)

class UClass* UFortAthenaLivingWorldEncounterInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEncounterInstance");

	return Clss;
}


// FortAthenaLivingWorldEncounterInstance LagerRuntime.Default__FortAthenaLivingWorldEncounterInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldEncounterInstance::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEncounterInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEncounterInstance*>(UFortAthenaLivingWorldEncounterInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.StartEncounterStage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StageIndex                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::StartEncounterStage(int32 StageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "StartEncounterStage");

	Params::UFortAthenaLivingWorldEncounterInstance_StartEncounterStage_Params Parms{};

	Parms.StageIndex = StageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::ResumeEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "ResumeEncounter");

	Params::UFortAthenaLivingWorldEncounterInstance_ResumeEncounter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.Reset
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "Reset");

	Params::UFortAthenaLivingWorldEncounterInstance_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::RequestEventGeneration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "RequestEventGeneration");

	Params::UFortAthenaLivingWorldEncounterInstance_RequestEventGeneration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.RemoveAllowedPointProvider
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>PointProvider                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::RemoveAllowedPointProvider(TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "RemoveAllowedPointProvider");

	Params::UFortAthenaLivingWorldEncounterInstance_RemoveAllowedPointProvider_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::PauseEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "PauseEncounter");

	Params::UFortAthenaLivingWorldEncounterInstance_PauseEncounter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.OwnsActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldEncounterInstance::OwnsActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OwnsActor");

	Params::UFortAthenaLivingWorldEncounterInstance_OwnsActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnEncounterActorDied");

	Params::UFortAthenaLivingWorldEncounterInstance_OnEncounterActorDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorSpawned__DelegateSignature(class UActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorSpawned__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDied__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      DiedActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorDied__DelegateSignature(class UActor* DiedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorDied__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorDied__DelegateSignature_Params Parms{};

	Parms.DiedActor = DiedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::OnActorDestroyed__DelegateSignature(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OnActorDestroyed__DelegateSignature");

	Params::UFortAthenaLivingWorldEncounterInstance_OnActorDestroyed__DelegateSignature_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.HasReachedMaxSpawnedCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldEncounterInstance::HasReachedMaxSpawnedCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "HasReachedMaxSpawnedCount");

	Params::UFortAthenaLivingWorldEncounterInstance_HasReachedMaxSpawnedCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldEncounterInstance::GetTotalActorCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "GetTotalActorCount");

	Params::UFortAthenaLivingWorldEncounterInstance_GetTotalActorCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetAliveSpawnedActorCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldEncounterInstance::GetAliveSpawnedActorCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "GetAliveSpawnedActorCount");

	Params::UFortAthenaLivingWorldEncounterInstance_GetAliveSpawnedActorCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldEncounterInstance::AdvanceEncounterStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "AdvanceEncounterStage");

	Params::UFortAthenaLivingWorldEncounterInstance_AdvanceEncounterStage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AddAllowedPointProvider
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>PointProvider                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldEncounterInstance::AddAllowedPointProvider(TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "AddAllowedPointProvider");

	Params::UFortAthenaLivingWorldEncounterInstance_AddAllowedPointProvider_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldEventData
// (None)

class UClass* UFortAthenaLivingWorldEventData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEventData");

	return Clss;
}


// FortAthenaLivingWorldEventData LagerRuntime.Default__FortAthenaLivingWorldEventData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEventData* UFortAthenaLivingWorldEventData::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEventData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEventData*>(UFortAthenaLivingWorldEventData::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldManager
// (None)

class UClass* UFortAthenaLivingWorldManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldManager");

	return Clss;
}


// FortAthenaLivingWorldManager LagerRuntime.Default__FortAthenaLivingWorldManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldManager* UFortAthenaLivingWorldManager::GetDefaultObj()
{
	static class UFortAthenaLivingWorldManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldManager*>(UFortAthenaLivingWorldManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::UnregisterDensityReservoir(class UActor* ActorDensityReservoir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "UnregisterDensityReservoir");

	Params::UFortAthenaLivingWorldManager_UnregisterDensityReservoir_Params Parms{};

	Parms.ActorDensityReservoir = ActorDensityReservoir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "TrySpawnEvent");

	Params::UFortAthenaLivingWorldManager_TrySpawnEvent_Params Parms{};

	Parms.EventEntry = EventEntry;
	Parms.SpawnLocation = SpawnLocation;
	Parms.OnRequestFinished = OnRequestFinished;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "StartEncounter");

	Params::UFortAthenaLivingWorldManager_StartEncounter_Params Parms{};

	Parms.EncounterType = EncounterType;
	Parms.EncounterPointProviders = EncounterPointProviders;
	Parms.ActorDensityReservoir = ActorDensityReservoir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaLivingWorldEncounterInstance*EncounterInstance                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::ResetEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "ResetEncounter");

	Params::UFortAthenaLivingWorldManager_ResetEncounter_Params Parms{};

	Parms.EncounterInstance = EncounterInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldManager::RequestEventGeneration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "RequestEventGeneration");

	Params::UFortAthenaLivingWorldManager_RequestEventGeneration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.RegisterTagDensityReservoir
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration>TagsDensity                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::RegisterTagDensityReservoir(class UActor* ActorDensityReservoir, TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "RegisterTagDensityReservoir");

	Params::UFortAthenaLivingWorldManager_RegisterTagDensityReservoir_Params Parms{};

	Parms.ActorDensityReservoir = ActorDensityReservoir;
	Parms.TagsDensity = TagsDensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      ActorDensityReservoir                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Density                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::RegisterDensityReservoir(class UActor* ActorDensityReservoir, float Density, float Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "RegisterDensityReservoir");

	Params::UFortAthenaLivingWorldManager_RegisterDensityReservoir_Params Parms{};

	Parms.ActorDensityReservoir = ActorDensityReservoir;
	Parms.Density = Density;
	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         EventEntry                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UActor*                      SpawnLocation                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaLivingWorldManager::QueryEventBudget(const struct FDataTableRowHandle& EventEntry, class UActor* SpawnLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "QueryEventBudget");

	Params::UFortAthenaLivingWorldManager_QueryEventBudget_Params Parms{};

	Parms.EventEntry = EventEntry;
	Parms.SpawnLocation = SpawnLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnWorldFinishedInitialization");

	Params::UFortAthenaLivingWorldManager_OnWorldFinishedInitialization_Params Parms{};

	Parms.ContextTags = ContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy
// (Final, Native, Private)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnUnmanagedDensityReservoirActorDestroy(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnUnmanagedDensityReservoirActorDestroy");

	Params::UFortAthenaLivingWorldManager_OnUnmanagedDensityReservoirActorDestroy_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
// (Final, Native, Private)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnSpawnedActorDestroy");

	Params::UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator
// (Final, Native, Private)
// Parameters:
// class UFortAthenaLivingWorldDebugDensityMiniMapIndicator*OldMapIndicator                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnRep_DebugDensityMinimapIndicator");

	Params::UFortAthenaLivingWorldManager_OnRep_DebugDensityMinimapIndicator_Params Parms{};

	Parms.OldMapIndicator = OldMapIndicator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient
// (Final, Native, Private)
// Parameters:

void UFortAthenaLivingWorldManager::OnRep_ActorClassToPreloadOnClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnRep_ActorClassToPreloadOnClient");

	Params::UFortAthenaLivingWorldManager_OnRep_ActorClassToPreloadOnClient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
// (Final, Native, Private)
// Parameters:
// class UFortAthenaPatrolPath*       PatrolPath                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(class UFortAthenaPatrolPath* PatrolPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnPatrolPathAdded");

	Params::UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params Parms{};

	Parms.PatrolPath = PatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class UActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnDebugSpawnEventSpawned(TArray<class UActor*>& SpawnedActors, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnDebugSpawnEventSpawned");

	Params::UFortAthenaLivingWorldManager_OnDebugSpawnEventSpawned_Params Parms{};

	Parms.SpawnedActors = SpawnedActors;
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::OnActorSpawned(class UActor* Actor, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnActorSpawned");

	Params::UFortAthenaLivingWorldManager_OnActorSpawned_Params Parms{};

	Parms.Actor = Actor;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LWMTAM
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LWMTAM(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LWMTAM");

	Params::UFortAthenaLivingWorldManager_LWMTAM_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LWMF
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LWMF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LWMF");

	Params::UFortAthenaLivingWorldManager_LWMF_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      PointProvider                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(class UActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerUnregisterPointProvider");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleVerboseLogging");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerToggleVerboseLogging_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleGenerateEvents");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerToggleGenerateEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleDensityDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleDensityDisplay");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerToggleDensityDisplay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleActorMinimap");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerToggleActorMinimap_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSwitchDensityDisplay
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              DensityMapIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerSwitchDensityDisplay(int32 DensityMapIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerSwitchDensityDisplay");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerSwitchDensityDisplay_Params Parms{};

	Parms.DensityMapIndex = DensityMapIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSetEventGenerationEnabled
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInGenerateEvents                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerSetEventGenerationEnabled");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerSetEventGenerationEnabled_Params Parms{};

	Parms.bInGenerateEvents = bInGenerateEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      PointProvider                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(class UActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerRegisterPointProvider");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int32                              ProviderIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int32 ProviderIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerProviderDebugActor");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params Parms{};

	Parms.ProviderIndex = ProviderIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerGenerateEvents");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerGenerateEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerFlush");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerFlush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpSpawnCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpSpawnCount");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerDumpSpawnCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpPrefabLevelBounds
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpPrefabLevelBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpPrefabLevelBounds");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerDumpPrefabLevelBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpEventInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpEventInstances");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerDumpEventInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDebugEvent");

	Params::UFortAthenaLivingWorldManager_LivingWorldManagerDebugEvent_Params Parms{};

	Parms.EventName = EventName;
	Parms.DebugIndex = DebugIndex;
	Parms.RuntimeSpawnDataName = RuntimeSpawnDataName;
	Parms.EncounterName = EncounterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UFortAthenaLivingWorldEncounter>EncounterType                                                    (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldManager::IsEncounterCategoryActive(TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "IsEncounterCategoryActive");

	Params::UFortAthenaLivingWorldManager_IsEncounterCategoryActive_Params Parms{};

	Parms.EncounterType = EncounterType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounterInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::GetOwningEncounter(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "GetOwningEncounter");

	Params::UFortAthenaLivingWorldManager_GetOwningEncounter_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldManager*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldManager* UFortAthenaLivingWorldManager::GetLivingWorldManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "GetLivingWorldManager");

	Params::UFortAthenaLivingWorldManager_GetLivingWorldManager_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.EndEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaLivingWorldEncounterInstance*EncounterInstance                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "EndEncounter");

	Params::UFortAthenaLivingWorldManager_EndEncounter_Params Parms{};

	Parms.EncounterInstance = EncounterInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldManager::CancelSpawnRequest(int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "CancelSpawnRequest");

	Params::UFortAthenaLivingWorldManager_CancelSpawnRequest_Params Parms{};

	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldManager.BuildDataRegistryResolverScope_Implementation
// (Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class FName>                InOutResolverScopes                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              InOutPriority                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldManager::BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "BuildDataRegistryResolverScope_Implementation");

	Params::UFortAthenaLivingWorldManager_BuildDataRegistryResolverScope_Implementation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutResolverScopes != nullptr)
		*InOutResolverScopes = Parms.InOutResolverScopes;

	if (InOutPriority != nullptr)
		*InOutPriority = Parms.InOutPriority;

	return Parms.ReturnValue;

}


// Class LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
// (None)

class UClass* UFortAthenaLivingWorldNavigationInvokerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldNavigationInvokerComponent");

	return Clss;
}


// FortAthenaLivingWorldNavigationInvokerComponent LagerRuntime.Default__FortAthenaLivingWorldNavigationInvokerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldNavigationInvokerComponent* UFortAthenaLivingWorldNavigationInvokerComponent::GetDefaultObj()
{
	static class UFortAthenaLivingWorldNavigationInvokerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldNavigationInvokerComponent*>(UFortAthenaLivingWorldNavigationInvokerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent.OnCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldNavigationInvokerComponent::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldNavigationInvokerComponent", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldNavigationInvokerComponent_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// (None)

class UClass* UFortAthenaLivingWorldPointProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPointProviderInterface");

	return Clss;
}


// FortAthenaLivingWorldPointProviderInterface LagerRuntime.Default__FortAthenaLivingWorldPointProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldPointProviderInterface* UFortAthenaLivingWorldPointProviderInterface::GetDefaultObj()
{
	static class UFortAthenaLivingWorldPointProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldPointProviderInterface*>(UFortAthenaLivingWorldPointProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderMaxRadius
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaLivingWorldPointProviderInterface::GetPointProviderMaxRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetPointProviderMaxRadius");

	Params::UFortAthenaLivingWorldPointProviderInterface_GetPointProviderMaxRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortAthenaLivingWorldPointProviderInterface::GetPointProviderLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetPointProviderLocation");

	Params::UFortAthenaLivingWorldPointProviderInterface_GetPointProviderLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       FilterTags                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPointProviderInterface::GetFiltersTags(struct FGameplayTagContainer* FilterTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetFiltersTags");

	Params::UFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterTags != nullptr)
		*FilterTags = Parms.FilterTags;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPointProviderInterface::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "EnablePointProvider");

	Params::UFortAthenaLivingWorldPointProviderInterface_EnablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPointProviderInterface::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "DisablePointProvider");

	Params::UFortAthenaLivingWorldPointProviderInterface_DisablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming
// (None)

class UClass* UFortAthenaLivingWorldPrefabLevelStreaming::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPrefabLevelStreaming");

	return Clss;
}


// FortAthenaLivingWorldPrefabLevelStreaming LagerRuntime.Default__FortAthenaLivingWorldPrefabLevelStreaming
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldPrefabLevelStreaming* UFortAthenaLivingWorldPrefabLevelStreaming::GetDefaultObj()
{
	static class UFortAthenaLivingWorldPrefabLevelStreaming* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldPrefabLevelStreaming*>(UFortAthenaLivingWorldPrefabLevelStreaming::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldPrefab
// (Actor)

class UClass* UFortAthenaLivingWorldPrefab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPrefab");

	return Clss;
}


// FortAthenaLivingWorldPrefab LagerRuntime.Default__FortAthenaLivingWorldPrefab
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldPrefab* UFortAthenaLivingWorldPrefab::GetDefaultObj()
{
	static class UFortAthenaLivingWorldPrefab* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldPrefab*>(UFortAthenaLivingWorldPrefab::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.RemoveFoliageInsideLevelBound
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPrefab::RemoveFoliageInsideLevelBound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "RemoveFoliageInsideLevelBound");

	Params::UFortAthenaLivingWorldPrefab_RemoveFoliageInsideLevelBound_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible
// (Final, Native, Protected)
// Parameters:

void UFortAthenaLivingWorldPrefab::OnRep_ShouldLevelBeVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnRep_ShouldLevelBeVisible");

	Params::UFortAthenaLivingWorldPrefab_OnRep_ShouldLevelBeVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature
// (Public, Delegate)
// Parameters:

void UFortAthenaLivingWorldPrefab::OnBuildingInLevelBoundsDestroyed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnBuildingInLevelBoundsDestroyed__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefab_OnBuildingInLevelBoundsDestroyed__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawnedDelegate__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefab::OnAllActorSpawnedDelegate__DelegateSignature(TArray<class UActor*>& SpawnedActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnAllActorSpawnedDelegate__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefab_OnAllActorSpawnedDelegate__DelegateSignature_Params Parms{};

	Parms.SpawnedActors = SpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UActor*>              SpawnedActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefab::OnAllActorSpawned__DelegateSignature(TArray<class UActor*>& SpawnedActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnAllActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefab_OnAllActorSpawned__DelegateSignature_Params Parms{};

	Parms.SpawnedActors = SpawnedActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPrefab::MakeLevelVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "MakeLevelVisible");

	Params::UFortAthenaLivingWorldPrefab_MakeLevelVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldPrefab*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldPrefab* UFortAthenaLivingWorldPrefab::GetOwningLivingWorldPrefab(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "GetOwningLivingWorldPrefab");

	Params::UFortAthenaLivingWorldPrefab_GetOwningLivingWorldPrefab_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.GetLevelBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UFortAthenaLivingWorldPrefab::GetLevelBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "GetLevelBounds");

	Params::UFortAthenaLivingWorldPrefab_GetLevelBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.DestroyBuildingsInLevelBounds
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 FinishedDelegate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefab::DestroyBuildingsInLevelBounds(FDelegateProperty_& FinishedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "DestroyBuildingsInLevelBounds");

	Params::UFortAthenaLivingWorldPrefab_DestroyBuildingsInLevelBounds_Params Parms{};

	Parms.FinishedDelegate = FinishedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.CallWhenAllActorHaveSpawned
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 DelegateToCall                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefab::CallWhenAllActorHaveSpawned(FDelegateProperty_& DelegateToCall)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "CallWhenAllActorHaveSpawned");

	Params::UFortAthenaLivingWorldPrefab_CallWhenAllActorHaveSpawned_Params Parms{};

	Parms.DelegateToCall = DelegateToCall;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefab.AllowSpawnerToSpawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldPrefab::AllowSpawnerToSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "AllowSpawnerToSpawn");

	Params::UFortAthenaLivingWorldPrefab_AllowSpawnerToSpawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
// (Actor)

class UClass* UFortAthenaLivingWorldPrefabActorSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldPrefabActorSpawner");

	return Clss;
}


// FortAthenaLivingWorldPrefabActorSpawner LagerRuntime.Default__FortAthenaLivingWorldPrefabActorSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldPrefabActorSpawner* UFortAthenaLivingWorldPrefabActorSpawner::GetDefaultObj()
{
	static class UFortAthenaLivingWorldPrefabActorSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldPrefabActorSpawner*>(UFortAthenaLivingWorldPrefabActorSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnSnapCompleted
// (Final, Native, Protected, HasOutParams, HasDefaults)
// Parameters:
// class UFortSnapOnSurfaceComponent* Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  OldTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  NewTransfom                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefabActorSpawner::OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, struct FTransform& OldTransform, struct FTransform& NewTransfom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnSnapCompleted");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_OnSnapCompleted_Params Parms{};

	Parms.Component = Component;
	Parms.OldTransform = OldTransform;
	Parms.NewTransfom = NewTransfom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawnedDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefabActorSpawner::OnActorSpawnedDelegate__DelegateSignature(class UActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnActorSpawnedDelegate__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_OnActorSpawnedDelegate__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefabActorSpawner::OnActorSpawned__DelegateSignature(class UActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_OnActorSpawned__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAthenaLivingWorldPrefabActorSpawner::GetSpawnedActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "GetSpawnedActor");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_GetSpawnedActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.CallWhenActorSpawned
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 DelegateToCall                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldPrefabActorSpawner::CallWhenActorSpawned(FDelegateProperty_& DelegateToCall)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "CallWhenActorSpawned");

	Params::UFortAthenaLivingWorldPrefabActorSpawner_CallWhenActorSpawned_Params Parms{};

	Parms.DelegateToCall = DelegateToCall;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldSpawnAction
// (None)

class UClass* UFortAthenaLivingWorldSpawnAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnAction");

	return Clss;
}


// FortAthenaLivingWorldSpawnAction LagerRuntime.Default__FortAthenaLivingWorldSpawnAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldSpawnAction* UFortAthenaLivingWorldSpawnAction::GetDefaultObj()
{
	static class UFortAthenaLivingWorldSpawnAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldSpawnAction*>(UFortAthenaLivingWorldSpawnAction::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
// (None)

class UClass* UFortAthenaLivingWorldSpawnActionBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnActionBlueprint");

	return Clss;
}


// FortAthenaLivingWorldSpawnActionBlueprint LagerRuntime.Default__FortAthenaLivingWorldSpawnActionBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldSpawnActionBlueprint* UFortAthenaLivingWorldSpawnActionBlueprint::GetDefaultObj()
{
	static class UFortAthenaLivingWorldSpawnActionBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldSpawnActionBlueprint*>(UFortAthenaLivingWorldSpawnActionBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class UActor*>              SpawnedActor                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>SourcePointProvider                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldSpawnActionBlueprint::K2_OnAllActorSpawned(TArray<class UActor*>& SpawnedActor, TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>& SourcePointProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldSpawnActionBlueprint", "K2_OnAllActorSpawned");

	Params::UFortAthenaLivingWorldSpawnActionBlueprint_K2_OnAllActorSpawned_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.SourcePointProvider = SourcePointProvider;

	UObject::ProcessEvent(Func, &Parms);

}


// Class LagerRuntime.FortAthenaLivingWorldStaticPointProvider
// (Actor)

class UClass* UFortAthenaLivingWorldStaticPointProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldStaticPointProvider");

	return Clss;
}


// FortAthenaLivingWorldStaticPointProvider LagerRuntime.Default__FortAthenaLivingWorldStaticPointProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldStaticPointProvider* UFortAthenaLivingWorldStaticPointProvider::GetDefaultObj()
{
	static class UFortAthenaLivingWorldStaticPointProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldStaticPointProvider*>(UFortAthenaLivingWorldStaticPointProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldStaticPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldStaticPointProvider_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldStaticPointProvider::OnActorSpawned__DelegateSignature(class UActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "OnActorSpawned__DelegateSignature");

	Params::UFortAthenaLivingWorldStaticPointProvider_OnActorSpawned__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldStaticPointProvider::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "EnablePointProvider");

	Params::UFortAthenaLivingWorldStaticPointProvider_EnablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldStaticPointProvider::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "DisablePointProvider");

	Params::UFortAthenaLivingWorldStaticPointProvider_DisablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
// (Actor)

class UClass* UFortAthenaLivingWorldVehiclePointProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldVehiclePointProvider");

	return Clss;
}


// FortAthenaLivingWorldVehiclePointProvider LagerRuntime.Default__FortAthenaLivingWorldVehiclePointProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldVehiclePointProvider* UFortAthenaLivingWorldVehiclePointProvider::GetDefaultObj()
{
	static class UFortAthenaLivingWorldVehiclePointProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldVehiclePointProvider*>(UFortAthenaLivingWorldVehiclePointProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldVolume
// (Actor)

class UClass* UFortAthenaLivingWorldVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldVolume");

	return Clss;
}


// FortAthenaLivingWorldVolume LagerRuntime.Default__FortAthenaLivingWorldVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldVolume* UFortAthenaLivingWorldVolume::GetDefaultObj()
{
	static class UFortAthenaLivingWorldVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldVolume*>(UFortAthenaLivingWorldVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::SetSpawnRotation(struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetSpawnRotation");

	Params::UFortAthenaLivingWorldVolume_SetSpawnRotation_Params Parms{};

	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::SetFiltersTags(struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetFiltersTags");

	Params::UFortAthenaLivingWorldVolume_SetFiltersTags_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParameterName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::SetEQSQueryConfigParam(class FName ParameterName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQueryConfigParam");

	Params::UFortAthenaLivingWorldVolume_SetEQSQueryConfigParam_Params Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvQuery*                   Query                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::SetEQSQuery(class UEnvQuery* Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQuery");

	Params::UFortAthenaLivingWorldVolume_SetEQSQuery_Params Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.RunEQS
// (Final, Native, Private)
// Parameters:

void UFortAthenaLivingWorldVolume::RunEQS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "RunEQS");

	Params::UFortAthenaLivingWorldVolume_RunEQS_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldVolume::ResetSpawnRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "ResetSpawnRotation");

	Params::UFortAthenaLivingWorldVolume_ResetSpawnRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnWorldFinishedInitialization");

	Params::UFortAthenaLivingWorldVolume_OnWorldFinishedInitialization_Params Parms{};

	Parms.ContextTags = ContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortAthenaLivingWorldVolume*PointProviderVolume                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::OnPointProviderRegistered__DelegateSignature(class UFortAthenaLivingWorldVolume* PointProviderVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnPointProviderRegistered__DelegateSignature");

	Params::UFortAthenaLivingWorldVolume_OnPointProviderRegistered__DelegateSignature_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldVolume::OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnActorSpawnedResult__DelegateSignature");

	Params::UFortAthenaLivingWorldVolume_OnActorSpawnedResult__DelegateSignature_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "IsPointProviderEnabled");

	Params::UFortAthenaLivingWorldVolume_IsPointProviderEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldVolume::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "EnablePointProvider");

	Params::UFortAthenaLivingWorldVolume_EnablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLivingWorldVolume::DoesStartEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DoesStartEnabled");

	Params::UFortAthenaLivingWorldVolume_DoesStartEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLivingWorldVolume::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DisablePointProvider");

	Params::UFortAthenaLivingWorldVolume_DisablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaLivingWorldWardComponent
// (None)

class UClass* UFortAthenaLivingWorldWardComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldWardComponent");

	return Clss;
}


// FortAthenaLivingWorldWardComponent LagerRuntime.Default__FortAthenaLivingWorldWardComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldWardComponent* UFortAthenaLivingWorldWardComponent::GetDefaultObj()
{
	static class UFortAthenaLivingWorldWardComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldWardComponent*>(UFortAthenaLivingWorldWardComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaLivingWorldWardComponent.SetWardRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldWardComponent::SetWardRadius(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "SetWardRadius");

	Params::UFortAthenaLivingWorldWardComponent_SetWardRadius_Params Parms{};

	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldWardComponent.OnWorldFinishedInitialization
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       ContextTags                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldWardComponent::OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "OnWorldFinishedInitialization");

	Params::UFortAthenaLivingWorldWardComponent_OnWorldFinishedInitialization_Params Parms{};

	Parms.ContextTags = ContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaLivingWorldWardComponent.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaLivingWorldWardComponent::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaLivingWorldWardComponent_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaPatrolPathPointProvider
// (Actor)

class UClass* UFortAthenaPatrolPathPointProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPatrolPathPointProvider");

	return Clss;
}


// FortAthenaPatrolPathPointProvider LagerRuntime.Default__FortAthenaPatrolPathPointProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPatrolPathPointProvider* UFortAthenaPatrolPathPointProvider::GetDefaultObj()
{
	static class UFortAthenaPatrolPathPointProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPatrolPathPointProvider*>(UFortAthenaPatrolPathPointProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPathPointProvider::OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnActorSpawnedResult__DelegateSignature");

	Params::UFortAthenaPatrolPathPointProvider_OnActorSpawnedResult__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPatrolPathPointProvider::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "EnablePointProvider");

	Params::UFortAthenaPatrolPathPointProvider_EnablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPatrolPathPointProvider::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "DisablePointProvider");

	Params::UFortAthenaPatrolPathPointProvider_DisablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortAthenaPointAroundPlayerProvider
// (Actor)

class UClass* UFortAthenaPointAroundPlayerProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPointAroundPlayerProvider");

	return Clss;
}


// FortAthenaPointAroundPlayerProvider LagerRuntime.Default__FortAthenaPointAroundPlayerProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPointAroundPlayerProvider* UFortAthenaPointAroundPlayerProvider::GetDefaultObj()
{
	static class UFortAthenaPointAroundPlayerProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPointAroundPlayerProvider*>(UFortAthenaPointAroundPlayerProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaPointAroundPlayerProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaPointAroundPlayerProvider_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPointAroundPlayerProvider::OnActorSpawnedResult__DelegateSignature(class UActor* SpawnedActor, bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnActorSpawnedResult__DelegateSignature");

	Params::UFortAthenaPointAroundPlayerProvider_OnActorSpawnedResult__DelegateSignature_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;
	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPointAroundPlayerProvider::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "EnablePointProvider");

	Params::UFortAthenaPointAroundPlayerProvider_EnablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaPointAroundPlayerProvider::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "DisablePointProvider");

	Params::UFortAthenaPointAroundPlayerProvider_DisablePointProvider_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortCheatManager_LivingWorldManager
// (None)

class UClass* UFortCheatManager_LivingWorldManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_LivingWorldManager");

	return Clss;
}


// FortCheatManager_LivingWorldManager LagerRuntime.Default__FortCheatManager_LivingWorldManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_LivingWorldManager* UFortCheatManager_LivingWorldManager::GetDefaultObj()
{
	static class UFortCheatManager_LivingWorldManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_LivingWorldManager*>(UFortCheatManager_LivingWorldManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMTE
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LWMTE(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMTE");

	Params::UFortCheatManager_LivingWorldManager_LWMTE_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMSE
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SpawnerDataNames                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LWMSE(const class FString& EventDataName, const class FString& SpawnerDataNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMSE");

	Params::UFortCheatManager_LivingWorldManager_LWMSE_Params Parms{};

	Parms.EventDataName = EventDataName;
	Parms.SpawnerDataNames = SpawnerDataNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMS
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LWMS(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMS");

	Params::UFortCheatManager_LivingWorldManager_LWMS_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTriggerEvent
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTriggerEvent(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTriggerEvent");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerTriggerEvent_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTeleportToSpawnPosition(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTeleportToSpawnPosition");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportToSpawnPosition_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTeleportTo(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTeleportTo");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportTo_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnEventAtLocation");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnEventAtLocation_Params Parms{};

	Parms.EventDataName = EventDataName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.SpawnerDataNames = SpawnerDataNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEvent
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SpawnerDataNames                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnEvent(const class FString& EventDataName, const class FString& SpawnerDataNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnEvent");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnEvent_Params Parms{};

	Parms.EventDataName = EventDataName;
	Parms.SpawnerDataNames = SpawnerDataNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public, HasDefaults)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnAtLocation");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnAtLocation_Params Parms{};

	Parms.EventDataName = EventDataName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// class FString                      EventDataName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawn(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawn");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params Parms{};

	Parms.EventDataName = EventDataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerGDTNextDensityGrid
// (Final, Exec, Native, Public)
// Parameters:

void UFortCheatManager_LivingWorldManager::LivingWorldManagerGDTNextDensityGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerGDTNextDensityGrid");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerGDTNextDensityGrid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerDisplaySpawnPoints
// (Final, Exec, Native, Public)
// Parameters:
// float                              MaxDisplayDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerDisplaySpawnPoints");

	Params::UFortCheatManager_LivingWorldManager_LivingWorldManagerDisplaySpawnPoints_Params Parms{};

	Parms.MaxDisplayDistance = MaxDisplayDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
// (None)

class UClass* UFortGameFeatureAction_AddCategoryTableToConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameFeatureAction_AddCategoryTableToConfig");

	return Clss;
}


// FortGameFeatureAction_AddCategoryTableToConfig LagerRuntime.Default__FortGameFeatureAction_AddCategoryTableToConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameFeatureAction_AddCategoryTableToConfig* UFortGameFeatureAction_AddCategoryTableToConfig::GetDefaultObj()
{
	static class UFortGameFeatureAction_AddCategoryTableToConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameFeatureAction_AddCategoryTableToConfig*>(UFortGameFeatureAction_AddCategoryTableToConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortGameFeatureAction_AddLagerConfig
// (None)

class UClass* UFortGameFeatureAction_AddLagerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameFeatureAction_AddLagerConfig");

	return Clss;
}


// FortGameFeatureAction_AddLagerConfig LagerRuntime.Default__FortGameFeatureAction_AddLagerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameFeatureAction_AddLagerConfig* UFortGameFeatureAction_AddLagerConfig::GetDefaultObj()
{
	static class UFortGameFeatureAction_AddLagerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameFeatureAction_AddLagerConfig*>(UFortGameFeatureAction_AddLagerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
// (None)

class UClass* UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath");

	return Clss;
}


// FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath LagerRuntime.Default__FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath* UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath::GetDefaultObj()
{
	static class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath*>(UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
// (None)

class UClass* UFortPawnComponent_LivingWorldSpawnAroundPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPawnComponent_LivingWorldSpawnAroundPlayer");

	return Clss;
}


// FortPawnComponent_LivingWorldSpawnAroundPlayer LagerRuntime.Default__FortPawnComponent_LivingWorldSpawnAroundPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPawnComponent_LivingWorldSpawnAroundPlayer* UFortPawnComponent_LivingWorldSpawnAroundPlayer::GetDefaultObj()
{
	static class UFortPawnComponent_LivingWorldSpawnAroundPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPawnComponent_LivingWorldSpawnAroundPlayer*>(UFortPawnComponent_LivingWorldSpawnAroundPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard
// (None)

class UClass* UFortQueryTest_IsCloseToLivingWorldWard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_IsCloseToLivingWorldWard");

	return Clss;
}


// FortQueryTest_IsCloseToLivingWorldWard LagerRuntime.Default__FortQueryTest_IsCloseToLivingWorldWard
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_IsCloseToLivingWorldWard* UFortQueryTest_IsCloseToLivingWorldWard::GetDefaultObj()
{
	static class UFortQueryTest_IsCloseToLivingWorldWard* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_IsCloseToLivingWorldWard*>(UFortQueryTest_IsCloseToLivingWorldWard::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldEQSHelper
// (Actor)

class UClass* UFortAthenaLivingWorldEQSHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldEQSHelper");

	return Clss;
}


// FortAthenaLivingWorldEQSHelper LagerRuntime.Default__FortAthenaLivingWorldEQSHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldEQSHelper* UFortAthenaLivingWorldEQSHelper::GetDefaultObj()
{
	static class UFortAthenaLivingWorldEQSHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldEQSHelper*>(UFortAthenaLivingWorldEQSHelper::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
// (None)

class UClass* UFortAthenaLivingWorldSpawnAction_AddAIToGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnAction_AddAIToGroup");

	return Clss;
}


// FortAthenaLivingWorldSpawnAction_AddAIToGroup LagerRuntime.Default__FortAthenaLivingWorldSpawnAction_AddAIToGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldSpawnAction_AddAIToGroup* UFortAthenaLivingWorldSpawnAction_AddAIToGroup::GetDefaultObj()
{
	static class UFortAthenaLivingWorldSpawnAction_AddAIToGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldSpawnAction_AddAIToGroup*>(UFortAthenaLivingWorldSpawnAction_AddAIToGroup::StaticClass()->DefaultObject);

	return Default;
}


// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
// (None)

class UClass* UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle");

	return Clss;
}


// FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle LagerRuntime.Default__FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle* UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle::GetDefaultObj()
{
	static class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle*>(UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle::StaticClass()->DefaultObject);

	return Default;
}

}


