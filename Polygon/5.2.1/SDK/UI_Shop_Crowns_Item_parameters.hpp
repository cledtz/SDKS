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

// 0xBD (0xBD - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.SetDiscount
struct UUI_Shop_Crowns_Item_C_SetDiscount_Params
{
public:
	bool                                         L_IsDiscount;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B97[0x2];                                     // Fixing Size After Last Property
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)()
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x28(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA0(0x18)()
	int32                                        K2Node_Select_Default_1;                           // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.SetBonus
struct UUI_Shop_Crowns_Item_C_SetBonus_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BA1[0x7];                                     // Fixing Size After Last Property
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x20(0x18)()
};

// 0x49 (0x49 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.OnPlayFabResponse_8FF17DFE47662354390851B40CE7A6A6
struct UUI_Shop_Crowns_Item_C_OnPlayFabResponse_8FF17DFE47662354390851B40CE7A6A6_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.OnPlayFabResponse_E7BE812F4BBB1C03839795A8891966FB
struct UUI_Shop_Crowns_Item_C_OnPlayFabResponse_E7BE812F4BBB1C03839795A8891966FB_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.OnPlayFabResponse_8E7A22C04F75F649687D6193EC60EAD0
struct UUI_Shop_Crowns_Item_C_OnPlayFabResponse_8E7A22C04F75F649687D6193EC60EAD0_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.OnPlayFabResponse_505E19444069D91671DEA5A093837AA7
struct UUI_Shop_Crowns_Item_C_OnPlayFabResponse_505E19444069D91671DEA5A093837AA7_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.PreConstruct
struct UUI_Shop_Crowns_Item_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UUI_Shop_Crowns_Item_C_BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_Shop_Crowns_Item_C_BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_Shop_Crowns_Item_C_BndEvt__UI_Shop_Crowns_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.StartPurchase_Success
struct UUI_Shop_Crowns_Item_C_StartPurchase_Success_Params
{
public:
	struct FClientStartPurchaseResult            Result;                                            // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.StartPurchase_Failure
struct UUI_Shop_Crowns_Item_C_StartPurchase_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.PayForPurchase_Success
struct UUI_Shop_Crowns_Item_C_PayForPurchase_Success_Params
{
public:
	struct FClientPayForPurchaseResult           Result;                                            // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.PayForPurchase_Failure
struct UUI_Shop_Crowns_Item_C_PayForPurchase_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.ConfirmPurchase_Success
struct UUI_Shop_Crowns_Item_C_ConfirmPurchase_Success_Params
{
public:
	struct FClientConfirmPurchaseResult          Result;                                            // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.ConfirmPurchase_Failure
struct UUI_Shop_Crowns_Item_C_ConfirmPurchase_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.WriteEvent_Error
struct UUI_Shop_Crowns_Item_C_WriteEvent_Error_Params
{
public:
	int32                                        Stage;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BF7[0x4];                                     // Fixing Size After Last Property
	struct FPlayFabError                         PlayFabError;                                      // 0x8(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.WritePlayerEvent_Error_Success
struct UUI_Shop_Crowns_Item_C_WritePlayerEvent_Error_Success_Params
{
public:
	struct FClientWriteEventResponse             Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.WritePlayerEvent_Error_Failure
struct UUI_Shop_Crowns_Item_C_WritePlayerEvent_Error_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.Construct
struct UUI_Shop_Crowns_Item_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.MicroTxnAuthorizationResponse_Event
struct UUI_Shop_Crowns_Item_C_MicroTxnAuthorizationResponse_Event_Params
{
public:
	struct FMicroTxnAuthorizationResponse        Data;                                              // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8A4 (0x8A4 - 0x0)
// Function UI_Shop_Crowns_Item.UI_Shop_Crowns_Item_C.ExecuteUbergraph_UI_Shop_Crowns_Item
struct UUI_Shop_Crowns_Item_C_ExecuteUbergraph_UI_Shop_Crowns_Item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C96[0x4];                                     // Fixing Size After Last Property
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x18(0x40)()
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_1;                     // 0x58(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_9;                   // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_1;                   // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C97[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C99[0x3];                                     // Fixing Size After Last Property
	class UObject*                               Temp_object_Variable;                              // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_1;                            // 0xC0(0x40)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x100(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x110(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x120(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x130(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_8;                   // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C9D[0x6];                                     // Fixing Size After Last Property
	class UObject*                               Temp_object_Variable_1;                            // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_2;                            // 0x188(0x40)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1C8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1D8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientPayForPurchaseRequest          K2Node_MakeStruct_ClientPayForPurchaseRequest;     // 0x1E8(0x50)()
	class UUser*                                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Shop_SteamOverlayIsDisabled_C*     CallFunc_Create_ReturnValue;                       // 0x240(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x248(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Shop_MicroTxnError_C*              CallFunc_Create_ReturnValue_1;                     // 0x258(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Shop_MicroTxnError_C*              CallFunc_Create_ReturnValue_2;                     // 0x260(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Shop_MicroTxnError_C*              CallFunc_Create_ReturnValue_3;                     // 0x268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CA3[0x7];                                     // Fixing Size After Last Property
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x278(0x18)()
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x290(0x18)()
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_2;                            // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CA5[0x7];                                     // Fixing Size After Last Property
	TArray<class UPlayFabJsonObject*>            K2Node_MakeArray_Array;                            // 0x2C8(0x10)(ReferenceParm)
	struct FClientStartPurchaseRequest           K2Node_MakeStruct_ClientStartPurchaseRequest;      // 0x2D8(0x40)()
	struct FClientStartPurchaseResult            K2Node_CustomEvent_result_3;                       // 0x318(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_7;                   // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error_3;                        // 0x360(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_6;                   // 0x398(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientPayForPurchaseResult           K2Node_CustomEvent_result_2;                       // 0x3A0(0x78)()
	class UObject*                               K2Node_CustomEvent_customData_5;                   // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error_2;                        // 0x420(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_4;                   // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientConfirmPurchaseResult          K2Node_CustomEvent_result_1;                       // 0x460(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0x498(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error_1;                        // 0x4A0(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x4D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x4E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CAF[0x7];                                     // Fixing Size After Last Property
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu;         // 0x4F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB2[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x500(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_2;                     // 0x508(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_10;                  // 0x548(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_2;                   // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB6[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x558(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x564(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB8[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x580(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x590(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_1;        // 0x598(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Stage;                          // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CC0[0x4];                                     // Fixing Size After Last Property
	struct FPlayFabError                         K2Node_CustomEvent_PlayFabError;                   // 0x5A8(0x38)(ConstParm)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__1_Object;     // 0x5E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientWriteClientPlayerEventRequest  K2Node_MakeStruct_ClientWriteClientPlayerEventRequest; // 0x5E8(0x38)()
	class UPlayFabClientAPI*                     CallFunc_WritePlayerEvent_ReturnValue;             // 0x620(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x62A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x62B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x62C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_2;                    // 0x62D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x62E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CC8[0x1];                                     // Fixing Size After Last Property
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClientWriteEventResponse             K2Node_CustomEvent_result;                         // 0x640(0x18)()
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x658(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x660(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x670(0x38)()
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x6A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x6B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x6B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD0[0x7];                                     // Fixing Size After Last Property
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array_1;                          // 0x6C8(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD1[0x7];                                     // Fixing Size After Last Property
	struct FMicroTxnAuthorizationResponse        K2Node_CustomEvent_Data;                           // 0x6E0(0x20)(ConstParm)
	bool                                         CallFunc_IsOverlayEnabled_ReturnValue;             // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD3[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x704(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD4[0x4];                                     // Fixing Size After Last Property
	class UPlayFabClientAPI*                     CallFunc_StartPurchase_ReturnValue;                // 0x718(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD6[0x7];                                     // Fixing Size After Last Property
	struct FClientConfirmPurchaseRequest         K2Node_MakeStruct_ClientConfirmPurchaseRequest;    // 0x728(0x20)()
	class UPlayFabClientAPI*                     CallFunc_ConfirmPurchase_ReturnValue;              // 0x748(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD8[0x7];                                     // Fixing Size After Last Property
	struct FPlayFabError                         K2Node_MakeStruct_PlayFabError;                    // 0x758(0x38)()
	struct FPlayFabError                         K2Node_MakeStruct_PlayFabError_1;                  // 0x790(0x38)()
	struct FPlayFabBaseModel                     Temp_struct_Variable_3;                            // 0x7C8(0x40)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x808(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_3;                            // 0x818(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_PayForPurchase_ReturnValue;               // 0x820(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x829(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDC[0x6];                                     // Fixing Size After Last Property
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_3;                     // 0x830(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_11;                  // 0x870(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_3;                   // 0x878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDE[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x87C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDF[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast;       // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast_1;     // 0x89C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast_2;     // 0x8A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
