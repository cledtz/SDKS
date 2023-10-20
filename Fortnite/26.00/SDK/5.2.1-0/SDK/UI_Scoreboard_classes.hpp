#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2D8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Scoreboard.UI_Scoreboard_C
class UUI_Scoreboard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_AlphaBackground;                            // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_BravoBackground;                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LinesBackground;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Main;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_AlphaScore;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_BravoScore;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_AlphaTeam;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_BravoTeam;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_UpdatePlayersTab;                            // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUI_Scoreboard_Player_Menu_C*          UI_PlayerMenu;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Scoreboard_C* GetDefaultObj();

	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SortPlayers(class UUI_Scoreboard_Player_C* Player, class UGridPanel* Tab, class UUI_Scoreboard_Player_C* L_OtherPlayer, class UUI_Scoreboard_Player_C* L_Player, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UUI_Scoreboard_Player_C* K2Node_DynamicCast_AsUI_Scoreboard_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue, float CallFunc_GetScore_ReturnValue, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue_1, float CallFunc_GetScore_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue_2, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void AddPlayersToTab(enum class ETeam Team, const TArray<class UPG_PlayerState_Game*>& L_Players, int32 L_AddToIndex, class UPG_PlayerState_Game* L_Player, enum class ETeam L_Team, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ETeam Temp_byte_Variable, bool CallFunc_BooleanOR_ReturnValue, class UPanelWidget* Temp_object_Variable, class UPanelWidget* Temp_object_Variable_1, class UPanelWidget* Temp_object_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UPanelWidget* Temp_object_Variable_3, enum class ETeam Temp_byte_Variable_1, TArray<class UPG_PlayerState_Game*>& Temp_object_Variable_4, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, TArray<class UPG_PlayerState_Game*>& Temp_object_Variable_5, enum class ETeam Temp_byte_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class UPanelWidget* K2Node_Select_Default, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Scoreboard_Player_C* CallFunc_Create_ReturnValue, class UPG_PlayerState_Game* CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetScore_ReturnValue, class UPG_PlayerState_Game* CallFunc_Array_Get_Item_1, float CallFunc_GetScore_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, TArray<class UPG_PlayerState_Game*>& K2Node_Select_Default_1, class UPanelWidget* K2Node_Select_Default_2, class UPG_PlayerState_Game* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void StartUpdatePlayersTab();
	void UpdatePlayeysTabEvent();
	void OnChangeTotalScore_Event();
	void OnVisibilityChanged_Event(enum class ESlateVisibility InVisibility);
	void OnSetTeam_Event();
	void Construct();
	void ExecuteUbergraph_UI_Scoreboard(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ETeam Temp_byte_Variable, class UBorder* Temp_object_Variable, class UBorder* Temp_object_Variable_1, enum class ETeam Temp_byte_Variable_1, class UBorder* Temp_object_Variable_2, class UBorder* Temp_object_Variable_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_1, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_2, int32 CallFunc_GetScoreBravoTeam_ReturnValue, int32 CallFunc_GetScoreAlphaTeam_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UBorder* K2Node_Select_Default, class UBorder* K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


