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

// 0x1 (0x1 - 0x0)
// Function PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.UpdateGamepadControlsVisibility
struct UPlayerSurveyHorizontalIndicator_C_UpdateGamepadControlsVisibility_Params
{
public:
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UPlayerSurveyHorizontalIndicator_C_BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.ExecuteUbergraph_PlayerSurveyHorizontalIndicator
struct UPlayerSurveyHorizontalIndicator_C_ExecuteUbergraph_PlayerSurveyHorizontalIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
