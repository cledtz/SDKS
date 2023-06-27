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


// Function AIDebuggerRuntime.AIDebuggerCheatManager.StartAIDebugger
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      AIDebuggerSoftClassPath                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIDebuggerCheatManager::StartAIDebugger(const class FString& AIDebuggerSoftClassPath)
{
	static auto Func = Class->GetFunction("AIDebuggerCheatManager", "StartAIDebugger");

	Params::UAIDebuggerCheatManager_StartAIDebugger_Params Parms;

	Parms.AIDebuggerSoftClassPath = AIDebuggerSoftClassPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIDebuggerRuntime.AIDebuggerCheatManager.NextNavMesh
// (Final, Exec, Native, Public)
// Parameters:

void UAIDebuggerCheatManager::NextNavMesh()
{
	static auto Func = Class->GetFunction("AIDebuggerCheatManager", "NextNavMesh");

	Params::UAIDebuggerCheatManager_NextNavMesh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIDebuggerRuntime.AIDebuggerCheatManager.EnableNavMeshVisualizer
// (Final, Exec, Native, Public)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIDebuggerCheatManager::EnableNavMeshVisualizer(bool bEnable)
{
	static auto Func = Class->GetFunction("AIDebuggerCheatManager", "EnableNavMeshVisualizer");

	Params::UAIDebuggerCheatManager_EnableNavMeshVisualizer_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNextNavMesh
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void UFortControllerComponent_AIDebugger::VisualizeNextNavMesh()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AIDebugger", "VisualizeNextNavMesh");

	Params::UFortControllerComponent_AIDebugger_VisualizeNextNavMesh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNavMeshID
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// int32                              NavMeshID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AIDebugger::VisualizeNavMeshID(int32 NavMeshID)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AIDebugger", "VisualizeNavMeshID");

	Params::UFortControllerComponent_AIDebugger_VisualizeNavMeshID_Params Parms;

	Parms.NavMeshID = NavMeshID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.SetVisualizationEnable
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// enum class EAIDebuggerVisualizationVisualizationType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AIDebugger::SetVisualizationEnable(enum class EAIDebuggerVisualization VisualizationType, bool bEnable)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AIDebugger", "SetVisualizationEnable");

	Params::UFortControllerComponent_AIDebugger_SetVisualizationEnable_Params Parms;

	Parms.VisualizationType = VisualizationType;
	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnRep_EnabledVisualizers
// (Final, Native, Public)
// Parameters:

void UFortControllerComponent_AIDebugger::OnRep_EnabledVisualizers()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AIDebugger", "OnRep_EnabledVisualizers");

	Params::UFortControllerComponent_AIDebugger_OnRep_EnabledVisualizers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnPlayerExitedIsland
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerExitSpatialActorContextWithPawnPlayerExitSpatialActorContext                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortControllerComponent_AIDebugger::OnPlayerExitedIsland(const struct FEventMessageTag& Channel, struct FPlayerExitSpatialActorContextWithPawn& PlayerExitSpatialActorContext)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AIDebugger", "OnPlayerExitedIsland");

	Params::UFortControllerComponent_AIDebugger_OnPlayerExitedIsland_Params Parms;

	Parms.Channel = Channel;
	Parms.PlayerExitSpatialActorContext = PlayerExitSpatialActorContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.IsVisualizationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIDebuggerVisualizationVisualizationType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_AIDebugger::IsVisualizationEnabled(enum class EAIDebuggerVisualization VisualizationType)
{
	static auto Func = Class->GetFunction("FortControllerComponent_AIDebugger", "IsVisualizationEnabled");

	Params::UFortControllerComponent_AIDebugger_IsVisualizationEnabled_Params Parms;

	Parms.VisualizationType = VisualizationType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.GetOrCreateRenderer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIDebuggerRendererComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIDebuggerRendererComponent* UFortControllerComponent_AIDebugger::GetOrCreateRenderer()
{
	static auto Func = Class->GetFunction("FortControllerComponent_AIDebugger", "GetOrCreateRenderer");

	Params::UFortControllerComponent_AIDebugger_GetOrCreateRenderer_Params Parms;


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
