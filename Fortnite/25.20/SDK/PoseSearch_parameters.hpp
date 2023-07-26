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
// Function PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabaseToSearch
struct UMotionMatchingAnimNodeLibrary_SetDatabaseToSearch_Params
{
public:
	struct FMotionMatchingAnimNodeReference      MotionMatchingNode;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UPoseSearchDatabase*                   Database;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceInterruptIfNew;                              // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2D[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabasesToSearch
struct UMotionMatchingAnimNodeLibrary_SetDatabasesToSearch_Params
{
public:
	struct FMotionMatchingAnimNodeReference      MotionMatchingNode;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UPoseSearchDatabase*>           Databases;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bForceInterruptIfNew;                              // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2E[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function PoseSearch.MotionMatchingAnimNodeLibrary.ResetDatabasesToSearch
struct UMotionMatchingAnimNodeLibrary_ResetDatabasesToSearch_Params
{
public:
	struct FMotionMatchingAnimNodeReference      MotionMatchingNode;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bForceInterrupt;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2F[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function PoseSearch.MotionMatchingAnimNodeLibrary.ForceInterruptNextUpdate
struct UMotionMatchingAnimNodeLibrary_ForceInterruptNextUpdate_Params
{
public:
	struct FMotionMatchingAnimNodeReference      MotionMatchingNode;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNodePure
struct UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNodePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FMotionMatchingAnimNodeReference      MotionMatchingNode;                                // 0x10(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E30[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNode
struct UMotionMatchingAnimNodeLibrary_ConvertToMotionMatchingNode_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E31[0x7];                                     // Fixing Size After Last Property..
	struct FMotionMatchingAnimNodeReference      ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function PoseSearch.PoseSearchLibrary.MotionMatch
struct UPoseSearchLibrary_MotionMatch_Params
{
public:
	class UAnimInstance*                         AnimInstance;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseSearchDatabase*                   Database;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSearchQueryTrajectory            Trajectory;                                        // 0x10(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
	float                                        TrajectorySpeedMultiplier;                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PoseHistoryName;                                   // 0x24(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       SelectedAnimation;                                 // 0x28(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelectedTime;                                      // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x34(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMirrored;                                       // 0x35(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E46[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               BlendParameters;                                   // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SearchCost;                                        // 0x50(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E47[0x4];                                     // Fixing Size After Last Property..
	class UAnimationAsset*                       FutureAnimation;                                   // 0x58(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FutureAnimationStartTime;                          // 0x60(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToFutureAnimationStart;                        // 0x64(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugSessionUniqueIdentifier;                      // 0x68(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E48[0x4];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
