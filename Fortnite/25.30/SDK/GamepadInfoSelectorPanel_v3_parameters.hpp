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

// 0x10 (0x10 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_GetDesiredFocusTarget
struct UGamepadInfoSelectorPanel_v3_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   CallFunc_GetSelectedButton_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleReset
struct UGamepadInfoSelectorPanel_v3_C_HandleReset_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleApply
struct UGamepadInfoSelectorPanel_v3_C_HandleApply_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleBack
struct UGamepadInfoSelectorPanel_v3_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnDeactivated
struct UGamepadInfoSelectorPanel_v3_C_BP_OnDeactivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnAddedToFocusPath
struct UGamepadInfoSelectorPanel_v3_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnActivated
struct UGamepadInfoSelectorPanel_v3_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x39 (0x39 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.ExecuteUbergraph_GamepadInfoSelectorPanel_v3
struct UGamepadInfoSelectorPanel_v3_C_ExecuteUbergraph_GamepadInfoSelectorPanel_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInSubGame_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F6[0x3];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue;        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue_1;      // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F8[0x2];                                     // Fixing Size After Last Property
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x30(0x8)(NoDestructor)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue_2;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorFocus__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorFocus__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorReset__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorReset__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorApply__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorApply__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorBack__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorBack__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
