#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x2D1 - 0x2A8)
// WidgetBlueprintGeneratedClass DeadzoneAdjustment.DeadzoneAdjustment_C
class UDeadzoneAdjustment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Deadzone_Adjustment;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSetting_C*                 Deadzone_Adjustment_Slider;                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Deadzone_Max;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetButton;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ESettingType                      SettingType;                                       // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDeadzoneAdjustment_C* GetDefaultObj();

	class UWidget* DoCustomNavigation_0(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void OnValueChanged_Bind(float Value);
	void ExecuteUbergraph_DeadzoneAdjustment(int32 EntryPoint, float CallFunc_GetValue_ReturnValue, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_ConvertSliderValueToSettingsValue_SettingsValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_ConvertSliderValueToSettingsValue_SliderValue_ImplicitCast);
};

}


