#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager.HandleCurrentPlaylistReady
struct UFortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.SetCanEverAffectNavigation
struct UFortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation_Params
{
public:
	bool                                         bCanEverAffectNavigation;                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46[0x7];                                       // Fixing Size After Last Property
	class UActorComponent*                       TargetActorComponent;                              // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.OnRep_CurrentStepData
struct UFortScriptedObjectMovement_MovableObjectBase_OnRep_CurrentStepData_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.NotifyStaticPathStepComplete
struct UFortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete_Params
{
public:
	bool                                         bReachedBeginPlaySkipStep;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.HandleSlotDefinitionSlotted
struct UFortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted_Params
{
public:
	class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathZOffsetHeight
struct UFortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetStaticPathTravelingBounds
struct UFortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds_Params
{
public:
	struct FVector                               OutBoxExtent;                                      // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.GetScriptedObjectStaticMeshComponent
struct UFortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent_Params
{
public:
	class UStaticMeshComponent*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_TryJumpToStartStep
struct UFortScriptedObjectMovement_MovableObjectBase_Editor_TryJumpToStartStep_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ResetObject
struct UFortScriptedObjectMovement_MovableObjectBase_Editor_ResetObject_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_PreviousStep
struct UFortScriptedObjectMovement_MovableObjectBase_Editor_PreviousStep_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_NextStep
struct UFortScriptedObjectMovement_MovableObjectBase_Editor_NextStep_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_DebugLogStaticPathTravelIndex
struct UFortScriptedObjectMovement_MovableObjectBase_Editor_DebugLogStaticPathTravelIndex_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Editor_ClearResetObjectLocation
struct UFortScriptedObjectMovement_MovableObjectBase_Editor_ClearResetObjectLocation_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.ConfigureStaticMeshToSlotDefinition
struct UFortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition_Params
{
public:
	class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.CheatDrawKeyframes
struct UFortScriptedObjectMovement_MovableObjectBase_CheatDrawKeyframes_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.Cheat_NetMulticast_SendDebugTimerInfo
struct UFortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo_Params
{
public:
	float                                        ServerTimeWhenQueryInvoked;                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemainingTime;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BlockOverlappingStaticPathSteps
struct UFortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function SOMRuntime.FortScriptedObjectMovement_MovableObjectBase.BeginMovingToStaticPathNode
struct UFortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode_Params
{
public:
	struct FScriptedObjectMovement_StaticPathStepData StepData;                                          // 0x0(0xF0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.ScriptedObjectMovement_StaticPath.UnlockAllPathsFromBeingRegenerated
struct UScriptedObjectMovement_StaticPath_UnlockAllPathsFromBeingRegenerated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.ScriptedObjectMovement_StaticPath.LockAllPathNodesFromBeingRegenerated
struct UScriptedObjectMovement_StaticPath_LockAllPathNodesFromBeingRegenerated_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventUpdated
struct UScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             TimeUntilEnd;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             TimeSinceBegin;                                    // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimespanRatio;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F[0x4];                                       // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventEnded
struct UScriptedObjectMovement_StaticPath_HandleCalendarEventEnded_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             TimeUntilEnd;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             TimeSinceBegin;                                    // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimespanRatio;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74[0x4];                                       // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function SOMRuntime.ScriptedObjectMovement_StaticPath.HandleCalendarEventActive
struct UScriptedObjectMovement_StaticPath_HandleCalendarEventActive_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             TimeUntilEnd;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                             TimeSinceBegin;                                    // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimespanRatio;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75[0x4];                                       // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function SOMRuntime.ScriptedObjectMovement_StaticPath.GeneratePathData
struct UScriptedObjectMovement_StaticPath_GeneratePathData_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
