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

// 0x18 (0x18 - 0x0)
// Function CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowFailureReason
struct UCorrectiveActionDisplayNameScreen_C_OnShowFailureReason_Params
{
public:
	class FText                                  FailureReason;                                     // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowCorrectiveActionProcessing
struct UCorrectiveActionDisplayNameScreen_C_OnShowCorrectiveActionProcessing_Params
{
public:
	bool                                         bShowProcessing;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowDisplayNameDownloading
struct UCorrectiveActionDisplayNameScreen_C_OnShowDisplayNameDownloading_Params
{
public:
	bool                                         bShowDownloading;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.ExecuteUbergraph_CorrectiveActionDisplayNameScreen
struct UCorrectiveActionDisplayNameScreen_C_ExecuteUbergraph_CorrectiveActionDisplayNameScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12AF[0x1];                                     // Fixing Size After Last Property
	class FText                                  K2Node_Event_FailureReason;                        // 0x8(0x18)(ConstParm)
	bool                                         K2Node_Event_bShowProcessing;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowDownloading;                     // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
