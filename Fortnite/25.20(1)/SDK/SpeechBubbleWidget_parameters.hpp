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

// 0x8 (0x8 - 0x0)
// Function SpeechBubbleWidget.SpeechBubbleWidget_C.InitFromObject
struct USpeechBubbleWidget_C_InitFromObject_Params
{
public:
	class UObject*                               InitObject;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function SpeechBubbleWidget.SpeechBubbleWidget_C.ExecuteUbergraph_SpeechBubbleWidget
struct USpeechBubbleWidget_C_ExecuteUbergraph_SpeechBubbleWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F46[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               K2Node_Event_InitObject;                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F47[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_GetCurrentSentenceSpeechText_ReturnValue; // 0x20(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
