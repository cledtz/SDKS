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

// 0x38 (0x38 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.DisableTutorialLocal
struct UUI_Menu_Tutorial_Show_C_DisableTutorialLocal_Params
{
public:
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ReferenceParm)
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D2A[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.OnPlayFabResponse_8E175A004BF299396E7FF1936175E0A8
struct UUI_Menu_Tutorial_Show_C_OnPlayFabResponse_8E175A004BF299396E7FF1936175E0A8_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.OnPlayFabResponse_2834E7BC44EE5C27AF494EACE2CE051F
struct UUI_Menu_Tutorial_Show_C_OnPlayFabResponse_2834E7BC44EE5C27AF494EACE2CE051F_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Tutorial_Show_C_BndEvt__UI_Menu_Tutorial_Show_Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.Construct
struct UUI_Menu_Tutorial_Show_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.WritePlayerEvent_Success
struct UUI_Menu_Tutorial_Show_C_WritePlayerEvent_Success_Params
{
public:
	struct FClientWriteEventResponse             Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.WritePlayerEvent_Failure
struct UUI_Menu_Tutorial_Show_C_WritePlayerEvent_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Tutorial_Show_C_BndEvt__UI_Menu_Tutorial_Show_Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.BndEvt__UI_Menu_Tutorial_Show_Button_Later_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Tutorial_Show_C_BndEvt__UI_Menu_Tutorial_Show_Button_Later_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x271 (0x271 - 0x0)
// Function UI_Menu_Tutorial_Show.UI_Menu_Tutorial_Show_C.ExecuteUbergraph_UI_Menu_Tutorial_Show
struct UUI_Menu_Tutorial_Show_C_ExecuteUbergraph_UI_Menu_Tutorial_Show_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D40[0x4];                                     // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_1;                     // 0x8(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_1;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D42[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D43[0x3];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable;                              // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x70(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Tutorial_C*                   CallFunc_Create_ReturnValue;                       // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xC8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0xD8(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D44[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x124(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D45[0x3];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable_1;                            // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_1;                            // 0x140(0x40)(None)
	struct FClientWriteClientPlayerEventRequest  K2Node_MakeStruct_ClientWriteClientPlayerEventRequest; // 0x180(0x38)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_WritePlayerEvent_ReturnValue;             // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientWriteEventResponse             K2Node_CustomEvent_result;                         // 0x1C8(0x18)(None)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D47[0x7];                                     // Fixing Size After Last Property 
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x1F0(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientWriteClientPlayerEventRequest  K2Node_MakeStruct_ClientWriteClientPlayerEventRequest_1; // 0x230(0x38)(None)
	class UPlayFabClientAPI*                     CallFunc_WritePlayerEvent_ReturnValue_1;           // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


