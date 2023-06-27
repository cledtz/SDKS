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
// Function GCN_CollisionEffects_Water_GiantBeachBall.GCN_CollisionEffects_Water_GiantBeachBall_C.OnBurst
struct UGCN_CollisionEffects_Water_GiantBeachBall_C_OnBurst_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_BreakGameplayCueParameters_EffectContext; // 0x110(0x18)()
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x128(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x12C(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x130(0x20)()
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x150(0x20)()
	struct FVector                               CallFunc_BreakGameplayCueParameters_Location;      // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakGameplayCueParameters_Normal;        // 0x188(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_Instigator;    // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FA5[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetObjectSizeParam_Size;                  // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        CallFunc_Array_Get_Item;                           // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_SpawnFXAtLocation_ReturnValue;            // 0x1E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function GCN_CollisionEffects_Water_GiantBeachBall.GCN_CollisionEffects_Water_GiantBeachBall_C.GetObjectSizeParam
struct UGCN_CollisionEffects_Water_GiantBeachBall_C_GetObjectSizeParam_Params
{
public:
	class AActor*                                PhysicsObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Size;                                              // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPhysicsSimSize               Temp_byte_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPhysicsSimSize               CallFunc_GetPhysicsObjectSimSize_ReturnValue;      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FA6[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_6;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_7;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
