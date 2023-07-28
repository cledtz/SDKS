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

// 0x18 (0x18 - 0x0)
// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned
struct USettingsListEntry_ControllerButton_C_OnSettingAssigned_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct USettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton
struct USettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8060[0x4];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Event_ActionText;                           // 0x8(0x18)(ConstParm)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
