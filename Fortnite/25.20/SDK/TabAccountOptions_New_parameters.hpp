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
// Function TabAccountOptions_New.TabAccountOptions_New_C.OnComplete_DB10A9674F5CF800B883C79A4229D87C
struct UTabAccountOptions_New_C_OnComplete_DB10A9674F5CF800B883C79A4229D87C_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TabAccountOptions_New.TabAccountOptions_New_C.OnComplete_1192BA0E41F4707FF3E3A4A4C72B2024
struct UTabAccountOptions_New_C_OnComplete_1192BA0E41F4707FF3E3A4A4C72B2024_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabAccountOptions_New.TabAccountOptions_New_C.CenterOnTab
struct UTabAccountOptions_New_C_CenterOnTab_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function TabAccountOptions_New.TabAccountOptions_New_C.SettingValueChanged
struct UTabAccountOptions_New_C_SettingValueChanged_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function TabAccountOptions_New.TabAccountOptions_New_C.BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature
struct UTabAccountOptions_New_C_BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature_Params
{
public:
	class UFortSetting*                          Setting;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Action;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x85 (0x85 - 0x0)
// Function TabAccountOptions_New.TabAccountOptions_New_C.ExecuteUbergraph_TabAccountOptions_New
struct UTabAccountOptions_New_C_ExecuteUbergraph_TabAccountOptions_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FAB[0x4];                                     // Fixing Size After Last Property..
	class UUserWidget*                           K2Node_CustomEvent_UserWidget_1;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FAC[0x4];                                     // Fixing Size After Last Property..
	class UUserWidget*                           Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FAD[0x4];                                     // Fixing Size After Last Property..
	class UUserWidget*                           K2Node_CustomEvent_UserWidget;                     // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Temp_object_Variable_1;                            // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CreateWidgetAsync*    CallFunc_CreateWidgetAsync_ReturnValue;            // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CreateWidgetAsync*    CallFunc_CreateWidgetAsync_ReturnValue_1;          // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FAE[0x6];                                     // Fixing Size After Last Property..
	double                                       K2Node_CustomEvent_Value;                          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSetting*                          K2Node_ComponentBoundEvent_Setting;                // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_Action;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
