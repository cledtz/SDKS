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

// 0x2AC (0x2AC - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonUp
struct UPrimarySkewButton_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	double                                       Temp_real_Variable;                                // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99DF[0x7];                                     // Fixing Size After Last Property..
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x178(0xB8)()
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetStartTime_ReturnValue;                 // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue_1;             // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E0[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E1[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_StartAtTime_ImplicitCast;   // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E2[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2AC (0x2AC - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonDown
struct UPrimarySkewButton_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	double                                       Temp_real_Variable;                                // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E3[0x7];                                     // Fixing Size After Last Property..
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x178(0xB8)()
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetStartTime_ReturnValue;                 // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue_1;             // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E4[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E5[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_StartAtTime_ImplicitCast;   // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E6[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.Construct
struct UPrimarySkewButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.BP_OnHovered
struct UPrimarySkewButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.BP_OnUnhovered
struct UPrimarySkewButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.BP_OnClicked
struct UPrimarySkewButton_C_BP_OnClicked_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UPrimarySkewButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.PreConstruct
struct UPrimarySkewButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x268 (0x268 - 0x0)
// Function PrimarySkewButton.PrimarySkewButton_C.ExecuteUbergraph_PrimarySkewButton
struct UPrimarySkewButton_C_ExecuteUbergraph_PrimarySkewButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x10(0x58)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0x68(0x58)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E7[0x7];                                     // Fixing Size After Last Property..
	struct FSlateFontInfo                        K2Node_Select_Default;                             // 0xC8(0x58)(HasGetValueTypeHash)
	float                                        CallFunc_GetStartTime_ReturnValue;                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetStartTime_ReturnValue_1;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue_1;                 // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue_1;             // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E8[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue_2;             // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E9[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_1;                           // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99EA[0x7];                                     // Fixing Size After Last Property..
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue_3;             // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99EB[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99EC[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x1A8(0x18)()
	double                                       Temp_real_Variable_1;                              // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_2;                           // 0x1C8(0x18)()
	double                                       K2Node_Select_Default_3;                           // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_4;              // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast_1;        // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_B_ImplicitCast_1;  // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;   // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_StartAtTime_ImplicitCast;   // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99ED[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;   // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99EE[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3; // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
