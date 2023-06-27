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

// 0x1E8 (0x1E8 - 0x0)
// Function GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C.OnBurstNiagara
struct UGCN_Irwin_PlayerInteraction_Untamed_C_OnBurstNiagara_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UNiagaraComponent*>             ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_Array_Get_Item;                           // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_BreakGameplayCueParameters_EffectContext; // 0x118(0x18)()
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x130(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x134(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x138(0x20)()
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x158(0x20)()
	struct FVector                               CallFunc_BreakGameplayCueParameters_Location;      // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakGameplayCueParameters_Normal;        // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_Instigator;    // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9DC2[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
