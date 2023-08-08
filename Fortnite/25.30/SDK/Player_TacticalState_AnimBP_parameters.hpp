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

// 0x20 (0x20 - 0x0)
// Function Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.WeaponBoneFixLayer
struct UPlayer_TacticalState_AnimBP_C_WeaponBoneFixLayer_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             WeaponBoneFixLayer;                                // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.TacticalSprintLayer
struct UPlayer_TacticalState_AnimBP_C_TacticalSprintLayer_Params
{
public:
	struct FPoseLink                             TacticalSprintLayer;                               // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.AnimGraph
struct UPlayer_TacticalState_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Player_TacticalState_AnimBP.Player_TacticalState_AnimBP_C.ExecuteUbergraph_Player_TacticalState_AnimBP
struct UPlayer_TacticalState_AnimBP_C_ExecuteUbergraph_Player_TacticalState_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
