#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x1630 - 0x14C0)
// WidgetBlueprintGeneratedClass IconTabButton_Legacy.IconTabButton_Legacy_C
class UIconTabButton_Legacy_C : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                  BangWrapper;                                       // 0x14C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x14D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ContentHB;                                         // 0x14D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSideImage;                                     // 0x14E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxShell;                                      // 0x14E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x14F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	uint8                                        Pad_9A86[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           IconBrush;                                         // 0x1510(0xC0)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         UseText;                                           // 0x15D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A87[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          SelectedIconTint;                                  // 0x15D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DeselectedIconTint;                                // 0x15E4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HoveredIconTint;                                   // 0x15F4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBangEnabled;                                      // 0x1604(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeIconColorWhenSelected;                       // 0x1605(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A88[0x2];                                     // Fixing Size After Last Property..
	struct FSlateColor                           SelectedIconColor;                                 // 0x1608(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           UnSelectedIconColor;                               // 0x161C(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IconTabButton_Legacy_C");
		return Clss;
	}

	void Play_Hover_Sound(bool CallFunc_GetSelected_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor, bool Temp_bool_Variable, bool CallFunc_GetSelected_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void Update_Bang_State(bool bBangEnabled, int32 Count, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void ShowText();
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void BP_OnSelected();
	void BP_OnDeselected();
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnEnabled();
	void BP_OnDisabled();
	void OnCurrentTextStyleChanged();
	void ExecuteUbergraph_IconTabButton_Legacy(int32 EntryPoint, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue, bool K2Node_Event_IsDesignTime, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue_1, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
