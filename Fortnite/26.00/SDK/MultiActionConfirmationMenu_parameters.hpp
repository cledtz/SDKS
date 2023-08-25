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

// 0x19 (0x19 - 0x0)
// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.UpdateText
struct UMultiActionConfirmationMenu_C_UpdateText_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnOpened
struct UMultiActionConfirmationMenu_C_OnOpened_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnActionUpdated
struct UMultiActionConfirmationMenu_C_OnActionUpdated_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.ExecuteUbergraph_MultiActionConfirmationMenu
struct UMultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AC5[0x4];                                      // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


