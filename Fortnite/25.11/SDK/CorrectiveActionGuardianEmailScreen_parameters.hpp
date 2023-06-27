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

// 0x18 (0x18 - 0x0)
// Function CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.OnShowFailureReason
struct UCorrectiveActionGuardianEmailScreen_C_OnShowFailureReason_Params
{
public:
	class FText                                  FailureReason;                                     // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.OnShowCorrectiveActionProcessing
struct UCorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing_Params
{
public:
	bool                                         bShowProcessing;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.ExecuteUbergraph_CorrectiveActionGuardianEmailScreen
struct UCorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_997C[0x4];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Event_FailureReason;                        // 0x8(0x18)(ConstParm)
	bool                                         K2Node_Event_bShowProcessing;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_997D[0x7];                                     // Fixing Size After Last Property..
	class UWBP_InputField_C*                     K2Node_DynamicCast_AsWBP_Input_Field;              // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
