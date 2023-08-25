#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x460 - 0x440)
// WidgetBlueprintGeneratedClass MultiActionConfirmationMenu.MultiActionConfirmationMenu_C
class UMultiActionConfirmationMenu_C : public UFortMultiFriendActionMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Opened;                                            // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        ConfirmationButtons;                               // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  Text_ActionText;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMultiActionConfirmationMenu_C* GetDefaultObj();

	void UpdateText(class FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnOpened();
	void OnActionUpdated();
	void ExecuteUbergraph_MultiActionConfirmationMenu(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


