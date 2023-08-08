#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x321 (0x17A1 - 0x1480)
// WidgetBlueprintGeneratedClass PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C
class UPlayerSurveyResponseChoice_C : public UFortPlayerSurveyResponseChoiceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_InputActionCircle;                          // 0x1488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Checkbox;                                    // 0x1490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InputActionWidget_Select;                          // 0x1498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           Brush_RadioUnchecked;                              // 0x14A0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                           Brush_RadioChecked;                                // 0x1560(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                           Brush_CheckboxUnchecked;                           // 0x1620(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                           Brush_CheckboxChecked;                             // 0x16E0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	enum class EFortPlayerSurveyResponseChoiceType ChoiceType;                                        // 0x17A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyResponseChoice_C");
		return Clss;
	}

	void Update_Text_Scale(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void GetCurrentButtonBrush(struct FSlateBrush* CurrentBrush, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsPressed_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, const struct FSlateBrush& CallFunc_GetDisabledBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalHoveredBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetSelectedPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& CallFunc_GetSelectedBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetSelectedHoveredBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_Select_Default_3, const struct FSlateBrush& K2Node_Select_Default_4, const struct FSlateBrush& K2Node_Select_Default_5);
	void UpdateChoiceImage(enum class EFortPlayerSurveyResponseChoiceType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2);
	void UpdateInputActionRenderOpacity(bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_IsHovered_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1);
	void UpdateButtonColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue, const struct FSlateBrush& CallFunc_GetCurrentButtonBrush_CurrentBrush, bool CallFunc_GetSelected_ReturnValue, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void SetChoiceType(enum class EFortPlayerSurveyResponseChoiceType Type);
	void OnSurveyResetChoice();
	void BP_OnSelected();
	void BP_OnDeselected();
	void OnInitialized();
	void OnCurrentTextStyleChanged();
	void ExecuteUbergraph_PlayerSurveyResponseChoice(int32 EntryPoint, enum class EFortPlayerSurveyResponseChoiceType K2Node_Event_Type);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
