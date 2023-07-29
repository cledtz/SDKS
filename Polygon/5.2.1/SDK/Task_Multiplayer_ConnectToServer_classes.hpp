#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass Task_Multiplayer_ConnectToServer.Task_Multiplayer_ConnectToServer_C
class UTask_Multiplayer_ConnectToServer_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PG_PlayerController_Menu_C*        PlayerController;                                  // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPartyId*                              JoinedSquad;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsUseMatchmaker;                                   // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_45E[0x7];                                      // Fixing Size After Last Property
	class FString                                IP;                                                // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ServerPort;                                        // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        BeaconPort;                                        // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Password;                                          // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Task_Multiplayer_ConnectToServer_C");
		return Clss;
	}

	void OnPlayFabResponse_3F9ED0AB4BF39E9BF514A8BC8A2291FA(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void ReceiveActivate();
	void OnPasswordEntered_Event();
	void OnCanceled_Event();
	void ReceiveFinished(enum class EActionState Reason);
	void WritePlayerEvent_Success(const struct FClientWriteEventResponse& Result, class UObject* CustomData);
	void WritePlayerEvent_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void OnReserveSlotFinished_Event(bool IsSuccessful, uint8 ErrorCode);
	void CustomEvent_0(const struct FClientWriteEventResponse& Result, class UObject* CustomData);
	void CustomEvent_1(const struct FPlayFabError& Error, class UObject* CustomData);
	void ExecuteUbergraph_Task_Multiplayer_ConnectToServer(int32 EntryPoint, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_4, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_MakeLiteralText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UUI_ServerPassword_C* CallFunc_Create_ReturnValue, enum class EActionState K2Node_Event_Reason, bool Temp_bool_Variable_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, enum class EActionState Temp_byte_Variable, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__1_Object, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsMemberLeader_ReturnValue, const struct FClientWriteEventResponse& K2Node_CustomEvent_result_1, class UObject* K2Node_CustomEvent_customData_3, const struct FPlayFabError& K2Node_CustomEvent_error_1, class UObject* K2Node_CustomEvent_customData_2, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_2, class UTask_Multiplayer_RequestReserveSlots_C* CallFunc_CreateAction_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__2_Object, const struct FClientWriteClientPlayerEventRequest& K2Node_MakeStruct_ClientWriteClientPlayerEventRequest, class UPlayFabClientAPI* CallFunc_WritePlayerEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetAppBuildId_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_CustomEvent_IsSuccessful, uint8 K2Node_CustomEvent_ErrorCode, int64 CallFunc_Conv_ByteToInt64_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Conv_ByteToDouble_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FClientWriteEventResponse& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, float CallFunc_SetNumberField_Number_ImplicitCast, float CallFunc_SetNumberField_Number_ImplicitCast_1);
	void OnFinished__DelegateSignature(bool IsSuccessful);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
