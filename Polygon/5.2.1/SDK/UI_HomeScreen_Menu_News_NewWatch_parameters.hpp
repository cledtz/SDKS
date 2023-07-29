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

// 0x0 (0x0 - 0x0)
// Function UI_HomeScreen_Menu_News_NewWatch.UI_HomeScreen_Menu_News_NewWatch_C.Construct
struct UUI_HomeScreen_Menu_News_NewWatch_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UI_HomeScreen_Menu_News_NewWatch.UI_HomeScreen_Menu_News_NewWatch_C.OnHovered_Event
struct UUI_HomeScreen_Menu_News_NewWatch_C_OnHovered_Event_Params
{
public:
	bool                                         IsHover;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_HomeScreen_Menu_News_NewWatch.UI_HomeScreen_Menu_News_NewWatch_C.BndEvt__UI_HomeScreen_Menu_News_NewWatch_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_HomeScreen_Menu_News_NewWatch_C_BndEvt__UI_HomeScreen_Menu_News_NewWatch_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_HomeScreen_Menu_News_NewWatch.UI_HomeScreen_Menu_News_NewWatch_C.BndEvt__UI_HomeScreen_Menu_News_NewWatch_Button_Shop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_HomeScreen_Menu_News_NewWatch_C_BndEvt__UI_HomeScreen_Menu_News_NewWatch_Button_Shop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function UI_HomeScreen_Menu_News_NewWatch.UI_HomeScreen_Menu_News_NewWatch_C.ExecuteUbergraph_UI_HomeScreen_Menu_News_NewWatch
struct UUI_HomeScreen_Menu_News_NewWatch_C_ExecuteUbergraph_UI_HomeScreen_Menu_News_NewWatch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A05[0x4];                                      // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsHover;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A07[0x7];                                      // Fixing Size After Last Property
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A09[0x7];                                      // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0A[0x3];                                      // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0B[0x4];                                      // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
