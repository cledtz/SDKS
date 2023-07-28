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


// Function FortniteAI.FortNavModifierComponent.SetComponentAffectingNavMesh
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponentAffectingNavMesh                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNavModifierComponent::SetComponentAffectingNavMesh(class UPrimitiveComponent* InComponentAffectingNavMesh)
{
	static auto Func = Class->GetFunction("FortNavModifierComponent", "SetComponentAffectingNavMesh");

	Params::UFortNavModifierComponent_SetComponentAffectingNavMesh_Params Parms;

	Parms.InComponentAffectingNavMesh = InComponentAffectingNavMesh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortPhysicsObjectNavigationComponent.OnSleepStateChanged
// (Final, RequiredAPI, Native, Protected)
// Parameters:
// class UPrimitiveComponent*         SimulatingComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAwake                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPhysicsObjectNavigationComponent::OnSleepStateChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)
{
	static auto Func = Class->GetFunction("FortPhysicsObjectNavigationComponent", "OnSleepStateChanged");

	Params::UFortPhysicsObjectNavigationComponent_OnSleepStateChanged_Params Parms;

	Parms.SimulatingComponent = SimulatingComponent;
	Parms.bIsAwake = bIsAwake;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceBounds
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UFortAIEnvironmentalDangerSourceInterface::GetDangerSourceBounds()
{
	static auto Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerSourceBounds");

	Params::UFortAIEnvironmentalDangerSourceInterface_GetDangerSourceBounds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceActive
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEnvironmentalDangerSourceInterface::GetDangerSourceActive()
{
	static auto Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerSourceActive");

	Params::UFortAIEnvironmentalDangerSourceInterface_GetDangerSourceActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerAtLocation
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIEnvironmentalDangerSourceInterface::GetDangerAtLocation(struct FVector& Location)
{
	static auto Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerAtLocation");

	Params::UFortAIEnvironmentalDangerSourceInterface_GetDangerAtLocation_Params Parms;

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase.GetConstructionBuildingInfo
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConstructionBuildingList   OutConstructionInfoList                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_ConstructionBase::GetConstructionBuildingInfo(struct FConstructionBuildingList* OutConstructionInfoList)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_ConstructionBase", "GetConstructionBuildingInfo");

	Params::UFortAthenaAISpawnerDataComponent_ConstructionBase_GetConstructionBuildingInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutConstructionInfoList != nullptr)
		*OutConstructionInfoList = Parms.OutConstructionInfoList;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase.GetBehaviorTree
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBehaviorTree*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBehaviorTree* UFortAthenaAISpawnerDataComponent_BehaviorBase::GetBehaviorTree()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_BehaviorBase", "GetBehaviorTree");

	Params::UFortAthenaAISpawnerDataComponent_BehaviorBase_GetBehaviorTree_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_LODBase.GetClientAILODSettings
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FClientAILODSettings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FClientAILODSettings UFortAthenaAISpawnerDataComponent_LODBase::GetClientAILODSettings()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_LODBase", "GetClientAILODSettings");

	Params::UFortAthenaAISpawnerDataComponent_LODBase_GetClientAILODSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_LODBase.GetAILODSettingsContainer
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFortAthenaAILODSettingsContainer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAILODSettingsContainer* UFortAthenaAISpawnerDataComponent_LODBase::GetAILODSettingsContainer()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_LODBase", "GetAILODSettingsContainer");

	Params::UFortAthenaAISpawnerDataComponent_LODBase_GetAILODSettingsContainer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetVoiceComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_VoiceBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_VoiceBase* UFortAthenaAISpawnerData::GetVoiceComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetVoiceComponent");

	Params::UFortAthenaAISpawnerData_GetVoiceComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetTokenComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_TokenBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_TokenBase* UFortAthenaAISpawnerData::GetTokenComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetTokenComponent");

	Params::UFortAthenaAISpawnerData_GetTokenComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetSpawnParamsComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_SpawnParamsBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* UFortAthenaAISpawnerData::GetSpawnParamsComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetSpawnParamsComponent");

	Params::UFortAthenaAISpawnerData_GetSpawnParamsComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetSmartObjectComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_SmartObjectBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_SmartObjectBase* UFortAthenaAISpawnerData::GetSmartObjectComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetSmartObjectComponent");

	Params::UFortAthenaAISpawnerData_GetSmartObjectComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetScriptComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_ScriptBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_ScriptBase* UFortAthenaAISpawnerData::GetScriptComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetScriptComponent");

	Params::UFortAthenaAISpawnerData_GetScriptComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_PerceptionBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_PerceptionBase* UFortAthenaAISpawnerData::GetPerceptionComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetPerceptionComponent");

	Params::UFortAthenaAISpawnerData_GetPerceptionComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetOptimizationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_OptimBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_OptimBase* UFortAthenaAISpawnerData::GetOptimizationComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetOptimizationComponent");

	Params::UFortAthenaAISpawnerData_GetOptimizationComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetInventoryComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_InventoryBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_InventoryBase* UFortAthenaAISpawnerData::GetInventoryComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetInventoryComponent");

	Params::UFortAthenaAISpawnerData_GetInventoryComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetGroupComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_GroupBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_GroupBase* UFortAthenaAISpawnerData::GetGroupComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGroupComponent");

	Params::UFortAthenaAISpawnerData_GetGroupComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetGameplayComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_GameplayBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_GameplayBase* UFortAthenaAISpawnerData::GetGameplayComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGameplayComponent");

	Params::UFortAthenaAISpawnerData_GetGameplayComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetGameplayAbilityComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* UFortAthenaAISpawnerData::GetGameplayAbilityComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGameplayAbilityComponent");

	Params::UFortAthenaAISpawnerData_GetGameplayAbilityComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetDebugComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_DebugBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_DebugBase* UFortAthenaAISpawnerData::GetDebugComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetDebugComponent");

	Params::UFortAthenaAISpawnerData_GetDebugComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetCosmeticComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_CosmeticBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_CosmeticBase* UFortAthenaAISpawnerData::GetCosmeticComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetCosmeticComponent");

	Params::UFortAthenaAISpawnerData_GetCosmeticComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetConversationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_ConversationBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_ConversationBase* UFortAthenaAISpawnerData::GetConversationComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetConversationComponent");

	Params::UFortAthenaAISpawnerData_GetConversationComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetChanceEncounterComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* UFortAthenaAISpawnerData::GetChanceEncounterComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetChanceEncounterComponent");

	Params::UFortAthenaAISpawnerData_GetChanceEncounterComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetBehaviorComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_BehaviorBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_BehaviorBase* UFortAthenaAISpawnerData::GetBehaviorComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetBehaviorComponent");

	Params::UFortAthenaAISpawnerData_GetBehaviorComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetAnalyticComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_AnalyticBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_AnalyticBase* UFortAthenaAISpawnerData::GetAnalyticComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAnalyticComponent");

	Params::UFortAthenaAISpawnerData_GetAnalyticComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetAILODComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_LODBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_LODBase* UFortAthenaAISpawnerData::GetAILODComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAILODComponent");

	Params::UFortAthenaAISpawnerData_GetAILODComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetAffiliationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_AffiliationBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_AffiliationBase* UFortAthenaAISpawnerData::GetAffiliationComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAffiliationComponent");

	Params::UFortAthenaAISpawnerData_GetAffiliationComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.CreateComponentListFromClass
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAISpawnerData>AISpawnerDataClass                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OuterObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentListFromClass(TSubclassOf<class UFortAthenaAISpawnerData> AISpawnerDataClass, class UObject* OuterObject)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "CreateComponentListFromClass");

	Params::UFortAthenaAISpawnerData_CreateComponentListFromClass_Params Parms;

	Parms.AISpawnerDataClass = AISpawnerDataClass;
	Parms.OuterObject = OuterObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.CreateComponentList
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     OuterObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentList(class UObject* OuterObject)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerData", "CreateComponentList");

	Params::UFortAthenaAISpawnerData_CreateComponentList_Params Parms;

	Parms.OuterObject = OuterObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetVehicleComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_VehicleBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_VehicleBase* UFortAthenaAIBotSpawnerData::GetVehicleComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetVehicleComponent");

	Params::UFortAthenaAIBotSpawnerData_GetVehicleComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetSkillSetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_SkillsetBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_SkillsetBase* UFortAthenaAIBotSpawnerData::GetSkillSetComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetSkillSetComponent");

	Params::UFortAthenaAIBotSpawnerData_GetSkillSetComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetPerksComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_PerksBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_PerksBase* UFortAthenaAIBotSpawnerData::GetPerksComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetPerksComponent");

	Params::UFortAthenaAIBotSpawnerData_GetPerksComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetCoverComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_CoverBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_CoverBase* UFortAthenaAIBotSpawnerData::GetCoverComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetCoverComponent");

	Params::UFortAthenaAIBotSpawnerData_GetCoverComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetConstructionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_ConstructionBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_ConstructionBase* UFortAthenaAIBotSpawnerData::GetConstructionComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetConstructionComponent");

	Params::UFortAthenaAIBotSpawnerData_GetConstructionComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::SetEnabled(bool bEnabled)
{
	static auto Func = Class->GetFunction("AIHotSpot", "SetEnabled");

	Params::UAIHotSpot_SetEnabled_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.RemoveGroupFromHotspot
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UAIController*>       GroupOfAI                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::RemoveGroupFromHotspot(const TArray<class UAIController*>& GroupOfAI)
{
	static auto Func = Class->GetFunction("AIHotSpot", "RemoveGroupFromHotspot");

	Params::UAIHotSpot_RemoveGroupFromHotspot_Params Parms;

	Parms.GroupOfAI = GroupOfAI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.RemoveFromHotspot
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAssignFromWaitingList                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::RemoveFromHotspot(class UAIController* AI, bool bAssignFromWaitingList)
{
	static auto Func = Class->GetFunction("AIHotSpot", "RemoveFromHotspot");

	Params::UAIHotSpot_RemoveFromHotspot_Params Parms;

	Parms.AI = AI;
	Parms.bAssignFromWaitingList = bAssignFromWaitingList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.OnSlotOccupied
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotOccupied(class UAIController* AI, int32 Index, int32 UserId)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnSlotOccupied");

	Params::UAIHotSpot_OnSlotOccupied_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnSlotFreed
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotFreed(class UAIController* AI, int32 Index, int32 UserId)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnSlotFreed");

	Params::UAIHotSpot_OnSlotFreed_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnSlotEnabled
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotEnabled(int32 Index, int32 UserId)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnSlotEnabled");

	Params::UAIHotSpot_OnSlotEnabled_Params Parms;

	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnSlotDisabled
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotDisabled(int32 Index, int32 UserId)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnSlotDisabled");

	Params::UAIHotSpot_OnSlotDisabled_Params Parms;

	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnSlotClaimed
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotClaimed(class UAIController* AI, int32 Index, int32 UserId)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnSlotClaimed");

	Params::UAIHotSpot_OnSlotClaimed_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnSlotBlocked
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotBlocked(class UAIController* AI, int32 Index, int32 UserId)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnSlotBlocked");

	Params::UAIHotSpot_OnSlotBlocked_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnRemovedSlotlessBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsClamingSlot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnRemovedSlotlessBehavior(class UAIController* AI, bool bIsClamingSlot)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnRemovedSlotlessBehavior");

	Params::UAIHotSpot_OnRemovedSlotlessBehavior_Params Parms;

	Parms.AI = AI;
	Parms.bIsClamingSlot = bIsClamingSlot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnRemovedBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          PrevState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasOnWaitingList                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnRemovedBehavior(class UAIController* AI, int32 Index, int32 UserId, enum class EAIHotSpotSlot PrevState, bool bWasOnWaitingList)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnRemovedBehavior");

	Params::UAIHotSpot_OnRemovedBehavior_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;
	Parms.PrevState = PrevState;
	Parms.bWasOnWaitingList = bWasOnWaitingList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnMoveToSlotFinished
// (BlueprintAuthorityOnly, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnMoveToSlotFinished(class UAIController* AI, int32 Index, int32 UserId, bool bResult)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnMoveToSlotFinished");

	Params::UAIHotSpot_OnMoveToSlotFinished_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;
	Parms.bResult = bResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnHotSpotEnabled
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:

void UAIHotSpot::OnHotSpotEnabled()
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnHotSpotEnabled");

	Params::UAIHotSpot_OnHotSpotEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnHotSpotDisabled
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:

void UAIHotSpot::OnHotSpotDisabled()
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnHotSpotDisabled");

	Params::UAIHotSpot_OnHotSpotDisabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpot.OnAssignedSlotlessBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::OnAssignedSlotlessBehavior(class UAIController* AI)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnAssignedSlotlessBehavior");

	Params::UAIHotSpot_OnAssignedSlotlessBehavior_Params Parms;

	Parms.AI = AI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.OnAssignedOccupiedBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::OnAssignedOccupiedBehavior(class UAIController* AI, int32 Index, int32 UserId)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnAssignedOccupiedBehavior");

	Params::UAIHotSpot_OnAssignedOccupiedBehavior_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.OnAssignedClaimedBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasOnWaitingList                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::OnAssignedClaimedBehavior(class UAIController* AI, int32 Index, int32 UserId, bool bWasOnWaitingList)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OnAssignedClaimedBehavior");

	Params::UAIHotSpot_OnAssignedClaimedBehavior_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;
	Parms.bWasOnWaitingList = bWasOnWaitingList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.OccupySlotByIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::OccupySlotByIndex(int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "OccupySlotByIndex");

	Params::UAIHotSpot_OccupySlotByIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.IsSlotlessAssignmentAllowed
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::IsSlotlessAssignmentAllowed()
{
	static auto Func = Class->GetFunction("AIHotSpot", "IsSlotlessAssignmentAllowed");

	Params::UAIHotSpot_IsSlotlessAssignmentAllowed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::IsEnabled()
{
	static auto Func = Class->GetFunction("AIHotSpot", "IsEnabled");

	Params::UAIHotSpot_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.IsAIAllowed
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UAIController*               AI                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::IsAIAllowed(class UAIController* AI)
{
	static auto Func = Class->GetFunction("AIHotSpot", "IsAIAllowed");

	Params::UAIHotSpot_IsAIAllowed_Params Parms;

	Parms.AI = AI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.HasEnabledSlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::HasEnabledSlots()
{
	static auto Func = Class->GetFunction("AIHotSpot", "HasEnabledSlots");

	Params::UAIHotSpot_HasEnabledSlots_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.HasAssignedAI
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AI                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotAssignmentFilterFilter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::HasAssignedAI(class UAIController* AI, enum class EAIHotSpotAssignmentFilter Filter)
{
	static auto Func = Class->GetFunction("AIHotSpot", "HasAssignedAI");

	Params::UAIHotSpot_HasAssignedAI_Params Parms;

	Parms.AI = AI;
	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotUserIdByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::GetSlotUserIdByIndex(int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotUserIdByIndex");

	Params::UAIHotSpot_GetSlotUserIdByIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotStateByOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AIOwner                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAIHotSpotSlot UAIHotSpot::GetSlotStateByOwner(class UAIController* AIOwner)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotStateByOwner");

	Params::UAIHotSpot_GetSlotStateByOwner_Params Parms;

	Parms.AIOwner = AIOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotStateByIndex
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAIHotSpotSlot UAIHotSpot::GetSlotStateByIndex(int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotStateByIndex");

	Params::UAIHotSpot_GetSlotStateByIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotRotationByIndex
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UAIHotSpot::GetSlotRotationByIndex(int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotRotationByIndex");

	Params::UAIHotSpot_GetSlotRotationByIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotOwnerByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIController* UAIHotSpot::GetSlotOwnerByIndex(int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotOwnerByIndex");

	Params::UAIHotSpot_GetSlotOwnerByIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotLocationByIndex
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIHotSpot::GetSlotLocationByIndex(int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotLocationByIndex");

	Params::UAIHotSpot_GetSlotLocationByIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotIndexByOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AIOwner                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::GetSlotIndexByOwner(class UAIController* AIOwner)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotIndexByOwner");

	Params::UAIHotSpot_GetSlotIndexByOwner_Params Parms;

	Parms.AIOwner = AIOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIHotSpotSlotFilter    Filter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::GetSlotCount(enum class EAIHotSpotSlotFilter Filter)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotCount");

	Params::UAIHotSpot_GetSlotCount_Params Parms;

	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotByOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AIOwner                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIHotSpotSlot*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpotSlot* UAIHotSpot::GetSlotByOwner(class UAIController* AIOwner)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotByOwner");

	Params::UAIHotSpot_GetSlotByOwner_Params Parms;

	Parms.AIOwner = AIOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotByIndex
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIHotSpotSlot*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpotSlot* UAIHotSpot::GetSlotByIndex(int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetSlotByIndex");

	Params::UAIHotSpot_GetSlotByIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetAssignedAICount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIHotSpotAssignmentFilterFilter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::GetAssignedAICount(enum class EAIHotSpotAssignmentFilter Filter)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetAssignedAICount");

	Params::UAIHotSpot_GetAssignedAICount_Params Parms;

	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetAssignedAI
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIHotSpotAssignmentFilterFilter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UAIController*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UAIController*> UAIHotSpot::GetAssignedAI(enum class EAIHotSpotAssignmentFilter Filter)
{
	static auto Func = Class->GetFunction("AIHotSpot", "GetAssignedAI");

	Params::UAIHotSpot_GetAssignedAI_Params Parms;

	Parms.Filter = Filter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.FindBestSlotIndices
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIController*>       AI                                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UAIHotSpot::FindBestSlotIndices(const TArray<class UAIController*>& AI)
{
	static auto Func = Class->GetFunction("AIHotSpot", "FindBestSlotIndices");

	Params::UAIHotSpot_FindBestSlotIndices_Params Parms;

	Parms.AI = AI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.FindBestSlotIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::FindBestSlotIndex(class UAIController* AI)
{
	static auto Func = Class->GetFunction("AIHotSpot", "FindBestSlotIndex");

	Params::UAIHotSpot_FindBestSlotIndex_Params Parms;

	Parms.AI = AI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.CanUseSlotByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AI                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::CanUseSlotByIndex(class UAIController* AI, int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "CanUseSlotByIndex");

	Params::UAIHotSpot_CanUseSlotByIndex_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.AssignToSlotByIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::AssignToSlotByIndex(class UAIController* AI, int32 Index)
{
	static auto Func = Class->GetFunction("AIHotSpot", "AssignToSlotByIndex");

	Params::UAIHotSpot_AssignToSlotByIndex_Params Parms;

	Parms.AI = AI;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.AssignToHotspot
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::AssignToHotspot(class UAIController* AI)
{
	static auto Func = Class->GetFunction("AIHotSpot", "AssignToHotspot");

	Params::UAIHotSpot_AssignToHotspot_Params Parms;

	Parms.AI = AI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.AssignGroupToHotspot
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UAIController*>       GroupOfAI                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::AssignGroupToHotspot(const TArray<class UAIController*>& GroupOfAI)
{
	static auto Func = Class->GetFunction("AIHotSpot", "AssignGroupToHotspot");

	Params::UAIHotSpot_AssignGroupToHotspot_Params Parms;

	Parms.GroupOfAI = GroupOfAI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.AssignFromWaitingList
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIHotSpot::AssignFromWaitingList()
{
	static auto Func = Class->GetFunction("AIHotSpot", "AssignFromWaitingList");

	Params::UAIHotSpot_AssignFromWaitingList_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpotSlot.SetSlotState
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EAIHotSpotSlot          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpotSlot::SetSlotState(enum class EAIHotSpotSlot NewState)
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "SetSlotState");

	Params::UAIHotSpotSlot_SetSlotState_Params Parms;

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpotSlot.SetSlotOwnerAndState
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIController*               NewOwner                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpotSlot::SetSlotOwnerAndState(class UAIController* NewOwner, enum class EAIHotSpotSlot NewState)
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "SetSlotOwnerAndState");

	Params::UAIHotSpotSlot_SetSlotOwnerAndState_Params Parms;

	Parms.NewOwner = NewOwner;
	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpotSlot.SetSlotEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpotSlot::SetSlotEnabled(bool bNewEnabled)
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "SetSlotEnabled");

	Params::UAIHotSpotSlot_SetSlotEnabled_Params Parms;

	Parms.bNewEnabled = bNewEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpotSlot.OnStateChanged
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               SlotOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpotSlot::OnStateChanged(class UAIController* SlotOwner, enum class EAIHotSpotSlot NewState)
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "OnStateChanged");

	Params::UAIHotSpotSlot_OnStateChanged_Params Parms;

	Parms.SlotOwner = SlotOwner;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.AIHotSpotSlot.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpotSlot::IsEnabled()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "IsEnabled");

	Params::UAIHotSpotSlot_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.IsAIAllowed
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UAIController*               AI                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpotSlot::IsAIAllowed(class UAIController* AI)
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "IsAIAllowed");

	Params::UAIHotSpotSlot_IsAIAllowed_Params Parms;

	Parms.AI = AI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.HasUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpotSlot::HasUserId()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "HasUserId");

	Params::UAIHotSpotSlot_HasUserId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpotSlot::GetSlotUserId()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotUserId");

	Params::UAIHotSpotSlot_GetSlotUserId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIHotSpotSlot          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAIHotSpotSlot UAIHotSpotSlot::GetSlotState()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotState");

	Params::UAIHotSpotSlot_GetSlotState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UAIHotSpotSlot::GetSlotRotation()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotRotation");

	Params::UAIHotSpotSlot_GetSlotRotation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotRadius
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIHotSpotSlot::GetSlotRadius()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotRadius");

	Params::UAIHotSpotSlot_GetSlotRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIController* UAIHotSpotSlot::GetSlotOwner()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotOwner");

	Params::UAIHotSpotSlot_GetSlotOwner_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotLocation
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIHotSpotSlot::GetSlotLocation()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotLocation");

	Params::UAIHotSpotSlot_GetSlotLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpotSlot::GetSlotIndex()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotIndex");

	Params::UAIHotSpotSlot_GetSlotIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotHeight
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIHotSpotSlot::GetSlotHeight()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotHeight");

	Params::UAIHotSpotSlot_GetSlotHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UAIHotSpotSlot::GetSlotBounds()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetSlotBounds");

	Params::UAIHotSpotSlot_GetSlotBounds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetHotSpot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIHotSpot*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpot* UAIHotSpotSlot::GetHotSpot()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "GetHotSpot");

	Params::UAIHotSpotSlot_GetHotSpot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.ClearSlot
// (Native, Public, BlueprintCallable)
// Parameters:

void UAIHotSpotSlot::ClearSlot()
{
	static auto Func = Class->GetFunction("AIHotSpotSlot", "ClearSlot");

	Params::UAIHotSpotSlot_ClearSlot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.WakeUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::WakeUp()
{
	static auto Func = Class->GetFunction("FortAIController", "WakeUp");

	Params::UFortAIController_WakeUp_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.UnlockMovementResource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::UnlockMovementResource()
{
	static auto Func = Class->GetFunction("FortAIController", "UnlockMovementResource");

	Params::UFortAIController_UnlockMovementResource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.UnlockBehaviorResource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::UnlockBehaviorResource()
{
	static auto Func = Class->GetFunction("FortAIController", "UnlockBehaviorResource");

	Params::UFortAIController_UnlockBehaviorResource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.SetupCustomVIM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      VIM                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetupCustomVIM(class UClass* VIM)
{
	static auto Func = Class->GetFunction("FortAIController", "SetupCustomVIM");

	Params::UFortAIController_SetupCustomVIM_Params Parms;

	Parms.VIM = VIM;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.SetTeamInt
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InTeam                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetTeamInt(uint8 InTeam)
{
	static auto Func = Class->GetFunction("FortAIController", "SetTeamInt");

	Params::UFortAIController_SetTeamInt_Params Parms;

	Parms.InTeam = InTeam;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortTeam               InTeam                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetTeam(enum class EFortTeam InTeam)
{
	static auto Func = Class->GetFunction("FortAIController", "SetTeam");

	Params::UFortAIController_SetTeam_Params Parms;

	Parms.InTeam = InTeam;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.SetPawnAIType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortressAIType         NewAIType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SpawnSpot                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetPawnAIType(enum class EFortressAIType NewAIType, class UActor* SpawnSpot)
{
	static auto Func = Class->GetFunction("FortAIController", "SetPawnAIType");

	Params::UFortAIController_SetPawnAIType_Params Parms;

	Parms.NewAIType = NewAIType;
	Parms.SpawnSpot = SpawnSpot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.SetIsSleeping
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewSleepStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetIsSleeping(bool bNewSleepStatus)
{
	static auto Func = Class->GetFunction("FortAIController", "SetIsSleeping");

	Params::UFortAIController_SetIsSleeping_Params Parms;

	Parms.bNewSleepStatus = bNewSleepStatus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.SetGoalActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLocationAlwaysKnown                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetGoalActor(class UActor* InActor, bool bLocationAlwaysKnown)
{
	static auto Func = Class->GetFunction("FortAIController", "SetGoalActor");

	Params::UFortAIController_SetGoalActor_Params Parms;

	Parms.InActor = InActor;
	Parms.bLocationAlwaysKnown = bLocationAlwaysKnown;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.SetFullPeripheralVision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewFullPeripheralVision                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetFullPeripheralVision(bool bNewFullPeripheralVision)
{
	static auto Func = Class->GetFunction("FortAIController", "SetFullPeripheralVision");

	Params::UFortAIController_SetFullPeripheralVision_Params Parms;

	Parms.bNewFullPeripheralVision = bNewFullPeripheralVision;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.SetAlwaysGameplayRelevant
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAlwaysGameplayRelevant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant)
{
	static auto Func = Class->GetFunction("FortAIController", "SetAlwaysGameplayRelevant");

	Params::UFortAIController_SetAlwaysGameplayRelevant_Params Parms;

	Parms.bInAlwaysGameplayRelevant = bInAlwaysGameplayRelevant;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.OnBuildingActorGoalDestroyed
// (Final, Native, Public)
// Parameters:

void UFortAIController::OnBuildingActorGoalDestroyed()
{
	static auto Func = Class->GetFunction("FortAIController", "OnBuildingActorGoalDestroyed");

	Params::UFortAIController_OnBuildingActorGoalDestroyed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.OnActorGoalDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::OnActorGoalDestroyed(class UActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortAIController", "OnActorGoalDestroyed");

	Params::UFortAIController_OnActorGoalDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.LockMovementResource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::LockMovementResource()
{
	static auto Func = Class->GetFunction("FortAIController", "LockMovementResource");

	Params::UFortAIController_LockMovementResource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.LockBehaviorResource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::LockBehaviorResource()
{
	static auto Func = Class->GetFunction("FortAIController", "LockBehaviorResource");

	Params::UFortAIController_LockBehaviorResource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.IsIgnoringProximity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortAIController*           FortAIController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIController::IsIgnoringProximity(class UFortAIController* FortAIController)
{
	static auto Func = Class->GetFunction("FortAIController", "IsIgnoringProximity");

	Params::UFortAIController_IsIgnoringProximity_Params Parms;

	Parms.FortAIController = FortAIController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.IsAllowedToSleep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIController::IsAllowedToSleep()
{
	static auto Func = Class->GetFunction("FortAIController", "IsAllowedToSleep");

	Params::UFortAIController_IsAllowedToSleep_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.IgnoreProximityForDuration
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// float                              DurationToIgnore                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::IgnoreProximityForDuration(float DurationToIgnore)
{
	static auto Func = Class->GetFunction("FortAIController", "IgnoreProximityForDuration");

	Params::UFortAIController_IgnoreProximityForDuration_Params Parms;

	Parms.DurationToIgnore = DurationToIgnore;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIController.GetGoalActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAIController::GetGoalActor()
{
	static auto Func = Class->GetFunction("FortAIController", "GetGoalActor");

	Params::UFortAIController_GetGoalActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.GetEncounterInfo
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIController::GetEncounterInfo()
{
	static auto Func = Class->GetFunction("FortAIController", "GetEncounterInfo");

	Params::UFortAIController_GetEncounterInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.CreateBuildingActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TSubclassOf<class UBuildingSMActor>BuildingClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BuildLoc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    BuildRot                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bMirrored                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIController::CreateBuildingActor(TSubclassOf<class UBuildingSMActor> BuildingClass, const struct FVector& BuildLoc, const struct FRotator& BuildRot, bool bMirrored)
{
	static auto Func = Class->GetFunction("FortAIController", "CreateBuildingActor");

	Params::UFortAIController_CreateBuildingActor_Params Parms;

	Parms.BuildingClass = BuildingClass;
	Parms.BuildLoc = BuildLoc;
	Parms.BuildRot = BuildRot;
	Parms.bMirrored = bMirrored;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.ClearAllFocalPoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::ClearAllFocalPoints()
{
	static auto Func = Class->GetFunction("FortAIController", "ClearAllFocalPoints");

	Params::UFortAIController_ClearAllFocalPoints_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIDirector.UnregisterPatrolWard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                PatrolWard                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::UnregisterPatrolWard(FInterfaceProperty_ PatrolWard)
{
	static auto Func = Class->GetFunction("FortAIDirector", "UnregisterPatrolWard");

	Params::UFortAIDirector_UnregisterPatrolWard_Params Parms;

	Parms.PatrolWard = PatrolWard;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIDirector.StartEncounter
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      EncounterInstigator                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortDifficultyEncounterSettings*DifficultyEncounterSettings                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIEncounterQueryData   OptionalQueryData                                                (Parm, NativeAccessSpecifierPublic)
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIDirector::StartEncounter(class FString& EncounterInstigator, class UFortDifficultyEncounterSettings* DifficultyEncounterSettings, const struct FFortAIEncounterQueryData& OptionalQueryData)
{
	static auto Func = Class->GetFunction("FortAIDirector", "StartEncounter");

	Params::UFortAIDirector_StartEncounter_Params Parms;

	Parms.EncounterInstigator = EncounterInstigator;
	Parms.DifficultyEncounterSettings = DifficultyEncounterSettings;
	Parms.OptionalQueryData = OptionalQueryData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.RegisterPatrolWard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                PatrolWard                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::RegisterPatrolWard(FInterfaceProperty_ PatrolWard)
{
	static auto Func = Class->GetFunction("FortAIDirector", "RegisterPatrolWard");

	Params::UFortAIDirector_RegisterPatrolWard_Params Parms;

	Parms.PatrolWard = PatrolWard;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIDirector.ReceivePawnSpawned
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   SpawnedPawn                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::ReceivePawnSpawned(class UFortPawn* SpawnedPawn)
{
	static auto Func = Class->GetFunction("FortAIDirector", "ReceivePawnSpawned");

	Params::UFortAIDirector_ReceivePawnSpawned_Params Parms;

	Parms.SpawnedPawn = SpawnedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.PostDayPhaseChanged
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortDayPhase           PreviousDayPhase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAtCreation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::PostDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static auto Func = Class->GetFunction("FortAIDirector", "PostDayPhaseChanged");

	Params::UFortAIDirector_PostDayPhaseChanged_Params Parms;

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnRestStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnRestStarted()
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnRestStarted");

	Params::UFortAIDirector_OnRestStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnRampStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnRampStarted()
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnRampStarted");

	Params::UFortAIDirector_OnRampStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnPlayerSpawn
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::OnPlayerSpawn(class UFortPlayerPawn* PlayerPawn)
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnPlayerSpawn");

	Params::UFortAIDirector_OnPlayerSpawn_Params Parms;

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnPlayerDied
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::OnPlayerDied(class UFortPlayerPawn* PlayerPawn)
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnPlayerDied");

	Params::UFortAIDirector_OnPlayerDied_Params Parms;

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnPeakStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnPeakStarted()
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnPeakStarted");

	Params::UFortAIDirector_OnPeakStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnPawnDied
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UFortAIPawn*                 KilledPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::OnPawnDied(class UFortAIPawn* KilledPawn)
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnPawnDied");

	Params::UFortAIDirector_OnPawnDied_Params Parms;

	Parms.KilledPawn = KilledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnFadeStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnFadeStarted()
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnFadeStarted");

	Params::UFortAIDirector_OnFadeStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnDirectorDeactivated
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnDirectorDeactivated()
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnDirectorDeactivated");

	Params::UFortAIDirector_OnDirectorDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnDayPhaseChanged
// (Native, Public)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortDayPhase           PreviousDayPhase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAtCreation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static auto Func = Class->GetFunction("FortAIDirector", "OnDayPhaseChanged");

	Params::UFortAIDirector_OnDayPhaseChanged_Params Parms;

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIDirector.IsPointTooCloseToPatrolWards
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWardAffectType         WardEffectTypeFilter                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsPointTooCloseToPatrolWards(struct FVector& Point, enum class EWardAffectType WardEffectTypeFilter)
{
	static auto Func = Class->GetFunction("FortAIDirector", "IsPointTooCloseToPatrolWards");

	Params::UFortAIDirector_IsPointTooCloseToPatrolWards_Params Parms;

	Parms.Point = Point;
	Parms.WardEffectTypeFilter = WardEffectTypeFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsLineTooCloseToPatrolWards
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     LineStart                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineEnd                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsLineTooCloseToPatrolWards(struct FVector& LineStart, struct FVector& LineEnd)
{
	static auto Func = Class->GetFunction("FortAIDirector", "IsLineTooCloseToPatrolWards");

	Params::UFortAIDirector_IsLineTooCloseToPatrolWards_Params Parms;

	Parms.LineStart = LineStart;
	Parms.LineEnd = LineEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsAnyEncounterGoalWithinDistanceOfPoint
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyActiveEncounters                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsAnyEncounterGoalWithinDistanceOfPoint(struct FVector& Point, float Distance, bool bOnlyActiveEncounters)
{
	static auto Func = Class->GetFunction("FortAIDirector", "IsAnyEncounterGoalWithinDistanceOfPoint");

	Params::UFortAIDirector_IsAnyEncounterGoalWithinDistanceOfPoint_Params Parms;

	Parms.Point = Point;
	Parms.Distance = Distance;
	Parms.bOnlyActiveEncounters = bOnlyActiveEncounters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsAnyAIRelevantToPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerPawn*             Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsAnyAIRelevantToPlayer(class UFortPlayerPawn* Player)
{
	static auto Func = Class->GetFunction("FortAIDirector", "IsAnyAIRelevantToPlayer");

	Params::UFortAIDirector_IsAnyAIRelevantToPlayer_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsAnyActiveEncounterRelevantToPlayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerPawn*             Player                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsAnyActiveEncounterRelevantToPlayer(class UFortPlayerPawn* Player)
{
	static auto Func = Class->GetFunction("FortAIDirector", "IsAnyActiveEncounterRelevantToPlayer");

	Params::UFortAIDirector_IsAnyActiveEncounterRelevantToPlayer_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsAnyActiveEncounterRelevantToDefender
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIPawn*                 Defender                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsAnyActiveEncounterRelevantToDefender(class UFortAIPawn* Defender)
{
	static auto Func = Class->GetFunction("FortAIDirector", "IsAnyActiveEncounterRelevantToDefender");

	Params::UFortAIDirector_IsAnyActiveEncounterRelevantToDefender_Params Parms;

	Parms.Defender = Defender;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetVectorFromEncounterDirection
// (Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFortEncounterDirection Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortAIDirector::GetVectorFromEncounterDirection(enum class EFortEncounterDirection Direction)
{
	static auto Func = Class->GetFunction("FortAIDirector", "GetVectorFromEncounterDirection");

	Params::UFortAIDirector_GetVectorFromEncounterDirection_Params Parms;

	Parms.Direction = Direction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetRiftsFromClosestActiveEncounterTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UBuildingRift*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UBuildingRift*> UFortAIDirector::GetRiftsFromClosestActiveEncounterTo(class UActor* Target)
{
	static auto Func = Class->GetFunction("FortAIDirector", "GetRiftsFromClosestActiveEncounterTo");

	Params::UFortAIDirector_GetRiftsFromClosestActiveEncounterTo_Params Parms;

	Parms.Target = Target;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetNumPlayers
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIDirector::GetNumPlayers()
{
	static auto Func = Class->GetFunction("FortAIDirector", "GetNumPlayers");

	Params::UFortAIDirector_GetNumPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetNumActiveEncounters
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIDirector::GetNumActiveEncounters()
{
	static auto Func = Class->GetFunction("FortAIDirector", "GetNumActiveEncounters");

	Params::UFortAIDirector_GetNumActiveEncounters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetEncounterDirectionFromVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     DirectionVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortEncounterDirection ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortEncounterDirection UFortAIDirector::GetEncounterDirectionFromVector(const struct FVector& DirectionVector)
{
	static auto Func = Class->GetFunction("FortAIDirector", "GetEncounterDirectionFromVector");

	Params::UFortAIDirector_GetEncounterDirectionFromVector_Params Parms;

	Parms.DirectionVector = DirectionVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetAmbientThreatEncounterSpawnLocations
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             AmbientThreatEncounterSpawnLocations                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAIDirector::GetAmbientThreatEncounterSpawnLocations(TArray<struct FVector>* AmbientThreatEncounterSpawnLocations)
{
	static auto Func = Class->GetFunction("FortAIDirector", "GetAmbientThreatEncounterSpawnLocations");

	Params::UFortAIDirector_GetAmbientThreatEncounterSpawnLocations_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AmbientThreatEncounterSpawnLocations != nullptr)
		*AmbientThreatEncounterSpawnLocations = Parms.AmbientThreatEncounterSpawnLocations;

}


// Function FortniteAI.FortAIDirector.Deactivate
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIDirector::Deactivate()
{
	static auto Func = Class->GetFunction("FortAIDirector", "Deactivate");

	Params::UFortAIDirector_Deactivate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIDirector.ConvertInvalidDirectionsToValidDirections
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EFortEncounterDirection>InvalidDirections                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<enum class EFortEncounterDirection>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class EFortEncounterDirection> UFortAIDirector::ConvertInvalidDirectionsToValidDirections(const TArray<enum class EFortEncounterDirection>& InvalidDirections)
{
	static auto Func = Class->GetFunction("FortAIDirector", "ConvertInvalidDirectionsToValidDirections");

	Params::UFortAIDirector_ConvertInvalidDirectionsToValidDirections_Params Parms;

	Parms.InvalidDirections = InvalidDirections;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.Activate
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIDirector::Activate()
{
	static auto Func = Class->GetFunction("FortAIDirector", "Activate");

	Params::UFortAIDirector_Activate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIDirector.AggroOnActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIController*         AIController                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIDirector::AggroOnActor(class UAthenaAIController* AIController, class UActor* Target)
{
	static auto Func = Class->GetFunction("AthenaAIDirector", "AggroOnActor");

	Params::UAthenaAIDirector_AggroOnActor_Params Parms;

	Parms.AIController = AIController;
	Parms.Target = Target;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAISystem.IsInCone2D
// (Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ConeOrigin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ConeDirection                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfAngle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocationToCheck                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISystem::IsInCone2D(const struct FVector& ConeOrigin, const struct FVector& ConeDirection, float HalfAngle, const struct FVector& LocationToCheck)
{
	static auto Func = Class->GetFunction("FortAISystem", "IsInCone2D");

	Params::UFortAISystem_IsInCone2D_Params Parms;

	Parms.ConeOrigin = ConeOrigin;
	Parms.ConeDirection = ConeDirection;
	Parms.HalfAngle = HalfAngle;
	Parms.LocationToCheck = LocationToCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAISystem.OnAIPawnSpawned
// (Final, Native, Protected)
// Parameters:
// class UController*                 SpawnedController                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsABot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   FortAIPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::OnAIPawnSpawned(class UController* SpawnedController, bool bIsABot, class UFortPawn* FortAIPawn, class UFortPlayerPawn* PlayerPawn)
{
	static auto Func = Class->GetFunction("AthenaAISystem", "OnAIPawnSpawned");

	Params::UAthenaAISystem_OnAIPawnSpawned_Params Parms;

	Parms.SpawnedController = SpawnedController;
	Parms.bIsABot = bIsABot;
	Parms.FortAIPawn = FortAIPawn;
	Parms.PlayerPawn = PlayerPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAISystem.OnAIPawnDied
// (Final, Native, Protected)
// Parameters:
// class UController*                 KilledController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsABot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   KilledAIPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             KilledPlayerPawn                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 KillerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::OnAIPawnDied(class UController* KilledController, bool bIsABot, class UFortPawn* KilledAIPawn, class UFortPlayerPawn* KilledPlayerPawn, class UController* KillerController)
{
	static auto Func = Class->GetFunction("AthenaAISystem", "OnAIPawnDied");

	Params::UAthenaAISystem_OnAIPawnDied_Params Parms;

	Parms.KilledController = KilledController;
	Parms.bIsABot = bIsABot;
	Parms.KilledAIPawn = KilledAIPawn;
	Parms.KilledPlayerPawn = KilledPlayerPawn;
	Parms.KillerController = KillerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAISystem.OnAIPawnDestroyed
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   DestroyedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::OnAIPawnDestroyed(class UFortPawn* DestroyedPawn)
{
	static auto Func = Class->GetFunction("AthenaAISystem", "OnAIPawnDestroyed");

	Params::UAthenaAISystem_OnAIPawnDestroyed_Params Parms;

	Parms.DestroyedPawn = DestroyedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAISystem.HandlePlayerExitAircraft
// (Final, Native, Protected)
// Parameters:
// class UController*                 ExitingController                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::HandlePlayerExitAircraft(class UController* ExitingController)
{
	static auto Func = Class->GetFunction("AthenaAISystem", "HandlePlayerExitAircraft");

	Params::UAthenaAISystem_HandlePlayerExitAircraft_Params Parms;

	Parms.ExitingController = ExitingController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAISystem.HandleGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::HandleGamePhaseStepChanged(FInterfaceProperty_& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("AthenaAISystem", "HandleGamePhaseStepChanged");

	Params::UAthenaAISystem_HandleGamePhaseStepChanged_Params Parms;

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAISystem.AIProfiling_OnSafeZoneUpdated
// (Final, Native, Public)
// Parameters:

void UAthenaAISystem::AIProfiling_OnSafeZoneUpdated()
{
	static auto Func = Class->GetFunction("AthenaAISystem", "AIProfiling_OnSafeZoneUpdated");

	Params::UAthenaAISystem_AIProfiling_OnSafeZoneUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAISystem.AIProfiling_OnGamePhaseChanged
// (Final, Native, Public)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::AIProfiling_OnGamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("AthenaAISystem", "AIProfiling_OnGamePhaseChanged");

	Params::UAthenaAISystem_AIProfiling_OnGamePhaseChanged_Params Parms;

	Parms.GamePhase = GamePhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaCreativeRift.NotifyActorDespawnEndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaCreativeRift::NotifyActorDespawnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("AthenaCreativeRift", "NotifyActorDespawnEndOverlap");

	Params::UAthenaCreativeRift_NotifyActorDespawnEndOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaCreativeRift.BlueprintShowRift
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCreativeRift::BlueprintShowRift()
{
	static auto Func = Class->GetFunction("AthenaCreativeRift", "BlueprintShowRift");

	Params::UAthenaCreativeRift_BlueprintShowRift_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaAITelemetryFunctionLibrary.GetOrCreateAITelemetryData
// (Final, BlueprintAuthorityOnly, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UActor*                      Owner                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAthenaAITelemetryData>TelemetryDataClass                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAITelemetryData*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAITelemetryData* UFortAthenaAITelemetryFunctionLibrary::GetOrCreateAITelemetryData(class UActor* Owner, TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass)
{
	static auto Func = Class->GetFunction("FortAthenaAITelemetryFunctionLibrary", "GetOrCreateAITelemetryData");

	Params::UFortAthenaAITelemetryFunctionLibrary_GetOrCreateAITelemetryData_Params Parms;

	Parms.Owner = Owner;
	Parms.TelemetryDataClass = TelemetryDataClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIComponent_Telemetry.OnTetheredFollowerChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   NewFollower                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   OldFollower                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIComponent_Telemetry::OnTetheredFollowerChanged(class UFortPawn* NewFollower, class UFortPawn* OldFollower)
{
	static auto Func = Class->GetFunction("FortAIComponent_Telemetry", "OnTetheredFollowerChanged");

	Params::UFortAIComponent_Telemetry_OnTetheredFollowerChanged_Params Parms;

	Parms.NewFollower = NewFollower;
	Parms.OldFollower = OldFollower;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIComponent_Telemetry.OnPawnDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIComponent_Telemetry::OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAIComponent_Telemetry", "OnPawnDied");

	Params::UFortAIComponent_Telemetry_OnPawnDied_Params Parms;

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


// Function FortniteAI.FortAIComponent_Telemetry.OnDidDamage
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIComponent_Telemetry::OnDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAIComponent_Telemetry", "OnDidDamage");

	Params::UFortAIComponent_Telemetry_OnDidDamage_Params Parms;

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


// Function FortniteAI.FortAIComponent_Telemetry.GetOrCreateTelemetryData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAITelemetryData>TelemetryDataClass                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAITelemetryData*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAITelemetryData* UFortAIComponent_Telemetry::GetOrCreateTelemetryData(TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass)
{
	static auto Func = Class->GetFunction("FortAIComponent_Telemetry", "GetOrCreateTelemetryData");

	Params::UFortAIComponent_Telemetry_GetOrCreateTelemetryData_Params Parms;

	Parms.TelemetryDataClass = TelemetryDataClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIComponent_Voice.SetVoiceSoundBank
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortTaggedSoundBank*        InSoundBank                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIComponent_Voice::SetVoiceSoundBank(class UFortTaggedSoundBank* InSoundBank)
{
	static auto Func = Class->GetFunction("FortAIComponent_Voice", "SetVoiceSoundBank");

	Params::UFortAIComponent_Voice_SetVoiceSoundBank_Params Parms;

	Parms.InSoundBank = InSoundBank;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIComponent_Voice.GetVoiceSoundBank
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortTaggedSoundBank*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortTaggedSoundBank* UFortAIComponent_Voice::GetVoiceSoundBank()
{
	static auto Func = Class->GetFunction("FortAIComponent_Voice", "GetVoiceSoundBank");

	Params::UFortAIComponent_Voice_GetVoiceSoundBank_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIManagerMinigameComponent.OnPawnSpawned
// (Final, Native, Public)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIManagerMinigameComponent::OnPawnSpawned(class UPawn* Pawn, int32 RequestID)
{
	static auto Func = Class->GetFunction("FortAIManagerMinigameComponent", "OnPawnSpawned");

	Params::UFortAIManagerMinigameComponent_OnPawnSpawned_Params Parms;

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIManagerMinigameComponent.OnPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIManagerMinigameComponent::OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAIManagerMinigameComponent", "OnPawnDied");

	Params::UFortAIManagerMinigameComponent_OnPawnDied_Params Parms;

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


// Function FortniteAI.FortAIManagerMinigameComponent.HandleMinigameStarted
// (Final, Native, Public)
// Parameters:

void UFortAIManagerMinigameComponent::HandleMinigameStarted()
{
	static auto Func = Class->GetFunction("FortAIManagerMinigameComponent", "HandleMinigameStarted");

	Params::UFortAIManagerMinigameComponent_HandleMinigameStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.StartEnvironmentQuery
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAISpawnerUtilityComponent::StartEnvironmentQuery()
{
	static auto Func = Class->GetFunction("FortAISpawnerUtilityComponent", "StartEnvironmentQuery");

	Params::UFortAISpawnerUtilityComponent_StartEnvironmentQuery_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.SetQueryRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::SetQueryRadius(float Radius)
{
	static auto Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetQueryRadius");

	Params::UFortAISpawnerUtilityComponent_SetQueryRadius_Params Parms;

	Parms.Radius = Radius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.SetMinigame
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortMinigame*               Minigame                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::SetMinigame(class UFortMinigame* Minigame)
{
	static auto Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetMinigame");

	Params::UFortAISpawnerUtilityComponent_SetMinigame_Params Parms;

	Parms.Minigame = Minigame;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.SetEQSQuery
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UEnvQuery>    SelectedEQSQuery                                                 (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::SetEQSQuery(TSoftObjectPtr<class UEnvQuery> SelectedEQSQuery)
{
	static auto Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetEQSQuery");

	Params::UFortAISpawnerUtilityComponent_SetEQSQuery_Params Parms;

	Parms.SelectedEQSQuery = SelectedEQSQuery;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.RequestSpawn
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortAthenaAISpawnerDataComponentList*AISpawnerComponentList                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnTransform                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAISpawnerUtilityComponent::RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, struct FTransform& SpawnTransform)
{
	static auto Func = Class->GetFunction("FortAISpawnerUtilityComponent", "RequestSpawn");

	Params::UFortAISpawnerUtilityComponent_RequestSpawn_Params Parms;

	Parms.AISpawnerComponentList = AISpawnerComponentList;
	Parms.SpawnTransform = SpawnTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.OnUnownedPawnDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::OnUnownedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAISpawnerUtilityComponent", "OnUnownedPawnDied");

	Params::UFortAISpawnerUtilityComponent_OnUnownedPawnDied_Params Parms;

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


// Function FortniteAI.FortAISpawnerUtilityComponent.IsSpawnCountCapped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnerUtilityComponent::IsSpawnCountCapped()
{
	static auto Func = Class->GetFunction("FortAISpawnerUtilityComponent", "IsSpawnCountCapped");

	Params::UFortAISpawnerUtilityComponent_IsSpawnCountCapped_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.HandleUnownedPawnSpawned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPawn*                   FortPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::HandleUnownedPawnSpawned(class UFortPawn* FortPawn)
{
	static auto Func = Class->GetFunction("FortAISpawnerUtilityComponent", "HandleUnownedPawnSpawned");

	Params::UFortAISpawnerUtilityComponent_HandleUnownedPawnSpawned_Params Parms;

	Parms.FortPawn = FortPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIBotDebugActor.OnRep_BotDebugMiniMapIndicator
// (Final, Native, Private)
// Parameters:
// class UAthenaAIBotDebugMiniMapIndicator*OldBotDebugMiniMap                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIBotDebugActor::OnRep_BotDebugMiniMapIndicator(class UAthenaAIBotDebugMiniMapIndicator* OldBotDebugMiniMap)
{
	static auto Func = Class->GetFunction("FortAIBotDebugActor", "OnRep_BotDebugMiniMapIndicator");

	Params::UFortAIBotDebugActor_OnRep_BotDebugMiniMapIndicator_Params Parms;

	Parms.OldBotDebugMiniMap = OldBotDebugMiniMap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIBotPOIDebugActor.OnRep_PlayerBotsDebugMiniMap
// (Final, Native, Private)
// Parameters:
// class UAthenaAIBotPOIDebugMiniMapIndicator*OldPlayerBotsDebugMiniMap                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIBotPOIDebugActor::OnRep_PlayerBotsDebugMiniMap(class UAthenaAIBotPOIDebugMiniMapIndicator* OldPlayerBotsDebugMiniMap)
{
	static auto Func = Class->GetFunction("FortAIBotPOIDebugActor", "OnRep_PlayerBotsDebugMiniMap");

	Params::UFortAIBotPOIDebugActor_OnRep_PlayerBotsDebugMiniMap_Params Parms;

	Parms.OldPlayerBotsDebugMiniMap = OldPlayerBotsDebugMiniMap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIDirectorDataManager.TriggerEvent
// (Native, Public, HasOutParams)
// Parameters:
// struct FFortAIDirectorEvent        TriggeredEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAIDirectorDataManager::TriggerEvent(struct FFortAIDirectorEvent& TriggeredEvent)
{
	static auto Func = Class->GetFunction("FortAIDirectorDataManager", "TriggerEvent");

	Params::UFortAIDirectorDataManager_TriggerEvent_Params Parms;

	Parms.TriggeredEvent = TriggeredEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIDirectorDataManager.GetAIDirectorFactorValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortAIDirectorFactor   AIDirectorFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIDirectorDataManager::GetAIDirectorFactorValue(enum class EFortAIDirectorFactor AIDirectorFactor)
{
	static auto Func = Class->GetFunction("FortAIDirectorDataManager", "GetAIDirectorFactorValue");

	Params::UFortAIDirectorDataManager_GetAIDirectorFactorValue_Params Parms;

	Parms.AIDirectorFactor = AIDirectorFactor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.UnRegisterAISpawner
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InAISpawner                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::UnRegisterAISpawner(class UActor* InAISpawner)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "UnRegisterAISpawner");

	Params::UFortAIEncounterInfo_UnRegisterAISpawner_Params Parms;

	Parms.InAISpawner = InAISpawner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.SpawnTestAIGroup
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortAISpawnGroup*           SpawnGroupToSpawn                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    SpawnRotation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UActor*                      SpawnSource                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortAbilitySet*>     AbilitySetsToGrantOnSpawn                                        (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FFortAISpawnGroupUpgradeDataUpgradeData                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bAllowAssigningToExternalSpawners                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SecondsBetweenSpawns                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::SpawnTestAIGroup(class UFortAISpawnGroup* SpawnGroupToSpawn, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UActor* SpawnSource, const TArray<class UFortAbilitySet*>& AbilitySetsToGrantOnSpawn, const struct FFortAISpawnGroupUpgradeData& UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "SpawnTestAIGroup");

	Params::UFortAIEncounterInfo_SpawnTestAIGroup_Params Parms;

	Parms.SpawnGroupToSpawn = SpawnGroupToSpawn;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;
	Parms.SpawnSource = SpawnSource;
	Parms.AbilitySetsToGrantOnSpawn = AbilitySetsToGrantOnSpawn;
	Parms.UpgradeData = UpgradeData;
	Parms.bAllowAssigningToExternalSpawners = bAllowAssigningToExternalSpawners;
	Parms.SecondsBetweenSpawns = SecondsBetweenSpawns;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.SpawnAIPawnReservedForEnemySpawner
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      EnemySpawner                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    SpawnRotation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UFortAIPawn*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIPawn* UFortAIEncounterInfo::SpawnAIPawnReservedForEnemySpawner(class UActor* EnemySpawner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "SpawnAIPawnReservedForEnemySpawner");

	Params::UFortAIEncounterInfo_SpawnAIPawnReservedForEnemySpawner_Params Parms;

	Parms.EnemySpawner = EnemySpawner;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.SetPawnNumberLimit
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPawnNumberLimit                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::SetPawnNumberLimit(int32 InPawnNumberLimit)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "SetPawnNumberLimit");

	Params::UFortAIEncounterInfo_SetPawnNumberLimit_Params Parms;

	Parms.InPawnNumberLimit = InPawnNumberLimit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.SetNukeWavesAtEncounterEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNuke                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::SetNukeWavesAtEncounterEnd(bool bNuke)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "SetNukeWavesAtEncounterEnd");

	Params::UFortAIEncounterInfo_SetNukeWavesAtEncounterEnd_Params Parms;

	Parms.bNuke = bNuke;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.SetEncounterActivationState
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEncounterActivityState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::SetEncounterActivationState(bool bEncounterActivityState)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "SetEncounterActivationState");

	Params::UFortAIEncounterInfo_SetEncounterActivationState_Params Parms;

	Parms.bEncounterActivityState = bEncounterActivityState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.RequestActivation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ActivationDelay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::RequestActivation(int32 ActivationDelay)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "RequestActivation");

	Params::UFortAIEncounterInfo_RequestActivation_Params Parms;

	Parms.ActivationDelay = ActivationDelay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.RegisterAISpawner
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InAISpawner                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::RegisterAISpawner(class UActor* InAISpawner)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "RegisterAISpawner");

	Params::UFortAIEncounterInfo_RegisterAISpawner_Params Parms;

	Parms.InAISpawner = InAISpawner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.OnRestStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIEncounterInfo::OnRestStarted()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "OnRestStarted");

	Params::UFortAIEncounterInfo_OnRestStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIEncounterInfo.OnRampStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIEncounterInfo::OnRampStarted()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "OnRampStarted");

	Params::UFortAIEncounterInfo_OnRampStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIEncounterInfo.OnPeakStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIEncounterInfo::OnPeakStarted()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "OnPeakStarted");

	Params::UFortAIEncounterInfo_OnPeakStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIEncounterInfo.OnGoalTakeDamage
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::OnGoalTakeDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "OnGoalTakeDamage");

	Params::UFortAIEncounterInfo_OnGoalTakeDamage_Params Parms;

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


// Function FortniteAI.FortAIEncounterInfo.OnGameDifficultyChanged
// (Final, Native, Private)
// Parameters:

void UFortAIEncounterInfo::OnGameDifficultyChanged()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "OnGameDifficultyChanged");

	Params::UFortAIEncounterInfo_OnGameDifficultyChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.OnFadeStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIEncounterInfo::OnFadeStarted()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "OnFadeStarted");

	Params::UFortAIEncounterInfo_OnFadeStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIEncounterInfo.OnEncounterPawnDamaged
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

void UFortAIEncounterInfo::OnEncounterPawnDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "OnEncounterPawnDamaged");

	Params::UFortAIEncounterInfo_OnEncounterPawnDamaged_Params Parms;

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


// Function FortniteAI.FortAIEncounterInfo.NotifyRiftDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::NotifyRiftDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "NotifyRiftDied");

	Params::UFortAIEncounterInfo_NotifyRiftDied_Params Parms;

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


// Function FortniteAI.FortAIEncounterInfo.GroupHasAIRemainingToSpawn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortAISpawnerData          FortAISpawnerData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterInfo::GroupHasAIRemainingToSpawn(struct FFortAISpawnerData& FortAISpawnerData)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GroupHasAIRemainingToSpawn");

	Params::UFortAIEncounterInfo_GroupHasAIRemainingToSpawn_Params Parms;

	Parms.FortAISpawnerData = FortAISpawnerData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetPawnNumberLimit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIEncounterInfo::GetPawnNumberLimit()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GetPawnNumberLimit");

	Params::UFortAIEncounterInfo_GetPawnNumberLimit_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterTimeSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIEncounterInfo::GetEncounterTimeSeconds()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterTimeSeconds");

	Params::UFortAIEncounterInfo_GetEncounterTimeSeconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterRifts
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UBuildingRift*>       OutRifts                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::GetEncounterRifts(TArray<class UBuildingRift*>* OutRifts)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterRifts");

	Params::UFortAIEncounterInfo_GetEncounterRifts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutRifts != nullptr)
		*OutRifts = Parms.OutRifts;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterQueryActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAIEncounterInfo::GetEncounterQueryActor()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterQueryActor");

	Params::UFortAIEncounterInfo_GetEncounterQueryActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterGameplayTags
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       OutEncounterTags                                                 (Parm, OutParm, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::GetEncounterGameplayTags(struct FGameplayTagContainer* OutEncounterTags)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterGameplayTags");

	Params::UFortAIEncounterInfo_GetEncounterGameplayTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutEncounterTags != nullptr)
		*OutEncounterTags = Parms.OutEncounterTags;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterDataManager
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortAIDirectorDataManager*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIDirectorDataManager* UFortAIEncounterInfo::GetEncounterDataManager()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterDataManager");

	Params::UFortAIEncounterInfo_GetEncounterDataManager_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterAssignmentGoalActors
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UActor*>              OutGoalActors                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::GetEncounterAssignmentGoalActors(TArray<class UActor*>* OutGoalActors)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterAssignmentGoalActors");

	Params::UFortAIEncounterInfo_GetEncounterAssignmentGoalActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutGoalActors != nullptr)
		*OutGoalActors = Parms.OutGoalActors;

}


// Function FortniteAI.FortAIEncounterInfo.GetCurrentSpawnAreaDirections
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortEncounterDirection>OutDirections                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterInfo::GetCurrentSpawnAreaDirections(TArray<enum class EFortEncounterDirection>* OutDirections)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "GetCurrentSpawnAreaDirections");

	Params::UFortAIEncounterInfo_GetCurrentSpawnAreaDirections_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutDirections != nullptr)
		*OutDirections = Parms.OutDirections;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.EncounterHasReservedSpawnRequestForEnemySpawner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      EnemySpawner                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterInfo::EncounterHasReservedSpawnRequestForEnemySpawner(class UActor* EnemySpawner)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "EncounterHasReservedSpawnRequestForEnemySpawner");

	Params::UFortAIEncounterInfo_EncounterHasReservedSpawnRequestForEnemySpawner_Params Parms;

	Parms.EnemySpawner = EnemySpawner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.DespawnPendingAndCurrentAI
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIEncounterInfo::DespawnPendingAndCurrentAI()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "DespawnPendingAndCurrentAI");

	Params::UFortAIEncounterInfo_DespawnPendingAndCurrentAI_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterInfo.CreateEncounterAssignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAIAssignmentSettings*   AssignmentSettings                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIAssignment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIAssignment* UFortAIEncounterInfo::CreateEncounterAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class UActor* GoalActor)
{
	static auto Func = Class->GetFunction("FortAIEncounterInfo", "CreateEncounterAssignment");

	Params::UFortAIEncounterInfo_CreateEncounterAssignment_Params Parms;

	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalActor = GoalActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfoOwnerInterface.GetEncounterInfo
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIEncounterInfoOwnerInterface::GetEncounterInfo()
{
	static auto Func = Class->GetFunction("FortAIEncounterInfoOwnerInterface", "GetEncounterInfo");

	Params::UFortAIEncounterInfoOwnerInterface_GetEncounterInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterRiftManager.OnRiftDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      Rift                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterRiftManager::OnRiftDestroyed(class UActor* Rift)
{
	static auto Func = Class->GetFunction("FortAIEncounterRiftManager", "OnRiftDestroyed");

	Params::UFortAIEncounterRiftManager_OnRiftDestroyed_Params Parms;

	Parms.Rift = Rift;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterRiftManager.GetAssociatedMission
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortMission*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortMission* UFortAIEncounterRiftManager::GetAssociatedMission()
{
	static auto Func = Class->GetFunction("FortAIEncounterRiftManager", "GetAssociatedMission");

	Params::UFortAIEncounterRiftManager_GetAssociatedMission_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.StopCurrentEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIEncounterSequence::StopCurrentEncounter()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "StopCurrentEncounter");

	Params::UFortAIEncounterSequence_StopCurrentEncounter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterSequence.StartCurrentEncounterWithSavedData
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultOutRequestResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ActivationDelay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIEncounterSequence::StartCurrentEncounterWithSavedData(enum class EFortEncounterSequenceResult* OutRequestResult, int32 ActivationDelay)
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "StartCurrentEncounterWithSavedData");

	Params::UFortAIEncounterSequence_StartCurrentEncounterWithSavedData_Params Parms;

	Parms.ActivationDelay = ActivationDelay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutRequestResult != nullptr)
		*OutRequestResult = Parms.OutRequestResult;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.StartCurrentEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultOutRequestResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              InTargetActors                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortAIAssignmentSettings*   InAssignmentSettings                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEncounterEnvironmentQueryInfoInOverrideEnvironmentQueryInfo                                   (Parm, NativeAccessSpecifierPublic)
// class UActor*                      InOptionalQueryActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InInjectedTags                                                   (Parm, NativeAccessSpecifierPublic)
// struct FFortEncounterSettings      InEncounterSettings                                              (Parm, NativeAccessSpecifierPublic)
// int32                              ActivationDelay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIEncounterSequence::StartCurrentEncounter(enum class EFortEncounterSequenceResult* OutRequestResult, TArray<class UActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class UActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings, int32 ActivationDelay)
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "StartCurrentEncounter");

	Params::UFortAIEncounterSequence_StartCurrentEncounter_Params Parms;

	Parms.InTargetActors = InTargetActors;
	Parms.InAssignmentSettings = InAssignmentSettings;
	Parms.InOverrideEnvironmentQueryInfo = InOverrideEnvironmentQueryInfo;
	Parms.InOptionalQueryActor = InOptionalQueryActor;
	Parms.InInjectedTags = InInjectedTags;
	Parms.InEncounterSettings = InEncounterSettings;
	Parms.ActivationDelay = ActivationDelay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutRequestResult != nullptr)
		*OutRequestResult = Parms.OutRequestResult;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.SetEncounterStartingData
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              InTargetActors                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortAIAssignmentSettings*   InAssignmentSettings                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEncounterEnvironmentQueryInfoInOverrideEnvironmentQueryInfo                                   (Parm, NativeAccessSpecifierPublic)
// class UActor*                      InOptionalQueryActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InInjectedTags                                                   (Parm, NativeAccessSpecifierPublic)
// struct FFortEncounterSettings      InEncounterSettings                                              (Parm, NativeAccessSpecifierPublic)

void UFortAIEncounterSequence::SetEncounterStartingData(TArray<class UActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class UActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings)
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "SetEncounterStartingData");

	Params::UFortAIEncounterSequence_SetEncounterStartingData_Params Parms;

	Parms.InTargetActors = InTargetActors;
	Parms.InAssignmentSettings = InAssignmentSettings;
	Parms.InOverrideEnvironmentQueryInfo = InOverrideEnvironmentQueryInfo;
	Parms.InOptionalQueryActor = InOptionalQueryActor;
	Parms.InInjectedTags = InInjectedTags;
	Parms.InEncounterSettings = InEncounterSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIEncounterSequence.Previous
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortEncounterSequenceResult UFortAIEncounterSequence::Previous()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "Previous");

	Params::UFortAIEncounterSequence_Previous_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.Next
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortEncounterSequenceResult UFortAIEncounterSequence::Next()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "Next");

	Params::UFortAIEncounterSequence_Next_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.Last
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortEncounterSequenceResult UFortAIEncounterSequence::Last()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "Last");

	Params::UFortAIEncounterSequence_Last_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.IsOnFinalIndexInSequence
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterSequence::IsOnFinalIndexInSequence()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "IsOnFinalIndexInSequence");

	Params::UFortAIEncounterSequence_IsOnFinalIndexInSequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.HasEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterSequence::HasEncounter()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "HasEncounter");

	Params::UFortAIEncounterSequence_HasEncounter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.GetNumEncountersInSequence
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIEncounterSequence::GetNumEncountersInSequence()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "GetNumEncountersInSequence");

	Params::UFortAIEncounterSequence_GetNumEncountersInSequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.GetEncounterIndexInSequence
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIEncounterSequence::GetEncounterIndexInSequence()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "GetEncounterIndexInSequence");

	Params::UFortAIEncounterSequence_GetEncounterIndexInSequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.GetCurrentEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIEncounterSequence::GetCurrentEncounter()
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "GetCurrentEncounter");

	Params::UFortAIEncounterSequence_GetCurrentEncounter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.EncounterBelongsToSequence
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        InEncounter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterSequence::EncounterBelongsToSequence(class UFortAIEncounterInfo* InEncounter)
{
	static auto Func = Class->GetFunction("FortAIEncounterSequence", "EncounterBelongsToSequence");

	Params::UFortAIEncounterSequence_EncounterBelongsToSequence_Params Parms;

	Parms.InEncounter = InEncounter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterTargetInterface.IsFloatingTarget
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterTargetInterface::IsFloatingTarget()
{
	static auto Func = Class->GetFunction("FortAIEncounterTargetInterface", "IsFloatingTarget");

	Params::UFortAIEncounterTargetInterface_IsFloatingTarget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterTargetInterface.GetObjectiveCompletionPercentage
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIEncounterTargetInterface::GetObjectiveCompletionPercentage()
{
	static auto Func = Class->GetFunction("FortAIEncounterTargetInterface", "GetObjectiveCompletionPercentage");

	Params::UFortAIEncounterTargetInterface_GetObjectiveCompletionPercentage_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIFunctionLibrary.TeleportAIPawn
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortAIPawn*                 AIPawn                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DestLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DestRotation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIgnoreCollision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFunctionLibrary::TeleportAIPawn(class UFortAIPawn* AIPawn, const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIgnoreCollision)
{
	static auto Func = Class->GetFunction("FortAIFunctionLibrary", "TeleportAIPawn");

	Params::UFortAIFunctionLibrary_TeleportAIPawn_Params Parms;

	Parms.AIPawn = AIPawn;
	Parms.DestLocation = DestLocation;
	Parms.DestRotation = DestRotation;
	Parms.bIgnoreCollision = bIgnoreCollision;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIFunctionLibrary.SetHearingRange
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      AIAgent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFunctionLibrary::SetHearingRange(class UActor* AIAgent, float Range)
{
	static auto Func = Class->GetFunction("FortAIFunctionLibrary", "SetHearingRange");

	Params::UFortAIFunctionLibrary_SetHearingRange_Params Parms;

	Parms.AIAgent = AIAgent;
	Parms.Range = Range;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIFunctionLibrary.RequestNavUpdateForBuilding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBuildingActor*              BuildingActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFunctionLibrary::RequestNavUpdateForBuilding(class UBuildingActor* BuildingActor)
{
	static auto Func = Class->GetFunction("FortAIFunctionLibrary", "RequestNavUpdateForBuilding");

	Params::UFortAIFunctionLibrary_RequestNavUpdateForBuilding_Params Parms;

	Parms.BuildingActor = BuildingActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIFunctionLibrary.MakeNoiseEventAtLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      NoiseMaker                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxRange                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NoiseLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NoiseTag                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFunctionLibrary::MakeNoiseEventAtLocation(class UActor* NoiseMaker, float MaxRange, struct FVector& NoiseLocation, class FName NoiseTag)
{
	static auto Func = Class->GetFunction("FortAIFunctionLibrary", "MakeNoiseEventAtLocation");

	Params::UFortAIFunctionLibrary_MakeNoiseEventAtLocation_Params Parms;

	Parms.NoiseMaker = NoiseMaker;
	Parms.MaxRange = MaxRange;
	Parms.NoiseLocation = NoiseLocation;
	Parms.NoiseTag = NoiseTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIFunctionLibrary.MakeNoiseEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      NoiseMaker                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxRange                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NoiseTag                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFunctionLibrary::MakeNoiseEvent(class UActor* NoiseMaker, float MaxRange, class FName NoiseTag)
{
	static auto Func = Class->GetFunction("FortAIFunctionLibrary", "MakeNoiseEvent");

	Params::UFortAIFunctionLibrary_MakeNoiseEvent_Params Parms;

	Parms.NoiseMaker = NoiseMaker;
	Parms.MaxRange = MaxRange;
	Parms.NoiseTag = NoiseTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIFunctionLibrary.IsConcealedByPerceptionModifiers
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ObserverLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutConcealment                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFunctionLibrary::IsConcealedByPerceptionModifiers(class UObject* WorldContextObject, const struct FVector& ObserverLocation, const struct FVector& TargetLocation, float* OutConcealment)
{
	static auto Func = Class->GetFunction("FortAIFunctionLibrary", "IsConcealedByPerceptionModifiers");

	Params::UFortAIFunctionLibrary_IsConcealedByPerceptionModifiers_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObserverLocation = ObserverLocation;
	Parms.TargetLocation = TargetLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutConcealment != nullptr)
		*OutConcealment = Parms.OutConcealment;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIFunctionLibrary.GetOrCreateAIRuntimeParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               AIController                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAthenaAIRuntimeParameters>ParametersClass                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAIRuntimeParameters*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAIRuntimeParameters* UFortAIFunctionLibrary::GetOrCreateAIRuntimeParameters(class UAIController* AIController, TSubclassOf<class UFortAthenaAIRuntimeParameters> ParametersClass)
{
	static auto Func = Class->GetFunction("FortAIFunctionLibrary", "GetOrCreateAIRuntimeParameters");

	Params::UFortAIFunctionLibrary_GetOrCreateAIRuntimeParameters_Params Parms;

	Parms.AIController = AIController;
	Parms.ParametersClass = ParametersClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIFunctionLibrary.GetAISpawner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAISpawner*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAISpawner* UFortAIFunctionLibrary::GetAISpawner(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("FortAIFunctionLibrary", "GetAISpawner");

	Params::UFortAIFunctionLibrary_GetAISpawner_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIGoalManager.SetCurrentGoalDiscouragement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIController*           AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::SetCurrentGoalDiscouragement(class UObject* WorldContext, class UFortAIController* AI)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "SetCurrentGoalDiscouragement");

	Params::UFortAIGoalManager_SetCurrentGoalDiscouragement_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.AI = AI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalManager.RemoveWorldAssignment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (Parm, NativeAccessSpecifierPublic)

void UFortAIGoalManager::RemoveWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "RemoveWorldAssignment");

	Params::UFortAIGoalManager_RemoveWorldAssignment_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalManager.RemoveGoalsFromWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FFortAIGoalInfo>     GoalInfos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAIGoalManager::RemoveGoalsFromWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray<struct FFortAIGoalInfo>& GoalInfos)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "RemoveGoalsFromWorldAssignment");

	Params::UFortAIGoalManager_RemoveGoalsFromWorldAssignment_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;
	Parms.GoalInfos = GoalInfos;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalManager.RemoveGoalFromWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortAIGoalInfo             GoalInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAIGoalManager::RemoveGoalFromWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "RemoveGoalFromWorldAssignment");

	Params::UFortAIGoalManager_RemoveGoalFromWorldAssignment_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;
	Parms.GoalInfo = GoalInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalsFromLocationsAndActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFortAIGoalInfo>     Goals                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             GoalLocations                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalsFromLocationsAndActor(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<struct FVector>& GoalLocations, class UActor* GoalActor)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "MakeGoalsFromLocationsAndActor");

	Params::UFortAIGoalManager_MakeGoalsFromLocationsAndActor_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocations = GoalLocations;
	Parms.GoalActor = GoalActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Goals != nullptr)
		*Goals = Parms.Goals;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalsFromLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFortAIGoalInfo>     Goals                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             GoalLocations                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalsFromLocations(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<struct FVector>& GoalLocations)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "MakeGoalsFromLocations");

	Params::UFortAIGoalManager_MakeGoalsFromLocations_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocations = GoalLocations;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Goals != nullptr)
		*Goals = Parms.Goals;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalsFromActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFortAIGoalInfo>     Goals                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              GoalActors                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bActorsAlwaysPerceived                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGoalActorsAllowUndermining                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalsFromActors(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<class UActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "MakeGoalsFromActors");

	Params::UFortAIGoalManager_MakeGoalsFromActors_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalActors = GoalActors;
	Parms.bActorsAlwaysPerceived = bActorsAlwaysPerceived;
	Parms.bGoalActorsAllowUndermining = bGoalActorsAllowUndermining;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Goals != nullptr)
		*Goals = Parms.Goals;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalFromLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFortAIGoalInfo             Goal                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     GoalLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalFromLocation(struct FFortAIGoalInfo* Goal, class UObject* WorldContextObject, struct FVector& GoalLocation)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "MakeGoalFromLocation");

	Params::UFortAIGoalManager_MakeGoalFromLocation_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocation = GoalLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Goal != nullptr)
		*Goal = Parms.Goal;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalFromActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortAIGoalInfo             Goal                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActorAlwaysPerceived                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGoalActorAllowsUndermining                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalFromActor(struct FFortAIGoalInfo* Goal, class UObject* WorldContextObject, class UActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "MakeGoalFromActor");

	Params::UFortAIGoalManager_MakeGoalFromActor_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalActor = GoalActor;
	Parms.bActorAlwaysPerceived = bActorAlwaysPerceived;
	Parms.bGoalActorAllowsUndermining = bGoalActorAllowsUndermining;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Goal != nullptr)
		*Goal = Parms.Goal;

}


// Function FortniteAI.FortAIGoalManager.CreateWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier WorldAssignmentIdentifier                                        (Parm, NativeAccessSpecifierPublic)
// class UFortAIAssignmentSettings*   AssignmentSettings                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAIGoalProvider>GoalProvider                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EAssignmentCreationResultCreationResult                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::CreateWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& WorldAssignmentIdentifier, class UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<class UFortAIGoalProvider> GoalProvider, struct FFortAIAssignmentIdentifier* AssignmentIdentifier, enum class EAssignmentCreationResult* CreationResult)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "CreateWorldAssignment");

	Params::UFortAIGoalManager_CreateWorldAssignment_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.WorldAssignmentIdentifier = WorldAssignmentIdentifier;
	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalProvider = GoalProvider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AssignmentIdentifier != nullptr)
		*AssignmentIdentifier = Parms.AssignmentIdentifier;

	if (CreationResult != nullptr)
		*CreationResult = Parms.CreationResult;

}


// Function FortniteAI.FortAIGoalManager.AddWorldAssignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAIAssignmentSettings*   AssignmentSettings                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIAssignment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIAssignment* UFortAIGoalManager::AddWorldAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class UActor* GoalActor)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "AddWorldAssignment");

	Params::UFortAIGoalManager_AddWorldAssignment_Params Parms;

	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalActor = GoalActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIGoalManager.AddGoalToWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortAIGoalInfo             GoalInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAIGoalManager::AddGoalToWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "AddGoalToWorldAssignment");

	Params::UFortAIGoalManager_AddGoalToWorldAssignment_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;
	Parms.GoalInfo = GoalInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalManager.AddGoalsToWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FFortAIGoalInfo>     GoalInfos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAIGoalManager::AddGoalsToWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray<struct FFortAIGoalInfo>& GoalInfos)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "AddGoalsToWorldAssignment");

	Params::UFortAIGoalManager_AddGoalsToWorldAssignment_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;
	Parms.GoalInfos = GoalInfos;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalManager.AddGoalActorToAssignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAIAssignment*           Assignment                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::AddGoalActorToAssignment(class UFortAIAssignment* Assignment, class UActor* GoalActor)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "AddGoalActorToAssignment");

	Params::UFortAIGoalManager_AddGoalActorToAssignment_Params Parms;

	Parms.Assignment = Assignment;
	Parms.GoalActor = GoalActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalManager.AddGoal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIAssignmentSettings*   GoalSettings                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::AddGoal(class UActor* GoalActor, class UFortAIAssignmentSettings* GoalSettings)
{
	static auto Func = Class->GetFunction("FortAIGoalManager", "AddGoal");

	Params::UFortAIGoalManager_AddGoal_Params Parms;

	Parms.GoalActor = GoalActor;
	Parms.GoalSettings = GoalSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIRootAssignmentProviderInterface.GetRootAssignmentIdentifier
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortAIAssignmentIdentifier ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FFortAIAssignmentIdentifier UFortAIRootAssignmentProviderInterface::GetRootAssignmentIdentifier()
{
	static auto Func = Class->GetFunction("FortAIRootAssignmentProviderInterface", "GetRootAssignmentIdentifier");

	Params::UFortAIRootAssignmentProviderInterface_GetRootAssignmentIdentifier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnerInterface.OnReceiveSpawnGroup
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnerInterface::OnReceiveSpawnGroup()
{
	static auto Func = Class->GetFunction("FortAISpawnerInterface", "OnReceiveSpawnGroup");

	Params::UFortAISpawnerInterface_OnReceiveSpawnGroup_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnerInterface.IsReadyToReceiveNewSpawnGroup
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnerInterface::IsReadyToReceiveNewSpawnGroup()
{
	static auto Func = Class->GetFunction("FortAISpawnerInterface", "IsReadyToReceiveNewSpawnGroup");

	Params::UFortAISpawnerInterface_IsReadyToReceiveNewSpawnGroup_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.IsValidForEnemySpawners
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnGroup::IsValidForEnemySpawners()
{
	static auto Func = Class->GetFunction("FortAISpawnGroup", "IsValidForEnemySpawners");

	Params::UFortAISpawnGroup_IsValidForEnemySpawners_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.IsPrototype
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnGroup::IsPrototype()
{
	static auto Func = Class->GetFunction("FortAISpawnGroup", "IsPrototype");

	Params::UFortAISpawnGroup_IsPrototype_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.IsLargeSpawnGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnGroup::IsLargeSpawnGroup()
{
	static auto Func = Class->GetFunction("FortAISpawnGroup", "IsLargeSpawnGroup");

	Params::UFortAISpawnGroup_IsLargeSpawnGroup_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.GetNumberOfEnemies
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAISpawnGroup::GetNumberOfEnemies()
{
	static auto Func = Class->GetFunction("FortAISpawnGroup", "GetNumberOfEnemies");

	Params::UFortAISpawnGroup_GetNumberOfEnemies_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.GetEnemy
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              EnemyIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAIPawnVariant>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UFortAIPawnVariant> UFortAISpawnGroup::GetEnemy(int32 EnemyIndex)
{
	static auto Func = Class->GetFunction("FortAISpawnGroup", "GetEnemy");

	Params::UFortAISpawnGroup_GetEnemy_Params Parms;

	Parms.EnemyIndex = EnemyIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsWidth
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsWidth()
{
	static auto Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsWidth");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsWidth_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsHeight
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsHeight()
{
	static auto Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsHeight");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsHeight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSSpaceBetween
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsEQSSpaceBetween()
{
	static auto Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsEQSSpaceBetween");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSSpaceBetween_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSGridSize
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsEQSGridSize()
{
	static auto Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsEQSGridSize");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSGridSize_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsCenter
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsCenter()
{
	static auto Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsCenter");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsCenter_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings.CreateAsyncAction_MakeTieredWaveEncounterSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTieredWaveSetData          WaveData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortEncounterSettings      InEncounterSettings                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortAsyncAction_MakeTieredWaveEncounterSettings*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAsyncAction_MakeTieredWaveEncounterSettings* UFortAsyncAction_MakeTieredWaveEncounterSettings::CreateAsyncAction_MakeTieredWaveEncounterSettings(struct FTieredWaveSetData& WaveData, struct FFortEncounterSettings& InEncounterSettings)
{
	static auto Func = Class->GetFunction("FortAsyncAction_MakeTieredWaveEncounterSettings", "CreateAsyncAction_MakeTieredWaveEncounterSettings");

	Params::UFortAsyncAction_MakeTieredWaveEncounterSettings_CreateAsyncAction_MakeTieredWaveEncounterSettings_Params Parms;

	Parms.WaveData = WaveData;
	Parms.InEncounterSettings = InEncounterSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.UpdateLeashActorToFollowLocation
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotController::UpdateLeashActorToFollowLocation()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "UpdateLeashActorToFollowLocation");

	Params::UFortAthenaAIBotController_UpdateLeashActorToFollowLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.ThankBusDriver
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotController::ThankBusDriver()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "ThankBusDriver");

	Params::UFortAthenaAIBotController_ThankBusDriver_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SwitchTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              TeamIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SwitchTeam(uint8 TeamIndex)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SwitchTeam");

	Params::UFortAthenaAIBotController_SwitchTeam_Params Parms;

	Parms.TeamIndex = TeamIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.StopSecondaryFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFireWhenStopping                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::StopSecondaryFire(bool bFireWhenStopping)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "StopSecondaryFire");

	Params::UFortAthenaAIBotController_StopSecondaryFire_Params Parms;

	Parms.bFireWhenStopping = bFireWhenStopping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.StopFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::StopFire()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "StopFire");

	Params::UFortAthenaAIBotController_StopFire_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.StopEmote
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::StopEmote()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "StopEmote");

	Params::UFortAthenaAIBotController_StopEmote_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.StartSecondaryFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::StartSecondaryFire()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "StartSecondaryFire");

	Params::UFortAthenaAIBotController_StartSecondaryFire_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.StartFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::StartFire()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "StartFire");

	Params::UFortAthenaAIBotController_StartFire_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetSkillSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAIBotSkillSet>SkillSetClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetSkillSet");

	Params::UFortAthenaAIBotController_SetSkillSet_Params Parms;

	Parms.SkillSetClass = SkillSetClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashOuterRadius
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              OuterRadius                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetRadialLeashOuterRadius(float OuterRadius)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashOuterRadius");

	Params::UFortAthenaAIBotController_SetRadialLeashOuterRadius_Params Parms;

	Parms.OuterRadius = OuterRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashLocation
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetRadialLeashLocation(struct FVector& Location)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashLocation");

	Params::UFortAthenaAIBotController_SetRadialLeashLocation_Params Parms;

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashInnerRadius
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InnerRadius                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetRadialLeashInnerRadius(float InnerRadius)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashInnerRadius");

	Params::UFortAthenaAIBotController_SetRadialLeashInnerRadius_Params Parms;

	Parms.InnerRadius = InnerRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetPatrollingEnable
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetPatrollingEnable(bool bEnable)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetPatrollingEnable");

	Params::UFortAthenaAIBotController_SetPatrollingEnable_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetLeashVolume
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaAILeashVolume*    InLeashVolume                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetLeashVolume(class UFortAthenaAILeashVolume* InLeashVolume)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashVolume");

	Params::UFortAthenaAIBotController_SetLeashVolume_Params Parms;

	Parms.InLeashVolume = InLeashVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetLeashReturnLocationMode
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELeashReturnLocationModeReturnMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetLeashReturnLocationMode(enum class ELeashReturnLocationMode ReturnMode)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashReturnLocationMode");

	Params::UFortAthenaAIBotController_SetLeashReturnLocationMode_Params Parms;

	Parms.ReturnMode = ReturnMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetLeashGameplayVolume
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayVolume*             InLeashGameplayVolume                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetLeashGameplayVolume(class UGameplayVolume* InLeashGameplayVolume)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashGameplayVolume");

	Params::UFortAthenaAIBotController_SetLeashGameplayVolume_Params Parms;

	Parms.InLeashGameplayVolume = InLeashGameplayVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetLeashActorToFollow
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      ActorToFollow                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LeashLocationUpdateRate                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocalOffset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetLeashActorToFollow(class UActor* ActorToFollow, float LeashLocationUpdateRate, const struct FVector& LocalOffset)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashActorToFollow");

	Params::UFortAthenaAIBotController_SetLeashActorToFollow_Params Parms;

	Parms.ActorToFollow = ActorToFollow;
	Parms.LeashLocationUpdateRate = LeashLocationUpdateRate;
	Parms.LocalOffset = LocalOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.SetBotOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InBotOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetBotOwner(class UActor* InBotOwner)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "SetBotOwner");

	Params::UFortAthenaAIBotController_SetBotOwner_Params Parms;

	Parms.InBotOwner = InBotOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.RequestEmote
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId             EmotePrimaryAssetId                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InfiniteEmoteMaxDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::RequestEmote(struct FPrimaryAssetId& EmotePrimaryAssetId, float InfiniteEmoteMaxDuration)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "RequestEmote");

	Params::UFortAthenaAIBotController_RequestEmote_Params Parms;

	Parms.EmotePrimaryAssetId = EmotePrimaryAssetId;
	Parms.InfiniteEmoteMaxDuration = InfiniteEmoteMaxDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.RemoveSkillSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAIBotSkillSet>SkillSetClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::RemoveSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "RemoveSkillSet");

	Params::UFortAthenaAIBotController_RemoveSkillSet_Params Parms;

	Parms.SkillSetClass = SkillSetClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.RemoveEmoteRequest
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::RemoveEmoteRequest()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "RemoveEmoteRequest");

	Params::UFortAthenaAIBotController_RemoveEmoteRequest_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.ReleaseBuildTool
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotController::ReleaseBuildTool()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "ReleaseBuildTool");

	Params::UFortAthenaAIBotController_ReleaseBuildTool_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.QueueStim
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SourceLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SourceDirection                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EStimType               NewStimType                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StimStrength                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StimTag                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::QueueStim(class UActor* SourceActor, struct FVector& SourceLocation, struct FVector& SourceDirection, enum class EStimType NewStimType, float StimStrength, class FName StimTag)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "QueueStim");

	Params::UFortAthenaAIBotController_QueueStim_Params Parms;

	Parms.SourceActor = SourceActor;
	Parms.SourceLocation = SourceLocation;
	Parms.SourceDirection = SourceDirection;
	Parms.NewStimType = NewStimType;
	Parms.StimStrength = StimStrength;
	Parms.StimTag = StimTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.PlayEmote
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId             EmotePrimaryAssetId                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::PlayEmote(struct FPrimaryAssetId& EmotePrimaryAssetId)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "PlayEmote");

	Params::UFortAthenaAIBotController_PlayEmote_Params Parms;

	Parms.EmotePrimaryAssetId = EmotePrimaryAssetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OverrideSkill
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewSkill                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OverrideSkill(float NewSkill)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OverrideSkill");

	Params::UFortAthenaAIBotController_OverrideSkill_Params Parms;

	Parms.NewSkill = NewSkill;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OverrideAggressivenessPlayStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsAggressive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OverrideAggressivenessPlayStyle(bool bInIsAggressive)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OverrideAggressivenessPlayStyle");

	Params::UFortAthenaAIBotController_OverrideAggressivenessPlayStyle_Params Parms;

	Parms.bInIsAggressive = bInIsAggressive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDestroyed
// (Final, Native, Public)
// Parameters:

void UFortAthenaAIBotController::OnTargetPawnDestroyed()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDestroyed");

	Params::UFortAthenaAIBotController_OnTargetPawnDestroyed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDead
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   FortPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnTargetPawnDead(class UFortPawn* FortPawn)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDead");

	Params::UFortAthenaAIBotController_OnTargetPawnDead_Params Parms;

	Parms.FortPawn = FortPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDamaged
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnTargetPawnDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDamaged");

	Params::UFortAthenaAIBotController_OnTargetPawnDamaged_Params Parms;

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


// Function FortniteAI.FortAthenaAIBotController.OnTargetBuildingDestroyed
// (Final, Native, Public)
// Parameters:
// class UBuildingActor*              Building                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIController*         AIController                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnTargetBuildingDestroyed(class UBuildingActor* Building, class UAthenaAIController* AIController)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetBuildingDestroyed");

	Params::UFortAthenaAIBotController_OnTargetBuildingDestroyed_Params Parms;

	Parms.Building = Building;
	Parms.AIController = AIController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetActorDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnTargetActorDestroyed(class UActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetActorDestroyed");

	Params::UFortAthenaAIBotController_OnTargetActorDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnServerMarkerAdded
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortWorldMarkerData        MarkerData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnServerMarkerAdded");

	Params::UFortAthenaAIBotController_OnServerMarkerAdded_Params Parms;

	Parms.MarkerData = MarkerData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnSafeZoneUpdated
// (Final, Native, Public)
// Parameters:

void UFortAthenaAIBotController::OnSafeZoneUpdated()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnSafeZoneUpdated");

	Params::UFortAthenaAIBotController_OnSafeZoneUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnSafeZoneStateChanged
// (Final, Native, Public)
// Parameters:
// enum class EFortSafeZoneState      NewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnSafeZoneStateChanged(enum class EFortSafeZoneState NewState)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnSafeZoneStateChanged");

	Params::UFortAthenaAIBotController_OnSafeZoneStateChanged_Params Parms;

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnPossessedPawnReceiveDamage
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPossessedPawnReceiveDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnPossessedPawnReceiveDamage");

	Params::UFortAthenaAIBotController_OnPossessedPawnReceiveDamage_Params Parms;

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


// Function FortniteAI.FortAthenaAIBotController.OnPossesedPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPossesedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnPossesedPawnDied");

	Params::UFortAthenaAIBotController_OnPossesedPawnDied_Params Parms;

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


// Function FortniteAI.FortAthenaAIBotController.OnPerceptionSensed
// (Native, Public)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIStimulus                 Stim                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPerceptionSensed(class UActor* SourceActor, const struct FAIStimulus& Stim)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnPerceptionSensed");

	Params::UFortAthenaAIBotController_OnPerceptionSensed_Params Parms;

	Parms.SourceActor = SourceActor;
	Parms.Stim = Stim;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnPawnWeaponChanged
// (Final, Native, Public)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 OldWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPawnWeaponChanged(class UFortWeapon* NewWeapon, class UFortWeapon* OldWeapon)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnPawnWeaponChanged");

	Params::UFortAthenaAIBotController_OnPawnWeaponChanged_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.OldWeapon = OldWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnPawnDidDamage
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPawnDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnPawnDidDamage");

	Params::UFortAthenaAIBotController_OnPawnDidDamage_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnMovementModeChange
// (Final, Native, Public)
// Parameters:
// class UCharacter*                  InCharacter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnMovementModeChange(class UCharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnMovementModeChange");

	Params::UFortAthenaAIBotController_OnMovementModeChange_Params Parms;

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnLaunched
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     LaunchVelocity                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bXYOverride                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bZOverride                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnLaunched");

	Params::UFortAthenaAIBotController_OnLaunched_Params Parms;

	Parms.LaunchVelocity = LaunchVelocity;
	Parms.bXYOverride = bXYOverride;
	Parms.bZOverride = bZOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnKnockbacked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                KnockbackTypeTag                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnKnockbacked(const struct FGameplayTag& KnockbackTypeTag)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnKnockbacked");

	Params::UFortAthenaAIBotController_OnKnockbacked_Params Parms;

	Parms.KnockbackTypeTag = KnockbackTypeTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnGamePhaseStepChanged
// (Final, Native, Public, HasOutParams)
// Parameters:
// FInterfaceProperty_                SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnGamePhaseStepChanged(FInterfaceProperty_& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnGamePhaseStepChanged");

	Params::UFortAthenaAIBotController_OnGamePhaseStepChanged_Params Parms;

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnGamePhaseChanged
// (Final, Native, Public)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnGamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnGamePhaseChanged");

	Params::UFortAthenaAIBotController_OnGamePhaseChanged_Params Parms;

	Parms.GamePhase = GamePhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnEndSpectating
// (Final, Native, Public)
// Parameters:
// class UFortPlayerStateZone*        Spectator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnEndSpectating(class UFortPlayerStateZone* Spectator)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnEndSpectating");

	Params::UFortAthenaAIBotController_OnEndSpectating_Params Parms;

	Parms.Spectator = Spectator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnCurrentHarvestableDestroyed
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

void UFortAthenaAIBotController::OnCurrentHarvestableDestroyed(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnCurrentHarvestableDestroyed");

	Params::UFortAthenaAIBotController_OnCurrentHarvestableDestroyed_Params Parms;

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


// Function FortniteAI.FortAthenaAIBotController.OnBeginSpectating
// (Final, Native, Public)
// Parameters:
// class UFortPlayerStateZone*        Spectator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnBeginSpectating(class UFortPlayerStateZone* Spectator)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnBeginSpectating");

	Params::UFortAthenaAIBotController_OnBeginSpectating_Params Parms;

	Parms.Spectator = Spectator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.OnAlertLevelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EAlertLevel             OldAlertLevel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlertLevel             NewAlertLevel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnAlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnAlertLevelChanged");

	Params::UFortAthenaAIBotController_OnAlertLevelChanged_Params Parms;

	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaAIBotController.OnAgentDBNO
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   InPlayer                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIsDBNO                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnAgentDBNO(class UFortPawn* InPlayer, bool bInIsDBNO)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "OnAgentDBNO");

	Params::UFortAthenaAIBotController_OnAgentDBNO_Params Parms;

	Parms.InPlayer = InPlayer;
	Parms.bInIsDBNO = bInIsDBNO;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.NotifyPickupsSpawnedOnDeath
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortPickup*>         SpawnedPickups                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              SpawnRequestId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::NotifyPickupsSpawnedOnDeath(TArray<class UFortPickup*>& SpawnedPickups, int32 SpawnRequestId)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "NotifyPickupsSpawnedOnDeath");

	Params::UFortAthenaAIBotController_NotifyPickupsSpawnedOnDeath_Params Parms;

	Parms.SpawnedPickups = SpawnedPickups;
	Parms.SpawnRequestId = SpawnRequestId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.IsAnAthenaGameParticipant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIBotController::IsAnAthenaGameParticipant()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "IsAnAthenaGameParticipant");

	Params::UFortAthenaAIBotController_IsAnAthenaGameParticipant_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetSlotItemByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                TagToCheck                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItem*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItem* UFortAthenaAIBotController::GetSlotItemByTag(struct FGameplayTag& TagToCheck)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "GetSlotItemByTag");

	Params::UFortAthenaAIBotController_GetSlotItemByTag_Params Parms;

	Parms.TagToCheck = TagToCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetSlotItemByItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItemDefinition*         ItemDefinition                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItem*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItem* UFortAthenaAIBotController::GetSlotItemByItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "GetSlotItemByItemDefinition");

	Params::UFortAthenaAIBotController_GetSlotItemByItemDefinition_Params Parms;

	Parms.ItemDefinition = ItemDefinition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetMarkerComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAthenaMarkerComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaMarkerComponent* UFortAthenaAIBotController::GetMarkerComponent()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "GetMarkerComponent");

	Params::UFortAthenaAIBotController_GetMarkerComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetCurrentThreat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAthenaAIBotController::GetCurrentThreat()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "GetCurrentThreat");

	Params::UFortAthenaAIBotController_GetCurrentThreat_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetBotOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAthenaAIBotController::GetBotOwner()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "GetBotOwner");

	Params::UFortAthenaAIBotController_GetBotOwner_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.EquipWeaponByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                WeaponTag                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWeapon* UFortAthenaAIBotController::EquipWeaponByTag(struct FGameplayTag& WeaponTag)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "EquipWeaponByTag");

	Params::UFortAthenaAIBotController_EquipWeaponByTag_Params Parms;

	Parms.WeaponTag = WeaponTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.EquipWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWorldItem*              Weapon                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWeapon* UFortAthenaAIBotController::EquipWeapon(class UFortWorldItem* Weapon)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "EquipWeapon");

	Params::UFortAthenaAIBotController_EquipWeapon_Params Parms;

	Parms.Weapon = Weapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.EquipMeleeWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWeapon*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWeapon* UFortAthenaAIBotController::EquipMeleeWeapon()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "EquipMeleeWeapon");

	Params::UFortAthenaAIBotController_EquipMeleeWeapon_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.EquipBestWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWeapon*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWeapon* UFortAthenaAIBotController::EquipBestWeapon()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "EquipBestWeapon");

	Params::UFortAthenaAIBotController_EquipBestWeapon_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.Cheat_ForceAthenaCosmeticItemInSlot
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UAthenaCosmeticItemDefinition*CosmeticItem                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaCustomizationCategorySlot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::Cheat_ForceAthenaCosmeticItemInSlot(class UAthenaCosmeticItemDefinition* CosmeticItem, enum class EAthenaCustomizationCategory Slot, int32 Index)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "Cheat_ForceAthenaCosmeticItemInSlot");

	Params::UFortAthenaAIBotController_Cheat_ForceAthenaCosmeticItemInSlot_Params Parms;

	Parms.CosmeticItem = CosmeticItem;
	Parms.Slot = Slot;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.Cheat_ClearForcedCosmeticItems
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UFortAthenaAIBotController::Cheat_ClearForcedCosmeticItems()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "Cheat_ClearForcedCosmeticItems");

	Params::UFortAthenaAIBotController_Cheat_ClearForcedCosmeticItems_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.ChangeActiveVariantForCosmeticItem
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ItemTemplateToChange                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VariantChannelToChange                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                DesiredActiveVariant                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::ChangeActiveVariantForCosmeticItem(class FName ItemTemplateToChange, const struct FGameplayTag& VariantChannelToChange, const struct FGameplayTag& DesiredActiveVariant)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "ChangeActiveVariantForCosmeticItem");

	Params::UFortAthenaAIBotController_ChangeActiveVariantForCosmeticItem_Params Parms;

	Parms.ItemTemplateToChange = ItemTemplateToChange;
	Parms.VariantChannelToChange = VariantChannelToChange;
	Parms.DesiredActiveVariant = DesiredActiveVariant;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.BlueprintOnBehaviorTreeStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAthenaAIBotController::BlueprintOnBehaviorTreeStarted()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "BlueprintOnBehaviorTreeStarted");

	Params::UFortAthenaAIBotController_BlueprintOnBehaviorTreeStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaAIBotController.AddTargetInfos
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              Targets                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EPerceptionState        PerceptionState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetDistance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::AddTargetInfos(TArray<class UActor*>& Targets, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "AddTargetInfos");

	Params::UFortAthenaAIBotController_AddTargetInfos_Params Parms;

	Parms.Targets = Targets;
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotController.AddTargetInfo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceTarget                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPerceptionState        PerceptionState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetDistance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::AddTargetInfo(class UActor* Target, bool bForceTarget, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotController", "AddTargetInfo");

	Params::UFortAthenaAIBotController_AddTargetInfo_Params Parms;

	Parms.Target = Target;
	Parms.bForceTarget = bForceTarget;
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaTrackableAIObjectVehicleComponent.HandleSleepStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsAwake                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaTrackableAIObjectVehicleComponent::HandleSleepStateChanged(bool bIsAwake)
{
	static auto Func = Class->GetFunction("FortAthenaTrackableAIObjectVehicleComponent", "HandleSleepStateChanged");

	Params::UFortAthenaTrackableAIObjectVehicleComponent_HandleSleepStateChanged_Params Parms;

	Parms.bIsAwake = bIsAwake;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunityEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetWeaponKnockbackImmunityEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetWeaponKnockbackImmunityEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetWeaponKnockbackImmunityEffect_Params Parms;

	Parms.Effect = Effect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InImmuneToWeaponKnockback                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetWeaponKnockbackImmunity(bool InImmuneToWeaponKnockback)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetWeaponKnockbackImmunity");

	Params::UFortCreativeCreatureManagerInfoComponent_SetWeaponKnockbackImmunity_Params Parms;

	Parms.InImmuneToWeaponKnockback = InImmuneToWeaponKnockback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScorePoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InScorePoints                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetScorePoints(int32 InScorePoints)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetScorePoints");

	Params::UFortCreativeCreatureManagerInfoComponent_SetScorePoints_Params Parms;

	Parms.InScorePoints = InScorePoints;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScoreDistribution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EScoreDistributionType  InScoreDistribution                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetScoreDistribution(enum class EScoreDistributionType InScoreDistribution)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetScoreDistribution");

	Params::UFortCreativeCreatureManagerInfoComponent_SetScoreDistribution_Params Parms;

	Parms.InScoreDistribution = InScoreDistribution;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetOverrideDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOverrideDamage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetOverrideDamage(float InOverrideDamage)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetOverrideDamage");

	Params::UFortCreativeCreatureManagerInfoComponent_SetOverrideDamage_Params Parms;

	Parms.InOverrideDamage = InOverrideDamage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedOverrideEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementSpeedOverrideEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMovementSpeedOverrideEffect_Params Parms;

	Parms.Effect = Effect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOverrideMovementSpeedMultiplier                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementSpeedMultiplier");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMovementSpeedMultiplier_Params Parms;

	Parms.InOverrideMovementSpeedMultiplier = InOverrideMovementSpeedMultiplier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementOverrideTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMovementOverrideTag(const struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementOverrideTag");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMovementOverrideTag_Params Parms;

	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealthOverrideTag(const struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealthOverrideTag");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMaxHealthOverrideTag_Params Parms;

	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealthOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealthOverrideEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMaxHealthOverrideEffect_Params Parms;

	Parms.Effect = Effect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InMaxHealth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealth(int32 InMaxHealth)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealth");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMaxHealth_Params Parms;

	Parms.InMaxHealth = InMaxHealth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetHearingAggroRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHearingAggroRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetHearingAggroRange(float InHearingAggroRange)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetHearingAggroRange");

	Params::UFortCreativeCreatureManagerInfoComponent_SetHearingAggroRange_Params Parms;

	Parms.InHearingAggroRange = InHearingAggroRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverrideEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetEnvironmentalDamageOverrideEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetEnvironmentalDamageOverrideEffect_Params Parms;

	Parms.Effect = Effect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOverrideDamage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverride(float InOverrideDamage)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetEnvironmentalDamageOverride");

	Params::UFortCreativeCreatureManagerInfoComponent_SetEnvironmentalDamageOverride_Params Parms;

	Parms.InOverrideDamage = InOverrideDamage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideTag(const struct FGameplayTag& Tag)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetDamageOverrideTag");

	Params::UFortCreativeCreatureManagerInfoComponent_SetDamageOverrideTag_Params Parms;

	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetDamageOverrideEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetDamageOverrideEffect_Params Parms;

	Parms.Effect = Effect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureManagerComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCreativeCreatureManagerComponent*InCreatureManagerComponent                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetCreatureManagerComponent(class UFortCreativeCreatureManagerComponent* InCreatureManagerComponent)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetCreatureManagerComponent");

	Params::UFortCreativeCreatureManagerInfoComponent_SetCreatureManagerComponent_Params Parms;

	Parms.InCreatureManagerComponent = InCreatureManagerComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureBlueprintClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UFortAIPawn>   InCreatureBlueprintClass                                         (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetCreatureBlueprintClass(TSoftClassPtr<class UFortAIPawn> InCreatureBlueprintClass)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetCreatureBlueprintClass");

	Params::UFortCreativeCreatureManagerInfoComponent_SetCreatureBlueprintClass_Params Parms;

	Parms.InCreatureBlueprintClass = InCreatureBlueprintClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetAffectedTargetsType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECreatureManagerAffectedTargetsInAffectedTargetsType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetAffectedTargetsType(enum class ECreatureManagerAffectedTargets InAffectedTargetsType)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetAffectedTargetsType");

	Params::UFortCreativeCreatureManagerInfoComponent_SetAffectedTargetsType_Params Parms;

	Parms.InAffectedTargetsType = InAffectedTargetsType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetWeaponKnockbackImmunity
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetWeaponKnockbackImmunity()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetWeaponKnockbackImmunity");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetWeaponKnockbackImmunity_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScorePoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetScorePoints()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetScorePoints");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetScorePoints_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScoreDistribution
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetScoreDistribution()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetScoreDistribution");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetScoreDistribution_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetOverrideDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetOverrideDamage()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetOverrideDamage");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetOverrideDamage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMovementSpeedMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetMovementSpeedMultiplier()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetMovementSpeedMultiplier");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetMovementSpeedMultiplier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMaxHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetMaxHealth()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetMaxHealth");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetMaxHealth_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetHearingAggroRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetHearingAggroRange()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetHearingAggroRange");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetHearingAggroRange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetEnvironmentalDamageOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetEnvironmentalDamageOverride()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetEnvironmentalDamageOverride");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetEnvironmentalDamageOverride_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetWeaponKnockbackImmunity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCreativeCreatureManagerInfoComponent::GetWeaponKnockbackImmunity()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetWeaponKnockbackImmunity");

	Params::UFortCreativeCreatureManagerInfoComponent_GetWeaponKnockbackImmunity_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScorePoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortCreativeCreatureManagerInfoComponent::GetScorePoints()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetScorePoints");

	Params::UFortCreativeCreatureManagerInfoComponent_GetScorePoints_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScoreDistribution
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EScoreDistributionType  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EScoreDistributionType UFortCreativeCreatureManagerInfoComponent::GetScoreDistribution()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetScoreDistribution");

	Params::UFortCreativeCreatureManagerInfoComponent_GetScoreDistribution_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetOverrideDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetOverrideDamage()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetOverrideDamage");

	Params::UFortCreativeCreatureManagerInfoComponent_GetOverrideDamage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMovementSpeedMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetMovementSpeedMultiplier()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetMovementSpeedMultiplier");

	Params::UFortCreativeCreatureManagerInfoComponent_GetMovementSpeedMultiplier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMaxHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortCreativeCreatureManagerInfoComponent::GetMaxHealth()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetMaxHealth");

	Params::UFortCreativeCreatureManagerInfoComponent_GetMaxHealth_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetInvalidInt32
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortCreativeCreatureManagerInfoComponent::GetInvalidInt32()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetInvalidInt32");

	Params::UFortCreativeCreatureManagerInfoComponent_GetInvalidInt32_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetInvalidFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetInvalidFloat()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetInvalidFloat");

	Params::UFortCreativeCreatureManagerInfoComponent_GetInvalidFloat_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetHearingAggroRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetHearingAggroRange()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetHearingAggroRange");

	Params::UFortCreativeCreatureManagerInfoComponent_GetHearingAggroRange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetEnvironmentalDamageOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetEnvironmentalDamageOverride()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetEnvironmentalDamageOverride");

	Params::UFortCreativeCreatureManagerInfoComponent_GetEnvironmentalDamageOverride_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureManagerComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCreativeCreatureManagerComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortCreativeCreatureManagerComponent* UFortCreativeCreatureManagerInfoComponent::GetCreatureManagerComponent()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetCreatureManagerComponent");

	Params::UFortCreativeCreatureManagerInfoComponent_GetCreatureManagerComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureBlueprintClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftClassPtr<class UFortAIPawn>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftClassPtr<class UFortAIPawn> UFortCreativeCreatureManagerInfoComponent::GetCreatureBlueprintClass()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetCreatureBlueprintClass");

	Params::UFortCreativeCreatureManagerInfoComponent_GetCreatureBlueprintClass_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetAffectedTargetsType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECreatureManagerAffectedTargetsReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreatureManagerAffectedTargets UFortCreativeCreatureManagerInfoComponent::GetAffectedTargetsType()
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetAffectedTargetsType");

	Params::UFortCreativeCreatureManagerInfoComponent_GetAffectedTargetsType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentRemoved
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCreativeCreatureManagerInfoComponent*CreatureManagerInfoComponent                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerComponent::OnInfoComponentRemoved(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnInfoComponentRemoved");

	Params::UFortCreativeCreatureManagerComponent_OnInfoComponentRemoved_Params Parms;

	Parms.CreatureManagerInfoComponent = CreatureManagerInfoComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentAdded
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCreativeCreatureManagerInfoComponent*CreatureManagerInfoComponent                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerComponent::OnInfoComponentAdded(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnInfoComponentAdded");

	Params::UFortCreativeCreatureManagerComponent_OnInfoComponentAdded_Params Parms;

	Parms.CreatureManagerInfoComponent = CreatureManagerInfoComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativeCreatureManagerComponent.OnAIPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerComponent::OnAIPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnAIPawnDied");

	Params::UFortCreativeCreatureManagerComponent_OnAIPawnDied_Params Parms;

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


// Function FortniteAI.FortEnvQueryManager.OnGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEnvQueryManager::OnGamePhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("FortEnvQueryManager", "OnGamePhaseChanged");

	Params::UFortEnvQueryManager_OnGamePhaseChanged_Params Parms;

	Parms.GamePhase = GamePhase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortQueryTwoPointSolver.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Querier                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::Start(class UObject* Querier)
{
	static auto Func = Class->GetFunction("FortQueryTwoPointSolver", "Start");

	Params::UFortQueryTwoPointSolver_Start_Params Parms;

	Parms.Querier = Querier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortQueryTwoPointSolver.SkipToNextPointA
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQueryTwoPointSolver::SkipToNextPointA()
{
	static auto Func = Class->GetFunction("FortQueryTwoPointSolver", "SkipToNextPointA");

	Params::UFortQueryTwoPointSolver_SkipToNextPointA_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortQueryTwoPointSolver.SetCustomRotationA
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::SetCustomRotationA(struct FRotator& Rotation)
{
	static auto Func = Class->GetFunction("FortQueryTwoPointSolver", "SetCustomRotationA");

	Params::UFortQueryTwoPointSolver_SetCustomRotationA_Params Parms;

	Parms.Rotation = Rotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortQueryTwoPointSolver.OnCustomRotationMode
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     InPointA                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Querier                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::OnCustomRotationMode(struct FVector& InPointA, const struct FVector& Querier)
{
	static auto Func = Class->GetFunction("FortQueryTwoPointSolver", "OnCustomRotationMode");

	Params::UFortQueryTwoPointSolver_OnCustomRotationMode_Params Parms;

	Parms.InPointA = InPointA;
	Parms.Querier = Querier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortQueryTwoPointSolver.GetRandomRotationOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UFortQueryTwoPointSolver::GetRandomRotationOffset()
{
	static auto Func = Class->GetFunction("FortQueryTwoPointSolver", "GetRandomRotationOffset");

	Params::UFortQueryTwoPointSolver_GetRandomRotationOffset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamB
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::AddNamedFloatParamB(class FName ParamName, float Value)
{
	static auto Func = Class->GetFunction("FortQueryTwoPointSolver", "AddNamedFloatParamB");

	Params::UFortQueryTwoPointSolver_AddNamedFloatParamB_Params Parms;

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::AddNamedFloatParamA(class FName ParamName, float Value)
{
	static auto Func = Class->GetFunction("FortQueryTwoPointSolver", "AddNamedFloatParamA");

	Params::UFortQueryTwoPointSolver_AddNamedFloatParamA_Params Parms;

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortGameplayAbility_TeleportToActor.PreTeleportPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   TeleportedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_TeleportToActor::PreTeleportPawn(class UFortPawn* TeleportedPawn)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_TeleportToActor", "PreTeleportPawn");

	Params::UFortGameplayAbility_TeleportToActor_PreTeleportPawn_Params Parms;

	Parms.TeleportedPawn = TeleportedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortGameplayAbility_TeleportToActor.PostTeleportedPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   TeleportedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_TeleportToActor::PostTeleportedPawn(class UFortPawn* TeleportedPawn)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_TeleportToActor", "PostTeleportedPawn");

	Params::UFortGameplayAbility_TeleportToActor_PostTeleportedPawn_Params Parms;

	Parms.TeleportedPawn = TeleportedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortNavSystem.OnNavDataRegistered
// (Final, Native, Protected)
// Parameters:
// class UNavigationData*             NavData                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNavSystem::OnNavDataRegistered(class UNavigationData* NavData)
{
	static auto Func = Class->GetFunction("FortNavSystem", "OnNavDataRegistered");

	Params::UFortNavSystem_OnNavDataRegistered_Params Parms;

	Parms.NavData = NavData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortNavSystem.IsNavmeshInRadiusInitialized
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TestLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TestRadius                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortNavSystem::IsNavmeshInRadiusInitialized(class UObject* WorldContext, struct FVector& TestLocation, float TestRadius)
{
	static auto Func = Class->GetFunction("FortNavSystem", "IsNavmeshInRadiusInitialized");

	Params::UFortNavSystem_IsNavmeshInRadiusInitialized_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.TestLocation = TestLocation;
	Parms.TestRadius = TestRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortPatrolWardInterface.GetAffectingType
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EWardAffectType         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWardAffectType UFortPatrolWardInterface::GetAffectingType()
{
	static auto Func = Class->GetFunction("FortPatrolWardInterface", "GetAffectingType");

	Params::UFortPatrolWardInterface_GetAffectingType_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortPatrolWardInterface.GetAffectingDistance
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPatrolWardInterface::GetAffectingDistance()
{
	static auto Func = Class->GetFunction("FortPatrolWardInterface", "GetAffectingDistance");

	Params::UFortPatrolWardInterface_GetAffectingDistance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.StormsExist
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortThreatVisualsManager::StormsExist()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "StormsExist");

	Params::UFortThreatVisualsManager_StormsExist_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.SetMinimumCloudAltitude
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewMinimumAltitude                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::SetMinimumCloudAltitude(float NewMinimumAltitude)
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "SetMinimumCloudAltitude");

	Params::UFortThreatVisualsManager_SetMinimumCloudAltitude_Params Parms;

	Parms.NewMinimumAltitude = NewMinimumAltitude;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortThreatVisualsManager.SetCloudsAreHidden
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHide                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::SetCloudsAreHidden(bool bHide)
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "SetCloudsAreHidden");

	Params::UFortThreatVisualsManager_SetCloudsAreHidden_Params Parms;

	Parms.bHide = bHide;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortThreatVisualsManager.ResetMinimumCloudAltitude
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortThreatVisualsManager::ResetMinimumCloudAltitude()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "ResetMinimumCloudAltitude");

	Params::UFortThreatVisualsManager_ResetMinimumCloudAltitude_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortThreatVisualsManager.OnWorldReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortThreatVisualsManager::OnWorldReady()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "OnWorldReady");

	Params::UFortThreatVisualsManager_OnWorldReady_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortThreatVisualsManager.OnThreatCloudsChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FThreatLocationInfo> ThreatLocationInfo                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::OnThreatCloudsChanged(TArray<struct FThreatLocationInfo>& ThreatLocationInfo)
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "OnThreatCloudsChanged");

	Params::UFortThreatVisualsManager_OnThreatCloudsChanged_Params Parms;

	Parms.ThreatLocationInfo = ThreatLocationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortThreatVisualsManager.OnRep_ThreatLocations
// (Final, Native, Private)
// Parameters:

void UFortThreatVisualsManager::OnRep_ThreatLocations()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_ThreatLocations");

	Params::UFortThreatVisualsManager_OnRep_ThreatLocations_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortThreatVisualsManager.OnRep_StormWinds
// (Final, Native, Private)
// Parameters:

void UFortThreatVisualsManager::OnRep_StormWinds()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_StormWinds");

	Params::UFortThreatVisualsManager_OnRep_StormWinds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortThreatVisualsManager.OnRep_HideClouds
// (Final, Native, Private)
// Parameters:

void UFortThreatVisualsManager::OnRep_HideClouds()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_HideClouds");

	Params::UFortThreatVisualsManager_OnRep_HideClouds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortThreatVisualsManager.OnRep_GoalActorLocations
// (Final, Native, Private)
// Parameters:

void UFortThreatVisualsManager::OnRep_GoalActorLocations()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_GoalActorLocations");

	Params::UFortThreatVisualsManager_OnRep_GoalActorLocations_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortThreatVisualsManager.OnBeginThreatVisualsPrecursor
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::OnBeginThreatVisualsPrecursor(class UActor* SourceActor, struct FVector& EndLocation)
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "OnBeginThreatVisualsPrecursor");

	Params::UFortThreatVisualsManager_OnBeginThreatVisualsPrecursor_Params Parms;

	Parms.SourceActor = SourceActor;
	Parms.EndLocation = EndLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortThreatVisualsManager.GetThreatClouds
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FThreatLocationInfo> ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FThreatLocationInfo> UFortThreatVisualsManager::GetThreatClouds()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "GetThreatClouds");

	Params::UFortThreatVisualsManager_GetThreatClouds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.GetThreatCloud
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FThreatLocationInfo         ThreatLocInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UThreatCloud*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UThreatCloud* UFortThreatVisualsManager::GetThreatCloud(struct FThreatLocationInfo& ThreatLocInfo)
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "GetThreatCloud");

	Params::UFortThreatVisualsManager_GetThreatCloud_Params Parms;

	Parms.ThreatLocInfo = ThreatLocInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.GetCloudsAreHidden
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortThreatVisualsManager::GetCloudsAreHidden()
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "GetCloudsAreHidden");

	Params::UFortThreatVisualsManager_GetCloudsAreHidden_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.BeginThreatVisualsPrecursor
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ThreatLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::BeginThreatVisualsPrecursor(class UActor* SourceActor, const struct FVector& ThreatLocation)
{
	static auto Func = Class->GetFunction("FortThreatVisualsManager", "BeginThreatVisualsPrecursor");

	Params::UFortThreatVisualsManager_BeginThreatVisualsPrecursor_Params Parms;

	Parms.SourceActor = SourceActor;
	Parms.ThreatLocation = ThreatLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalProvider.UpdateGoals
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAIGoalProvider::UpdateGoals()
{
	static auto Func = Class->GetFunction("FortAIGoalProvider", "UpdateGoals");

	Params::UFortAIGoalProvider_UpdateGoals_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAIGoalProvider.InitializeGoalProvider
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      ContextWorld                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIAssignment*           Assignment                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIGoalProvider::InitializeGoalProvider(class UWorld* ContextWorld, class UFortAIAssignment* Assignment)
{
	static auto Func = Class->GetFunction("FortAIGoalProvider", "InitializeGoalProvider");

	Params::UFortAIGoalProvider_InitializeGoalProvider_Params Parms;

	Parms.ContextWorld = ContextWorld;
	Parms.Assignment = Assignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIGoalProvider.GetEncounterInfo
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIGoalProvider::GetEncounterInfo()
{
	static auto Func = Class->GetFunction("FortAIGoalProvider", "GetEncounterInfo");

	Params::UFortAIGoalProvider_GetEncounterInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlotGenerator.GetHotSpot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIHotSpot*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpot* UAIHotSpotSlotGenerator::GetHotSpot()
{
	static auto Func = Class->GetFunction("AIHotSpotSlotGenerator", "GetHotSpot");

	Params::UAIHotSpotSlotGenerator_GetHotSpot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlotGenerator.GenerateSlots
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UAIHotSpotSlotGenerator::GenerateSlots()
{
	static auto Func = Class->GetFunction("AIHotSpotSlotGenerator", "GenerateSlots");

	Params::UAIHotSpotSlotGenerator_GenerateSlots_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AIHotSpotSlotGenerator.AddSlot
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     RelativeLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    RelativeRotation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UAIHotSpotSlot>  CustomSlotClass                                                  (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIHotSpotSlot*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpotSlot* UAIHotSpotSlotGenerator::AddSlot(struct FVector& RelativeLocation, struct FRotator& RelativeRotation, TSubclassOf<class UAIHotSpotSlot> CustomSlotClass, bool bEnabled)
{
	static auto Func = Class->GetFunction("AIHotSpotSlotGenerator", "AddSlot");

	Params::UAIHotSpotSlotGenerator_AddSlot_Params Parms;

	Parms.RelativeLocation = RelativeLocation;
	Parms.RelativeRotation = RelativeRotation;
	Parms.CustomSlotClass = CustomSlotClass;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortInfluenceMap.K2_GetInfluenceSourcePositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             InfluenceSourcePositions                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortInfluenceMap::K2_GetInfluenceSourcePositions(class UObject* WorldContext, TArray<struct FVector>* InfluenceSourcePositions)
{
	static auto Func = Class->GetFunction("FortInfluenceMap", "K2_GetInfluenceSourcePositions");

	Params::UFortInfluenceMap_K2_GetInfluenceSourcePositions_Params Parms;

	Parms.WorldContext = WorldContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InfluenceSourcePositions != nullptr)
		*InfluenceSourcePositions = Parms.InfluenceSourcePositions;

}


// Function FortniteAI.FortInfluenceMap.K2_AddInfluenceSource
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SourceName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortInfluenceMap::K2_AddInfluenceSource(class UObject* WorldContext, struct FVector& Position, const class FString& SourceName, float Strength)
{
	static auto Func = Class->GetFunction("FortInfluenceMap", "K2_AddInfluenceSource");

	Params::UFortInfluenceMap_K2_AddInfluenceSource_Params Parms;

	Parms.WorldContext = WorldContext;
	Parms.Position = Position;
	Parms.SourceName = SourceName;
	Parms.Strength = Strength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortBotMissionLogic.SpawnStructureBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      MissionGoal                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortBuildingInstructions*   BuildingInstructions                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortBotStructureBuilder*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortBotStructureBuilder* UFortBotMissionLogic::SpawnStructureBuilder(class UActor* MissionGoal, class UFortBuildingInstructions* BuildingInstructions)
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "SpawnStructureBuilder");

	Params::UFortBotMissionLogic_SpawnStructureBuilder_Params Parms;

	Parms.MissionGoal = MissionGoal;
	Parms.BuildingInstructions = BuildingInstructions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortBotMissionLogic.SetGoalsInvulnerable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bGodMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotMissionLogic::SetGoalsInvulnerable(bool bGodMode)
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "SetGoalsInvulnerable");

	Params::UFortBotMissionLogic_SetGoalsInvulnerable_Params Parms;

	Parms.bGodMode = bGodMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortBotMissionLogic.SetCurrentBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTree*               Behavior                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotMissionLogic::SetCurrentBehavior(class UBehaviorTree* Behavior)
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "SetCurrentBehavior");

	Params::UFortBotMissionLogic_SetCurrentBehavior_Params Parms;

	Parms.Behavior = Behavior;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortBotMissionLogic.ResetBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotMissionLogic::ResetBehavior()
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "ResetBehavior");

	Params::UFortBotMissionLogic_ResetBehavior_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortBotMissionLogic.OnMissionStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBotMissionLogic::OnMissionStarted()
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "OnMissionStarted");

	Params::UFortBotMissionLogic_OnMissionStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortBotMissionLogic.OnMissionFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBotMissionLogic::OnMissionFinished()
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "OnMissionFinished");

	Params::UFortBotMissionLogic_OnMissionFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortBotMissionLogic.OnMissionActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBotMissionLogic::OnMissionActivated()
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "OnMissionActivated");

	Params::UFortBotMissionLogic_OnMissionActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortBotMissionLogic.OnInteractWithMissionGoal
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// class UFortAIController*           BotAI                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      MissionGoal                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBotMissionLogic::OnInteractWithMissionGoal(class UFortAIController* BotAI, class UActor* MissionGoal)
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "OnInteractWithMissionGoal");

	Params::UFortBotMissionLogic_OnInteractWithMissionGoal_Params Parms;

	Parms.BotAI = BotAI;
	Parms.MissionGoal = MissionGoal;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortBotMissionLogic.OnCanStartOtherMission
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAIController*           BotAI                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortMission*                OtherMission                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBotMissionLogic::OnCanStartOtherMission(class UFortAIController* BotAI, class UFortMission* OtherMission)
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "OnCanStartOtherMission");

	Params::UFortBotMissionLogic_OnCanStartOtherMission_Params Parms;

	Parms.BotAI = BotAI;
	Parms.OtherMission = OtherMission;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortBotMissionLogic.OnAssignedBehavior
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAIController*           BotAI                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotMissionLogic::OnAssignedBehavior(class UFortAIController* BotAI)
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "OnAssignedBehavior");

	Params::UFortBotMissionLogic_OnAssignedBehavior_Params Parms;

	Parms.BotAI = BotAI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortBotMissionLogic.MarkSingleLocator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      LocatorActor                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotMissionLogic::MarkSingleLocator(class UActor* LocatorActor)
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "MarkSingleLocator");

	Params::UFortBotMissionLogic_MarkSingleLocator_Params Parms;

	Parms.LocatorActor = LocatorActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortBotMissionLogic.MarkAllLocated
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotMissionLogic::MarkAllLocated()
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "MarkAllLocated");

	Params::UFortBotMissionLogic_MarkAllLocated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortBotMissionLogic.ClearAllLocated
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotMissionLogic::ClearAllLocated()
{
	static auto Func = Class->GetFunction("FortBotMissionLogic", "ClearAllLocated");

	Params::UFortBotMissionLogic_ClearAllLocated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortBotStructureBuilder.RunDeconstructor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotStructureBuilder::RunDeconstructor()
{
	static auto Func = Class->GetFunction("FortBotStructureBuilder", "RunDeconstructor");

	Params::UFortBotStructureBuilder_RunDeconstructor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortBotStructureBuilder.OnBuildingDied
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

void UFortBotStructureBuilder::OnBuildingDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortBotStructureBuilder", "OnBuildingDied");

	Params::UFortBotStructureBuilder_OnBuildingDied_Params Parms;

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


// Function FortniteAI.FortBotStructureBuilder.BuildAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotStructureBuilder::BuildAll()
{
	static auto Func = Class->GetFunction("FortBotStructureBuilder", "BuildAll");

	Params::UFortBotStructureBuilder_BuildAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaNavInvokerBox.SetInvokerEnabled
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavInvokerBox::SetInvokerEnabled(bool bEnable)
{
	static auto Func = Class->GetFunction("AthenaNavInvokerBox", "SetInvokerEnabled");

	Params::UAthenaNavInvokerBox_SetInvokerEnabled_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaNavMesh.MoveTiles
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        SourceBox                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntPoint                   TileOffset                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationDeg                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   FillerTilePosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavMesh::MoveTiles(struct FBox& SourceBox, struct FIntPoint& TileOffset, float RotationDeg, struct FVector2D& FillerTilePosition)
{
	static auto Func = Class->GetFunction("AthenaNavMesh", "MoveTiles");

	Params::UAthenaNavMesh_MoveTiles_Params Parms;

	Parms.SourceBox = SourceBox;
	Parms.TileOffset = TileOffset;
	Parms.RotationDeg = RotationDeg;
	Parms.FillerTilePosition = FillerTilePosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaNavMesh.ComputeOffsetForMoveTiles
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     StartPosition                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DesiredPosition                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutEndPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint                   OutTileOffset                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavMesh::ComputeOffsetForMoveTiles(struct FVector& StartPosition, struct FVector& DesiredPosition, struct FVector* OutEndPosition, struct FIntPoint* OutTileOffset)
{
	static auto Func = Class->GetFunction("AthenaNavMesh", "ComputeOffsetForMoveTiles");

	Params::UAthenaNavMesh_ComputeOffsetForMoveTiles_Params Parms;

	Parms.StartPosition = StartPosition;
	Parms.DesiredPosition = DesiredPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutEndPosition != nullptr)
		*OutEndPosition = Parms.OutEndPosition;

	if (OutTileOffset != nullptr)
		*OutTileOffset = Parms.OutTileOffset;

}


// Function FortniteAI.AthenaNavPresenceDetectorComponent.OnNavMeshTilesUpdated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FUpdatedNavMeshTiles        UpdatedNavMeshTiles                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAthenaNavPresenceDetectorComponent::OnNavMeshTilesUpdated(struct FUpdatedNavMeshTiles& UpdatedNavMeshTiles)
{
	static auto Func = Class->GetFunction("AthenaNavPresenceDetectorComponent", "OnNavMeshTilesUpdated");

	Params::UAthenaNavPresenceDetectorComponent_OnNavMeshTilesUpdated_Params Parms;

	Parms.UpdatedNavMeshTiles = UpdatedNavMeshTiles;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaNavPresenceDetectorComponent.HasValidNavMeshLocation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaNavPresenceDetectorComponent::HasValidNavMeshLocation()
{
	static auto Func = Class->GetFunction("AthenaNavPresenceDetectorComponent", "HasValidNavMeshLocation");

	Params::UAthenaNavPresenceDetectorComponent_HasValidNavMeshLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaNavSystem.UnregisterNavGenerationObserver
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavSystem::UnregisterNavGenerationObserver(class USceneComponent* Component)
{
	static auto Func = Class->GetFunction("AthenaNavSystem", "UnregisterNavGenerationObserver");

	Params::UAthenaNavSystem_UnregisterNavGenerationObserver_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaNavSystem.RegisterNavGenerationObserver
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Event                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavSystem::RegisterNavGenerationObserver(class USceneComponent* Component, FDelegateProperty_ Event)
{
	static auto Func = Class->GetFunction("AthenaNavSystem", "RegisterNavGenerationObserver");

	Params::UAthenaNavSystem_RegisterNavGenerationObserver_Params Parms;

	Parms.Component = Component;
	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaNavSystem.IsInitialNavigationLockActive
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaNavSystem::IsInitialNavigationLockActive(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AthenaNavSystem", "IsInitialNavigationLockActive");

	Params::UAthenaNavSystem_IsInitialNavigationLockActive_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortNavPathRendererComponent.UpdatePathsVisualOnClient
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortNavPathRendererComponent::UpdatePathsVisualOnClient()
{
	static auto Func = Class->GetFunction("FortNavPathRendererComponent", "UpdatePathsVisualOnClient");

	Params::UFortNavPathRendererComponent_UpdatePathsVisualOnClient_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortNavPathRendererComponent.OnRep_PathPointsUpdated
// (Final, Native, Private)
// Parameters:

void UFortNavPathRendererComponent::OnRep_PathPointsUpdated()
{
	static auto Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_PathPointsUpdated");

	Params::UFortNavPathRendererComponent_OnRep_PathPointsUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortNavPathRendererComponent.OnRep_PathModeUpdated
// (Final, Native, Private)
// Parameters:

void UFortNavPathRendererComponent::OnRep_PathModeUpdated()
{
	static auto Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_PathModeUpdated");

	Params::UFortNavPathRendererComponent_OnRep_PathModeUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortNavPathRendererComponent.OnRep_ColorIndexUpdated
// (Final, Native, Private)
// Parameters:

void UFortNavPathRendererComponent::OnRep_ColorIndexUpdated()
{
	static auto Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_ColorIndexUpdated");

	Params::UFortNavPathRendererComponent_OnRep_ColorIndexUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortNavPathRendererComponent.DeactivateFX
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortNavPathRendererComponent::DeactivateFX()
{
	static auto Func = Class->GetFunction("FortNavPathRendererComponent", "DeactivateFX");

	Params::UFortNavPathRendererComponent_DeactivateFX_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortZiplineLinkComponent.OnZiplineStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bIsZiplining                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortZiplineLinkComponent::OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn)
{
	static auto Func = Class->GetFunction("FortZiplineLinkComponent", "OnZiplineStateChanged");

	Params::UFortZiplineLinkComponent_OnZiplineStateChanged_Params Parms;

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAITask_ExecuteAbility.OnInjectedHitResultDied
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

void UFortAITask_ExecuteAbility::OnInjectedHitResultDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAITask_ExecuteAbility", "OnInjectedHitResultDied");

	Params::UFortAITask_ExecuteAbility_OnInjectedHitResultDied_Params Parms;

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


// Function FortniteAI.ThreatCloud.OnThreatVolumeChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UThreatCloud::OnThreatVolumeChanged()
{
	static auto Func = Class->GetFunction("ThreatCloud", "OnThreatVolumeChanged");

	Params::UThreatCloud_OnThreatVolumeChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnLightningStrike
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     StartLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBuildingRift*               Rift                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLightningStruckRift                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThreatCloud::OnLightningStrike(struct FVector& StartLocation, struct FVector& EndLocation, class UBuildingRift* Rift, bool bLightningStruckRift)
{
	static auto Func = Class->GetFunction("ThreatCloud", "OnLightningStrike");

	Params::UThreatCloud_OnLightningStrike_Params Parms;

	Parms.StartLocation = StartLocation;
	Parms.EndLocation = EndLocation;
	Parms.Rift = Rift;
	Parms.bLightningStruckRift = bLightningStruckRift;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnCloudStart
// (Event, Public, BlueprintEvent)
// Parameters:

void UThreatCloud::OnCloudStart()
{
	static auto Func = Class->GetFunction("ThreatCloud", "OnCloudStart");

	Params::UThreatCloud_OnCloudStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnCloudHiddenChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCloudsAreHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThreatCloud::OnCloudHiddenChange(bool bCloudsAreHidden)
{
	static auto Func = Class->GetFunction("ThreatCloud", "OnCloudHiddenChange");

	Params::UThreatCloud_OnCloudHiddenChange_Params Parms;

	Parms.bCloudsAreHidden = bCloudsAreHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnCloudDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortThreatDeactivationTypeDeactivationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThreatCloud::OnCloudDeactivated(enum class EFortThreatDeactivationType DeactivationType)
{
	static auto Func = Class->GetFunction("ThreatCloud", "OnCloudDeactivated");

	Params::UThreatCloud_OnCloudDeactivated_Params Parms;

	Parms.DeactivationType = DeactivationType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnCloudActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UThreatCloud::OnCloudActivated()
{
	static auto Func = Class->GetFunction("ThreatCloud", "OnCloudActivated");

	Params::UThreatCloud_OnCloudActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnBeginDeath
// (Event, Protected, BlueprintEvent)
// Parameters:

void UThreatCloud::OnBeginDeath()
{
	static auto Func = Class->GetFunction("ThreatCloud", "OnBeginDeath");

	Params::UThreatCloud_OnBeginDeath_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.ManualLightningFlash
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:

void UThreatCloud::ManualLightningFlash()
{
	static auto Func = Class->GetFunction("ThreatCloud", "ManualLightningFlash");

	Params::UThreatCloud_ManualLightningFlash_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.GetThreatVolume
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UThreatCloud::GetThreatVolume()
{
	static auto Func = Class->GetFunction("ThreatCloud", "GetThreatVolume");

	Params::UThreatCloud_GetThreatVolume_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.MakeBotGroupsTakeEachOtherAsTargets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              GroupA                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UActor*>              GroupB                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EPerceptionState        PerceptionState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetDistance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIBlueprintLibrary::MakeBotGroupsTakeEachOtherAsTargets(TArray<class UActor*>& GroupA, TArray<class UActor*>& GroupB, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "MakeBotGroupsTakeEachOtherAsTargets");

	Params::UAthenaAIBlueprintLibrary_MakeBotGroupsTakeEachOtherAsTargets_Params Parms;

	Parms.GroupA = GroupA;
	Parms.GroupB = GroupB;
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.KillBots
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKillPlayers                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKillNoneParticipants                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              TeamIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      BotOwner                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIBlueprintLibrary::KillBots(class UObject* WorldContextObject, bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex, class UActor* BotOwner)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "KillBots");

	Params::UAthenaAIBlueprintLibrary_KillBots_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.bKillPlayers = bKillPlayers;
	Parms.bKillNoneParticipants = bKillNoneParticipants;
	Parms.TeamIndex = TeamIndex;
	Parms.BotOwner = BotOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.JoinTeam
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 SourceTeamController                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 DestinationTeamController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIBlueprintLibrary::JoinTeam(class UObject* WorldContextObject, class UController* SourceTeamController, class UController* DestinationTeamController)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "JoinTeam");

	Params::UAthenaAIBlueprintLibrary_JoinTeam_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SourceTeamController = SourceTeamController;
	Parms.DestinationTeamController = DestinationTeamController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.IsWeaponSupported
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 FortWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIBlueprintLibrary::IsWeaponSupported(class UObject* WorldContextObject, class UFortWeapon* FortWeapon)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "IsWeaponSupported");

	Params::UAthenaAIBlueprintLibrary_IsWeaponSupported_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortWeapon = FortWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.IsItemDefinitionSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         FortItemDef                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIBlueprintLibrary::IsItemDefinitionSupported(class UObject* WorldContextObject, class UFortItemDefinition* FortItemDef)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "IsItemDefinitionSupported");

	Params::UAthenaAIBlueprintLibrary_IsItemDefinitionSupported_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortItemDef = FortItemDef;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServicePlayerBots
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServicePlayerBots*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServicePlayerBots* UAthenaAIBlueprintLibrary::GetAIServicePlayerBots(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "GetAIServicePlayerBots");

	Params::UAthenaAIBlueprintLibrary_GetAIServicePlayerBots_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceLoot
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServiceLoot*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServiceLoot* UAthenaAIBlueprintLibrary::GetAIServiceLoot(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "GetAIServiceLoot");

	Params::UAthenaAIBlueprintLibrary_GetAIServiceLoot_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceCreativePlayerBots
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServiceCreativePlayerBots*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServiceCreativePlayerBots* UAthenaAIBlueprintLibrary::GetAIServiceCreativePlayerBots(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "GetAIServiceCreativePlayerBots");

	Params::UAthenaAIBlueprintLibrary_GetAIServiceCreativePlayerBots_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIPopulationTracker
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIPopulationTracker*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIPopulationTracker* UAthenaAIBlueprintLibrary::GetAIPopulationTracker(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "GetAIPopulationTracker");

	Params::UAthenaAIBlueprintLibrary_GetAIPopulationTracker_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.AthenaSpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UPawn>           PawnClass                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*               BehaviorTree                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bNoCollisionFail                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Owner                                                            (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawn* UAthenaAIBlueprintLibrary::AthenaSpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class UPawn> PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class UActor* Owner)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "AthenaSpawnAIFromClass");

	Params::UAthenaAIBlueprintLibrary_AthenaSpawnAIFromClass_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PawnClass = PawnClass;
	Parms.BehaviorTree = BehaviorTree;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bNoCollisionFail = bNoCollisionFail;
	Parms.Owner = Owner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.AIPawnFromGAHasLuringPickupAsGoal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxLifetime                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortPickupSpawnSource  RequiredPickupSpawnSource                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIBlueprintLibrary::AIPawnFromGAHasLuringPickupAsGoal(struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayTag& GameplayTag, float MaxLifetime, enum class EFortPickupSpawnSource RequiredPickupSpawnSource)
{
	static auto Func = Class->GetFunction("AthenaAIBlueprintLibrary", "AIPawnFromGAHasLuringPickupAsGoal");

	Params::UAthenaAIBlueprintLibrary_AIPawnFromGAHasLuringPickupAsGoal_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.GameplayTag = GameplayTag;
	Parms.MaxLifetime = MaxLifetime;
	Parms.RequiredPickupSpawnSource = RequiredPickupSpawnSource;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTargetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStealthMeterTargetTime                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAlertStateComponent::SetStealthMeterTargetTime(float InStealthMeterTargetTime)
{
	static auto Func = Class->GetFunction("FortAthenaAlertStateComponent", "SetStealthMeterTargetTime");

	Params::UFortAthenaAlertStateComponent_SetStealthMeterTargetTime_Params Parms;

	Parms.InStealthMeterTargetTime = InStealthMeterTargetTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStealthMeterTarget                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAlertStateComponent::SetStealthMeterTarget(float InStealthMeterTarget)
{
	static auto Func = Class->GetFunction("FortAthenaAlertStateComponent", "SetStealthMeterTarget");

	Params::UFortAthenaAlertStateComponent_SetStealthMeterTarget_Params Parms;

	Parms.InStealthMeterTarget = InStealthMeterTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAlertStateComponent.OnStealthMeterChanged
// (Final, Native, Public)
// Parameters:
// class UFortAthenaAIBotController*  BotController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StealthMeterTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StealthMeterTargetTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAlertStateComponent::OnStealthMeterChanged(class UFortAthenaAIBotController* BotController, float StealthMeterTarget, float StealthMeterTargetTime)
{
	static auto Func = Class->GetFunction("FortAthenaAlertStateComponent", "OnStealthMeterChanged");

	Params::UFortAthenaAlertStateComponent_OnStealthMeterChanged_Params Parms;

	Parms.BotController = BotController;
	Parms.StealthMeterTarget = StealthMeterTarget;
	Parms.StealthMeterTargetTime = StealthMeterTargetTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTargetTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAlertStateComponent::GetStealthMeterTargetTime()
{
	static auto Func = Class->GetFunction("FortAthenaAlertStateComponent", "GetStealthMeterTargetTime");

	Params::UFortAthenaAlertStateComponent_GetStealthMeterTargetTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAlertStateComponent::GetStealthMeterTarget()
{
	static auto Func = Class->GetFunction("FortAthenaAlertStateComponent", "GetStealthMeterTarget");

	Params::UFortAthenaAlertStateComponent_GetStealthMeterTarget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNPCLoopStateComponent.OnOwnerPawnDied
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

void UFortAthenaNPCLoopStateComponent::OnOwnerPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaNPCLoopStateComponent", "OnOwnerPawnDied");

	Params::UFortAthenaNPCLoopStateComponent_OnOwnerPawnDied_Params Parms;

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


// Function FortniteAI.FortAthenaNPCLoopStateComponent.InitLoopState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPawn*                   PawnOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNPCLoopStateComponent::InitLoopState(class UFortPawn* PawnOwner)
{
	static auto Func = Class->GetFunction("FortAthenaNPCLoopStateComponent", "InitLoopState");

	Params::UFortAthenaNPCLoopStateComponent_InitLoopState_Params Parms;

	Parms.PawnOwner = PawnOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerRemoved
// (Final, Native, Public)
// Parameters:
// struct FMarkerID                   MarkerID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::OnServerMarkerRemoved(const struct FMarkerID& MarkerID)
{
	static auto Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnServerMarkerRemoved");

	Params::UFortPawnComponent_AIBotPingCommand_OnServerMarkerRemoved_Params Parms;

	Parms.MarkerID = MarkerID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerAdded
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortWorldMarkerData        MarkerData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData)
{
	static auto Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnServerMarkerAdded");

	Params::UFortPawnComponent_AIBotPingCommand_OnServerMarkerAdded_Params Parms;

	Parms.MarkerData = MarkerData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnAIPingCommand
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPingCommandType        CommandType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::OnAIPingCommand(class UFortPlayerPawn* PlayerPawn, enum class EPingCommandType CommandType)
{
	static auto Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnAIPingCommand");

	Params::UFortPawnComponent_AIBotPingCommand_OnAIPingCommand_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.CommandType = CommandType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.HandleOnNPCUnconvertEvent
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   UnconvertedFortPawn                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUnconvertReason        UnconvertReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::HandleOnNPCUnconvertEvent(class UFortPawn* UnconvertedFortPawn, enum class EUnconvertReason UnconvertReason)
{
	static auto Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "HandleOnNPCUnconvertEvent");

	Params::UFortPawnComponent_AIBotPingCommand_HandleOnNPCUnconvertEvent_Params Parms;

	Parms.UnconvertedFortPawn = UnconvertedFortPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.HandleOnNPCConvertEvent
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   InstigatorPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   ConvertedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::HandleOnNPCConvertEvent(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn)
{
	static auto Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "HandleOnNPCConvertEvent");

	Params::UFortPawnComponent_AIBotPingCommand_HandleOnNPCConvertEvent_Params Parms;

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortPawnComponent_AIFormation.OnUserDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIFormation::OnUserDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortPawnComponent_AIFormation", "OnUserDied");

	Params::UFortPawnComponent_AIFormation_OnUserDied_Params Parms;

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


// Function FortniteAI.FortPawnComponent_AIGroup.RemoveFromCurrentGroup
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortPawnComponent_AIGroup::RemoveFromCurrentGroup()
{
	static auto Func = Class->GetFunction("FortPawnComponent_AIGroup", "RemoveFromCurrentGroup");

	Params::UFortPawnComponent_AIGroup_RemoveFromCurrentGroup_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortPawnComponent_AIGroup.OnGroupMemberDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIGroup::OnGroupMemberDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortPawnComponent_AIGroup", "OnGroupMemberDied");

	Params::UFortPawnComponent_AIGroup_OnGroupMemberDied_Params Parms;

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


// Function FortniteAI.FortAthenaPatrolPath.SetPatrolPathEnabled
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::SetPatrolPathEnabled(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPath", "SetPatrolPathEnabled");

	Params::UFortAthenaPatrolPath_SetPatrolPathEnabled_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaPatrolPath.PatrolPointReached
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortAthenaPatrolPoint*      PathPoint                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               AIInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::PatrolPointReached(class UFortAthenaPatrolPoint* PathPoint, class UAIController* AIInstigator)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPointReached");

	Params::UFortAthenaPatrolPath_PatrolPointReached_Params Parms;

	Parms.PathPoint = PathPoint;
	Parms.AIInstigator = AIInstigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaPatrolPath.PatrolPointFailedToReach
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortAthenaPatrolPoint*      PathPoint                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               AIInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::PatrolPointFailedToReach(class UFortAthenaPatrolPoint* PathPoint, class UAIController* AIInstigator)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPointFailedToReach");

	Params::UFortAthenaPatrolPath_PatrolPointFailedToReach_Params Parms;

	Parms.PathPoint = PathPoint;
	Parms.AIInstigator = AIInstigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaPatrolPath.PatrolPathStopped
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAIController*               AIInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::PatrolPathStopped(class UAIController* AIInstigator)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPathStopped");

	Params::UFortAthenaPatrolPath_PatrolPathStopped_Params Parms;

	Parms.AIInstigator = AIInstigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaPatrolPath.PatrolPathStarted
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAIController*               AIInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::PatrolPathStarted(class UAIController* AIInstigator)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPathStarted");

	Params::UFortAthenaPatrolPath_PatrolPathStarted_Params Parms;

	Parms.AIInstigator = AIInstigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaPatrolPath.OnCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPath", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaPatrolPath_OnCurrentPlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaPatrolPath.GetPatrolPoints
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortAthenaPatrolPoint*>OutPatrolPoints                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::GetPatrolPoints(TArray<class UFortAthenaPatrolPoint*>* OutPatrolPoints)
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPath", "GetPatrolPoints");

	Params::UFortAthenaPatrolPath_GetPatrolPoints_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPatrolPoints != nullptr)
		*OutPatrolPoints = Parms.OutPatrolPoints;

}


// Function FortniteAI.FortAthenaPatrolPath.CanBeUsed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaPatrolPath::CanBeUsed()
{
	static auto Func = Class->GetFunction("FortAthenaPatrolPath", "CanBeUsed");

	Params::UFortAthenaPatrolPath_CanBeUsed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativePatrolPath.SetPatrolHasValidNavMesh
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValidNavMesh                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativePatrolPath::SetPatrolHasValidNavMesh(bool bValidNavMesh)
{
	static auto Func = Class->GetFunction("FortCreativePatrolPath", "SetPatrolHasValidNavMesh");

	Params::UFortCreativePatrolPath_SetPatrolHasValidNavMesh_Params Parms;

	Parms.bValidNavMesh = bValidNavMesh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCreativePatrolPath.HasPatrolValidNavMesh
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCreativePatrolPath::HasPatrolValidNavMesh()
{
	static auto Func = Class->GetFunction("FortCreativePatrolPath", "HasPatrolValidNavMesh");

	Params::UFortCreativePatrolPath_HasPatrolValidNavMesh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotCosmeticData.FindLibraryDataFromName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PartialName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> UFortAthenaAIBotCosmeticData::FindLibraryDataFromName(const class FString& PartialName)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotCosmeticData", "FindLibraryDataFromName");

	Params::UFortAthenaAIBotCosmeticData_FindLibraryDataFromName_Params Parms;

	Parms.PartialName = PartialName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.RetrieveDataTables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UDataTable*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UDataTable*> UFortAthenaAIBotCosmeticLibraryData::RetrieveDataTables()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "RetrieveDataTables");

	Params::UFortAthenaAIBotCosmeticLibraryData_RetrieveDataTables_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.FindDataTableFromAssetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetType                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* UFortAthenaAIBotCosmeticLibraryData::FindDataTableFromAssetType(const class FString& AssetType)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "FindDataTableFromAssetType");

	Params::UFortAthenaAIBotCosmeticLibraryData_FindDataTableFromAssetType_Params Parms;

	Parms.AssetType = AssetType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.FillDataTableValuesFromSourceLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaAIBotCosmeticLibraryData*SourceLibrary                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIBotCosmeticLibraryData::FillDataTableValuesFromSourceLibrary(class UFortAthenaAIBotCosmeticLibraryData* SourceLibrary)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "FillDataTableValuesFromSourceLibrary");

	Params::UFortAthenaAIBotCosmeticLibraryData_FillDataTableValuesFromSourceLibrary_Params Parms;

	Parms.SourceLibrary = SourceLibrary;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.SplitDataArrayByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InAssetNames                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InAssetTypes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      InAssetUsageCounts                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      InAssetTypeSplitIndices                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              CurrentSplitIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutAssetType                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutAssetNames                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      OutAssetUsageCounts                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBotCosmeticBlueprintHelperLibrary::SplitDataArrayByType(TArray<class FString>& InAssetNames, TArray<class FString>& InAssetTypes, TArray<int32>& InAssetUsageCounts, TArray<int32>& InAssetTypeSplitIndices, int32 CurrentSplitIndex, class FString* OutAssetType, TArray<class FString>* OutAssetNames, TArray<int32>* OutAssetUsageCounts)
{
	static auto Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "SplitDataArrayByType");

	Params::UBotCosmeticBlueprintHelperLibrary_SplitDataArrayByType_Params Parms;

	Parms.InAssetNames = InAssetNames;
	Parms.InAssetTypes = InAssetTypes;
	Parms.InAssetUsageCounts = InAssetUsageCounts;
	Parms.InAssetTypeSplitIndices = InAssetTypeSplitIndices;
	Parms.CurrentSplitIndex = CurrentSplitIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAssetType != nullptr)
		*OutAssetType = Parms.OutAssetType;

	if (OutAssetNames != nullptr)
		*OutAssetNames = Parms.OutAssetNames;

	if (OutAssetUsageCounts != nullptr)
		*OutAssetUsageCounts = Parms.OutAssetUsageCounts;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.OpenCSVFileDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      TitleDetails                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowMultipleFiles                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UBotCosmeticBlueprintHelperLibrary::OpenCSVFileDialog(const class FString& TitleDetails, bool bAllowMultipleFiles)
{
	static auto Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "OpenCSVFileDialog");

	Params::UBotCosmeticBlueprintHelperLibrary_OpenCSVFileDialog_Params Parms;

	Parms.TitleDetails = TitleDetails;
	Parms.bAllowMultipleFiles = bAllowMultipleFiles;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.LoadDataFromCSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ForbiddenAssetNames                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ForbiddenAssetPrefix                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              AssetNames                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              AssetTypes                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      AssetUsageCounts                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      AssetTypeSplitIndices                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBotCosmeticBlueprintHelperLibrary::LoadDataFromCSV(const class FString& FilePath, TArray<class FString>& ForbiddenAssetNames, TArray<class FString>& ForbiddenAssetPrefix, TArray<class FString>* AssetNames, TArray<class FString>* AssetTypes, TArray<int32>* AssetUsageCounts, TArray<int32>* AssetTypeSplitIndices)
{
	static auto Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "LoadDataFromCSV");

	Params::UBotCosmeticBlueprintHelperLibrary_LoadDataFromCSV_Params Parms;

	Parms.FilePath = FilePath;
	Parms.ForbiddenAssetNames = ForbiddenAssetNames;
	Parms.ForbiddenAssetPrefix = ForbiddenAssetPrefix;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AssetNames != nullptr)
		*AssetNames = Parms.AssetNames;

	if (AssetTypes != nullptr)
		*AssetTypes = Parms.AssetTypes;

	if (AssetUsageCounts != nullptr)
		*AssetUsageCounts = Parms.AssetUsageCounts;

	if (AssetTypeSplitIndices != nullptr)
		*AssetTypeSplitIndices = Parms.AssetTypeSplitIndices;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.GenerateWeightedCSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AssetTypeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              AssetNames                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      AssetWeight                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CSV                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBotCosmeticBlueprintHelperLibrary::GenerateWeightedCSV(const class FString& AssetTypeName, TArray<class FString>& AssetNames, TArray<int32>& AssetWeight, class FString* CSV)
{
	static auto Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "GenerateWeightedCSV");

	Params::UBotCosmeticBlueprintHelperLibrary_GenerateWeightedCSV_Params Parms;

	Parms.AssetTypeName = AssetTypeName;
	Parms.AssetNames = AssetNames;
	Parms.AssetWeight = AssetWeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (CSV != nullptr)
		*CSV = Parms.CSV;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.ExportDataTableToSourceCSV
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanCheckOutFile                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBotCosmeticBlueprintHelperLibrary::ExportDataTableToSourceCSV(class UDataTable* DataTable, bool bCanCheckOutFile)
{
	static auto Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "ExportDataTableToSourceCSV");

	Params::UBotCosmeticBlueprintHelperLibrary_ExportDataTableToSourceCSV_Params Parms;

	Parms.DataTable = DataTable;
	Parms.bCanCheckOutFile = bCanCheckOutFile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotCustomizationData.SetCharacterCustomizationFromPlayerPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerPawn*             InFortPawn                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotCustomizationData::SetCharacterCustomizationFromPlayerPawn(class UFortPlayerPawn* InFortPawn)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotCustomizationData", "SetCharacterCustomizationFromPlayerPawn");

	Params::UFortAthenaAIBotCustomizationData_SetCharacterCustomizationFromPlayerPawn_Params Parms;

	Parms.InFortPawn = InFortPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotEvaluator_Movement.OnCurrentUnstuckSteeringAttemptFinished
// (Final, Native, Private)
// Parameters:
// enum class EBotUnstuckSteeringReasonUnstuckSteeringReason                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Movement::OnCurrentUnstuckSteeringAttemptFinished(enum class EBotUnstuckSteeringReason UnstuckSteeringReason)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Movement", "OnCurrentUnstuckSteeringAttemptFinished");

	Params::UFortAthenaAIBotEvaluator_Movement_OnCurrentUnstuckSteeringAttemptFinished_Params Parms;

	Parms.UnstuckSteeringReason = UnstuckSteeringReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotEvaluator_Movement.EvaluateIsolatedIslandSteering
// (Final, Native, Private)
// Parameters:

void UFortAthenaAIBotEvaluator_Movement::EvaluateIsolatedIslandSteering()
{
	static auto Func = Class->GetFunction("FortAthenaAIBotEvaluator_Movement", "EvaluateIsolatedIslandSteering");

	Params::UFortAthenaAIBotEvaluator_Movement_EvaluateIsolatedIslandSteering_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIBotPathFollowingComponent.HandlePawnTeleported
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   TeleportedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotPathFollowingComponent::HandlePawnTeleported(class UFortPawn* TeleportedPawn)
{
	static auto Func = Class->GetFunction("FortAthenaAIBotPathFollowingComponent", "HandlePawnTeleported");

	Params::UFortAthenaAIBotPathFollowingComponent_HandlePawnTeleported_Params Parms;

	Parms.TeleportedPawn = TeleportedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAILODComponent.OnRep_CurrentFortAILODLevel
// (Final, Native, Private)
// Parameters:

void UFortAthenaAILODComponent::OnRep_CurrentFortAILODLevel()
{
	static auto Func = Class->GetFunction("FortAthenaAILODComponent", "OnRep_CurrentFortAILODLevel");

	Params::UFortAthenaAILODComponent_OnRep_CurrentFortAILODLevel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIObjectTracker.BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFortAthenaAIObjectTrackerQuerySimplifiedSimplifiedQuery                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UActor*                      OptionalQuerier                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAthenaAIObjectTrackerQueryReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFortAthenaAIObjectTrackerQuery UFortAthenaAIObjectTracker::BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified(struct FFortAthenaAIObjectTrackerQuerySimplified& SimplifiedQuery, class UActor* OptionalQuerier)
{
	static auto Func = Class->GetFunction("FortAthenaAIObjectTracker", "BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified");

	Params::UFortAthenaAIObjectTracker_BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified_Params Parms;

	Parms.SimplifiedQuery = SimplifiedQuery;
	Parms.OptionalQuerier = OptionalQuerier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase.SetChooseClosestSmartObject
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInChooseClosestSmartObject                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_SmartObjectBase::SetChooseClosestSmartObject(bool bInChooseClosestSmartObject)
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_SmartObjectBase", "SetChooseClosestSmartObject");

	Params::UFortAthenaAIRuntimeParameters_SmartObjectBase_SetChooseClosestSmartObject_Params Parms;

	Parms.bInChooseClosestSmartObject = bInChooseClosestSmartObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase.GetChooseClosestSmartObject
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_SmartObjectBase::GetChooseClosestSmartObject()
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_SmartObjectBase", "GetChooseClosestSmartObject");

	Params::UFortAthenaAIRuntimeParameters_SmartObjectBase_GetChooseClosestSmartObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponentClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAISpawnerDataComponent>NewComponentSubClass                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::OverrideComponentClass(TSubclassOf<class UFortAthenaAISpawnerDataComponent> NewComponentSubClass)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "OverrideComponentClass");

	Params::UFortAthenaAISpawnerDataComponentList_OverrideComponentClass_Params Parms;

	Parms.NewComponentSubClass = NewComponentSubClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaAISpawnerDataComponent*NewComponent                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::OverrideComponent(class UFortAthenaAISpawnerDataComponent* NewComponent)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "OverrideComponent");

	Params::UFortAthenaAISpawnerDataComponentList_OverrideComponent_Params Parms;

	Parms.NewComponent = NewComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetOrCreateComponentClassForModification
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ComponentOuter                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAthenaAISpawnerDataComponent>ClassToClone                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent* UFortAthenaAISpawnerDataComponentList::GetOrCreateComponentClassForModification(class UObject* ComponentOuter, TSubclassOf<class UFortAthenaAISpawnerDataComponent> ClassToClone)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "GetOrCreateComponentClassForModification");

	Params::UFortAthenaAISpawnerDataComponentList_GetOrCreateComponentClassForModification_Params Parms;

	Parms.ComponentOuter = ComponentOuter;
	Parms.ClassToClone = ClassToClone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UFortAthenaAISpawnerDataComponent*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortAthenaAISpawnerDataComponent*> UFortAthenaAISpawnerDataComponentList::GetList()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "GetList");

	Params::UFortAthenaAISpawnerDataComponentList_GetList_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagationDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFullTeamAwarenessMaxDistance                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFullTeamAwarenessPropagationDistance(float InFullTeamAwarenessMaxDistance)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFullTeamAwarenessPropagationDistance");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFullTeamAwarenessPropagationDistance_Params Parms;

	Parms.InFullTeamAwarenessMaxDistance = InFullTeamAwarenessMaxDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInFullTeamAwarenessPropagation                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFullTeamAwarenessPropagation(bool bInFullTeamAwarenessPropagation)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFullTeamAwarenessPropagation");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFullTeamAwarenessPropagation_Params Parms;

	Parms.bInFullTeamAwarenessPropagation = bInFullTeamAwarenessPropagation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFactionTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       NewTags                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFactionTags(struct FGameplayTagContainer& NewTags)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFactionTags");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFactionTags_Params Parms;

	Parms.NewTags = NewTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetAwarenessPropagationIsBasedOnAlertLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAwarenessPropagationIsBasedOnAlertLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetAwarenessPropagationIsBasedOnAlertLevel(bool bInAwarenessPropagationIsBasedOnAlertLevel)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetAwarenessPropagationIsBasedOnAlertLevel");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_SetAwarenessPropagationIsBasedOnAlertLevel_Params Parms;

	Parms.bInAwarenessPropagationIsBasedOnAlertLevel = bInAwarenessPropagationIsBasedOnAlertLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessPropagation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFullTeamAwarenessPropagation()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFullTeamAwarenessPropagation");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFullTeamAwarenessPropagation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessMaxDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFullTeamAwarenessMaxDistance()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFullTeamAwarenessMaxDistance");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFullTeamAwarenessMaxDistance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFactionTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFactionTag()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFactionTag");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFactionTag_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetAwarenessPropagationIsBasedOnAlertLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AffiliationBase::GetAwarenessPropagationIsBasedOnAlertLevel()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetAwarenessPropagationIsBasedOnAlertLevel");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_GetAwarenessPropagationIsBasedOnAlertLevel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.SetOverrideTeamIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InOverrideTeamIdx                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotAffiliation::SetOverrideTeamIndex(int32 InOverrideTeamIdx)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "SetOverrideTeamIndex");

	Params::UFortAthenaAISpawnerDataComponent_AIBotAffiliation_SetOverrideTeamIndex_Params Parms;

	Parms.InOverrideTeamIdx = InOverrideTeamIdx;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetTeamID
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              OutTeamId                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetTeamID(int32* OutTeamId)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "GetTeamID");

	Params::UFortAthenaAISpawnerDataComponent_AIBotAffiliation_GetTeamID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutTeamId != nullptr)
		*OutTeamId = Parms.OutTeamId;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetSquadID
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetSquadID(int32* OutSquadId)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "GetSquadID");

	Params::UFortAthenaAISpawnerDataComponent_AIBotAffiliation_GetSquadID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.IsBehaviorTreeBranchActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_BehaviorTreeControl::IsBehaviorTreeBranchActive(enum class EBehaviorTreeBranches Behavior)
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "IsBehaviorTreeBranchActive");

	Params::UFortAthenaAIRuntimeParameters_BehaviorTreeControl_IsBehaviorTreeBranchActive_Params Parms;

	Parms.Behavior = Behavior;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.EnableBehaviorTreeBranch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_BehaviorTreeControl::EnableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior)
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "EnableBehaviorTreeBranch");

	Params::UFortAthenaAIRuntimeParameters_BehaviorTreeControl_EnableBehaviorTreeBranch_Params Parms;

	Parms.Behavior = Behavior;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.DisableBehaviorTreeBranch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_BehaviorTreeControl::DisableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior)
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "DisableBehaviorTreeBranch");

	Params::UFortAthenaAIRuntimeParameters_BehaviorTreeControl_DisableBehaviorTreeBranch_Params Parms;

	Parms.Behavior = Behavior;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.IsBehaviorTreeBranchActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AIBotBehavior::IsBehaviorTreeBranchActive(enum class EBehaviorTreeBranches Behavior)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "IsBehaviorTreeBranchActive");

	Params::UFortAthenaAISpawnerDataComponent_AIBotBehavior_IsBehaviorTreeBranchActive_Params Parms;

	Parms.Behavior = Behavior;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.EnableBehaviorTreeBranch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotBehavior::EnableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "EnableBehaviorTreeBranch");

	Params::UFortAthenaAISpawnerDataComponent_AIBotBehavior_EnableBehaviorTreeBranch_Params Parms;

	Parms.Behavior = Behavior;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.DisableBehaviorTreeBranch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotBehavior::DisableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "DisableBehaviorTreeBranch");

	Params::UFortAthenaAISpawnerDataComponent_AIBotBehavior_DisableBehaviorTreeBranch_Params Parms;

	Parms.Behavior = Behavior;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase.GetFallbackTag
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                OutFallbackTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_CosmeticBase::GetFallbackTag(struct FGameplayTag* OutFallbackTag)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticBase", "GetFallbackTag");

	Params::UFortAthenaAISpawnerDataComponent_CosmeticBase_GetFallbackTag_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFallbackTag != nullptr)
		*OutFallbackTag = Parms.OutFallbackTag;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetLoadout
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortAthenaLoadout          OutLoadout                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetLoadout(struct FFortAthenaLoadout* OutLoadout)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetLoadout");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetLoadout_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLoadout != nullptr)
		*OutLoadout = Parms.OutLoadout;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetDances
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAthenaDanceItemDefinition*>Dances                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UFortAthenaAIBotController*  BotController                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetDances(TArray<class UAthenaDanceItemDefinition*>* Dances, class UFortAthenaAIBotController* BotController)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetDances");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetDances_Params Parms;

	Parms.BotController = BotController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Dances != nullptr)
		*Dances = Parms.Dances;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetCustomCharacterParts
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UCustomCharacterPart*>OutCustomCharacterParts                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetCustomCharacterParts(TArray<class UCustomCharacterPart*>* OutCustomCharacterParts)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetCustomCharacterParts");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetCustomCharacterParts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutCustomCharacterParts != nullptr)
		*OutCustomCharacterParts = Parms.OutCustomCharacterParts;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAnimBPOverride
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UAnimInstance>   OutAnimBPOverride                                                (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutPriority                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetAnimBPOverride(TSubclassOf<class UAnimInstance>* OutAnimBPOverride, int32* OutPriority)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetAnimBPOverride");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetAnimBPOverride_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAnimBPOverride != nullptr)
		*OutAnimBPOverride = Parms.OutAnimBPOverride;

	if (OutPriority != nullptr)
		*OutPriority = Parms.OutPriority;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAllLoadouts
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortAthenaLoadout>  OutLoadouts                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetAllLoadouts(TArray<struct FFortAthenaLoadout>* OutLoadouts)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetAllLoadouts");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetAllLoadouts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLoadouts != nullptr)
		*OutLoadouts = Parms.OutLoadouts;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.AddCosmeticOverrideItemDef
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaCosmeticItemDefinition*InCosmeticItemToPreview                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::AddCosmeticOverrideItemDef(class UAthenaCosmeticItemDefinition* InCosmeticItemToPreview)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "AddCosmeticOverrideItemDef");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_AddCosmeticOverrideItemDef_Params Parms;

	Parms.InCosmeticItemToPreview = InCosmeticItemToPreview;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenUnconverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInForceKillWhenUnconverted                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_AIConvert::SetForceKillWhenUnconverted(bool bInForceKillWhenUnconverted)
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetForceKillWhenUnconverted");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_SetForceKillWhenUnconverted_Params Parms;

	Parms.bInForceKillWhenUnconverted = bInForceKillWhenUnconverted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenConverterDies
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInForceKillWhenConverterDies                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_AIConvert::SetForceKillWhenConverterDies(bool bInForceKillWhenConverterDies)
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetForceKillWhenConverterDies");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_SetForceKillWhenConverterDies_Params Parms;

	Parms.bInForceKillWhenConverterDies = bInForceKillWhenConverterDies;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConvertedFromDBNO
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanBeConvertedFromDBNO                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_AIConvert::SetCanBeConvertedFromDBNO(bool bInCanBeConvertedFromDBNO)
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetCanBeConvertedFromDBNO");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_SetCanBeConvertedFromDBNO_Params Parms;

	Parms.bInCanBeConvertedFromDBNO = bInCanBeConvertedFromDBNO;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanBeConverted                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_AIConvert::SetCanBeConverted(bool bInCanBeConverted)
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetCanBeConverted");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_SetCanBeConverted_Params Parms;

	Parms.bInCanBeConverted = bInCanBeConverted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetPickupTagConvertInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPickupTagConvertInfo>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FPickupTagConvertInfo> UFortAthenaAIRuntimeParameters_AIConvert::GetPickupTagConvertInfos()
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetPickupTagConvertInfos");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetPickupTagConvertInfos_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenUnconverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_AIConvert::GetForceKillWhenUnconverted()
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetForceKillWhenUnconverted");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetForceKillWhenUnconverted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenConverterDies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_AIConvert::GetForceKillWhenConverterDies()
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetForceKillWhenConverterDies");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetForceKillWhenConverterDies_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConvertedFromDBNO
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_AIConvert::GetCanBeConvertedFromDBNO()
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetCanBeConvertedFromDBNO");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetCanBeConvertedFromDBNO_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_AIConvert::GetCanBeConverted()
{
	static auto Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetCanBeConverted");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetCanBeConverted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.ShouldOverrideGlobalSpeedMultiplier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_GameplayBase::ShouldOverrideGlobalSpeedMultiplier()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "ShouldOverrideGlobalSpeedMultiplier");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_ShouldOverrideGlobalSpeedMultiplier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCopyConverterSpecificRelations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCopyConverterSpecificRelations                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayBase::SetCopyConverterSpecificRelations(bool bInCopyConverterSpecificRelations)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "SetCopyConverterSpecificRelations");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_SetCopyConverterSpecificRelations_Params Parms;

	Parms.bInCopyConverterSpecificRelations = bInCopyConverterSpecificRelations;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCanBeConverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanBeConverted                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayBase::SetCanBeConverted(bool bInCanBeConverted)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "SetCanBeConverted");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_SetCanBeConverted_Params Parms;

	Parms.bInCanBeConverted = bInCanBeConverted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.PostOnSpawnedBP
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UPawn*                       PawnAI                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayBase::PostOnSpawnedBP(class UPawn* PawnAI)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "PostOnSpawnedBP");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_PostOnSpawnedBP_Params Parms;

	Parms.PawnAI = PawnAI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.GetGlobalSpeedMultiplier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_GameplayBase::GetGlobalSpeedMultiplier()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "GetGlobalSpeedMultiplier");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_GetGlobalSpeedMultiplier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetNameSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBotNamingMode          InNamingMode                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InName                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInAddPlayerIDSuffix                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetNameSettings(enum class EBotNamingMode InNamingMode, const class FString& InName, bool bInAddPlayerIDSuffix)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetNameSettings");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetNameSettings_Params Parms;

	Parms.InNamingMode = InNamingMode;
	Parms.InName = InName;
	Parms.bInAddPlayerIDSuffix = bInAddPlayerIDSuffix;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashOuterRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLeashOuterRadius                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashOuterRadius(float InLeashOuterRadius)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashOuterRadius");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashOuterRadius_Params Parms;

	Parms.InLeashOuterRadius = InLeashOuterRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InLeashLocation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashLocation(const struct FVector& InLeashLocation)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashLocation");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashLocation_Params Parms;

	Parms.InLeashLocation = InLeashLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashInnerRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLeashInnerRadius                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashInnerRadius(float InLeashInnerRadius)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashInnerRadius");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashInnerRadius_Params Parms;

	Parms.InLeashInnerRadius = InLeashInnerRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetAssociatedPatrolPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaPatrolPath*       InAssociatedPatrolPath                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetAssociatedPatrolPath(class UFortAthenaPatrolPath* InAssociatedPatrolPath)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetAssociatedPatrolPath");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetAssociatedPatrolPath_Params Parms;

	Parms.InAssociatedPatrolPath = InAssociatedPatrolPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.SetLooseTagsToApplyToPawn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InGameplayTagContainer                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::SetLooseTagsToApplyToPawn(struct FGameplayTagContainer& InGameplayTagContainer)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "SetLooseTagsToApplyToPawn");

	Params::UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_SetLooseTagsToApplyToPawn_Params Parms;

	Parms.InGameplayTagContainer = InGameplayTagContainer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetLooseTagsToApplyToPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetLooseTagsToApplyToPawn()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetLooseTagsToApplyToPawn");

	Params::UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetLooseTagsToApplyToPawn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayEffects
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FInitialGameplayEffectInfo>OutGEs                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetInitialGameplayEffects(TArray<struct FInitialGameplayEffectInfo>* OutGEs)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetInitialGameplayEffects");

	Params::UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetInitialGameplayEffects_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutGEs != nullptr)
		*OutGEs = Parms.OutGEs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayAbilities
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UFortAbilitySet*>     OutGASets                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetInitialGameplayAbilities(TArray<class UFortAbilitySet*>* OutGASets)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetInitialGameplayAbilities");

	Params::UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetInitialGameplayAbilities_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutGASets != nullptr)
		*OutGASets = Parms.OutGASets;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.SetInventoryItems
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FItemAndCount>       InItems                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_InventoryBase::SetInventoryItems(TArray<struct FItemAndCount>& InItems)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_InventoryBase", "SetInventoryItems");

	Params::UFortAthenaAISpawnerDataComponent_InventoryBase_SetInventoryItems_Params Parms;

	Parms.InItems = InItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.GetInventoryItems
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemAndCount>       OutList                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_InventoryBase::GetInventoryItems(TArray<struct FItemAndCount>* OutList)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_InventoryBase", "GetInventoryItems");

	Params::UFortAthenaAISpawnerDataComponent_InventoryBase_GetInventoryItems_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutList != nullptr)
		*OutList = Parms.OutList;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase.SetVisibilityRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSightRadius                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LoseSightRadius                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInRestrictOverrideToUnaware                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_PerceptionBase::SetVisibilityRange(float InSightRadius, float LoseSightRadius, bool bInRestrictOverrideToUnaware)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_PerceptionBase", "SetVisibilityRange");

	Params::UFortAthenaAISpawnerDataComponent_PerceptionBase_SetVisibilityRange_Params Parms;

	Parms.InSightRadius = InSightRadius;
	Parms.LoseSightRadius = LoseSightRadius;
	Parms.bInRestrictOverrideToUnaware = bInRestrictOverrideToUnaware;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.ShouldUseMatchMMRToOverrideSkillLevel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_SkillsetBase::ShouldUseMatchMMRToOverrideSkillLevel()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "ShouldUseMatchMMRToOverrideSkillLevel");

	Params::UFortAthenaAISpawnerDataComponent_SkillsetBase_ShouldUseMatchMMRToOverrideSkillLevel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.GetSkillSets
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> UFortAthenaAISpawnerDataComponent_SkillsetBase::GetSkillSets()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "GetSkillSets");

	Params::UFortAthenaAISpawnerDataComponent_SkillsetBase_GetSkillSets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.GetSkill
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SkillsetBase::GetSkill()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "GetSkill");

	Params::UFortAthenaAISpawnerDataComponent_SkillsetBase_GetSkill_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset.SetSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSKill                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotSkillset::SetSkill(float InSKill)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotSkillset", "SetSkill");

	Params::UFortAthenaAISpawnerDataComponent_AIBotSkillset_SetSkill_Params Parms;

	Parms.InSKill = InSKill;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryDataIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaAISpawnerDataComponent_CosmeticLibrary::GetAICosmeticLibraryDataIndex()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticLibrary", "GetAICosmeticLibraryDataIndex");

	Params::UFortAthenaAISpawnerDataComponent_CosmeticLibrary_GetAICosmeticLibraryDataIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAIBotCosmeticLibraryData*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAIBotCosmeticLibraryData* UFortAthenaAISpawnerDataComponent_CosmeticLibrary::GetAICosmeticLibraryData()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticLibrary", "GetAICosmeticLibraryData");

	Params::UFortAthenaAISpawnerDataComponent_CosmeticLibrary_GetAICosmeticLibraryData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.ShouldSpawnInAir
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldSpawnInAir()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "ShouldSpawnInAir");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_ShouldSpawnInAir_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.ShouldCheckForOverlaps
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldCheckForOverlaps()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "ShouldCheckForOverlaps");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_ShouldCheckForOverlaps_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetSpawnTracePadding
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnTracePadding()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetSpawnTracePadding");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetSpawnTracePadding_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetSpawnerDataSpawnedAsChildren
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<TSubclassOf<class UFortAthenaAISpawnerData>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSubclassOf<class UFortAthenaAISpawnerData>> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnerDataSpawnedAsChildren()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetSpawnerDataSpawnedAsChildren");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetSpawnerDataSpawnedAsChildren_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetPawnStatHandle
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetPawnStatHandle()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetPawnStatHandle");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetPawnStatHandle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetPawnClass
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UPawn>           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UPawn> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetPawnClass()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetPawnClass");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetPawnClass_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceStartHeight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceStartHeight()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceStartHeight");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceStartHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceSphereRadius
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceSphereRadius()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceSphereRadius");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceSphereRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceEndHeight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceEndHeight()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceEndHeight");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceEndHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetAIControllerClass
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAIController>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UAIController> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetAIControllerClass()
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetAIControllerClass");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetAIControllerClass_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaLeashComponent.SetLeashRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRadius                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLeashComponent::SetLeashRadius(float NewRadius)
{
	static auto Func = Class->GetFunction("FortAthenaLeashComponent", "SetLeashRadius");

	Params::UFortAthenaLeashComponent_SetLeashRadius_Params Parms;

	Parms.NewRadius = NewRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaLeashComponent.IsInsideLeash
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLeashComponent::IsInsideLeash(struct FVector& Location)
{
	static auto Func = Class->GetFunction("FortAthenaLeashComponent", "IsInsideLeash");

	Params::UFortAthenaLeashComponent_IsInsideLeash_Params Parms;

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaLeashComponent.GetLeashRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaLeashComponent::GetLeashRadius()
{
	static auto Func = Class->GetFunction("FortAthenaLeashComponent", "GetLeashRadius");

	Params::UFortAthenaLeashComponent_GetLeashRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaLeashComponent.GetLeashCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortAthenaLeashComponent::GetLeashCenter()
{
	static auto Func = Class->GetFunction("FortAthenaLeashComponent", "GetLeashCenter");

	Params::UFortAthenaLeashComponent_GetLeashCenter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaLocalGameplayBehavior.OnExecute
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      Activator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLocalGameplayBehavior::OnExecute(class UActor* Activator)
{
	static auto Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "OnExecute");

	Params::UFortAthenaLocalGameplayBehavior_OnExecute_Params Parms;

	Parms.Activator = Activator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaLocalGameplayBehavior.OnAbort
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAthenaLocalGameplayBehavior::OnAbort()
{
	static auto Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "OnAbort");

	Params::UFortAthenaLocalGameplayBehavior_OnAbort_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaLocalGameplayBehavior.FinishExecute
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLocalGameplayBehavior::FinishExecute()
{
	static auto Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "FinishExecute");

	Params::UFortAthenaLocalGameplayBehavior_FinishExecute_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaNpcGalileoComponent.SetPatrolPath
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             NewPatrolPath                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaNpcGalileoComponent::SetPatrolPath(TArray<struct FVector>& NewPatrolPath)
{
	static auto Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "SetPatrolPath");

	Params::UFortAthenaNpcGalileoComponent_SetPatrolPath_Params Parms;

	Parms.NewPatrolPath = NewPatrolPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaNpcGalileoComponent.SetCommunicationGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortAthenaAIBotController*>AIBotControllerList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaNpcGalileoComponent::SetCommunicationGroup(TArray<class UFortAthenaAIBotController*>& AIBotControllerList)
{
	static auto Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "SetCommunicationGroup");

	Params::UFortAthenaNpcGalileoComponent_SetCommunicationGroup_Params Parms;

	Parms.AIBotControllerList = AIBotControllerList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaNpcGalileoComponent.OnPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNpcGalileoComponent::OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "OnPawnDied");

	Params::UFortAthenaNpcGalileoComponent_OnPawnDied_Params Parms;

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


// Function FortniteAI.FortAthenaNpcGalileoComponent.GetPatrolPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UFortAthenaNpcGalileoComponent::GetPatrolPath()
{
	static auto Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "GetPatrolPath");

	Params::UFortAthenaNpcGalileoComponent_GetPatrolPath_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcGalileoComponent.GetCommunicationGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UFortAthenaAIBotController*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UFortAthenaAIBotController*> UFortAthenaNpcGalileoComponent::GetCommunicationGroup()
{
	static auto Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "GetCommunicationGroup");

	Params::UFortAthenaNpcGalileoComponent_GetCommunicationGroup_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.UpdateCurrentDestinationToNearestNextPoint
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaNpcPatrollingComponent::UpdateCurrentDestinationToNearestNextPoint()
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "UpdateCurrentDestinationToNearestNextPoint");

	Params::UFortAthenaNpcPatrollingComponent_UpdateCurrentDestinationToNearestNextPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.SetPatrolPath
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaPatrolPath*       NewPatrolPath                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOrientationAlreadyRandomized                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNpcPatrollingComponent::SetPatrolPath(class UFortAthenaPatrolPath* NewPatrolPath, bool bOrientationAlreadyRandomized)
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "SetPatrolPath");

	Params::UFortAthenaNpcPatrollingComponent_SetPatrolPath_Params Parms;

	Parms.NewPatrolPath = NewPatrolPath;
	Parms.bOrientationAlreadyRandomized = bOrientationAlreadyRandomized;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.SelectNextPatrolPoint
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaNpcPatrollingComponent::SelectNextPatrolPoint()
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "SelectNextPatrolPoint");

	Params::UFortAthenaNpcPatrollingComponent_SelectNextPatrolPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.RemovePatrolPath
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaNpcPatrollingComponent::RemovePatrolPath()
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "RemovePatrolPath");

	Params::UFortAthenaNpcPatrollingComponent_RemovePatrolPath_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.OnPatrolPathStatusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bEnableState                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNpcPatrollingComponent::OnPatrolPathStatusChanged(bool bEnableState)
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "OnPatrolPathStatusChanged");

	Params::UFortAthenaNpcPatrollingComponent_OnPatrolPathStatusChanged_Params Parms;

	Parms.bEnableState = bEnableState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.IsPatrollingEnable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaNpcPatrollingComponent::IsPatrollingEnable()
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "IsPatrollingEnable");

	Params::UFortAthenaNpcPatrollingComponent_IsPatrollingEnable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.IsCurrentPatrolPointAnEndPoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaNpcPatrollingComponent::IsCurrentPatrolPointAnEndPoint()
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "IsCurrentPatrolPointAnEndPoint");

	Params::UFortAthenaNpcPatrollingComponent_IsCurrentPatrolPointAnEndPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPointsCount
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaNpcPatrollingComponent::GetPatrolPointsCount()
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetPatrolPointsCount");

	Params::UFortAthenaNpcPatrollingComponent_GetPatrolPointsCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaPatrolPath*       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaPatrolPath* UFortAthenaNpcPatrollingComponent::GetPatrolPath()
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetPatrolPath");

	Params::UFortAthenaNpcPatrollingComponent_GetPatrolPath_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetCurrentPatrolPoint
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaPatrolPoint*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaPatrolPoint* UFortAthenaNpcPatrollingComponent::GetCurrentPatrolPoint()
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetCurrentPatrolPoint");

	Params::UFortAthenaNpcPatrollingComponent_GetCurrentPatrolPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.FindAndSetDynamicPatrolPath
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortAthenaAIObjectTrackerQueryFindQuery                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOrientationAlreadyRandomized                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExcludeCurrentlyUsedPatrolPath                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaNpcPatrollingComponent::FindAndSetDynamicPatrolPath(struct FFortAthenaAIObjectTrackerQuery& FindQuery, bool bOrientationAlreadyRandomized, bool bExcludeCurrentlyUsedPatrolPath)
{
	static auto Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "FindAndSetDynamicPatrolPath");

	Params::UFortAthenaNpcPatrollingComponent_FindAndSetDynamicPatrolPath_Params Parms;

	Parms.FindQuery = FindQuery;
	Parms.bOrientationAlreadyRandomized = bOrientationAlreadyRandomized;
	Parms.bExcludeCurrentlyUsedPatrolPath = bExcludeCurrentlyUsedPatrolPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPerceptionStimuliSourceComponent.OnOwnerTeamIndexChanged
// (Final, Native, Private)
// Parameters:

void UAthenaAIPerceptionStimuliSourceComponent::OnOwnerTeamIndexChanged()
{
	static auto Func = Class->GetFunction("AthenaAIPerceptionStimuliSourceComponent", "OnOwnerTeamIndexChanged");

	Params::UAthenaAIPerceptionStimuliSourceComponent_OnOwnerTeamIndexChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.UnregisterCallbacksForOverlap
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortCollisionResponseSwapperComponent::UnregisterCallbacksForOverlap()
{
	static auto Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "UnregisterCallbacksForOverlap");

	Params::UFortCollisionResponseSwapperComponent_UnregisterCallbacksForOverlap_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.RestoreCollisionResponses
// (Final, Native, Protected)
// Parameters:

void UFortCollisionResponseSwapperComponent::RestoreCollisionResponses()
{
	static auto Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "RestoreCollisionResponses");

	Params::UFortCollisionResponseSwapperComponent_RestoreCollisionResponses_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.RegisterCallbacksForOverlap
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InCollisionPrimitiveComponent                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         InOverlapPrimitiveComponent                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollisionResponseSwapperComponent::RegisterCallbacksForOverlap(class UPrimitiveComponent* InCollisionPrimitiveComponent, class UPrimitiveComponent* InOverlapPrimitiveComponent)
{
	static auto Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "RegisterCallbacksForOverlap");

	Params::UFortCollisionResponseSwapperComponent_RegisterCallbacksForOverlap_Params Parms;

	Parms.InCollisionPrimitiveComponent = InCollisionPrimitiveComponent;
	Parms.InOverlapPrimitiveComponent = InOverlapPrimitiveComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.HandleEndOverlap
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollisionResponseSwapperComponent::HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "HandleEndOverlap");

	Params::UFortCollisionResponseSwapperComponent_HandleEndOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.HandleBeginOverlap
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortCollisionResponseSwapperComponent::HandleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "HandleBeginOverlap");

	Params::UFortCollisionResponseSwapperComponent_HandleBeginOverlap_Params Parms;

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


// Function FortniteAI.AthenaAIPopulationTracker.OnFortPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIPopulationTracker::OnFortPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "OnFortPawnDied");

	Params::UAthenaAIPopulationTracker_OnFortPawnDied_Params Parms;

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


// Function FortniteAI.AthenaAIPopulationTracker.OnFortPawnDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIPopulationTracker::OnFortPawnDestroyed(class UActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "OnFortPawnDestroyed");

	Params::UAthenaAIPopulationTracker_OnFortPawnDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIPopulationTracker.OnAISpawned
// (Final, Native, Private)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIPopulationTracker::OnAISpawned(class UPawn* Pawn, int32 RequestID)
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "OnAISpawned");

	Params::UAthenaAIPopulationTracker_OnAISpawned_Params Parms;

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIPopulationTracker.OnAgentGameOver
// (Final, Native, Private)
// Parameters:
// class UFortAthenaAIBotController*  AIBotController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIPopulationTracker::OnAgentGameOver(class UFortAthenaAIBotController* AIBotController, class UFortPawn* Pawn, class UController* Instigator)
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "OnAgentGameOver");

	Params::UAthenaAIPopulationTracker_OnAgentGameOver_Params Parms;

	Parms.AIBotController = AIBotController;
	Parms.Pawn = Pawn;
	Parms.Instigator = Instigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetNumTotalBots
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIPopulationTracker::GetNumTotalBots()
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumTotalBots");

	Params::UAthenaAIPopulationTracker_GetNumTotalBots_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetNumPlayerBots
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIPopulationTracker::GetNumPlayerBots()
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumPlayerBots");

	Params::UAthenaAIPopulationTracker_GetNumPlayerBots_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetNumNonAthenaParticipantBots
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIPopulationTracker::GetNumNonAthenaParticipantBots()
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumNonAthenaParticipantBots");

	Params::UAthenaAIPopulationTracker_GetNumNonAthenaParticipantBots_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetNumAIPawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIPopulationTracker::GetNumAIPawn()
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumAIPawn");

	Params::UAthenaAIPopulationTracker_GetNumAIPawn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetAIPopulationTrackerCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAIPopulationCountSnapshot  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAIPopulationCountSnapshot UAthenaAIPopulationTracker::GetAIPopulationTrackerCount()
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "GetAIPopulationTrackerCount");

	Params::UAthenaAIPopulationTracker_GetAIPopulationTrackerCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetAIMatchingQuery
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UController*>         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UController*> UAthenaAIPopulationTracker::GetAIMatchingQuery(struct FGameplayTagQuery& TagQuery)
{
	static auto Func = Class->GetFunction("AthenaAIPopulationTracker", "GetAIMatchingQuery");

	Params::UAthenaAIPopulationTracker_GetAIMatchingQuery_Params Parms;

	Parms.TagQuery = TagQuery;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceCover.GetAthenaAIServiceCover
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServiceCover*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServiceCover* UAthenaAIServiceCover::GetAthenaAIServiceCover(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AthenaAIServiceCover", "GetAthenaAIServiceCover");

	Params::UAthenaAIServiceCover_GetAthenaAIServiceCover_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServicePlayerBots.SpawnAI
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InSpawnLocation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InSpawnRotation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*AISpawnerComponentList                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawn* UAthenaAIServicePlayerBots::SpawnAI(struct FVector& InSpawnLocation, struct FRotator& InSpawnRotation, class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "SpawnAI");

	Params::UAthenaAIServicePlayerBots_SpawnAI_Params Parms;

	Parms.InSpawnLocation = InSpawnLocation;
	Parms.InSpawnRotation = InSpawnRotation;
	Parms.AISpawnerComponentList = AISpawnerComponentList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnServerGameMemberRemoved
// (Final, Native, Private)
// Parameters:
// uint8                              InSquadId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTeamIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateAthena*      ChangedPS                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, class UFortPlayerStateAthena* ChangedPS)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnServerGameMemberRemoved");

	Params::UAthenaAIServicePlayerBots_OnServerGameMemberRemoved_Params Parms;

	Parms.InSquadId = InSquadId;
	Parms.InTeamIndex = InTeamIndex;
	Parms.ChangedPS = ChangedPS;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnSafeZoneUpdated
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FFortSafeZonePhaseUpdatedEventEvent                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnSafeZoneUpdated(struct FFortSafeZonePhaseUpdatedEvent& Event)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnSafeZoneUpdated");

	Params::UAthenaAIServicePlayerBots_OnSafeZoneUpdated_Params Parms;

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnPlaylistDataReady");

	Params::UAthenaAIServicePlayerBots_OnPlaylistDataReady_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnGamePhaseLogicReady
// (RequiredAPI, Native, Protected, HasOutParams)
// Parameters:
// struct FFortBattleRoyaleGamePhaseLogicComponentReadyEventEvent                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnGamePhaseLogicReady(struct FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnGamePhaseLogicReady");

	Params::UAthenaAIServicePlayerBots_OnGamePhaseLogicReady_Params Parms;

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnGamePhaseChanged
// (RequiredAPI, Native, Protected, HasOutParams)
// Parameters:
// struct FFortGamePhaseUpdatedEvent  Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnGamePhaseChanged(struct FFortGamePhaseUpdatedEvent& Event)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnGamePhaseChanged");

	Params::UAthenaAIServicePlayerBots_OnGamePhaseChanged_Params Parms;

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnAIPawnSpawned
// (Final, Native, Private)
// Parameters:
// class UController*                 SpawnedController                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsABot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   FortAIPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnAIPawnSpawned(class UController* SpawnedController, bool bIsABot, class UFortPawn* FortAIPawn, class UFortPlayerPawn* PlayerPawn)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnAIPawnSpawned");

	Params::UAthenaAIServicePlayerBots_OnAIPawnSpawned_Params Parms;

	Parms.SpawnedController = SpawnedController;
	Parms.bIsABot = bIsABot;
	Parms.FortAIPawn = FortAIPawn;
	Parms.PlayerPawn = PlayerPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnAgentGameOver
// (RequiredAPI, Native, Protected)
// Parameters:
// class UFortAthenaAIBotController*  AIBotController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnAgentGameOver(class UFortAthenaAIBotController* AIBotController, class UFortPawn* Pawn, class UController* Instigator)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnAgentGameOver");

	Params::UAthenaAIServicePlayerBots_OnAgentGameOver_Params Parms;

	Parms.AIBotController = AIBotController;
	Parms.Pawn = Pawn;
	Parms.Instigator = Instigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.KillBots
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bKillPlayers                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKillNPCs                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              TeamIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      BotOwner                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::KillBots(bool bKillPlayers, bool bKillNPCs, uint8 TeamIndex, class UActor* BotOwner)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "KillBots");

	Params::UAthenaAIServicePlayerBots_KillBots_Params Parms;

	Parms.bKillPlayers = bKillPlayers;
	Parms.bKillNPCs = bKillNPCs;
	Parms.TeamIndex = TeamIndex;
	Parms.BotOwner = BotOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.JoinTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UController*                 SourceTeamController                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 DestinationTeamController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::JoinTeam(class UController* SourceTeamController, class UController* DestinationTeamController)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "JoinTeam");

	Params::UAthenaAIServicePlayerBots_JoinTeam_Params Parms;

	Parms.SourceTeamController = SourceTeamController;
	Parms.DestinationTeamController = DestinationTeamController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServicePlayerBots.IsWeaponSupported
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWeapon*                 FortWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIServicePlayerBots::IsWeaponSupported(class UFortWeapon* FortWeapon)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "IsWeaponSupported");

	Params::UAthenaAIServicePlayerBots_IsWeaponSupported_Params Parms;

	Parms.FortWeapon = FortWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServicePlayerBots.FetchNextCustomBotCosmeticVariantID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerPawnAthena*       BotPawn                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIServicePlayerBots::FetchNextCustomBotCosmeticVariantID(class UFortPlayerPawnAthena* BotPawn)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "FetchNextCustomBotCosmeticVariantID");

	Params::UAthenaAIServicePlayerBots_FetchNextCustomBotCosmeticVariantID_Params Parms;

	Parms.BotPawn = BotPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServicePlayerBots.AddPOIVolume
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UFortPoiVolume*              POIVolume                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaAIServicePOIList POIList                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::AddPOIVolume(class UFortPoiVolume* POIVolume, enum class EAthenaAIServicePOIList POIList)
{
	static auto Func = Class->GetFunction("AthenaAIServicePlayerBots", "AddPOIVolume");

	Params::UAthenaAIServicePlayerBots_AddPOIVolume_Params Parms;

	Parms.POIVolume = POIVolume;
	Parms.POIList = POIList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.OnMinigameStateChanged
// (RequiredAPI, Native, Public)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceCreativePlayerBots::OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static auto Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "OnMinigameStateChanged");

	Params::UAthenaAIServiceCreativePlayerBots_OnMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.OnFinishedAddingMinigamePlayer
// (Final, Native, Protected)
// Parameters:
// struct FUniqueNetIdRepl            UniqueNetId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceCreativePlayerBots::OnFinishedAddingMinigamePlayer(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer)
{
	static auto Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "OnFinishedAddingMinigamePlayer");

	Params::UAthenaAIServiceCreativePlayerBots_OnFinishedAddingMinigamePlayer_Params Parms;

	Parms.UniqueNetId = UniqueNetId;
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.IsMinigameBotSpawningRequired
// (RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIServiceCreativePlayerBots::IsMinigameBotSpawningRequired()
{
	static auto Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "IsMinigameBotSpawningRequired");

	Params::UAthenaAIServiceCreativePlayerBots_IsMinigameBotSpawningRequired_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.GetLastHiringPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      HiredOwner                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayerController* UAthenaAIServiceCreativePlayerBots::GetLastHiringPlayer(class UActor* HiredOwner)
{
	static auto Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "GetLastHiringPlayer");

	Params::UAthenaAIServiceCreativePlayerBots_GetLastHiringPlayer_Params Parms;

	Parms.HiredOwner = HiredOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.ClearHiringHistory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      HiredOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceCreativePlayerBots::ClearHiringHistory(class UActor* HiredOwner)
{
	static auto Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "ClearHiringHistory");

	Params::UAthenaAIServiceCreativePlayerBots_ClearHiringHistory_Params Parms;

	Parms.HiredOwner = HiredOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.AddHiringHistory
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      HiredOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           HiringPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceCreativePlayerBots::AddHiringHistory(class UActor* HiredOwner, class UPlayerController* HiringPlayer)
{
	static auto Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "AddHiringHistory");

	Params::UAthenaAIServiceCreativePlayerBots_AddHiringHistory_Params Parms;

	Parms.HiredOwner = HiredOwner;
	Parms.HiringPlayer = HiringPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceLoot.UpdateSupplyDropStatus
// (Final, Native, Private)
// Parameters:

void UAthenaAIServiceLoot::UpdateSupplyDropStatus()
{
	static auto Func = Class->GetFunction("AthenaAIServiceLoot", "UpdateSupplyDropStatus");

	Params::UAthenaAIServiceLoot_UpdateSupplyDropStatus_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceLoot.UpdateMovingLoots
// (Final, Native, Private)
// Parameters:

void UAthenaAIServiceLoot::UpdateMovingLoots()
{
	static auto Func = Class->GetFunction("AthenaAIServiceLoot", "UpdateMovingLoots");

	Params::UAthenaAIServiceLoot_UpdateMovingLoots_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceLoot.OnGamePhaseStepChanged
// (Final, Native, Public, HasOutParams)
// Parameters:
// FInterfaceProperty_                SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceLoot::OnGamePhaseStepChanged(FInterfaceProperty_& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("AthenaAIServiceLoot", "OnGamePhaseStepChanged");

	Params::UAthenaAIServiceLoot_OnGamePhaseStepChanged_Params Parms;

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceLoot.K2_RemoveGameplayTagFromLoot
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      LootActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceLoot::K2_RemoveGameplayTagFromLoot(class UActor* LootActor, struct FGameplayTag& GameplayTag)
{
	static auto Func = Class->GetFunction("AthenaAIServiceLoot", "K2_RemoveGameplayTagFromLoot");

	Params::UAthenaAIServiceLoot_K2_RemoveGameplayTagFromLoot_Params Parms;

	Parms.LootActor = LootActor;
	Parms.GameplayTag = GameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceLoot.K2_AddGameplayTagToLoot
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      LootActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceLoot::K2_AddGameplayTagToLoot(class UActor* LootActor, struct FGameplayTag& GameplayTag)
{
	static auto Func = Class->GetFunction("AthenaAIServiceLoot", "K2_AddGameplayTagToLoot");

	Params::UAthenaAIServiceLoot_K2_AddGameplayTagToLoot_Params Parms;

	Parms.LootActor = LootActor;
	Parms.GameplayTag = GameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceZoneManager.UnregisterOccluder
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      OccluderActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::UnregisterOccluder(class UActor* OccluderActor)
{
	static auto Func = Class->GetFunction("AthenaAIServiceZoneManager", "UnregisterOccluder");

	Params::UAthenaAIServiceZoneManager_UnregisterOccluder_Params Parms;

	Parms.OccluderActor = OccluderActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceZoneManager.UnregisterDangerZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::UnregisterDangerZone(class UActor* Actor)
{
	static auto Func = Class->GetFunction("AthenaAIServiceZoneManager", "UnregisterDangerZone");

	Params::UAthenaAIServiceZoneManager_UnregisterDangerZone_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceZoneManager.RegisterOccluder
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      OccluderActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SphereRadius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::RegisterOccluder(class UActor* OccluderActor, float SphereRadius)
{
	static auto Func = Class->GetFunction("AthenaAIServiceZoneManager", "RegisterOccluder");

	Params::UAthenaAIServiceZoneManager_RegisterOccluder_Params Parms;

	Parms.OccluderActor = OccluderActor;
	Parms.SphereRadius = SphereRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceZoneManager.RegisterDangerZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::RegisterDangerZone(class UActor* Actor, float Radius)
{
	static auto Func = Class->GetFunction("AthenaAIServiceZoneManager", "RegisterDangerZone");

	Params::UAthenaAIServiceZoneManager_RegisterDangerZone_Params Parms;

	Parms.Actor = Actor;
	Parms.Radius = Radius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceZoneManager.OnZoneDestroyed
// (Final, BlueprintAuthorityOnly, Native, Private, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::OnZoneDestroyed(class UActor* Actor)
{
	static auto Func = Class->GetFunction("AthenaAIServiceZoneManager", "OnZoneDestroyed");

	Params::UAthenaAIServiceZoneManager_OnZoneDestroyed_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAIServiceZoneManager.IsLOFOccluded
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     StartLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIServiceZoneManager::IsLOFOccluded(struct FVector& StartLocation, struct FVector& EndLocation)
{
	static auto Func = Class->GetFunction("AthenaAIServiceZoneManager", "IsLOFOccluded");

	Params::UAthenaAIServiceZoneManager_IsLOFOccluded_Params Parms;

	Parms.StartLocation = StartLocation;
	Parms.EndLocation = EndLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceZoneManager.IsInDangerZone
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIServiceZoneManager::IsInDangerZone(struct FVector& Location)
{
	static auto Func = Class->GetFunction("AthenaAIServiceZoneManager", "IsInDangerZone");

	Params::UAthenaAIServiceZoneManager_IsInDangerZone_Params Parms;

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceZoneManager.GetAthenaAIServiceZoneManager
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServiceZoneManager* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServiceZoneManager* UAthenaAIServiceZoneManager::GetAthenaAIServiceZoneManager(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AthenaAIServiceZoneManager", "GetAthenaAIServiceZoneManager");

	Params::UAthenaAIServiceZoneManager_GetAthenaAIServiceZoneManager_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAISpawner.RequestSpawn
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortAthenaAISpawnerDataComponentList*AISpawnerComponentList                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnTransform                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUrgentRequest                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAISpawner::RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, struct FTransform& SpawnTransform, bool bUrgentRequest)
{
	static auto Func = Class->GetFunction("AthenaAISpawner", "RequestSpawn");

	Params::UAthenaAISpawner_RequestSpawn_Params Parms;

	Parms.AISpawnerComponentList = AISpawnerComponentList;
	Parms.SpawnTransform = SpawnTransform;
	Parms.bUrgentRequest = bUrgentRequest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAISpawner.QueueForDespawn
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      ActorToDespawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISpawner::QueueForDespawn(class UActor* ActorToDespawn)
{
	static auto Func = Class->GetFunction("AthenaAISpawner", "QueueForDespawn");

	Params::UAthenaAISpawner_QueueForDespawn_Params Parms;

	Parms.ActorToDespawn = ActorToDespawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.AthenaAISpawner.CancelRequest
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAISpawner::CancelRequest(int32 RequestID)
{
	static auto Func = Class->GetFunction("AthenaAISpawner", "CancelRequest");

	Params::UAthenaAISpawner_CancelRequest_Params Parms;

	Parms.RequestID = RequestID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.DespawnExpiredPawnComponent.GetDespawnRifts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UBuildingRift*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UBuildingRift*> UDespawnExpiredPawnComponent::GetDespawnRifts()
{
	static auto Func = Class->GetFunction("DespawnExpiredPawnComponent", "GetDespawnRifts");

	Params::UDespawnExpiredPawnComponent_GetDespawnRifts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteAI.DespawnExpiredPawnComponent.DespawnExpired
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDespawnExpiredPawnComponent::DespawnExpired()
{
	static auto Func = Class->GetFunction("DespawnExpiredPawnComponent", "DespawnExpired");

	Params::UDespawnExpiredPawnComponent_DespawnExpired_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteAI.DespawnExpiredPawnComponent.AddDespawnRift
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBuildingRift*               NewRift                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDespawnExpiredPawnComponent::AddDespawnRift(class UBuildingRift* NewRift)
{
	static auto Func = Class->GetFunction("DespawnExpiredPawnComponent", "AddDespawnRift");

	Params::UDespawnExpiredPawnComponent_AddDespawnRift_Params Parms;

	Parms.NewRift = NewRift;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
