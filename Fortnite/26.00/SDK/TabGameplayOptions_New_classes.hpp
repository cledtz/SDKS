#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x440 - 0x430)
// WidgetBlueprintGeneratedClass TabGameplayOptions_New.TabGameplayOptions_New_C
class UTabGameplayOptions_New_C : public UFortTabGameplayOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortHUDElementWrapper_C*              FortHUDElementWrapper;                             // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTabGameplayOptions_New_C* GetDefaultObj();

	void OnPrimaryContentPushed_5AB5972E44DCB37B5322F0BF3E4FC9F5(class UCommonActivatableWidget* ActivatableWidget);
	void OnPrimaryContentPushed_2B43339642D223ADA5A2A1AE55073FBB(class UCommonActivatableWidget* ActivatableWidget);
	void CenterOnTab();
	void SettingValueChanged(double Value);
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void ExecuteUbergraph_TabGameplayOptions_New(int32 EntryPoint, class UCommonActivatableWidget* K2Node_CustomEvent_ActivatableWidget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonActivatableWidget* Temp_object_Variable, class UFortAsyncAction_PushPrimaryContent* CallFunc_PushPrimaryContentClassAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UColorCalibration_C* K2Node_DynamicCast_AsColor_Calibration, bool K2Node_DynamicCast_bSuccess, class UCommonActivatableWidget* K2Node_CustomEvent_ActivatableWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonActivatableWidget* Temp_object_Variable_1, class UFortAsyncAction_PushPrimaryContent* CallFunc_PushPrimaryContentClassAsync_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UColorCalibration_C* K2Node_DynamicCast_AsColor_Calibration_1, bool K2Node_DynamicCast_bSuccess_1, double K2Node_CustomEvent_Value, class UFortSetting* K2Node_ComponentBoundEvent_Setting, class FName K2Node_ComponentBoundEvent_Action, bool K2Node_SwitchName_CmpSuccess);
};

}


