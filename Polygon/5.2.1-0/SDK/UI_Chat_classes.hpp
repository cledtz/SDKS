#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x310 - 0x280)
// WidgetBlueprintGeneratedClass UI_Chat.UI_Chat_C
class UUI_Chat_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Warning;                                           // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HiddenChat;                                        // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_CloseChat;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_MessageType;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText_Message;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Chat;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Message;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_MessageType;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Main;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             PlayerState;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ChatIsOpened;                                      // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E3[0x7];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          Timer_PlayAnimation;                               // 0x2E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_HiddenChat;                                  // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EMessageType                      MessageType;                                       // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShowedMouseCursor;                               // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E6[0x6];                                     // Fixing Size After Last Property 
	TArray<class FString>                        BadWordsList;                                      // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_Chat_C* GetDefaultObj();

	void WordFilter(const class FString& Message, class FString* NewParam, const class FString& L_BadWord, const class FString& L_Message, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, int32 Temp_int_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SortBadWordsList(bool L_Continue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	void OpenChat();
	void BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void CloseChat();
	void AddMessage(const struct FGameChatMessage& Message);
	void StartPlayAnimationHiddenChat();
	void PlayAnimationEvent();
	void HiddenChatEvent();
	void SendMessage();
	void BndEvt__Button_MessageType_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EditableText_Message_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void SelectMessageType(enum class EMessageType MessageType);
	void BndEvt__Button_CloseChat_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void ExecuteUbergraph_UI_Chat(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FGameChatMessage& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, const struct FGameChatMessage& K2Node_CustomEvent_Message, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_ChatMessage_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_ComponentBoundEvent_Text, enum class EMessageType K2Node_CustomEvent_MessageType, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_Not_PreBool_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_WordFilter_NewParam, const struct FGameChatMessage& K2Node_MakeStruct_GameChatMessage);
};

}


