#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2D0 - 0x280)
// WidgetBlueprintGeneratedClass UI_HomeScreen_Menu_News.UI_HomeScreen_Menu_News_C
class UUI_HomeScreen_Menu_News_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NextPage;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_ButtonsSwitch;                       // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_News;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UClass*>                        NewsList;                                          // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          Timer_ToNextPage;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_HomeScreen_Menu_News_C* GetDefaultObj();

	void SetPage(int32 Index, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* L_ActiveButton, int32 L_Index, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1, bool K2Node_DynamicCast_bSuccess_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ToNextPage_Event();
	void StartNewPage();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_UI_HomeScreen_Menu_News(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_GetChildAt_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUI_HomeScreen_Menu_News_ButtonSwitch_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_News_Button_Switch_2, bool K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnHovered__DelegateSignature(bool IsHover);
};

}


