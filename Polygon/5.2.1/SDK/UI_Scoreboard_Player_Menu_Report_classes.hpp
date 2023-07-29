#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2C0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Scoreboard_Player_Menu_Report.UI_Scoreboard_Player_Menu_Report_C
class UUI_Scoreboard_Player_Menu_Report_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_128;                                        // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Cheater;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Toxic;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Menu;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPG_PlayerState_Game*                  Player;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Comment;                                           // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Scoreboard_Player_Menu_Report_C");
		return Clss;
	}

	struct FEventReply OnMouseButtonDown_Background(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetFocusToScoreboard(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess);
	void OnPlayFabResponse_860D98224F067764473B2486553C01BB(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Toxic_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SendReport();
	void BndEvt__UI_Scoreboard_Player_Menu_Report_Button_Cheater_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SendReport_Success(const struct FClientReportPlayerClientResult& Result, class UObject* CustomData);
	void SendReport_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Construct();
	void ExecuteUbergraph_UI_Scoreboard_Player_Menu_Report(int32 EntryPoint, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UObject* Temp_object_Variable, const struct FPlayFabBaseModel& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, const struct FClientReportPlayerClientResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FClientReportPlayerClientRequest& K2Node_MakeStruct_ClientReportPlayerClientRequest, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, class UPlayFabClientAPI* CallFunc_ReportPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
