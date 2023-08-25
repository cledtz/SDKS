#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AIDebuggerRuntime.AIDebuggerCheatManager
// (None)

class UClass* UAIDebuggerCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIDebuggerCheatManager");

	return Clss;
}


// AIDebuggerCheatManager AIDebuggerRuntime.Default__AIDebuggerCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIDebuggerCheatManager* UAIDebuggerCheatManager::GetDefaultObj()
{
	static class UAIDebuggerCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIDebuggerCheatManager*>(UAIDebuggerCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function AIDebuggerRuntime.AIDebuggerCheatManager.StartAIDebugger
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      AIDebuggerSoftClassPath                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIDebuggerCheatManager::StartAIDebugger(const class FString& AIDebuggerSoftClassPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIDebuggerCheatManager", "StartAIDebugger");

	Params::UAIDebuggerCheatManager_StartAIDebugger_Params Parms{};

	Parms.AIDebuggerSoftClassPath = AIDebuggerSoftClassPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIDebuggerRuntime.AIDebuggerCheatManager.NextNavMesh
// (Final, Exec, Native, Public)
// Parameters:

void UAIDebuggerCheatManager::NextNavMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIDebuggerCheatManager", "NextNavMesh");

	Params::UAIDebuggerCheatManager_NextNavMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIDebuggerRuntime.AIDebuggerCheatManager.EnableNavMeshVisualizer
// (Final, Exec, Native, Public)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIDebuggerCheatManager::EnableNavMeshVisualizer(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIDebuggerCheatManager", "EnableNavMeshVisualizer");

	Params::UAIDebuggerCheatManager_EnableNavMeshVisualizer_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AIDebuggerRuntime.AIDebuggerRendererComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UAIDebuggerRendererComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIDebuggerRendererComponent");

	return Clss;
}


// AIDebuggerRendererComponent AIDebuggerRuntime.Default__AIDebuggerRendererComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIDebuggerRendererComponent* UAIDebuggerRendererComponent::GetDefaultObj()
{
	static class UAIDebuggerRendererComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIDebuggerRendererComponent*>(UAIDebuggerRendererComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class AIDebuggerRuntime.FortControllerComponent_AIDebugger
// (None)

class UClass* UFortControllerComponent_AIDebugger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_AIDebugger");

	return Clss;
}


// FortControllerComponent_AIDebugger AIDebuggerRuntime.Default__FortControllerComponent_AIDebugger
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_AIDebugger* UFortControllerComponent_AIDebugger::GetDefaultObj()
{
	static class UFortControllerComponent_AIDebugger* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_AIDebugger*>(UFortControllerComponent_AIDebugger::StaticClass()->DefaultObject);

	return Default;
}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNextNavMesh
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void UFortControllerComponent_AIDebugger::VisualizeNextNavMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_AIDebugger", "VisualizeNextNavMesh");

	Params::UFortControllerComponent_AIDebugger_VisualizeNextNavMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNavMeshID
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// int32                              NavMeshID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AIDebugger::VisualizeNavMeshID(int32 NavMeshID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_AIDebugger", "VisualizeNavMeshID");

	Params::UFortControllerComponent_AIDebugger_VisualizeNavMeshID_Params Parms{};

	Parms.NavMeshID = NavMeshID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.SetVisualizationEnable
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// enum class EAIDebuggerVisualizationVisualizationType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerComponent_AIDebugger::SetVisualizationEnable(enum class EAIDebuggerVisualization VisualizationType, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_AIDebugger", "SetVisualizationEnable");

	Params::UFortControllerComponent_AIDebugger_SetVisualizationEnable_Params Parms{};

	Parms.VisualizationType = VisualizationType;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnRep_EnabledVisualizers
// (Final, Native, Public)
// Parameters:

void UFortControllerComponent_AIDebugger::OnRep_EnabledVisualizers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_AIDebugger", "OnRep_EnabledVisualizers");

	Params::UFortControllerComponent_AIDebugger_OnRep_EnabledVisualizers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnPlayerExitedIsland
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FEventMessageTag            Channel                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerExitSpatialActorContextWithPawnPlayerExitSpatialActorContext                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortControllerComponent_AIDebugger::OnPlayerExitedIsland(const struct FEventMessageTag& Channel, struct FPlayerExitSpatialActorContextWithPawn& PlayerExitSpatialActorContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_AIDebugger", "OnPlayerExitedIsland");

	Params::UFortControllerComponent_AIDebugger_OnPlayerExitedIsland_Params Parms{};

	Parms.Channel = Channel;
	Parms.PlayerExitSpatialActorContext = PlayerExitSpatialActorContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.IsVisualizationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIDebuggerVisualizationVisualizationType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortControllerComponent_AIDebugger::IsVisualizationEnabled(enum class EAIDebuggerVisualization VisualizationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_AIDebugger", "IsVisualizationEnabled");

	Params::UFortControllerComponent_AIDebugger_IsVisualizationEnabled_Params Parms{};

	Parms.VisualizationType = VisualizationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIDebuggerRuntime.FortControllerComponent_AIDebugger.GetOrCreateRenderer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIDebuggerRendererComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIDebuggerRendererComponent* UFortControllerComponent_AIDebugger::GetOrCreateRenderer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerComponent_AIDebugger", "GetOrCreateRenderer");

	Params::UFortControllerComponent_AIDebugger_GetOrCreateRenderer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


