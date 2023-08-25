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

// 0x20 (0x20 - 0x0)
// Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap
struct UOverlapComponent_OnEndActorOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF4[0x4];                                     // Fixing Size Of Struct
};

// 0x100 (0x100 - 0x0)
// Function PlayspaceSystem.OverlapComponent.OnBeginActorOverlap
struct UOverlapComponent_OnBeginActorOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF6[0x3];                                     // Fixing Size After Last Property 
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
struct UPlayspaceControllerComponent_PlayerSpawning_ServerMarkReadyForSpawning_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
struct UPlayspaceControllerComponent_PlayerSpawning_OnRep_ReplicatedSpawnInfo_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
struct UPlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo_Params
{
public:
	struct FReplicatedSpawnInfo                  ReturnValue;                                       // 0x0(0x58)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ClientReplicatedSpawnInfo
struct UPlayspaceControllerComponent_PlayerSpawning_ClientReplicatedSpawnInfo_Params
{
public:
	struct FReplicatedSpawnInfo                  InReplicatedSpawnInfo;                             // 0x0(0x58)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PlayspaceSystem.GameplayVolume.UpdateSize
struct UGameplayVolume_UpdateSize_Params
{
public:
	struct FVector                               NewScale;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PlayspaceSystem.GameplayVolume.OnOverlappedPawnControllerChanged
struct UGameplayVolume_OnOverlappedPawnControllerChanged_Params
{
public:
	class UPawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           OldController;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UController*                           NewController;                                     // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayspaceSystem.GameplayVolume.InitializeBoundsComponent
struct UGameplayVolume_InitializeBoundsComponent_Params
{
public:
	class UOverlapComponent*                     NewBoundsComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayspaceSystem.GameplayVolume.GetPlayspace
struct UGameplayVolume_GetPlayspace_Params
{
public:
	class UPlayspace*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
struct UPlayspace_OnRep_PlayspaceUsers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.Playspace.OnRep_MatchStartTime
struct UPlayspace_OnRep_MatchStartTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
struct UPlayspace_OnRep_bMatchHasEnded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.Playspace.OnRep_bIsInitialized
struct UPlayspace_OnRep_bIsInitialized_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function PlayspaceSystem.PlayspaceComponent_PlayerManager.OnPlayerPawnSet
struct UPlayspaceComponent_PlayerManager_OnPlayerPawnSet_Params
{
public:
	class UPlayerState*                          Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 OldPawn;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function PlayspaceSystem.PlayspaceLibrary.GetPlayspaceForActor
struct UPlayspaceLibrary_GetPlayspaceForActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                InActor;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayspace*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function PlayspaceSystem.PlayspaceLibrary.DestroyPlayspace
struct UPlayspaceLibrary_DestroyPlayspace_Params
{
public:
	class UPlayspace*                            PlayspaceToDestroy;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime
struct UPlayspaceLogic_OnRep_MatchStartTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded
struct UPlayspaceLogic_OnRep_bMatchHasEnded_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
struct UPlayspaceManagerComponent_ProcessOverlapEvents_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C43[0x3];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace
struct UPlayspaceManagerComponent_OnRep_RootPlayspace_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
struct UPlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume_Params
{
public:
	class UPlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayVolume*                       Volume;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
struct UPlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume_Params
{
public:
	class UPlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayVolume*                       Volume;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


