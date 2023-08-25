#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VoiceChannelSettings.VoiceChannelSettings_C
// (None)

class UClass* UVoiceChannelSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceChannelSettings_C");

	return Clss;
}


// VoiceChannelSettings_C VoiceChannelSettings.Default__VoiceChannelSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVoiceChannelSettings_C* UVoiceChannelSettings_C::GetDefaultObj()
{
	static class UVoiceChannelSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceChannelSettings_C*>(UVoiceChannelSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VoiceChannelSettings.VoiceChannelSettings_C.OnComplete_CAAD0AF4467900CF5BC6B8B8CA0C330F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelSettings_C::OnComplete_CAAD0AF4467900CF5BC6B8B8CA0C330F(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelSettings_C", "OnComplete_CAAD0AF4467900CF5BC6B8B8CA0C330F");

	Params::UVoiceChannelSettings_C_OnComplete_CAAD0AF4467900CF5BC6B8B8CA0C330F_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelSettings_C::BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelSettings_C", "BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UVoiceChannelSettings_C_BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelSettings_C::BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelSettings_C", "BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UVoiceChannelSettings_C_BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelSettings_C::BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelSettings_C", "BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UVoiceChannelSettings_C_BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelSettings.VoiceChannelSettings_C.ShowVoiceSettingsButton
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelSettings_C::ShowVoiceSettingsButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelSettings_C", "ShowVoiceSettingsButton");

	Params::UVoiceChannelSettings_C_ShowVoiceSettingsButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__VoiceChannelSettings_Button_VoiceSettings_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelSettings_C::BndEvt__VoiceChannelSettings_Button_VoiceSettings_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelSettings_C", "BndEvt__VoiceChannelSettings_Button_VoiceSettings_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UVoiceChannelSettings_C_BndEvt__VoiceChannelSettings_Button_VoiceSettings_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelSettings.VoiceChannelSettings_C.ExecuteUbergraph_VoiceChannelSettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenu_C*              K2Node_DynamicCast_AsOptions_Menu                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestTab_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelSettings_C::ExecuteUbergraph_VoiceChannelSettings(int32 EntryPoint, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* Temp_object_Variable, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_3, class UOptionsMenu_C* K2Node_DynamicCast_AsOptions_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RequestTab_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelSettings_C", "ExecuteUbergraph_VoiceChannelSettings");

	Params::UVoiceChannelSettings_C_ExecuteUbergraph_VoiceChannelSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_DynamicCast_AsOptions_Menu = K2Node_DynamicCast_AsOptions_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RequestTab_ReturnValue = CallFunc_RequestTab_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue = CallFunc_CreateWidgetAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


