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

// 0x190 (0x1650 - 0x14C0)
// WidgetBlueprintGeneratedClass IconTextButtonHold.IconTextButtonHold_C
class UIconTextButtonHold_C : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x14C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ContentBorder;                                     // 0x14D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_ButtonContent;                       // 0x14D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSideImage;                                     // 0x14E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            RightExtraContentSlot;                             // 0x14E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x14F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	uint8                                        Pad_9E44[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           IconBrush;                                         // 0x1510(0xC0)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                ControllerInputStyle;                              // 0x15D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                MouseKeyboardStyle;                                // 0x15D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              ContentAlignment;                                  // 0x15E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMouseKeyboardStyleSet;                            // 0x15E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E45[0x6];                                     // Fixing Size After Last Property..
	class FText                                  OverrideButtonText;                                // 0x15E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ETextJustify                      ButtonTextJustification;                           // 0x1600(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bDisplayAllCaps;                                   // 0x1601(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_9E46[0x6];                                     // Fixing Size After Last Property..
	double                                       PressProgress;                                     // 0x1608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIgnoreInputActionWidgetText;                      // 0x1610(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E47[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            HoldActionStarted;                                 // 0x1618(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHolding;                                          // 0x1628(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E48[0x7];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            HoldActionEnded;                                   // 0x1630(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            HoldActionCompleted;                               // 0x1640(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IconTextButtonHold_C");
		return Clss;
	}

	void GetPressProgress(double* Progress);
	void Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void ShowIcon(bool bShouldShow);
	void SetTextInternal(class FText InButtonText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetInitialMouseKeyboardStyle();
	void UpdateTextStyle(TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue);
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment);
	void UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetMouseKeyboardStyle(class UClass* ControllerInputStyle, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateStyle(bool UsingGamepad, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UpdateText(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetDisplayText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default_1);
	void SetControllerStyle(class UClass* ControllerInputStyle, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateTextAndStyle(enum class ECommonInputType InputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeButton(class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(class FText ButtonText);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_IconTextButtonHold(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_HasAnyChildren_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_2, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_3, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_SlateBrush_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, double K2Node_VariableSet_PressProgress_ImplicitCast);
	void HoldActionCompleted__DelegateSignature();
	void HoldActionEnded__DelegateSignature();
	void HoldActionStarted__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
