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

// 0x28 (0x28 - 0x0)
// Function MTXButton.MTXButton_C.GetHoverAnimation
struct UMTXButton_C_GetHoverAnimation_Params
{
public:
	class UWidgetAnimation*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8898[0x7];                                     // Fixing Size After Last Property..
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8899[0x6];                                     // Fixing Size After Last Property..
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MTXButton.MTXButton_C.Construct
struct UMTXButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MTXButton.MTXButton_C.BP_OnHovered
struct UMTXButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MTXButton.MTXButton_C.BP_OnUnhovered
struct UMTXButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MTXButton.MTXButton_C.BP_OnPressed
struct UMTXButton_C_BP_OnPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MTXButton.MTXButton_C.BP_OnReleased
struct UMTXButton_C_BP_OnReleased_Params
{
public:
};

// 0xA4 (0xA4 - 0x0)
// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
struct UMTXButton_C_ExecuteUbergraph_MTXButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_889A[0x4];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_889B[0x7];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable_1;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_2;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_3;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_889C[0x7];                                     // Fixing Size After Last Property..
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue_1;               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_889D[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_889E[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     CallFunc_SelectMaterialInstance_ReturnValue;       // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_889F[0x7];                                     // Fixing Size After Last Property..
	class UWidgetAnimation*                      CallFunc_GetHoverAnimation_ReturnValue;            // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_1;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CallFunc_GetHoverAnimation_ReturnValue_1;          // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue_1;               // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue_2;               // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue_3;               // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast; // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
