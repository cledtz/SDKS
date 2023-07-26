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

// 0x11 (0x11 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus
struct UNPCStatusWidget_C_EventUpdateStatus_Params
{
public:
	double                                       Health;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Shield;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowShield;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus
struct UNPCStatusWidget_C_EventHideStatus_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration
struct UNPCStatusWidget_C_ChangeWidgetVisibleDuration_Params
{
public:
	double                                       StatusWidgetVisibleDuration;                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.SetKeepVisibilityOn
struct UNPCStatusWidget_C_SetKeepVisibilityOn_Params
{
public:
	bool                                         KeepVisibilityOn;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.TryCallEventHideByTimer
struct UNPCStatusWidget_C_TryCallEventHideByTimer_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.BP_HandlePlaylistExtensionWidgetCreated
struct UNPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EUIExtensionSlot                  SlotType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.Construct
struct UNPCStatusWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.OnPawnFocused
struct UNPCStatusWidget_C_OnPawnFocused_Params
{
public:
};

// 0x94 (0x94 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget
struct UNPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FB4[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_CustomEvent_StatusWidgetVisibleDuration;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FB5[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_KeepVisibilityOn;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FB6[0x5];                                     // Fixing Size After Last Property..
	class UUserWidget*                           K2Node_Event_Widget;                               // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EUIExtensionSlot                  K2Node_Event_SlotType;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FB7[0x6];                                     // Fixing Size After Last Property..
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPCStatusWidgetExtensionBase*         K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base; // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FB8[0x7];                                     // Fixing Size After Last Property..
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue;            // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_health;                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_shield;                         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ShowShield;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanNAND_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FB9[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x74(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue_1;      // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FBA[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature
struct UNPCStatusWidget_C_VisibilityChanged__DelegateSignature_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
