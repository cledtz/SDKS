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
// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
struct UPowerToastWidget_C_HandleAnimationDelay_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
struct UPowerToastWidget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
struct UPowerToastWidget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0
struct UPowerToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1
struct UPowerToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2
struct UPowerToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.ShowToast
struct UPowerToastWidget_C_ShowToast_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.Construct
struct UPowerToastWidget_C_Construct_Params
{
public:
};

// 0x171 (0x171 - 0x0)
// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
struct UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDisplayTime_bOutDisplayTimeOverridden; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1C[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetDisplayTime_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x28(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x60(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xD8(0x78)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A1D[0x7];                                     // Fixing Size After Last Property..
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
