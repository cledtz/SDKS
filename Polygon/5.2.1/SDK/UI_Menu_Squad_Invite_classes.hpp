#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2A8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Squad_Invite.UI_Menu_Squad_Invite_C
class UUI_Menu_Squad_Invite_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Decline;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Join;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_SenderUserName;                          // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOnlinePartyJoinInfo*                  SquadInfo;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Squad_Invite_C");
		return Clss;
	}

	void OnJoinPartyComplete_EB2E789049330CFB47C3B2B5D301B0C4(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class EJoinPartyCompletionResult_ Result, int32 NotApprovedReason);
	void OnCallFailed_EB2E789049330CFB47C3B2B5D301B0C4(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class EJoinPartyCompletionResult_ Result, int32 NotApprovedReason);
	void OnLeavePartyComplete_FD974F5E4C06FACCC7D090880A4861F8(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result);
	void OnCallFailed_FD974F5E4C06FACCC7D090880A4861F8(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result);
	void Construct();
	void BndEvt__UI_Squad_Invite_Button_Join_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Squad_Invite_Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Menu_Squad_Invite(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_2, class UPartyId* K2Node_CustomEvent_PartyId_2, enum class EJoinPartyCompletionResult_ K2Node_CustomEvent_result_2, int32 K2Node_CustomEvent_NotApprovedReason, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, int32 Temp_int_Variable, enum class EJoinPartyCompletionResult_ Temp_byte_Variable, class UPartyId* Temp_object_Variable, const struct FUniqueNetIdRepl& Temp_struct_Variable, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const class FString& CallFunc_GetSourceDisplayName_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_1, class UPartyId* K2Node_CustomEvent_PartyId_1, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId, class UPartyId* K2Node_CustomEvent_PartyId, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ELeavePartyCompletionResult_ Temp_byte_Variable_1, class UPartyId* Temp_object_Variable_1, const struct FUniqueNetIdRepl& Temp_struct_Variable_1, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, TArray<class UOnlinePartyJoinInfo*>& CallFunc_GetPendingInvites_OutPendingInvitesArray, bool CallFunc_GetPendingInvites_ReturnValue, class UOnlinePartyJoinInfo* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, class UOnlinePartySubsystemJoinParty* CallFunc_JoinParty_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_3, class UPartyId* K2Node_CustomEvent_PartyId_3, enum class EJoinPartyCompletionResult_ K2Node_CustomEvent_result_3, int32 K2Node_CustomEvent_NotApprovedReason_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_4, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetSourceUserId_ReturnValue, bool CallFunc_RejectInvitation_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1, bool K2Node_DynamicCast_bSuccess_1, class UOnlinePartySubsystemLeaveParty* CallFunc_LeaveParty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_5, TArray<class UOnlinePartyJoinInfo*>& CallFunc_GetPendingInvites_OutPendingInvitesArray_1, bool CallFunc_GetPendingInvites_ReturnValue_1, class UOnlinePartyJoinInfo* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetSourceUserId_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RejectInvitation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
