#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA9 (0x329 - 0x280)
// WidgetBlueprintGeneratedClass UI_Button_Line.UI_Button_Line_C
class UUI_Button_Line_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PulseAnimation;                                    // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selected;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Pulse;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Name;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x2B8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        FontSize;                                          // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2DE0[0x3];                                     // Fixing Size After Last Property 
	class FName                                  GeneralColorID;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  SelectColorID;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  DisableColorID;                                    // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  HoveredColorID;                                    // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          SelectColor;                                       // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DisableColor;                                      // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Button_Line_C* GetDefaultObj();

	void HidePulse(bool CallFunc_IsVisible_ReturnValue);
	void ShowPulse(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetButtonColor(const struct FLinearColor& CallFunc_GetColorByID_Color, bool CallFunc_GetColorByID_Found, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1);
	void SetSelectButton(bool Selected, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void Pressed();
	void ExecuteUbergraph_UI_Button_Line(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FLinearColor& CallFunc_GetColorByID_Color, bool CallFunc_GetColorByID_Found, const struct FLinearColor& CallFunc_GetColorByID_Color_1, bool CallFunc_GetColorByID_Found_1, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FLinearColor& CallFunc_GetColorByID_Color_2, bool CallFunc_GetColorByID_Found_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnPressed__DelegateSignature(class UUI_Button_Line_C* Button);
};

}


