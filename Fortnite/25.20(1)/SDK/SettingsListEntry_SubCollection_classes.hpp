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

// 0x10 (0x330 - 0x320)
// WidgetBlueprintGeneratedClass SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C
class USettingsListEntry_SubCollection_C : public UFortSettingsListEntrySetting_Navigation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHover;                                           // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SettingsListEntry_SubCollection_C");
		return Clss;
	}

	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnSettingAssigned(class FText& ActionText);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_SettingsListEntry_SubCollection(int32 EntryPoint, bool CallFunc_IsUsingTouch_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Event_ActionText, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
