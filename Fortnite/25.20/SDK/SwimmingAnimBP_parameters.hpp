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
// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_AimOffset
struct USwimmingAnimBP_C_MovementMode_AimOffset_Params
{
public:
	struct FPoseLink                             InAimOffsetsPose;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InSourcePosePreAimOffsets;                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_AimOffset;                            // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_FinalPoseOverride
struct USwimmingAnimBP_C_MovementMode_FinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_FinalPoseOverride;                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_FullBodyOverride
struct USwimmingAnimBP_C_MovementMode_FullBodyOverride_Params
{
public:
	struct FPoseLink                             InputPoseFullBody;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_FullBodyOverride;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_LowerBodyOverride
struct USwimmingAnimBP_C_MovementMode_LowerBodyOverride_Params
{
public:
	struct FPoseLink                             InLowerBodyPose;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InSourcePose;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LowerBodyOverride;                    // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_LocomotionAdditives
struct USwimmingAnimBP_C_MovementMode_LocomotionAdditives_Params
{
public:
	struct FPoseLink                             InLocomotionAdditivesPose;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_LocomotionAdditives;                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.MovementMode_SourcePose
struct USwimmingAnimBP_C_MovementMode_SourcePose_Params
{
public:
	struct FPoseLink                             InSourcePoseBase;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementMode_SourcePose;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph
struct USwimmingAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.On Dive Jump Ground Land Update
struct USwimmingAnimBP_C_On_Dive_Jump_Ground_Land_Update_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FAnimationStateResultReference        CallFunc_ConvertToAnimationStateResult_AnimationState; // 0x20(0x10)(NoDestructor)
	enum class EAnimNodeReferenceConversionResult CallFunc_ConvertToAnimationStateResult_Result;     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B1[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_63C0C596447D773617BA3F81E189DD6A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_A2BC0C1C4C08F505008D78822E2CDA35_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Entered_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Exited_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Exited_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprint_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprint_Entered_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintSlow_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintSlow_Entered_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimStartAdditive_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimStartAdditive_Entered_Layer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimMovementAccelAdditive_Exited_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimMovementAccelAdditive_Exited_Layer_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP
struct USwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B2[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetRelevantAnimTime_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B3[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetRelevantAnimTime_ReturnValue_1;        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B4[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_LocalAccelYawAngleAtStart_ImplicitCast; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
