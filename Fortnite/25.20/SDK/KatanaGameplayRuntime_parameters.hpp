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

// 0x20 (0x20 - 0x0)
// Function KatanaGameplayRuntime.KatanaTargetingComponent.PerformPrimaryAttackTargeting
struct UKatanaTargetingComponent_PerformPrimaryAttackTargeting_Params
{
public:
	enum class EFortKatanaPrimaryAttackVariation AttackVariation;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4436[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function KatanaGameplayRuntime.KatanaTargetingComponent.PerformDashTargeting
struct UKatanaTargetingComponent_PerformDashTargeting_Params
{
public:
	struct FFortKatanaDashTargetingInfo          OutDashTargetingInfo;                              // 0x0(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4437[0x7];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// Function KatanaGameplayRuntime.AbilityTask_ApplyRootMotion_KatanaDashForce.ApplyRootMotion_KatanaDashForce
struct UAbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce_Params
{
public:
	class UGameplayAbility*                      InOwningAbility;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InTaskInstanceName;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_443A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               InTargetLocation;                                  // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InDuration;                                        // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InHeightAboveGround;                               // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInSetNewMovementMode;                             // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovementMode                     InMovementMode;                                    // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRestrictSpeedToExpected;                        // 0x32(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_443B[0x5];                                     // Fixing Size After Last Property..
	class UCurveVector*                          InPathOffsetCurve;                                 // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionFinishVelocityMode     InVelocityOnFinishMode;                            // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_443C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               InSetVelocityOnFinish;                             // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InClampVelocityOnFinish;                           // 0x60(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_443D[0x4];                                     // Fixing Size After Last Property..
	class UAbilityTask_ApplyRootMotion_KatanaDashForce* ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
