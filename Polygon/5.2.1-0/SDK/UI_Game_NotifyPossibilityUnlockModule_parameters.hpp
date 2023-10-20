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
// Function UI_Game_NotifyPossibilityUnlockModule.UI_Game_NotifyPossibilityUnlockModule_C.Construct
struct UUI_Game_NotifyPossibilityUnlockModule_C_Construct_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function UI_Game_NotifyPossibilityUnlockModule.UI_Game_NotifyPossibilityUnlockModule_C.ExecuteUbergraph_UI_Game_NotifyPossibilityUnlockModule
struct UUI_Game_NotifyPossibilityUnlockModule_C_ExecuteUbergraph_UI_Game_NotifyPossibilityUnlockModule_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328E[0x4];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerState*                          CallFunc_GetPlayerState_ReturnValue;               // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Game*                  K2Node_DynamicCast_AsPG_Player_State_Game;         // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


