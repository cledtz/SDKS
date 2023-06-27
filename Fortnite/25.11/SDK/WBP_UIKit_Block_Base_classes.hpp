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

// 0x53 (0x2FB - 0x2A8)
// WidgetBlueprintGeneratedClass WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C
class UWBP_UIKit_Block_Base_C : public UUserWidget
{
public:
	double                                       TimeHovering;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeUnhovering;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeFocusing;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeUnfocusing;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimePressing;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeReleasing;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeDisabling;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeEnabling;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeSelecting;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeDeselecting;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelectable;                                      // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLocked;                                          // 0x2FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_UIKit_Block_Base_C");
		return Clss;
	}

	void SetIsSelectable(bool Is_Selectable);
	void GetIsSelectable(bool* IsSelectable);
	void SetIsLocked(bool Is_Locked);
	void GetIsLocked(bool* IsLocked);
	void SetIsSelected(bool IsSelected);
	void GetIsSelected(bool* IsSelected);
	void SetLocked();
	void SetSelected();
	void SetDisabled();
	void SetEnabled();
	void TransitionDeselectedFocused(class UWidgetAnimation* AnimTransition);
	void TransitionDeselectedIdle(class UWidgetAnimation* AnimTransition);
	void TransitionSelected(class UWidgetAnimation* AnimTransition);
	void TransitionEnabled(class UWidgetAnimation* AnimTransition);
	void TransitionDisabled(class UWidgetAnimation* AnimTransition);
	void TransitionReleased(class UWidgetAnimation* AnimTransition);
	void TransitionPressed(class UWidgetAnimation* AnimTransition);
	void TransitionUnfocused(class UWidgetAnimation* AnimTransition);
	void TransitionFocused(class UWidgetAnimation* AnimTransition);
	void TransitionUnhovered(class UWidgetAnimation* AnimTransition);
	void TransitionHovered(class UWidgetAnimation* AnimTransition);
	void TransitionState(class UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast, float CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
