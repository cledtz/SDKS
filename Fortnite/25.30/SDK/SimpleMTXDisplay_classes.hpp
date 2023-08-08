#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2E0 - 0x2D0)
// WidgetBlueprintGeneratedClass SimpleMTXDisplay.SimpleMTXDisplay_C
class USimpleMTXDisplay_C : public UFortSimpleMTXDisplay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  AvailableAmountText;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SimpleMTXDisplay_C");
		return Clss;
	}

	void OnUpdateAvailableMTX(int32 AvailableBalance);
	void ExecuteUbergraph_SimpleMTXDisplay(int32 EntryPoint, int32 K2Node_Event_AvailableBalance, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
