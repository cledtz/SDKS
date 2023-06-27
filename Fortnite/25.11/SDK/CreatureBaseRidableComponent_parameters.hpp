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

// 0x11 (0x11 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingInfoFromTarget
struct UCreatureBaseRidableComponent_C_GetRidingInfoFromTarget_Params
{
public:
	double                                       JumpAttachGroundHeightMin;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JumpAttachGroundHeightBuffer;                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsesAltRidingMessage;                              // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_LandTimeStamp
struct UCreatureBaseRidableComponent_C_JumpFatigue_LandTimeStamp_Params
{
public:
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_CheckApplyFatigue
struct UCreatureBaseRidableComponent_C_JumpFatigue_CheckApplyFatigue_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8977[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetValueAsInteger_ReturnValue;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8978[0x1];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue; // 0x1C(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_CountJumps
struct UCreatureBaseRidableComponent_C_JumpFatigue_CountJumps_Params
{
public:
	int32                                        CallFunc_GetActiveGameplayEffectStackCount_ReturnValue; // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8979[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_897A[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_897B[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_897C[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_897D[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_RemoveFatigue
struct UCreatureBaseRidableComponent_C_JumpFatigue_RemoveFatigue_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_Landed
struct UCreatureBaseRidableComponent_C_JumpFatigue_Landed_Params
{
public:
	int32                                        CallFunc_GetActiveGameplayEffectStackCount_ReturnValue; // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_897E[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Should Convert Jump Exit to Jump
struct UCreatureBaseRidableComponent_C_Should_Convert_Jump_Exit_to_Jump_Params
{
public:
	bool                                         Out;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_897F[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8980[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldBufferJumpExitToRetryJump
struct UCreatureBaseRidableComponent_C_ShouldBufferJumpExitToRetryJump_Params
{
public:
	bool                                         Output;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8981[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8982[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8983[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x58(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8984[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector_X;                            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8985[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_SphereTraceSingle_OutHit;                 // 0xC0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SphereTraceSingle_ReturnValue;            // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8986[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast; // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetInfiniteStaminaBuff
struct UCreatureBaseRidableComponent_C_SetInfiniteStaminaBuff_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8987[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x10(0xD0)(ContainsInstancedReference)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0xE0(0xD0)(ContainsInstancedReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanBePet
struct UCreatureBaseRidableComponent_C_CanBePet_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8988[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8989[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue;            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_898A[0x6];                                     // Fixing Size After Last Property..
	class UControllingRiderComponent*            K2Node_DynamicCast_AsControlling_Rider_Component;  // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTryingToMove_ReturnValue;               // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBePet_ReturnValue;                     // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_898B[0x2];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanJumpExit
struct UCreatureBaseRidableComponent_C_CanJumpExit_Params
{
public:
	bool                                         CanJumpExit;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_898C[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        JumpExitDurationThreshold;                         // 0x8(0x28)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_898D[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_898E[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_898F[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateLootAnimalGlow
struct UCreatureBaseRidableComponent_C_UpdateLootAnimalGlow_Params
{
public:
	double                                       Scale;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8990[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x10(0x20)()
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             CallFunc_GetComponentsByTag_ReturnValue;           // 0x38(0x10)(ReferenceParm, ContainsInstancedReference)
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8991[0x7];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8992[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_currentEnergyValue
struct UCreatureBaseRidableComponent_C_OnRep_currentEnergyValue_Params
{
public:
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAB (0xAB - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Propagate Immunity Fall Damage
struct UCreatureBaseRidableComponent_C_Propagate_Immunity_Fall_Damage_Params
{
public:
	struct FScalableFloat                        CanProbagateImmunityFallDanage;                    // 0x0(0x28)(Edit, BlueprintVisible)
	class AActor*                                RiderActor;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<TSubclassOf<class UGameplayEffect>>   GE_ImmunityFallDamage;                             // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<TSubclassOf<class UGameplayEffect>>   K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8993[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8994[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8995[0x6];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanRiderPlayEmote
struct UCreatureBaseRidableComponent_C_CanRiderPlayEmote_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleEnemyFoleySoundLibrary
struct UCreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary_Params
{
public:
	class UActorComponent*                       Rider;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsRiding;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8996[0x7];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeamAffiliation              CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue; // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_MaxFootstepDistance_ImplicitCast; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnMovementModeChanged
struct UCreatureBaseRidableComponent_C_OnMovementModeChanged_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8997[0x6];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8998[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.IsSwimming
struct UCreatureBaseRidableComponent_C_IsSwimming_Params
{
public:
	bool                                         IsSwimming;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8999[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.StopSprinting
struct UCreatureBaseRidableComponent_C_StopSprinting_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_899A[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_899B[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RemoveGEByTag
struct UCreatureBaseRidableComponent_C_RemoveGEByTag_Params
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyGEToSelf
struct UCreatureBaseRidableComponent_C_ApplyGEToSelf_Params
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsValidClass;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_899C[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_899D[0x7];                                     // Fixing Size After Last Property..
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue; // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.KickRiderOffSelf
struct UCreatureBaseRidableComponent_C_KickRiderOffSelf_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ToggleRiding_bChangedRiding;              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.DetermineRateOfChange
struct UCreatureBaseRidableComponent_C_DetermineRateOfChange_Params
{
public:
	double                                       RateOfChange;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSprinting_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_899E[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EvaluateCurveTableRow_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_899F[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY_1;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EvaluateCurveTableRow_ReturnValue_1;      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingRidden_ReturnValue;                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A0[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetLastUpdateVelocity_ReturnValue;        // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A1[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_FunctionResult_RateOfChange_ImplicitCast;   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_RateOfChange_ImplicitCast_1; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CommitEnergyCosts
struct UCreatureBaseRidableComponent_C_CommitEnergyCosts_Params
{
public:
	bool                                         RequireAllEnergy;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A2[0x7];                                     // Fixing Size After Last Property..
	double                                       EnergyCost;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F (0x1F - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TestThreshold
struct UCreatureBaseRidableComponent_C_TestThreshold_Params
{
public:
	bool                                         IsDecaying;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A3[0x7];                                     // Fixing Size After Last Property..
	double                                       CurrentValue;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TestTreshold;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviousState;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CrossedThreshold;                                  // 0x19(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetWildlifeHealth
struct UCreatureBaseRidableComponent_C_SetWildlifeHealth_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A4[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A5[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateValue
struct UCreatureBaseRidableComponent_C_UpdateValue_Params
{
public:
	double                                       TargetValue;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RateOfChange;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       UpdatedValue;                                      // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnergyDepleted;                                    // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A6[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x67 (0x67 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRiding
struct UCreatureBaseRidableComponent_C_ToggleRiding_Params
{
public:
	class AActor*                                PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldRide;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bChangedRiding;                                    // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A7[0x6];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A8[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1; // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89A9[0x7];                                     // Fixing Size After Last Property..
	class URiderComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StopRidingActor_ReturnValue;              // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StartRidingActor_ReturnValue;             // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89AA[0x5];                                     // Fixing Size After Last Property..
	class UControllingRiderComponent*            K2Node_DynamicCast_AsControlling_Rider_Component;  // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1; // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RestoreCollisionResponses
struct UCreatureBaseRidableComponent_C_RestoreCollisionResponses_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89AB[0x4];                                     // Fixing Size After Last Property..
	TArray<enum class ECollisionChannel>         CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionChannel                 CallFunc_Array_Get_Item;                           // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89AC[0x2];                                     // Fixing Size After Last Property..
	TArray<enum class ECollisionChannel>         K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
	enum class ECollisionResponse                CallFunc_Map_Find_Value;                           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyCollisionResponse
struct UCreatureBaseRidableComponent_C_ApplyCollisionResponse_Params
{
public:
	TArray<enum class ECollisionChannel>         Channels;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ECollisionResponse                Response;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89AD[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionChannel                 CallFunc_Array_Get_Item;                           // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89AE[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89AF[0x6];                                     // Fixing Size After Last Property..
	class UCapsuleComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionResponse                CallFunc_GetCollisionResponseToChannel_ReturnValue; // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldCameraFocusOnRidable
struct UCreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateAnimInputBool
struct UCreatureBaseRidableComponent_C_UpdateAnimInputBool_Params
{
public:
	class AFortPawn*                             FortPawn;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBeingRidden;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B0[0x7];                                     // Fixing Size After Last Property..
	class UFortAnimInputEvent_Bool*              CallFunc_CreateAnimInputEvent_Bool_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderCapsuleSize
struct UCreatureBaseRidableComponent_C_GetRiderCapsuleSize_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       RiderCapsuleRadius;                                // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RiderCapsuleHH;                                    // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B1[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B2[0x7];                                     // Fixing Size After Last Property..
	class UCapsuleComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetUnscaledCapsuleSize_OutRadius;         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetUnscaledCapsuleSize_OutHalfHeight;     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_RiderCapsuleRadius_ImplicitCast; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_RiderCapsuleHH_ImplicitCast; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingEmoteCapsuleSize
struct UCreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        OriginalRadius;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OriginalHalfHeight;                                // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutRadius;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutHalfHeight;                                     // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRidingCapsuleSize_OutRadius;           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRidingCapsuleSize_OutHalfHeight;       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_OutRadius_ImplicitCast;      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_OutHalfHeight_ImplicitCast;  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingCapsuleSize
struct UCreatureBaseRidableComponent_C_GetRidingCapsuleSize_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        OriginalRadius;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OriginalHalfHeight;                                // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutRadius;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutHalfHeight;                                     // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetRiderCapsuleSize_RiderCapsuleRadius;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetRiderCapsuleSize_RiderCapsuleHH;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_OutRadius_ImplicitCast;      // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_OutHalfHeight_ImplicitCast;  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_IdleAnim_Add
struct UCreatureBaseRidableComponent_C_OnRep_IdleAnim_Add_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldSetAsViewTarget
struct UCreatureBaseRidableComponent_C_ShouldSetAsViewTarget_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderLocation
struct UCreatureBaseRidableComponent_C_GetRiderLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B3[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_AD51144144164FD235EE5BA4F6E87456
struct UCreatureBaseRidableComponent_C_Removed_AD51144144164FD235EE5BA4F6E87456_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Added_FBD936634BCC61A726DA279226E2F4BE
struct UCreatureBaseRidableComponent_C_Added_FBD936634BCC61A726DA279226E2F4BE_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_C4C6E29B4217C014B9DE0E80B7134D6E
struct UCreatureBaseRidableComponent_C_Removed_C4C6E29B4217C014B9DE0E80B7134D6E_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRidingAlternative
struct UCreatureBaseRidableComponent_C_ToggleRidingAlternative_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveBeginPlay
struct UCreatureBaseRidableComponent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStartedRiding
struct UCreatureBaseRidableComponent_C_HandleRiderStartedRiding_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStoppedRiding
struct UCreatureBaseRidableComponent_C_HandleRiderStoppedRiding_Params
{
public:
	class URiderComponent*                       Rider;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateDebug
struct UCreatureBaseRidableComponent_C_UpdateDebug_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityHeld
struct UCreatureBaseRidableComponent_C_HandleAbilityHeld_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStarted
struct UCreatureBaseRidableComponent_C_HandleAbilityStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStopped
struct UCreatureBaseRidableComponent_C_HandleAbilityStopped_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStarted
struct UCreatureBaseRidableComponent_C_HandleJumpStarted_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumping
struct UCreatureBaseRidableComponent_C_OnJumping_Params
{
public:
	double                                       JumpPitchInterpSpeed;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumpingApex
struct UCreatureBaseRidableComponent_C_OnJumpingApex_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.NPCPawnInteractWithDispatcher_Event_0
struct UCreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0_Params
{
public:
	class AActor*                                AIPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       InteractingPlayerPawn;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStart
struct UCreatureBaseRidableComponent_C_EnergyTrackingStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStop
struct UCreatureBaseRidableComponent_C_EnergyTrackingStop_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveEndPlay
struct UCreatureBaseRidableComponent_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateEnergy
struct UCreatureBaseRidableComponent_C_UpdateEnergy_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ConvertedDispatcher_Event_0
struct UCreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0_Params
{
public:
	bool                                         Converted;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B4[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             InstigatorPawn;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnPawnHealthChanged_Event_0
struct UCreatureBaseRidableComponent_C_OnPawnHealthChanged_Event_0_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UseEnergyAmountServer
struct UCreatureBaseRidableComponent_C_UseEnergyAmountServer_Params
{
public:
	double                                       EnergyCost;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleCancelSprint
struct UCreatureBaseRidableComponent_C_HandleCancelSprint_Params
{
public:
	bool                                         bAbilityInputHeld;                                 // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bForceCancel;                                      // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CheatSetStaminaPercent
struct UCreatureBaseRidableComponent_C_CheatSetStaminaPercent_Params
{
public:
	float                                        StaminaPercent;                                    // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyUpdate
struct UCreatureBaseRidableComponent_C_OnEnergyUpdate_Params
{
public:
	double                                       Energy;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWarningActive;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyDepletedClient
struct UCreatureBaseRidableComponent_C_OnEnergyDepletedClient_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnSprintStarted
struct UCreatureBaseRidableComponent_C_OnSprintStarted_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEatToRefuel
struct UCreatureBaseRidableComponent_C_OnEatToRefuel_Params
{
public:
	double                                       EnergyCost;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReTryJumpExit
struct UCreatureBaseRidableComponent_C_ReTryJumpExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ManualEnergyDepleted
struct UCreatureBaseRidableComponent_C_ManualEnergyDepleted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Stopped Riding
struct UCreatureBaseRidableComponent_C_Check_Regen_on_Stopped_Riding_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Started Riding
struct UCreatureBaseRidableComponent_C_Check_Regen_on_Started_Riding_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Activate Regen
struct UCreatureBaseRidableComponent_C_Activate_Regen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Deactivate Regen
struct UCreatureBaseRidableComponent_C_Deactivate_Regen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStopped
struct UCreatureBaseRidableComponent_C_HandleJumpStopped_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteBufferedJumpExit
struct UCreatureBaseRidableComponent_C_ExecuteBufferedJumpExit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CancelJumpExitAndJump
struct UCreatureBaseRidableComponent_C_CancelJumpExitAndJump_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.MountLandedClient
struct UCreatureBaseRidableComponent_C_MountLandedClient_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TryConvertBufferedJumpExitToJump
struct UCreatureBaseRidableComponent_C_TryConvertBufferedJumpExitToJump_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.MountLandedServer_JumpFatigue
struct UCreatureBaseRidableComponent_C_MountLandedServer_JumpFatigue_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x7C8 (0x7C8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteUbergraph_CreatureBaseRidableComponent
struct UCreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B5[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B6[0x5];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B7[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetRiderLocation_Location;                // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Vector_IsZero_ReturnValue;                // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B8[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize2D_ReturnValue;                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89B9[0x5];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89BA[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_4;                   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_4;               // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89BB[0x5];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_5;                   // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89BC[0x7];                                     // Fixing Size After Last Property..
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89BD[0x7];                                     // Fixing Size After Last Property..
	TArray<enum class ECollisionChannel>         K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
	class AActor*                                CallFunc_GetOwner_ReturnValue_6;                   // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89BE[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89BF[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_CustomEvent_JumpPitchInterpSpeed;           // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_7;                   // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xF8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C0[0x4];                                     // Fixing Size After Last Property..
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn_1;                // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C1[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_8;                   // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C2[0x7];                                     // Fixing Size After Last Property..
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn_2;                // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C3[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_CustomEvent_AIPawn;                         // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_InteractingPlayerPawn;          // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_9;                   // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ToggleRiding_bChangedRiding;              // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C4[0x7];                                     // Fixing Size After Last Property..
	class ANPC_Pawn_Wildlife_Parent_C*           K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;     // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C5[0x7];                                     // Fixing Size After Last Property..
	class ANPC_Pawn_Parent_C*                    K2Node_DynamicCast_AsNPC_Pawn_Parent;              // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C6[0x7];                                     // Fixing Size After Last Property..
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn_3;                // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_UpdateInteract_EnabledInteract;       // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x183(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Converted;                      // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C7[0x3];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_CustomEvent_InstigatorPawn;                 // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x190(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C8[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingRidden_ReturnValue;                // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89C9[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1B4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingRidden_ReturnValue_1;              // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TestThreshold_crossedThreshold;           // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingRidden_ReturnValue_2;              // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingRidden_ReturnValue_3;              // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TestThreshold_crossedThreshold_1;         // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingRidden_ReturnValue_4;              // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89CA[0x2];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_EnergyCost_1;                   // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89CB[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_DetermineRateOfChange_RateOfChange;       // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89CC[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_UpdateValue_updatedValue;                 // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateValue_energyDepleted;               // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89CD[0x4];                                     // Fixing Size After Last Property..
	class URiderComponent*                       K2Node_Event_Rider;                                // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class URiderComponent*                       K2Node_Event_Rider_1;                              // 0x210(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ApplyGEToSelf_isValidClass;               // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ApplyGEToSelf_isValidClass_1;             // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ApplyGEToSelf_isValidClass_2;             // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89CE[0x3];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_10;                  // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89CF[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D0[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_11;                  // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bAbilityInputHeld;                    // 0x249(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bForceCancel;                         // 0x24A(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x24B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSwimming_IsSwimming;                    // 0x24D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x24E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D1[0x1];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x250(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x25D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D2[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBeingRidden_ReturnValue_5;              // 0x265(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue_1;      // 0x266(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D3[0x1];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_12;                  // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANPC_Pawn_Parent_C*                    K2Node_DynamicCast_AsNPC_Pawn_Parent_1;            // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D4[0x7];                                     // Fixing Size After Last Property..
	class ANPC_Pawn_Parent_C*                    K2Node_DynamicCast_AsNPC_Pawn_Parent_2;            // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_UpdateInteract_EnabledInteract_1;     // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_CanBeInteractedWith_CanInteract;      // 0x28A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D5[0x5];                                     // Fixing Size After Last Property..
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x290(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NPC_UpdateInteract_EnabledInteract_2;     // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D6[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue; // 0x29C(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D7[0x4];                                     // Fixing Size After Last Property..
	class UPlayerRiderComponent_C*               K2Node_DynamicCast_AsPlayer_Rider_Component;       // 0x2B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D8[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_13;                  // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayTagRemoved*  CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue; // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSprintToggleable_ReturnValue;           // 0x2D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSprintToggleable_ReturnValue_1;         // 0x2D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x2D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSprintToggleable_ReturnValue_2;         // 0x2D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x2D7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x2D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSprintToggleable_ReturnValue_3;         // 0x2EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D9[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_StaminaPercent;                       // 0x2F0(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89DA[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_CustomEvent_Energy;                         // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWarningActive;                 // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89DB[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x304(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89DC[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_14;                  // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89DD[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89DE[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_CustomEvent_EnergyCost;                     // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_15;                  // 0x340(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_16;                  // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_5;               // 0x352(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_6;               // 0x353(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89DF[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_17;                  // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_7;               // 0x362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E0[0x1];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x364(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x370(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x37C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanJumpExit_CanJumpExit;                  // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0x389(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x38A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x38B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanStartSprinting_ReturnValue;            // 0x38C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanStartSprinting_ReturnValue_1;          // 0x38D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ApplyGEToSelf_isValidClass_3;             // 0x38E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x38F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x390(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_EvaluateCurveTableRow_OutXY_1;            // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EvaluateCurveTableRow_ReturnValue;        // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x3A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x3A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E1[0x5];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_18;                  // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E2[0x7];                                     // Fixing Size After Last Property..
	class UAbilityAsync_WaitGameplayTagAdded*    CallFunc_WaitGameplayTagAddToActor_ReturnValue;    // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E3[0x7];                                     // Fixing Size After Last Property..
	class UAbilityAsync_WaitGameplayTagRemoved*  CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1; // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E4[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x3D4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult_1;        // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E5[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY_2;            // 0x3E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x3E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E6[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_19;                  // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldBufferJumpExitToRetryJump_Output;   // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E7[0x7];                                     // Fixing Size After Last Property..
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn_4;                // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E8[0x7];                                     // Fixing Size After Last Property..
	struct FHitResult                            K2Node_CustomEvent_Hit_1;                          // 0x410(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x4F0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89E9[0x3];                                     // Fixing Size After Last Property..
	TSubclassOf<class UGameplayEffect>           K2Node_Select_Default;                             // 0x500(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue_1; // 0x508(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Should_Convert_Jump_Exit_to_Jump_Out;     // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89EA[0x7];                                     // Fixing Size After Last Property..
	struct FCurveTableRowHandle                  K2Node_MakeStruct_CurveTableRowHandle;             // 0x518(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        K2Node_MakeStruct_ScalableFloat;                   // 0x528(0x28)()
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89EB[0x4];                                     // Fixing Size After Last Property..
	struct FCurveTableRowHandle                  K2Node_MakeStruct_CurveTableRowHandle_1;           // 0x558(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        K2Node_MakeStruct_ScalableFloat_1;                 // 0x568(0x28)()
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue_1; // 0x590(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x598(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89EC[0x4];                                     // Fixing Size After Last Property..
	struct FHitResult                            K2Node_CustomEvent_Hit;                            // 0x5A0(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_ShouldBufferJumpExitToRetryJump_Output_1; // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x681(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_27;                   // 0x682(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue_1;             // 0x683(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue_2;             // 0x684(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89ED[0x3];                                     // Fixing Size After Last Property..
	struct FRidingPettingData                    CallFunc_GetPettingData_ReturnValue;               // 0x688(0x110)(ConstParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89EE[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableSet_currentEnergyValue_ImplicitCast; // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentEnergyRateOfRecharge_ImplicitCast; // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast;  // 0x7B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_UpdateLootAnimalGlow_Scale_ImplicitCast_1; // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIUpdateEnergy__DelegateSignature
struct UCreatureBaseRidableComponent_C_RidableUIUpdateEnergy__DelegateSignature_Params
{
public:
	double                                       Energy;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsResting;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIStart__DelegateSignature
struct UCreatureBaseRidableComponent_C_RidableUIStart__DelegateSignature_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                        Pad_89EF[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           Icon;                                              // 0x20(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJumpApex__DelegateSignature
struct UCreatureBaseRidableComponent_C_AudioOnJumpApex__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJump__DelegateSignature
struct UCreatureBaseRidableComponent_C_AudioOnJump__DelegateSignature_Params
{
public:
	double                                       JumpPitchInterpSpeed;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
