#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// WidgetBlueprintGeneratedClass SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C
class USettingsListEntry_ControllerButton_C : public UFortSettingsListEntrySetting_ControllerButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USimpleCommonButton_C*                 Button_ControllerAction;                           // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SettingsListEntry_ControllerButton_C");
		return Clss;
	}

	void OnSettingAssigned(class FText& ActionText);
	void BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_SettingsListEntry_ControllerButton(int32 EntryPoint, class FText K2Node_Event_ActionText, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
