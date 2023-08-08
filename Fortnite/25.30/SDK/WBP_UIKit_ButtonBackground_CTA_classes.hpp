#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D (0x378 - 0x2FB)
// WidgetBlueprintGeneratedClass WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C
class UWBP_UIKit_ButtonBackground_CTA_C : public UWBP_UIKit_Block_Base_C
{
public:
	uint8                                        Pad_3EC8[0x5];                                     // Fixing Size After Last Property
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Outline_Glow;                                 // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Outline;                                      // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Disabled_Transition;                          // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Pressed_Transition;                           // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Focused_Transition;                           // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Hovered_Transition;                           // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Backing;                                           // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FocusOutline;                                      // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FocusOutline_Glow;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Root;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                     BackgroundMaterial;                                // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         AdditiveBorder;                                    // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ED0[0x7];                                     // Fixing Size After Last Property
	class UMaterialInstanceDynamic*              BackgroundDynamicMaterial;                         // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_UIKit_ButtonBackground_CTA_C");
		return Clss;
	}

	void SetDisabled();
	void SetEnabled();
	void SetBorderMaterial(class UMaterialInstance* Border_Material, bool IsAdditive);
	void SetBackgroundMaterial(class UMaterialInstance*& Brush, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void TransitionEnabled(class UWidgetAnimation* AnimTransition);
	void TransitionDisabled(class UWidgetAnimation* AnimTransition);
	void TransitionReleased(class UWidgetAnimation* AnimTransition);
	void TransitionPressed(class UWidgetAnimation* AnimTransition);
	void TransitionUnfocused(class UWidgetAnimation* AnimTransition);
	void TransitionFocused(class UWidgetAnimation* AnimTransition, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void TransitionUnhovered(class UWidgetAnimation* AnimTransition);
	void TransitionHovered(class UWidgetAnimation* AnimTransition);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
