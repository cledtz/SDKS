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

// 0xE8 (0xE8 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo
struct ABuildingGameplayActorSupplyDropRadio_UpdateGroundInfo_Params
{
public:
	bool                                         bValidBlock;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_807F[0x7];                                     // Fixing Size After Last Property..
	struct FHitResult                            MovementHitResult;                                 // 0x8(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetGravityMultiplier
struct ABuildingGameplayActorSupplyDropRadio_SetGravityMultiplier_Params
{
public:
	float                                        InGravityMultiplier;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState
struct ABuildingGameplayActorSupplyDropRadio_SetBalloonState_Params
{
public:
	enum class ESupplyDropRadioBalloonState      InBalloonState;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop
struct ABuildingGameplayActorSupplyDropRadio_OpenSupplyDrop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen
struct ABuildingGameplayActorSupplyDropRadio_OnRep_DistanceFromOriginalSpawnLocForBalloonOpen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState
struct ABuildingGameplayActorSupplyDropRadio_OnRep_BalloonState_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving
struct ABuildingGameplayActorSupplyDropRadio_IsMoving_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded
struct ABuildingGameplayActorSupplyDropRadio_IsGrounded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.HandleMoveIgnoredActorEndPlay
struct ABuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay_Params
{
public:
	class AActor*                                EndPlayActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    Reason;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8080[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent
struct ABuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent_Params
{
public:
	class UBoxComponent*                         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetHighestAttachParent
struct ABuildingGameplayActorSupplyDropRadio_GetHighestAttachParent_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ
struct ABuildingGameplayActorSupplyDropRadio_GetGravityZ_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState
struct ABuildingGameplayActorSupplyDropRadio_GetBalloonState_Params
{
public:
	enum class ESupplyDropRadioBalloonState      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent.SetOwningActorNetCullDistance
struct UFortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance_Params
{
public:
	float                                        DistanceSquared;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.StopCurrentConversation
struct UFortSupplyDropRadioBlueprintLibrary_StopCurrentConversation_Params
{
public:
	class AFortPlayerControllerGameplay*         PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary.SetMoveShouldAbortConversation
struct UFortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation_Params
{
public:
	class AFortPlayerControllerGameplay*         PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewMoveAbortConversation;                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8084[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
