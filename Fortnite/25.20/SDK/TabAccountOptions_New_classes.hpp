#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x448 - 0x440)
// WidgetBlueprintGeneratedClass TabAccountOptions_New.TabAccountOptions_New_C
class UTabAccountOptions_New_C : public UFortTabAccountOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabAccountOptions_New_C");
		return Clss;
	}

	void OnComplete_DB10A9674F5CF800B883C79A4229D87C(class UUserWidget* UserWidget);
	void OnComplete_1192BA0E41F4707FF3E3A4A4C72B2024(class UUserWidget* UserWidget);
	void CenterOnTab();
	void SettingValueChanged(double Value);
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void ExecuteUbergraph_TabAccountOptions_New(int32 EntryPoint, class UUserWidget* K2Node_CustomEvent_UserWidget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_CustomEvent_Value, class UFortSetting* K2Node_ComponentBoundEvent_Setting, class FName K2Node_ComponentBoundEvent_Action, bool K2Node_SwitchName_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
