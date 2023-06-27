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

// 0x0 (0x0 - 0x0)
// Function GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.Spawn Dissolve VFX
struct AGCN_NPC_Interaction_RezOut_Glitch_C_Spawn_Dissolve_VFX_Params
{
public:
};

// 0x118 (0x118 - 0x0)
// Function GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch
struct AGCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A01[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x38(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
