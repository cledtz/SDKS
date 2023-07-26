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
// Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.OnOpened
struct ULeavePartyConfirmationMenu_C_OnOpened_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.ExecuteUbergraph_LeavePartyConfirmationMenu
struct ULeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AF9[0x4];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
