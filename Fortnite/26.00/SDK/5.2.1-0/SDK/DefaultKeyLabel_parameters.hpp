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
// Function DefaultKeyLabel.DefaultKeyLabel_C.UpdateKeyLabel
struct UDefaultKeyLabel_C_UpdateKeyLabel_Params
{
public:
};

// 0x102 (0x102 - 0x0)
// Function DefaultKeyLabel.DefaultKeyLabel_C.ExecuteUbergraph_DefaultKeyLabel
struct UDefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11D2[0x4];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x18)(None)
	bool                                         CallFunc_HasIcon_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11D3[0xF];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           CallFunc_GetIconBrush_ReturnValue;                 // 0x30(0xD0)(None)
	enum class ESlateVisibility                  CallFunc_GetIconVisibility_ReturnValue;            // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetDisplayNameVisibility_ReturnValue;     // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


