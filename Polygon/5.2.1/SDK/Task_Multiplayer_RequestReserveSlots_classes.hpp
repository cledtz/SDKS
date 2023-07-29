#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0xF9 - 0xA8)
// BlueprintGeneratedClass Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C
class UTask_Multiplayer_RequestReserveSlots_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                IP;                                                // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        BeaconPort;                                        // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsUseMatchmaker;                                   // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1CF7[0x3];                                     // Fixing Size After Last Property
	class UBP_PG_PlayerController_Menu_C*        PlayerController;                                  // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FUniqueNetIdRepl>              UserIds;                                           // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_Multiplayer_Queue_C*               UI_Queue;                                          // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        ErrorCode;                                         // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Task_Multiplayer_RequestReserveSlots_C");
		return Clss;
	}

	void ReceiveActivate();
	void OnConnectionStateChange_Event(bool bWasSuccessful);
	void OnResponseReserveSlot_Event(uint8 Payload);
	void OnPutInQueue_Event(uint8 Number);
	void OnClickLeave_Event();
	void ReceiveFinished(enum class EActionState Reason);
	void ExecuteUbergraph_Task_Multiplayer_RequestReserveSlots(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EActionState Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_bWasSuccessful, uint8 K2Node_CustomEvent_Payload, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UPG_BeaconClient* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, TArray<class UBlueprintPartyMember*>& CallFunc_GetPartyMembers_OutPartyMembersArray, bool CallFunc_GetPartyMembers_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, class UBlueprintPartyMember* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUserId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, uint8 K2Node_CustomEvent_Number, class FText CallFunc_Conv_ByteToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EActionState K2Node_Event_Reason, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Select_Default, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_Multiplayer_Queue_C* CallFunc_Create_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsMemberLeader_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_ConnectToServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnFinished__DelegateSignature(bool IsSuccessful, uint8 ErrorCode);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
