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


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiNearestLocation
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMidmatchRiftPoiCheatManager::SpawnMidmatchPoiNearestLocation(struct FVector& Location)
{
	static auto Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "SpawnMidmatchPoiNearestLocation");

	Params::UMidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation_Params Parms;

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiFurthestLocation
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMidmatchRiftPoiCheatManager::SpawnMidmatchPoiFurthestLocation(struct FVector& Location)
{
	static auto Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "SpawnMidmatchPoiFurthestLocation");

	Params::UMidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation_Params Parms;

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnNearestToPawnLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMidmatchRiftPoiCheatManager::MidmatchRiftPoiSpawnNearestToPawnLocation()
{
	static auto Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "MidmatchRiftPoiSpawnNearestToPawnLocation");

	Params::UMidmatchRiftPoiCheatManager_MidmatchRiftPoiSpawnNearestToPawnLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnFurthestFromPawnLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMidmatchRiftPoiCheatManager::MidmatchRiftPoiSpawnFurthestFromPawnLocation()
{
	static auto Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "MidmatchRiftPoiSpawnFurthestFromPawnLocation");

	Params::UMidmatchRiftPoiCheatManager_MidmatchRiftPoiSpawnFurthestFromPawnLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor.SetDynamicLandBrush
// (Final, BlueprintCosmetic, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 LandIcon                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AMidMatchRiftPoiManagerActor::SetDynamicLandBrush(struct FSlateBrush& LandIcon)
{
	static auto Func = Class->GetFunction("MidMatchRiftPoiManagerActor", "SetDynamicLandBrush");

	Params::AMidMatchRiftPoiManagerActor_SetDynamicLandBrush_Params Parms;

	Parms.LandIcon = LandIcon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.TeleportVehicleActor
// (Final, BlueprintAuthorityOnly, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      VehicleActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TeleportLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AMidmatchRiftPoiSpawnIndicator::TeleportVehicleActor(class AActor* VehicleActor, struct FVector& TeleportLocation)
{
	static auto Func = Class->GetFunction("MidmatchRiftPoiSpawnIndicator", "TeleportVehicleActor");

	Params::AMidmatchRiftPoiSpawnIndicator_TeleportVehicleActor_Params Parms;

	Parms.VehicleActor = VehicleActor;
	Parms.TeleportLocation = TeleportLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.IsActorInDataLayerInstance
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataLayerInstance*          DataLayerInstance                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AMidmatchRiftPoiSpawnIndicator::IsActorInDataLayerInstance(class AActor* Actor, class UDataLayerInstance* DataLayerInstance)
{
	static auto Func = Class->GetFunction("MidmatchRiftPoiSpawnIndicator", "IsActorInDataLayerInstance");

	Params::AMidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance_Params Parms;

	Parms.Actor = Actor;
	Parms.DataLayerInstance = DataLayerInstance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
