#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM.OnPhaseActivated
struct UFortAthenaMutator_SpecialEventTODM_OnPhaseActivated_Params
{
public:
	class USpecialEventScript*                   InSpecialEventScript;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpecialEventPhase*                    InSpecialEventPhase;                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled
struct UFortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled_Params
{
public:
	class FString                                TagString;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4709[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_ListActorComponents
struct UFortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents_Params
{
public:
	class FString                                InActorName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.SetActorDefinitionsEnabled
struct UFortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled_Params
{
public:
	struct FGameplayTagContainer                 InTags;                                            // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4716[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.PermanentlyDisableActorDefinitions
struct UFortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions_Params
{
public:
	struct FGameplayTagContainer                 InTags;                                            // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnTrackedActorDestroyed
struct UFortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnRep_ActorDefinitions
struct UFortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions_Params
{
public:
	TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition> OldActorDefinitions;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnActorSpawned
struct UFortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyTestAlgorithm
struct UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm_Params
{
public:
	int32                                        NumPlayers;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_473B[0x4];                                     // Fixing Size After Last Property 
	class FString                                MaxPlayersRemainingAfterPhases;                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinSquadSize;                                      // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSquadSize;                                      // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Iterations;                                        // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LogVerbosity;                                      // 0x24(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave
struct UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyStartNextWave_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancySetUpPhase
struct UFortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase_Params
{
public:
	int32                                        MaxPlayersRemaining;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_474B[0x4];                                     // Fixing Size After Last Property 
	class FString                                ReasonGameplayTagString;                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumWaves;                                          // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelevancyDelay;                                    // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset
struct UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyReset_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug
struct UFortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug_Params
{
public:
	float                                        TextScale;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy
struct UFortControllerComponent_FakeKillRelevancy_ResetRelevancy_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects
struct UFortControllerComponent_FakeKillRelevancy_PlayKillEffects_Params
{
public:
	struct FFakeKillRelevancyPlayerDataEntry     FakeKillData;                                      // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        RelevancyDelay;                                    // 0x38(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_476F[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter
struct UFortControllerComponent_FakeKillRelevancy_OnRep_ResetCounter_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed
struct UFortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed_Params
{
public:
	class UFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation
struct UFortControllerComponent_FakeKillRelevancy_GetDeathLocation_Params
{
public:
	class UFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer
struct UFortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnServer_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient
struct UFortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient_Params
{
public:
	TArray<class UFortPlayerStateAthena*>        PlayerStates;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave
struct UFortAthenaMutator_FakeKillRelevancy_StartNextKillWave_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase
struct UFortAthenaMutator_FakeKillRelevancy_SetUpKillPhase_Params
{
public:
	int32                                        MaxPlayersRemaining;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Reason;                                            // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumWaves;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelevancyDelay;                                    // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy
struct UFortAthenaMutator_FakeKillRelevancy_ResetRelevancy_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave
struct UFortAthenaMutator_FakeKillRelevancy_EndWave_Params
{
public:
	int32                                        EndPhaseNum;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveNum;                                           // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature.OnPlaylistDataReady
struct UFortAthenaMutator_LoadGameFeature_OnPlaylistDataReady_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures.OnPlaylistDataReady
struct UFortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.UnloadTerrainMaps
struct UFortCheatManager_SpecialEvent_UnloadTerrainMaps_Params
{
public:
	class FName                                  MapTag;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ToggleDisableParachutes
struct UFortCheatManager_SpecialEvent_ToggleDisableParachutes_Params
{
public:
	bool                                         bIsDisabled;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.TeleportAllPlayers
struct UFortCheatManager_SpecialEvent_TeleportAllPlayers_Params
{
public:
	int32                                        SafeZoneIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.StartEventScript
struct UFortCheatManager_SpecialEvent_StartEventScript_Params
{
public:
	int32                                        InStartingIndex;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventSetAdditionalViewpoint
struct UFortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventGameUserSettings_ClearDataForAllPlayers
struct UFortCheatManager_SpecialEvent_SpecialEventGameUserSettings_ClearDataForAllPlayers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventClearAdditionalViewpoint
struct UFortCheatManager_SpecialEvent_SpecialEventClearAdditionalViewpoint_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ShrinkSafeZone
struct UFortCheatManager_SpecialEvent_ShrinkSafeZone_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetReturnToMainMenuDelay
struct UFortCheatManager_SpecialEvent_SetReturnToMainMenuDelay_Params
{
public:
	float                                        MinDelayReturnToMainMenu;                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDelayReturnToMainMenu;                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetMatchTime
struct UFortCheatManager_SpecialEvent_SetMatchTime_Params
{
public:
	int32                                        NewMatchTime;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetLockingOnFocalPoint
struct UFortCheatManager_SpecialEvent_SetLockingOnFocalPoint_Params
{
public:
	bool                                         bInLockingOnFocalPoint;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetIsSimulatingDamage
struct UFortCheatManager_SpecialEvent_SetIsSimulatingDamage_Params
{
public:
	bool                                         bIsSimulating;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetDestroyVehiclesInStorm
struct UFortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm_Params
{
public:
	bool                                         bDestroyVehiclesInStorm;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SendToNightNight
struct UFortCheatManager_SpecialEvent_SendToNightNight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResumeWinCondition
struct UFortCheatManager_SpecialEvent_ResumeWinCondition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinConditionProgressToZero
struct UFortCheatManager_SpecialEvent_ResetWinConditionProgressToZero_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinCondition
struct UFortCheatManager_SpecialEvent_ResetWinCondition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetSpecialEventAircraft
struct UFortCheatManager_SpecialEvent_ResetSpecialEventAircraft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetMatchTimeToPrevious
struct UFortCheatManager_SpecialEvent_ResetMatchTimeToPrevious_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PlacePlayersInAircraft
struct UFortCheatManager_SpecialEvent_PlacePlayersInAircraft_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PauseWinCondition
struct UFortCheatManager_SpecialEvent_PauseWinCondition_Params
{
public:
	bool                                         bLockScores;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.CloseParachutes
struct UFortCheatManager_SpecialEvent_CloseParachutes_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ChangeWinCondition
struct UFortCheatManager_SpecialEvent_ChangeWinCondition_Params
{
public:
	float                                        NewGoalScore;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AutobalanceTargetScore
struct UFortCheatManager_SpecialEvent_AutobalanceTargetScore_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AddCSVEvent
struct UFortCheatManager_SpecialEvent_AddCSVEvent_Params
{
public:
	class FString                                CSVEventName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated
struct UFortAthenaMutator_SpecialEvent_WarmUpIslandUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UpdateBackfillStatus
struct UFortAthenaMutator_SpecialEvent_UpdateBackfillStatus_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps
struct UFortAthenaMutator_SpecialEvent_UnloadTerrainMaps_Params
{
public:
	struct FGameplayTag                          MapTag;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs
struct UFortAthenaMutator_SpecialEvent_ToggleHUDs_Params
{
public:
	bool                                         bHide;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons
struct UFortAthenaMutator_SpecialEvent_ToggleDisableWeapons_Params
{
public:
	bool                                         bDisableWeapons;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes
struct UFortAthenaMutator_SpecialEvent_ToggleDisableParachutes_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility
struct UFortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility_Params
{
public:
	bool                                         bInvincible;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers
struct UFortAthenaMutator_SpecialEvent_TeleportAllPlayers_Params
{
public:
	struct FGameplayTagContainer                 EventTags;                                         // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	int32                                        TeleportsPerFrame;                                 // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SafeZoneIndex;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts
struct UFortAthenaMutator_SpecialEvent_SwapBodyParts_Params
{
public:
	int32                                        ArrayIndex;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_481C[0x4];                                     // Fixing Size After Last Property 
	class UFortPlayerController*                 FortPC;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent
struct UFortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent_Params
{
public:
	int32                                        SafeZoneIndexForEvent;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone
struct UFortAthenaMutator_SpecialEvent_ShrinkSafeZone_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll
struct UFortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll_Params
{
public:
	float                                        Weight;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay
struct UFortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay_Params
{
public:
	float                                        MinDelayReturnToMainMenu;                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDelayReturnToMainMenu;                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll
struct UFortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll_Params
{
public:
	class FName                                  WeightName;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime
struct UFortAthenaMutator_SpecialEvent_SetMatchTime_Params
{
public:
	int32                                        NewMatchTime;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint
struct UFortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint_Params
{
public:
	bool                                         bInLockingOnFocalPoint;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage
struct UFortAthenaMutator_SpecialEvent_SetIsSimulatingDamage_Params
{
public:
	bool                                         bIsSimulating;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm
struct UFortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm_Params
{
public:
	bool                                         bDestroyVehiclesInStorm;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn
struct UFortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint
struct UFortAthenaMutator_SpecialEvent_SetAdditionalViewpoint_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight
struct UFortAthenaMutator_SpecialEvent_SendToNightNight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition
struct UFortAthenaMutator_SpecialEvent_ResumeWinCondition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero
struct UFortAthenaMutator_SpecialEvent_ResetWinConditionProgressToZero_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition
struct UFortAthenaMutator_SpecialEvent_ResetWinCondition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft
struct UFortAthenaMutator_SpecialEvent_ResetSpecialEventAircraft_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent
struct UFortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent_Params
{
public:
	int32                                        MinResetSafeZoneIndex;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDelayReturnToMainMenu;                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDelayReturnToMainMenu;                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious
struct UFortAthenaMutator_SpecialEvent_ResetMatchTimeToPrevious_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions
struct UFortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions_Params
{
public:
	struct FGameplayTagContainer                 Actions;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent
struct UFortAthenaMutator_SpecialEvent_PushSpecialEventEmoteInputComponent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent
struct UFortAthenaMutator_SpecialEvent_PopSpecialEventEmoteInputComponent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft
struct UFortAthenaMutator_SpecialEvent_PlacePlayersInAircraft_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition
struct UFortAthenaMutator_SpecialEvent_PauseWinCondition_Params
{
public:
	bool                                         bLockScores;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops
struct UFortAthenaMutator_SpecialEvent_PauseSupplyDrops_Params
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression
struct UFortAthenaMutator_SpecialEvent_PauseStormProgression_Params
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage
struct UFortAthenaMutator_SpecialEvent_PauseStormDamage_Params
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete
struct UFortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete_Params
{
public:
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload
struct UFortAthenaMutator_SpecialEvent_OnRep_TerrainMapsToUnload_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName
struct UFortAthenaMutator_SpecialEvent_OnRep_LastCSVEventName_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed
struct UFortAthenaMutator_SpecialEvent_OnRep_GameResumed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData
struct UFortAthenaMutator_SpecialEvent_OnRep_DelayPlayersFromReturningToLobbyData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible
struct UFortAthenaMutator_SpecialEvent_OnRep_bPlayersAreInvincible_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint
struct UFortAthenaMutator_SpecialEvent_OnRep_bLockingOnFocalPoint_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD
struct UFortAthenaMutator_SpecialEvent_OnRep_bDisableHUD_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn
struct UFortAthenaMutator_SpecialEvent_OnRep_bCanStreamBuildingFoundationsIn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount
struct UFortAthenaMutator_SpecialEvent_OnRep_AllPlayerTeleportedCount_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft
struct UFortAthenaMutator_SpecialEvent_OnRep_Aircraft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint
struct UFortAthenaMutator_SpecialEvent_OnRep_AdditionalViewpoint_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged
struct UFortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged_Params
{
public:
	bool                                         bHasFocus;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseStepChanged
struct UFortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged_Params
{
public:
	TScriptInterface<class UFortSafeZoneInterface> SafeZoneInterface;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_484B[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded
struct UFortAthenaMutator_SpecialEvent_OnAircraftFlightEnded_Params
{
public:
	class UFortAthenaAircraft*                   FortAthenaAircraft;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone
struct UFortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone_Params
{
public:
	class UFortAthenaAircraft*                   FortAthenaAircraft;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone
struct UFortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone_Params
{
public:
	class UFortAthenaAircraft*                   FortAthenaAircraft;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned
struct UFortAthenaMutator_SpecialEvent_OnActorSpawned_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization
struct UFortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed
struct UFortAthenaMutator_SpecialEvent_NotifyClientsGameResumed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NetMulticast_CheatClearSpecialEventGameUserSettings
struct UFortAthenaMutator_SpecialEvent_NetMulticast_CheatClearSpecialEventGameUserSettings_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase
struct UFortAthenaMutator_SpecialEvent_JumpToSafeZonePhase_Params
{
public:
	struct FVector                               PawnSpawnCenterLocation;                           // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PawnSpawnMinDistance;                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PawnSpawnMaxDistance;                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.HandleSpecialEventMannequinDestroyed
struct UFortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed_Params
{
public:
	class UActor*                                MannequinActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript
struct UFortAthenaMutator_SpecialEvent_GetScript_Params
{
public:
	class USpecialEventScript*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase
struct UFortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation
struct UFortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation_Params
{
public:
	struct FVector                               NewFinalLocation;                                  // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultAircraftOffsetFromMidLine;                  // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDefaultMidlineAngle;                            // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDefaultMidlineAngle;                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4865[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers
struct UFortAthenaMutator_SpecialEvent_FlushUnhandledPlayerControllers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes
struct UFortAthenaMutator_SpecialEvent_CloseParachutes_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions
struct UFortAthenaMutator_SpecialEvent_ClearBlockedNativeActions_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint
struct UFortAthenaMutator_SpecialEvent_ClearAdditionalViewpoint_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition
struct UFortAthenaMutator_SpecialEvent_ChangeWinCondition_Params
{
public:
	float                                        NewGoalScore;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore
struct UFortAthenaMutator_SpecialEvent_AutobalanceTargetScore_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions
struct UFortAthenaMutator_SpecialEvent_AddToBlockedNativeActions_Params
{
public:
	struct FGameplayTagContainer                 Actions;                                           // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bCancelAbilities;                                  // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_486C[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent
struct UFortAthenaMutator_SpecialEvent_AddCSVEvent_Params
{
public:
	class FString                                CSVEventName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRepToClient;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_486E[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent
struct UFortAthenaMutator_SpecialEvent_AddClientCSVEvent_Params
{
public:
	class FString                                CSVEventName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x7F0 (0x7F0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.UpdateCameraBP
struct UFortCameraMode_SpecialEventFocalPoint_UpdateCameraBP_Params
{
public:
	class UActor*                                ViewTarget;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48A5[0x4];                                     // Fixing Size After Last Property 
	struct FTViewTarget                          OutVT;                                             // 0x10(0x7E0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.SetOverrideTransitionTime
struct UFortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime_Params
{
public:
	float                                        InTransitionTime;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeInactiveBP
struct UFortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP_Params
{
public:
	class UActor*                                ViewTarget;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeActiveBP
struct UFortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP_Params
{
public:
	class UActor*                                ViewTarget;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform
struct UFortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent
struct UFortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent_Params
{
public:
	struct FVector                               BoxOffsetPercent;                                  // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor
struct UFortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed
struct UFortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsMultiplier;                                     // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48BE[0x3];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed
struct UFortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsMultiplier;                                     // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C1[0x3];                                     // Fixing Size After Last Property 
	float                                        InterpSpeed;                                       // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData
struct UFortCharacterMovementMutatorComponent_OnRep_BuffetFlyingRicochetReplicatedData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor
struct UFortCharacterMovementMutatorComponent_OnRep_BuffetBubblesFollowActor_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged
struct UFortCharacterMovementMutatorComponent_OnMovementModeChanged_Params
{
public:
	class UCharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     PreviousMovementMode;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C6[0x6];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortCharacterMovementMutator.OnFortPawnChanged
struct UFortCharacterMovementMutator_OnFortPawnChanged_Params
{
public:
	class UFortPawn*                             NewPawn;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget
struct UFortControllerComponent_GameplayCinematic_ShowCinematicWidget_Params
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay
struct UFortControllerComponent_GameplayCinematic_SetReadyForGameplay_Params
{
public:
	bool                                         bIsReady;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished
struct UFortControllerComponent_GameplayCinematic_ServerOnGameplayIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay
struct UFortControllerComponent_GameplayCinematic_OnRep_bIsReadyForGameplay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen
struct UFortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen_Params
{
public:
	bool                                         bHideElements;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent
struct UFortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent
struct UFortControllerComponent_SpecialEvent_SendSpecialClientEvent_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner.BP_OnActorSpawnedPerRelevancyGroup
struct UFortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup_Params
{
public:
	TArray<class UActor*>                        InSpawnedActors;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime
struct USpecialEventAudioAnalysisBaseComponent_UpdateTime_Params
{
public:
	float                                        NewTime;                                           // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset
struct USpecialEventAudioAnalysisBaseComponent_UpdateOnset_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness
struct USpecialEventAudioAnalysisBaseComponent_UpdateLoudness_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ
struct USpecialEventAudioAnalysisBaseComponent_UpdateConstantQ_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT
struct USpecialEventAudioAnalysisBaseComponent_GetOnsetNRT_Params
{
public:
	class UOnsetNRT*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT
struct USpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT_Params
{
public:
	class ULoudnessNRT*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness
struct USpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT
struct USpecialEventAudioAnalysisBaseComponent_GetConstantQNRT_Params
{
public:
	class UConstantQNRT*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics
struct USpecialEventAudioHapticsComponent_StopHaptics_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics
struct USpecialEventAudioHapticsComponent_StartHaptics_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive
struct USpecialEventAudioHapticsComponent_AreHapticsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface.SpecialEventCursorTrace
struct USpecialEventCursorInstigatorInterface_SpecialEventCursorTrace_Params
{
public:
	struct FHitResult                            OutHitResult;                                      // 0x0(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USpecialEventCursorPawnComponent*      CursorPawnComponent;                               // 0xE0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CursorModeTag;                                     // 0xE8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4931[0x4];                                     // Fixing Size After Last Property 
	class UCameraComponent*                      CameraComponent;                                   // 0xF0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CursorWorldDirection;                              // 0xF8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x110(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4933[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetZoomAllowed
struct USpecialEventCursorPawnComponent_SetZoomAllowed_Params
{
public:
	bool                                         bInZoomAllowed;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAllowOnNonOwningClients
struct USpecialEventCursorPawnComponent_SetAllowOnNonOwningClients_Params
{
public:
	bool                                         bAllow;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAdditiveRotationAllowed
struct USpecialEventCursorPawnComponent_SetAdditiveRotationAllowed_Params
{
public:
	bool                                         bInAdditiveRotationAllowed;                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ServerOnWorldLocationChanged
struct USpecialEventCursorPawnComponent_ServerOnWorldLocationChanged_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PushCursor
struct USpecialEventCursorPawnComponent_PushCursor_Params
{
public:
	struct FGameplayTag                          CursorModeTag;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4954[0x4];                                     // Fixing Size After Last Property 
	class UObject*                               InstigatingObject;                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivate;                                         // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4955[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopCursor
struct USpecialEventCursorPawnComponent_PopCursor_Params
{
public:
	struct FGameplayTag                          CursorModeTag;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4957[0x4];                                     // Fixing Size After Last Property 
	class UObject*                               InstigatingObject;                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeactivateIfStackEmpty;                           // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4958[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopAllCursorsForObject
struct USpecialEventCursorPawnComponent_PopAllCursorsForObject_Params
{
public:
	class UObject*                               InstigatingObject;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeactivateIfStackEmpty;                           // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_495C[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedWorldLocation
struct USpecialEventCursorPawnComponent_OnRep_ReplicatedWorldLocation_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedCursorStackEntry
struct USpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry_Params
{
public:
	struct FSpecialEventCursorStackEntry         OldCursorStackEntry;                               // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_bAllowOnNonOwningClients
struct USpecialEventCursorPawnComponent_OnRep_bAllowOnNonOwningClients_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnLocallyControlledCursorVisibilityChanged
struct USpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged_Params
{
public:
	class USpecialEventCursorPawnComponent*      CursorPawnComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CursorModeTag;                                     // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBeVisible;                                  // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4967[0x3];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnInputMethodChanged
struct USpecialEventCursorPawnComponent_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnHUDPostRender
struct USpecialEventCursorPawnComponent_OnHUDPostRender_Params
{
public:
	class UHUD*                                  HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvas*                               Canvas;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.MoveInputUpdate
struct USpecialEventCursorPawnComponent_MoveInputUpdate_Params
{
public:
	struct FVector                               InInputVector;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.LookInputUpdate
struct USpecialEventCursorPawnComponent_LookInputUpdate_Params
{
public:
	struct FVector                               InInputVector;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsZoomAllowed
struct USpecialEventCursorPawnComponent_IsZoomAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsLocallyControlled
struct USpecialEventCursorPawnComponent_IsLocallyControlled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsAdditiveRotationAllowed
struct USpecialEventCursorPawnComponent_IsAdditiveRotationAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.InputPressed
struct USpecialEventCursorPawnComponent_InputPressed_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPressed;                                          // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4984[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GyroInputUpdate
struct USpecialEventCursorPawnComponent_GyroInputUpdate_Params
{
public:
	struct FVector                               InInputVector;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetWorldLocationAndDirection
struct USpecialEventCursorPawnComponent_GetWorldLocationAndDirection_Params
{
public:
	struct FVector                               OutWorldLocation;                                  // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutWorldDirection;                                 // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4992[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportSize
struct USpecialEventCursorPawnComponent_GetViewportSize_Params
{
public:
	struct FVector2D                             OutViewportSize;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4996[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportLocation
struct USpecialEventCursorPawnComponent_GetViewportLocation_Params
{
public:
	struct FVector2D                             OutViewportLocation;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_499C[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportCenter
struct USpecialEventCursorPawnComponent_GetViewportCenter_Params
{
public:
	struct FVector2D                             OutViewportCenter;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49A2[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetSpecialEventCursorPawnComponent
struct USpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent_Params
{
public:
	class UPawn*                                 Pawn;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CursorModeTag;                                     // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustBeActive;                                     // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B0[0x3];                                     // Fixing Size After Last Property 
	class USpecialEventCursorPawnComponent*      ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetNormalizedLocation
struct USpecialEventCursorPawnComponent_GetNormalizedLocation_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetLocalController
struct USpecialEventCursorPawnComponent_GetLocalController_Params
{
public:
	class UPlayerController*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetInputType
struct USpecialEventCursorPawnComponent_GetInputType_Params
{
public:
	enum class ECommonInputType                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCursorModeTagsForWidget
struct USpecialEventCursorPawnComponent_GetCursorModeTagsForWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x8(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentWidget
struct USpecialEventCursorPawnComponent_GetCurrentWidget_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentHitResult
struct USpecialEventCursorPawnComponent_GetCurrentHitResult_Params
{
public:
	struct FHitResult                            OutHitResult;                                      // 0x0(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49C8[0x7];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentCursorModeTag
struct USpecialEventCursorPawnComponent_GetCurrentCursorModeTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCenteredWidgetLocation
struct USpecialEventCursorPawnComponent_GetCenteredWidgetLocation_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportLocation;                                  // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCameraComponent
struct USpecialEventCursorPawnComponent_GetCameraComponent_Params
{
public:
	class UCameraComponent*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToViewportLocation
struct USpecialEventCursorPawnComponent_ConvertWorldToViewportLocation_Params
{
public:
	struct FVector2D                             OutViewportLocation;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldLocation;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D0[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToNormalizedLocation
struct USpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation_Params
{
public:
	struct FVector2D                             OutNormalizedLocation;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldLocation;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D5[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToWorldLocationAndDirection
struct USpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection_Params
{
public:
	struct FVector                               OutWorldLocation;                                  // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutWorldDirection;                                 // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportLocation;                                  // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49DB[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToNormalizedLocation
struct USpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation_Params
{
public:
	struct FVector2D                             OutNormalizedLocation;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ViewportLocation;                                  // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E1[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToWorldLocationAndDirection
struct USpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection_Params
{
public:
	struct FVector                               OutWorldLocation;                                  // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutWorldDirection;                                 // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NormalizedLocation;                                // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E3[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToViewportLocation
struct USpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation_Params
{
public:
	struct FVector2D                             OutViewportLocation;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             NormalizedLocation;                                // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49EB[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.CanBeVisible
struct USpecialEventCursorPawnComponent_CanBeVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnUnEquip
struct USpecialEventCursorWeaponComponent_OnUnEquip_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnRep_CursorPawnComponent
struct USpecialEventCursorWeaponComponent_OnRep_CursorPawnComponent_Params
{
public:
};

// 0xF0 (0xF0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnPlayImpactFX
struct USpecialEventCursorWeaponComponent_OnPlayImpactFX_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitResult;                                         // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UFXSystemComponent*                    FXSystemComponent;                                 // 0xE8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnGetAimRotOverride
struct USpecialEventCursorWeaponComponent_OnGetAimRotOverride_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAbilityTargetingSource       TargetingSource;                                   // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A22[0x7];                                     // Fixing Size After Last Property 
	struct FRotator                              OutOverride;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOutExecutionResult;                               // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A23[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnEquip
struct USpecialEventCursorWeaponComponent_OnEquip_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnBeamFired
struct USpecialEventCursorWeaponComponent_OnBeamFired_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePersistentBeam;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A2C[0x7];                                     // Fixing Size After Last Property 
	class UFXSystemComponent*                    PSC;                                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BeamOrigin;                                        // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x30(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForWeapon
struct USpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon_Params
{
public:
	class UFortWeapon*                           Weapon;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpecialEventCursorPawnComponent*      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForCurrentWeapon
struct USpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpecialEventCursorPawnComponent*      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCursorPawnComponent
struct USpecialEventCursorWeaponComponent_GetCursorPawnComponent_Params
{
public:
	class USpecialEventCursorPawnComponent*      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentSpecialEventCursorWeaponComponent
struct USpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent_Params
{
public:
	class UFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpecialEventCursorWeaponComponent*    ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentHitResult
struct USpecialEventCursorWeaponComponent_GetCurrentHitResult_Params
{
public:
	struct FHitResult                            OutHitResult;                                      // 0x0(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A3B[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.StreamOutAllBuildingFoundations
struct USpecialEventGameplayLibrary_StreamOutAllBuildingFoundations_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetNextLoadingScreen
struct USpecialEventGameplayLibrary_SetNextLoadingScreen_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAthenaLoadingScreenItemDefinition*    LoadingScreenDefinition;                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowLoadingBar;                                // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A49[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetLODOnLandscapProxies
struct USpecialEventGameplayLibrary_SetLODOnLandscapProxies_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForced;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A4D[0x3];                                     // Fixing Size After Last Property 
	int32                                        InLODValue;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.HideSkydivingShadowProxy
struct USpecialEventGameplayLibrary_HideSkydivingShadowProxy_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript
struct USpecialEventGameplayLibrary_GetSpecialEventScript_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpecialEventScript*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventPlayerDisplayName
struct USpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName_Params
{
public:
	class UFortPlayerControllerAthena*           LocalController;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerStateAthena*                PlayerState;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator
struct USpecialEventGameplayLibrary_GetSpecialEventMutator_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaMutator_SpecialEvent*       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x268 (0x268 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetLocalPlayerLoadout
struct USpecialEventGameplayLibrary_GetLocalPlayerLoadout_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAthenaLoadout                    ReturnValue;                                       // 0x8(0x260)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetHasInfiniteSafeZonePhase
struct USpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A63[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass
struct USpecialEventGameplayLibrary_ForceUpdateGrass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceDestroyComponents
struct USpecialEventGameplayLibrary_ForceDestroyComponents_Params
{
public:
	TArray<class UActorComponent*>               Components;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bPromoteChildren;                                  // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A6B[0x7];                                     // Fixing Size After Last Property 
	class FString                                LogContext;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent
struct USpecialEventGameplayLibrary_FindSpecialEventComponent_Params
{
public:
	class UController*                           Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortControllerComponent_SpecialEvent* ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent
struct USpecialEventGameplayLibrary_FindGameplayCinematicComponent_Params
{
public:
	class UController*                           Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortControllerComponent_GameplayCinematic* ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawnFromComponent
struct USpecialEventGameplayLibrary_DetachPawnFromComponent_Params
{
public:
	class UFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Component;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   LocationRule;                                      // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   RotationRule;                                      // 0x11(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   ScaleRule;                                         // 0x12(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x13(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A77[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawn
struct USpecialEventGameplayLibrary_DetachPawn_Params
{
public:
	class UFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   LocationRule;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   RotationRule;                                      // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   ScaleRule;                                         // 0xA(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A7B[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.CreateSpecialEventPlayerEliminationWorldMarker
struct USpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker_Params
{
public:
	class UFortPlayerControllerAthena*           LocalController;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerStateAthena*                VictimPlayerState;                                 // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DeathLocation;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AttachPawnToComponent
struct USpecialEventGameplayLibrary_AttachPawnToComponent_Params
{
public:
	class UFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Component;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   LocationRule;                                      // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   RotationRule;                                      // 0x15(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   ScaleRule;                                         // 0x16(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeldSimulatedBodies;                              // 0x17(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A8E[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventRecentElimination
struct USpecialEventGameplayLibrary_AddSpecialEventRecentElimination_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerStateAthena*                PlayerState;                                       // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventKillFeedEntry
struct USpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerStateAthena*                VictimPlayerState;                                 // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlayerStateAthena*                KillerPlayerState;                                 // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  NonPlayerVictimName;                               // 0x18(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class FText                                  NonPlayerKillerName;                               // 0x30(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DeathCauseTag;                                     // 0x48(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDeathCauseReason                 DeathCauseReason;                                  // 0x4C(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A9C[0x3];                                     // Fixing Size After Last Property 
	float                                        Distance;                                          // 0x50(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A9D[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync
struct UFortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync_Params
{
public:
	class UController*                           Conroller;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_GameplayCinematicComponentReady* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ToggleDebug
struct USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_ToggleDebug_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_SetData
struct USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_LogData
struct USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_LogData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ClearData
struct USpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_ClearData_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetSavingBlocked
struct USpecialEventGameUserSettingsControllerComponent_SetSavingBlocked_Params
{
public:
	bool                                         bBlocked;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetData
struct USpecialEventGameUserSettingsControllerComponent_SetData_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSave;                                        // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveNow;                                          // 0x11(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AC0[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.ParseLoadedData
struct USpecialEventGameUserSettingsControllerComponent_ParseLoadedData_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetSpecialEventGameUserSettingsControllerComponent
struct USpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpecialEventGameUserSettingsControllerComponent* ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetData
struct USpecialEventGameUserSettingsControllerComponent_GetData_Params
{
public:
	enum class ESpecialEventGameUserSettingsResult OutResult;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ACE[0x7];                                     // Fixing Size After Last Property 
	class FString                                OutData;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady.SpecialEventGameUserSettingsReadyAsync
struct UFortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAsyncAction_SpecialEventGameUserSettingsReady* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility
struct USpecialEventPhase_SetHUDElementVisibility_Params
{
public:
	struct FGameplayTagContainer                 HUDElementTags;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bHideElements;                                     // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AE2[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server
struct USpecialEventPhase_PrePhaseActivation_Server_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState
struct USpecialEventPhase_OnRep_PhaseState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished
struct USpecialEventPhase_OnPhaseFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server
struct USpecialEventPhase_OnPhaseDeactivation_Server_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client
struct USpecialEventPhase_OnPhaseDeactivation_Client_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server
struct USpecialEventPhase_OnPhaseActivation_Server_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client
struct USpecialEventPhase_OnPhaseActivation_Client_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag
struct USpecialEventPhase_GetPhaseTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase
struct USpecialEventPhase_DebugActivatePhase_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator
struct USpecialEventPlayerMannequin_RegisterWithSpecialEventMutator_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded
struct USpecialEventPlayerMannequin_HandleOnMutatorAdded_Params
{
public:
	class UFortGameplayMutator*                  NewMutator;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents
struct USpecialEventPlayerMannequin_DestroyUnusedSkeletalMeshComponents_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent.TryStartRewinding
struct USpecialEventRewindComponent_TryStartRewinding_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlaybackSpeed;                                     // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B0A[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent.OnRep_StateData
struct USpecialEventRewindComponent_OnRep_StateData_Params
{
public:
	struct FSpecialEventRewindComponentStateData OldStateData;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn.OnServerLanded
struct USpecialEventRewindComponent_PlayerPawn_OnServerLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.UpdateMasterSequence
struct USpecialEventScript_UpdateMasterSequence_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex
struct USpecialEventScript_StartEventAtIndex_Params
{
public:
	int32                                        InStartingIndex;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.SetLocalPlayersSignificantForSpecialEventSequence
struct USpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence_Params
{
public:
	bool                                         bIsSignificant;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex
struct USpecialEventScript_OnRep_ReplicatedActivePhaseIndex_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.GetActivePhaseIndex
struct USpecialEventScript_GetActivePhaseIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady
struct USpecialEventScript_BP_OnScriptReady_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished
struct USpecialEventScript_BP_OnScriptFinished_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase
struct USpecialEventScript_AttemptStartNextPhase_Params
{
public:
	struct FGameplayTag                          CurrentPhaseTag;                                   // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase
struct USpecialEventScript_AttemptFinishPhase_Params
{
public:
	struct FGameplayTag                          PhaseTag;                                          // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime
struct USpecialEventScriptMeshActor_OnRep_RootStartTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent
struct USpecialEventScriptMeshActor_MeshRootStartEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly
struct USpecialEventScriptMeshActor_MeshRootStartCalendarTimerOnly_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer
struct USpecialEventScriptMeshActor_MeshRootStartCalendarTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent
struct USpecialEventScriptMeshActor_MeshRootResetEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer
struct USpecialEventScriptMeshActor_MeshRootLogCalendarTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer
struct USpecialEventScriptMeshActor_MeshRootClearCalendarTimer_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.GetStat
struct USpecialEventStatComponent_GetStat_Params
{
public:
	bool                                         bOutValid;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B49[0x3];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          LookupTag;                                         // 0x4(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpecialEventStatArrayEntry           ReturnValue;                                       // 0x8(0x40)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.GetSpecialEventStat
struct USpecialEventStatComponent_GetSpecialEventStat_Params
{
public:
	bool                                         bOutValid;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B4B[0x7];                                     // Fixing Size After Last Property 
	class UActor*                                Actor;                                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          LookupTag;                                         // 0x10(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B4D[0x4];                                     // Fixing Size After Last Property 
	struct FSpecialEventStatArrayEntry           ReturnValue;                                       // 0x18(0x40)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustStat
struct USpecialEventStatComponent_AdjustStat_Params
{
public:
	struct FGameplayTag                          LookupTag;                                         // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Adjustment;                                        // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLogError;                                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B4E[0x2];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustSpecialEventStat
struct USpecialEventStatComponent_AdjustSpecialEventStat_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          LookupTag;                                         // 0x8(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Adjustment;                                        // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventGameplayRuntime.DamageRecordEntry.OnRep_DamageTotal
struct UDamageRecordEntry_OnRep_DamageTotal_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnKilled
struct USpecialRelevancyHealthComponent_OnKilled_Params
{
public:
	class UFortPlayerState*                      KillingPlayerState;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelevancyGroupIndex;                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B5A[0x4];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnDamaged
struct USpecialRelevancyHealthComponent_OnDamaged_Params
{
public:
	class UFortPlayerState*                      DamagingPlayerState;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RelevancyGroupIndex;                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DealtDamage;                                       // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualDealtDamage;                                 // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDamage;                                       // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DealtDamagePercent;                                // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualDealtDamagePercent;                          // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalDamagePercent;                                // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHealth;                                         // 0x24(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKilled;                                           // 0x28(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B5F[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercentFromRelevancyIndex
struct USpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercent
struct USpecialRelevancyHealthComponent_GetHealthPercent_Params
{
public:
	class UActor*                                RelevancyActor;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B66[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthFromRelevancyIndex
struct USpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealth
struct USpecialRelevancyHealthComponent_GetHealth_Params
{
public:
	class UActor*                                RelevancyActor;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B6C[0x4];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealthPercent
struct USpecialRelevancyHealthComponent_ClientGetHealthPercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealth
struct USpecialRelevancyHealthComponent_ClientGetHealth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


