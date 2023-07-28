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

// 0x10 (0x2E0 - 0x2D0)
// WidgetBlueprintGeneratedClass SpeechBubbleWidget.SpeechBubbleWidget_C
class USpeechBubbleWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      BubbleText;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpeechBubbleWidget_C");
		return Clss;
	}

	void InitFromObject(class UObject* InitObject);
	void ExecuteUbergraph_SpeechBubbleWidget(int32 EntryPoint, class UObject* K2Node_Event_InitObject, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetCurrentSentenceSpeechText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
