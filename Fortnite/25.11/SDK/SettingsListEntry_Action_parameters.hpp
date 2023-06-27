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

// 0x8 (0x8 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.GetPrimaryGamepadFocusWidget
struct USettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnSettingAssigned
struct USettingsListEntry_Action_C_OnSettingAssigned_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bShowKeybindWidget;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseEnter
struct USettingsListEntry_Action_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseLeave
struct USettingsListEntry_Action_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x172 (0x172 - 0x0)
// Function SettingsListEntry_Action.SettingsListEntry_Action_C.ExecuteUbergraph_SettingsListEntry_Action
struct USettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2354[0x4];                                     // Fixing Size After Last Property..
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2355[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x28(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x60(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xD8(0x78)(ConstParm)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2356[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Event_ActionText;                           // 0x158(0x18)(ConstParm)
	bool                                         K2Node_Event_bShowKeybindWidget;                   // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
