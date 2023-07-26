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

// 0x4 (0x4 - 0x0)
// Function MotionTrajectory.CharacterTrajectoryComponent.UpdateTrajectory
struct UCharacterTrajectoryComponent_UpdateTrajectory_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function MotionTrajectory.CharacterTrajectoryComponent.OnMovementUpdated
struct UCharacterTrajectoryComponent_OnMovementUpdated_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_886F[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               OldLocation;                                       // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OldVelocity;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function MotionTrajectory.CharacterMovementTrajectoryLibrary.StepCharacterMovementGroundPrediction
struct UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Params
{
public:
	float                                        InDeltaTime;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8872[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               InVelocity;                                        // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InAcceleration;                                    // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCharacterMovementComponent*           InCharacterMovementComponent;                      // 0x38(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutVelocity;                                       // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
