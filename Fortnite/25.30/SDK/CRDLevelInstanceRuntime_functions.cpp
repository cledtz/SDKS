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


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetWantsLevelLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInWantsLevelLoaded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetWantsLevelLoaded(bool bInWantsLevelLoaded)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetWantsLevelLoaded");

	Params::ULevelInstanceGameplayVolume_SetWantsLevelLoaded_Params Parms;

	Parms.bInWantsLevelLoaded = bInWantsLevelLoaded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bReady                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetReadyForInstantiation(bool bReady)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetReadyForInstantiation");

	Params::ULevelInstanceGameplayVolume_SetReadyForInstantiation_Params Parms;

	Parms.bReady = bReady;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InName                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetLevelInstanceName(const class FString& InName)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceName");

	Params::ULevelInstanceGameplayVolume_SetLevelInstanceName_Params Parms;

	Parms.InName = InName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UFortCreativeActorCollection>ContentCollection                                                (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetLevelInstanceContentCollection(TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceContentCollection");

	Params::ULevelInstanceGameplayVolume_SetLevelInstanceContentCollection_Params Parms;

	Parms.ContentCollection = ContentCollection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       InLevelInstanceActorGuid                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetLevelInstanceActorGuid(const struct FGuid& InLevelInstanceActorGuid)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceActorGuid");

	Params::ULevelInstanceGameplayVolume_SetLevelInstanceActorGuid_Params Parms;

	Parms.InLevelInstanceActorGuid = InLevelInstanceActorGuid;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEditMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::SetEditMode(bool bInEditMode)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetEditMode");

	Params::ULevelInstanceGameplayVolume_SetEditMode_Params Parms;

	Parms.bInEditMode = bInEditMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::RemoveActorWhenEndPlay(class UActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "RemoveActorWhenEndPlay");

	Params::ULevelInstanceGameplayVolume_RemoveActorWhenEndPlay_Params Parms;

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "RemoveActorWhenDied");

	Params::ULevelInstanceGameplayVolume_RemoveActorWhenDied_Params Parms;

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


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULevelInstanceGameplayVolume::OnVolumeChanged()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnVolumeChanged");

	Params::ULevelInstanceGameplayVolume_OnVolumeChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled
// (Final, Native, Protected)
// Parameters:

void ULevelInstanceGameplayVolume::OnRep_IsDisabled()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_IsDisabled");

	Params::ULevelInstanceGameplayVolume_OnRep_IsDisabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded
// (Final, Native, Protected)
// Parameters:

void ULevelInstanceGameplayVolume::OnRep_InstanceLoaded()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_InstanceLoaded");

	Params::ULevelInstanceGameplayVolume_OnRep_InstanceLoaded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode
// (Final, Native, Protected)
// Parameters:

void ULevelInstanceGameplayVolume::OnRep_EditMode()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_EditMode");

	Params::ULevelInstanceGameplayVolume_OnRep_EditMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged
// (Final, Native, Protected)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnMinigameStateChanged");

	Params::ULevelInstanceGameplayVolume_OnMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      InstigatorActor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::LevelInstanceSizeChanged(class UActor* InstigatorActor)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceSizeChanged");

	Params::ULevelInstanceGameplayVolume_LevelInstanceSizeChanged_Params Parms;

	Parms.InstigatorActor = InstigatorActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged
// (Final, Native, Protected)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::LevelInstanceNameChanged(const class FString& Name)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceNameChanged");

	Params::ULevelInstanceGameplayVolume_LevelInstanceNameChanged_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      InstigatorActor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UFortCreativeActorCollection>ContentCollection                                                (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::LevelInstanceContentCollectionChanged(class UActor* InstigatorActor, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceContentCollectionChanged");

	Params::ULevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged_Params Parms;

	Parms.InstigatorActor = InstigatorActor;
	Parms.ContentCollection = ContentCollection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      InstigatorActor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::LevelInstanceContentChanged(class UActor* InstigatorActor)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceContentChanged");

	Params::ULevelInstanceGameplayVolume_LevelInstanceContentChanged_Params Parms;

	Parms.InstigatorActor = InstigatorActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed
// (Final, Native, Protected)
// Parameters:

void ULevelInstanceGameplayVolume::LevelInstanceBeingDestroyed()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceBeingDestroyed");

	Params::ULevelInstanceGameplayVolume_LevelInstanceBeingDestroyed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInstanceGameplayVolume::IsPreviewActor()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsPreviewActor");

	Params::ULevelInstanceGameplayVolume_IsPreviewActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInstanceGameplayVolume::IsInEditMode()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsInEditMode");

	Params::ULevelInstanceGameplayVolume_IsInEditMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULevelInstanceGameplayVolume::IsDisabled()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsDisabled");

	Params::ULevelInstanceGameplayVolume_IsDisabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULevelInstanceGameplayVolume::InstantiateFromLevelInstanceSaveActor()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "InstantiateFromLevelInstanceSaveActor");

	Params::ULevelInstanceGameplayVolume_InstantiateFromLevelInstanceSaveActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewHealth                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelInstanceGameplayVolume::HandleActorHealthChanged(class UActor* Actor, float NewHealth)
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "HandleActorHealthChanged");

	Params::ULevelInstanceGameplayVolume_HandleActorHealthChanged_Params Parms;

	Parms.Actor = Actor;
	Parms.NewHealth = NewHealth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULevelInstanceGameplayVolume::GetLevelInstanceName()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "GetLevelInstanceName");

	Params::ULevelInstanceGameplayVolume_GetLevelInstanceName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLevelInstanceSaveActor* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortLevelInstanceSaveActor* ULevelInstanceGameplayVolume::CreateLevelInstanceSaveActor()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "CreateLevelInstanceSaveActor");

	Params::ULevelInstanceGameplayVolume_CreateLevelInstanceSaveActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULevelInstanceGameplayVolume::CheckForOverlappingVolumes()
{
	static auto Func = Class->GetFunction("LevelInstanceGameplayVolume", "CheckForOverlappingVolumes");

	Params::ULevelInstanceGameplayVolume_CheckForOverlappingVolumes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
