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

// 0x50 (0x448 - 0x3F8)
// WidgetBlueprintGeneratedClass WBP_UIKit_Dialog.WBP_UIKit_Dialog_C
class UWBP_UIKit_Dialog_C : public UUIKitDialogWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        Text_Decline_Num;                                  // 0x400(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                        Text_Confirmation_Num;                             // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                        Text_Body;                                         // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                        Text_Header;                                       // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUIKitDialogViewModel*                 UIKitDialogViewModel;                              // 0x420(0x8)(BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UButton*                               Button_Confirm;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Decline;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTextBlock_48;                                  // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTextBlock_119;                                 // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_UIKit_Dialog_C");
		return Clss;
	}

	void SetUIKitDialogViewModel(class UUIKitDialogViewModel* ViewModel, class UMVVMView* CallFunc_GetExtension_ReturnValue, FInterfaceProperty_ CallFunc_SetViewModel_ViewModel_CastInput, bool CallFunc_SetViewModel_ReturnValue);
	void FNameToNumText(class FName Name, class FText* Text, bool Temp_bool_Variable, class FText CallFunc_Conv_NameToText_ReturnValue, class FText Temp_text_Variable, bool CallFunc_TextIsEmpty_ReturnValue, class FText Temp_text_Variable_1, class FText K2Node_Select_Default);
	void ArrayLengthToText(TArray<struct FConfirmationDialogAction>& Array, class FText* Text, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void BndEvt__WBP_UIKit_Dialog_Button_Confirm_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_UIKit_Dialog_Button_Decline_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_UIKit_Dialog(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
