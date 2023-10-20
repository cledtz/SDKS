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

// 0x89 (0x89 - 0x0)
// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.RemoveOfferByClass
struct UUI_MainMenu_Shop_Premium_SpecialOffers_C_RemoveOfferByClass_Params
{
public:
	class UClass*                                OfferClass;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_OfferClass;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF6[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF7[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF8[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF9[0x3];                                     // Fixing Size After Last Property 
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFA[0x4];                                     // Fixing Size After Last Property 
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFB[0x7];                                     // Fixing Size After Last Property 
	TScriptInterface<class UBI_OfferInteract_C>  K2Node_DynamicCast_AsBI_Offer_Interact;            // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AFC[0x6];                                     // Fixing Size After Last Property 
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.Construct
struct UUI_MainMenu_Shop_Premium_SpecialOffers_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.OnUpdatePlayerCombinedInfo_Event
struct UUI_MainMenu_Shop_Premium_SpecialOffers_C_OnUpdatePlayerCombinedInfo_Event_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CustomString;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers
struct UUI_MainMenu_Shop_Premium_SpecialOffers_C_ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B04[0x4];                                     // Fixing Size After Last Property 
	class UTask_MainMenu_Shop_Premium_Offers_GenerateStarterPack_C* CallFunc_CreateAction_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_CustomEvent_ModifiedData;                   // 0x18(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_CustomString;                   // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B05[0x4];                                     // Fixing Size After Last Property 
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu;         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B07[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array;                            // 0x58(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B08[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x6C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


