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

// 0x10 (0x458 - 0x448)
// WidgetBlueprintGeneratedClass CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C
class UCorrectiveActionDateOfBirthScreen_C : public UFortCorrectiveActionDateOfBirthScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_AgeEntryChallengeError;                       // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CorrectiveActionDateOfBirthScreen_C");
		return Clss;
	}

	void OnShowFailureReason(class FText& FailureReason);
	void OnShowCorrectiveActionProcessing(bool bShowProcessing);
	void ExecuteUbergraph_CorrectiveActionDateOfBirthScreen(int32 EntryPoint, class UWBP_InputField_C* K2Node_DynamicCast_AsWBP_Input_Field, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bShowProcessing, class FText K2Node_Event_FailureReason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
