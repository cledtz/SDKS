#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x58 - 0x38)
// Class AutoSettings.AutoSettingsConfig
class UAutoSettingsConfig : public UDeveloperSettings
{
public:
	class FString                                SettingsIniName;                                   // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SettingsSectionName;                               // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAutoSettingsConfig* GetDefaultObj();

};

// 0x50 (0x2D0 - 0x280)
// Class AutoSettings.AutoSettingWidget
class UAutoSettingWidget : public UUserWidget
{
public:
	class FName                                  CVarName;                                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USettingValueMask>         ValueMask;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSave;                                         // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoApply;                                        // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31[0x6];                                       // Fixing Size After Last Property 
	struct FGameplayTagContainer                 SettingTags;                                       // 0x298(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                CurrentValue;                                      // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasUnappliedChange;                               // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasUnsavedChange;                                 // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpdatingSettingSelection;                         // 0x2CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_32[0x5];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAutoSettingWidget* GetDefaultObj();

	void UpdateSelection(const class FString& Value);
	void Save();
	bool HasUnsavedChange();
	bool HasUnappliedChange();
	void Cancel();
	void ApplySettingValue(const class FString& Value, bool bSaveIfPossible);
	void Apply();
};

// 0x0 (0x2D0 - 0x2D0)
// Class AutoSettings.ToggleSetting
class UToggleSetting : public UAutoSettingWidget
{
public:

	static class UClass* StaticClass();
	static class UToggleSetting* GetDefaultObj();

	void UpdateToggleState(bool State);
	void ToggleStateUpdated(bool State);
};

// 0x8 (0x2D8 - 0x2D0)
// Class AutoSettings.CheckBoxSetting
class UCheckBoxSetting : public UToggleSetting
{
public:
	class UCheckBox*                             CheckBox;                                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCheckBoxSetting* GetDefaultObj();

	void CheckBoxStateChanged(bool IsChecked);
};

// 0x20 (0x2F0 - 0x2D0)
// Class AutoSettings.SelectSetting
class USelectSetting : public UAutoSettingWidget
{
public:
	TArray<struct FSettingOption>                Options;                                           // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class USettingOptionFactory>     OptionFactory;                                     // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdatingSettingOptions;                           // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4C[0x7];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USelectSetting* GetDefaultObj();

	void UpdateOptions(TArray<struct FSettingOption>& InOptions);
	void RegenerateOptions();
};

// 0x8 (0x2F8 - 0x2F0)
// Class AutoSettings.ComboBoxSetting
class UComboBoxSetting : public USelectSetting
{
public:
	class UComboBoxString*                       ComboBox;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UComboBoxSetting* GetDefaultObj();

	void ComboBoxSelectionChanged(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
};

// 0x0 (0x28 - 0x28)
// Class AutoSettings.ConsoleUtils
class UConsoleUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConsoleUtils* GetDefaultObj();

	void SetStringCVar(class FName Name, const class FString& Value);
	void SetIntCVar(class FName Name, int32 Value);
	void SetFloatCVar(class FName Name, float Value);
	void SetBoolCVar(class FName Name, bool Value);
	bool IsCVarRegistered(class FName Name);
	class FString GetStringCVar(class FName Name);
	int32 GetIntCVar(class FName Name);
	float GetFloatCVar(class FName Name);
	bool GetBoolCVar(class FName Name);
};

// 0x58 (0x80 - 0x28)
// Class AutoSettings.CVarChangeListener
class UCVarChangeListener : public UObject
{
public:
	uint8                                        Pad_81[0x58];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCVarChangeListener* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AutoSettings.CVarChangeListenerManager
class UCVarChangeListenerManager : public UObject
{
public:
	TMap<class FName, class UCVarChangeListener*> Listeners;                                         // 0x28(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCVarChangeListenerManager* GetDefaultObj();

	void AddStringCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately);
	void AddIntCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately);
	void AddFloatCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately);
	void AddBoolCVarCallbackStatic(class FName Name, FDelegateProperty_ ChangedCallback, bool CallbackImmediately);
};

// 0x8 (0x2D8 - 0x2D0)
// Class AutoSettings.SliderSetting
class USliderSetting : public UAutoSettingWidget
{
public:
	float                                        LeftValue;                                         // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RightValue;                                        // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USliderSetting* GetDefaultObj();

	void UpdateSliderValue(float NormalizedValue, float RawValue);
	void SliderValueUpdated(float NormalizedValue);
	bool ShouldSaveCurrentValue();
	float RawValueToNormalized(float RawValue);
	void OnSliderValueUpdated(float NormalizedValue, float RawValue);
	float NormalizedValueToRaw(float NormalizedValue);
	float ClampRawValue(float RawValue);
};

// 0x10 (0x2E8 - 0x2D8)
// Class AutoSettings.NativeSliderSetting
class UNativeSliderSetting : public USliderSetting
{
public:
	class USlider*                               Slider;                                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMouseCaptureInProgress;                           // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C2[0x7];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNativeSliderSetting* GetDefaultObj();

	void SliderValueChanged(float NewValue);
	void SliderMouseCaptureEnd();
	void SliderMouseCaptureBegin();
};

// 0x40 (0x2C0 - 0x280)
// Class AutoSettings.RadioButton
class URadioButton : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x290(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	class FString                                Value;                                             // 0x2A8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Selected;                                          // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D3[0x7];                                       // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class URadioButton* GetDefaultObj();

	void UpdateSelected(bool InSelected);
	void UpdateLabel(class FText& InLabel);
	void TriggerSelection();
	void SetValue(const class FString& InValue);
	void SetSelected(bool InSelected);
	void SetLabel(class FText InLabel);
	class FString GetValue();
	bool GetSelected();
	class FText GetLabel();
};

// 0x40 (0x2C0 - 0x280)
// Class AutoSettings.RadioSelect
class URadioSelect : public UUserWidget
{
public:
	TArray<struct FSettingOption>                Options;                                           // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class URadioButton>              RadioButtonClass;                                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SelectionChangedEvent;                             // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPanelWidget*                          ButtonContainer;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URadioButton*>                  RadioButtons;                                      // 0x2B0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URadioSelect* GetDefaultObj();

	void SetOptions(const TArray<struct FSettingOption>& InOptions);
	void Select(const class FString& Value);
	void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);
	TArray<class URadioButton*> GetRadioButtonWidgets();
	TArray<struct FSettingOption> GetOptions();
	void ButtonSelected(const class FString& Value);
};

// 0x10 (0x300 - 0x2F0)
// Class AutoSettings.RadioSelectSetting
class URadioSelectSetting : public USelectSetting
{
public:
	TSubclassOf<class URadioButton>              RadioButtonClass;                                  // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioSelect*                          RadioSelect;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URadioSelectSetting* GetDefaultObj();

	void RadioSelectionChanged(const class FString& Value);
};

// 0x0 (0x28 - 0x28)
// Class AutoSettings.SettingOptionFactory
class USettingOptionFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class USettingOptionFactory* GetDefaultObj();

	TArray<struct FSettingOption> ConstructOptions();
};

// 0x0 (0x28 - 0x28)
// Class AutoSettings.ResolutionOptionFactory
class UResolutionOptionFactory : public USettingOptionFactory
{
public:

	static class UClass* StaticClass();
	static class UResolutionOptionFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AutoSettings.ResolutionStringUtils
class UResolutionStringUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UResolutionStringUtils* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AutoSettings.SettingValueMask
class USettingValueMask : public UObject
{
public:

	static class UClass* StaticClass();
	static class USettingValueMask* GetDefaultObj();

	class FString RecombineValues(const class FString& SettingValue, const class FString& ConsoleValue);
	class FString MaskValue(const class FString& ConsoleValue);
};

// 0x0 (0x28 - 0x28)
// Class AutoSettings.ResolutionValueMask
class UResolutionValueMask : public USettingValueMask
{
public:

	static class UClass* StaticClass();
	static class UResolutionValueMask* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AutoSettings.SettingContainerUtils
class USettingContainerUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USettingContainerUtils* GetDefaultObj();

	void SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
	TArray<class UAutoSettingWidget*> GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
	bool DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent);
	bool DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent);
	void CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
	void ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);
};

// 0x20 (0x50 - 0x30)
// Class AutoSettings.SettingsManager
class USettingsManager : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnSettingSaved;                                    // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                IniFilename;                                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USettingsManager* GetDefaultObj();

	void SaveSettingStatic(const struct FAutoSettingData& SettingData);
	void RegisterStringCVarSettingWithCallback(class FName Name, const class FString& DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately);
	void RegisterStringCVarSetting(class FName Name, const class FString& DefaultValue, const class FString& Help);
	void RegisterIntCVarSettingWithCallback(class FName Name, int32 DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately);
	void RegisterIntCVarSetting(class FName Name, int32 DefaultValue, const class FString& Help);
	void RegisterFloatCVarSettingWithCallback(class FName Name, float DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately);
	void RegisterFloatCVarSetting(class FName Name, float DefaultValue, const class FString& Help);
	void RegisterBoolCVarSettingWithCallback(class FName Name, bool DefaultValue, const class FString& Help, FDelegateProperty_ ChangedCallback, bool CallbackImmediately);
	void RegisterBoolCVarSetting(class FName Name, bool DefaultValue, const class FString& Help);
	class FString GetValue(class FName Key, bool bPreferConfigValue);
	void AutoDetectSettingsStatic(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
	void ApplySettingStatic(const struct FAutoSettingData& SettingData);
};

// 0x30 (0x2B0 - 0x280)
// Class AutoSettings.Spinner
class USpinner : public UUserWidget
{
public:
	TArray<struct FSettingOption>                Options;                                           // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowWrapping;                                    // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180[0x7];                                      // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            SelectionChangedEvent;                             // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_181[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USpinner* GetDefaultObj();

	void SelectValue(const class FString& Value);
	void SelectIndex(int32 Index);
	void Previous();
	void OnSelectionChanged(const struct FSettingOption& SelectedOption);
	void Next();
	bool HasValidPrevious();
	bool HasValidNext();
	struct FSettingOption GetCurrentOption();
	int32 GetCurrentIndex();
};

// 0x8 (0x2F8 - 0x2F0)
// Class AutoSettings.SpinnerSetting
class USpinnerSetting : public USelectSetting
{
public:
	class USpinner*                              Spinner;                                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USpinnerSetting* GetDefaultObj();

	void SpinnerSelectionChanged(const class FString& Value);
};

// 0x0 (0x28 - 0x28)
// Class AutoSettings.WindowModeValueMask
class UWindowModeValueMask : public USettingValueMask
{
public:

	static class UClass* StaticClass();
	static class UWindowModeValueMask* GetDefaultObj();

};

}


