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


// Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOverlapComponent::OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("OverlapComponent", "OnEndActorOverlap");

	Params::UOverlapComponent_OnEndActorOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("OverlapComponent", "OnBeginActorOverlap");

	Params::UOverlapComponent_OnBeginActorOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UPlayspaceControllerComponent_PlayerSpawning::ServerMarkReadyForSpawning()
{
	static auto Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "ServerMarkReadyForSpawning");

	Params::UPlayspaceControllerComponent_PlayerSpawning_ServerMarkReadyForSpawning_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
// (Final, Native, Private)
// Parameters:

void UPlayspaceControllerComponent_PlayerSpawning::OnRep_ReplicatedSpawnInfo()
{
	static auto Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "OnRep_ReplicatedSpawnInfo");

	Params::UPlayspaceControllerComponent_PlayerSpawning_OnRep_ReplicatedSpawnInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FReplicatedSpawnInfo        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FReplicatedSpawnInfo UPlayspaceControllerComponent_PlayerSpawning::GetSpawnInfo()
{
	static auto Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "GetSpawnInfo");

	Params::UPlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ClientReplicatedSpawnInfo
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FReplicatedSpawnInfo        InReplicatedSpawnInfo                                            (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPlayspaceControllerComponent_PlayerSpawning::ClientReplicatedSpawnInfo(struct FReplicatedSpawnInfo& InReplicatedSpawnInfo)
{
	static auto Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "ClientReplicatedSpawnInfo");

	Params::UPlayspaceControllerComponent_PlayerSpawning_ClientReplicatedSpawnInfo_Params Parms;

	Parms.InReplicatedSpawnInfo = InReplicatedSpawnInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.GameplayVolume.UpdateSize
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector                     NewScale                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayVolume::UpdateSize(struct FVector& NewScale)
{
	static auto Func = Class->GetFunction("GameplayVolume", "UpdateSize");

	Params::UGameplayVolume_UpdateSize_Params Parms;

	Parms.NewScale = NewScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.GameplayVolume.OnOverlappedPawnControllerChanged
// (Native, Protected)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 OldController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 NewController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayVolume::OnOverlappedPawnControllerChanged(class UPawn* Pawn, class UController* OldController, class UController* NewController)
{
	static auto Func = Class->GetFunction("GameplayVolume", "OnOverlappedPawnControllerChanged");

	Params::UGameplayVolume_OnOverlappedPawnControllerChanged_Params Parms;

	Parms.Pawn = Pawn;
	Parms.OldController = OldController;
	Parms.NewController = NewController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.GameplayVolume.InitializeBoundsComponent
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UOverlapComponent*           NewBoundsComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayVolume::InitializeBoundsComponent(class UOverlapComponent* NewBoundsComponent)
{
	static auto Func = Class->GetFunction("GameplayVolume", "InitializeBoundsComponent");

	Params::UGameplayVolume_InitializeBoundsComponent_Params Parms;

	Parms.NewBoundsComponent = NewBoundsComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.GameplayVolume.GetPlayspace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayspace*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayspace* UGameplayVolume::GetPlayspace()
{
	static auto Func = Class->GetFunction("GameplayVolume", "GetPlayspace");

	Params::UGameplayVolume_GetPlayspace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
// (Final, Native, Protected)
// Parameters:

void UPlayspace::OnRep_PlayspaceUsers()
{
	static auto Func = Class->GetFunction("Playspace", "OnRep_PlayspaceUsers");

	Params::UPlayspace_OnRep_PlayspaceUsers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.Playspace.OnRep_MatchStartTime
// (Native, Protected)
// Parameters:

void UPlayspace::OnRep_MatchStartTime()
{
	static auto Func = Class->GetFunction("Playspace", "OnRep_MatchStartTime");

	Params::UPlayspace_OnRep_MatchStartTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
// (Final, Native, Protected)
// Parameters:

void UPlayspace::OnRep_bMatchHasEnded()
{
	static auto Func = Class->GetFunction("Playspace", "OnRep_bMatchHasEnded");

	Params::UPlayspace_OnRep_bMatchHasEnded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.Playspace.OnRep_bIsInitialized
// (Final, Native, Protected)
// Parameters:

void UPlayspace::OnRep_bIsInitialized()
{
	static auto Func = Class->GetFunction("Playspace", "OnRep_bIsInitialized");

	Params::UPlayspace_OnRep_bIsInitialized_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceComponent_PlayerManager.OnPlayerPawnSet
// (Final, Native, Protected)
// Parameters:
// class UPlayerState*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceComponent_PlayerManager::OnPlayerPawnSet(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn)
{
	static auto Func = Class->GetFunction("PlayspaceComponent_PlayerManager", "OnPlayerPawnSet");

	Params::UPlayspaceComponent_PlayerManager_OnPlayerPawnSet_Params Parms;

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceLibrary.GetPlayspaceForActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayspace*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayspace* UPlayspaceLibrary::GetPlayspaceForActor(class UObject* WorldContextObject, class UActor* InActor)
{
	static auto Func = Class->GetFunction("PlayspaceLibrary", "GetPlayspaceForActor");

	Params::UPlayspaceLibrary_GetPlayspaceForActor_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayspaceSystem.PlayspaceLibrary.DestroyPlayspace
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayspace*                  PlayspaceToDestroy                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceLibrary::DestroyPlayspace(class UPlayspace* PlayspaceToDestroy)
{
	static auto Func = Class->GetFunction("PlayspaceLibrary", "DestroyPlayspace");

	Params::UPlayspaceLibrary_DestroyPlayspace_Params Parms;

	Parms.PlayspaceToDestroy = PlayspaceToDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime
// (Native, Protected)
// Parameters:

void UPlayspaceLogic::OnRep_MatchStartTime()
{
	static auto Func = Class->GetFunction("PlayspaceLogic", "OnRep_MatchStartTime");

	Params::UPlayspaceLogic_OnRep_MatchStartTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded
// (Final, Native, Private)
// Parameters:

void UPlayspaceLogic::OnRep_bMatchHasEnded()
{
	static auto Func = Class->GetFunction("PlayspaceLogic", "OnRep_bMatchHasEnded");

	Params::UPlayspaceLogic_OnRep_bMatchHasEnded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
// (Final, Native, Private)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPlayspaceManagerComponent::ProcessOverlapEvents(float DeltaTime)
{
	static auto Func = Class->GetFunction("PlayspaceManagerComponent", "ProcessOverlapEvents");

	Params::UPlayspaceManagerComponent_ProcessOverlapEvents_Params Parms;

	Parms.DeltaTime = DeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace
// (Final, Native, Private)
// Parameters:

void UPlayspaceManagerComponent::OnRep_RootPlayspace()
{
	static auto Func = Class->GetFunction("PlayspaceManagerComponent", "OnRep_RootPlayspace");

	Params::UPlayspaceManagerComponent_OnRep_RootPlayspace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayVolume*             Volume                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceManagerComponent::OnPlayerEndOverlapGameplayVolume(class UPlayerState* PlayerState, class UGameplayVolume* Volume)
{
	static auto Func = Class->GetFunction("PlayspaceManagerComponent", "OnPlayerEndOverlapGameplayVolume");

	Params::UPlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume_Params Parms;

	Parms.PlayerState = PlayerState;
	Parms.Volume = Volume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
// (Final, Native, Private)
// Parameters:
// class UPlayerState*                PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayVolume*             Volume                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayspaceManagerComponent::OnPlayerBeginOverlapGameplayVolume(class UPlayerState* PlayerState, class UGameplayVolume* Volume)
{
	static auto Func = Class->GetFunction("PlayspaceManagerComponent", "OnPlayerBeginOverlapGameplayVolume");

	Params::UPlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume_Params Parms;

	Parms.PlayerState = PlayerState;
	Parms.Volume = Volume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
