#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x448 - 0x440)
// WidgetBlueprintGeneratedClass TabTouchOptions_New.TabTouchOptions_New_C
class UTabTouchOptions_New_C : public UFortTabTouchOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabTouchOptions_New_C");
		return Clss;
	}

	void OnComplete_F4680C974FD91F0C7CA9F7A7014B7056(class UUserWidget* UserWidget);
	void CenterOnTab();
	void SettingValueChanged(double Value);
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void ExecuteUbergraph_TabTouchOptions_New(int32 EntryPoint, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable, double K2Node_CustomEvent_Value, class UFortSetting* K2Node_ComponentBoundEvent_Setting, class FName K2Node_ComponentBoundEvent_Action, bool K2Node_SwitchName_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
