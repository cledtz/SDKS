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
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.OnPlayFabResponse_47BF5E7C4A786A264B39429837BB0988
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_OnPlayFabResponse_47BF5E7C4A786A264B39429837BB0988_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.OnPlayFabResponse_C3EE8B3C43DF5555B944E383B9EE3A44
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_OnPlayFabResponse_C3EE8B3C43DF5555B944E383B9EE3A44_Params
{
public:
	struct FPlayFabBaseModel                     Response;                                          // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Successful;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.ReceiveActivate
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_ReceiveActivate_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.GetServerTime_Failure
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_GetServerTime_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.GetServerTime_Success
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_GetServerTime_Success_Params
{
public:
	struct FClientGetTimeResult                  Result;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.StartOfferTimer_Success
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_StartOfferTimer_Success_Params
{
public:
	struct FClientUpdateUserDataResult           Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               CustomData;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.StartOfferTimer_Failure
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_StartOfferTimer_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.ReceiveFinished
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_ReceiveFinished_Params
{
public:
	enum class EActionState                      Reason;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4B0 (0x4B0 - 0x0)
// Function Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle.Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C.ExecuteUbergraph_Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle
struct UTask_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_C_ExecuteUbergraph_Task_MainMenu_Shop_Premium_Offers_GenerateBoosterBundle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_742[0x4];                                      // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response;                       // 0x20(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_4;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_743[0x6];                                      // Fixing Size After Last Property 
	class UObject*                               Temp_object_Variable;                              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabBaseModel                     Temp_struct_Variable;                              // 0x78(0x40)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xC8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_747[0x2];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_749[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74B[0x3];                                      // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74D[0x7];                                      // Fixing Size After Last Property 
	struct FPlayFabError                         K2Node_CustomEvent_error_1;                        // 0x118(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData_3;                   // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientGetTimeResult                  K2Node_CustomEvent_result_1;                       // 0x158(0x18)(None)
	class UObject*                               K2Node_CustomEvent_customData_2;                   // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_DateTimeFromIsoString_Result;             // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DateTimeFromIsoString_ReturnValue;        // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_752[0x7];                                      // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_DateTimeFromIsoString_Result_1;           // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DateTimeFromIsoString_ReturnValue_1;      // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_755[0x7];                                      // Fixing Size After Last Property 
	struct FTimespan                             CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_GetDuration_ReturnValue;                  // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTotalSeconds_ReturnValue;              // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_759[0x4];                                      // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_1;      // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_2;        // 0x1FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75C[0x2];                                      // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_2;      // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75D[0x7];                                      // Fixing Size After Last Property 
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x210(0x10)(ReferenceParm)
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item;                           // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x232(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75F[0x5];                                      // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue_2;             // 0x238(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_760[0x7];                                      // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_3;      // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x258(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_2;             // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabClientAPI*                     CallFunc_GetTime_ReturnValue;                      // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_1;                   // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_768[0x6];                                      // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     Temp_struct_Variable_1;                            // 0x280(0x40)(None)
	struct FClientUpdateUserDataResult           K2Node_CustomEvent_result;                         // 0x2C0(0x10)(NoDestructor)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x2D8(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue;          // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__Object;       // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_76C[0x7];                                      // Fixing Size After Last Property 
	struct FClientUpdateUserDataRequest          K2Node_MakeStruct_ClientUpdateUserDataRequest;     // 0x338(0x30)(None)
	class UPlayFabClientAPI*                     CallFunc_UpdateUserData_ReturnValue;               // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_ConstructJsonObject_ReturnValue_1;        // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    K2Node_LowEntry_LocalVariable_Value__1_Object;     // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue_3;             // 0x380(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_DecodeJson_ReturnValue;                   // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x392(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EActionState                      K2Node_Event_Reason;                               // 0x393(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_771[0x4];                                      // Fixing Size After Last Property 
	struct FPlayFabBaseModel                     K2Node_CustomEvent_response_1;                     // 0x398(0x40)(None)
	class UObject*                               K2Node_CustomEvent_customData_5;                   // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_successful_1;                   // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_774[0x6];                                      // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue_4;      // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue_1;        // 0x3F0(0x10)(ReferenceParm)
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item_1;                         // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_778[0x4];                                      // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue_4;             // 0x410(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x422(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x423(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x424(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77D[0x3];                                      // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x428(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_782[0x7];                                      // Fixing Size After Last Property 
	class UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C* CallFunc_Create_ReturnValue;                       // 0x450(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                          CallFunc_AddChildToWrapBox_ReturnValue;            // 0x458(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu;         // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_785[0x7];                                      // Fixing Size After Last Property 
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x470(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0x480(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_788[0x4];                                      // Fixing Size After Last Property 
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x490(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x499(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x49A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_78B[0x5];                                      // Fixing Size After Last Property 
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


