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

// 0x88 (0x420 - 0x398)
// WidgetBlueprintGeneratedClass VoiceChannelSettings.VoiceChannelSettings_C
class UVoiceChannelSettings_C : public UFortVoiceSettingsDisplay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      GearHover;                                         // 0x3A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonActionWidget*                   ActionWidget_InputDisplay;                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AlertIcon;                                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_NextInputDevice;                            // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_NextOutputDevice;                           // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_TogglePTT;                                  // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_VoiceSettings;                              // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GearIcon;                                          // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_TitleIcon;                                   // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  InputDevice;                                       // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  OutputDevice;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      PTTKeybindWidget;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  PushToTalk;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_LowPowerMode;                                 // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VoiceDisabledIcon;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  VoiceDisabledText;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoiceChannelSettings_C");
		return Clss;
	}

	void OnComplete_CAAD0AF4467900CF5BC6B8B8CA0C330F(class UUserWidget* UserWidget);
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ShowVoiceSettingsButton();
	void BndEvt__VoiceChannelSettings_Button_VoiceSettings_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_VoiceChannelSettings(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* Temp_object_Variable, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_3, class UOptionsMenu_C* K2Node_DynamicCast_AsOptions_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RequestTab_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
