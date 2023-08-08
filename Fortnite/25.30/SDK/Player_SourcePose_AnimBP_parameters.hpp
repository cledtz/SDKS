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

// 0x10 (0x10 - 0x0)
// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.AnimGraph
struct UPlayer_SourcePose_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.ResetBlendListNode
struct UPlayer_SourcePose_AnimBP_C_ResetBlendListNode_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	enum class EAnimNodeReferenceConversionResult CallFunc_ConvertToBlendListBase_Result;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D89[0x7];                                     // Fixing Size After Last Property
	struct FBlendListBaseReference               CallFunc_ConvertToBlendListBase_ReturnValue;       // 0x28(0x10)(NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C.ExecuteUbergraph_Player_SourcePose_AnimBP
struct UPlayer_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
