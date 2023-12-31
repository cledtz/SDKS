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
// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowFailureReason
struct UCorrectiveActionDateOfBirthScreen_C_OnShowFailureReason_Params
{
public:
	class FText                                  FailureReason;                                     // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowCorrectiveActionProcessing
struct UCorrectiveActionDateOfBirthScreen_C_OnShowCorrectiveActionProcessing_Params
{
public:
	bool                                         bShowProcessing;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.ExecuteUbergraph_CorrectiveActionDateOfBirthScreen
struct UCorrectiveActionDateOfBirthScreen_C_ExecuteUbergraph_CorrectiveActionDateOfBirthScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_540B[0x4];                                     // Fixing Size After Last Property
	class UWBP_InputField_C*                     K2Node_DynamicCast_AsWBP_Input_Field;              // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowProcessing;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_540C[0x6];                                     // Fixing Size After Last Property
	class FText                                  K2Node_Event_FailureReason;                        // 0x18(0x18)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
