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
// Function GA_Interrogate_GC.GA_Interrogate_GC_C.K2_ActivateAbility
struct UGA_Interrogate_GC_C_K2_ActivateAbility_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function GA_Interrogate_GC.GA_Interrogate_GC_C.FailedToActivatePassiveAbility
struct UGA_Interrogate_GC_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x148 (0x148 - 0x0)
// Function GA_Interrogate_GC.GA_Interrogate_GC_C.ExecuteUbergraph_GA_Interrogate_GC
struct UGA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D80[0x3];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_GetGrantedByEffectContext_ReturnValue;    // 0x10(0x18)()
	class UObject*                               CallFunc_EffectContextGetSourceObject_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x30(0xD0)(ContainsInstancedReference)
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x100(0x48)(ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
