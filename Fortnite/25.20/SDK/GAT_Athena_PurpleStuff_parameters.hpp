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
// Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.K2_ActivateAbility
struct UGAT_Athena_PurpleStuff_C_K2_ActivateAbility_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.ExecuteUbergraph_GAT_Athena_PurpleStuff
struct UGAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3783[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x8(0x48)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3784[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x60(0x28)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x88(0x10)(ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
