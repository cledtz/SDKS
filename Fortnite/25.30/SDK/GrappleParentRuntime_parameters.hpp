#pragma once

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

// 0x0 (0x0 - 0x0)
// Function GrappleParentRuntime.FortCameraModifier_Swinging.RemoveSelfFromCameraManager
struct UFortCameraModifier_Swinging_RemoveSelfFromCameraManager_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GrappleParentRuntime.FortCameraModifier_Swinging.CalculateDynamicMultipliers
struct UFortCameraModifier_Swinging_CalculateDynamicMultipliers_Params
{
public:
	float                                        OutFOVBoundsMultiplier;                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutBoostOffsetMultiplier;                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetPlayerAnglesFromAttachPoint
struct UFortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint_Params
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GrappleParentRuntime.FortSwingingLayerAnimInstance.GetAttachVectorInPlayerSpace
struct UFortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace_Params
{
public:
	struct FVector                               InPlayerToAttachPoint;                             // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
