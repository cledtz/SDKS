#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AutoSettings.AutoSettingWidget.UpdateSelection
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoSettingWidget::UpdateSelection(const class FString& Value)
{
	static auto Func = Class->GetFunction("AutoSettingWidget", "UpdateSelection");

	Params::UAutoSettingWidget_UpdateSelection_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.AutoSettingWidget.Save
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutoSettingWidget::Save()
{
	static auto Func = Class->GetFunction("AutoSettingWidget", "Save");

	Params::UAutoSettingWidget_Save_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.AutoSettingWidget.HasUnsavedChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoSettingWidget::HasUnsavedChange()
{
	static auto Func = Class->GetFunction("AutoSettingWidget", "HasUnsavedChange");

	Params::UAutoSettingWidget_HasUnsavedChange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.AutoSettingWidget.HasUnappliedChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoSettingWidget::HasUnappliedChange()
{
	static auto Func = Class->GetFunction("AutoSettingWidget", "HasUnappliedChange");

	Params::UAutoSettingWidget_HasUnappliedChange_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.AutoSettingWidget.Cancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutoSettingWidget::Cancel()
{
	static auto Func = Class->GetFunction("AutoSettingWidget", "Cancel");

	Params::UAutoSettingWidget_Cancel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.AutoSettingWidget.ApplySettingValue
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveIfPossible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutoSettingWidget::ApplySettingValue(const class FString& Value, bool bSaveIfPossible)
{
	static auto Func = Class->GetFunction("AutoSettingWidget", "ApplySettingValue");

	Params::UAutoSettingWidget_ApplySettingValue_Params Parms;

	Parms.Value = Value;
	Parms.bSaveIfPossible = bSaveIfPossible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.AutoSettingWidget.Apply
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAutoSettingWidget::Apply()
{
	static auto Func = Class->GetFunction("AutoSettingWidget", "Apply");

	Params::UAutoSettingWidget_Apply_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.ToggleSetting.UpdateToggleState
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToggleSetting::UpdateToggleState(bool State)
{
	static auto Func = Class->GetFunction("ToggleSetting", "UpdateToggleState");

	Params::UToggleSetting_UpdateToggleState_Params Parms;

	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.ToggleSetting.ToggleStateUpdated
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToggleSetting::ToggleStateUpdated(bool State)
{
	static auto Func = Class->GetFunction("ToggleSetting", "ToggleStateUpdated");

	Params::UToggleSetting_ToggleStateUpdated_Params Parms;

	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               IsChecked                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBoxSetting::CheckBoxStateChanged(bool IsChecked)
{
	static auto Func = Class->GetFunction("CheckBoxSetting", "CheckBoxStateChanged");

	Params::UCheckBoxSetting_CheckBoxStateChanged_Params Parms;

	Parms.IsChecked = IsChecked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SelectSetting.UpdateOptions
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FSettingOption>      InOptions                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USelectSetting::UpdateOptions(TArray<struct FSettingOption>& InOptions)
{
	static auto Func = Class->GetFunction("SelectSetting", "UpdateOptions");

	Params::USelectSetting_UpdateOptions_Params Parms;

	Parms.InOptions = InOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SelectSetting.RegenerateOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USelectSetting::RegenerateOptions()
{
	static auto Func = Class->GetFunction("SelectSetting", "RegenerateOptions");

	Params::USelectSetting_RegenerateOptions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                      SelectedItem                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESelectInfo             SelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxSetting::ComboBoxSelectionChanged(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static auto Func = Class->GetFunction("ComboBoxSetting", "ComboBoxSelectionChanged");

	Params::UComboBoxSetting_ComboBoxSelectionChanged_Params Parms;

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.ConsoleUtils.SetStringCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleUtils::SetStringCVar(class FName Name, const class FString& Value)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "SetStringCVar");

	Params::UConsoleUtils_SetStringCVar_Params Parms;

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.ConsoleUtils.SetIntCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleUtils::SetIntCVar(class FName Name, int32 Value)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "SetIntCVar");

	Params::UConsoleUtils_SetIntCVar_Params Parms;

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.ConsoleUtils.SetFloatCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleUtils::SetFloatCVar(class FName Name, float Value)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "SetFloatCVar");

	Params::UConsoleUtils_SetFloatCVar_Params Parms;

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.ConsoleUtils.SetBoolCVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleUtils::SetBoolCVar(class FName Name, bool Value)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "SetBoolCVar");

	Params::UConsoleUtils_SetBoolCVar_Params Parms;

	Parms.Name = Name;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.ConsoleUtils.IsCVarRegistered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConsoleUtils::IsCVarRegistered(class FName Name)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "IsCVarRegistered");

	Params::UConsoleUtils_IsCVarRegistered_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.ConsoleUtils.GetStringCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UConsoleUtils::GetStringCVar(class FName Name)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "GetStringCVar");

	Params::UConsoleUtils_GetStringCVar_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.ConsoleUtils.GetIntCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UConsoleUtils::GetIntCVar(class FName Name)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "GetIntCVar");

	Params::UConsoleUtils_GetIntCVar_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.ConsoleUtils.GetFloatCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UConsoleUtils::GetFloatCVar(class FName Name)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "GetFloatCVar");

	Params::UConsoleUtils_GetFloatCVar_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.ConsoleUtils.GetBoolCVar
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConsoleUtils::GetBoolCVar(class FName Name)
{
	static auto Func = Class->GetFunction("ConsoleUtils", "GetBoolCVar");

	Params::UConsoleUtils_GetBoolCVar_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCVarChangeListenerManager::AddStringCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static auto Func = Class->GetFunction("CVarChangeListenerManager", "AddStringCVarCallbackStatic");

	Params::UCVarChangeListenerManager_AddStringCVarCallbackStatic_Params Parms;

	Parms.Name = Name;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCVarChangeListenerManager::AddIntCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static auto Func = Class->GetFunction("CVarChangeListenerManager", "AddIntCVarCallbackStatic");

	Params::UCVarChangeListenerManager_AddIntCVarCallbackStatic_Params Parms;

	Parms.Name = Name;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCVarChangeListenerManager::AddFloatCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static auto Func = Class->GetFunction("CVarChangeListenerManager", "AddFloatCVarCallbackStatic");

	Params::UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Params Parms;

	Parms.Name = Name;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCVarChangeListenerManager::AddBoolCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static auto Func = Class->GetFunction("CVarChangeListenerManager", "AddBoolCVarCallbackStatic");

	Params::UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Params Parms;

	Parms.Name = Name;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SliderSetting.UpdateSliderValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USliderSetting::UpdateSliderValue(float NormalizedValue, float RawValue)
{
	static auto Func = Class->GetFunction("SliderSetting", "UpdateSliderValue");

	Params::USliderSetting_UpdateSliderValue_Params Parms;

	Parms.NormalizedValue = NormalizedValue;
	Parms.RawValue = RawValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SliderSetting.SliderValueUpdated
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USliderSetting::SliderValueUpdated(float NormalizedValue)
{
	static auto Func = Class->GetFunction("SliderSetting", "SliderValueUpdated");

	Params::USliderSetting_SliderValueUpdated_Params Parms;

	Parms.NormalizedValue = NormalizedValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SliderSetting.ShouldSaveCurrentValue
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USliderSetting::ShouldSaveCurrentValue()
{
	static auto Func = Class->GetFunction("SliderSetting", "ShouldSaveCurrentValue");

	Params::USliderSetting_ShouldSaveCurrentValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SliderSetting.RawValueToNormalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              RawValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USliderSetting::RawValueToNormalized(float RawValue)
{
	static auto Func = Class->GetFunction("SliderSetting", "RawValueToNormalized");

	Params::USliderSetting_RawValueToNormalized_Params Parms;

	Parms.RawValue = RawValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SliderSetting.OnSliderValueUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USliderSetting::OnSliderValueUpdated(float NormalizedValue, float RawValue)
{
	static auto Func = Class->GetFunction("SliderSetting", "OnSliderValueUpdated");

	Params::USliderSetting_OnSliderValueUpdated_Params Parms;

	Parms.NormalizedValue = NormalizedValue;
	Parms.RawValue = RawValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AutoSettings.SliderSetting.NormalizedValueToRaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USliderSetting::NormalizedValueToRaw(float NormalizedValue)
{
	static auto Func = Class->GetFunction("SliderSetting", "NormalizedValueToRaw");

	Params::USliderSetting_NormalizedValueToRaw_Params Parms;

	Parms.NormalizedValue = NormalizedValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SliderSetting.ClampRawValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              RawValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USliderSetting::ClampRawValue(float RawValue)
{
	static auto Func = Class->GetFunction("SliderSetting", "ClampRawValue");

	Params::USliderSetting_ClampRawValue_Params Parms;

	Parms.RawValue = RawValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.NativeSliderSetting.SliderValueChanged
// (Final, Native, Private)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNativeSliderSetting::SliderValueChanged(float NewValue)
{
	static auto Func = Class->GetFunction("NativeSliderSetting", "SliderValueChanged");

	Params::UNativeSliderSetting_SliderValueChanged_Params Parms;

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
// (Final, Native, Private)
// Parameters:

void UNativeSliderSetting::SliderMouseCaptureEnd()
{
	static auto Func = Class->GetFunction("NativeSliderSetting", "SliderMouseCaptureEnd");

	Params::UNativeSliderSetting_SliderMouseCaptureEnd_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
// (Final, Native, Private)
// Parameters:

void UNativeSliderSetting::SliderMouseCaptureBegin()
{
	static auto Func = Class->GetFunction("NativeSliderSetting", "SliderMouseCaptureBegin");

	Params::UNativeSliderSetting_SliderMouseCaptureBegin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioButton.UpdateSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioButton::UpdateSelected(bool InSelected)
{
	static auto Func = Class->GetFunction("RadioButton", "UpdateSelected");

	Params::URadioButton_UpdateSelected_Params Parms;

	Parms.InSelected = InSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AutoSettings.RadioButton.UpdateLabel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        InLabel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void URadioButton::UpdateLabel(class FText& InLabel)
{
	static auto Func = Class->GetFunction("RadioButton", "UpdateLabel");

	Params::URadioButton_UpdateLabel_Params Parms;

	Parms.InLabel = InLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AutoSettings.RadioButton.TriggerSelection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void URadioButton::TriggerSelection()
{
	static auto Func = Class->GetFunction("RadioButton", "TriggerSelection");

	Params::URadioButton_TriggerSelection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioButton.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioButton::SetValue(const class FString& InValue)
{
	static auto Func = Class->GetFunction("RadioButton", "SetValue");

	Params::URadioButton_SetValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioButton.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioButton::SetSelected(bool InSelected)
{
	static auto Func = Class->GetFunction("RadioButton", "SetSelected");

	Params::URadioButton_SetSelected_Params Parms;

	Parms.InSelected = InSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioButton.SetLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InLabel                                                          (Parm, NativeAccessSpecifierPublic)

void URadioButton::SetLabel(class FText InLabel)
{
	static auto Func = Class->GetFunction("RadioButton", "SetLabel");

	Params::URadioButton_SetLabel_Params Parms;

	Parms.InLabel = InLabel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioButton.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URadioButton::GetValue()
{
	static auto Func = Class->GetFunction("RadioButton", "GetValue");

	Params::URadioButton_GetValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioButton.GetSelected
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URadioButton::GetSelected()
{
	static auto Func = Class->GetFunction("RadioButton", "GetSelected");

	Params::URadioButton_GetSelected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioButton.GetLabel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText URadioButton::GetLabel()
{
	static auto Func = Class->GetFunction("RadioButton", "GetLabel");

	Params::URadioButton_GetLabel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioSelect.SetOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSettingOption>      InOptions                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void URadioSelect::SetOptions(const TArray<struct FSettingOption>& InOptions)
{
	static auto Func = Class->GetFunction("RadioSelect", "SetOptions");

	Params::URadioSelect_SetOptions_Params Parms;

	Parms.InOptions = InOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioSelect.Select
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioSelect::Select(const class FString& Value)
{
	static auto Func = Class->GetFunction("RadioSelect", "Select");

	Params::URadioSelect_Select_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioSelect.OnButtonCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class URadioButton*                Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  NewSlot                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioSelect::OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot)
{
	static auto Func = Class->GetFunction("RadioSelect", "OnButtonCreated");

	Params::URadioSelect_OnButtonCreated_Params Parms;

	Parms.Button = Button;
	Parms.NewSlot = NewSlot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioSelect.GetRadioButtonWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class URadioButton*>        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class URadioButton*> URadioSelect::GetRadioButtonWidgets()
{
	static auto Func = Class->GetFunction("RadioSelect", "GetRadioButtonWidgets");

	Params::URadioSelect_GetRadioButtonWidgets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioSelect.GetOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSettingOption>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSettingOption> URadioSelect::GetOptions()
{
	static auto Func = Class->GetFunction("RadioSelect", "GetOptions");

	Params::URadioSelect_GetOptions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.RadioSelect.ButtonSelected
// (Final, Native, Private)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioSelect::ButtonSelected(const class FString& Value)
{
	static auto Func = Class->GetFunction("RadioSelect", "ButtonSelected");

	Params::URadioSelect_ButtonSelected_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.RadioSelectSetting.RadioSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioSelectSetting::RadioSelectionChanged(const class FString& Value)
{
	static auto Func = Class->GetFunction("RadioSelectSetting", "RadioSelectionChanged");

	Params::URadioSelectSetting_RadioSelectionChanged_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingOptionFactory.ConstructOptions
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FSettingOption>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSettingOption> USettingOptionFactory::ConstructOptions()
{
	static auto Func = Class->GetFunction("SettingOptionFactory", "ConstructOptions");

	Params::USettingOptionFactory_ConstructOptions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingValueMask.RecombineValues
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                      SettingValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ConsoleValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USettingValueMask::RecombineValues(const class FString& SettingValue, const class FString& ConsoleValue)
{
	static auto Func = Class->GetFunction("SettingValueMask", "RecombineValues");

	Params::USettingValueMask_RecombineValues_Params Parms;

	Parms.SettingValue = SettingValue;
	Parms.ConsoleValue = ConsoleValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingValueMask.MaskValue
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                      ConsoleValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USettingValueMask::MaskValue(const class FString& ConsoleValue)
{
	static auto Func = Class->GetFunction("SettingValueMask", "MaskValue");

	Params::USettingValueMask_MaskValue_Params Parms;

	Parms.ConsoleValue = ConsoleValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingContainerUtils.SaveChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingContainerUtils::SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto Func = Class->GetFunction("SettingContainerUtils", "SaveChildSettings");

	Params::USettingContainerUtils_SaveChildSettings_Params Parms;

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingContainerUtils.GetChildSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UAutoSettingWidget*>  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UAutoSettingWidget*> USettingContainerUtils::GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto Func = Class->GetFunction("SettingContainerUtils", "GetChildSettings");

	Params::USettingContainerUtils_GetChildSettings_Params Parms;

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USettingContainerUtils::DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto Func = Class->GetFunction("SettingContainerUtils", "DoesAnyChildSettingHaveUnsavedChange");

	Params::USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Params Parms;

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USettingContainerUtils::DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto Func = Class->GetFunction("SettingContainerUtils", "DoesAnyChildSettingHaveUnappliedChange");

	Params::USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Params Parms;

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingContainerUtils.CancelChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingContainerUtils::CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto Func = Class->GetFunction("SettingContainerUtils", "CancelChildSettings");

	Params::USettingContainerUtils_CancelChildSettings_Params Parms;

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingContainerUtils.ApplyChildSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     Parent                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingContainerUtils::ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent)
{
	static auto Func = Class->GetFunction("SettingContainerUtils", "ApplyChildSettings");

	Params::USettingContainerUtils_ApplyChildSettings_Params Parms;

	Parms.UserWidget = UserWidget;
	Parms.Parent = Parent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.SaveSettingStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAutoSettingData            SettingData                                                      (Parm, NativeAccessSpecifierPublic)

void USettingsManager::SaveSettingStatic(const struct FAutoSettingData& SettingData)
{
	static auto Func = Class->GetFunction("SettingsManager", "SaveSettingStatic");

	Params::USettingsManager_SaveSettingStatic_Params Parms;

	Parms.SettingData = SettingData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DefaultValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterStringCVarSettingWithCallback(class FName Name, const class FString& DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static auto Func = Class->GetFunction("SettingsManager", "RegisterStringCVarSettingWithCallback");

	Params::USettingsManager_RegisterStringCVarSettingWithCallback_Params Parms;

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.RegisterStringCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DefaultValue                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterStringCVarSetting(class FName Name, const class FString& DefaultValue, const class FString& Help)
{
	static auto Func = Class->GetFunction("SettingsManager", "RegisterStringCVarSetting");

	Params::USettingsManager_RegisterStringCVarSetting_Params Parms;

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterIntCVarSettingWithCallback(class FName Name, int32 DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static auto Func = Class->GetFunction("SettingsManager", "RegisterIntCVarSettingWithCallback");

	Params::USettingsManager_RegisterIntCVarSettingWithCallback_Params Parms;

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.RegisterIntCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterIntCVarSetting(class FName Name, int32 DefaultValue, const class FString& Help)
{
	static auto Func = Class->GetFunction("SettingsManager", "RegisterIntCVarSetting");

	Params::USettingsManager_RegisterIntCVarSetting_Params Parms;

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterFloatCVarSettingWithCallback(class FName Name, float DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static auto Func = Class->GetFunction("SettingsManager", "RegisterFloatCVarSettingWithCallback");

	Params::USettingsManager_RegisterFloatCVarSettingWithCallback_Params Parms;

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.RegisterFloatCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterFloatCVarSetting(class FName Name, float DefaultValue, const class FString& Help)
{
	static auto Func = Class->GetFunction("SettingsManager", "RegisterFloatCVarSetting");

	Params::USettingsManager_RegisterFloatCVarSetting_Params Parms;

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ChangedCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallbackImmediately                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterBoolCVarSettingWithCallback(class FName Name, bool DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately)
{
	static auto Func = Class->GetFunction("SettingsManager", "RegisterBoolCVarSettingWithCallback");

	Params::USettingsManager_RegisterBoolCVarSettingWithCallback_Params Parms;

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;
	Parms.ChangedCallback = ChangedCallback;
	Parms.CallbackImmediately = CallbackImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.RegisterBoolCVarSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Help                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::RegisterBoolCVarSetting(class FName Name, bool DefaultValue, const class FString& Help)
{
	static auto Func = Class->GetFunction("SettingsManager", "RegisterBoolCVarSetting");

	Params::USettingsManager_RegisterBoolCVarSetting_Params Parms;

	Parms.Name = Name;
	Parms.DefaultValue = DefaultValue;
	Parms.Help = Help;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.GetValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreferConfigValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USettingsManager::GetValue(class FName Key, bool bPreferConfigValue)
{
	static auto Func = Class->GetFunction("SettingsManager", "GetValue");

	Params::USettingsManager_GetValue_Params Parms;

	Parms.Key = Key;
	Parms.bPreferConfigValue = bPreferConfigValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SettingsManager.AutoDetectSettingsStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              WorkScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CPUMultiplier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GPUMultiplier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USettingsManager::AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier)
{
	static auto Func = Class->GetFunction("SettingsManager", "AutoDetectSettingsStatic");

	Params::USettingsManager_AutoDetectSettingsStatic_Params Parms;

	Parms.WorkScale = WorkScale;
	Parms.CPUMultiplier = CPUMultiplier;
	Parms.GPUMultiplier = GPUMultiplier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.SettingsManager.ApplySettingStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAutoSettingData            SettingData                                                      (Parm, NativeAccessSpecifierPublic)

void USettingsManager::ApplySettingStatic(const struct FAutoSettingData& SettingData)
{
	static auto Func = Class->GetFunction("SettingsManager", "ApplySettingStatic");

	Params::USettingsManager_ApplySettingStatic_Params Parms;

	Parms.SettingData = SettingData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.Spinner.SelectValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinner::SelectValue(const class FString& Value)
{
	static auto Func = Class->GetFunction("Spinner", "SelectValue");

	Params::USpinner_SelectValue_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.Spinner.SelectIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinner::SelectIndex(int32 Index)
{
	static auto Func = Class->GetFunction("Spinner", "SelectIndex");

	Params::USpinner_SelectIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.Spinner.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinner::Previous()
{
	static auto Func = Class->GetFunction("Spinner", "Previous");

	Params::USpinner_Previous_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.Spinner.OnSelectionChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FSettingOption              SelectedOption                                                   (Parm, NativeAccessSpecifierPublic)

void USpinner::OnSelectionChanged(const struct FSettingOption& SelectedOption)
{
	static auto Func = Class->GetFunction("Spinner", "OnSelectionChanged");

	Params::USpinner_OnSelectionChanged_Params Parms;

	Parms.SelectedOption = SelectedOption;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.Spinner.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinner::Next()
{
	static auto Func = Class->GetFunction("Spinner", "Next");

	Params::USpinner_Next_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettings.Spinner.HasValidPrevious
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpinner::HasValidPrevious()
{
	static auto Func = Class->GetFunction("Spinner", "HasValidPrevious");

	Params::USpinner_HasValidPrevious_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.Spinner.HasValidNext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpinner::HasValidNext()
{
	static auto Func = Class->GetFunction("Spinner", "HasValidNext");

	Params::USpinner_HasValidNext_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.Spinner.GetCurrentOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSettingOption              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSettingOption USpinner::GetCurrentOption()
{
	static auto Func = Class->GetFunction("Spinner", "GetCurrentOption");

	Params::USpinner_GetCurrentOption_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.Spinner.GetCurrentIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpinner::GetCurrentIndex()
{
	static auto Func = Class->GetFunction("Spinner", "GetCurrentIndex");

	Params::USpinner_GetCurrentIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged
// (Final, Native, Private)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinnerSetting::SpinnerSelectionChanged(const class FString& Value)
{
	static auto Func = Class->GetFunction("SpinnerSetting", "SpinnerSelectionChanged");

	Params::USpinnerSetting_SpinnerSelectionChanged_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
