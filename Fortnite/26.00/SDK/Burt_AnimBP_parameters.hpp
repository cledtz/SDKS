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

// 0x20 (0x20 - 0x0)
// Function Burt_AnimBP.Burt_AnimBP_C.Fauna IdleTurn
struct UBurt_AnimBP_C_Fauna_IdleTurn_Params
{
public:
	struct FPoseLink                             InPose_IdleTurn;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Fauna_IdleTurn;                                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Burt_AnimBP.Burt_AnimBP_C.Fauna Idle
struct UBurt_AnimBP_C_Fauna_Idle_Params
{
public:
	struct FPoseLink                             InPose_Idle;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Fauna_Idle;                                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Burt_AnimBP.Burt_AnimBP_C.AnimGraph
struct UBurt_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Burt_AnimBP.Burt_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3
struct UBurt_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_FallExit
struct UBurt_AnimBP_C_AnimNotify_FallExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandAddExit
struct UBurt_AnimBP_C_AnimNotify_LandAddExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Burt_AnimBP.Burt_AnimBP_C.AnimNotify_LandEnter
struct UBurt_AnimBP_C_AnimNotify_LandEnter_Params
{
public:
};

// 0x1C (0x1C - 0x0)
// Function Burt_AnimBP.Burt_AnimBP_C.ExecuteUbergraph_Burt_AnimBP
struct UBurt_AnimBP_C_ExecuteUbergraph_Burt_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E8[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet___FloatProperty_3_ImplicitCast; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


