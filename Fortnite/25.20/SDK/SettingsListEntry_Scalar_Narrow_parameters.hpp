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
// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.GetPrimaryGamepadFocusWidget
struct USettingsListEntry_Scalar_Narrow_C_GetPrimaryGamepadFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnValueChanged
struct USettingsListEntry_Scalar_Narrow_C_OnValueChanged_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnDefaultValueChanged
struct USettingsListEntry_Scalar_Narrow_C_OnDefaultValueChanged_Params
{
public:
	float                                        DefaultValue;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseEnter
struct USettingsListEntry_Scalar_Narrow_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseLeave
struct USettingsListEntry_Scalar_Narrow_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x158 (0x158 - 0x0)
// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.ExecuteUbergraph_SettingsListEntry_Scalar_Narrow
struct USettingsListEntry_Scalar_Narrow_C_ExecuteUbergraph_SettingsListEntry_Scalar_Narrow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91DE[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Value;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91DF[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DefaultValue;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1C(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_91E0[0x4];                                     // Fixing Size After Last Property..
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x58(0x78)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xE0(0x78)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
