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

// 0x28 (0x28 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.ConstructRequestPlayerCombinedInfo
struct UUI_LoginScreen_C_ConstructRequestPlayerCombinedInfo_Params
{
public:
	class UPlayFabJsonObject*                    Request;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_Request;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.ShowErrorMessage
struct UUI_LoginScreen_C_ShowErrorMessage_Params
{
public:
	struct FPlayFabError                         PlayFabError;                                      // 0x0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x50(0x18)()
};

// 0x49 (0x49 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F
struct UUI_LoginScreen_C_OnPlayFabResponse_C212664541185E46F64DD1B5C3B4F97F_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06
struct UUI_LoginScreen_C_OnPlayFabResponse_9D53D0BB48321AF2818524814BD8FB06_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E
struct UUI_LoginScreen_C_OnPlayFabResponse_DA74F5AB45E383FF5D542A96BD744E9E_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.OnLoginComplete_AE47C52642B7D27765F4D3B14A92D63C
struct UUI_LoginScreen_C_OnLoginComplete_AE47C52642B7D27765F4D3B14A92D63C_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_319D[0x7];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.OnCallFailed_AE47C52642B7D27765F4D3B14A92D63C
struct UUI_LoginScreen_C_OnCallFailed_AE47C52642B7D27765F4D3B14A92D63C_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_319E[0x7];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                Error;                                             // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.OnSuccess_20F411B94BC59186A71DF7BFB60DE6BC
struct UUI_LoginScreen_C_OnSuccess_20F411B94BC59186A71DF7BFB60DE6BC_Params
{
public:
};

// 0x49 (0x49 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.OnPlayFabResponse_77B2D5324B52ABCD7EAADE81E626F006
struct UUI_LoginScreen_C_OnPlayFabResponse_77B2D5324B52ABCD7EAADE81E626F006_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.LoginViaOnlineService
struct UUI_LoginScreen_C_LoginViaOnlineService_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.LoginViaCustomID
struct UUI_LoginScreen_C_LoginViaCustomID_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Failure
struct UUI_LoginScreen_C_LoginWithSteam_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.RequestPlayerCombinedInfo
struct UUI_LoginScreen_C_RequestPlayerCombinedInfo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.Login
struct UUI_LoginScreen_C_Login_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Success
struct UUI_LoginScreen_C_GetPlayerCombinedInfo_Success_Params
{
public:
	struct FClientGetPlayerCombinedInfoResult    Result;                                            // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.GetPlayerCombinedInfo_Failure
struct UUI_LoginScreen_C_GetPlayerCombinedInfo_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.LoginWithSteam_Success
struct UUI_LoginScreen_C_LoginWithSteam_Success_Params
{
public:
	struct FClientLoginResult                    Result;                                            // 0x0(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Success
struct UUI_LoginScreen_C_UpdateUserTitleDisplayName_Success_Params
{
public:
	struct FClientUpdateUserTitleDisplayNameResult Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUserTitleDisplayName_Failure
struct UUI_LoginScreen_C_UpdateUserTitleDisplayName_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.Construct
struct UUI_LoginScreen_C_Construct_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.DeveloperLogin_Failure
struct UUI_LoginScreen_C_DeveloperLogin_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.GetAuthSessionTicketResponse_Event
struct UUI_LoginScreen_C_GetAuthSessionTicketResponse_Event_Params
{
public:
	struct FGetAuthSessionTicketResponse         Data;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUsedData_Success
struct UUI_LoginScreen_C_UpdateUsedData_Success_Params
{
public:
	struct FClientUpdateUserDataResult           Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               CustomData;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.UpdateUsedData_Failure
struct UUI_LoginScreen_C_UpdateUsedData_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.WriteEvent_Success
struct UUI_LoginScreen_C_WriteEvent_Success_Params
{
public:
	struct FClientWriteEventResponse             Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.WriteEvent_Failure
struct UUI_LoginScreen_C_WriteEvent_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.UpdateRequiredDataInDatabase
struct UUI_LoginScreen_C_UpdateRequiredDataInDatabase_Params
{
public:
};

// 0xA38 (0xA38 - 0x0)
// Function UI_LoginScreen.UI_LoginScreen_C.ExecuteUbergraph_UI_LoginScreen
struct UUI_LoginScreen_C_ExecuteUbergraph_UI_LoginScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3221[0x4];                                     // Fixing Size After Last Property
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_3;                     // 0x8(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_13;                  // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_3;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3223[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x64(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x74(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x84(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3225[0x4];                                     // Fixing Size After Last Property
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_1;                     // 0x98(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_11;                  // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_1;                   // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3226[0x6];                                     // Fixing Size After Last Property
	class UObject*                               Temp_object_Variable;                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0xF0(0x40)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x130(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x148(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOnlineIdentitySubsystemAutoLogin*     CallFunc_AutoLogin_ReturnValue;                    // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EOnlineLoginStatus                CallFunc_GetLoginStatus_ReturnValue;               // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_1;               // 0x163(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322B[0x4];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId_1;                       // 0x168(0x30)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_error_7;                        // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1A8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1B8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful;                 // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322C[0x7];                                     // Fixing Size After Last Property
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_UserId;                         // 0x1D0(0x30)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_error_6;                        // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable;                              // 0x210(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      Temp_struct_Variable_1;                            // 0x220(0x30)(HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_MakeStruct_PlayFabError;                    // 0x250(0x38)()
	bool                                         Temp_bool_Variable_1;                              // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322E[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x28C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x29C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x2AC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322F[0x4];                                     // Fixing Size After Last Property
	class UUser*                                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUser*                                 CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x2D0(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_10;                  // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3230[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x31C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3231[0x3];                                     // Fixing Size After Last Property
	class UObject*                               Temp_object_Variable_1;                            // 0x330(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_2;                            // 0x338(0x40)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x378(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x388(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WithEditor_ReturnValue;                   // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3232[0x6];                                     // Fixing Size After Last Property
	struct FPlayFabError                         K2Node_CustomEvent_error_5;                        // 0x3A0(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_9;                   // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsClientLoggedIn_ReturnValue;             // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3233[0x7];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3234[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_ConstructRequestPlayerCombinedInfo_Request; // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructRequestPlayerCombinedInfo_Request_1; // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x410(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientGetPlayerCombinedInfoRequest   K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest; // 0x420(0x28)()
	struct FClientGetPlayerCombinedInfoResult    K2Node_CustomEvent_result_4;                       // 0x448(0x20)()
	class UObject*                               K2Node_CustomEvent_customData_8;                   // 0x468(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x470(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3235[0x7];                                     // Fixing Size After Last Property
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x480(0x10)(ReferenceParm)
	struct FPlayFabError                         K2Node_CustomEvent_error_4;                        // 0x490(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_7;                   // 0x4C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x4D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3237[0x3];                                     // Fixing Size After Last Property
	struct FClientLoginResult                    K2Node_CustomEvent_result_3;                       // 0x4D8(0x68)()
	class UObject*                               K2Node_CustomEvent_customData_6;                   // 0x540(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3238[0x7];                                     // Fixing Size After Last Property
	struct FClientUpdateUserTitleDisplayNameResult K2Node_CustomEvent_result_2;                       // 0x550(0x18)()
	class UObject*                               K2Node_CustomEvent_customData_5;                   // 0x568(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error_3;                        // 0x570(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_4;                   // 0x5A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_3;                            // 0x5B0(0x40)()
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array;                            // 0x5F0(0x10)(ConstParm, ReferenceParm)
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array_1;                          // 0x600(0x10)(ConstParm, ReferenceParm)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323A[0x7];                                     // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x618(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_DevepolerLogin_C*                CallFunc_CreateAction_ReturnValue;                 // 0x620(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error_2;                        // 0x628(0x38)()
	TArray<uint8>                                CallFunc_GetAuthSessionTicket_Ticket;              // 0x660(0x10)(ReferenceParm)
	struct FSteamTicketHandle                    CallFunc_GetAuthSessionTicket_ReturnValue;         // 0x670(0x4)(NoDestructor)
	bool                                         CallFunc_IsSteamTicketHandleValid_ReturnValue;     // 0x674(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323B[0x3];                                     // Fixing Size After Last Property
	struct FGetAuthSessionTicketResponse         K2Node_CustomEvent_Data;                           // 0x678(0x8)(ConstParm, NoDestructor)
	class UObject*                               Temp_object_Variable_2;                            // 0x680(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSteamTicketHandleValid_ReturnValue_1;   // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x689(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323C[0x6];                                     // Fixing Size After Last Property
	TArray<uint8>                                CallFunc_GetAuthSessionTicket_Ticket_1;            // 0x690(0x10)(ReferenceParm)
	struct FSteamTicketHandle                    CallFunc_GetAuthSessionTicket_ReturnValue_1;       // 0x6A0(0x4)(NoDestructor)
	uint8                                        Pad_323D[0x4];                                     // Fixing Size After Last Property
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_2;                     // 0x6A8(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_12;                  // 0x6E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_2;                   // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323E[0x7];                                     // Fixing Size After Last Property
	class FString                                CallFunc_BytesToHex_ReturnValue;                   // 0x6F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FClientLoginWithSteamRequest          K2Node_MakeStruct_ClientLoginWithSteamRequest;     // 0x708(0x58)()
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x760(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x768(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x770(0x30)(HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_GetFieldNames_ReturnValue;                // 0x7A0(0x10)(ReferenceParm)
	class FString                                CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x7B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x7C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323F[0x3];                                     // Fixing Size After Last Property
	struct FClientUpdateUserDataRequest          K2Node_MakeStruct_ClientUpdateUserDataRequest;     // 0x7C8(0x30)()
	class UPlayFabClientAPI*                     CallFunc_UpdateUserData_ReturnValue;               // 0x7F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientUpdateUserDataResult           K2Node_CustomEvent_result_1;                       // 0x800(0x10)(NoDestructor)
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0x810(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3240[0x7];                                     // Fixing Size After Last Property
	struct FPlayFabError                         K2Node_CustomEvent_error_1;                        // 0x820(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x858(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAppBuildId_ReturnValue;                // 0x860(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3241[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_1;      // 0x870(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x880(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x888(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x889(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3244[0x2];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x88C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3245[0x4];                                     // Fixing Size After Last Property
	class UBP_PG_PlayerState_Menu_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Menu;      // 0x8A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3247[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x8AC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3248[0x4];                                     // Fixing Size After Last Property
	class UPlayFabClientAPI*                     CallFunc_LoginWithSteam_ReturnValue;               // 0x8C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_2;      // 0x8C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x8D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3249[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x8D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_1;                   // 0x8E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x8E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x8E6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8E7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClientWriteEventResponse             K2Node_CustomEvent_result;                         // 0x8E8(0x18)()
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x900(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x908(0x38)()
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x940(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_4;                            // 0x948(0x40)()
	class UObject*                               Temp_object_Variable_3;                            // 0x988(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_3;      // 0x990(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_4;      // 0x998(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x9A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_3;             // 0x9A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_2;                   // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324B[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_4;             // 0x9B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_5;             // 0x9C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x9C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_3;                   // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324C[0x7];                                     // Fixing Size After Last Property
	struct FClientUpdateUserTitleDisplayNameRequest K2Node_MakeStruct_ClientUpdateUserTitleDisplayNameRequest; // 0x9E0(0x20)()
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324D[0x7];                                     // Fixing Size After Last Property
	class UPlayFabClientAPI*                     CallFunc_UpdateUserTitleDisplayName_ReturnValue;   // 0xA08(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0xA10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0xA20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xA21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xA22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xA24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xA25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324E[0x2];                                     // Fixing Size After Last Property
	float                                        CallFunc_SetNumberField_Number_ImplicitCast;       // 0xA28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324F[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0xA30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
