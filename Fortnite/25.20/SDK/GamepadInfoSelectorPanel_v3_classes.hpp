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

// 0xC8 (0x630 - 0x568)
// WidgetBlueprintGeneratedClass GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C
class UGamepadInfoSelectorPanel_v3_C : public UFortGamePadInfoSelectorPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_Reset;                                // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRadioButtonGroup_C*               FortRadioButtonGroup_Configs;                      // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRadioButtonGroup_C*               FortRadioButtonGroup_Platforms;                    // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlockLegacy*              FortRichTextBlock_Reset1;                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlockLegacy*              FortRichTextBlock_Reset2;                          // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget_Reset;                               // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                  OptionsMenuHeader_Configs;                         // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuHeader_C*                  OptionsMenuHeader_Platforms;                       // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ResetButton;                                       // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Platforms;                             // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Back;                                              // 0x5C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            GamepadInfoSelectorBack;                           // 0x5D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   Apply;                                             // 0x5E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            GamepadInfoSelectorApply;                          // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   Reset;                                             // 0x600(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_            GamepadInfoSelectorReset;                          // 0x610(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GamepadInfoSelectorFocus;                          // 0x620(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GamepadInfoSelectorPanel_v3_C");
		return Clss;
	}

	class UWidget* BP_GetDesiredFocusTarget(class UCommonButtonLegacy* CallFunc_GetSelectedButton_ReturnValue);
	void HandleReset(bool* PassThrough);
	void HandleApply(bool* PassThrough);
	void HandleBack(bool* PassThrough);
	void BP_OnDeactivated();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void BP_OnActivated();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_GamepadInfoSelectorPanel_v3(int32 EntryPoint, bool CallFunc_IsInSubGame_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_HasInputActionHandler_ReturnValue_2);
	void GamepadInfoSelectorFocus__DelegateSignature();
	void GamepadInfoSelectorReset__DelegateSignature();
	void GamepadInfoSelectorApply__DelegateSignature();
	void GamepadInfoSelectorBack__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
