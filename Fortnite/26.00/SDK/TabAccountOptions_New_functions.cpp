#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabAccountOptions_New.TabAccountOptions_New_C
// (None)

class UClass* UTabAccountOptions_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabAccountOptions_New_C");

	return Clss;
}


// TabAccountOptions_New_C TabAccountOptions_New.Default__TabAccountOptions_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabAccountOptions_New_C* UTabAccountOptions_New_C::GetDefaultObj()
{
	static class UTabAccountOptions_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabAccountOptions_New_C*>(UTabAccountOptions_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabAccountOptions_New.TabAccountOptions_New_C.OnComplete_DB10A9674F5CF800B883C79A4229D87C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UTabAccountOptions_New_C::OnComplete_DB10A9674F5CF800B883C79A4229D87C(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAccountOptions_New_C", "OnComplete_DB10A9674F5CF800B883C79A4229D87C");

	Params::UTabAccountOptions_New_C_OnComplete_DB10A9674F5CF800B883C79A4229D87C_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountOptions_New.TabAccountOptions_New_C.OnComplete_1192BA0E41F4707FF3E3A4A4C72B2024
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UTabAccountOptions_New_C::OnComplete_1192BA0E41F4707FF3E3A4A4C72B2024(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAccountOptions_New_C", "OnComplete_1192BA0E41F4707FF3E3A4A4C72B2024");

	Params::UTabAccountOptions_New_C_OnComplete_1192BA0E41F4707FF3E3A4A4C72B2024_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountOptions_New.TabAccountOptions_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAccountOptions_New_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAccountOptions_New_C", "CenterOnTab");

	Params::UTabAccountOptions_New_C_CenterOnTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountOptions_New.TabAccountOptions_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccountOptions_New_C::SettingValueChanged(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAccountOptions_New_C", "SettingValueChanged");

	Params::UTabAccountOptions_New_C_SettingValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountOptions_New.TabAccountOptions_New_C.BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortSetting*                Setting                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccountOptions_New_C::BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAccountOptions_New_C", "BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature");

	Params::UTabAccountOptions_New_C_BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature_Params Parms{};

	Parms.Setting = Setting;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccountOptions_New.TabAccountOptions_New_C.ExecuteUbergraph_TabAccountOptions_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSetting*                K2Node_ComponentBoundEvent_Setting                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_Action                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccountOptions_New_C::ExecuteUbergraph_TabAccountOptions_New(int32 EntryPoint, class UUserWidget* K2Node_CustomEvent_UserWidget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_CustomEvent_Value, class UFortSetting* K2Node_ComponentBoundEvent_Setting, class FName K2Node_ComponentBoundEvent_Action, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabAccountOptions_New_C", "ExecuteUbergraph_TabAccountOptions_New");

	Params::UTabAccountOptions_New_C_ExecuteUbergraph_TabAccountOptions_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_UserWidget_1 = K2Node_CustomEvent_UserWidget_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue = CallFunc_CreateWidgetAsync_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue_1 = CallFunc_CreateWidgetAsync_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Setting = K2Node_ComponentBoundEvent_Setting;
	Parms.K2Node_ComponentBoundEvent_Action = K2Node_ComponentBoundEvent_Action;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


