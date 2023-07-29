#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x8F0 - 0x8B0)
// BlueprintGeneratedClass BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C
class UBP_PG_PlayerController_Game_C : public UPG_PlayerController_Game
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EventManagerComponent_C*           BP_EventManagerComponent;                          // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FOVManagerComponent_Game_C*        BP_FOVManagerComponent_Game;                       // 0x8C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUI_GeneralGameScreen_C*               UI_GeneralGameScreen;                              // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_InteractionTime_C*                 UI_InteractionTime;                                // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_CameraTransitions_DarkenScreen_C*  UI_DarkenScreen;                                   // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_CaptureProcess_C*                  UI_CaptureProcess;                                 // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_KillCam_C*                         UI_KillerInfo;                                     // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PG_PlayerController_Game_C");
		return Clss;
	}

	void Reset(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void ToggleVisibilityInterface(bool ForceVisible, bool L_Visible, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, enum class ESlateVisibility Temp_byte_Variable_8, TArray<class UUI_TeamBaseMarker_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_TeamBaseMarker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_9, TArray<class UUI_ControlPointMarker_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUI_ControlPointMarker_C* CallFunc_Array_Get_Item_1, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_4, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUI_PlayerMarker_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UUI_PlayerMarker_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void UserConstructionScript();
	void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ChatAll_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ChatTeam_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_HideInterface_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_N_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void SetPlayerState();
	void OnAddedGameScore_Event(TArray<struct FScoreInfoBlueprint>& ScoreInfos);
	void OpenScoreboard();
	void CloseScoreboard();
	void ReceiveBeginPlay();
	void DisplayMessageToChatEvent(const struct FGameChatMessage& Message);
	void StartInteractionEvent(float InteractionTime);
	void StopInteractionEvent();
	void OnPossessedPawnChanged_Event(class UPawn* OldPawn, class UPawn* NewPawn);
	void OnClientReset_Event();
	void NotifyPossibilityUnlockModule(class UItem_Gun_General* Gun);
	void OnIsAlive_Event();
	void OnSetCharacterHiddenInGame_Event();
	void ExecuteUbergraph_BP_PG_PlayerController_Game(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_3, class UUI_GeneralGameScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FScoreInfoBlueprint>& K2Node_CustomEvent_ScoreInfos, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, const struct FScoreInfoBlueprint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FKey& K2Node_InputActionEvent_Key_4, bool CallFunc_IsValid_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UUI_InteractionTime_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameChatMessage& K2Node_Event_message, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Event_interactionTime, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn, class UItem_Gun_General* K2Node_Event_gun, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_IsValid_ReturnValue_6, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character_1, bool K2Node_DynamicCast_bSuccess_2, int32 K2Node_Select_Default, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPawn* CallFunc_K2_GetPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
