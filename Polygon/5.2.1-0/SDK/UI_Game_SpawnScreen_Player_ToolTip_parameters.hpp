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
// Function UI_Game_SpawnScreen_Player_ToolTip.UI_Game_SpawnScreen_Player_ToolTip_C.Construct
struct UUI_Game_SpawnScreen_Player_ToolTip_C_Construct_Params
{
public:
};

// 0x31 (0x31 - 0x0)
// Function UI_Game_SpawnScreen_Player_ToolTip.UI_Game_SpawnScreen_Player_ToolTip_C.ExecuteUbergraph_UI_Game_SpawnScreen_Player_ToolTip
struct UUI_Game_SpawnScreen_Player_ToolTip_C_ExecuteUbergraph_UI_Game_SpawnScreen_Player_ToolTip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_536[0x4];                                      // Fixing Size After Last Property 
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


