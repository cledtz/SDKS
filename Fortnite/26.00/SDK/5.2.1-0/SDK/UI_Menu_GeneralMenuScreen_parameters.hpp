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

// 0x22 (0x22 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ShowTutorial
struct UUI_Menu_GeneralMenuScreen_C_ShowTutorial_Params
{
public:
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Tutorial_Show_C*              CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.RequestWriteReview
struct UUI_Menu_GeneralMenuScreen_C_RequestWriteReview_Params
{
public:
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_ReviewRequest_C*                   CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C0[0x3];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ParsePlayerInventory
struct UUI_Menu_GeneralMenuScreen_C_ParsePlayerInventory_Params
{
public:
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue_1;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x38(0x18)(None)
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast_1;                   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x248 (0x248 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ParsePlayerProgress
struct UUI_Menu_GeneralMenuScreen_C_ParsePlayerProgress_Params
{
public:
	struct FLevelInfo                            L_NextLevel;                                       // 0x0(0x48)(Edit, BlueprintVisible)
	struct FLevelInfo                            L_CurrentLevel;                                    // 0x48(0x48)(Edit, BlueprintVisible)
	int32                                        L_TotalProgress;                                   // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D4[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D5[0x3];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xA0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0xB8(0x18)(None)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D6[0x7];                                     // Fixing Size After Last Property 
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D7[0x6];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_2;             // 0x100(0x18)(None)
	struct FLevelInfo                            CallFunc_GetNextLevelByLevelID_ReturnValue;        // 0x118(0x48)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D9[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DA[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLevelInfo                            CallFunc_GetLevelByProgress_ReturnValue;           // 0x190(0x48)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DC[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DD[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x1F0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DE[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item;                           // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DF[0x3];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E0[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Round_ReturnValue;                        // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E2[0x3];                                     // Fixing Size After Last Property 
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E3[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnPlayFabResponse_EEAC2C894C8FF45B97AF2E8BBAB9F58E
struct UUI_Menu_GeneralMenuScreen_C_OnPlayFabResponse_EEAC2C894C8FF45B97AF2E8BBAB9F58E_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_C68D4C074C7D58E2089838A390E6D5A6
struct UUI_Menu_GeneralMenuScreen_C_OnSucceed_C68D4C074C7D58E2089838A390E6D5A6_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_00DA80004521B2E9443A3BB00FD71E8D
struct UUI_Menu_GeneralMenuScreen_C_OnSucceed_00DA80004521B2E9443A3BB00FD71E8D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_0FCC1976414D74186E4E89BDC8765DCE
struct UUI_Menu_GeneralMenuScreen_C_OnSucceed_0FCC1976414D74186E4E89BDC8765DCE_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_9F51216140A8CFB9D900AA890B100915
struct UUI_Menu_GeneralMenuScreen_C_OnSucceed_9F51216140A8CFB9D900AA890B100915_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_0EF931404E41431044ED4280D2E40D0C
struct UUI_Menu_GeneralMenuScreen_C_OnSucceed_0EF931404E41431044ED4280D2E40D0C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_537890494AA4404E9B27D19198E61A0D
struct UUI_Menu_GeneralMenuScreen_C_OnSucceed_537890494AA4404E9B27D19198E61A0D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSucceed_D60BB62342CAE2C50B2B7F84D4EF71C1
struct UUI_Menu_GeneralMenuScreen_C_OnSucceed_D60BB62342CAE2C50B2B7F84D4EF71C1_Params
{
public:
};

// 0x49 (0x49 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnPlayFabResponse_CD96840840F6BDC429744386EADF9989
struct UUI_Menu_GeneralMenuScreen_C_OnPlayFabResponse_CD96840840F6BDC429744386EADF9989_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.PreConstruct
struct UUI_Menu_GeneralMenuScreen_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Button_ServerSearch_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
{
public:
	class UUI_Button_Line_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
{
public:
	class UUI_Button_Line_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Button_Shop_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
{
public:
	class UUI_Button_Line_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Button_Soldier_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
{
public:
	class UUI_Button_Line_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__Button_Progress_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Options_K2Node_ComponentBoundEvent_7_ClickBackDelegate__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Counter_PremiumCoin_K2Node_ComponentBoundEvent_9_OnClickDelegate__DelegateSignature_Params
{
public:
	class UUI_Counter_C*                         Counter;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnUpdatePlayerCombinedInfo_Event
struct UUI_Menu_GeneralMenuScreen_C_OnUpdatePlayerCombinedInfo_Event_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CustomString;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.RequestRegionPing
struct UUI_Menu_GeneralMenuScreen_C_RequestRegionPing_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnSetPlayerId_Event
struct UUI_Menu_GeneralMenuScreen_C_OnSetPlayerId_Event_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_GeneralMenuScreen_UI_Counter_Coin_K2Node_ComponentBoundEvent_8_OnClickDelegate__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_GeneralMenuScreen_UI_Counter_Coin_K2Node_ComponentBoundEvent_8_OnClickDelegate__DelegateSignature_Params
{
public:
	class UUI_Counter_C*                         Counter;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ListQoSServers_Success
struct UUI_Menu_GeneralMenuScreen_C_ListQoSServers_Success_Params
{
public:
	struct FMultiplayerListQosServersForTitleResponse Result;                                            // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ListQoSServers_Failure
struct UUI_Menu_GeneralMenuScreen_C_ListQoSServers_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.Construct
struct UUI_Menu_GeneralMenuScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.BndEvt__UI_Menu_GeneralMenuScreen_UI_Button_BattlePass_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_BndEvt__UI_Menu_GeneralMenuScreen_UI_Button_BattlePass_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
{
public:
	class UUI_Button_Line_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.GetTime_Success
struct UUI_Menu_GeneralMenuScreen_C_GetTime_Success_Params
{
public:
	struct FClientGetTimeResult                  Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.GetTime_Failure
struct UUI_Menu_GeneralMenuScreen_C_GetTime_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x5EC (0x5EC - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.ExecuteUbergraph_UI_Menu_GeneralMenuScreen
struct UUI_Menu_GeneralMenuScreen_C_ExecuteUbergraph_UI_Menu_GeneralMenuScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3321[0x4];                                     // Fixing Size After Last Property 
	class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_1;               // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_2;               // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_3;               // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_4;               // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_5;               // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x98(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xA8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xB8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_GetTime_ReturnValue;                      // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0xD0(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_4;                   // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3324[0x5];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable;                              // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x128(0x40)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3325[0x4];                                     // Fixing Size After Last Property 
	class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_6;               // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3326[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3327[0x7];                                     // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_1;                     // 0x198(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_5;                   // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_1;                   // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3328[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3329[0x7];                                     // Fixing Size After Last Property 
	class UUI_Button_Line_C*                     K2Node_ComponentBoundEvent_Button_4;               // 0x1F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_Line_C*                     K2Node_ComponentBoundEvent_Button_3;               // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_Line_C*                     K2Node_ComponentBoundEvent_Button_2;               // 0x218(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Menu_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Menu;      // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332A[0x7];                                     // Fixing Size After Last Property 
	class UUI_Button_Line_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x230(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x238(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x248(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_DynamicCast_AsUI_Button;                    // 0x250(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332B[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332C[0x7];                                     // Fixing Size After Last Property 
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x268(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x278(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332D[0x4];                                     // Fixing Size After Last Property 
	class UUI_Button_Line_C*                     K2Node_DynamicCast_AsUI_Button_Line;               // 0x288(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332E[0x6];                                     // Fixing Size After Last Property 
	class UUI_Counter_C*                         K2Node_ComponentBoundEvent_Counter_1;              // 0x298(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_CustomEvent_ModifiedData;                   // 0x2A0(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_CustomString;                   // 0x2B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332F[0x4];                                     // Fixing Size After Last Property 
	class UBP_PG_GameInstance_C*                 CallFunc_GetGameInstance_MyGameIntance;            // 0x2C8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3330[0x2];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x2D8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_KickReason_C*                      CallFunc_Create_ReturnValue;                       // 0x2F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Counter_C*                         K2Node_ComponentBoundEvent_Counter;                // 0x2F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x308(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_CurrencyConversion_C*              CallFunc_Create_ReturnValue_1;                     // 0x318(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMultiplayerListQosServersForTitleResponse K2Node_CustomEvent_result_1;                       // 0x328(0x30)(None)
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMultiplayerListQosServersForTitleRequest K2Node_MakeStruct_MultiplayerListQosServersForTitleRequest; // 0x360(0x18)(NoDestructor)
	struct FPlayFabError                         K2Node_CustomEvent_error_1;                        // 0x378(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x3B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3333[0x3];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x3C0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x3D8(0x18)(None)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3335[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FPingQoSInfo>                  K2Node_MakeArray_Array;                            // 0x408(0x10)(ReferenceParm)
	class UPingQoSSubsystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPingQoSInfo>                  K2Node_LowEntry_LocalVariable_Value__Object;       // 0x420(0x10)(ReferenceParm)
	bool                                         CallFunc_Update_ReturnValue;                       // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3337[0x7];                                     // Fixing Size After Last Property 
	class UPingQoSSubsystem*                     CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x440(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x450(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabMultiplayerAPI*                CallFunc_ListQosServersForTitle_ReturnValue;       // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3338[0x7];                                     // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     Temp_struct_Variable_1;                            // 0x470(0x40)(None)
	class UObject*                               Temp_object_Variable_1;                            // 0x4B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333C[0x7];                                     // Fixing Size After Last Property 
	class UUI_Button_Line_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x4C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FClientGetTimeResult                  K2Node_CustomEvent_result;                         // 0x4C8(0x18)(None)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x4E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x4E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x4F8(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x530(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_DateTimeFromIsoString_Result;             // 0x538(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DateTimeFromIsoString_ReturnValue;        // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333D[0x7];                                     // Fixing Size After Last Property 
	class UBP_PG_GameInstance_C*                 CallFunc_GetGameInstance_MyGameIntance_1;          // 0x548(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClientGameInstance*                   CallFunc_GetClientGameInstance_ReturnValue;        // 0x550(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x558(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x569(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333E[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x570(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333F[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x57C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item_2;                         // 0x580(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x588(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x598(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FPingQoSInfo                          K2Node_MakeStruct_PingQoSInfo;                     // 0x5A8(0x40)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_GeneralMenuScreen.UI_Menu_GeneralMenuScreen_C.OnUpdatePingOfRegions__DelegateSignature
struct UUI_Menu_GeneralMenuScreen_C_OnUpdatePingOfRegions__DelegateSignature_Params
{
public:
};

}
}


