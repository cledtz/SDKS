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

// 0x0 (0x0 - 0x0)
// Function RidingGeneric_Interafce.RidingGeneric_Interafce_C.ToggleRidingAlternative
struct URidingGeneric_Interafce_C_ToggleRidingAlternative_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function RidingGeneric_Interafce.RidingGeneric_Interafce_C.GetRidingInfoFromTarget
struct URidingGeneric_Interafce_C_GetRidingInfoFromTarget_Params
{
public:
	double                                       JumpAttachGroundHeightMin;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JumpAttachGroundHeightBuffer;                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsesAltRidingMessage;                              // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


