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
// Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.FadePPVol__FinishedFunc
struct AGCNL_Vent_Enter_C_FadePPVol__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.FadePPVol__UpdateFunc
struct AGCNL_Vent_Enter_C_FadePPVol__UpdateFunc_Params
{
public:
};

// 0xF8 (0xF8 - 0x0)
// Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.OnLoopingStart
struct AGCNL_Vent_Enter_C_OnLoopingStart_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x108 (0x108 - 0x0)
// Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.OnRemoval
struct AGCNL_Vent_Enter_C_OnRemoval_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x330 (0x330 - 0x0)
// Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.ExecuteUbergraph_GCNL_Vent_Enter
struct AGCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_877B[0x3];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget_1;                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters_1;                         // 0x10(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      K2Node_Event_ParticleComponents_1;                 // 0xE0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents_1;                    // 0xF0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                K2Node_Event_MyTarget;                             // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x108(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      K2Node_Event_ParticleComponents;                   // 0x1D8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x1E8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          CallFunc_BreakGameplayCueParameters_EffectContext; // 0x210(0x18)()
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x228(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x22C(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x230(0x20)()
	struct FGameplayTagContainer                 CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x250(0x20)()
	struct FVector                               CallFunc_BreakGameplayCueParameters_Location;      // 0x270(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakGameplayCueParameters_Normal;        // 0x288(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_Instigator;    // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x2C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_877C[0x7];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_877D[0x6];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x2E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_877E[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller;            // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_877F[0x7];                                     // Fixing Size After Last Property..
	class UCameraShakeBase*                      CallFunc_StartCameraShake_ReturnValue;             // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCameraShakeBase*                      CallFunc_StartCameraShake_ReturnValue_1;           // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULegacyCameraShake*                    CallFunc_Conv_LegacyCameraShake_ReturnValue;       // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
