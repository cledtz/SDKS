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
// Function Grandma_AnimBP.Grandma_AnimBP_C.Fauna Jump
struct UGrandma_AnimBP_C_Fauna_Jump_Params
{
public:
	struct FPoseLink                             Fauna_Jump;                                        // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Grandma_AnimBP.Grandma_AnimBP_C.Fauna IdleTurn
struct UGrandma_AnimBP_C_Fauna_IdleTurn_Params
{
public:
	struct FPoseLink                             InPose_IdleTurn;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Fauna_IdleTurn;                                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Grandma_AnimBP.Grandma_AnimBP_C.Fauna Idle
struct UGrandma_AnimBP_C_Fauna_Idle_Params
{
public:
	struct FPoseLink                             InPose_Idle;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Fauna_Idle;                                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Grandma_AnimBP.Grandma_AnimBP_C.AnimGraph
struct UGrandma_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_FallExit
struct UGrandma_AnimBP_C_AnimNotify_FallExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandAddExit
struct UGrandma_AnimBP_C_AnimNotify_LandAddExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Grandma_AnimBP.Grandma_AnimBP_C.AnimNotify_LandEnter
struct UGrandma_AnimBP_C_AnimNotify_LandEnter_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Grandma_AnimBP.Grandma_AnimBP_C.ExecuteUbergraph_Grandma_AnimBP
struct UGrandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
