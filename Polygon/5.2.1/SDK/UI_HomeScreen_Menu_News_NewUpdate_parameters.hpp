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
// Function UI_HomeScreen_Menu_News_NewUpdate.UI_HomeScreen_Menu_News_NewUpdate_C.PreConstruct
struct UUI_HomeScreen_Menu_News_NewUpdate_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_HomeScreen_Menu_News_NewUpdate.UI_HomeScreen_Menu_News_NewUpdate_C.Construct
struct UUI_HomeScreen_Menu_News_NewUpdate_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UI_HomeScreen_Menu_News_NewUpdate.UI_HomeScreen_Menu_News_NewUpdate_C.OnHovered_Event
struct UUI_HomeScreen_Menu_News_NewUpdate_C_OnHovered_Event_Params
{
public:
	bool                                         IsHover;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_HomeScreen_Menu_News_NewUpdate.UI_HomeScreen_Menu_News_NewUpdate_C.BndEvt__UI_HomeScreen_Offer_News_NewUpdate_Button_ViewChangelist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_HomeScreen_Menu_News_NewUpdate_C_BndEvt__UI_HomeScreen_Offer_News_NewUpdate_Button_ViewChangelist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x49 (0x49 - 0x0)
// Function UI_HomeScreen_Menu_News_NewUpdate.UI_HomeScreen_Menu_News_NewUpdate_C.ExecuteUbergraph_UI_HomeScreen_Menu_News_NewUpdate
struct UUI_HomeScreen_Menu_News_NewUpdate_C_ExecuteUbergraph_UI_HomeScreen_Menu_News_NewUpdate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DF6[0x3];                                     // Fixing Size After Last Property
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsHover;                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DF7[0x7];                                     // Fixing Size After Last Property
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
