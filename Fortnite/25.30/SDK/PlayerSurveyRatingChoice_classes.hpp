#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1490 - 0x1480)
// WidgetBlueprintGeneratedClass PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C
class UPlayerSurveyRatingChoice_C : public UFortPlayerSurveyRatingChoiceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   InputActionWidget_Select;                          // 0x1488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyRatingChoice_C");
		return Clss;
	}

	void GetCurrentButtonBrush(struct FSlateBrush* CurrentBrush, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsPressed_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, const struct FSlateBrush& CallFunc_GetDisabledBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalHoveredBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetSelectedPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& CallFunc_GetSelectedBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetSelectedHoveredBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_Select_Default_3, const struct FSlateBrush& K2Node_Select_Default_4, const struct FSlateBrush& K2Node_Select_Default_5);
	void UpdateInputActionRenderOpacity(bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_IsHovered_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void UpdateTextStyle(class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnSurveyResetChoice();
	void OnInitialized();
	void BP_OnSelected();
	void BP_OnDeselected();
	void ExecuteUbergraph_PlayerSurveyRatingChoice(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
