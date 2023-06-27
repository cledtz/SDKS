#pragma once

// Dumper.

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

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.FortPoiSwapManager.SwapPoi
struct UFortPoiSwapManager_SwapPoi_Params
{
public:
	class AFortPoiVolume*                        PoiToSwap;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CreativeRoyaleRuntime.FortPoiSwapManager.SetPoiSubPlot
struct UFortPoiSwapManager_SetPoiSubPlot_Params
{
public:
	class AFortPoiVolume*                        POIVolume;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubPlotName;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubPlotLinkCode;                                   // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.FortPoiSwapManager.OnPrePlayspaceContentUnload
struct UFortPoiSwapManager_OnPrePlayspaceContentUnload_Params
{
public:
	class AFortPoiSwapPlayspace*                 PoiSwapPlayspace;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CreativeRoyaleRuntime.FortPoiSwapManager.OnPlayspaceContentLoadingStateChanged
struct UFortPoiSwapManager_OnPlayspaceContentLoadingStateChanged_Params
{
public:
	class AFortPoiSwapPlayspace*                 PoiSwapPlayspace;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPoiSwapUserContentState      ContentLoadingState;                               // 0x8(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2309[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CreativeRoyaleRuntime.FortPoiSwapManager.GetPoiSubPlotLinkCode
struct UFortPoiSwapManager_GetPoiSubPlotLinkCode_Params
{
public:
	class AFortPoiVolume*                        POIVolume;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CreativeRoyaleRuntime.FortPoiSwapManager.GetPlayspaceForPoi
struct UFortPoiSwapManager_GetPlayspaceForPoi_Params
{
public:
	class AFortPoiVolume*                        POIVolume;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPoiSwapPlayspace*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CreativeRoyaleRuntime.FortPoiSwapPlayspace.OnUserContentUnloaded
struct AFortPoiSwapPlayspace_OnUserContentUnloaded_Params
{
public:
	struct FAsyncTaskResult                      Result;                                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.FortPoiSwapPlayspace.OnUserContentLoaded
struct AFortPoiSwapPlayspace_OnUserContentLoaded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.StartLootClustering
struct UAthenaAIServicePlayerBots_CreativeRoyale_StartLootClustering_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.OnPlayerJoiningInProgress
struct UAthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress_Params
{
public:
	class AFortPlayerState*                      FortPlayerState;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveParentToAttachToInformation
struct UCreativeRoyalePlayspaceComponent_LevelReset_SaveParentToAttachToInformation_Params
{
public:
	struct FGuid                                 ActorToAttachGuid;                                 // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorToAttach;                                     // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveDamagedActor
struct UCreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.SaveActorToBeRespawned
struct UCreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned_Params
{
public:
	class AActor*                                ActorToBeRespawned;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveDamagedActor;                               // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230D[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.RestoreAttachedBuildingActors
struct UCreativeRoyalePlayspaceComponent_LevelReset_RestoreAttachedBuildingActors_Params
{
public:
	struct FGuid                                 SpawnableActorGuid;                                // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.RespawnDeadActors
struct UCreativeRoyalePlayspaceComponent_LevelReset_RespawnDeadActors_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.OnSpawningFromSaveFinish
struct UCreativeRoyalePlayspaceComponent_LevelReset_OnSpawningFromSaveFinish_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.OnPlotLoadComplete
struct UCreativeRoyalePlayspaceComponent_LevelReset_OnPlotLoadComplete_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleMinigameStateChanged
struct UCreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                NewMinigameState;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230E[0x7];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDied
struct UCreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230F[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2310[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDestroyed
struct UCreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDestroyed_Params
{
public:
	TWeakObjectPtr<class ABuildingActor>         DestroyedBuilding;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.HandleBuildingDamaged
struct UCreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2311[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2312[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.GetPoiSwapManager
struct UCreativeRoyalePlayspaceComponent_LevelReset_GetPoiSwapManager_Params
{
public:
	class UFortPoiSwapManager*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.GetLevelSaveRecord
struct UCreativeRoyalePlayspaceComponent_LevelReset_GetLevelSaveRecord_Params
{
public:
	class ULevelSaveRecord*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.DestroyDamagedActors
struct UCreativeRoyalePlayspaceComponent_LevelReset_DestroyDamagedActors_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.ClearFoundActors
struct UCreativeRoyalePlayspaceComponent_LevelReset_ClearFoundActors_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.CachePoiSwapManager
struct UCreativeRoyalePlayspaceComponent_LevelReset_CachePoiSwapManager_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.BindActorToCallbacks
struct UCreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset.AddActorToTrack
struct UCreativeRoyalePlayspaceComponent_LevelReset_AddActorToTrack_Params
{
public:
	class AActor*                                ActorToTrack;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlotLoadComplete
struct UCreativeRoyalePlayspaceComponent_LoadingScreen_OnPlotLoadComplete_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnPlayspaceUserAdded
struct UCreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded_Params
{
public:
	struct FPlayspaceUser                        AddedUser;                                         // 0x0(0x58)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen.OnMinigameStateChanged
struct UCreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                MinigameState;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2315[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.OnSpawningFromSaveFinish
struct UCreativeRoyalePlayspaceComponent_RemoveItems_OnSpawningFromSaveFinish_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.OnPlotLoadComplete
struct UCreativeRoyalePlayspaceComponent_RemoveItems_OnPlotLoadComplete_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems.HandleMinigameStateChanged
struct UCreativeRoyalePlayspaceComponent_RemoveItems_HandleMinigameStateChanged_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                NewMinigameState;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2319[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayersToPlayerStarts
struct ACreativeRoyaleRootPlayspace_TeleportPlayersToPlayerStarts_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnRep_bHasPlotLoaded
struct ACreativeRoyaleRootPlayspace_OnRep_bHasPlotLoaded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnPlotLoadComplete
struct ACreativeRoyaleRootPlayspace_OnPlotLoadComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.Cheat_LoadEditorIsland
struct ACreativeRoyaleRootPlayspace_Cheat_LoadEditorIsland_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.BuildDataRegistryResolverScope_Implementation
struct ACreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation_Params
{
public:
	TArray<class FName>                          InOutResolverScopes;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        InOutPriority;                                     // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_231B[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.TeleportToPlotAferLoad
struct UFortCheatManager_CreativeRoyale_TeleportToPlotAferLoad_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleTeleportToEditZone
struct UFortCheatManager_CreativeRoyale_CreativeRoyaleTeleportToEditZone_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleResetIslandFile
struct UFortCheatManager_CreativeRoyale_CreativeRoyaleResetIslandFile_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleLoadEditPlot
struct UFortCheatManager_CreativeRoyale_CreativeRoyaleLoadEditPlot_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.OnPlayerLoggedIn
struct UFortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.LoadPlotFromProject
struct UFortProjectEditComponent_CreativeRoyale_LoadPlotFromProject_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
