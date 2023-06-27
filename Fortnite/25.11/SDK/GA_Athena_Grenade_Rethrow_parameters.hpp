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
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.DetachProjectile
struct UGA_Athena_Grenade_Rethrow_C_DetachProjectile_Params
{
public:
};

// 0x1C1 (0x1C1 - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.AttachProjectile
struct UGA_Athena_Grenade_Rethrow_C_AttachProjectile_Params
{
public:
	struct FHitResult                            CallFunc_K2_AddActorLocalOffset_SweepHitResult;    // 0x0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_AddActorLocalRotation_SweepHitResult;  // 0xE0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Completed_3B7299CC49B6C5C075996A9C8DDF315F
struct UGA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Cancelled_3B7299CC49B6C5C075996A9C8DDF315F
struct UGA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Triggered_3B7299CC49B6C5C075996A9C8DDF315F
struct UGA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.OnFinish_B295E6694DBD8B2B2478A38EA60F5624
struct UGA_Athena_Grenade_Rethrow_C_OnFinish_B295E6694DBD8B2B2478A38EA60F5624_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_ActivateAbility
struct UGA_Athena_Grenade_Rethrow_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_OnEndAbility
struct UGA_Athena_Grenade_Rethrow_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.ThrowProjectile
struct UGA_Athena_Grenade_Rethrow_C_ThrowProjectile_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.RethrowProjectile
struct UGA_Athena_Grenade_Rethrow_C_RethrowProjectile_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.AttemptSpawnThrownProjectile
struct UGA_Athena_Grenade_Rethrow_C_AttemptSpawnThrownProjectile_Params
{
public:
};

// 0x32C (0x32C - 0x0)
// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.ExecuteUbergraph_GA_Athena_Grenade_Rethrow
struct UGA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82FE[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0x8(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0x30(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x34(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x40(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x68(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x6C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x78(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_82FF[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable_1;                            // 0x80(0x28)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xA8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8300[0x3];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          Temp_object_Variable;                              // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_1;                            // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xC8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8301[0x4];                                     // Fixing Size After Last Property..
	class AFortProjectileBase*                   K2Node_DynamicCast_AsFort_Projectile_Base;         // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8302[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_2;                   // 0xE8(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_2;               // 0x110(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8303[0x3];                                     // Fixing Size After Last Property..
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue;                    // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8304[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x128(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8305[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x134(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortCharacterPartMontageInfo> K2Node_MakeArray_Array;                            // 0x140(0x10)(ReferenceParm)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8306[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSpawnLocationAndRotation_Location;     // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetSpawnLocationAndRotation_Rotation;     // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x198(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default;                             // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x1B8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8307[0x7];                                     // Fixing Size After Last Property..
	struct FFortGameplayAbilityMontageInfo       K2Node_MakeStruct_FortGameplayAbilityMontageInfo;  // 0x2A0(0x58)()
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse; // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x308(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8308[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_WaitDelay_Time_ImplicitCast;              // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
