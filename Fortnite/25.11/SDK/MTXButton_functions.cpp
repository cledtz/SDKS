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


// Function MTXButton.MTXButton_C.GetHoverAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UWidgetAnimation* UMTXButton_C::GetHoverAnimation(bool Temp_bool_Variable, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidgetAnimation* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MTXButton_C", "GetHoverAnimation");

	Params::UMTXButton_C_GetHoverAnimation_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MTXButton.MTXButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMTXButton_C::Construct()
{
	static auto Func = Class->GetFunction("MTXButton_C", "Construct");

	Params::UMTXButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMTXButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("MTXButton_C", "BP_OnHovered");

	Params::UMTXButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMTXButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("MTXButton_C", "BP_OnUnhovered");

	Params::UMTXButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.BP_OnPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMTXButton_C::BP_OnPressed()
{
	static auto Func = Class->GetFunction("MTXButton_C", "BP_OnPressed");

	Params::UMTXButton_C_BP_OnPressed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.BP_OnReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMTXButton_C::BP_OnReleased()
{
	static auto Func = Class->GetFunction("MTXButton_C", "BP_OnReleased");

	Params::UMTXButton_C_BP_OnReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_SelectMaterialInstance_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_GetHoverAnimation_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_GetHoverAnimation_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMTXButton_C::ExecuteUbergraph_MTXButton(int32 EntryPoint, double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, bool CallFunc_IsMobileGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double K2Node_Select_Default, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue, bool Temp_bool_Variable_1, class UWidgetAnimation* CallFunc_GetHoverAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, double K2Node_Select_Default_1, class UWidgetAnimation* CallFunc_GetHoverAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue_1, bool CallFunc_IsUsingTouch_ReturnValue_2, bool CallFunc_IsUsingTouch_ReturnValue_3, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static auto Func = Class->GetFunction("MTXButton_C", "ExecuteUbergraph_MTXButton");

	Params::UMTXButton_C_ExecuteUbergraph_MTXButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue_1 = CallFunc_IsMobileGame_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectMaterialInstance_ReturnValue = CallFunc_SelectMaterialInstance_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetHoverAnimation_ReturnValue = CallFunc_GetHoverAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetHoverAnimation_ReturnValue_1 = CallFunc_GetHoverAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.CallFunc_IsUsingTouch_ReturnValue_1 = CallFunc_IsUsingTouch_ReturnValue_1;
	Parms.CallFunc_IsUsingTouch_ReturnValue_2 = CallFunc_IsUsingTouch_ReturnValue_2;
	Parms.CallFunc_IsUsingTouch_ReturnValue_3 = CallFunc_IsUsingTouch_ReturnValue_3;
	Parms.CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast = CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
