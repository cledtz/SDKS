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

// 0x18 (0x18 - 0x0)
// Function UI_Game_SpawnScreen_Spectator.UI_Game_SpawnScreen_Spectator_C.ToggleSpectatorScale
struct UUI_Game_SpawnScreen_Spectator_C_ToggleSpectatorScale_Params
{
public:
	bool                                         ForceSmall;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         L_ForceSmall;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E6D[0x6];                                      // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Game_SpawnScreen_Spectator.UI_Game_SpawnScreen_Spectator_C.SetNewSpectate
struct UUI_Game_SpawnScreen_Spectator_C_SetNewSpectate_Params
{
public:
	class UBP_PG_Game_Character_C*               Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Game_SpawnScreen_Spectator.UI_Game_SpawnScreen_Spectator_C.BndEvt__UI_SpawnScreen_Spectator_Button_SpectatorScale_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Game_SpawnScreen_Spectator_C_BndEvt__UI_SpawnScreen_Spectator_Button_SpectatorScale_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UI_Game_SpawnScreen_Spectator.UI_Game_SpawnScreen_Spectator_C.ExecuteUbergraph_UI_Game_SpawnScreen_Spectator
struct UUI_Game_SpawnScreen_Spectator_C_ExecuteUbergraph_UI_Game_SpawnScreen_Spectator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E7E[0x2];                                      // Fixing Size After Last Property 
	class UBP_PG_Game_Character_C*               K2Node_CustomEvent_Character;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


