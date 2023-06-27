#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.Update Text Scale
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyResponseChoice_C::Update_Text_Scale(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "Update Text Scale");

	Params::UPlayerSurveyResponseChoice_C_Update_Text_Scale_Params Parms;

	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.GetCurrentButtonBrush
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 CurrentBrush                                                     (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPressed_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetDisabledBrush_Brush                                  ()
// struct FSlateBrush                 CallFunc_GetNormalBaseBrush_Brush                                ()
// struct FSlateBrush                 CallFunc_GetNormalHoveredBrush_Brush                             ()
// struct FSlateBrush                 CallFunc_GetNormalPressedBrush_Brush                             ()
// struct FSlateBrush                 K2Node_Select_Default                                            ()
// struct FSlateBrush                 CallFunc_GetSelectedPressedBrush_Brush                           ()
// struct FSlateBrush                 K2Node_Select_Default_1                                          ()
// struct FSlateBrush                 CallFunc_GetSelectedBaseBrush_Brush                              ()
// struct FSlateBrush                 CallFunc_GetSelectedHoveredBrush_Brush                           ()
// struct FSlateBrush                 K2Node_Select_Default_2                                          ()
// struct FSlateBrush                 K2Node_Select_Default_3                                          ()
// struct FSlateBrush                 K2Node_Select_Default_4                                          ()
// struct FSlateBrush                 K2Node_Select_Default_5                                          ()

void UPlayerSurveyResponseChoice_C::GetCurrentButtonBrush(struct FSlateBrush* CurrentBrush, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsPressed_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, const struct FSlateBrush& CallFunc_GetDisabledBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalHoveredBrush_Brush, const struct FSlateBrush& CallFunc_GetNormalPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& CallFunc_GetSelectedPressedBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& CallFunc_GetSelectedBaseBrush_Brush, const struct FSlateBrush& CallFunc_GetSelectedHoveredBrush_Brush, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_Select_Default_3, const struct FSlateBrush& K2Node_Select_Default_4, const struct FSlateBrush& K2Node_Select_Default_5)
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "GetCurrentButtonBrush");

	Params::UPlayerSurveyResponseChoice_C_GetCurrentButtonBrush_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue_1 = CallFunc_IsPressed_ReturnValue_1;
	Parms.CallFunc_IsHovered_ReturnValue_1 = CallFunc_IsHovered_ReturnValue_1;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetStyle_ReturnValue = CallFunc_GetStyle_ReturnValue;
	Parms.CallFunc_GetDisabledBrush_Brush = CallFunc_GetDisabledBrush_Brush;
	Parms.CallFunc_GetNormalBaseBrush_Brush = CallFunc_GetNormalBaseBrush_Brush;
	Parms.CallFunc_GetNormalHoveredBrush_Brush = CallFunc_GetNormalHoveredBrush_Brush;
	Parms.CallFunc_GetNormalPressedBrush_Brush = CallFunc_GetNormalPressedBrush_Brush;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSelectedPressedBrush_Brush = CallFunc_GetSelectedPressedBrush_Brush;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetSelectedBaseBrush_Brush = CallFunc_GetSelectedBaseBrush_Brush;
	Parms.CallFunc_GetSelectedHoveredBrush_Brush = CallFunc_GetSelectedHoveredBrush_Brush;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentBrush != nullptr)
		*CurrentBrush = Parms.CurrentBrush;

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateChoiceImage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPlayerSurveyResponseChoiceTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default                                            (ConstParm)
// struct FSlateBrush                 K2Node_Select_Default_1                                          (ConstParm)
// struct FSlateBrush                 K2Node_Select_Default_2                                          (ConstParm)

void UPlayerSurveyResponseChoice_C::UpdateChoiceImage(enum class EFortPlayerSurveyResponseChoiceType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "UpdateChoiceImage");

	Params::UPlayerSurveyResponseChoice_C_UpdateChoiceImage_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue_1 = CallFunc_GetSelected_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateInputActionRenderOpacity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyResponseChoice_C::UpdateInputActionRenderOpacity(bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_IsHovered_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "UpdateInputActionRenderOpacity");

	Params::UPlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateButtonColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetCurrentButtonBrush_CurrentBrush                      ()
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextStyle*            CallFunc_GetCurrentTextStyle_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColor_OutColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UPlayerSurveyResponseChoice_C::UpdateButtonColor(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue, const struct FSlateBrush& CallFunc_GetCurrentButtonBrush_CurrentBrush, bool CallFunc_GetSelected_ReturnValue, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "UpdateButtonColor");

	Params::UPlayerSurveyResponseChoice_C_UpdateButtonColor_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.CallFunc_GetCurrentButtonBrush_CurrentBrush = CallFunc_GetCurrentButtonBrush_CurrentBrush;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyle_ReturnValue = CallFunc_GetCurrentTextStyle_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetColor_OutColor = CallFunc_GetColor_OutColor;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyResponseChoice_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "BP_OnHovered");

	Params::UPlayerSurveyResponseChoice_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyResponseChoice_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "BP_OnUnhovered");

	Params::UPlayerSurveyResponseChoice_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.SetChoiceType
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortPlayerSurveyResponseChoiceTypeType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyResponseChoice_C::SetChoiceType(enum class EFortPlayerSurveyResponseChoiceType Type)
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "SetChoiceType");

	Params::UPlayerSurveyResponseChoice_C_SetChoiceType_Params Parms;

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnSurveyResetChoice
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyResponseChoice_C::OnSurveyResetChoice()
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "OnSurveyResetChoice");

	Params::UPlayerSurveyResponseChoice_C_OnSurveyResetChoice_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyResponseChoice_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "BP_OnSelected");

	Params::UPlayerSurveyResponseChoice_C_BP_OnSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyResponseChoice_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "BP_OnDeselected");

	Params::UPlayerSurveyResponseChoice_C_BP_OnDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyResponseChoice_C::OnInitialized()
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "OnInitialized");

	Params::UPlayerSurveyResponseChoice_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyResponseChoice_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "OnCurrentTextStyleChanged");

	Params::UPlayerSurveyResponseChoice_C_OnCurrentTextStyleChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.ExecuteUbergraph_PlayerSurveyResponseChoice
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPlayerSurveyResponseChoiceTypeK2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyResponseChoice_C::ExecuteUbergraph_PlayerSurveyResponseChoice(int32 EntryPoint, enum class EFortPlayerSurveyResponseChoiceType K2Node_Event_Type)
{
	static auto Func = Class->GetFunction("PlayerSurveyResponseChoice_C", "ExecuteUbergraph_PlayerSurveyResponseChoice");

	Params::UPlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Type = K2Node_Event_Type;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
