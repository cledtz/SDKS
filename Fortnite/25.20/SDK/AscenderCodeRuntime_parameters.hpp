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

// 0x1 (0x1 - 0x0)
// Function AscenderCodeRuntime.FortCheatManager_AscenderZipline.RemoveAscenders
struct UFortCheatManager_AscenderZipline_RemoveAscenders_Params
{
public:
	bool                                         bRemoveAscendersOn;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.SetupAscender
struct AFortAscenderZipline_SetupAscender_Params
{
public:
	bool                                         bFromConstruction;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromReplication;                                  // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation
struct AFortAscenderZipline_OnRep_TargetSplineEndLocation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle
struct AFortAscenderZipline_OnRep_PawnUsingHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation
struct AFortAscenderZipline_OnRep_InitialSplineEndLocation_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied
struct AFortAscenderZipline_HandlePawnUsingHandleDied_Params
{
public:
	class AFortPawn*                             DeadPawn;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged
struct AFortAscenderZipline_HandleFloorActorHealthChanged_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed
struct AFortAscenderZipline_HandleFloorActorDestroyed_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.GetTopComponent
struct AFortAscenderZipline_GetTopComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle
struct AFortAscenderZipline_GetPawnUsingHandle_Params
{
public:
	class AFortPlayerPawn*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride
struct AFortAscenderZipline_GetInteractComponentOverride_Params
{
public:
	class AFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent
struct AFortAscenderZipline_GetHandleComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle
struct AFortAscenderZipline_BP_HandleUpdatedLoweringHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable
struct AFortAscenderZipline_BP_HandleUpdatedLoweringCable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle
struct AFortAscenderZipline_BP_HandleStoppedLoweringHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable
struct AFortAscenderZipline_BP_HandleStoppedLoweringCable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle
struct AFortAscenderZipline_BP_HandleStartedLoweringHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable
struct AFortAscenderZipline_BP_HandleStartedLoweringCable_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle
struct AFortAscenderZipline_BP_HandlePlayerStoppedUsingHandle_Params
{
public:
	class AFortPlayerPawn*                       Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle
struct AFortAscenderZipline_BP_HandlePlayerStartedUsingHandle_Params
{
public:
	class AFortPlayerPawn*                       Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage
struct AFortAscenderZipline_ApplyStructureDamage_Params
{
public:
	class ABuildingSMActor*                      BuildingActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageSource;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
