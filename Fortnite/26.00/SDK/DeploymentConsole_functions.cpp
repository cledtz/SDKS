#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DeploymentConsole.DeploymentConsoleComponent
// (None)

class UClass* UDeploymentConsoleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeploymentConsoleComponent");

	return Clss;
}


// DeploymentConsoleComponent DeploymentConsole.Default__DeploymentConsoleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeploymentConsoleComponent* UDeploymentConsoleComponent::GetDefaultObj()
{
	static class UDeploymentConsoleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeploymentConsoleComponent*>(UDeploymentConsoleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DeploymentConsole.DeploymentConsoleComponent.SpawnAircrafts
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSpawnAircraftForEachTeam                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FDeploymentConsoleAircraftData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FDeploymentConsoleAircraftData> UDeploymentConsoleComponent::SpawnAircrafts(bool bSpawnAircraftForEachTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SpawnAircrafts");

	Params::UDeploymentConsoleComponent_SpawnAircrafts_Params Parms{};

	Parms.bSpawnAircraftForEachTeam = bSpawnAircraftForEachTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.SpawnAircraft
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              FlightIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAircraft*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAircraft* UDeploymentConsoleComponent::SpawnAircraft(int32 FlightIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SpawnAircraft");

	Params::UDeploymentConsoleComponent_SpawnAircraft_Params Parms{};

	Parms.FlightIndex = FlightIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.SetupTeamSpawnPoints
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bGroupTeams                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeploymentConsoleComponent::SetupTeamSpawnPoints(bool bGroupTeams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SetupTeamSpawnPoints");

	Params::UDeploymentConsoleComponent_SetupTeamSpawnPoints_Params Parms{};

	Parms.bGroupTeams = bGroupTeams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.SetPlayerIsWaiting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UController*                 InController                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInPlayerIsWaiting                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeploymentConsoleComponent::SetPlayerIsWaiting(class UController* InController, bool bInPlayerIsWaiting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SetPlayerIsWaiting");

	Params::UDeploymentConsoleComponent_SetPlayerIsWaiting_Params Parms{};

	Parms.InController = InController;
	Parms.bInPlayerIsWaiting = bInPlayerIsWaiting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.SetAircraftLock
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsLocked                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeploymentConsoleComponent::SetAircraftLock(bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SetAircraftLock");

	Params::UDeploymentConsoleComponent_SetAircraftLock_Params Parms{};

	Parms.bIsLocked = bIsLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.SetAircraftDropZone
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox2D                      InDropZone                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UDeploymentConsoleComponent::SetAircraftDropZone(struct FBox2D& InDropZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SetAircraftDropZone");

	Params::UDeploymentConsoleComponent_SetAircraftDropZone_Params Parms{};

	Parms.InDropZone = InDropZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.RetrievePlayerSpawnLocation
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               bIsGameInProgress                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGroupTeams                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTeam                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UDeploymentConsoleComponent::RetrievePlayerSpawnLocation(bool bIsGameInProgress, bool bGroupTeams, uint8 InTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "RetrievePlayerSpawnLocation");

	Params::UDeploymentConsoleComponent_RetrievePlayerSpawnLocation_Params Parms{};

	Parms.bIsGameInProgress = bIsGameInProgress;
	Parms.bGroupTeams = bGroupTeams;
	Parms.InTeam = InTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.ResetSpawnPoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDeploymentConsoleComponent::ResetSpawnPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "ResetSpawnPoints");

	Params::UDeploymentConsoleComponent_ResetSpawnPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.MoveBoxTo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox2D                      InBox                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   VectorToMoveTo                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox2D                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox2D UDeploymentConsoleComponent::MoveBoxTo(struct FBox2D& InBox, struct FVector2D& VectorToMoveTo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "MoveBoxTo");

	Params::UDeploymentConsoleComponent_MoveBoxTo_Params Parms{};

	Parms.InBox = InBox;
	Parms.VectorToMoveTo = VectorToMoveTo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.InitializeFlightPath
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UFortGameStateAthena*        GSA                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAircraftFlightConstructionInfoFlightPathConstructionInfo                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UDeploymentConsoleComponent::InitializeFlightPath(class UFortGameStateAthena* GSA, struct FAircraftFlightConstructionInfo& FlightPathConstructionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "InitializeFlightPath");

	Params::UDeploymentConsoleComponent_InitializeFlightPath_Params Parms{};

	Parms.GSA = GSA;
	Parms.FlightPathConstructionInfo = FlightPathConstructionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.GetTeamSpawnData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FDeploymentConsoleTeamData>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FDeploymentConsoleTeamData> UDeploymentConsoleComponent::GetTeamSpawnData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetTeamSpawnData");

	Params::UDeploymentConsoleComponent_GetTeamSpawnData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.GetSpawnPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector2D>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector2D> UDeploymentConsoleComponent::GetSpawnPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetSpawnPoints");

	Params::UDeploymentConsoleComponent_GetSpawnPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.GetMinigameTeamsWithPlayers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortMinigame*               InMinigame                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> UDeploymentConsoleComponent::GetMinigameTeamsWithPlayers(class UFortMinigame* InMinigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetMinigameTeamsWithPlayers");

	Params::UDeploymentConsoleComponent_GetMinigameTeamsWithPlayers_Params Parms{};

	Parms.InMinigame = InMinigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.GetMapInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaMapInfo*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaMapInfo* UDeploymentConsoleComponent::GetMapInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetMapInfo");

	Params::UDeploymentConsoleComponent_GetMapInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.GetDefaultFlightPathConstructionInfo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortGameStateAthena*        GameStateAthena                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAirCraftBehavior       AirCraftBehavior                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAircraftFlightConstructionInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAircraftFlightConstructionInfo UDeploymentConsoleComponent::GetDefaultFlightPathConstructionInfo(class UFortGameStateAthena* GameStateAthena, enum class EAirCraftBehavior AirCraftBehavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetDefaultFlightPathConstructionInfo");

	Params::UDeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo_Params Parms{};

	Parms.GameStateAthena = GameStateAthena;
	Parms.AirCraftBehavior = AirCraftBehavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.GetCachedAircraftSpawnZone
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox2D                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox2D UDeploymentConsoleComponent::GetCachedAircraftSpawnZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetCachedAircraftSpawnZone");

	Params::UDeploymentConsoleComponent_GetCachedAircraftSpawnZone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.ForcePlayerEnterAircraft
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerAthena* InController                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAircraft*         InAircraft                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeploymentConsoleComponent::ForcePlayerEnterAircraft(class UFortPlayerControllerAthena* InController, class UFortAthenaAircraft* InAircraft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "ForcePlayerEnterAircraft");

	Params::UDeploymentConsoleComponent_ForcePlayerEnterAircraft_Params Parms{};

	Parms.InController = InController;
	Parms.InAircraft = InAircraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.ConstructInventoryOnController
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerAthena* InController                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDeploymentConsoleComponent::ConstructInventoryOnController(class UFortPlayerControllerAthena* InController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "ConstructInventoryOnController");

	Params::UDeploymentConsoleComponent_ConstructInventoryOnController_Params Parms{};

	Parms.InController = InController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.ClearFlightInfos
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:

void UDeploymentConsoleComponent::ClearFlightInfos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "ClearFlightInfos");

	Params::UDeploymentConsoleComponent_ClearFlightInfos_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DeploymentConsole.DeploymentConsoleComponent.CalculateSpawnRotationFromLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     InSpawnLocation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UDeploymentConsoleComponent::CalculateSpawnRotationFromLocation(struct FVector& InSpawnLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "CalculateSpawnRotationFromLocation");

	Params::UDeploymentConsoleComponent_CalculateSpawnRotationFromLocation_Params Parms{};

	Parms.InSpawnLocation = InSpawnLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DeploymentConsole.DeploymentConsoleComponent.AdjustLocationToValidHeight
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     RespawnLocation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UDeploymentConsoleComponent::AdjustLocationToValidHeight(struct FVector& RespawnLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeploymentConsoleComponent", "AdjustLocationToValidHeight");

	Params::UDeploymentConsoleComponent_AdjustLocationToValidHeight_Params Parms{};

	Parms.RespawnLocation = RespawnLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DeploymentConsole.FortAthenaMutator_CR_Respawn
// (Actor)

class UClass* UFortAthenaMutator_CR_Respawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_CR_Respawn");

	return Clss;
}


// FortAthenaMutator_CR_Respawn DeploymentConsole.Default__FortAthenaMutator_CR_Respawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_CR_Respawn* UFortAthenaMutator_CR_Respawn::GetDefaultObj()
{
	static class UFortAthenaMutator_CR_Respawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_CR_Respawn*>(UFortAthenaMutator_CR_Respawn::StaticClass()->DefaultObject);

	return Default;
}

}


