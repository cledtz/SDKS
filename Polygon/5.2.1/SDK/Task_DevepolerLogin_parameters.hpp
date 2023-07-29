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
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.ConstructRequestPlayerCombinedInfo
struct UTask_DevepolerLogin_C_ConstructRequestPlayerCombinedInfo_Params
{
public:
	class UPlayFabJsonObject*                    Request;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_Request;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.OnPlayFabResponse_763BB15148AF2429F3E103B2AA4E64DC
struct UTask_DevepolerLogin_C_OnPlayFabResponse_763BB15148AF2429F3E103B2AA4E64DC_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.OnPlayFabResponse_57D036694E81E3042DF61EA9CBCE87C6
struct UTask_DevepolerLogin_C_OnPlayFabResponse_57D036694E81E3042DF61EA9CBCE87C6_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.ReceiveActivate
struct UTask_DevepolerLogin_C_ReceiveActivate_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.Login_Success
struct UTask_DevepolerLogin_C_Login_Success_Params
{
public:
	struct FClientLoginResult                    Result;                                            // 0x0(0x68)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.Login_Failure
struct UTask_DevepolerLogin_C_Login_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.GetPlayerCombinedInfo_Success
struct UTask_DevepolerLogin_C_GetPlayerCombinedInfo_Success_Params
{
public:
	struct FClientGetPlayerCombinedInfoResult    Result;                                            // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x351 (0x351 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.ExecuteUbergraph_Task_DevepolerLogin
struct UTask_DevepolerLogin_C_ExecuteUbergraph_Task_DevepolerLogin_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34EF[0x3];                                     // Fixing Size After Last Property
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x10(0x40)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x70(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F1[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xBC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F2[0x3];                                     // Fixing Size After Last Property
	class UObject*                               Temp_object_Variable_1;                            // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable_1;                            // 0xD8(0x40)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x118(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WithEditor_ReturnValue;                   // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F3[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CallFunc_ConstructRequestPlayerCombinedInfo_Request; // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientLoginWithCustomIDRequest       K2Node_MakeStruct_ClientLoginWithCustomIDRequest;  // 0x138(0x50)()
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_LoginWithCustomID_ReturnValue;            // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Base*                  K2Node_DynamicCast_AsPG_Player_State_Base;         // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F4[0x6];                                     // Fixing Size After Last Property
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array;                            // 0x1A8(0x10)(ConstParm, ReferenceParm)
	struct FClientLoginResult                    K2Node_CustomEvent_result_1;                       // 0x1B8(0x68)()
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F6[0x7];                                     // Fixing Size After Last Property
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x230(0x38)()
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructRequestPlayerCombinedInfo_Request_1; // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_1;                     // 0x278(0x40)()
	class UObject*                               K2Node_CustomEvent_customData_4;                   // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_1;                   // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F7[0x7];                                     // Fixing Size After Last Property
	struct FClientGetPlayerCombinedInfoRequest   K2Node_MakeStruct_ClientGetPlayerCombinedInfoRequest; // 0x2C8(0x28)()
	struct FClientGetPlayerCombinedInfoResult    K2Node_CustomEvent_result;                         // 0x2F0(0x20)()
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x318(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x328(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_MakeArray_Array_1;                          // 0x340(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.OnSuccess__DelegateSignature
struct UTask_DevepolerLogin_C_OnSuccess__DelegateSignature_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function Task_DevepolerLogin.Task_DevepolerLogin_C.OnFailure__DelegateSignature
struct UTask_DevepolerLogin_C_OnFailure__DelegateSignature_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
