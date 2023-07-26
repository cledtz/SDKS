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
// Function StatusWidget.StatusWidget_C.SetContinueButtonText
struct UStatusWidget_C_SetContinueButtonText_Params
{
public:
	class FText                                  ContinueText;                                      // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function StatusWidget.StatusWidget_C.SetQuitButtonText
struct UStatusWidget_C_SetQuitButtonText_Params
{
public:
	class FText                                  QuitText;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x58 (0x58 - 0x0)
// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
struct UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A6[0x4];                                     // Fixing Size After Last Property..
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A7[0x7];                                     // Fixing Size After Last Property..
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button_1;           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A8[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Event_QuitText;                             // 0x28(0x18)(ConstParm)
	class FText                                  K2Node_Event_ContinueText;                         // 0x40(0x18)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
