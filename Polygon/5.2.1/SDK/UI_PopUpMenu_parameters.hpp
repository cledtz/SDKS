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
// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_Options_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_Options_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_Quit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_Quit_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_Discord_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_Discord_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_PopUpMenu.UI_PopUpMenu_C.BndEvt__UI_PopUpMenu_Button_PromoCode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_PopUpMenu_C_BndEvt__UI_PopUpMenu_Button_PromoCode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_PopUpMenu.UI_PopUpMenu_C.Construct
struct UUI_PopUpMenu_C_Construct_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function UI_PopUpMenu.UI_PopUpMenu_C.ExecuteUbergraph_UI_PopUpMenu
struct UUI_PopUpMenu_C_ExecuteUbergraph_UI_PopUpMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D38[0x4];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_ExitGame_C*                        CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_PromoCode_C*                       CallFunc_Create_ReturnValue_1;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
