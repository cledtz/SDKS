#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x930 - 0x920)
// WidgetBlueprintGeneratedClass WBP_UIKit_Dialog.WBP_UIKit_Dialog_C
class UWBP_UIKit_Dialog_C : public UWBP_UIKit_Dialog_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x920(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUIKitDialogViewModel*                 UIKitDialogViewModel;                              // 0x928(0x8)(BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_UIKit_Dialog_C* GetDefaultObj();

	void SetUIKitDialogViewModel(class UUIKitDialogViewModel* ViewModel, class UMVVMView* CallFunc_GetExtension_ReturnValue, TScriptInterface<class UNotifyFieldValueChanged> CallFunc_SetViewModel_ViewModel_CastInput, bool CallFunc_SetViewModel_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_UIKit_Dialog(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


