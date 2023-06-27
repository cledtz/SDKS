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

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
struct UAnimNotifyState_MotionWarping_OnWarpUpdate_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
struct UAnimNotifyState_MotionWarping_OnWarpEnd_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
struct UAnimNotifyState_MotionWarping_OnWarpBegin_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
struct UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
struct UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
struct UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                   Modifier;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
struct UAnimNotifyState_MotionWarping_AddRootMotionModifier_Params
{
public:
	class UMotionWarpingComponent*               MotionWarpingComp;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier*                   ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
struct UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Params
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMotionWarpingWindowData>      OutWindows;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
struct UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Params
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WarpTargetName;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413C[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FMotionWarpingWindowData>      OutWindows;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
struct UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Params
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget
struct UMotionWarpingComponent_RemoveWarpTarget_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
struct UMotionWarpingComponent_DisableAllRootMotionModifiers_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413D[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               TargetLocation;                                    // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413F[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               TargetLocation;                                    // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Params
{
public:
	class FName                                  WarpTargetName;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4140[0x4];                                     // Fixing Size After Last Property..
	class USceneComponent*                       Component;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFollowComponent;                                  // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4141[0x3];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
struct UMotionWarpingComponent_AddOrUpdateWarpTarget_Params
{
public:
	struct FMotionWarpingTarget                  WarpTarget;                                        // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
struct URootMotionModifier_Scale_AddRootMotionModifierScale_Params
{
public:
	class UMotionWarpingComponent*               InMotionWarpingComp;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     InAnimation;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InStartTime;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InEndTime;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InScale;                                           // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URootMotionModifier_Scale*             ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
struct URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Params
{
public:
	class UMotionWarpingComponent*               InMotionWarpingComp;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     InAnimation;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InStartTime;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InEndTime;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InWarpTargetName;                                  // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWarpPointAnimProvider            InWarpPointAnimProvider;                           // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414D[0x3];                                     // Fixing Size After Last Property..
	struct FTransform                            InWarpPointAnimTransform;                          // 0x20(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InWarpPointAnimBoneName;                           // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInWarpTranslation;                                // 0x84(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIgnoreZAxis;                                    // 0x85(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInWarpRotation;                                   // 0x86(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMotionWarpRotationType           InRotationType;                                    // 0x87(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMotionWarpRotationMethod         InRotationMethod;                                  // 0x88(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414E[0x3];                                     // Fixing Size After Last Property..
	float                                        InWarpRotationTimeMultiplier;                      // 0x8C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InWarpMaxRotationRate;                             // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414F[0x4];                                     // Fixing Size After Last Property..
	class URootMotionModifier_SkewWarp*          ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
