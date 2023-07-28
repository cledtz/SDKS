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
// WidgetBlueprintGeneratedClass TabVideoOptions_New.TabVideoOptions_New_C
class UTabVideoOptions_New_C : public UFortTabVideoOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabVideoOptions_New_C");
		return Clss;
	}

	void OnComplete_7E19F26B42A808FDADDB569CFB68CCB7(class UUserWidget* UserWidget);
	void CenterOnTab();
	void SettingValueChanged(double Value);
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void ExecuteUbergraph_TabVideoOptions_New(int32 EntryPoint, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable, class USafeZoneEditor_C* K2Node_DynamicCast_AsSafe_Zone_Editor, bool K2Node_DynamicCast_bSuccess, double K2Node_CustomEvent_Value, class UFortSetting* K2Node_ComponentBoundEvent_Setting, class FName K2Node_ComponentBoundEvent_Action, bool K2Node_SwitchName_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
