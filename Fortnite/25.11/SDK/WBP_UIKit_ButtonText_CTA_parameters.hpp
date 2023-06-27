#pragma once

// Dumper.

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

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetDisabled
struct UWBP_UIKit_ButtonText_CTA_C_SetDisabled_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetMobileFontSizeMultiplier
struct UWBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier_Params
{
public:
	float                                        MobileFontSizeMultiplier;                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetEnabled
struct UWBP_UIKit_ButtonText_CTA_C_SetEnabled_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionEnabled
struct UWBP_UIKit_ButtonText_CTA_C_TransitionEnabled_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionDisabled
struct UWBP_UIKit_ButtonText_CTA_C_TransitionDisabled_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionReleased
struct UWBP_UIKit_ButtonText_CTA_C_TransitionReleased_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionPressed
struct UWBP_UIKit_ButtonText_CTA_C_TransitionPressed_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionUnfocused
struct UWBP_UIKit_ButtonText_CTA_C_TransitionUnfocused_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionFocused
struct UWBP_UIKit_ButtonText_CTA_C_TransitionFocused_Params
{
public:
	class UWidgetAnimation*                      AnimTransition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetFont
struct UWBP_UIKit_ButtonText_CTA_C_SetFont_Params
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetText
struct UWBP_UIKit_ButtonText_CTA_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Empty;                                             // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1599[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.PreConstruct
struct UWBP_UIKit_ButtonText_CTA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonText_CTA
struct UWBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
