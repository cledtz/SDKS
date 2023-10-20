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
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnPlayFabResponse_3F9ED0AB4BF39E9BF514A8BC8A2291FA
struct UTask_Multiplayer_ConnectToServer_C_OnPlayFabResponse_3F9ED0AB4BF39E9BF514A8BC8A2291FA_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.ReceiveActivate
struct UTask_Multiplayer_ConnectToServer_C_ReceiveActivate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnPasswordEntered_Event
struct UTask_Multiplayer_ConnectToServer_C_OnPasswordEntered_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnCanceled_Event
struct UTask_Multiplayer_ConnectToServer_C_OnCanceled_Event_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.ReceiveFinished
struct UTask_Multiplayer_ConnectToServer_C_ReceiveFinished_Params
{
public:
	enum class EActionState                      Reason;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.WritePlayerEvent_Success
struct UTask_Multiplayer_ConnectToServer_C_WritePlayerEvent_Success_Params
{
public:
	struct FClientWriteEventResponse             Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.WritePlayerEvent_Failure
struct UTask_Multiplayer_ConnectToServer_C_WritePlayerEvent_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnReserveSlotFinished_Event
struct UTask_Multiplayer_ConnectToServer_C_OnReserveSlotFinished_Event_Params
{
public:
	bool                                         IsSuccessful;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        ErrorCode;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.CustomEvent_0
struct UTask_Multiplayer_ConnectToServer_C_CustomEvent_0_Params
{
public:
	struct FClientWriteEventResponse             Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.CustomEvent_1
struct UTask_Multiplayer_ConnectToServer_C_CustomEvent_1_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x418 (0x418 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.ExecuteUbergraph_Task_Multiplayer_ConnectToServer
struct UTask_Multiplayer_ConnectToServer_C_ExecuteUbergraph_Task_Multiplayer_ConnectToServer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29EA[0x4];                                     // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x8(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_4;                   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29ED[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29EE[0x3];                                     // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable;                              // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x70(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xC0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xD0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xE0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F1[0x5];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F2[0x7];                                     // Fixing Size After Last Property 
	class UUI_ServerPassword_C*                  CallFunc_Create_ReturnValue;                       // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EActionState                      K2Node_Event_Reason;                               // 0x130(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F4[0x6];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x138(0x30)(HasGetValueTypeHash)
	enum class EActionState                      Temp_byte_Variable;                                // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F5[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x170(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x188(0x10)(ReferenceParm)
	bool                                         K2Node_Select_Default;                             // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F7[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1A0(0x18)(None)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_1;        // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__1_Object;     // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1E0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMemberLeader_ReturnValue;               // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29FB[0x6];                                     // Fixing Size After Last Property 
	struct FClientWriteEventResponse             K2Node_CustomEvent_result_1;                       // 0x1F8(0x18)(None)
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error_1;                        // 0x218(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_2;        // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_Multiplayer_RequestReserveSlots_C* CallFunc_CreateAction_ReturnValue;                 // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__2_Object;     // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientWriteClientPlayerEventRequest  K2Node_MakeStruct_ClientWriteClientPlayerEventRequest; // 0x270(0x38)(None)
	class UPlayFabClientAPI*                     CallFunc_WritePlayerEvent_ReturnValue;             // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29FD[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_GetAppBuildId_ReturnValue;                // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsSuccessful;                   // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_ErrorCode;                      // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29FE[0x6];                                     // Fixing Size After Last Property 
	int64                                        CallFunc_Conv_ByteToInt64_ReturnValue;             // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29FF[0x7];                                     // Fixing Size After Last Property 
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2E0(0x50)(HasGetValueTypeHash)
	double                                       CallFunc_Conv_ByteToDouble_ReturnValue;            // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x338(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x348(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A00[0x6];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x380(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A01[0x7];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x398(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A02[0x7];                                     // Fixing Size After Last Property 
	struct FClientWriteEventResponse             K2Node_CustomEvent_result;                         // 0x3B0(0x18)(None)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x3D0(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast;       // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetNumberField_Number_ImplicitCast_1;     // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C.OnFinished__DelegateSignature
struct UTask_Multiplayer_ConnectToServer_C_OnFinished__DelegateSignature_Params
{
public:
	bool                                         IsSuccessful;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


