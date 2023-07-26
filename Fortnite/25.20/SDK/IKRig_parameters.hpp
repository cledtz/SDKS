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

// 0x50 (0x50 - 0x0)
// Function IKRig.IKGoalCreatorInterface.AddIKGoals
struct UIKGoalCreatorInterface_AddIKGoals_Params
{
public:
	TMap<class FName, struct FIKRigGoal>         OutGoals;                                          // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoalTransform
struct UIKRigComponent_SetIKRigGoalTransform_Params
{
public:
	class FName                                  GoalName;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_445F[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x70(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x74(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4460[0x8];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
struct UIKRigComponent_SetIKRigGoalPositionAndRotation_Params
{
public:
	class FName                                  GoalName;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4461[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Position;                                          // 0x8(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositionAlpha;                                     // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAlpha;                                     // 0x44(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4462[0x8];                                     // Fixing Size Of Struct..
};

// 0x90 (0x90 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoal
struct UIKRigComponent_SetIKRigGoal_Params
{
public:
	struct FIKRigGoal                            Goal;                                              // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function IKRig.IKRigComponent.ClearAllGoals
struct UIKRigComponent_ClearAllGoals_Params
{
public:
};

// 0x160 (0x160 - 0x0)
// Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
struct UIKRetargeter_SetRootSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetRootSettings                   RootSettings;                                      // 0xF8(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
struct UIKRetargeter_SetGlobalSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FRetargetGlobalSettings               GlobalSettings;                                    // 0xF8(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_446A[0x4];                                     // Fixing Size Of Struct..
};

// 0x110 (0x110 - 0x0)
// Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
struct UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetChainSpeedPlantSettings        SpeedPlantSettings;                                // 0xF8(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TargetChainName;                                   // 0x10C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1A8 - 0x0)
// Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
struct UIKRetargeter_SetChainSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetChainSettings                  ChainSettings;                                     // 0xF8(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TargetChainName;                                   // 0x1A0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_446B[0x4];                                     // Fixing Size Of Struct..
};

// 0x178 (0x178 - 0x0)
// Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
struct UIKRetargeter_SetChainIKSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetChainIKSettings                IKSettings;                                        // 0xF8(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TargetChainName;                                   // 0x170(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_446C[0x4];                                     // Fixing Size Of Struct..
};

// 0x118 (0x118 - 0x0)
// Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
struct UIKRetargeter_SetChainFKSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetChainFKSettings                FKSettings;                                        // 0xF8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  TargetChainName;                                   // 0x110(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_446D[0x4];                                     // Fixing Size Of Struct..
};

// 0x160 (0x160 - 0x0)
// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
struct UIKRetargeter_GetRootSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTargetRootSettings                   ReturnValue;                                       // 0xF8(0x68)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
struct UIKRetargeter_GetRootSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OptionalProfileName;                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_446E[0x4];                                     // Fixing Size After Last Property..
	struct FTargetRootSettings                   OutSettings;                                       // 0x10(0x68)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
struct UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FRetargetGlobalSettings               ReturnValue;                                       // 0xF8(0x1C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_446F[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
struct UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OptionalProfileName;                               // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRetargetGlobalSettings               OutSettings;                                       // 0xC(0x1C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
struct UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IKGoalName;                                        // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4470[0x4];                                     // Fixing Size After Last Property..
	struct FTargetChainSettings                  ReturnValue;                                       // 0x10(0xA8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1A8 - 0x0)
// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
struct UIKRetargeter_GetChainSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0xF8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  TargetChainName;                                   // 0xF8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4471[0x4];                                     // Fixing Size After Last Property..
	struct FTargetChainSettings                  ReturnValue;                                       // 0x100(0xA8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
struct UIKRetargeter_GetChainSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetChainName;                                   // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OptionalProfileName;                               // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetChainSettings                  ReturnValue;                                       // 0x10(0xA8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
