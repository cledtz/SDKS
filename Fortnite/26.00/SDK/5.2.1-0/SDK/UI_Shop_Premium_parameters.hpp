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

// 0x52 (0x52 - 0x0)
// Function UI_Shop_Premium.UI_Shop_Premium_C.SetActivePage
struct UUI_Shop_Premium_C_SetActivePage_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D96[0x4];                                     // Fixing Size After Last Property 
	class UUI_Button_C*                          Button;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          L_Button;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        L_Index;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D97[0x4];                                     // Fixing Size After Last Property 
	class UUI_Button_C*                          K2Node_DynamicCast_AsUI_Button;                    // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Shop_Premium.UI_Shop_Premium_C.BndEvt__UI_Shop_Premium_UI_Button_Crowns_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
struct UUI_Shop_Premium_C_BndEvt__UI_Shop_Premium_UI_Button_Crowns_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Shop_Premium.UI_Shop_Premium_C.BndEvt__UI_Shop_Premium_UI_Button_VIP_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UUI_Shop_Premium_C_BndEvt__UI_Shop_Premium_UI_Button_VIP_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Shop_Premium.UI_Shop_Premium_C.BndEvt__UI_Shop_Premium_UI_Button_Offers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UUI_Shop_Premium_C_BndEvt__UI_Shop_Premium_UI_Button_Offers_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Shop_Premium.UI_Shop_Premium_C.ExecuteUbergraph_UI_Shop_Premium
struct UUI_Shop_Premium_C_ExecuteUbergraph_UI_Shop_Premium_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D9C[0x4];                                     // Fixing Size After Last Property 
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_2;               // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_1;               // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


