#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EncountersRuntime.EncounterMobAnchor
// (Actor)

class UClass* UEncounterMobAnchor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterMobAnchor");

	return Clss;
}


// EncounterMobAnchor EncountersRuntime.Default__EncounterMobAnchor
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterMobAnchor* UEncounterMobAnchor::GetDefaultObj()
{
	static class UEncounterMobAnchor* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterMobAnchor*>(UEncounterMobAnchor::StaticClass()->DefaultObject);

	return Default;
}


// Class EncountersRuntime.EncounterMobManagerComponent
// (None)

class UClass* UEncounterMobManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterMobManagerComponent");

	return Clss;
}


// EncounterMobManagerComponent EncountersRuntime.Default__EncounterMobManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterMobManagerComponent* UEncounterMobManagerComponent::GetDefaultObj()
{
	static class UEncounterMobManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterMobManagerComponent*>(UEncounterMobManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EncountersRuntime.EncounterMobManagerComponent.StartMobEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEncounterMobManagerComponent::StartMobEncounter(struct FGameplayTag& MobIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "StartMobEncounter");

	Params::UEncounterMobManagerComponent_StartMobEncounter_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EncountersRuntime.EncounterMobManagerComponent.ResumeMobEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::ResumeMobEncounter(struct FGameplayTag& MobIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "ResumeMobEncounter");

	Params::UEncounterMobManagerComponent_ResumeMobEncounter_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterMobManagerComponent.PauseMobEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::PauseMobEncounter(struct FGameplayTag& MobIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "PauseMobEncounter");

	Params::UEncounterMobManagerComponent_PauseMobEncounter_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterMobManagerComponent.OnMobPawnEndPlay
// (Final, Native, Private)
// Parameters:
// class UActor*                      Mob                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnMobPawnEndPlay(class UActor* Mob, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnMobPawnEndPlay");

	Params::UEncounterMobManagerComponent_OnMobPawnEndPlay_Params Parms{};

	Parms.Mob = Mob;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterMobManagerComponent.OnMobActorSpawn
// (Final, Native, Private)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnMobActorSpawn(class UActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnMobActorSpawn");

	Params::UEncounterMobManagerComponent_OnMobActorSpawn_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterMobManagerComponent.OnMobActorDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnMobActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnMobActorDied");

	Params::UEncounterMobManagerComponent_OnMobActorDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterStarted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnEncounterStarted__DelegateSignature(const struct FGameplayTag& MobIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnEncounterStarted__DelegateSignature");

	Params::UEncounterMobManagerComponent_OnEncounterStarted__DelegateSignature_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterResumed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnEncounterResumed__DelegateSignature(const struct FGameplayTag& MobIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnEncounterResumed__DelegateSignature");

	Params::UEncounterMobManagerComponent_OnEncounterResumed__DelegateSignature_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterPaused__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnEncounterPaused__DelegateSignature(const struct FGameplayTag& MobIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnEncounterPaused__DelegateSignature");

	Params::UEncounterMobManagerComponent_OnEncounterPaused__DelegateSignature_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterEnded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnEncounterEnded__DelegateSignature(const struct FGameplayTag& MobIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnEncounterEnded__DelegateSignature");

	Params::UEncounterMobManagerComponent_OnEncounterEnded__DelegateSignature_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorSpawned__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnEncounterActorSpawned__DelegateSignature(const struct FGameplayTag& MobIdentifier, class UActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnEncounterActorSpawned__DelegateSignature");

	Params::UEncounterMobManagerComponent_OnEncounterActorSpawned__DelegateSignature_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;
	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorDead__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::OnEncounterActorDead__DelegateSignature(const struct FGameplayTag& MobIdentifier, class UActor* DamagedActor, class UActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "OnEncounterActorDead__DelegateSignature");

	Params::UEncounterMobManagerComponent_OnEncounterActorDead__DelegateSignature_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;
	Parms.DamagedActor = DamagedActor;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountersRuntime.EncounterMobManagerComponent.EndMobEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                MobIdentifier                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterMobManagerComponent::EndMobEncounter(struct FGameplayTag& MobIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "EndMobEncounter");

	Params::UEncounterMobManagerComponent_EndMobEncounter_Params Parms{};

	Parms.MobIdentifier = MobIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterMobManagerComponent.EndAndCleanupAllMobEncounters
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UEncounterMobManagerComponent::EndAndCleanupAllMobEncounters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterMobManagerComponent", "EndAndCleanupAllMobEncounters");

	Params::UEncounterMobManagerComponent_EndAndCleanupAllMobEncounters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EncountersRuntime.StartLWMEncounterDelegateHandler
// (None)

class UClass* UStartLWMEncounterDelegateHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StartLWMEncounterDelegateHandler");

	return Clss;
}


// StartLWMEncounterDelegateHandler EncountersRuntime.Default__StartLWMEncounterDelegateHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UStartLWMEncounterDelegateHandler* UStartLWMEncounterDelegateHandler::GetDefaultObj()
{
	static class UStartLWMEncounterDelegateHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UStartLWMEncounterDelegateHandler*>(UStartLWMEncounterDelegateHandler::StaticClass()->DefaultObject);

	return Default;
}


// Function EncountersRuntime.StartLWMEncounterDelegateHandler.OnMobPawnEndPlay
// (Final, Native, Public)
// Parameters:
// class UActor*                      Mob                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStartLWMEncounterDelegateHandler::OnMobPawnEndPlay(class UActor* Mob, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartLWMEncounterDelegateHandler", "OnMobPawnEndPlay");

	Params::UStartLWMEncounterDelegateHandler_OnMobPawnEndPlay_Params Parms{};

	Parms.Mob = Mob;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.StartLWMEncounterDelegateHandler.OnMobActorSpawn
// (Final, Native, Public)
// Parameters:
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStartLWMEncounterDelegateHandler::OnMobActorSpawn(class UActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartLWMEncounterDelegateHandler", "OnMobActorSpawn");

	Params::UStartLWMEncounterDelegateHandler_OnMobActorSpawn_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.StartLWMEncounterDelegateHandler.OnMobActorDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStartLWMEncounterDelegateHandler::OnMobActorDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartLWMEncounterDelegateHandler", "OnMobActorDied");

	Params::UStartLWMEncounterDelegateHandler_OnMobActorDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EncountersRuntime.EncounterActorSpawnerData
// (None)

class UClass* UEncounterActorSpawnerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterActorSpawnerData");

	return Clss;
}


// EncounterActorSpawnerData EncountersRuntime.Default__EncounterActorSpawnerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterActorSpawnerData* UEncounterActorSpawnerData::GetDefaultObj()
{
	static class UEncounterActorSpawnerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterActorSpawnerData*>(UEncounterActorSpawnerData::StaticClass()->DefaultObject);

	return Default;
}


// Class EncountersRuntime.EncounterBlueprintLibrary
// (None)

class UClass* UEncounterBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterBlueprintLibrary");

	return Clss;
}


// EncounterBlueprintLibrary EncountersRuntime.Default__EncounterBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterBlueprintLibrary* UEncounterBlueprintLibrary::GetDefaultObj()
{
	static class UEncounterBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterBlueprintLibrary*>(UEncounterBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EncountersRuntime.EncounterBlueprintLibrary.GetRelevantMobManagerComponentForActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEncounterMobManagerComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEncounterMobManagerComponent* UEncounterBlueprintLibrary::GetRelevantMobManagerComponentForActor(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterBlueprintLibrary", "GetRelevantMobManagerComponentForActor");

	Params::UEncounterBlueprintLibrary_GetRelevantMobManagerComponentForActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EncountersRuntime.EncounterGameplayVolume
// (Actor)

class UClass* UEncounterGameplayVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterGameplayVolume");

	return Clss;
}


// EncounterGameplayVolume EncountersRuntime.Default__EncounterGameplayVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterGameplayVolume* UEncounterGameplayVolume::GetDefaultObj()
{
	static class UEncounterGameplayVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterGameplayVolume*>(UEncounterGameplayVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function EncountersRuntime.EncounterGameplayVolume.OnCleanup
// (Event, Public, BlueprintEvent)
// Parameters:

void UEncounterGameplayVolume::OnCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterGameplayVolume", "OnCleanup");

	Params::UEncounterGameplayVolume_OnCleanup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountersRuntime.EncounterGameplayVolume.IsDoneCleaningUp
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEncounterGameplayVolume::IsDoneCleaningUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterGameplayVolume", "IsDoneCleaningUp");

	Params::UEncounterGameplayVolume_IsDoneCleaningUp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EncountersRuntime.EncounterItem
// (None)

class UClass* UEncounterItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterItem");

	return Clss;
}


// EncounterItem EncountersRuntime.Default__EncounterItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterItem* UEncounterItem::GetDefaultObj()
{
	static class UEncounterItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterItem*>(UEncounterItem::StaticClass()->DefaultObject);

	return Default;
}


// Class EncountersRuntime.EncounterItemDefinition
// (None)

class UClass* UEncounterItemDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterItemDefinition");

	return Clss;
}


// EncounterItemDefinition EncountersRuntime.Default__EncounterItemDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterItemDefinition* UEncounterItemDefinition::GetDefaultObj()
{
	static class UEncounterItemDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterItemDefinition*>(UEncounterItemDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class EncountersRuntime.EncounterManagerComponent
// (None)

class UClass* UEncounterManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterManagerComponent");

	return Clss;
}


// EncounterManagerComponent EncountersRuntime.Default__EncounterManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterManagerComponent* UEncounterManagerComponent::GetDefaultObj()
{
	static class UEncounterManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterManagerComponent*>(UEncounterManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EncountersRuntime.EncounterManagerComponent.RemoveExplicitContributor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           Contributor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterManagerComponent::RemoveExplicitContributor(class UPlayerController* Contributor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "RemoveExplicitContributor");

	Params::UEncounterManagerComponent_RemoveExplicitContributor_Params Parms{};

	Parms.Contributor = Contributor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterManagerComponent.OnStateTreeStatusChanged
// (Final, Native, Private)
// Parameters:
// enum class EStateTreeRunStatus     Status                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterManagerComponent::OnStateTreeStatusChanged(enum class EStateTreeRunStatus Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "OnStateTreeStatusChanged");

	Params::UEncounterManagerComponent_OnStateTreeStatusChanged_Params Parms{};

	Parms.Status = Status;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterManagerComponent.HandleEncounterSuccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RewardIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterManagerComponent::HandleEncounterSuccess(int32 RewardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "HandleEncounterSuccess");

	Params::UEncounterManagerComponent_HandleEncounterSuccess_Params Parms{};

	Parms.RewardIndex = RewardIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterManagerComponent.HandleEncounterFailure
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RewardIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterManagerComponent::HandleEncounterFailure(int32 RewardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "HandleEncounterFailure");

	Params::UEncounterManagerComponent_HandleEncounterFailure_Params Parms{};

	Parms.RewardIndex = RewardIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EncountersRuntime.EncounterManagerComponent.GetVariable_TagQuery
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                VarName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagQuery UEncounterManagerComponent::GetVariable_TagQuery(struct FGameplayTag& VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "GetVariable_TagQuery");

	Params::UEncounterManagerComponent_GetVariable_TagQuery_Params Parms{};

	Parms.VarName = VarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EncountersRuntime.EncounterManagerComponent.GetVariable_LWMEncounter
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                VarName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaLivingWorldEncounter*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaLivingWorldEncounter* UEncounterManagerComponent::GetVariable_LWMEncounter(struct FGameplayTag& VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "GetVariable_LWMEncounter");

	Params::UEncounterManagerComponent_GetVariable_LWMEncounter_Params Parms{};

	Parms.VarName = VarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EncountersRuntime.EncounterManagerComponent.GetVariable_ItemDefinition
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                VarName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItemDefinition*    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItemDefinition* UEncounterManagerComponent::GetVariable_ItemDefinition(struct FGameplayTag& VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "GetVariable_ItemDefinition");

	Params::UEncounterManagerComponent_GetVariable_ItemDefinition_Params Parms{};

	Parms.VarName = VarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EncountersRuntime.EncounterManagerComponent.GetVariable_Int
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                VarName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEncounterManagerComponent::GetVariable_Int(struct FGameplayTag& VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "GetVariable_Int");

	Params::UEncounterManagerComponent_GetVariable_Int_Params Parms{};

	Parms.VarName = VarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EncountersRuntime.EncounterManagerComponent.GetVariable_GameplayTag
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                VarName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UEncounterManagerComponent::GetVariable_GameplayTag(struct FGameplayTag& VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "GetVariable_GameplayTag");

	Params::UEncounterManagerComponent_GetVariable_GameplayTag_Params Parms{};

	Parms.VarName = VarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EncountersRuntime.EncounterManagerComponent.GetVariable_Float
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                VarName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UEncounterManagerComponent::GetVariable_Float(struct FGameplayTag& VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "GetVariable_Float");

	Params::UEncounterManagerComponent_GetVariable_Float_Params Parms{};

	Parms.VarName = VarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EncountersRuntime.EncounterManagerComponent.GetVariable_Bool
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                VarName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEncounterManagerComponent::GetVariable_Bool(struct FGameplayTag& VarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "GetVariable_Bool");

	Params::UEncounterManagerComponent_GetVariable_Bool_Params Parms{};

	Parms.VarName = VarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EncountersRuntime.EncounterManagerComponent.AddExplicitContributor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           Contributor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEncounterManagerComponent::AddExplicitContributor(class UPlayerController* Contributor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EncounterManagerComponent", "AddExplicitContributor");

	Params::UEncounterManagerComponent_AddExplicitContributor_Params Parms{};

	Parms.Contributor = Contributor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EncountersRuntime.EncounterStateTreeComponent
// (None)

class UClass* UEncounterStateTreeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncounterStateTreeComponent");

	return Clss;
}


// EncounterStateTreeComponent EncountersRuntime.Default__EncounterStateTreeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEncounterStateTreeComponent* UEncounterStateTreeComponent::GetDefaultObj()
{
	static class UEncounterStateTreeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEncounterStateTreeComponent*>(UEncounterStateTreeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EncountersRuntime.LivingWorldEncounterPrefab
// (Actor)

class UClass* ULivingWorldEncounterPrefab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LivingWorldEncounterPrefab");

	return Clss;
}


// LivingWorldEncounterPrefab EncountersRuntime.Default__LivingWorldEncounterPrefab
// (Public, ClassDefaultObject, ArchetypeObject)

class ULivingWorldEncounterPrefab* ULivingWorldEncounterPrefab::GetDefaultObj()
{
	static class ULivingWorldEncounterPrefab* Default = nullptr;

	if (!Default)
		Default = static_cast<ULivingWorldEncounterPrefab*>(ULivingWorldEncounterPrefab::StaticClass()->DefaultObject);

	return Default;
}


// Function EncountersRuntime.LivingWorldEncounterPrefab.OnRep_EncounterDefinition
// (Final, Native, Private)
// Parameters:

void ULivingWorldEncounterPrefab::OnRep_EncounterDefinition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LivingWorldEncounterPrefab", "OnRep_EncounterDefinition");

	Params::ULivingWorldEncounterPrefab_OnRep_EncounterDefinition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


