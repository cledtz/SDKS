#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5C8 - 0x5C0)
// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
class UStatusWidget_C : public UFortLoginStatus
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UStatusWidget_C* GetDefaultObj();

	void SetContinueButtonText(class FText& ContinueText);
	void SetQuitButtonText(class FText& QuitText);
	void ExecuteUbergraph_StatusWidget(int32 EntryPoint, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Event_QuitText, class FText K2Node_Event_ContinueText);
};

}


