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

// 0x248 (0x248 - 0x0)
// Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT
struct UDagwoodNetworkPhysicsComponent_SetState_GT_Params
{
public:
	struct FDagwoodInPersistent                  In;                                                // 0x0(0x248)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd
struct UDagwoodNetworkPhysicsComponent_SetPendingInputCmd_Params
{
public:
	struct FFortDagwoodCmd                       In;                                                // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature
struct UDagwoodNetworkPhysicsComponent_OnGeneratedLocalInputCmd__DelegateSignature_Params
{
public:
};

// 0x1B8 (0x1B8 - 0x0)
// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT
struct UDagwoodNetworkPhysicsComponent_GetState_PT_Params
{
public:
	struct FDagwoodState_PT                      ReturnValue;                                       // 0x0(0x1B8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x248 (0x248 - 0x0)
// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT
struct UDagwoodNetworkPhysicsComponent_GetState_GT_Params
{
public:
	struct FDagwoodInPersistent                  ReturnValue;                                       // 0x0(0x248)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd
struct UDagwoodNetworkPhysicsComponent_GetPendingInputCmd_Params
{
public:
	struct FFortDagwoodCmd                       ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded
struct UFortAthenaMutator_OverrideValetVehicleParameters_OnPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3025[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 PlaylistContainerTags;                             // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged
struct UFortContextualTutorial_VehicleValetLowFuel_HandleVehicleStateChanged_Params
{
public:
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                NewVehicle;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OldVehicle;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation
struct UFortContextualTutorial_VehicleValetLowFuel_HandleStartSkydivingForActivation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.StartFade
struct UFortDagwoodVehicle_StartFade_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetValetAudioController
struct UFortDagwoodVehicle_SetValetAudioController_Params
{
public:
	class UFortValetAudioController*             ValetAudio;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeSpringsInfoOnServer
struct UFortDagwoodVehicle_SetRuntimeSpringsInfoOnServer_Params
{
public:
	struct FRuntimeSpringsInfo                   SpringsInfo;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeGravityOnServer
struct UFortDagwoodVehicle_SetRuntimeGravityOnServer_Params
{
public:
	float                                        GravMult;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeFuelInfoOnServer
struct UFortDagwoodVehicle_SetRuntimeFuelInfoOnServer_Params
{
public:
	struct FRuntimeFuelInfo                      FuelInfo;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeDriveInfoOnServer
struct UFortDagwoodVehicle_SetRuntimeDriveInfoOnServer_Params
{
public:
	float                                        MaxIncline;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTilt;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetRuntimeBoostInfoOnServer
struct UFortDagwoodVehicle_SetRuntimeBoostInfoOnServer_Params
{
public:
	struct FRuntimeBoostInfo                     BoostInfo;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetDamageInfoOnServer
struct UFortDagwoodVehicle_SetDamageInfoOnServer_Params
{
public:
	bool                                         bInDamageFriendlyVehicles;                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInDamageOtherVehicles;                            // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInDamageOwnVehicle;                               // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInDamageAllowedFromOtherVehicle;                  // 0x3(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration
struct UFortDagwoodVehicle_ServerSetFadeDuration_Params
{
public:
	float                                        NewFadeDuration;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated
struct UFortDagwoodVehicle_ServerSelfDestructActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup
struct UFortDagwoodVehicle_SelfDestructCleanup_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
struct UFortDagwoodVehicle_OnTickAudioFade_Params
{
public:
	float                                        FadeParam;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController
struct UFortDagwoodVehicle_OnTickAudioController_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake
struct UFortDagwoodVehicle_OnStopHandbrake_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake
struct UFortDagwoodVehicle_OnStartHandbrake_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
struct UFortDagwoodVehicle_OnServerAltInteract_Params
{
public:
	class UFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData
struct UFortDagwoodVehicle_OnRep_ServerRepWheelData_Params
{
public:
	TArray<struct FAttachedWheel>                PrevWheelData;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed
struct UFortDagwoodVehicle_OnRep_RandSeed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction
struct UFortDagwoodVehicle_OnRep_PoppedTireReaction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable
struct UFortDagwoodVehicle_OnRep_IsInoperable_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires
struct UFortDagwoodVehicle_OnRep_FakeTires_Params
{
public:
	TArray<enum class ETireStates>               PrevTireStates;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers
struct UFortDagwoodVehicle_OnRep_DagwoodRuntimeModifiers_Params
{
public:
	struct FDagwoodRuntimeModifiers              PrevMods;                                          // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
struct UFortDagwoodVehicle_OnInoperableChanged_Params
{
public:
	bool                                         bInoperable;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped
struct UFortDagwoodVehicle_OnHoldSelfDestructStopped_Params
{
public:
	class UFortPawn*                             DriverPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted
struct UFortDagwoodVehicle_OnHoldSelfDestructStarted_Params
{
public:
	class UFortPawn*                             DriverPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExitDuration;                                      // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3088[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage
struct UFortDagwoodVehicle_OnFlipImpactDamage_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
struct UFortDagwoodVehicle_OnDestroyedPropFromCollision_Params
{
public:
	class UBuildingActor*                        BuildingHitActor;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
struct UFortDagwoodVehicle_OnClientBeginAltInteract_Params
{
public:
	class UFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnBoostReady
struct UFortDagwoodVehicle_OnBoostReady_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed
struct UFortDagwoodVehicle_OnBoostFailed_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
struct UFortDagwoodVehicle_NativeCalculateAccelRumbleIntensity_Params
{
public:
	float                                        MaxIntensity;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.MakeOperable
struct UFortDagwoodVehicle_MakeOperable_Params
{
public:
	bool                                         bAddGas;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.MakeInoperable
struct UFortDagwoodVehicle_MakeInoperable_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding
struct UFortDagwoodVehicle_IsTireSkidding_Params
{
public:
	float                                        MinSpeedForSkid;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleForSkid;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedForPeelout;                                   // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedForBraking;                                   // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30A2[0x3];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape
struct UFortDagwoodVehicle_IsOnLandscape_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
struct UFortDagwoodVehicle_IsNativeBPTickEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded
struct UFortDagwoodVehicle_HandleCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30B2[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetTireSurface
struct UFortDagwoodVehicle_GetTireSurface_Params
{
public:
	enum class ETireLocations                    TireIndex;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETireSurfaces                     ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
struct UFortDagwoodVehicle_GetTireHealthPercent_Params
{
public:
	enum class ETireLocations                    TireIndex;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30B7[0x3];                                     // Fixing Size After Last Property 
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust
struct UFortDagwoodVehicle_GetMiddleAxleForwardAdjust_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties
struct UFortDagwoodVehicle_GetCurrentDagwoodRuntimeProperties_Params
{
public:
	struct FDagwoodRuntimeModifiers              ReturnValue;                                       // 0x0(0x70)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetBumpiness
struct UFortDagwoodVehicle_GetBumpiness_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
struct UFortDagwoodVehicle_ForwardOrReverseInputPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX
struct UFortDagwoodVehicle_CleanupLoopingPooledFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers
struct UFortDagwoodVehicle_ApplyRuntimeModifiers_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.AddRuntimeGearsInfoOnServer
struct UFortDagwoodVehicle_AddRuntimeGearsInfoOnServer_Params
{
public:
	struct FRuntimeGearInfo                      GearInfo;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement
struct UFortDagwoodVehicleManager_UpdatePropReplacement_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
struct UFortDagwoodVehicleManager_OnVehicleSpawnsUpdated_Params
{
public:
	class UFortVehicleItemDefinition*            VehicleItemDef;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        SpawnedVehicles;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NewVehicleCount;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_313E[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
struct UFortDagwoodVehicleManager_OnVehicleSpawned_Params
{
public:
	class UFortAthenaVehicle*                    Vehicle;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
struct UFortDagwoodVehicleManager_CustomHandleActorStreamedInEditor_Params
{
public:
	class UActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValetRuntime.FortValetAudioController.Update_Native
struct UFortValetAudioController_Update_Native_Params
{
public:
};

// 0x1E8 (0x1E8 - 0x0)
// Function ValetRuntime.FortValetAudioController.OnTireModApplied
struct UFortValetAudioController_OnTireModApplied_Params
{
public:
	struct FTireInfo                             AppliedTireMod;                                    // 0x0(0x1E8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native
struct UFortValetAudioController_OnSuspensionCollision_Native_Params
{
public:
	bool                                         OutResult;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_314A[0x3];                                     // Fixing Size After Last Property 
	float                                        OutMagnitude;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortValetAudioController.CacheValetVehicle
struct UFortValetAudioController_CacheValetVehicle_Params
{
public:
	class UFortDagwoodVehicle*                   InVehicle;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


