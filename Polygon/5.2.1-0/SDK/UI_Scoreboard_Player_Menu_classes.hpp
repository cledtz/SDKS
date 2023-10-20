#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Scoreboard_Player_Menu.UI_Scoreboard_Player_Menu_C
class UUI_Scoreboard_Player_Menu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_128;                                        // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Report;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_VoteKick;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Menu;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPG_PlayerState_Game*                  Player;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Scoreboard_Player_Menu_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown_Background(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetFocusToScoreboard(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BndEvt__UI_Scoreboard_Player_Menu_Button_VoteKick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Scoreboard_Player_Menu_Button_Report_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Scoreboard_Player_Menu(int32 EntryPoint, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPG_PlayerController_Game* K2Node_DynamicCast_AsPG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, double CallFunc_GetRealTimeSeconds_ReturnValue, class UPG_PlayerController_Game* K2Node_DynamicCast_AsPG_Player_Controller_Game_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UUI_Scoreboard_Player_Menu_Report_C* CallFunc_Create_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


