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

// 0x30 (0x30 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_AimOffset
struct USlidingLayerAnimBP_C_MovementMode_AimOffset_Params
{
public:
	struct FPoseLink                             InAimOffsetsPose;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InSourcePosePreAimOffsets;                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_AimOffset;                            // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_FinalPoseOverride
struct USlidingLayerAnimBP_C_MovementMode_FinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_FinalPoseOverride;                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_FullBodyOverride
struct USlidingLayerAnimBP_C_MovementMode_FullBodyOverride_Params
{
public:
	struct FPoseLink                             InputPoseFullBody;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_FullBodyOverride;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_SourcePose
struct USlidingLayerAnimBP_C_MovementMode_SourcePose_Params
{
public:
	struct FPoseLink                             InSourcePoseBase;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_SourcePose;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LowerBodyOverride
struct USlidingLayerAnimBP_C_MovementMode_LowerBodyOverride_Params
{
public:
	struct FPoseLink                             InLowerBodyPose;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InSourcePose;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LowerBodyOverride;                    // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LocomotionAdditives
struct USlidingLayerAnimBP_C_MovementMode_LocomotionAdditives_Params
{
public:
	struct FPoseLink                             InLocomotionAdditivesPose;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LocomotionAdditives;                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimGraph
struct USlidingLayerAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintUpdateAnimation
struct USlidingLayerAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintInitializeAnimation
struct USlidingLayerAnimBP_C_BlueprintInitializeAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6
struct USlidingLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6_Params
{
public:
};

// 0x2C (0x2C - 0x0)
// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.ExecuteUbergraph_SlidingLayerAnimBP
struct USlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NormalizeToRange_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Abs_A_ImplicitCast;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
