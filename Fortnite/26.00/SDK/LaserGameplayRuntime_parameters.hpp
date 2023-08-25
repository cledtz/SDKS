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

// 0x1 (0x1 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.SetLaserGridEnable
struct UBuildingGameplayActorLaserGrid_SetLaserGridEnable_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_LaserGridConnections
struct UBuildingGameplayActorLaserGrid_OnRep_LaserGridConnections_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_bEnabled
struct UBuildingGameplayActorLaserGrid_OnRep_bEnabled_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridTriggered
struct UBuildingGameplayActorLaserGrid_LaserGridTriggered_Params
{
public:
	struct FLaserGridConnectionEntry             LaserConnectionData;                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UActor*                                TriggeringActor;                                   // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridStateUpdated
struct UBuildingGameplayActorLaserGrid_LaserGridStateUpdated_Params
{
public:
	bool                                         bLaserGridEnabled;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PreTransition
struct UBuildingGameplayActorLaserGrid_HandlePatternTimerComplete_PreTransition_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PostTransition
struct UBuildingGameplayActorLaserGrid_HandlePatternTimerComplete_PostTransition_Params
{
public:
};

// 0x100 (0x100 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleLaserCollisionOverlap
struct UBuildingGameplayActorLaserGrid_HandleLaserCollisionOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A78[0x3];                                     // Fixing Size After Last Property 
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleAttachedBuildingActorDied
struct UBuildingGameplayActorLaserGrid_HandleAttachedBuildingActorDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A80[0x4];                                     // Fixing Size After Last Property 
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A82[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.GetActiveLaserGridConnections
struct UBuildingGameplayActorLaserGrid_GetActiveLaserGridConnections_Params
{
public:
	TArray<struct FLaserGridConnectionEntry>     OutActiveLaserGridConnections;                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CosmeticDestroyOutletInstance
struct UBuildingGameplayActorLaserGrid_CosmeticDestroyOutletInstance_Params
{
public:
	struct FLaserGridOutletEntry                 OutletEntry;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CanActorTriggerLaserGrid
struct UBuildingGameplayActorLaserGrid_CanActorTriggerLaserGrid_Params
{
public:
	class UActor*                                TriggeringActor;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A97[0x7];                                     // Fixing Size Of Struct
};

}
}


