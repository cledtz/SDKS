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
// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.GetAutoAimWeaponPawnComponent
struct UAutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent_Params
{
public:
	class UFortPawn*                             SourcePawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAutoAimWeaponPawnComponent*           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.FindBestAutoAimTarget
struct UAutoAimWeaponKismetLibrary_FindBestAutoAimTarget_Params
{
public:
	class UFortPawn*                             OutTargetPawn;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutReticleDistance;                                // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46D7[0x4];                                     // Fixing Size After Last Property 
	class UFortPlayerPawn*                       SourcePawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReticleSize;                                       // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponReticleIntersectTarget
struct UAutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget_Params
{
public:
	float                                        OutReticleDistance;                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46E7[0x4];                                     // Fixing Size After Last Property 
	class UFortPawn*                             SourcePawn;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             TargetPawn;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReticleSize;                                       // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46EA[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary.DoesAutoAimWeaponHaveLineOfSight
struct UAutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight_Params
{
public:
	class UFortPawn*                             SourcePawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             TargetPawn;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46FA[0x7];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetTargetToReticleDistanceNormalized
struct UAutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnTargetLocation
struct UAutoAimWeaponPawnComponent_GetLockOnTargetLocation_Params
{
public:
	struct FVector                               OutLockTargetLocation;                             // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4710[0x7];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetLockOnProgress
struct UAutoAimWeaponPawnComponent_GetLockOnProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AutoAimWeaponRuntime.AutoAimWeaponPawnComponent.GetCurrentLockOnCount
struct UAutoAimWeaponPawnComponent_GetCurrentLockOnCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


