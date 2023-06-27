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

// 0x95 (0x390 - 0x2FB)
// WidgetBlueprintGeneratedClass WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C
class UWBP_UIKit_ButtonText_CTA_C : public UWBP_UIKit_Block_Base_C
{
public:
	uint8                                        Pad_159A[0x5];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Bounce;                                       // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Disabled_Transition;                          // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Pressed_Transition;                           // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Focused_Transition;                           // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlock;                                         // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        Font;                                              // 0x330(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FontDynamicMaterial;                               // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_UIKit_ButtonText_CTA_C");
		return Clss;
	}

	void SetDisabled();
	void SetMobileFontSizeMultiplier(float MobileFontSizeMultiplier);
	void SetEnabled();
	void TransitionEnabled(class UWidgetAnimation* AnimTransition);
	void TransitionDisabled(class UWidgetAnimation* AnimTransition);
	void TransitionReleased(class UWidgetAnimation* AnimTransition);
	void TransitionPressed(class UWidgetAnimation* AnimTransition);
	void TransitionUnfocused(class UWidgetAnimation* AnimTransition);
	void TransitionFocused(class UWidgetAnimation* AnimTransition);
	void SetFont(struct FSlateFontInfo& Font, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue);
	void SetText(class FText Text, bool* Empty, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_UIKit_ButtonText_CTA(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
