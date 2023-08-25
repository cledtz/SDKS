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

// 0x38 (0x38 - 0x0)
// Function Mover.MoverBasePawn.OnProduceInputInBlueprint
struct UMoverBasePawn_OnProduceInputInBlueprint_Params
{
public:
	float                                        DeltaMs;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26F3[0x4];                                     // Fixing Size After Last Property 
	struct FKinematicMoverInputCmdContext        InputCmd;                                          // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FKinematicMoverInputCmdContext        ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Mover.MoverBasePawn.GetMoverComponent
struct UMoverBasePawn_GetMoverComponent_Params
{
public:
	class UKinematicMoverComponent*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function Mover.MoverDataModelBlueprintLibrary.GetVelocityFromSyncState
struct UMoverDataModelBlueprintLibrary_GetVelocityFromSyncState_Params
{
public:
	struct FMoverDefaultSyncState                SyncState;                                         // 0x0(0xF0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xF0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2706[0x8];                                     // Fixing Size Of Struct
};

// 0x110 (0x110 - 0x0)
// Function Mover.MoverDataModelBlueprintLibrary.GetOrientationFromSyncState
struct UMoverDataModelBlueprintLibrary_GetOrientationFromSyncState_Params
{
public:
	struct FMoverDefaultSyncState                SyncState;                                         // 0x0(0xF0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0xF0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_270A[0x8];                                     // Fixing Size Of Struct
};

// 0x110 (0x110 - 0x0)
// Function Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromSyncState
struct UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromSyncState_Params
{
public:
	struct FMoverDefaultSyncState                SyncState;                                         // 0x0(0xF0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xF0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2711[0x8];                                     // Fixing Size Of Struct
};

// 0x88 (0x88 - 0x0)
// Function Mover.MoverDataModelBlueprintLibrary.GetMoveDirectionIntentFromInputs
struct UMoverDataModelBlueprintLibrary_GetMoveDirectionIntentFromInputs_Params
{
public:
	struct FKinematicDefaultInputs               Inputs;                                            // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x70(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function Mover.MoverDataModelBlueprintLibrary.GetLocationFromSyncState
struct UMoverDataModelBlueprintLibrary_GetLocationFromSyncState_Params
{
public:
	struct FMoverDefaultSyncState                SyncState;                                         // 0x0(0xF0)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xF0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271C[0x8];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function Mover.MoverDataCollectionLibrary.K2_GetDataFromCollection
struct UMoverDataCollectionLibrary_K2_GetDataFromCollection_Params
{
public:
	bool                                         DidSucceed;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2733[0x7];                                     // Fixing Size After Last Property 
	struct FMoverDataCollection                  Collection;                                        // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        TargetAsRawBytes;                                  // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2736[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function Mover.MoverDataCollectionLibrary.K2_AddDataToCollection
struct UMoverDataCollectionLibrary_K2_AddDataToCollection_Params
{
public:
	struct FMoverDataCollection                  Collection;                                        // 0x0(0x18)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        SourceAsRawBytes;                                  // 0x18(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_273A[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function Mover.KinematicMoverComponent.SetHistoryTracking
struct UKinematicMoverComponent_SetHistoryTracking_Params
{
public:
	float                                        SecondsToTrack;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SamplesPerSecond;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Mover.KinematicMoverComponent.PhysicsVolumeChanged
struct UKinematicMoverComponent_PhysicsVolumeChanged_Params
{
public:
	class UPhysicsVolume*                        NewVolume;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Mover.KinematicMoverComponent.OnHistoryTrackingRollback
struct UKinematicMoverComponent_OnHistoryTrackingRollback_Params
{
public:
	struct FMoverTimeStep                        NewTimeStep;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMoverTimeStep                        InvalidatedTimeStep;                               // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Mover.KinematicMoverComponent.OnBeginOverlap
struct UKinematicMoverComponent_OnBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Other;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274E[0x3];                                     // Fixing Size After Last Property 
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Mover.KinematicMoverComponent.K2_QueueLayeredMove
struct UKinematicMoverComponent_K2_QueueLayeredMove_Params
{
public:
	int32                                        MoveAsRawData;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Mover.KinematicMoverComponent.IsOnGround
struct UKinematicMoverComponent_IsOnGround_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Mover.KinematicMoverComponent.IsFalling
struct UKinematicMoverComponent_IsFalling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Mover.KinematicMoverComponent.IsAirborne
struct UKinematicMoverComponent_IsAirborne_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Mover.KinematicMoverComponent.HasValidCachedState
struct UKinematicMoverComponent_HasValidCachedState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Mover.KinematicMoverComponent.HasValidCachedInputCmd
struct UKinematicMoverComponent_HasValidCachedInputCmd_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Mover.KinematicMoverComponent.GetVelocity
struct UKinematicMoverComponent_GetVelocity_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Mover.KinematicMoverComponent.GetTargetOrientation
struct UKinematicMoverComponent_GetTargetOrientation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Mover.KinematicMoverComponent.GetSyncState
struct UKinematicMoverComponent_GetSyncState_Params
{
public:
	struct FKinematicMoverSyncState              ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Mover.KinematicMoverComponent.GetPastTrajectory
struct UKinematicMoverComponent_GetPastTrajectory_Params
{
public:
	TArray<struct FTrajectorySampleInfo>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Mover.KinematicMoverComponent.GetMovementModeName
struct UKinematicMoverComponent_GetMovementModeName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Mover.KinematicMoverComponent.GetMovementIntent
struct UKinematicMoverComponent_GetMovementIntent_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Mover.KinematicMoverComponent.GetMovementBaseBoneName
struct UKinematicMoverComponent_GetMovementBaseBoneName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Mover.KinematicMoverComponent.GetMovementBase
struct UKinematicMoverComponent_GetMovementBase_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Mover.KinematicMoverComponent.GetLastInputCmd
struct UKinematicMoverComponent_GetLastInputCmd_Params
{
public:
	struct FKinematicMoverInputCmdContext        ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Mover.KinematicMoverComponent.GetFutureTrajectory
struct UKinematicMoverComponent_GetFutureTrajectory_Params
{
public:
	float                                        FutureSeconds;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SamplesPerSecond;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTrajectorySampleInfo>         ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Mover.BaseMovementMode.K2_OnUnregistered
struct UBaseMovementMode_K2_OnUnregistered_Params
{
public:
};

// 0x1B8 (0x1B8 - 0x0)
// Function Mover.BaseMovementMode.K2_OnSimulationTick
struct UBaseMovementMode_K2_OnSimulationTick_Params
{
public:
	struct FSimulationTickParams                 Params;                                            // 0x0(0x110)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FKinematicMoverTickEndData            ReturnValue;                                       // 0x110(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Mover.BaseMovementMode.K2_OnRegistered
struct UBaseMovementMode_K2_OnRegistered_Params
{
public:
	class FName                                  ModeName;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Mover.BaseMovementMode.K2_OnGenerateMove
struct UBaseMovementMode_K2_OnGenerateMove_Params
{
public:
	struct FKinematicMoverTickStartData          StartState;                                        // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMoverTimeStep                        TimeStep;                                          // 0x70(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FProposedMove                         ReturnValue;                                       // 0x80(0x80)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Mover.BaseMovementMode.GetBlackboard_Mutable
struct UBaseMovementMode_GetBlackboard_Mutable_Params
{
public:
	class UMoverBlackboard*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Mover.BaseMovementMode.GetBlackboard
struct UBaseMovementMode_GetBlackboard_Params
{
public:
	class UMoverBlackboard*                      ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// Function Mover.FallingMode.OnSimulationTick
struct UFallingMode_OnSimulationTick_Params
{
public:
	struct FSimulationTickParams                 Params;                                            // 0x0(0x110)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FKinematicMoverTickEndData            OutputState;                                       // 0x110(0xA8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Mover.FallingMode.OnGenerateMove
struct UFallingMode_OnGenerateMove_Params
{
public:
	struct FKinematicMoverTickStartData          StartState;                                        // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMoverTimeStep                        TimeStep;                                          // 0x70(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FProposedMove                         OutProposedMove;                                   // 0x80(0x80)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// Function Mover.FlyingMode.OnSimulationTick
struct UFlyingMode_OnSimulationTick_Params
{
public:
	struct FSimulationTickParams                 Params;                                            // 0x0(0x110)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FKinematicMoverTickEndData            OutputState;                                       // 0x110(0xA8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Mover.FlyingMode.OnGenerateMove
struct UFlyingMode_OnGenerateMove_Params
{
public:
	struct FKinematicMoverTickStartData          StartState;                                        // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMoverTimeStep                        TimeStep;                                          // 0x70(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FProposedMove                         OutProposedMove;                                   // 0x80(0x80)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// Function Mover.WalkingMode.OnSimulationTick
struct UWalkingMode_OnSimulationTick_Params
{
public:
	struct FSimulationTickParams                 Params;                                            // 0x0(0x110)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FKinematicMoverTickEndData            OutputState;                                       // 0x110(0xA8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Mover.WalkingMode.OnGenerateMove
struct UWalkingMode_OnGenerateMove_Params
{
public:
	struct FKinematicMoverTickStartData          StartState;                                        // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMoverTimeStep                        TimeStep;                                          // 0x70(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FProposedMove                         OutProposedMove;                                   // 0x80(0x80)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Mover.MovementBaseUtils.TransformWorldRotatorToBased
struct UMovementBaseUtils_TransformWorldRotatorToBased_Params
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DB[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              WorldSpaceRotator;                                 // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              OutLocalRotator;                                   // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DE[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function Mover.MovementBaseUtils.TransformWorldLocationToBased
struct UMovementBaseUtils_TransformWorldLocationToBased_Params
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EC[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               WorldSpaceLocation;                                // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocalLocation;                                  // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27EF[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function Mover.MovementBaseUtils.TransformWorldDirectionToBased
struct UMovementBaseUtils_TransformWorldDirectionToBased_Params
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2802[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               WorldSpaceDirection;                               // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocalDirection;                                 // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2803[0x7];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// Function Mover.MovementBaseUtils.TransformRotatorToWorld
struct UMovementBaseUtils_TransformRotatorToWorld_Params
{
public:
	struct FQuat                                 BaseQuat;                                          // 0x0(0x20)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              LocalRotator;                                      // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              OutWorldSpaceRotator;                              // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Mover.MovementBaseUtils.TransformRotatorToLocal
struct UMovementBaseUtils_TransformRotatorToLocal_Params
{
public:
	struct FQuat                                 BaseQuat;                                          // 0x0(0x20)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              WorldSpaceRotator;                                 // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              OutLocalRotator;                                   // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Mover.MovementBaseUtils.TransformLocationToWorld
struct UMovementBaseUtils_TransformLocationToWorld_Params
{
public:
	struct FVector                               BasePos;                                           // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2843[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 BaseQuat;                                          // 0x20(0x20)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalLocation;                                     // 0x40(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocationWorldSpace;                             // 0x58(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Mover.MovementBaseUtils.TransformLocationToLocal
struct UMovementBaseUtils_TransformLocationToLocal_Params
{
public:
	struct FVector                               BasePos;                                           // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2853[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 BaseQuat;                                          // 0x20(0x20)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldSpaceLocation;                                // 0x40(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocalLocation;                                  // 0x58(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Mover.MovementBaseUtils.TransformDirectionToWorld
struct UMovementBaseUtils_TransformDirectionToWorld_Params
{
public:
	struct FQuat                                 BaseQuat;                                          // 0x0(0x20)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalDirection;                                    // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutDirectionWorldSpace;                            // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Mover.MovementBaseUtils.TransformDirectionToLocal
struct UMovementBaseUtils_TransformDirectionToLocal_Params
{
public:
	struct FQuat                                 BaseQuat;                                          // 0x0(0x20)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldSpaceDirection;                               // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocalDirection;                                 // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Mover.MovementBaseUtils.TransformBasedRotatorToWorld
struct UMovementBaseUtils_TransformBasedRotatorToWorld_Params
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285F[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              LocalRotator;                                      // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              OutWorldSpaceRotator;                              // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2860[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function Mover.MovementBaseUtils.TransformBasedLocationToWorld
struct UMovementBaseUtils_TransformBasedLocationToWorld_Params
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2862[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               LocalLocation;                                     // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocationWorldSpace;                             // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2863[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function Mover.MovementBaseUtils.TransformBasedDirectionToWorld
struct UMovementBaseUtils_TransformBasedDirectionToWorld_Params
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2868[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               LocalDirection;                                    // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutDirectionWorldSpace;                            // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286A[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function Mover.MovementBaseUtils.IsADynamicBase
struct UMovementBaseUtils_IsADynamicBase_Params
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286E[0x7];                                     // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// Function Mover.MovementBaseUtils.GetMovementBaseTransform
struct UMovementBaseUtils_GetMovementBaseTransform_Params
{
public:
	class UPrimitiveComponent*                   MovementBase;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2874[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               OutLocation;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2876[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 OutQuat;                                           // 0x30(0x20)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2877[0xF];                                     // Fixing Size Of Struct
};

// 0x1A0 (0x1A0 - 0x0)
// Function Mover.MovementUtils.TryWalkToSlideAlongSurface
struct UMovementUtils_TryWalkToSlideAlongSurface_Params
{
public:
	class USceneComponent*                       UpdatedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Delta;                                             // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PctOfDeltaToMove;                                  // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2886[0x4];                                     // Fixing Size After Last Property 
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x50(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x68(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHandleImpact;                                     // 0x148(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2887[0x7];                                     // Fixing Size After Last Property 
	struct FMovementRecord                       MoveRecord;                                        // 0x150(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        MaxWalkSlopeCosine;                                // 0x198(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x19C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function Mover.MovementUtils.TrySafeMoveUpdatedComponent
struct UMovementUtils_TrySafeMoveUpdatedComponent_Params
{
public:
	class USceneComponent*                       UpdatedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Delta;                                             // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2893[0x8];                                     // Fixing Size After Last Property 
	struct FQuat                                 NewRotation;                                       // 0x30(0x20)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSweep;                                            // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2895[0x7];                                     // Fixing Size After Last Property 
	struct FHitResult                            OutHit;                                            // 0x58(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class ETeleportType                     Teleport;                                          // 0x138(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2897[0x7];                                     // Fixing Size After Last Property 
	struct FMovementRecord                       MoveRecord;                                        // 0x140(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x188(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2898[0x7];                                     // Fixing Size Of Struct
};

// 0x1A0 (0x1A0 - 0x0)
// Function Mover.MovementUtils.TryMoveToSlideAlongSurface
struct UMovementUtils_TryMoveToSlideAlongSurface_Params
{
public:
	class USceneComponent*                       UpdatedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Delta;                                             // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PctOfDeltaToMove;                                  // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A2[0x4];                                     // Fixing Size After Last Property 
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x50(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x68(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHandleImpact;                                     // 0x148(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A4[0x7];                                     // Fixing Size After Last Property 
	struct FMovementRecord                       MoveRecord;                                        // 0x150(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x198(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A7[0x4];                                     // Fixing Size Of Struct
};

// 0x2A0 (0x2A0 - 0x0)
// Function Mover.MovementUtils.TryMoveToFallAlongSurface
struct UMovementUtils_TryMoveToFallAlongSurface_Params
{
public:
	class USceneComponent*                       UpdatedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Delta;                                             // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PctOfDeltaToMove;                                  // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B3[0x4];                                     // Fixing Size After Last Property 
	struct FQuat                                 Rotation;                                          // 0x30(0x20)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x50(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x68(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHandleImpact;                                     // 0x148(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B5[0x3];                                     // Fixing Size After Last Property 
	float                                        FloorSweepDistance;                                // 0x14C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWalkSlopeCosine;                                // 0x150(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B6[0x4];                                     // Fixing Size After Last Property 
	struct FFloorCheckResult                     OutFloorResult;                                    // 0x158(0xF0)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FMovementRecord                       MoveRecord;                                        // 0x248(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x290(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B8[0xC];                                     // Fixing Size Of Struct
};

// 0x208 (0x208 - 0x0)
// Function Mover.MovementUtils.IsValidLandingSpot
struct UMovementUtils_IsValidLandingSpot_Params
{
public:
	class USceneComponent*                       UpdatedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x28(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        FloorSweepDistance;                                // 0x108(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWalkSlopeCosine;                                // 0x10C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloorCheckResult                     OutFloorResult;                                    // 0x110(0xF0)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x200(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CB[0x7];                                     // Fixing Size Of Struct
};

// 0xE8 (0xE8 - 0x0)
// Function Mover.MovementUtils.IsHitSurfaceWalkable
struct UMovementUtils_IsHitSurfaceWalkable_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        MaxWalkSlopeCosine;                                // 0xE0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D2[0x3];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function Mover.MovementUtils.IsExceedingMaxSpeed
struct UMovementUtils_IsExceedingMaxSpeed_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMaxSpeed;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D8[0x3];                                     // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// Function Mover.MovementUtils.ConstrainToPlane
struct UMovementUtils_ConstrainToPlane_Params
{
public:
	struct FVector                               Vector;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D9[0x8];                                     // Fixing Size After Last Property 
	struct FPlane                                MovementPlane;                                     // 0x20(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainMagnitude;                                // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28DA[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Mover.MovementUtils.ComputeVelocityFromPositions
struct UMovementUtils_ComputeVelocityFromPositions_Params
{
public:
	struct FVector                               FromPos;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ToPos;                                             // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E8[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Mover.MovementUtils.ComputeVelocityFromGravity
struct UMovementUtils_ComputeVelocityFromGravity_Params
{
public:
	struct FVector                               GravityAccel;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F0[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Mover.MovementUtils.ComputeVelocity
struct UMovementUtils_ComputeVelocity_Params
{
public:
	struct FComputeVelocityParams                InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function Mover.MovementUtils.ComputeSlideDelta
struct UMovementUtils_ComputeSlideDelta_Params
{
public:
	struct FVector                               Delta;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PctOfDeltaToMove;                                  // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2902[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Normal;                                            // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x38(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x118(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Mover.MovementUtils.ComputeDirectionIntent
struct UMovementUtils_ComputeDirectionIntent_Params
{
public:
	struct FVector                               MoveInput;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMoveInputType                    MoveInputType;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2909[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function Mover.MovementUtils.ComputeDeflectedMoveOntoRamp
struct UMovementUtils_ComputeDeflectedMoveOntoRamp_Params
{
public:
	struct FVector                               OrigMoveDelta;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            RampHitResult;                                     // 0x18(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        MaxWalkSlopeCosine;                                // 0xF8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitFromLineTrace;                                 // 0xFC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290E[0x3];                                     // Fixing Size After Last Property 
	struct FVector                               ReturnValue;                                       // 0x100(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// Function Mover.MovementUtils.ComputeControlledGroundMove
struct UMovementUtils_ComputeControlledGroundMove_Params
{
public:
	struct FGroundMoveParams                     InParams;                                          // 0x0(0xC8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FProposedMove                         ReturnValue;                                       // 0xC8(0x80)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function Mover.MovementUtils.ComputeControlledFreeMove
struct UMovementUtils_ComputeControlledFreeMove_Params
{
public:
	struct FFreeMoveParams                       InParams;                                          // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FProposedMove                         ReturnValue;                                       // 0xB0(0x80)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Mover.MovementUtils.ComputeAngularVelocity
struct UMovementUtils_ComputeAngularVelocity_Params
{
public:
	struct FRotator                              From;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              To;                                                // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurningRateLimit;                                  // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function Mover.MovementUtils.CanStepUpOnHitSurface
struct UMovementUtils_CanStepUpOnHitSurface_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292E[0x7];                                     // Fixing Size Of Struct
};

// 0xA8 (0xA8 - 0x0)
// Function Mover.MovementUtils.AdjustProposedMoveForRootMotion
struct UMovementUtils_AdjustProposedMoveForRootMotion_Params
{
public:
	struct FProposedMove                         MoveToAdjust;                                      // 0x0(0x80)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x80(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GroundNormal;                                      // 0x88(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0xA0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293B[0x4];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function Mover.PlayMoverMontageCallbackProxy.OnMoverMontageEnded
struct UPlayMoverMontageCallbackProxy_OnMoverMontageEnded_Params
{
public:
	class FName                                  IgnoredNotifyName;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Mover.PlayMoverMontageCallbackProxy.CreateProxyObjectForPlayMoverMontage
struct UPlayMoverMontageCallbackProxy_CreateProxyObjectForPlayMoverMontage_Params
{
public:
	class UKinematicMoverComponent*              InMoverComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          MontageToPlay;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingPosition;                                  // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartingSection;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295B[0x4];                                     // Fixing Size After Last Property 
	class UPlayMoverMontageCallbackProxy*        ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


