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

// 0x29 (0x2D1 - 0x2A8)
// WidgetBlueprintGeneratedClass FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C
class UFortSocialEventRSVPWidget_C : public UFortSocialEventRSVPWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay_AdditionalEvents;                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_AdditionalEvents;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_EventName;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_MonthDay;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ESlateVisibility                  In_Visibility;                                     // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSocialEventRSVPWidget_C");
		return Clss;
	}

	void Construct();
	void OnRefreshDisplay(class FText& EventName, class FText& Date, class FText& AdditionalEvents);
	void ExecuteUbergraph_FortSocialEventRSVPWidget(int32 EntryPoint, class FText K2Node_Event_EventName, class FText K2Node_Event_Date, class FText K2Node_Event_AdditionalEvents, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
