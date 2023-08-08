#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x440 - 0x428)
// WidgetBlueprintGeneratedClass CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C
class UCorrectiveActionDisplayNameScreen_C : public UFortCorrectiveActionDisplayNameScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_DisplayNameEntrySpinner;                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_DisplayNameEntryError;                        // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CorrectiveActionDisplayNameScreen_C");
		return Clss;
	}

	void OnShowFailureReason(class FText& FailureReason);
	void OnShowCorrectiveActionProcessing(bool bShowProcessing);
	void OnShowDisplayNameDownloading(bool bShowDownloading);
	void ExecuteUbergraph_CorrectiveActionDisplayNameScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText K2Node_Event_FailureReason, bool K2Node_Event_bShowProcessing, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_bShowDownloading);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
