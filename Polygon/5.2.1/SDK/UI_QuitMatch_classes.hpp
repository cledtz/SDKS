#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2A0 - 0x280)
// WidgetBlueprintGeneratedClass UI_QuitMatch.UI_QuitMatch_C
class UUI_QuitMatch_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_No;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Yes;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_LeaveSquad;                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_QuitMatch_C");
		return Clss;
	}

	void OnLeavePartyComplete_FA8E42314510031AA7A8D9AAC21CEF7E(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result);
	void OnCallFailed_FA8E42314510031AA7A8D9AAC21CEF7E(const struct FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, enum class ELeavePartyCompletionResult_ Result);
	void BndEvt__Button_Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_QuitMatch(int32 EntryPoint, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId_1, class UPartyId* K2Node_CustomEvent_PartyId_1, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUniqueNetIdRepl& K2Node_CustomEvent_LocalUserId, class UPartyId* K2Node_CustomEvent_PartyId, enum class ELeavePartyCompletionResult_ K2Node_CustomEvent_result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ELeavePartyCompletionResult_ Temp_byte_Variable, class UPartyId* Temp_object_Variable, const struct FUniqueNetIdRepl& Temp_struct_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_2, TArray<class UPartyId*>& CallFunc_GetJoinedParties_OutPartyIdArray, bool CallFunc_GetJoinedParties_ReturnValue, TArray<class UPartyId*>& CallFunc_GetJoinedParties_OutPartyIdArray_1, bool CallFunc_GetJoinedParties_ReturnValue_1, class UPartyId* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UOnlinePartySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UOnlinePartySubsystemLeaveParty* CallFunc_LeaveParty_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
