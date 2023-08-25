#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.OnAddedToFocusPath
struct UPlayerSurveyRatingResponse_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.OnResponsesSet_BP
struct UPlayerSurveyRatingResponse_C_OnResponsesSet_BP_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.ExecuteUbergraph_PlayerSurveyRatingResponse
struct UPlayerSurveyRatingResponse_C_ExecuteUbergraph_PlayerSurveyRatingResponse_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x4(0x8)(NoDestructor)
	int32                                        CallFunc_GetNumEntries_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F8F[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


