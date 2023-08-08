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

// 0x39 (0x39 - 0x0)
// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.UpdateTextScale
struct UQualityLevelSelectTimer_C_UpdateTextScale_Params
{
public:
	double                                       TimeRemaining;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81AF[0x6];                                     // Fixing Size After Last Property
	double                                       K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressStarted
struct UQualityLevelSelectTimer_C_OnProgressStarted_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressEnded
struct UQualityLevelSelectTimer_C_OnProgressEnded_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnTimeRemainingChanged
struct UQualityLevelSelectTimer_C_OnTimeRemainingChanged_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnInitialized
struct UQualityLevelSelectTimer_C_OnInitialized_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.ExecuteUbergraph_QualityLevelSelectTimer
struct UQualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Duration;                             // 0x4(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_TimeRemaining;                        // 0x8(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81C0[0x4];                                     // Fixing Size After Last Property
	double                                       CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
