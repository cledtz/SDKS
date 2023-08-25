#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
// (Actor)

class UClass* UFortAthenaMutator_LevelInstanceDevice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_LevelInstanceDevice");

	return Clss;
}


// FortAthenaMutator_LevelInstanceDevice CRDLevelInstanceRuntime.Default__FortAthenaMutator_LevelInstanceDevice
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_LevelInstanceDevice* UFortAthenaMutator_LevelInstanceDevice::GetDefaultObj()
{
	static class UFortAthenaMutator_LevelInstanceDevice* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_LevelInstanceDevice*>(UFortAthenaMutator_LevelInstanceDevice::StaticClass()->DefaultObject);

	return Default;
}


// Class CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
// (Actor)

class UClass* ULevelInstanceGameplayVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelInstanceGameplayVolume");

	return Clss;
}


// LevelInstanceGameplayVolume CRDLevelInstanceRuntime.Default__LevelInstanceGameplayVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelInstanceGameplayVolume* ULevelInstanceGameplayVolume::GetDefaultObj()
{
	static class ULevelInstanceGameplayVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelInstanceGameplayVolume*>(ULevelInstanceGameplayVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetWantsLevelLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInWantsLevelLoaded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetWantsLevelLoaded(bool bInWantsLevelLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetWantsLevelLoaded");

	Params::ULevelInstanceGameplayVolume_SetWantsLevelLoaded_Params Parms{};

	Parms.bInWantsLevelLoaded = bInWantsLevelLoaded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bReady                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetReadyForInstantiation(bool bReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetReadyForInstantiation");

	Params::ULevelInstanceGameplayVolume_SetReadyForInstantiation_Params Parms{};

	Parms.bReady = bReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InName                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetLevelInstanceName(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceName");

	Params::ULevelInstanceGameplayVolume_SetLevelInstanceName_Params Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UFortCreativeActorCollection>ContentCollection                                                (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetLevelInstanceContentCollection(TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceContentCollection");

	Params::ULevelInstanceGameplayVolume_SetLevelInstanceContentCollection_Params Parms{};

	Parms.ContentCollection = ContentCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       InLevelInstanceActorGuid                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetLevelInstanceActorGuid(const struct FGuid& InLevelInstanceActorGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceActorGuid");

	Params::ULevelInstanceGameplayVolume_SetLevelInstanceActorGuid_Params Parms{};

	Parms.InLevelInstanceActorGuid = InLevelInstanceActorGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEditMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetEditMode(bool bInEditMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetEditMode");

	Params::ULevelInstanceGameplayVolume_SetEditMode_Params Parms{};

	Parms.bInEditMode = bInEditMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::RemoveActorWhenEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "RemoveActorWhenEndPlay");

	Params::ULevelInstanceGameplayVolume_RemoveActorWhenEndPlay_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenDied
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::RemoveActorWhenDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "RemoveActorWhenDied");

	Params::ULevelInstanceGameplayVolume_RemoveActorWhenDied_Params Parms{};

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


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULevelInstanceGameplayVolume::OnVolumeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnVolumeChanged");

	Params::ULevelInstanceGameplayVolume_OnVolumeChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled
// (Final, Native, Protected)
// Parameters:

void ULevelInstanceGameplayVolume::OnRep_IsDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_IsDisabled");

	Params::ULevelInstanceGameplayVolume_OnRep_IsDisabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded
// (Final, Native, Protected)
// Parameters:

void ULevelInstanceGameplayVolume::OnRep_InstanceLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_InstanceLoaded");

	Params::ULevelInstanceGameplayVolume_OnRep_InstanceLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode
// (Final, Native, Protected)
// Parameters:

void ULevelInstanceGameplayVolume::OnRep_EditMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_EditMode");

	Params::ULevelInstanceGameplayVolume_OnRep_EditMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged
// (Final, Native, Protected)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnMinigameStateChanged");

	Params::ULevelInstanceGameplayVolume_OnMinigameStateChanged_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      InstigatorActor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::LevelInstanceSizeChanged(class UActor* InstigatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceSizeChanged");

	Params::ULevelInstanceGameplayVolume_LevelInstanceSizeChanged_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged
// (Final, Native, Protected)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::LevelInstanceNameChanged(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceNameChanged");

	Params::ULevelInstanceGameplayVolume_LevelInstanceNameChanged_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      InstigatorActor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UFortCreativeActorCollection>ContentCollection                                                (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::LevelInstanceContentCollectionChanged(class UActor* InstigatorActor, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceContentCollectionChanged");

	Params::ULevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.ContentCollection = ContentCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      InstigatorActor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::LevelInstanceContentChanged(class UActor* InstigatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceContentChanged");

	Params::ULevelInstanceGameplayVolume_LevelInstanceContentChanged_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed
// (Final, Native, Protected)
// Parameters:

void ULevelInstanceGameplayVolume::LevelInstanceBeingDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceBeingDestroyed");

	Params::ULevelInstanceGameplayVolume_LevelInstanceBeingDestroyed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInstanceGameplayVolume::IsPreviewActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsPreviewActor");

	Params::ULevelInstanceGameplayVolume_IsPreviewActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInstanceGameplayVolume::IsInEditMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsInEditMode");

	Params::ULevelInstanceGameplayVolume_IsInEditMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInstanceGameplayVolume::IsDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsDisabled");

	Params::ULevelInstanceGameplayVolume_IsDisabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULevelInstanceGameplayVolume::InstantiateFromLevelInstanceSaveActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "InstantiateFromLevelInstanceSaveActor");

	Params::ULevelInstanceGameplayVolume_InstantiateFromLevelInstanceSaveActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewHealth                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::HandleActorHealthChanged(class UActor* Actor, float NewHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "HandleActorHealthChanged");

	Params::ULevelInstanceGameplayVolume_HandleActorHealthChanged_Params Parms{};

	Parms.Actor = Actor;
	Parms.NewHealth = NewHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULevelInstanceGameplayVolume::GetLevelInstanceName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "GetLevelInstanceName");

	Params::ULevelInstanceGameplayVolume_GetLevelInstanceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLevelInstanceSaveActor* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortLevelInstanceSaveActor* ULevelInstanceGameplayVolume::CreateLevelInstanceSaveActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "CreateLevelInstanceSaveActor");

	Params::ULevelInstanceGameplayVolume_CreateLevelInstanceSaveActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULevelInstanceGameplayVolume::CheckForOverlappingVolumes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "CheckForOverlappingVolumes");

	Params::ULevelInstanceGameplayVolume_CheckForOverlappingVolumes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CRDLevelInstanceRuntime.LevelInstanceItemListComponent
// (None)

class UClass* ULevelInstanceItemListComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelInstanceItemListComponent");

	return Clss;
}


// LevelInstanceItemListComponent CRDLevelInstanceRuntime.Default__LevelInstanceItemListComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelInstanceItemListComponent* ULevelInstanceItemListComponent::GetDefaultObj()
{
	static class ULevelInstanceItemListComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelInstanceItemListComponent*>(ULevelInstanceItemListComponent::StaticClass()->DefaultObject);

	return Default;
}

}


