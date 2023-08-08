#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsSelectable
struct UWBP_UIKit_Block_Base_C_SetIsSelectable_Params
{
public:
	bool                                         Is_Selectable;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsSelectable
struct UWBP_UIKit_Block_Base_C_GetIsSelectable_Params
{
public:
	bool                                         IsSelectable;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsLocked
struct UWBP_UIKit_Block_Base_C_SetIsLocked_Params
{
public:
	bool                                         Is_Locked;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsLocked
struct UWBP_UIKit_Block_Base_C_GetIsLocked_Params
{
public:
	bool                                         IsLocked;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsSelected
struct UWBP_UIKit_Block_Base_C_SetIsSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsSelected
struct UWBP_UIKit_Block_Base_C_GetIsSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetLocked
struct UWBP_UIKit_Block_Base_C_SetLocked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetSelected
struct UWBP_UIKit_Block_Base_C_SetSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetDisabled
struct UWBP_UIKit_Block_Base_C_SetDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetEnabled
struct UWBP_UIKit_Block_Base_C_SetEnabled_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDeselectedFocused
struct UWBP_UIKit_Block_Base_C_TransitionDeselectedFocused_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDeselectedIdle
struct UWBP_UIKit_Block_Base_C_TransitionDeselectedIdle_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionSelected
struct UWBP_UIKit_Block_Base_C_TransitionSelected_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionEnabled
struct UWBP_UIKit_Block_Base_C_TransitionEnabled_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDisabled
struct UWBP_UIKit_Block_Base_C_TransitionDisabled_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionReleased
struct UWBP_UIKit_Block_Base_C_TransitionReleased_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionPressed
struct UWBP_UIKit_Block_Base_C_TransitionPressed_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionUnfocused
struct UWBP_UIKit_Block_Base_C_TransitionUnfocused_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionFocused
struct UWBP_UIKit_Block_Base_C_TransitionFocused_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionUnhovered
struct UWBP_UIKit_Block_Base_C_TransitionUnhovered_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionHovered
struct UWBP_UIKit_Block_Base_C_TransitionHovered_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionState
struct UWBP_UIKit_Block_Base_C_TransitionState_Params
{
public:
	class UWidgetAnimation*                      TransitionAnimation;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       TransitionTime;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayForward;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D49[0x6];                                     // Fixing Size After Last Property
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast; // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
