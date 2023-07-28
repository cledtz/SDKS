#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xFE0 - 0xFB8)
// BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
class UGA_Athena_Grenade_Rethrow_C : public UGA_Athena_Consumable_Throw_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortProjectileBase*                   Projectile;                                        // 0xFC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TossDelay;                                         // 0xFC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HolsterId;                                         // 0xFD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C4[0x4];                                     // Fixing Size After Last Property..
	double                                       PostThrowEndDelay;                                 // 0xFD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Grenade_Rethrow_C");
		return Clss;
	}

	void DetachProjectile();
	void AttachProjectile(const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddActorLocalRotation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void Completed_3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3B7299CC49B6C5C075996A9C8DDF315F(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_B295E6694DBD8B2B2478A38EA60F5624();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ThrowProjectile();
	void RethrowProjectile();
	void AttemptSpawnThrownProjectile();
	void ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<struct FFortCharacterPartMontageInfo>& K2Node_MakeArray_Array, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class UAnimMontage* K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FFortGameplayAbilityMontageInfo& K2Node_MakeStruct_FortGameplayAbilityMontageInfo, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, double CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_WaitDelay_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
