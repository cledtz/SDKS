#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x310 - 0x2A8)
// WidgetBlueprintGeneratedClass WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C
class UWBP_ContentPurchaseBlocker_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_Mobile;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Description;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Title;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIKit_Button_Loud_C*              WBP_UIKit_Button_Loud;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Details;                                      // 0x2D0(0x18)(Edit, BlueprintVisible)
	int32                                        Max_Width;                                         // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8DEB[0x4];                                     // Fixing Size After Last Property 
	TSoftClassPtr<class UCommonUserWidget>       ParentalControlsScreenClass;                       // 0x2F0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ContentPurchaseBlocker_C* GetDefaultObj();

	void SetVisuals(int32 MaxWidth);
	void Set_Data(class FText InText);
	void OnComplete_EDE27478404080C54EDC0D863BB58408(class UUserWidget* UserWidget);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void Destruct();
	void ExecuteUbergraph_WBP_ContentPurchaseBlocker(int32 EntryPoint, class UUserWidget* Temp_object_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default, class UUserWidget* K2Node_CustomEvent_UserWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


