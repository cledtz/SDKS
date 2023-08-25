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
// Function RebootVanIndicator.RebootVanIndicator_C.Construct
struct URebootVanIndicator_C_Construct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator
struct URebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8392[0x4];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


