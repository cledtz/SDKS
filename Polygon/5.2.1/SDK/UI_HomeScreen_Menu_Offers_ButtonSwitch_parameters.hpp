#pragma once

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

// 0x1 (0x1 - 0x0)
// Function UI_HomeScreen_Menu_Offers_ButtonSwitch.UI_HomeScreen_Menu_Offers_ButtonSwitch_C.SetIsActive
struct UUI_HomeScreen_Menu_Offers_ButtonSwitch_C_SetIsActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_HomeScreen_Menu_Offers_ButtonSwitch.UI_HomeScreen_Menu_Offers_ButtonSwitch_C.BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UUI_HomeScreen_Menu_Offers_ButtonSwitch_C_BndEvt__UI_HomeScreen_Offer_News_ButtonSwitch_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function UI_HomeScreen_Menu_Offers_ButtonSwitch.UI_HomeScreen_Menu_Offers_ButtonSwitch_C.ExecuteUbergraph_UI_HomeScreen_Menu_Offers_ButtonSwitch
struct UUI_HomeScreen_Menu_Offers_ButtonSwitch_C_ExecuteUbergraph_UI_HomeScreen_Menu_Offers_ButtonSwitch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isActive;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A4A[0x3];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
