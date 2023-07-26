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


// Function CreativeRoyaleRuntime.FortPoiSwapManager.SwapPoi
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPoiVolume*              PoiToSwap                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPoiSwapManager::SwapPoi(class AFortPoiVolume* PoiToSwap)
{
	static auto Func = Class->GetFunction("FortPoiSwapManager", "SwapPoi");

	Params::UFortPoiSwapManager_SwapPoi_Params Parms;

	Parms.PoiToSwap = PoiToSwap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortPoiSwapManager.SetPoiSubPlot
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPoiVolume*              POIVolume                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SubPlotName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SubPlotLinkCode                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPoiSwapManager::SetPoiSubPlot(class AFortPoiVolume* POIVolume, const class FString& SubPlotName, const class FString& SubPlotLinkCode)
{
	static auto Func = Class->GetFunction("FortPoiSwapManager", "SetPoiSubPlot");

	Params::UFortPoiSwapManager_SetPoiSubPlot_Params Parms;

	Parms.POIVolume = POIVolume;
	Parms.SubPlotName = SubPlotName;
	Parms.SubPlotLinkCode = SubPlotLinkCode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortPoiSwapManager.OnPrePlayspaceContentUnload
// (Final, Native, Protected)
// Parameters:
// class AFortPoiSwapPlayspace*       PoiSwapPlayspace                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPoiSwapManager::OnPrePlayspaceContentUnload(class AFortPoiSwapPlayspace* PoiSwapPlayspace)
{
	static auto Func = Class->GetFunction("FortPoiSwapManager", "OnPrePlayspaceContentUnload");

	Params::UFortPoiSwapManager_OnPrePlayspaceContentUnload_Params Parms;

	Parms.PoiSwapPlayspace = PoiSwapPlayspace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortPoiSwapManager.OnPlayspaceContentLoadingStateChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class AFortPoiSwapPlayspace*       PoiSwapPlayspace                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortPoiSwapUserContentStateContentLoadingState                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPoiSwapManager::OnPlayspaceContentLoadingStateChanged(class AFortPoiSwapPlayspace* PoiSwapPlayspace, enum class EFortPoiSwapUserContentState& ContentLoadingState)
{
	static auto Func = Class->GetFunction("FortPoiSwapManager", "OnPlayspaceContentLoadingStateChanged");

	Params::UFortPoiSwapManager_OnPlayspaceContentLoadingStateChanged_Params Parms;

	Parms.PoiSwapPlayspace = PoiSwapPlayspace;
	Parms.ContentLoadingState = ContentLoadingState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortPoiSwapManager.GetPoiSubPlotLinkCode
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPoiVolume*              POIVolume                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFortPoiSwapManager::GetPoiSubPlotLinkCode(class AFortPoiVolume* POIVolume)
{
	static auto Func = Class->GetFunction("FortPoiSwapManager", "GetPoiSubPlotLinkCode");

	Params::UFortPoiSwapManager_GetPoiSubPlotLinkCode_Params Parms;

	Parms.POIVolume = POIVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CreativeRoyaleRuntime.FortPoiSwapManager.GetPlayspaceForPoi
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPoiVolume*              POIVolume                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPoiSwapPlayspace*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortPoiSwapPlayspace* UFortPoiSwapManager::GetPlayspaceForPoi(class AFortPoiVolume* POIVolume)
{
	static auto Func = Class->GetFunction("FortPoiSwapManager", "GetPlayspaceForPoi");

	Params::UFortPoiSwapManager_GetPlayspaceForPoi_Params Parms;

	Parms.POIVolume = POIVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CreativeRoyaleRuntime.FortPoiSwapPlayspace.OnUserContentUnloaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FAsyncTaskResult            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortPoiSwapPlayspace::OnUserContentUnloaded(struct FAsyncTaskResult& Result)
{
	static auto Func = Class->GetFunction("FortPoiSwapPlayspace", "OnUserContentUnloaded");

	Params::AFortPoiSwapPlayspace_OnUserContentUnloaded_Params Parms;

	Parms.Result = Result;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortPoiSwapPlayspace.OnUserContentLoaded
// (Final, Native, Protected)
// Parameters:

void AFortPoiSwapPlayspace::OnUserContentLoaded()
{
	static auto Func = Class->GetFunction("FortPoiSwapPlayspace", "OnUserContentLoaded");

	Params::AFortPoiSwapPlayspace_OnUserContentLoaded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.StartLootClustering
// (Final, Native, Protected)
// Parameters:

void UAthenaAIServicePlayerBots_CreativeRoyale::StartLootClustering()
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots_CreativeRoyale", "StartLootClustering");

	Params::UAthenaAIServicePlayerBots_CreativeRoyale_StartLootClustering_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.OnPlayerJoiningInProgress
// (Final, Native, Protected)
// Parameters:
// class AFortPlayerState*            FortPlayerState                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots_CreativeRoyale::OnPlayerJoiningInProgress(class AFortPlayerState* FortPlayerState)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots_CreativeRoyale", "OnPlayerJoiningInProgress");

	Params::UAthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress_Params Parms;

	Parms.FortPlayerState = FortPlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveParentToAttachToInformation
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FGuid                       ActorToAttachGuid                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorToAttach                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LevelReset::SaveParentToAttachToInformation(const struct FGuid& ActorToAttachGuid, class AActor* ActorToAttach)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "SaveParentToAttachToInformation");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_SaveParentToAttachToInformation_Params Parms;

	Parms.ActorToAttachGuid = ActorToAttachGuid;
	Parms.ActorToAttach = ActorToAttach;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveDamagedActor
// (Final, Native, Private)
// Parameters:
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LevelReset::SaveDamagedActor(class AActor* DamagedActor)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "SaveDamagedActor");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor_Params Parms;

	Parms.DamagedActor = DamagedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveActorToBeRespawned
// (Final, Native, Private)
// Parameters:
// class AActor*                      ActorToBeRespawned                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRemoveDamagedActor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LevelReset::SaveActorToBeRespawned(class AActor* ActorToBeRespawned, bool bRemoveDamagedActor)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "SaveActorToBeRespawned");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned_Params Parms;

	Parms.ActorToBeRespawned = ActorToBeRespawned;
	Parms.bRemoveDamagedActor = bRemoveDamagedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.RestoreAttachedBuildingActors
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FGuid                       SpawnableActorGuid                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LevelReset::RestoreAttachedBuildingActors(const struct FGuid& SpawnableActorGuid, class AActor* Actor)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "RestoreAttachedBuildingActors");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_RestoreAttachedBuildingActors_Params Parms;

	Parms.SpawnableActorGuid = SpawnableActorGuid;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.RespawnDeadActors
// (Final, Native, Private)
// Parameters:

void UCreativeRoyalePlayspaceComponent_LevelReset::RespawnDeadActors()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "RespawnDeadActors");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_RespawnDeadActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.OnSpawningFromSaveFinish
// (Final, Native, Private)
// Parameters:

void UCreativeRoyalePlayspaceComponent_LevelReset::OnSpawningFromSaveFinish()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "OnSpawningFromSaveFinish");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_OnSpawningFromSaveFinish_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.OnPlotLoadComplete
// (Final, Native, Private)
// Parameters:

void UCreativeRoyalePlayspaceComponent_LevelReset::OnPlotLoadComplete()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "OnPlotLoadComplete");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_OnPlotLoadComplete_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NewMinigameState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LevelReset::HandleMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "HandleMinigameStateChanged");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDied
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

void UCreativeRoyalePlayspaceComponent_LevelReset::HandleBuildingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "HandleBuildingDied");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied_Params Parms;

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


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDestroyed
// (Final, Native, Private)
// Parameters:
// TWeakObjectPtr<class ABuildingActor>DestroyedBuilding                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LevelReset::HandleBuildingDestroyed(TWeakObjectPtr<class ABuildingActor> DestroyedBuilding)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "HandleBuildingDestroyed");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDestroyed_Params Parms;

	Parms.DestroyedBuilding = DestroyedBuilding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDamaged
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

void UCreativeRoyalePlayspaceComponent_LevelReset::HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "HandleBuildingDamaged");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged_Params Parms;

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


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.GetPoiSwapManager
// (Final, Native, Protected)
// Parameters:
// class UFortPoiSwapManager*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPoiSwapManager* UCreativeRoyalePlayspaceComponent_LevelReset::GetPoiSwapManager()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "GetPoiSwapManager");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_GetPoiSwapManager_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.GetLevelSaveRecord
// (Final, Native, Private)
// Parameters:
// class ULevelSaveRecord*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSaveRecord* UCreativeRoyalePlayspaceComponent_LevelReset::GetLevelSaveRecord()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "GetLevelSaveRecord");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_GetLevelSaveRecord_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.DestroyDamagedActors
// (Final, Native, Private)
// Parameters:

void UCreativeRoyalePlayspaceComponent_LevelReset::DestroyDamagedActors()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "DestroyDamagedActors");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_DestroyDamagedActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.ClearFoundActors
// (Final, Native, Private)
// Parameters:

void UCreativeRoyalePlayspaceComponent_LevelReset::ClearFoundActors()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "ClearFoundActors");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_ClearFoundActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.CachePoiSwapManager
// (Final, Native, Protected)
// Parameters:

void UCreativeRoyalePlayspaceComponent_LevelReset::CachePoiSwapManager()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "CachePoiSwapManager");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_CachePoiSwapManager_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.BindActorToCallbacks
// (Final, Native, Private)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LevelReset::BindActorToCallbacks(class AActor* Actor)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "BindActorToCallbacks");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.AddActorToTrack
// (Final, Native, Public)
// Parameters:
// class AActor*                      ActorToTrack                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LevelReset::AddActorToTrack(class AActor* ActorToTrack)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LevelReset", "AddActorToTrack");

	Params::UCreativeRoyalePlayspaceComponent_LevelReset_AddActorToTrack_Params Parms;

	Parms.ActorToTrack = ActorToTrack;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlotLoadComplete
// (Final, Native, Private)
// Parameters:

void UCreativeRoyalePlayspaceComponent_LoadingScreen::OnPlotLoadComplete()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LoadingScreen", "OnPlotLoadComplete");

	Params::UCreativeRoyalePlayspaceComponent_LoadingScreen_OnPlotLoadComplete_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlayspaceUserAdded
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FPlayspaceUser              AddedUser                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LoadingScreen::OnPlayspaceUserAdded(struct FPlayspaceUser* AddedUser)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LoadingScreen", "OnPlayspaceUserAdded");

	Params::UCreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AddedUser != nullptr)
		*AddedUser = Parms.AddedUser;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_LoadingScreen::OnMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_LoadingScreen", "OnMinigameStateChanged");

	Params::UCreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.OnSpawningFromSaveFinish
// (Final, Native, Private)
// Parameters:

void UCreativeRoyalePlayspaceComponent_RemoveItems::OnSpawningFromSaveFinish()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_RemoveItems", "OnSpawningFromSaveFinish");

	Params::UCreativeRoyalePlayspaceComponent_RemoveItems_OnSpawningFromSaveFinish_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.OnPlotLoadComplete
// (Final, Native, Private)
// Parameters:

void UCreativeRoyalePlayspaceComponent_RemoveItems::OnPlotLoadComplete()
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_RemoveItems", "OnPlotLoadComplete");

	Params::UCreativeRoyalePlayspaceComponent_RemoveItems_OnPlotLoadComplete_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.HandleMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NewMinigameState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeRoyalePlayspaceComponent_RemoveItems::HandleMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState)
{
	static auto Func = Class->GetFunction("CreativeRoyalePlayspaceComponent_RemoveItems", "HandleMinigameStateChanged");

	Params::UCreativeRoyalePlayspaceComponent_RemoveItems_HandleMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayersToPlayerStarts
// (Final, Native, Protected)
// Parameters:

void ACreativeRoyaleRootPlayspace::TeleportPlayersToPlayerStarts()
{
	static auto Func = Class->GetFunction("CreativeRoyaleRootPlayspace", "TeleportPlayersToPlayerStarts");

	Params::ACreativeRoyaleRootPlayspace_TeleportPlayersToPlayerStarts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnRep_bHasPlotLoaded
// (Final, Native, Private)
// Parameters:

void ACreativeRoyaleRootPlayspace::OnRep_bHasPlotLoaded()
{
	static auto Func = Class->GetFunction("CreativeRoyaleRootPlayspace", "OnRep_bHasPlotLoaded");

	Params::ACreativeRoyaleRootPlayspace_OnRep_bHasPlotLoaded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnPlotLoadComplete
// (Final, Native, Private)
// Parameters:

void ACreativeRoyaleRootPlayspace::OnPlotLoadComplete()
{
	static auto Func = Class->GetFunction("CreativeRoyaleRootPlayspace", "OnPlotLoadComplete");

	Params::ACreativeRoyaleRootPlayspace_OnPlotLoadComplete_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.Cheat_LoadEditorIsland
// (Final, Native, Protected)
// Parameters:

void ACreativeRoyaleRootPlayspace::Cheat_LoadEditorIsland()
{
	static auto Func = Class->GetFunction("CreativeRoyaleRootPlayspace", "Cheat_LoadEditorIsland");

	Params::ACreativeRoyaleRootPlayspace_Cheat_LoadEditorIsland_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.BuildDataRegistryResolverScope_Implementation
// (Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class FName>                InOutResolverScopes                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              InOutPriority                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACreativeRoyaleRootPlayspace::BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority)
{
	static auto Func = Class->GetFunction("CreativeRoyaleRootPlayspace", "BuildDataRegistryResolverScope_Implementation");

	Params::ACreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation_Params Parms;


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


// Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.TeleportToPlotAferLoad
// (Final, Native, Protected, Const)
// Parameters:

void UFortCheatManager_CreativeRoyale::TeleportToPlotAferLoad()
{
	static auto Func = Class->GetFunction("FortCheatManager_CreativeRoyale", "TeleportToPlotAferLoad");

	Params::UFortCheatManager_CreativeRoyale_TeleportToPlotAferLoad_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleTeleportToEditZone
// (Final, Exec, Native, Public, Const)
// Parameters:

void UFortCheatManager_CreativeRoyale::CreativeRoyaleTeleportToEditZone()
{
	static auto Func = Class->GetFunction("FortCheatManager_CreativeRoyale", "CreativeRoyaleTeleportToEditZone");

	Params::UFortCheatManager_CreativeRoyale_CreativeRoyaleTeleportToEditZone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleResetIslandFile
// (Final, Exec, Native, Public, Const)
// Parameters:

void UFortCheatManager_CreativeRoyale::CreativeRoyaleResetIslandFile()
{
	static auto Func = Class->GetFunction("FortCheatManager_CreativeRoyale", "CreativeRoyaleResetIslandFile");

	Params::UFortCheatManager_CreativeRoyale_CreativeRoyaleResetIslandFile_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleLoadEditPlot
// (Final, Exec, Native, Public, Const)
// Parameters:

void UFortCheatManager_CreativeRoyale::CreativeRoyaleLoadEditPlot()
{
	static auto Func = Class->GetFunction("FortCheatManager_CreativeRoyale", "CreativeRoyaleLoadEditPlot");

	Params::UFortCheatManager_CreativeRoyale_CreativeRoyaleLoadEditPlot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.OnPlayerLoggedIn
// (Final, Native, Protected)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProjectEditComponent_CreativeRoyale::OnPlayerLoggedIn(class APlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("FortProjectEditComponent_CreativeRoyale", "OnPlayerLoggedIn");

	Params::UFortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.LoadPlotFromProject
// (Final, Native, Protected)
// Parameters:

void UFortProjectEditComponent_CreativeRoyale::LoadPlotFromProject()
{
	static auto Func = Class->GetFunction("FortProjectEditComponent_CreativeRoyale", "LoadPlotFromProject");

	Params::UFortProjectEditComponent_CreativeRoyale_LoadPlotFromProject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
