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

// 0x2 (0x2 - 0x0)
// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.HideBackground
struct UWBP_UIKit_Button_Quiet_C_HideBackground_Params
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnPressed
struct UWBP_UIKit_Button_Quiet_C_BP_OnPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnReleased
struct UWBP_UIKit_Button_Quiet_C_BP_OnReleased_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnInputMethodChanged
struct UWBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.PreConstruct
struct UWBP_UIKit_Button_Quiet_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.ExecuteUbergraph_WBP_UIKit_Button_Quiet
struct UWBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPromptHoldable_Holdable;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975D[0x3];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_Event_CurrentInputType;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975E[0x1];                                     // Fixing Size After Last Property..
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975F[0x6];                                     // Fixing Size After Last Property..
	class UMaterialInstance*                     CallFunc_SelectMaterialInstance_ReturnValue;       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPromptHoldable_Holdable_1;              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
