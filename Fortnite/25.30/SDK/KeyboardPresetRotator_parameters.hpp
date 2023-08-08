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

// 0x5 (0x5 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Show Param Name
struct UKeyboardPresetRotator_C_Show_Param_Name_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.OnFocusReceived
struct UKeyboardPresetRotator_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0xF8(0xB8)()
};

// 0x10 (0x10 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Options
struct UKeyboardPresetRotator_C_Update_Options_Params
{
public:
	TArray<class FText>                          NewParam;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Center On Widget
struct UKeyboardPresetRotator_C_Center_On_Widget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Initialize
struct UKeyboardPresetRotator_C_Initialize_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription; // 0x8(0x18)()
	class FText                                  CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription; // 0x20(0x18)()
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_92D4[0x7];                                     // Fixing Size After Last Property
	TArray<class FString>                        CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames; // 0x40(0x10)(ReferenceParm)
	TArray<class FText>                          CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames; // 0x50(0x10)(ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Row Selector
struct UKeyboardPresetRotator_C_Update_Row_Selector_Params
{
public:
	int32                                        Currently_Selected;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Construct
struct UKeyboardPresetRotator_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__KeyboardPresetRotator_ButtonRight_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UKeyboardPresetRotator_C_BndEvt__KeyboardPresetRotator_ButtonRight_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__KeyboardPresetRotator_ButtonLeft_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UKeyboardPresetRotator_C_BndEvt__KeyboardPresetRotator_ButtonLeft_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButtonLegacy*                   Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__KeyboardPresetRotator_TextRotator_K2Node_ComponentBoundEvent_3_OnRotated__DelegateSignature
struct UKeyboardPresetRotator_C_BndEvt__KeyboardPresetRotator_TextRotator_K2Node_ComponentBoundEvent_3_OnRotated__DelegateSignature_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function KeyboardPresetRotator.KeyboardPresetRotator_C.ExecuteUbergraph_KeyboardPresetRotator
struct UKeyboardPresetRotator_C_ExecuteUbergraph_KeyboardPresetRotator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Value;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button_1;               // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription; // 0x18(0x18)()
	class FText                                  CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription; // 0x30(0x18)()
	class UCommonButtonLegacy*                   K2Node_ComponentBoundEvent_Button;                 // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
