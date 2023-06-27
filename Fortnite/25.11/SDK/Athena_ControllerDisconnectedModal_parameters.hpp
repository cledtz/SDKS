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
// Function Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C.BP_OnActivated
struct UAthena_ControllerDisconnectedModal_C_BP_OnActivated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C.ExecuteUbergraph_Athena_ControllerDisconnectedModal
struct UAthena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E4A[0x4];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
