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


// Function CloseButton.CloseButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCloseButton_C::SetText(class FText Text)
{
	static auto Func = Class->GetFunction("CloseButton_C", "SetText");

	Params::UCloseButton_C_SetText_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CloseButton.CloseButton_C.HandleSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UCloseButton_C::HandleSize(bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_Select_Default, int32 K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static auto Func = Class->GetFunction("CloseButton_C", "HandleSize");

	Params::UCloseButton_C_HandleSize_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CloseButton.CloseButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCloseButton_C::Construct()
{
	static auto Func = Class->GetFunction("CloseButton_C", "Construct");

	Params::UCloseButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CloseButton.CloseButton_C.BP_OnPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCloseButton_C::BP_OnPressed()
{
	static auto Func = Class->GetFunction("CloseButton_C", "BP_OnPressed");

	Params::UCloseButton_C_BP_OnPressed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CloseButton.CloseButton_C.BP_OnReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCloseButton_C::BP_OnReleased()
{
	static auto Func = Class->GetFunction("CloseButton_C", "BP_OnReleased");

	Params::UCloseButton_C_BP_OnReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCloseButton_C::ExecuteUbergraph_CloseButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static auto Func = Class->GetFunction("CloseButton_C", "ExecuteUbergraph_CloseButton");

	Params::UCloseButton_C_ExecuteUbergraph_CloseButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
