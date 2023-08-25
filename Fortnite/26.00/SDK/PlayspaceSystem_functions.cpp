#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlayspaceSystem.OverlapComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UOverlapComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverlapComponent");

	return Clss;
}


// OverlapComponent PlayspaceSystem.Default__OverlapComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverlapComponent* UOverlapComponent::GetDefaultObj()
{
	static class UOverlapComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlapComponent*>(UOverlapComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOverlapComponent::OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlapComponent", "OnEndActorOverlap");

	Params::UOverlapComponent_OnEndActorOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.OverlapComponent.OnBeginActorOverlap
// (Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UOverlapComponent::OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlapComponent", "OnBeginActorOverlap");

	Params::UOverlapComponent_OnBeginActorOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspaceComponent
// (None)

class UClass* UPlayspaceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent");

	return Clss;
}


// PlayspaceComponent PlayspaceSystem.Default__PlayspaceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent* UPlayspaceComponent::GetDefaultObj()
{
	static class UPlayspaceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent*>(UPlayspaceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
// (None)

class UClass* UPlayspaceComponent_PlayerSpawning::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_PlayerSpawning");

	return Clss;
}


// PlayspaceComponent_PlayerSpawning PlayspaceSystem.Default__PlayspaceComponent_PlayerSpawning
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_PlayerSpawning* UPlayspaceComponent_PlayerSpawning::GetDefaultObj()
{
	static class UPlayspaceComponent_PlayerSpawning* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_PlayerSpawning*>(UPlayspaceComponent_PlayerSpawning::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceComponent_VoiceManager
// (None)

class UClass* UPlayspaceComponent_VoiceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_VoiceManager");

	return Clss;
}


// PlayspaceComponent_VoiceManager PlayspaceSystem.Default__PlayspaceComponent_VoiceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_VoiceManager* UPlayspaceComponent_VoiceManager::GetDefaultObj()
{
	static class UPlayspaceComponent_VoiceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_VoiceManager*>(UPlayspaceComponent_VoiceManager::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
// (None)

class UClass* UPlayspaceControllerComponent_PlayerSpawning::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceControllerComponent_PlayerSpawning");

	return Clss;
}


// PlayspaceControllerComponent_PlayerSpawning PlayspaceSystem.Default__PlayspaceControllerComponent_PlayerSpawning
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceControllerComponent_PlayerSpawning* UPlayspaceControllerComponent_PlayerSpawning::GetDefaultObj()
{
	static class UPlayspaceControllerComponent_PlayerSpawning* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceControllerComponent_PlayerSpawning*>(UPlayspaceControllerComponent_PlayerSpawning::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UPlayspaceControllerComponent_PlayerSpawning::ServerMarkReadyForSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "ServerMarkReadyForSpawning");

	Params::UPlayspaceControllerComponent_PlayerSpawning_ServerMarkReadyForSpawning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
// (Final, Native, Private)
// Parameters:

void UPlayspaceControllerComponent_PlayerSpawning::OnRep_ReplicatedSpawnInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "OnRep_ReplicatedSpawnInfo");

	Params::UPlayspaceControllerComponent_PlayerSpawning_OnRep_ReplicatedSpawnInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FReplicatedSpawnInfo        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FReplicatedSpawnInfo UPlayspaceControllerComponent_PlayerSpawning::GetSpawnInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "GetSpawnInfo");

	Params::UPlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ClientReplicatedSpawnInfo
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FReplicatedSpawnInfo        InReplicatedSpawnInfo                                            (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPlayspaceControllerComponent_PlayerSpawning::ClientReplicatedSpawnInfo(struct FReplicatedSpawnInfo& InReplicatedSpawnInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "ClientReplicatedSpawnInfo");

	Params::UPlayspaceControllerComponent_PlayerSpawning_ClientReplicatedSpawnInfo_Params Parms{};

	Parms.InReplicatedSpawnInfo = InReplicatedSpawnInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspaceGameStateComponent
// (None)

class UClass* UPlayspaceGameStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceGameStateComponent");

	return Clss;
}


// PlayspaceGameStateComponent PlayspaceSystem.Default__PlayspaceGameStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceGameStateComponent* UPlayspaceGameStateComponent::GetDefaultObj()
{
	static class UPlayspaceGameStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceGameStateComponent*>(UPlayspaceGameStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
// (None)

class UClass* UPlayspaceGameStateComponent_PlayerSpawningManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceGameStateComponent_PlayerSpawningManager");

	return Clss;
}


// PlayspaceGameStateComponent_PlayerSpawningManager PlayspaceSystem.Default__PlayspaceGameStateComponent_PlayerSpawningManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceGameStateComponent_PlayerSpawningManager* UPlayspaceGameStateComponent_PlayerSpawningManager::GetDefaultObj()
{
	static class UPlayspaceGameStateComponent_PlayerSpawningManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceGameStateComponent_PlayerSpawningManager*>(UPlayspaceGameStateComponent_PlayerSpawningManager::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
// (None)

class UClass* UGameFeatureAction_AddPlayspaceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_AddPlayspaceComponent");

	return Clss;
}


// GameFeatureAction_AddPlayspaceComponent PlayspaceSystem.Default__GameFeatureAction_AddPlayspaceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_AddPlayspaceComponent* UGameFeatureAction_AddPlayspaceComponent::GetDefaultObj()
{
	static class UGameFeatureAction_AddPlayspaceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_AddPlayspaceComponent*>(UGameFeatureAction_AddPlayspaceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
// (None)

class UClass* UGameFeatureAction_CreatePlayspacesFromConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureAction_CreatePlayspacesFromConfig");

	return Clss;
}


// GameFeatureAction_CreatePlayspacesFromConfig PlayspaceSystem.Default__GameFeatureAction_CreatePlayspacesFromConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFeatureAction_CreatePlayspacesFromConfig* UGameFeatureAction_CreatePlayspacesFromConfig::GetDefaultObj()
{
	static class UGameFeatureAction_CreatePlayspacesFromConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureAction_CreatePlayspacesFromConfig*>(UGameFeatureAction_CreatePlayspacesFromConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.GameplayVolume
// (Actor)

class UClass* UGameplayVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayVolume");

	return Clss;
}


// GameplayVolume PlayspaceSystem.Default__GameplayVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayVolume* UGameplayVolume::GetDefaultObj()
{
	static class UGameplayVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayVolume*>(UGameplayVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.GameplayVolume.UpdateSize
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     NewScale                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayVolume::UpdateSize(struct FVector& NewScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayVolume", "UpdateSize");

	Params::UGameplayVolume_UpdateSize_Params Parms{};

	Parms.NewScale = NewScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.GameplayVolume.OnOverlappedPawnControllerChanged
// (Native, Protected)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 OldController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 NewController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayVolume::OnOverlappedPawnControllerChanged(class UPawn* Pawn, class UController* OldController, class UController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayVolume", "OnOverlappedPawnControllerChanged");

	Params::UGameplayVolume_OnOverlappedPawnControllerChanged_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.OldController = OldController;
	Parms.NewController = NewController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.GameplayVolume.InitializeBoundsComponent
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UOverlapComponent*           NewBoundsComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayVolume::InitializeBoundsComponent(class UOverlapComponent* NewBoundsComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayVolume", "InitializeBoundsComponent");

	Params::UGameplayVolume_InitializeBoundsComponent_Params Parms{};

	Parms.NewBoundsComponent = NewBoundsComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.GameplayVolume.GetPlayspace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayspace*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayspace* UGameplayVolume::GetPlayspace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayVolume", "GetPlayspace");

	Params::UGameplayVolume_GetPlayspace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PlayspaceSystem.Playspace
// (Actor)

class UClass* UPlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Playspace");

	return Clss;
}


// Playspace PlayspaceSystem.Default__Playspace
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspace* UPlayspace::GetDefaultObj()
{
	static class UPlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspace*>(UPlayspace::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
// (Final, RequiredAPI, Native, Protected)
// Parameters:

void UPlayspace::OnRep_PlayspaceUsers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_PlayspaceUsers");

	Params::UPlayspace_OnRep_PlayspaceUsers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.Playspace.OnRep_MatchStartTime
// (RequiredAPI, Native, Protected)
// Parameters:

void UPlayspace::OnRep_MatchStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_MatchStartTime");

	Params::UPlayspace_OnRep_MatchStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
// (Final, RequiredAPI, Native, Protected)
// Parameters:

void UPlayspace::OnRep_bMatchHasEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_bMatchHasEnded");

	Params::UPlayspace_OnRep_bMatchHasEnded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.Playspace.OnRep_bIsInitialized
// (Final, RequiredAPI, Native, Protected)
// Parameters:

void UPlayspace::OnRep_bIsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace", "OnRep_bIsInitialized");

	Params::UPlayspace_OnRep_bIsInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspaceComponent_Logic
// (None)

class UClass* UPlayspaceComponent_Logic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_Logic");

	return Clss;
}


// PlayspaceComponent_Logic PlayspaceSystem.Default__PlayspaceComponent_Logic
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_Logic* UPlayspaceComponent_Logic::GetDefaultObj()
{
	static class UPlayspaceComponent_Logic* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_Logic*>(UPlayspaceComponent_Logic::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayspaceSystem.PlayspaceComponent_PlayerManager
// (None)

class UClass* UPlayspaceComponent_PlayerManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_PlayerManager");

	return Clss;
}


// PlayspaceComponent_PlayerManager PlayspaceSystem.Default__PlayspaceComponent_PlayerManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_PlayerManager* UPlayspaceComponent_PlayerManager::GetDefaultObj()
{
	static class UPlayspaceComponent_PlayerManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_PlayerManager*>(UPlayspaceComponent_PlayerManager::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.PlayspaceComponent_PlayerManager.OnPlayerPawnSet
// (Final, Native, Protected)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceComponent_PlayerManager::OnPlayerPawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceComponent_PlayerManager", "OnPlayerPawnSet");

	Params::UPlayspaceComponent_PlayerManager_OnPlayerPawnSet_Params Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspaceLibrary
// (None)

class UClass* UPlayspaceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceLibrary");

	return Clss;
}


// PlayspaceLibrary PlayspaceSystem.Default__PlayspaceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceLibrary* UPlayspaceLibrary::GetDefaultObj()
{
	static class UPlayspaceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceLibrary*>(UPlayspaceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.PlayspaceLibrary.GetPlayspaceForActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayspace*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayspace* UPlayspaceLibrary::GetPlayspaceForActor(class UObject* WorldContextObject, class UActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceLibrary", "GetPlayspaceForActor");

	Params::UPlayspaceLibrary_GetPlayspaceForActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayspaceSystem.PlayspaceLibrary.DestroyPlayspace
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayspace*                  PlayspaceToDestroy                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceLibrary::DestroyPlayspace(class UPlayspace* PlayspaceToDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceLibrary", "DestroyPlayspace");

	Params::UPlayspaceLibrary_DestroyPlayspace_Params Parms{};

	Parms.PlayspaceToDestroy = PlayspaceToDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspaceLogic
// (Actor)

class UClass* UPlayspaceLogic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceLogic");

	return Clss;
}


// PlayspaceLogic PlayspaceSystem.Default__PlayspaceLogic
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceLogic* UPlayspaceLogic::GetDefaultObj()
{
	static class UPlayspaceLogic* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceLogic*>(UPlayspaceLogic::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime
// (Native, Protected)
// Parameters:

void UPlayspaceLogic::OnRep_MatchStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceLogic", "OnRep_MatchStartTime");

	Params::UPlayspaceLogic_OnRep_MatchStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded
// (Final, Native, Private)
// Parameters:

void UPlayspaceLogic::OnRep_bMatchHasEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceLogic", "OnRep_bMatchHasEnded");

	Params::UPlayspaceLogic_OnRep_bMatchHasEnded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspaceManagerComponent
// (None)

class UClass* UPlayspaceManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceManagerComponent");

	return Clss;
}


// PlayspaceManagerComponent PlayspaceSystem.Default__PlayspaceManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceManagerComponent* UPlayspaceManagerComponent::GetDefaultObj()
{
	static class UPlayspaceManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceManagerComponent*>(UPlayspaceManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
// (Final, Native, Private)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPlayspaceManagerComponent::ProcessOverlapEvents(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceManagerComponent", "ProcessOverlapEvents");

	Params::UPlayspaceManagerComponent_ProcessOverlapEvents_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace
// (Final, Native, Private)
// Parameters:

void UPlayspaceManagerComponent::OnRep_RootPlayspace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceManagerComponent", "OnRep_RootPlayspace");

	Params::UPlayspaceManagerComponent_OnRep_RootPlayspace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayVolume*             Volume                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceManagerComponent::OnPlayerEndOverlapGameplayVolume(class UPlayerState* PlayerState, class UGameplayVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceManagerComponent", "OnPlayerEndOverlapGameplayVolume");

	Params::UPlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayVolume*             Volume                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceManagerComponent::OnPlayerBeginOverlapGameplayVolume(class UPlayerState* PlayerState, class UGameplayVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceManagerComponent", "OnPlayerBeginOverlapGameplayVolume");

	Params::UPlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayspaceSystem.PlayspaceSpawnActor
// (Actor)

class UClass* UPlayspaceSpawnActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceSpawnActor");

	return Clss;
}


// PlayspaceSpawnActor PlayspaceSystem.Default__PlayspaceSpawnActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceSpawnActor* UPlayspaceSpawnActor::GetDefaultObj()
{
	static class UPlayspaceSpawnActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceSpawnActor*>(UPlayspaceSpawnActor::StaticClass()->DefaultObject);

	return Default;
}

}


