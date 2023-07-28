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
// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.GetPrimaryGamepadFocusWidget
struct USettingsListEntry_SubCollection_C_GetPrimaryGamepadFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnSettingAssigned
struct USettingsListEntry_SubCollection_C_OnSettingAssigned_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnMouseEnter
struct USettingsListEntry_SubCollection_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnMouseLeave
struct USettingsListEntry_SubCollection_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x168 (0x168 - 0x0)
// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.ExecuteUbergraph_SettingsListEntry_SubCollection
struct USettingsListEntry_SubCollection_C_ExecuteUbergraph_SettingsListEntry_SubCollection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44D9[0x3];                                     // Fixing Size After Last Property..
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44DA[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Event_ActionText;                           // 0x18(0x18)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x30(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x68(0x78)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xF0(0x78)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
