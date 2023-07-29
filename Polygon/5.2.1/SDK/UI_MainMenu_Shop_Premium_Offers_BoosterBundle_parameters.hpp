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

// 0x11 (0x11 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.RemoveOfferFunc
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_RemoveOfferFunc_Params
{
public:
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.CreateOfferOnHomeMenu
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_CreateOfferOnHomeMenu_Params
{
public:
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D12[0x7];                                      // Fixing Size After Last Property
	class UUserWidget*                           CallFunc_AddOffer_CreatedOfferWidget;              // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_HomeScreen_Menu_Offers_BoosterBundle_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_Offers_Booster_Bundle; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.Construct
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.TickTimer
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_TickTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.RemoveOffer
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_RemoveOffer_Params
{
public:
};

// 0x280 (0x280 - 0x0)
// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.ExecuteUbergraph_UI_MainMenu_Shop_Premium_Offers_BoosterBundle
struct UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_ExecuteUbergraph_UI_MainMenu_Shop_Premium_Offers_BoosterBundle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue_1;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E37[0x4];                                      // Fixing Size After Last Property
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E39[0x7];                                      // Fixing Size After Last Property
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E3B[0x7];                                      // Fixing Size After Last Property
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue_1;             // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E3D[0x2];                                      // Fixing Size After Last Property
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xD0(0x50)(HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_BuyPage_C* CallFunc_Create_ReturnValue;                       // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E41[0x6];                                      // Fixing Size After Last Property
	class FString                                K2Node_Select_Default_1;                           // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x158(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x170(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E43[0x3];                                      // Fixing Size After Last Property
	class FString                                K2Node_Select_Default_2;                           // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1D8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1F0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x240(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x250(0x18)()
	class FText                                  K2Node_LowEntry_LocalVariable_Value__Object;       // 0x268(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
