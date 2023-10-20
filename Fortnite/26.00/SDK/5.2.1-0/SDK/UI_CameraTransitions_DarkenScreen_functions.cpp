#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C
// (None)

class UClass* UUI_CameraTransitions_DarkenScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CameraTransitions_DarkenScreen_C");

	return Clss;
}


// UI_CameraTransitions_DarkenScreen_C UI_CameraTransitions_DarkenScreen.Default__UI_CameraTransitions_DarkenScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CameraTransitions_DarkenScreen_C* UUI_CameraTransitions_DarkenScreen_C::GetDefaultObj()
{
	static class UUI_CameraTransitions_DarkenScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CameraTransitions_DarkenScreen_C*>(UUI_CameraTransitions_DarkenScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CameraTransitions_DarkenScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CameraTransitions_DarkenScreen_C", "Construct");

	Params::UUI_CameraTransitions_DarkenScreen_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.SmoothRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CameraTransitions_DarkenScreen_C::SmoothRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CameraTransitions_DarkenScreen_C", "SmoothRemove");

	Params::UUI_CameraTransitions_DarkenScreen_C_SmoothRemove_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CameraTransitions_DarkenScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CameraTransitions_DarkenScreen_C", "Tick");

	Params::UUI_CameraTransitions_DarkenScreen_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.SmoothStartEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CameraTransitions_DarkenScreen_C::SmoothStartEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CameraTransitions_DarkenScreen_C", "SmoothStartEvent");

	Params::UUI_CameraTransitions_DarkenScreen_C_SmoothStartEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.ExecuteUbergraph_UI_CameraTransitions_DarkenScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Constant_Current_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CameraTransitions_DarkenScreen_C::ExecuteUbergraph_UI_CameraTransitions_DarkenScreen(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetRenderOpacity_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable_2, double CallFunc_FInterpTo_Constant_Current_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CameraTransitions_DarkenScreen_C", "ExecuteUbergraph_UI_CameraTransitions_DarkenScreen");

	Params::UUI_CameraTransitions_DarkenScreen_C_ExecuteUbergraph_UI_CameraTransitions_DarkenScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_FInterpTo_Constant_Current_ImplicitCast = CallFunc_FInterpTo_Constant_Current_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CameraTransitions_DarkenScreen.UI_CameraTransitions_DarkenScreen_C.OnDark__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CameraTransitions_DarkenScreen_C::OnDark__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CameraTransitions_DarkenScreen_C", "OnDark__DelegateSignature");

	Params::UUI_CameraTransitions_DarkenScreen_C_OnDark__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


