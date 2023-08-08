#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x438 - 0x428)
// WidgetBlueprintGeneratedClass CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C
class UCorrectiveActionGuardianEmailScreen_C : public UFortCorrectiveActionGuardianEmailScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_EmailEntryChallengeError;                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CorrectiveActionGuardianEmailScreen_C");
		return Clss;
	}

	void OnShowFailureReason(class FText& FailureReason);
	void OnShowCorrectiveActionProcessing(bool bShowProcessing);
	void ExecuteUbergraph_CorrectiveActionGuardianEmailScreen(int32 EntryPoint, class FText K2Node_Event_FailureReason, bool K2Node_Event_bShowProcessing, class UWBP_InputField_C* K2Node_DynamicCast_AsWBP_Input_Field, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
