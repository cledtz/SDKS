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

// 0x88 (0x360 - 0x2D8)
// WidgetBlueprintGeneratedClass WBP_ComboBox.WBP_ComboBox_C
class UWBP_ComboBox_C : public UFortComboBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OpenAnim;                                          // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverAnim;                                         // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   CommonActionWidget;                                // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InputActionOverlay;                                // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LabelText;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Outline;                                           // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         AlignContentCenter;                                // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3854[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          OutlineEndColor;                                   // 0x31C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3855[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              OutlineMaterial;                                   // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  OutlineColorParam;                                 // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_UI_InputField_ContentSize       ContentSize;                                       // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         P_IsFocused;                                       // 0x33D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         P_IsListOpened;                                    // 0x33E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         P_IsHover;                                         // 0x33F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ArrowMaterial;                                     // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  ArrowColorParam;                                   // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         P_FocusAnimPlayed;                                 // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3856[0x3];                                     // Fixing Size After Last Property..
	class USoundBase*                            HoverSound;                                        // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ClickSound;                                        // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_ComboBox_C");
		return Clss;
	}

	void SequenceEvent__ENTRYPOINTWBP_ComboBox();
	void SetActionVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetText(const class FString& TextValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetContentSize(enum class E_UI_InputField_ContentSize Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, enum class E_UI_InputField_ContentSize Temp_byte_Variable_1, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, enum class E_UI_InputField_ContentSize Temp_byte_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 K2Node_Select_Default, class FName K2Node_Select_Default_1, class UObject* K2Node_Select_Default_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void Set_Focus_Visual(bool IsFocused, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1);
	void SetContentAlignment(bool Temp_bool_Variable, enum class ETextJustify Temp_byte_Variable, enum class ETextJustify Temp_byte_Variable_1, enum class ETextJustify K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void Construct();
	void BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature();
	void RefreshHoverAnim();
	void PlayClickSound();
	void Destruct();
	void OnInputDeviceChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_WBP_ComboBox(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, const class FString& CallFunc_GetSelectedOption_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
