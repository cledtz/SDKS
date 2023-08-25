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

// 0x4 (0x4 - 0x0)
// Function WindRuntime.WindCheatManager.ReleaseBalloonOnSelf
struct UWindCheatManager_ReleaseBalloonOnSelf_Params
{
public:
	int32                                        NumBalloons;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function WindRuntime.WindCheatManager.InflateBalloonOnSelf
struct UWindCheatManager_InflateBalloonOnSelf_Params
{
public:
	int32                                        NumBalloons;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function WindRuntime.WindField.SetActive
struct UWindField_SetActive_Params
{
public:
	bool                                         bInIsActive;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function WindRuntime.WindField.RemoveIgnoredActor
struct UWindField_RemoveIgnoredActor_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function WindRuntime.WindField.RemoveCollider
struct UWindField_RemoveCollider_Params
{
public:
	class UShapeComponent*                       ShapeComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function WindRuntime.WindField.OnEndOverlap
struct UWindField_OnEndOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Other;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ECD[0x4];                                     // Fixing Size Of Struct
};

// 0x100 (0x100 - 0x0)
// Function WindRuntime.WindField.OnBeginOverlap
struct UWindField_OnBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Other;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED1[0x3];                                     // Fixing Size After Last Property 
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function WindRuntime.WindField.AddIgnoredActor
struct UWindField_AddIgnoredActor_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function WindRuntime.WindField.AddCollider
struct UWindField_AddCollider_Params
{
public:
	class UShapeComponent*                       ShapeComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function WindRuntime.WindSplineComponent.OnRep_TargetData
struct UWindSplineComponent_OnRep_TargetData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WindRuntime.WindSplineComponent.OnRep_Blockages
struct UWindSplineComponent_OnRep_Blockages_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WindRuntime.WindSplineComponent.HandleSafeZoneUpdated
struct UWindSplineComponent_HandleSafeZoneUpdated_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function WindRuntime.WindSplineComponent.GetWindDataAtLocation
struct UWindSplineComponent_GetWindDataAtLocation_Params
{
public:
	struct FVector                               InTargetLocation;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutDirection;                                      // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutAttenuation;                                    // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE7[0x4];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function WindRuntime.WindSplineComponent.GetTargetingRadius
struct UWindSplineComponent_GetTargetingRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function WindRuntime.WindSplineComponent.GetClosestActiveLocations
struct UWindSplineComponent_GetClosestActiveLocations_Params
{
public:
	struct FVector                               InTargetLocation;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsClosestPointActive;                             // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EEA[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               ClosestPointOnSpline;                              // 0x20(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       ClosestActiveLocations;                            // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function WindRuntime.WindSplineComponent.Enable
struct UWindSplineComponent_Enable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WindRuntime.WindSplineComponent.Disable
struct UWindSplineComponent_Disable_Params
{
public:
};

}
}


