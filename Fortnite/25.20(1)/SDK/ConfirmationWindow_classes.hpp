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

// 0x40 (0x7A0 - 0x760)
// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
class UConfirmationWindow_C : public UFortConfirmationWindow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x760(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x768(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x770(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TapToCloseZone;                                    // 0x778(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          ButtonIconColor;                                   // 0x780(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ConfirmationAppearSound;                           // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ConfirmationDisappearSound;                        // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConfirmationWindow_C");
		return Clss;
	}

	void Handle_Configure_Decline_Button(class UCommonButtonBase* New_Button, class UWBP_UIKit_ButtonCTA_Base_C* CTAButton, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess, const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, int32 CallFunc_GetInputPriority_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void ConfigureConfirmationButton(class UCommonButtonBase* Button, struct FConfirmationDialogAction& Action, bool bSimpleConfirm, class UWBP_UIKit_ButtonCTA_Base_C* CTAButton, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess, const struct FDataTableRowHandle& CallFunc_GetInputAction_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_GetInputPriority_ReturnValue);
	void PlayShowSound(const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_PointerEvent_IsTouchEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void SetupNonInteractiveContent();
	struct FDataTableRowHandle GetInputAction(class FName RowName, bool UseInputAction, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& Temp_struct_Variable, const struct FDataTableRowHandle& K2Node_Select_Default);
	void Initialize();
	void OnBeginOutro();
	void ConfigureDeclineButton(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, int32 Temp_int_Array_Index_Variable, const struct FFortDialogDescription_NUI& CallFunc_GetConfirmationDescription_ReturnValue, class UCommonButtonBase* K2Node_Event_Button, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsMobileGame_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, double K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, class UWBP_UIKit_ButtonCTA_Base_C* K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
