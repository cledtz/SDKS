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

// 0x50 (0x1510 - 0x14C0)
// WidgetBlueprintGeneratedClass PanelButton.PanelButton_C
class UPanelButton_C : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            ContentSlot;                                       // 0x14C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                ControllerInputStyle;                              // 0x14D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                MouseKeyboardStyle;                                // 0x14D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              InputActionHorizontalAlignment;                    // 0x14E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                InputActionVerticalAlignment;                      // 0x14E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9547[0x6];                                     // Fixing Size After Last Property..
	struct FVector2D                             InputActionRenderTranslation;                      // 0x14E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InputActionUseRimBrush;                            // 0x14F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9548[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             InputActionRimBrushSize;                           // 0x1500(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PanelButton_C");
		return Clss;
	}

	void UpdateInputActionLayout(const struct FSlateBrush& RimBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FDeprecateSlateVector2D& K2Node_SetFieldsInStruct_ImageSize_ImplicitCast);
	void UpdateStyle(bool bUsingGamepad, class FText ActionText);
	void InitializeButton();
	void UpdateTextAndStyle(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_PanelButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_HasAnyChildren_ReturnValue, bool Temp_bool_Variable, bool K2Node_ComponentBoundEvent_bUsingGamepad, enum class ESlateVisibility K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
