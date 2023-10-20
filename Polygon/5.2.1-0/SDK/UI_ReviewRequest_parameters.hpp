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

// 0x49 (0x49 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.OnPlayFabResponse_37F6905649BFCD8FE020289E9E1B2AA9
struct UUI_ReviewRequest_C_OnPlayFabResponse_37F6905649BFCD8FE020289E9E1B2AA9_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.OnPlayFabResponse_38F3E1DF41AE18CF364732AC70833B03
struct UUI_ReviewRequest_C_OnPlayFabResponse_38F3E1DF41AE18CF364732AC70833B03_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.OnPlayFabResponse_E6E5F3F1447AAFA98AC0BD8ED8766584
struct UUI_ReviewRequest_C_OnPlayFabResponse_E6E5F3F1447AAFA98AC0BD8ED8766584_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.BndEvt__UI_ReviewRequest_Button_SteamPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_ReviewRequest_C_BndEvt__UI_ReviewRequest_Button_SteamPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.SaveIsRequestedReview
struct UUI_ReviewRequest_C_SaveIsRequestedReview_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.SaveIsRequested_Success
struct UUI_ReviewRequest_C_SaveIsRequested_Success_Params
{
public:
	struct FClientUpdateUserDataResult           Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               CustomData;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.SaveIsRequested_Failure
struct UUI_ReviewRequest_C_SaveIsRequested_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.BndEvt__UI_ReviewRequest_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_ReviewRequest_C_BndEvt__UI_ReviewRequest_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.WritePlayerEvent_RequestReview_Success
struct UUI_ReviewRequest_C_WritePlayerEvent_RequestReview_Success_Params
{
public:
	struct FClientWriteEventResponse             Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.WritePlayerEvent_RequestReview_Failure
struct UUI_ReviewRequest_C_WritePlayerEvent_RequestReview_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x420 (0x420 - 0x0)
// Function UI_ReviewRequest.UI_ReviewRequest_C.ExecuteUbergraph_UI_ReviewRequest
struct UUI_ReviewRequest_C_ExecuteUbergraph_UI_ReviewRequest_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDA[0x3];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x10(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_1;                     // 0x70(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_5;                   // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_1;                   // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDB[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xBC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDC[0x3];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable_1;                            // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_1;                            // 0xD8(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x118(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x128(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_4;                   // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDD[0x6];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable_2;                            // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_2;                            // 0x180(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1C0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1D0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientUpdateUserDataResult           K2Node_CustomEvent_result_1;                       // 0x1F0(0x10)(NoDestructor)
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientUpdateUserDataRequest          K2Node_MakeStruct_ClientUpdateUserDataRequest;     // 0x208(0x30)(None)
	class UPlayFabClientAPI*                     CallFunc_UpdateUserData_ReturnValue;               // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error_1;                        // 0x240(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDE[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_1;        // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__1_Object;     // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Base*                  K2Node_DynamicCast_AsPG_Player_State_Base;         // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDF[0x7];                                     // Fixing Size After Last Property 
	struct FClientWriteClientPlayerEventRequest  K2Node_MakeStruct_ClientWriteClientPlayerEventRequest; // 0x2B0(0x38)(None)
	class UPlayFabClientAPI*                     CallFunc_WritePlayerEvent_ReturnValue;             // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DE1[0x7];                                     // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_2;                     // 0x308(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_6;                   // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_2;                   // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DE3[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_2;        // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__2_Object;     // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientWriteClientPlayerEventRequest  K2Node_MakeStruct_ClientWriteClientPlayerEventRequest_1; // 0x368(0x38)(None)
	class UPlayFabClientAPI*                     CallFunc_WritePlayerEvent_ReturnValue_1;           // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DE6[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x3AC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DE7[0x4];                                     // Fixing Size After Last Property 
	struct FClientWriteEventResponse             K2Node_CustomEvent_result;                         // 0x3C0(0x18)(None)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x3E0(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


