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


// Function SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager.HandleCurrentPlaylistReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// class AFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortGameStateComponent_ScriptedObjectMovementManager::HandleCurrentPlaylistReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("FortGameStateComponent_ScriptedObjectMovementManager", "HandleCurrentPlaylistReady");

	Params::UFortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.SetCanEverAffectNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanEverAffectNavigation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             TargetActorComponent                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent)
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "SetCanEverAffectNavigation");

	Params::AFortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation_Params Parms;

	Parms.bCanEverAffectNavigation = bCanEverAffectNavigation;
	Parms.TargetActorComponent = TargetActorComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.OnRep_CurrentStepData
// (Final, Native, Private)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::OnRep_CurrentStepData()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "OnRep_CurrentStepData");

	Params::AFortScriptedObjectMovement_MovableObjectBase_OnRep_CurrentStepData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.NotifyStaticPathStepComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReachedBeginPlaySkipStep                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep)
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "NotifyStaticPathStepComplete");

	Params::AFortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete_Params Parms;

	Parms.bReachedBeginPlaySkipStep = bReachedBeginPlaySkipStep;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.HandleSlotDefinitionSlotted
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortScriptedObjectMovement_SlotDefinition*SlotDefinition                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::HandleSlotDefinitionSlotted(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition)
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "HandleSlotDefinitionSlotted");

	Params::AFortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted_Params Parms;

	Parms.SlotDefinition = SlotDefinition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathZOffsetHeight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortScriptedObjectMovement_MovableObjectBase::GetStaticPathZOffsetHeight()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetStaticPathZOffsetHeight");

	Params::AFortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathTravelingBounds
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     OutBoxExtent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::GetStaticPathTravelingBounds(struct FVector* OutBoxExtent)
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetStaticPathTravelingBounds");

	Params::AFortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBoxExtent != nullptr)
		*OutBoxExtent = Parms.OutBoxExtent;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetScriptedObjectStaticMeshComponent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStaticMeshComponent* AFortScriptedObjectMovement_MovableObjectBase::GetScriptedObjectStaticMeshComponent()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "GetScriptedObjectStaticMeshComponent");

	Params::AFortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_TryJumpToStartStep
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_TryJumpToStartStep()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_TryJumpToStartStep");

	Params::AFortScriptedObjectMovement_MovableObjectBase_Editor_TryJumpToStartStep_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ResetObject
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_ResetObject()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_ResetObject");

	Params::AFortScriptedObjectMovement_MovableObjectBase_Editor_ResetObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_PreviousStep
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_PreviousStep()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_PreviousStep");

	Params::AFortScriptedObjectMovement_MovableObjectBase_Editor_PreviousStep_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_NextStep
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_NextStep()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_NextStep");

	Params::AFortScriptedObjectMovement_MovableObjectBase_Editor_NextStep_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_DebugLogStaticPathTravelIndex
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_DebugLogStaticPathTravelIndex()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_DebugLogStaticPathTravelIndex");

	Params::AFortScriptedObjectMovement_MovableObjectBase_Editor_DebugLogStaticPathTravelIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ClearResetObjectLocation
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::Editor_ClearResetObjectLocation()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Editor_ClearResetObjectLocation");

	Params::AFortScriptedObjectMovement_MovableObjectBase_Editor_ClearResetObjectLocation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.ConfigureStaticMeshToSlotDefinition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortScriptedObjectMovement_SlotDefinition*SlotDefinition                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*        StaticMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::ConfigureStaticMeshToSlotDefinition(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, class UStaticMeshComponent* StaticMeshComponent)
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "ConfigureStaticMeshToSlotDefinition");

	Params::AFortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition_Params Parms;

	Parms.SlotDefinition = SlotDefinition;
	Parms.StaticMeshComponent = StaticMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.CheatDrawKeyframes
// (Final, Native, Public)
// Parameters:

void AFortScriptedObjectMovement_MovableObjectBase::CheatDrawKeyframes()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "CheatDrawKeyframes");

	Params::AFortScriptedObjectMovement_MovableObjectBase_CheatDrawKeyframes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Cheat_NetMulticast_SendDebugTimerInfo
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                              ServerTimeWhenQueryInvoked                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RemainingTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::Cheat_NetMulticast_SendDebugTimerInfo(float ServerTimeWhenQueryInvoked, float RemainingTime)
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "Cheat_NetMulticast_SendDebugTimerInfo");

	Params::AFortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo_Params Parms;

	Parms.ServerTimeWhenQueryInvoked = ServerTimeWhenQueryInvoked;
	Parms.RemainingTime = RemainingTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BlockOverlappingStaticPathSteps
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortScriptedObjectMovement_MovableObjectBase::BlockOverlappingStaticPathSteps()
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "BlockOverlappingStaticPathSteps");

	Params::AFortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BeginMovingToStaticPathNode
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FScriptedObjectMovement_StaticPathStepDataStepData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortScriptedObjectMovement_MovableObjectBase::BeginMovingToStaticPathNode(struct FScriptedObjectMovement_StaticPathStepData& StepData)
{
	static auto Func = Class->GetFunction("FortScriptedObjectMovement_MovableObjectBase", "BeginMovingToStaticPathNode");

	Params::AFortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode_Params Parms;

	Parms.StepData = StepData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.UnlockAllPathsFromBeingRegenerated
// (Final, Native, Public)
// Parameters:

void AScriptedObjectMovement_StaticPath::UnlockAllPathsFromBeingRegenerated()
{
	static auto Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "UnlockAllPathsFromBeingRegenerated");

	Params::AScriptedObjectMovement_StaticPath_UnlockAllPathsFromBeingRegenerated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.LockAllPathNodesFromBeingRegenerated
// (Final, Native, Public)
// Parameters:

void AScriptedObjectMovement_StaticPath::LockAllPathNodesFromBeingRegenerated()
{
	static auto Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "LockAllPathNodesFromBeingRegenerated");

	Params::AScriptedObjectMovement_StaticPath_LockAllPathNodesFromBeingRegenerated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventUpdated
// (Native, Protected, HasDefaults)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeUntilEnd                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeSinceBegin                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimespanRatio                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventUpdated(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventUpdated");

	Params::AScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated_Params Parms;

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventEnded
// (Native, Protected, HasDefaults)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeUntilEnd                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeSinceBegin                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimespanRatio                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventEnded(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventEnded");

	Params::AScriptedObjectMovement_StaticPath_HandleCalendarEventEnded_Params Parms;

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventActive
// (Native, Protected, HasDefaults)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeUntilEnd                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeSinceBegin                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimespanRatio                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AScriptedObjectMovement_StaticPath::HandleCalendarEventActive(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "HandleCalendarEventActive");

	Params::AScriptedObjectMovement_StaticPath_HandleCalendarEventActive_Params Parms;

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SOMRuntime.ScriptedObjectMovement_StaticPath.GeneratePathData
// (Final, Native, Public)
// Parameters:

void AScriptedObjectMovement_StaticPath::GeneratePathData()
{
	static auto Func = Class->GetFunction("ScriptedObjectMovement_StaticPath", "GeneratePathData");

	Params::AScriptedObjectMovement_StaticPath_GeneratePathData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
