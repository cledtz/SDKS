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

// 0x10 (0x10 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor
struct UMoonbeam_PowerRatingWidget_C_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          NewColor;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState
struct UMoonbeam_PowerRatingWidget_C_UpdateWidgetState_Params
{
public:
	bool                                         IsContributingToTeamPowerRating;                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F7D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetBasePowerRating_ReturnValue;           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTeamMembers_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F7E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetBasePowerRating_ReturnValue_1;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTeamMembers_ReturnValue_1;             // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F7F[0x5];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x20(0xC0)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xE0(0xC0)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x1A0(0xC0)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x260(0xC0)()
};

// 0x0 (0x0 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct
struct UMoonbeam_PowerRatingWidget_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated
struct UMoonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated_Params
{
public:
	int32                                        BasePowerRating;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated
struct UMoonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated_Params
{
public:
	int32                                        TeamPowerRating;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated
struct UMoonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated_Params
{
public:
	float                                        BaseRatingProgress;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TeamRatingProgress;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct
struct UMoonbeam_PowerRatingWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged
struct UMoonbeam_PowerRatingWidget_C_OnTeamMembershipChanged_Params
{
public:
};

// 0xE8 (0xE8 - 0x0)
// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget
struct UMoonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTeamMembers_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_BasePowerRating;                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_TeamPowerRating;                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x50)(HasGetValueTypeHash)
	float                                        K2Node_Event_BaseRatingProgress;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_TeamRatingProgress;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ReferenceParm)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)()
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F80[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetBasePowerRating_ReturnValue;           // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamPowerRating_ReturnValue;           // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F81[0x6];                                     // Fixing Size After Last Property..
	class UWidget*                               K2Node_Select_Default_2;                           // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCurrentValue_NewValue_ImplicitCast;    // 0xC8(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_InterpolateToValue_TargetValue_ImplicitCast; // 0xCC(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetProgressBarSectionPercent_Percent_ImplicitCast; // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_InterpolateToValue_MaximumInterpolationDuration_ImplicitCast; // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
