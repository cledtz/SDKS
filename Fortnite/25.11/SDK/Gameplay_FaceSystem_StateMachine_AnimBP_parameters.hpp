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
// Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimGraph
struct UGameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP
struct UGameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
