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

// 0x148 (0x148 - 0x0)
// Function FortAudioClustersRuntime.GameFeatureAction_AddAudioCluster.HandleRegisteredActorDeath
struct UGameFeatureAction_AddAudioCluster_HandleRegisteredActorDeath_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F19[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               Momentum;                                          // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(Parm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
