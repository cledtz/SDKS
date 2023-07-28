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

// 0x20 (0x20 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetAffiliationsToShowFor
struct UB_Athena_Zipline_Ascender_C_GetAffiliationsToShowFor_Params
{
public:
	TArray<enum class EFortTeamAffiliation>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<enum class EFortTeamAffiliation>      K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
};

// 0xC (0xC - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldShowSoundIndicator
struct UB_Athena_Zipline_Ascender_C_ShouldShowSoundIndicator_Params
{
public:
	class UFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortTeamAffiliation              CallFunc_GetTeamAffiliation_ReturnValue;           // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetDynamicDestructionResourceType
struct UB_Athena_Zipline_Ascender_C_GetDynamicDestructionResourceType_Params
{
public:
	enum class EDynamicDestructionResourceType   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetDynamicDestructionStaticMeshComponents
struct UB_Athena_Zipline_Ascender_C_GetDynamicDestructionStaticMeshComponents_Params
{
public:
	TArray<class UStaticMeshComponent*>          OutFullFXStaticMeshComponents;                     // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>          OutVisibilityOnlyStaticMeshComponents;             // 0x10(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>          OutShadowProxyStaticMeshComponents;                // 0x20(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>          K2Node_MakeArray_Array;                            // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>          K2Node_MakeArray_Array_1;                          // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldUseDynamicDestructionNiagaraSystem
struct UB_Athena_Zipline_Ascender_C_ShouldUseDynamicDestructionNiagaraSystem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldUseDynamicDestructionMaterial
struct UB_Athena_Zipline_Ascender_C_ShouldUseDynamicDestructionMaterial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnRep_BeDestroy
struct UB_Athena_Zipline_Ascender_C_OnRep_BeDestroy_Params
{
public:
};

// 0x6D (0x6D - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintCanInteract
struct UB_Athena_Zipline_Ascender_C_BlueprintCanInteract_Params
{
public:
	class UFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETInteractionType                 InteractionType;                                   // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2BD[0x5];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 BlockInteractionTags;                              // 0x10(0x20)(Edit, BlueprintVisible)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2BE[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2BF[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CanBeginZiplining
struct UB_Athena_Zipline_Ascender_C_CanBeginZiplining_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeginZiplining_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDBNO_ReturnValue;                       // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C0[0x5];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       CallFunc_GetDBNOHoistee_ReturnValue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.LocalOnFailedInteract
struct UB_Athena_Zipline_Ascender_C_LocalOnFailedInteract_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetBoundsComponents
struct UB_Athena_Zipline_Ascender_C_GetBoundsComponents_Params
{
public:
	class UActor*                                SelfActor;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               OutComponents;                                     // 0x8(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x40 (0x40 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ApplyStructureDamage
struct UB_Athena_Zipline_Ascender_C_ApplyStructureDamage_Params
{
public:
	class UBuildingSMActor*                      BuildingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                DamageSource;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<TSubclassOf<class UGameplayEffect>>   K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttachCapToEndOfSplineMesh
struct UB_Athena_Zipline_Ascender_C_AttachCapToEndOfSplineMesh_Params
{
public:
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C1[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x38(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttemptOverrideZiplineSocketOffset
struct UB_Athena_Zipline_Ascender_C_AttemptOverrideZiplineSocketOffset_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BaseSocketOffset;                                  // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OutSocketOffset;                                   // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C2[0x6];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   CallFunc_GetHandleComponent_ReturnValue;           // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C3[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_Select_Default;                             // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CalculateLaunchVelocity
struct UB_Athena_Zipline_Ascender_C_CalculateLaunchVelocity_Params
{
public:
	class UActor*                                PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaunchVelocity;                                    // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C4[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C5[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.SetCableTilingBySplineLength
struct UB_Athena_Zipline_Ascender_C_SetCableTilingBySplineLength_Params
{
public:
	float                                        CallFunc_GetSplineLength_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C6[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C7[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x28(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.DeactivateCableWobble
struct UB_Athena_Zipline_Ascender_C_DeactivateCableWobble_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C8[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C9[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x24(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ActivateCableWobble
struct UB_Athena_Zipline_Ascender_C_ActivateCableWobble_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2CA[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x18(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1; // 0x1C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HotfixEnabled
struct UB_Athena_Zipline_Ascender_C_HotfixEnabled_Params
{
public:
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetTopComponent
struct UB_Athena_Zipline_Ascender_C_GetTopComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetHandleComponent
struct UB_Athena_Zipline_Ascender_C_GetHandleComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetInteractComponentOverride
struct UB_Athena_Zipline_Ascender_C_GetInteractComponentOverride_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2CB[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2CC[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Vector_DistanceSquared_ReturnValue;       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Square_ReturnValue;                       // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2CD[0x7];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   K2Node_Select_Default;                             // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PawnIsInHandleRange
struct UB_Athena_Zipline_Ascender_C_PawnIsInHandleRange_Params
{
public:
	class UFortPawn*                             Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2CE[0x7];                                     // Fixing Size After Last Property..
	TArray<class UActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x10(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintGetInteractionString
struct UB_Athena_Zipline_Ascender_C_BlueprintGetInteractionString_Params
{
public:
	class UFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2CF[0x7];                                     // Fixing Size After Last Property..
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D0[0x7];                                     // Fixing Size After Last Property..
	class FText                                  Temp_text_Variable;                                // 0x30(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)()
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D1[0x7];                                     // Fixing Size After Last Property..
	class FText                                  K2Node_Select_Default;                             // 0x68(0x18)()
};

// 0xC (0xC - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetLastSplinePointIndex
struct UB_Athena_Zipline_Ascender_C_GetLastSplinePointIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.UserConstructionScript
struct UB_Athena_Zipline_Ascender_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnReady_93837FC44A18F6AE57D3478CC43A98AB
struct UB_Athena_Zipline_Ascender_C_OnReady_93837FC44A18F6AE57D3478CC43A98AB_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStartedUsingHandle
struct UB_Athena_Zipline_Ascender_C_BP_HandlePlayerStartedUsingHandle_Params
{
public:
	class UFortPlayerPawn*                       Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStoppedUsingHandle
struct UB_Athena_Zipline_Ascender_C_BP_HandlePlayerStoppedUsingHandle_Params
{
public:
	class UFortPlayerPawn*                       Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringCable
struct UB_Athena_Zipline_Ascender_C_BP_HandleStartedLoweringCable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringHandle
struct UB_Athena_Zipline_Ascender_C_BP_HandleStartedLoweringHandle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringCable
struct UB_Athena_Zipline_Ascender_C_BP_HandleStoppedLoweringCable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringHandle
struct UB_Athena_Zipline_Ascender_C_BP_HandleStoppedLoweringHandle_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStarted
struct UB_Athena_Zipline_Ascender_C_OnZipliningStarted_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PlayerDescendingStarted
struct UB_Athena_Zipline_Ascender_C_PlayerDescendingStarted_Params
{
public:
	class UFortPlayerPawn*                       Sliding_Player;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ReceiveBeginPlay
struct UB_Athena_Zipline_Ascender_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleUpdatedLoweringCable
struct UB_Athena_Zipline_Ascender_C_BP_HandleUpdatedLoweringCable_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStopped
struct UB_Athena_Zipline_Ascender_C_OnZipliningStopped_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        ZiplineUsageDuration;                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldPlayWhooshTimer
struct UB_Athena_Zipline_Ascender_C_ShouldPlayWhooshTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnAscenderSetupComplete_Event
struct UB_Athena_Zipline_Ascender_C_OnAscenderSetupComplete_Event_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HandleLinkedActorDestroyed
struct UB_Athena_Zipline_Ascender_C_HandleLinkedActorDestroyed_Params
{
public:
	class UActor*                                DamageCauser;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x29D (0x29D - 0x0)
// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ExecuteUbergraph_B_Athena_Zipline_Ascender
struct UB_Athena_Zipline_Ascender_C_ExecuteUbergraph_B_Athena_Zipline_Ascender_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D2[0x4];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       K2Node_Event_Player;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       CallFunc_GetPawnUsingHandle_ReturnValue;           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D3[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       K2Node_Event_Player_1;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D4[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       K2Node_Event_InteractingPawn_1;                    // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_InteractComponent_1;                  // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       CallFunc_GetPawnUsingHandle_ReturnValue_1;         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D5[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       K2Node_CustomEvent_Sliding_Player;                 // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D6[0x6];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D7[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       K2Node_Event_InteractingPawn;                      // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_InteractComponent;                    // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_ZiplineUsageDuration;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D8[0x4];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       CallFunc_GetPawnUsingHandle_ReturnValue_2;         // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue;       // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D9[0x6];                                     // Fixing Size After Last Property..
	class UFortGameStateAthena*                  Temp_object_Variable;                              // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         Temp_object_Variable_1;                            // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Temp_struct_Variable;                              // 0xF8(0x20)()
	class UFortGameStateAthena*                  K2Node_CustomEvent_GameState;                      // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylist*                         K2Node_CustomEvent_Playlist;                       // 0x120(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_CustomEvent_PlaylistContextTags;            // 0x128(0x20)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2DA[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       CallFunc_GetPawnUsingHandle_ReturnValue_3;         // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2DB[0x6];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_3;         // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2DC[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x178(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2DD[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x1B8(0xD0)(ContainsInstancedReference)
	class UActor*                                K2Node_CustomEvent_DamageCauser;                   // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x290(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x29C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
