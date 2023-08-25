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
// Function Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C.Fauna IdleTurn
struct UFauna_Idle_AnimInterface_C_Fauna_IdleTurn_Params
{
public:
	struct FPoseLink                             InPose_IdleTurn;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Fauna_IdleTurn;                                    // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fauna_Idle_AnimInterface.Fauna_Idle_AnimInterface_C.Fauna Idle
struct UFauna_Idle_AnimInterface_C_Fauna_Idle_Params
{
public:
	struct FPoseLink                             InPose_Idle;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Fauna_Idle;                                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

}
}


