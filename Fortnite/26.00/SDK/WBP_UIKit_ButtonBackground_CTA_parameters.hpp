#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetDisabled
struct UWBP_UIKit_ButtonBackground_CTA_C_SetDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetEnabled
struct UWBP_UIKit_ButtonBackground_CTA_C_SetEnabled_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBorderMaterial
struct UWBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial_Params
{
public:
	class UMaterialInstance*                     Border_Material;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAdditive;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBackgroundMaterial
struct UWBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial_Params
{
public:
	class UMaterialInstance*                     Brush;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionEnabled
struct UWBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionDisabled
struct UWBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionReleased
struct UWBP_UIKit_ButtonBackground_CTA_C_TransitionReleased_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionPressed
struct UWBP_UIKit_ButtonBackground_CTA_C_TransitionPressed_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionUnfocused
struct UWBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionFocused
struct UWBP_UIKit_ButtonBackground_CTA_C_TransitionFocused_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionUnhovered
struct UWBP_UIKit_ButtonBackground_CTA_C_TransitionUnhovered_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionHovered
struct UWBP_UIKit_ButtonBackground_CTA_C_TransitionHovered_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.PreConstruct
struct UWBP_UIKit_ButtonBackground_CTA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA
struct UWBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


