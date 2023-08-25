#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x448 - 0x438)
// WidgetBlueprintGeneratedClass CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C
class UCorrectiveActionDateOfBirthScreen_C : public UFortCorrectiveActionDateOfBirthScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_AgeEntryChallengeError;                       // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCorrectiveActionDateOfBirthScreen_C* GetDefaultObj();

	void OnShowFailureReason(class FText& FailureReason);
	void OnShowCorrectiveActionProcessing(bool bShowProcessing);
	void ExecuteUbergraph_CorrectiveActionDateOfBirthScreen(int32 EntryPoint, class UWBP_InputField_C* K2Node_DynamicCast_AsWBP_Input_Field, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bShowProcessing, class FText K2Node_Event_FailureReason);
};

}


