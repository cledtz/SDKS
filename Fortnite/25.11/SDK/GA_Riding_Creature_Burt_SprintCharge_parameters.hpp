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
// Function GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_ActivateAbility
struct UGA_Riding_Creature_Burt_SprintCharge_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_OnEndAbility
struct UGA_Riding_Creature_Burt_SprintCharge_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.FailedToActivatePassiveAbility
struct UGA_Riding_Creature_Burt_SprintCharge_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x8A (0x8A - 0x0)
// Function GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge
struct UGA_Riding_Creature_Burt_SprintCharge_C_ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F02[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x8(0x48)(ContainsInstancedReference)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F03[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F04[0x6];                                     // Fixing Size After Last Property..
	class UFortAthenaCollisionReactionComponent* CallFunc_GetComponentByClass_ReturnValue;          // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Run_ReturnValue;                          // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F05[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaCollisionReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1;        // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
