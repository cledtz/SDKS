#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager
// (None)

class UClass* UMidmatchRiftPoiCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MidmatchRiftPoiCheatManager");

	return Clss;
}


// MidmatchRiftPoiCheatManager MidMatchRiftPoiGameplayRuntime.Default__MidmatchRiftPoiCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UMidmatchRiftPoiCheatManager* UMidmatchRiftPoiCheatManager::GetDefaultObj()
{
	static class UMidmatchRiftPoiCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UMidmatchRiftPoiCheatManager*>(UMidmatchRiftPoiCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiNearestLocation
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMidmatchRiftPoiCheatManager::SpawnMidmatchPoiNearestLocation(struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "SpawnMidmatchPoiNearestLocation");

	Params::UMidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiFurthestLocation
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMidmatchRiftPoiCheatManager::SpawnMidmatchPoiFurthestLocation(struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "SpawnMidmatchPoiFurthestLocation");

	Params::UMidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnNearestToPawnLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMidmatchRiftPoiCheatManager::MidmatchRiftPoiSpawnNearestToPawnLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "MidmatchRiftPoiSpawnNearestToPawnLocation");

	Params::UMidmatchRiftPoiCheatManager_MidmatchRiftPoiSpawnNearestToPawnLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnFurthestFromPawnLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:

void UMidmatchRiftPoiCheatManager::MidmatchRiftPoiSpawnFurthestFromPawnLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "MidmatchRiftPoiSpawnFurthestFromPawnLocation");

	Params::UMidmatchRiftPoiCheatManager_MidmatchRiftPoiSpawnFurthestFromPawnLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor
// (Actor)

class UClass* UMidMatchRiftPoiManagerActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MidMatchRiftPoiManagerActor");

	return Clss;
}


// MidMatchRiftPoiManagerActor MidMatchRiftPoiGameplayRuntime.Default__MidMatchRiftPoiManagerActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMidMatchRiftPoiManagerActor* UMidMatchRiftPoiManagerActor::GetDefaultObj()
{
	static class UMidMatchRiftPoiManagerActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMidMatchRiftPoiManagerActor*>(UMidMatchRiftPoiManagerActor::StaticClass()->DefaultObject);

	return Default;
}


// Function MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor.SetDynamicLandBrush
// (Final, BlueprintCosmetic, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 LandIcon                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMidMatchRiftPoiManagerActor::SetDynamicLandBrush(struct FSlateBrush& LandIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MidMatchRiftPoiManagerActor", "SetDynamicLandBrush");

	Params::UMidMatchRiftPoiManagerActor_SetDynamicLandBrush_Params Parms{};

	Parms.LandIcon = LandIcon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator
// (Actor)

class UClass* UMidmatchRiftPoiSpawnIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MidmatchRiftPoiSpawnIndicator");

	return Clss;
}


// MidmatchRiftPoiSpawnIndicator MidMatchRiftPoiGameplayRuntime.Default__MidmatchRiftPoiSpawnIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UMidmatchRiftPoiSpawnIndicator* UMidmatchRiftPoiSpawnIndicator::GetDefaultObj()
{
	static class UMidmatchRiftPoiSpawnIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UMidmatchRiftPoiSpawnIndicator*>(UMidmatchRiftPoiSpawnIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.TeleportVehicleActor
// (Final, BlueprintAuthorityOnly, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      VehicleActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TeleportLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMidmatchRiftPoiSpawnIndicator::TeleportVehicleActor(class UActor* VehicleActor, struct FVector& TeleportLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MidmatchRiftPoiSpawnIndicator", "TeleportVehicleActor");

	Params::UMidmatchRiftPoiSpawnIndicator_TeleportVehicleActor_Params Parms{};

	Parms.VehicleActor = VehicleActor;
	Parms.TeleportLocation = TeleportLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.IsActorInDataLayerInstance
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataLayerInstance*          DataLayerInstance                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMidmatchRiftPoiSpawnIndicator::IsActorInDataLayerInstance(class UActor* Actor, class UDataLayerInstance* DataLayerInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MidmatchRiftPoiSpawnIndicator", "IsActorInDataLayerInstance");

	Params::UMidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance_Params Parms{};

	Parms.Actor = Actor;
	Parms.DataLayerInstance = DataLayerInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


