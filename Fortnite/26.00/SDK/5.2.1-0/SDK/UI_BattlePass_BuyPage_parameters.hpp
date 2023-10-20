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

// 0xB4 (0xB4 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.UpgradeBattlePassLevel
struct UUI_BattlePass_BuyPage_C_UpgradeBattlePassLevel_Params
{
public:
	bool                                         IsUpgraded;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2910[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2913[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2916[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x38(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2918[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_1;      // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue_1;        // 0x58(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2919[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_291A[0x3];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_291B[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_291C[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast;       // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.OnPlayFabResponse_E9CDF6FD46FE9BCB3FDFB6AAC3EC95C4
struct UUI_BattlePass_BuyPage_C_OnPlayFabResponse_E9CDF6FD46FE9BCB3FDFB6AAC3EC95C4_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.OnPlayFabResponse_C7BCD03D4308CED6572F158C2FEE0D25
struct UUI_BattlePass_BuyPage_C_OnPlayFabResponse_C7BCD03D4308CED6572F158C2FEE0D25_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.BndEvt__UI_Shop_BattlePass_Season2_BuyPage_Button_BuyBattlePass_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_BattlePass_BuyPage_C_BndEvt__UI_Shop_BattlePass_Season2_BuyPage_Button_BuyBattlePass_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.BndEvt__UI_Shop_BattlePass_Season2_BuyPage_Button_BuyBattlePassBundle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_BattlePass_BuyPage_C_BndEvt__UI_Shop_BattlePass_Season2_BuyPage_Button_BuyBattlePassBundle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.BndEvt__UI_Shop_BattlePass_Season2_BuyPage_Button_Back_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_BattlePass_BuyPage_C_BndEvt__UI_Shop_BattlePass_Season2_BuyPage_Button_Back_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.OnBattlePassBuy
struct UUI_BattlePass_BuyPage_C_OnBattlePassBuy_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.PurchaseBattlePassSuccess
struct UUI_BattlePass_BuyPage_C_PurchaseBattlePassSuccess_Params
{
public:
	struct FClientExecuteCloudScriptResult       Result;                                            // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.PurchaseBattlePassFailure
struct UUI_BattlePass_BuyPage_C_PurchaseBattlePassFailure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.OnBattlePassBundleBuy
struct UUI_BattlePass_BuyPage_C_OnBattlePassBundleBuy_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.PurchaseBattlePassBundleSuccess
struct UUI_BattlePass_BuyPage_C_PurchaseBattlePassBundleSuccess_Params
{
public:
	struct FClientExecuteCloudScriptResult       Result;                                            // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.PurchaseBattlePassBundleFailure
struct UUI_BattlePass_BuyPage_C_PurchaseBattlePassBundleFailure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.Construct
struct UUI_BattlePass_BuyPage_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.OnWarningNoPC_MadeChoice_Event
struct UUI_BattlePass_BuyPage_C_OnWarningNoPC_MadeChoice_Event_Params
{
public:
	bool                                         Yes;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x73C (0x73C - 0x0)
// Function UI_BattlePass_BuyPage.UI_BattlePass_BuyPage_C.ExecuteUbergraph_UI_BattlePass_BuyPage
struct UUI_BattlePass_BuyPage_C_ExecuteUbergraph_UI_BattlePass_BuyPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2946[0x4];                                     // Fixing Size After Last Property 
	class UBP_PG_PlayerState_Menu_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Menu;      // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2948[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2949[0x4];                                     // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x38(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_4;                   // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294A[0x6];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable;                              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x90(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xD0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xE0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_BattlePass_BuyAnimation_C*         CallFunc_Create_ReturnValue;                       // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_BattlePass_BuyAnimation_C*         CallFunc_Create_ReturnValue_1;                     // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294B[0x6];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294C[0x7];                                     // Fixing Size After Last Property 
	class UUI_Shop_WarningNoPC_C*                CallFunc_Create_ReturnValue_2;                     // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294D[0x7];                                     // Fixing Size After Last Property 
	class UUI_Shop_ConfirmPurchase_C*            CallFunc_Create_ReturnValue_3;                     // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Shop_ConfirmPurchase_C*            K2Node_LowEntry_LocalVariable_Value__Object;       // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__1_Object;     // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientExecuteCloudScriptRequest      K2Node_MakeStruct_ClientExecuteCloudScriptRequest; // 0x168(0x30)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x198(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1B0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientExecuteCloudScriptResult       K2Node_CustomEvent_result_1;                       // 0x1C0(0x60)(None)
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x228(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294F[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x248(0x18)(None)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x260(0x10)(ReferenceParm)
	bool                                         CallFunc_GetBoolField_ReturnValue;                 // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2950[0x7];                                     // Fixing Size After Last Property 
	struct FPlayFabError                         K2Node_CustomEvent_error_1;                        // 0x278(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x2B8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x2D0(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x2E8(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x300(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_ExecuteCloudScript_ReturnValue;           // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2951[0x3];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetNumberField_ReturnValue_1;             // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2952[0x4];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x338(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x350(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_1;      // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2954[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue_2;             // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2955[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue_1;        // 0x388(0x10)(ReferenceParm)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_2;      // 0x398(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_3;             // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Shop_WarningNoPC_C*                CallFunc_Create_ReturnValue_4;                     // 0x3A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue_3;             // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x3B8(0x18)(None)
	class UUI_Shop_ConfirmPurchase_C*            CallFunc_Create_ReturnValue_5;                     // 0x3D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_1;                            // 0x3D8(0x40)(None)
	class UUI_Shop_ConfirmPurchase_C*            K2Node_LowEntry_LocalVariable_Value__2_Object;     // 0x418(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x420(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientExecuteCloudScriptRequest      K2Node_MakeStruct_ClientExecuteCloudScriptRequest_1; // 0x428(0x30)(None)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x458(0x18)(None)
	class UPlayFabClientAPI*                     CallFunc_ExecuteCloudScript_ReturnValue_1;         // 0x470(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x478(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x48C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2957[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2958[0x3];                                     // Fixing Size After Last Property 
	struct FClientExecuteCloudScriptResult       K2Node_CustomEvent_result;                         // 0x498(0x60)(None)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x4F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x500(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x538(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue_4;             // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_295A[0x4];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x548(0x18)(None)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x560(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x578(0x18)(None)
	bool                                         CallFunc_GetBoolField_ReturnValue_1;               // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_295C[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x598(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_295D[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_GetText_ReturnValue_2;                    // 0x5B8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x5D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_3;      // 0x5E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_4;             // 0x5F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue_5;             // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_295F[0x4];                                     // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue_2;        // 0x608(0x10)(ReferenceParm)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_1;                     // 0x618(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_5;                   // 0x658(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_1;                   // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2960[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x664(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2962[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_1;        // 0x678(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__3_Object;     // 0x680(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue_3;                    // 0x688(0x18)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x6A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2963[0x4];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x6A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0x6B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array;                            // 0x6C8(0x10)(ConstParm, ReferenceParm)
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array_1;                          // 0x6D8(0x10)(ConstParm, ReferenceParm)
	bool                                         K2Node_CustomEvent_Yes;                            // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2964[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x6EC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2965[0x3];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast_1;                   // 0x718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast_1;   // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast;       // 0x728(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2968[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;   // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast_1;     // 0x738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


