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

// 0x0 (0x0 - 0x0)
// Function GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_ActivateAbility
struct UGA_Riding_Player_IsRiding_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_OnEndAbility
struct UGA_Riding_Player_IsRiding_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.FailedToActivatePassiveAbility
struct UGA_Riding_Player_IsRiding_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x50 (0x50 - 0x0)
// Function GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.ExecuteUbergraph_GA_Riding_Player_IsRiding
struct UGA_Riding_Player_IsRiding_C_ExecuteUbergraph_GA_Riding_Player_IsRiding_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F84[0x2];                                     // Fixing Size After Last Property
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x8(0x48)(ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
