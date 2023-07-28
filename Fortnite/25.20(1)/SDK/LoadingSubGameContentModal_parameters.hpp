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

// 0x4 (0x4 - 0x0)
// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
struct ULoadingSubGameContentModal_C_OnUpdatedProgress_Params
{
public:
	float                                        Percent;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized
struct ULoadingSubGameContentModal_C_OnInitialized_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText
struct ULoadingSubGameContentModal_C_SetCancelButtonText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated
struct ULoadingSubGameContentModal_C_BP_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished
struct ULoadingSubGameContentModal_C_OnAnimationFinished_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
struct ULoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DF7[0x4];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Event_InText;                               // 0x8(0x18)(ConstParm)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DF8[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Percent;                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DF9[0x4];                                     // Fixing Size After Last Property..
	class UWidgetAnimation*                      K2Node_Event_Animation;                            // 0x40(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_AsPercent_Float_ReturnValue;              // 0x48(0x18)()
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DFA[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
