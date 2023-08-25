#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x510 - 0x470)
// WidgetBlueprintGeneratedClass HorizontalTabList_Legacy.HorizontalTabList_Legacy_C
class UHorizontalTabList_Legacy_C : public UFortTabListWidgetBase_Legacy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ImageGamepadKeyPrompt;                             // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageHorizRule;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   NextTabAction;                                     // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NextTabActionWrapper;                              // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Container;                                 // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   PreviousTabAction;                                 // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PreviousTabActionWrapper;                          // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TabButtonBox;                                      // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               TabButtonPadding;                                  // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UClass*                                ButtonStyle;                                       // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseButtonStyle;                                    // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowGamePadInputPrompt;                            // 0x4D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowRail;                                          // 0x4D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3CC4[0x1];                                     // Fixing Size After Last Property 
	int32                                        MinTabWidth;                                       // 0x4D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceTabLabelsCollapsed;                           // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ForceTabIconsCollapsed;                            // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3CC6[0x6];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            RefreshGamepad;                                    // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                DebugButtonTypeDisplay;                            // 0x4F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        DebugTabCount;                                     // 0x4F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CC7[0x4];                                     // Fixing Size After Last Property 
	double                                       PreviousTabActionPaddingRight;                     // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NextTabActionPaddingLeft;                          // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHorizontalTabList_Legacy_C* GetDefaultObj();

	void DebugCreateTabsForDesigner(class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, class UCommonButtonBase* CallFunc_Create_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateTabStyles(class UCommonButtonBase* ButtonWidget, class UIconTabButton_Legacy_C* K2Node_DynamicCast_AsIcon_Tab_Button_Legacy, bool K2Node_DynamicCast_bSuccess, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, class UIconTabButton_Legacy_C* K2Node_DynamicCast_AsIcon_Tab_Button_Legacy_1, bool K2Node_DynamicCast_bSuccess_1, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class FText CallFunc_GetEmptyText_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast);
	void SetVerticalAlignment(enum class EVerticalAlignment FillVertically, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void UpdateGamepadKeyVisibility(int32 NumVisibleTabs, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 CallFunc_GetVisibleTabCount_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void Previous_Visibility();
	void Construct();
	void CustomEvent_0(class FName TabId);
	void HandleOnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void CustomEvent_1(enum class ESlateVisibility InVisibility);
	void HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton);
	void ExecuteUbergraph_HorizontalTabList_Legacy(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable_4, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetTabCount_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class FName K2Node_CustomEvent_TabId, enum class ESlateVisibility Temp_byte_Variable_5, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, class FName K2Node_Event_TabNameID_1, class UCommonButtonBase* K2Node_Event_TabButton_1, class FName K2Node_Event_TabNameID, class UCommonButtonBase* K2Node_Event_TabButton, bool Temp_bool_Variable_2, bool CallFunc_IsValidClass_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue);
	void RefreshGamepad__DelegateSignature();
};

}


