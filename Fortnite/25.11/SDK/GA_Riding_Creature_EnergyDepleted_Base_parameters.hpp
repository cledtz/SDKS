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

// 0x0 (0x0 - 0x0)
// Function GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C.K2_ActivateAbility
struct UGA_Riding_Creature_EnergyDepleted_Base_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C.K2_OnEndAbility
struct UGA_Riding_Creature_EnergyDepleted_Base_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C.FailedToActivatePassiveAbility
struct UGA_Riding_Creature_EnergyDepleted_Base_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x69 (0x69 - 0x0)
// Function GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C.ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base
struct UGA_Riding_Creature_EnergyDepleted_Base_C_ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EF9[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EFA[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x10(0x48)(ContainsInstancedReference)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCreatureBaseRidableComponent_C*       CallFunc_GetComponentByClass_ReturnValue;          // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
