#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortAudioClustersRuntime.FortAudioClustersSettings
// (None)

class UClass* UFortAudioClustersSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAudioClustersSettings");

	return Clss;
}


// FortAudioClustersSettings FortAudioClustersRuntime.Default__FortAudioClustersSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAudioClustersSettings* UFortAudioClustersSettings::GetDefaultObj()
{
	static class UFortAudioClustersSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAudioClustersSettings*>(UFortAudioClustersSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortAudioClustersRuntime.FortAudioClustersSubsystem
// (None)

class UClass* UFortAudioClustersSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAudioClustersSubsystem");

	return Clss;
}


// FortAudioClustersSubsystem FortAudioClustersRuntime.Default__FortAudioClustersSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAudioClustersSubsystem* UFortAudioClustersSubsystem::GetDefaultObj()
{
	static class UFortAudioClustersSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAudioClustersSubsystem*>(UFortAudioClustersSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster
// (None)

class UClass* UGameFeatureAction_AddAudioCluster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_AddAudioCluster");

	return Clss;
}


// GameFeatureAction_AddAudioCluster FortAudioClustersRuntime.Default__GameFeatureAction_AddAudioCluster
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_AddAudioCluster* UGameFeatureAction_AddAudioCluster::GetDefaultObj()
{
	static class UGameFeatureAction_AddAudioCluster* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_AddAudioCluster*>(UGameFeatureAction_AddAudioCluster::StaticClass()->DefaultObject);

	return Default;
}


// Function FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster.HandleRegisteredActorDeath
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UFortPawn*                   InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UGameFeatureAction_AddAudioCluster::HandleRegisteredActorDeath(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFeatureAction_AddAudioCluster", "HandleRegisteredActorDeath");

	Params::UGameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortAudioClustersRuntime.GameFeatureAction_AddAudioClusterConfigMaps
// (None)

class UClass* UGameFeatureAction_AddAudioClusterConfigMaps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_AddAudioClusterConfigMaps");

	return Clss;
}


// GameFeatureAction_AddAudioClusterConfigMaps FortAudioClustersRuntime.Default__GameFeatureAction_AddAudioClusterConfigMaps
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_AddAudioClusterConfigMaps* UGameFeatureAction_AddAudioClusterConfigMaps::GetDefaultObj()
{
	static class UGameFeatureAction_AddAudioClusterConfigMaps* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_AddAudioClusterConfigMaps*>(UGameFeatureAction_AddAudioClusterConfigMaps::StaticClass()->DefaultObject);

	return Default;
}

}


