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

// 0xAC (0xAC - 0x0)
// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.Highlight Lerp
struct AGCN_Loop_GhostMode_C_Highlight_Lerp_Params
{
public:
	double                                       Alpha;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        Highlight;                                         // 0x8(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue_1;            // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPawnHighlight                        K2Node_MakeStruct_PawnHighlight;                   // 0x68(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast; // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast; // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc
struct AGCN_Loop_GhostMode_C_FadeMaterialsTL__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc
struct AGCN_Loop_GhostMode_C_FadeMaterialsTL__UpdateFunc_Params
{
public:
};

// 0xF8 (0xF8 - 0x0)
// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart
struct AGCN_Loop_GhostMode_C_OnLoopingStart_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x108 (0x108 - 0x0)
// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval
struct AGCN_Loop_GhostMode_C_OnRemoval_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>      ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn
struct AGCN_Loop_GhostMode_C_FadeMaterialsIn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut
struct AGCN_Loop_GhostMode_C_FadeMaterialsOut_Params
{
public:
};

// 0x398 (0x398 - 0x0)
// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode
struct AGCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C53[0x4];                                     // Fixing Size After Last Property..
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
	uint8                                        Pad_9C54[0x7];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x2D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x2E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C55[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsPawn_Highlight_Interface;     // 0x2F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C56[0x2];                                     // Fixing Size After Last Property..
	struct FPawnHighlight                        CallFunc_Highlight_Lerp_Highlight;                 // 0x304(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C57[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x338(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x340(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x34A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C58[0x1];                                     // Fixing Size After Last Property..
	struct FPawnHighlight                        CallFunc_Highlight_Lerp_Highlight_1;               // 0x34C(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C59[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C5A[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Highlight_Lerp_Alpha_ImplicitCast;        // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
