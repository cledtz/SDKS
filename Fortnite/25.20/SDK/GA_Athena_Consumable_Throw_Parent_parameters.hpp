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

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.SpawnTrajectoryIndicator
struct UGA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator_Params
{
public:
	bool                                         bSpawnOnEquip;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1816[0x7];                                     // Fixing Size After Last Property..
	class AFortProjectileTrajectory*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1817[0x6];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileTrajectoryActor
struct UGA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor_Params
{
public:
	TSubclassOf<class AFortProjectileTrajectory> ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x270 (0x270 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileTrajectoryPoints
struct UGA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints_Params
{
public:
	TArray<struct FVector>                       OutSplinePoints;                                   // 0x0(0x10)(Parm, OutParm)
	TArray<struct FVector>                       OutSplineTangents;                                 // 0x10(0x10)(Parm, OutParm)
	struct FHitResult                            OutHitResult;                                      // 0x20(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSpawnLocationAndRotation_Location;     // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetSpawnLocationAndRotation_Rotation;     // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_CalculateProjectileTrajectory_OutHitResult; // 0x168(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectory_OutSplinePoints; // 0x248(0x10)(ReferenceParm)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectory_OutSplineTangents; // 0x258(0x10)(ReferenceParm)
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.Get Throw Montage
struct UGA_Athena_Consumable_Throw_Parent_C_Get_Throw_Montage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1818[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingFirstPersonCamera_ReturnValue;     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetCookMontage
struct UGA_Athena_Consumable_Throw_Parent_C_GetCookMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1819[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingFirstPersonCamera_ReturnValue;     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C4 (0x3C4 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.CalculateProjectileTrajectory
struct UGA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory_Params
{
public:
	class AFortPawn*                             Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitialLocation;                                   // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitialVelocity;                                   // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            OutHitResult;                                      // 0x38(0xE0)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FVector>                       OutSplinePoints;                                   // 0x118(0x10)(Parm, OutParm)
	TArray<struct FVector>                       OutSplineTangents;                                 // 0x128(0x10)(Parm, OutParm)
	TArray<class AActor*>                        ProjectileIgnoredActors;                           // 0x138(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                        CallFunc_GetProjectileIgnoredActors_ReturnValue;   // 0x148(0x10)(ReferenceParm)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181A[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181B[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_1;                               // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x17D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181C[0x2];                                     // Fixing Size After Last Property..
	int32                                        K2Node_Select_Default;                             // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181D[0x4];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult; // 0x188(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints; // 0x268(0x10)(ReferenceParm)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents; // 0x278(0x10)(ReferenceParm)
	int32                                        K2Node_Select_Default_1;                           // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181E[0x4];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult; // 0x290(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints; // 0x370(0x10)(ReferenceParm)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents; // 0x380(0x10)(ReferenceParm)
	double                                       CallFunc_FMax_A_ImplicitCast;                      // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_B_ImplicitCast;                      // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateProjectileTrajectorySplineWithHit_TraceExtent_ImplicitCast; // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_181F[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FMax_A_ImplicitCast_1;                    // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_B_ImplicitCast_1;                    // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TraceExtent_ImplicitCast; // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TimeStep_ImplicitCast; // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateProjectileTrajectorySplineWithHit_TimeStep_ImplicitCast; // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8B (0x8B - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.K2_CanActivateAbility
struct UGA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1820[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 RelevantTags;                                      // 0x50(0x20)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1821[0x6];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F3 (0x1F3 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.IsTrajectoryLocationValid
struct UGA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid_Params
{
public:
	TArray<struct FVector>                       SplinePoints;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                       SplineTangents;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FHitResult                            TrajectoryHitResult;                               // 0x20(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         bIsLocationValid;                                  // 0x100(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1822[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1823[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x158(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1824[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOverlappingDeployableBlockVolume_bOverlapping; // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnUpdateTrajectory
struct UGA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory_Params
{
public:
	TArray<struct FVector>                       SplinePoints;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                       SplineTangents;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FHitResult                            TrajectoryHitResult;                               // 0x20(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.AddValidCamera
struct UGA_Athena_Consumable_Throw_Parent_C_AddValidCamera_Params
{
public:
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetOwningPlayer
struct UGA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer_Params
{
public:
	class AFortPlayerPawn*                       Player_Pawn;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1825[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x10(0x48)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ExecuteThrowGC
struct UGA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC_Params
{
public:
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.K2_OverrideFailedReason
struct UGA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason_Params
{
public:
	struct FGameplayTagContainer                 FailedReason;                                      // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                 OverridenFailedReason;                             // 0x20(0x20)(Parm, OutParm)
	struct FGameplayTagContainer                 CallFunc_K2_OverrideFailedReason_OverridenFailedReason; // 0x40(0x20)()
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1826[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.RemoveCookGC
struct UGA_Athena_Consumable_Throw_Parent_C_RemoveCookGC_Params
{
public:
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.AddCookGC
struct UGA_Athena_Consumable_Throw_Parent_C_AddCookGC_Params
{
public:
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileAdditionalThrowAngleToUse
struct UGA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse_Params
{
public:
	double                                       AdditionalThrowAngleToUse;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           AbilitySourceWeapon;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetProjectilePitchOffset_ReturnValue;     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1827[0x2];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileInitialGravityScaleToUse
struct UGA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse_Params
{
public:
	double                                       GravityScaleToUse;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                GetProjectileInitialGravityScaleContext;           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1828[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EvaluateCurveTableRow_ReturnValue;        // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCurveTableRowValid_ReturnValue;         // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1829[0x2];                                     // Fixing Size After Last Property..
	double                                       K2Node_FunctionResult_GravityScaleToUse_ImplicitCast; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_GravityScaleToUse_ImplicitCast_1; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetProjectileInitialSpeedToUse
struct UGA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse_Params
{
public:
	double                                       ProjectileSpeedToUse;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                GetProjectileInitialSpeedToUseContext;             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182A[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EvaluateCurveTableRow_ReturnValue;        // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCurveTableRowValid_ReturnValue;         // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182B[0x2];                                     // Fixing Size After Last Property..
	double                                       K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast_1; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.CleanupTrajectory
struct UGA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.PostThrowCleanup
struct UGA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x102 (0x102 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.UpdateTrajectorySpline
struct UGA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline_Params
{
public:
	TArray<struct FVector>                       CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints; // 0x0(0x10)(ReferenceParm)
	TArray<struct FVector>                       CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents; // 0x10(0x10)(ReferenceParm)
	struct FHitResult                            CallFunc_GetProjectileTrajectoryPoints_OutHitResult; // 0x20(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsTrajectoryLocationValid_bIsLocationValid; // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.SetupDummyProjectile
struct UGA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile_Params
{
public:
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182C[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182D[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileTrajectory*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182E[0x7];                                     // Fixing Size After Last Property..
	class ABP_ProjectileTrajectory_C*            K2Node_DynamicCast_AsBP_Projectile_Trajectory;     // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnProjectileSpawned
struct UGA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned_Params
{
public:
	class AFortProjectileBase*                   SpawnedProjectile;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1D8 (0x1D8 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.SpawnThrownProjectile
struct UGA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile_Params
{
public:
	class UClass*                                ProjectileClass;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ProjectileSpawnLocation;                           // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ProjectileSpawnDirection;                          // 0x20(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec      HitEffectContainerSpec;                            // 0x38(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortGameplayEffectContainerSpec      ExplosionEffectContainerSpec;                      // 0xF0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       ProjectileInitialSpeed;                            // 0x1A8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ProjectileGravityScale;                            // 0x1B0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   SpawnedProjectile;                                 // 0x1B8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   CallFunc_SpawnProjectile_ReturnValue;              // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast; // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SpawnProjectile_GravityScale_ImplicitCast; // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnProjectileSetup
struct UGA_Athena_Consumable_Throw_Parent_C_OnProjectileSetup_Params
{
public:
};

// 0x164 (0x164 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.GetSpawnLocationAndRotation
struct UGA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_182F[0x6];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetDefaultTargetingRotation_ReturnValue;  // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1830[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn_1;            // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSurfaceSwimming_ReturnValue;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1831[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_NormalizeAxis_ReturnValue;                // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1832[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default_1;                           // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeAxis_Angle_ImplicitCast;         // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1833[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FMin_A_ImplicitCast;                      // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.PrethrowSetup
struct UGA_Athena_Consumable_Throw_Parent_C_PrethrowSetup_Params
{
public:
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x8(0x48)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnFinish_96367E244486362FDDE5ED87D909C17B
struct UGA_Athena_Consumable_Throw_Parent_C_OnFinish_96367E244486362FDDE5ED87D909C17B_Params
{
public:
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.Completed_01C5B37D48E3DC6F82DDC58640CE2A27
struct UGA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27
struct UGA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.Triggered_01C5B37D48E3DC6F82DDC58640CE2A27
struct UGA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0
struct UGA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0_Params
{
public:
	float                                        TimeHeld;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D
struct UGA_Athena_Consumable_Throw_Parent_C_OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D
struct UGA_Athena_Consumable_Throw_Parent_C_OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D
struct UGA_Athena_Consumable_Throw_Parent_C_OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D
struct UGA_Athena_Consumable_Throw_Parent_C_OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F
struct UGA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnSync_9C8FDC8044B1444580A9809C231F294D
struct UGA_Athena_Consumable_Throw_Parent_C_OnSync_9C8FDC8044B1444580A9809C231F294D_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6
struct UGA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.AttemptSpawnThrownProjectile
struct UGA_Athena_Consumable_Throw_Parent_C_AttemptSpawnThrownProjectile_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.InitTrajectoryVariables
struct UGA_Athena_Consumable_Throw_Parent_C_InitTrajectoryVariables_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ThrowProjectile
struct UGA_Athena_Consumable_Throw_Parent_C_ThrowProjectile_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ThrowMontageStarted
struct UGA_Athena_Consumable_Throw_Parent_C_ThrowMontageStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnAbilityInputReleased
struct UGA_Athena_Consumable_Throw_Parent_C_OnAbilityInputReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.K2_ActivateAbility
struct UGA_Athena_Consumable_Throw_Parent_C_K2_ActivateAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.UpdateTrajectory
struct UGA_Athena_Consumable_Throw_Parent_C_UpdateTrajectory_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.CleanupTrajectoryIndicatorOnUnequip
struct UGA_Athena_Consumable_Throw_Parent_C_CleanupTrajectoryIndicatorOnUnequip_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.K2_OnEndAbility
struct UGA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8E8 (0x8E8 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent
struct UGA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1834[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          CallFunc_Get_Throw_Montage_Montage;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1835[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x28(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x50(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x54(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable_1;                            // 0x58(0x28)()
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1836[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x84(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponData_ReturnValue;                // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1837[0x7];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_TimeHeld;                       // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable;                                // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitInputRelease*         CallFunc_WaitInputRelease_ReturnValue;             // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1838[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xC4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xD0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xDC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xE8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1839[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_CustomEvent_Payload_1;                      // 0xF8(0xB0)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1A8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_183A[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    Temp_struct_Variable_2;                            // 0x1B8(0xB0)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_183B[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x274(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_NetworkSyncPoint*         CallFunc_WaitNetSync_ReturnValue;                  // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x288(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x294(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_183C[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x298(0xB0)()
	struct FGameplayEventData                    Temp_struct_Variable_3;                            // 0x348(0xB0)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x401(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_183D[0x6];                                     // Fixing Size After Last Property..
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponData_ReturnValue_1;              // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_183E[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSpawnLocationAndRotation_Location;     // 0x418(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetSpawnLocationAndRotation_Rotation;     // 0x430(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileTrajectory*             CallFunc_SpawnTrajectoryIndicator_ReturnValue;     // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x458(0xB8)()
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1; // 0x510(0xB8)()
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0x5C8(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0x5F0(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_183F[0x4];                                     // Fixing Size After Last Property..
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2; // 0x5F8(0xB8)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x6B0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1840[0x4];                                     // Fixing Size After Last Property..
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue;                    // 0x6C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x6C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1841[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x6CC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0x6D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x6DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1842[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse; // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse; // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortProjectileTrajectoryData         CallFunc_GetProjectileTrajectoryData_TrajectoryData; // 0x6F0(0x20)(NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_2;                   // 0x710(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_2;               // 0x738(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x73C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1843[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x740(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1844[0x4];                                     // Fixing Size After Last Property..
	class AFortProjectileBase*                   CallFunc_SpawnThrownProjectile_SpawnedProjectile;  // 0x750(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_GetCookMontage_Montage;                   // 0x758(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x760(0xB0)()
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x810(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1845[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData_1;             // 0x820(0xB0)()
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x8D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1846[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast; // 0x8D4(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetProjectileTrajectoryData_DefaultSpeed_ImplicitCast; // 0x8D8(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1847[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SpawnThrownProjectile_ProjectileInitialSpeed_ImplicitCast; // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C.OnProjectileSpawn__DelegateSignature
struct UGA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawn__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
