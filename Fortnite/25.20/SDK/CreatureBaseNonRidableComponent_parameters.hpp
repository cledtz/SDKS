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

// 0x11 (0x11 - 0x0)
// Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.GetRidingInfoFromTarget
struct UCreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget_Params
{
public:
	double                                       JumpAttachGroundHeightMin;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JumpAttachGroundHeightBuffer;                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsesAltRidingMessage;                              // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ToggleRidingAlternative
struct UCreatureBaseNonRidableComponent_C_ToggleRidingAlternative_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.AlternateRidingEvent
struct UCreatureBaseNonRidableComponent_C_AlternateRidingEvent_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ExecuteUbergraph_CreatureBaseNonRidableComponent
struct UCreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E79[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
