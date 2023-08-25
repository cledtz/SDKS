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
// Function AscenderCodeRuntime.FortCheatManager_AscenderZipline.RemoveAscenders
struct UFortCheatManager_AscenderZipline_RemoveAscenders_Params
{
public:
	bool                                         bRemoveAscendersOn;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.SetupAscender
struct UFortAscenderZipline_SetupAscender_Params
{
public:
	bool                                         bFromConstruction;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromReplication;                                  // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation
struct UFortAscenderZipline_OnRep_TargetSplineEndLocation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle
struct UFortAscenderZipline_OnRep_PawnUsingHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation
struct UFortAscenderZipline_OnRep_InitialSplineEndLocation_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied
struct UFortAscenderZipline_HandlePawnUsingHandleDied_Params
{
public:
	class UFortPawn*                             DeadPawn;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged
struct UFortAscenderZipline_HandleFloorActorHealthChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed
struct UFortAscenderZipline_HandleFloorActorDestroyed_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.GetTopComponent
struct UFortAscenderZipline_GetTopComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle
struct UFortAscenderZipline_GetPawnUsingHandle_Params
{
public:
	class UFortPlayerPawn*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride
struct UFortAscenderZipline_GetInteractComponentOverride_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent
struct UFortAscenderZipline_GetHandleComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle
struct UFortAscenderZipline_BP_HandleUpdatedLoweringHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable
struct UFortAscenderZipline_BP_HandleUpdatedLoweringCable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle
struct UFortAscenderZipline_BP_HandleStoppedLoweringHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable
struct UFortAscenderZipline_BP_HandleStoppedLoweringCable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle
struct UFortAscenderZipline_BP_HandleStartedLoweringHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable
struct UFortAscenderZipline_BP_HandleStartedLoweringCable_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle
struct UFortAscenderZipline_BP_HandlePlayerStoppedUsingHandle_Params
{
public:
	class UFortPlayerPawn*                       Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle
struct UFortAscenderZipline_BP_HandlePlayerStartedUsingHandle_Params
{
public:
	class UFortPlayerPawn*                       Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage
struct UFortAscenderZipline_ApplyStructureDamage_Params
{
public:
	class UBuildingSMActor*                      BuildingActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageSource;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


