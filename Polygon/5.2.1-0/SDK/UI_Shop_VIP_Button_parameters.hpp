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

// 0x171 (0x171 - 0x0)
// Function UI_Shop_VIP_Button.UI_Shop_VIP_Button_C.SetCanBuy
struct UUI_Shop_VIP_Button_C_SetCanBuy_Params
{
public:
	int32                                        PC;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1768[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable;                              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_176D[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x6C(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x80(0x14)(None)
	uint8                                        Pad_1772[0xC];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xA0(0xD0)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Shop_VIP_Button.UI_Shop_VIP_Button_C.OnPlayFabResponse_089383D84669101F1269ABB1AD6D1DB1
struct UUI_Shop_VIP_Button_C_OnPlayFabResponse_089383D84669101F1269ABB1AD6D1DB1_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Shop_VIP_Button.UI_Shop_VIP_Button_C.PreConstruct
struct UUI_Shop_VIP_Button_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Shop_VIP_Button.UI_Shop_VIP_Button_C.BndEvt__UI_Shop_VIP_Button_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Shop_VIP_Button_C_BndEvt__UI_Shop_VIP_Button_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Shop_VIP_Button.UI_Shop_VIP_Button_C.OnClickedBuy
struct UUI_Shop_VIP_Button_C_OnClickedBuy_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function UI_Shop_VIP_Button.UI_Shop_VIP_Button_C.PurchaseVIP_Failure
struct UUI_Shop_VIP_Button_C_PurchaseVIP_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function UI_Shop_VIP_Button.UI_Shop_VIP_Button_C.PurchaseVIP_Success
struct UUI_Shop_VIP_Button_C_PurchaseVIP_Success_Params
{
public:
	struct FClientExecuteCloudScriptResult       Result;                                            // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x494 (0x494 - 0x0)
// Function UI_Shop_VIP_Button.UI_Shop_VIP_Button_C.ExecuteUbergraph_UI_Shop_VIP_Button
struct UUI_Shop_VIP_Button_C_ExecuteUbergraph_UI_Shop_VIP_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17DF[0x4];                                     // Fixing Size After Last Property 
	struct FClientExecuteCloudScriptResult       K2Node_CustomEvent_result;                         // 0x8(0x60)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x98(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA8(0x18)(None)
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item;                           // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolField_ReturnValue;                 // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17E2[0x7];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0xE0(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17E3[0x6];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable;                              // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x138(0x40)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17E5[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x180(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17E6[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x1A0(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17E8[0x7];                                     // Fixing Size After Last Property 
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1C8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x218(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x228(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x240(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Shop_WarningNoPC_C*                CallFunc_Create_ReturnValue;                       // 0x258(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Menu_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Menu;      // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17ED[0x7];                                     // Fixing Size After Last Property 
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array_1;                          // 0x278(0x10)(ConstParm, ReferenceParm)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x298(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17EF[0x4];                                     // Fixing Size After Last Property 
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x2C0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x310(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x320(0x18)(None)
	class UUI_Shop_ConfirmPurchase_C*            CallFunc_Create_ReturnValue_1;                     // 0x338(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x340(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17F6[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientExecuteCloudScriptRequest      K2Node_MakeStruct_ClientExecuteCloudScriptRequest; // 0x388(0x30)(None)
	class UPlayFabClientAPI*                     CallFunc_ExecuteCloudScript_ReturnValue;           // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu;         // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17FA[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_1;      // 0x3D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17FE[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue_1;             // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1800[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x3F8(0x18)(None)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x410(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x450(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x468(0x18)(None)
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast;       // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


