#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function AutoSettings.AutoSettingWidget.UpdateSelection
struct UAutoSettingWidget_UpdateSelection_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.AutoSettingWidget.Save
struct UAutoSettingWidget_Save_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.AutoSettingWidget.HasUnsavedChange
struct UAutoSettingWidget_HasUnsavedChange_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.AutoSettingWidget.HasUnappliedChange
struct UAutoSettingWidget_HasUnappliedChange_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.AutoSettingWidget.Cancel
struct UAutoSettingWidget_Cancel_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.AutoSettingWidget.ApplySettingValue
struct UAutoSettingWidget_ApplySettingValue_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveIfPossible;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53[0x7];                                       // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.AutoSettingWidget.Apply
struct UAutoSettingWidget_Apply_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.ToggleSetting.UpdateToggleState
struct UToggleSetting_UpdateToggleState_Params
{
public:
	bool                                         State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.ToggleSetting.ToggleStateUpdated
struct UToggleSetting_ToggleStateUpdated_Params
{
public:
	bool                                         State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged
struct UCheckBoxSetting_CheckBoxStateChanged_Params
{
public:
	bool                                         IsChecked;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.SelectSetting.UpdateOptions
struct USelectSetting_UpdateOptions_Params
{
public:
	TArray<struct FSettingOption>                InOptions;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.SelectSetting.RegenerateOptions
struct USelectSetting_RegenerateOptions_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
struct UComboBoxSetting_ComboBoxSelectionChanged_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71[0x7];                                       // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.ConsoleUtils.SetStringCVar
struct UConsoleUtils_SetStringCVar_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AutoSettings.ConsoleUtils.SetIntCVar
struct UConsoleUtils_SetIntCVar_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AutoSettings.ConsoleUtils.SetFloatCVar
struct UConsoleUtils_SetFloatCVar_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AutoSettings.ConsoleUtils.SetBoolCVar
struct UConsoleUtils_SetBoolCVar_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A[0x3];                                       // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function AutoSettings.ConsoleUtils.IsCVarRegistered
struct UConsoleUtils_IsCVarRegistered_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B[0x3];                                       // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.ConsoleUtils.GetStringCVar
struct UConsoleUtils_GetStringCVar_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AutoSettings.ConsoleUtils.GetIntCVar
struct UConsoleUtils_GetIntCVar_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AutoSettings.ConsoleUtils.GetFloatCVar
struct UConsoleUtils_GetFloatCVar_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AutoSettings.ConsoleUtils.GetBoolCVar
struct UConsoleUtils_GetBoolCVar_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C[0x3];                                       // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
struct UCVarChangeListenerManager_AddStringCVarCallbackStatic_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ChangedCallback;                                   // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallbackImmediately;                               // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98[0x3];                                       // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
struct UCVarChangeListenerManager_AddIntCVarCallbackStatic_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ChangedCallback;                                   // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallbackImmediately;                               // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F[0x3];                                       // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
struct UCVarChangeListenerManager_AddFloatCVarCallbackStatic_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ChangedCallback;                                   // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallbackImmediately;                               // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6[0x3];                                       // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
struct UCVarChangeListenerManager_AddBoolCVarCallbackStatic_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ChangedCallback;                                   // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallbackImmediately;                               // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC[0x3];                                       // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function AutoSettings.SliderSetting.UpdateSliderValue
struct USliderSetting_UpdateSliderValue_Params
{
public:
	float                                        NormalizedValue;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AutoSettings.SliderSetting.SliderValueUpdated
struct USliderSetting_SliderValueUpdated_Params
{
public:
	float                                        NormalizedValue;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.SliderSetting.ShouldSaveCurrentValue
struct USliderSetting_ShouldSaveCurrentValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AutoSettings.SliderSetting.RawValueToNormalized
struct USliderSetting_RawValueToNormalized_Params
{
public:
	float                                        RawValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AutoSettings.SliderSetting.OnSliderValueUpdated
struct USliderSetting_OnSliderValueUpdated_Params
{
public:
	float                                        NormalizedValue;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AutoSettings.SliderSetting.NormalizedValueToRaw
struct USliderSetting_NormalizedValueToRaw_Params
{
public:
	float                                        NormalizedValue;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AutoSettings.SliderSetting.ClampRawValue
struct USliderSetting_ClampRawValue_Params
{
public:
	float                                        RawValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AutoSettings.NativeSliderSetting.SliderValueChanged
struct UNativeSliderSetting_SliderValueChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
struct UNativeSliderSetting_SliderMouseCaptureEnd_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
struct UNativeSliderSetting_SliderMouseCaptureBegin_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.RadioButton.UpdateSelected
struct URadioButton_UpdateSelected_Params
{
public:
	bool                                         InSelected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.RadioButton.UpdateLabel
struct URadioButton_UpdateLabel_Params
{
public:
	class FText                                  InLabel;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.RadioButton.TriggerSelection
struct URadioButton_TriggerSelection_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioButton.SetValue
struct URadioButton_SetValue_Params
{
public:
	class FString                                InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.RadioButton.SetSelected
struct URadioButton_SetSelected_Params
{
public:
	bool                                         InSelected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.RadioButton.SetLabel
struct URadioButton_SetLabel_Params
{
public:
	class FText                                  InLabel;                                           // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioButton.GetValue
struct URadioButton_GetValue_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.RadioButton.GetSelected
struct URadioButton_GetSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.RadioButton.GetLabel
struct URadioButton_GetLabel_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioSelect.SetOptions
struct URadioSelect_SetOptions_Params
{
public:
	TArray<struct FSettingOption>                InOptions;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioSelect.Select
struct URadioSelect_Select_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioSelect.OnButtonCreated
struct URadioSelect_OnButtonCreated_Params
{
public:
	class URadioButton*                          Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelSlot*                            NewSlot;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioSelect.GetRadioButtonWidgets
struct URadioSelect_GetRadioButtonWidgets_Params
{
public:
	TArray<class URadioButton*>                  ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioSelect.GetOptions
struct URadioSelect_GetOptions_Params
{
public:
	TArray<struct FSettingOption>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioSelect.ButtonSelected
struct URadioSelect_ButtonSelected_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.RadioSelectSetting.RadioSelectionChanged
struct URadioSelectSetting_RadioSelectionChanged_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.SettingOptionFactory.ConstructOptions
struct USettingOptionFactory_ConstructOptions_Params
{
public:
	TArray<struct FSettingOption>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AutoSettings.SettingValueMask.RecombineValues
struct USettingValueMask_RecombineValues_Params
{
public:
	class FString                                SettingValue;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConsoleValue;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AutoSettings.SettingValueMask.MaskValue
struct USettingValueMask_MaskValue_Params
{
public:
	class FString                                ConsoleValue;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.SettingContainerUtils.SaveChildSettings
struct USettingContainerUtils_SaveChildSettings_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Parent;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AutoSettings.SettingContainerUtils.GetChildSettings
struct USettingContainerUtils_GetChildSettings_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Parent;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAutoSettingWidget*>            ReturnValue;                                       // 0x10(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
struct USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Parent;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
struct USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Parent;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153[0x7];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.SettingContainerUtils.CancelChildSettings
struct USettingContainerUtils_CancelChildSettings_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Parent;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.SettingContainerUtils.ApplyChildSettings
struct USettingContainerUtils_ApplyChildSettings_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Parent;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AutoSettings.SettingsManager.SaveSettingStatic
struct USettingsManager_SaveSettingStatic_Params
{
public:
	struct FAutoSettingData                      SettingData;                                       // 0x0(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
struct USettingsManager_RegisterStringCVarSettingWithCallback_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultValue;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Help;                                              // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ChangedCallback;                                   // 0x28(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallbackImmediately;                               // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E[0x7];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function AutoSettings.SettingsManager.RegisterStringCVarSetting
struct USettingsManager_RegisterStringCVarSetting_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultValue;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Help;                                              // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
struct USettingsManager_RegisterIntCVarSettingWithCallback_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184[0x4];                                      // Fixing Size After Last Property
	class FString                                Help;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ChangedCallback;                                   // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallbackImmediately;                               // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function AutoSettings.SettingsManager.RegisterIntCVarSetting
struct USettingsManager_RegisterIntCVarSetting_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B[0x4];                                      // Fixing Size After Last Property
	class FString                                Help;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
struct USettingsManager_RegisterFloatCVarSettingWithCallback_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199[0x4];                                      // Fixing Size After Last Property
	class FString                                Help;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ChangedCallback;                                   // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallbackImmediately;                               // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function AutoSettings.SettingsManager.RegisterFloatCVarSetting
struct USettingsManager_RegisterFloatCVarSetting_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4[0x4];                                      // Fixing Size After Last Property
	class FString                                Help;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
struct USettingsManager_RegisterBoolCVarSettingWithCallback_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultValue;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB[0x7];                                      // Fixing Size After Last Property
	class FString                                Help;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ChangedCallback;                                   // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallbackImmediately;                               // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function AutoSettings.SettingsManager.RegisterBoolCVarSetting
struct USettingsManager_RegisterBoolCVarSetting_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultValue;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB[0x7];                                      // Fixing Size After Last Property
	class FString                                Help;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AutoSettings.SettingsManager.GetValue
struct USettingsManager_GetValue_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferConfigValue;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6[0x7];                                      // Fixing Size After Last Property
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AutoSettings.SettingsManager.AutoDetectSettingsStatic
struct USettingsManager_AutoDetectSettingsStatic_Params
{
public:
	int32                                        WorkScale;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CPUMultiplier;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GPUMultiplier;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AutoSettings.SettingsManager.ApplySettingStatic
struct USettingsManager_ApplySettingStatic_Params
{
public:
	struct FAutoSettingData                      SettingData;                                       // 0x0(0x38)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.Spinner.SelectValue
struct USpinner_SelectValue_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AutoSettings.Spinner.SelectIndex
struct USpinner_SelectIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.Spinner.Previous
struct USpinner_Previous_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function AutoSettings.Spinner.OnSelectionChanged
struct USpinner_OnSelectionChanged_Params
{
public:
	struct FSettingOption                        SelectedOption;                                    // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettings.Spinner.Next
struct USpinner_Next_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.Spinner.HasValidPrevious
struct USpinner_HasValidPrevious_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettings.Spinner.HasValidNext
struct USpinner_HasValidNext_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AutoSettings.Spinner.GetCurrentOption
struct USpinner_GetCurrentOption_Params
{
public:
	struct FSettingOption                        ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AutoSettings.Spinner.GetCurrentIndex
struct USpinner_GetCurrentIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged
struct USpinnerSetting_SpinnerSelectionChanged_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
