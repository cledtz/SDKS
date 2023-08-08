#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0xC20 - 0xB28)
// BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
class UGA_Rift_Athena_Skydive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          FallingAnimation;                                  // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Hangtimee;                                         // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                VehicleSkelMesh;                                   // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        HangTime;                                          // 0xB48(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EventTag;                                          // 0xB70(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3247[0x4];                                     // Fixing Size After Last Property
	struct FScalableFloat                        KickFromVehicle_;                                  // 0xB78(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            LocalPlayerSound;                                  // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GameplayCueGE;                                     // 0xBA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHolstered;                                        // 0xBB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324B[0x3];                                     // Fixing Size After Last Property
	class FName                                  RiftSkydiveHolster;                                // 0xBBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpulseStrength;                                   // 0xBC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bNeedsInputEnable;                                 // 0xBD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324D[0x7];                                     // Fixing Size After Last Property
	struct FTimerHandle                          SafetyTimer;                                       // 0xBE0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewVar_0;                                          // 0xBE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 UnblockTagsIfPassenger;                            // 0xC00(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Rift_Athena_Skydive_C");
		return Clss;
	}

	void RemoveSkydivingGameplayEffect(bool CallFunc_IsValid_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UController* CallFunc_GetController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UPlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess);
	void OnCancelled_AA0523504B7CA4F488E1E6A11F48308A();
	void OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A();
	void OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A();
	void OnCompleted_AA0523504B7CA4F488E1E6A11F48308A();
	void Added_C39EFBAB480B446A6927009E5953EC41();
	void K2_ActivateAbility();
	void SetPlayerToSkydive();
	void OnDestroyed_Event_0(class UActor* DestroyedActor);
	void OnPawnEnteredWater(class UFortPlayerPawn* FortPlayerPawn);
	void OnPawnLanded(struct FHitResult& Hit);
	void HandleForceEnd();
	void ExecuteUbergraph_GA_Rift_Athena_Skydive(int32 EntryPoint, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UController* CallFunc_GetController_ReturnValue, class UPlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, TScriptInterface<class UFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_VehicleIsInAir_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UController* CallFunc_GetController_ReturnValue_1, class UPlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, TScriptInterface<class UFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UFortCharacterVehicle_Ostrich* K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich, bool K2Node_DynamicCast_bSuccess_4, class UFortAthenaJackalVehicle* K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle, bool K2Node_DynamicCast_bSuccess_5, class UFortAthenaFerretVehicle* K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_4, class UController* CallFunc_GetController_ReturnValue_2, class UPlayerController* K2Node_DynamicCast_AsPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_7, TScriptInterface<class UFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_2, bool CallFunc_IsInVehicle_ReturnValue_1, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UController* CallFunc_GetController_ReturnValue_3, class UPlayerController* K2Node_DynamicCast_AsPlayer_Controller_3, bool K2Node_DynamicCast_bSuccess_8, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsPassengerInVehicle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UActor* K2Node_CustomEvent_DestroyedActor, bool Temp_bool_IsClosed_Variable, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, class UFortPlayerPawn* K2Node_CustomEvent_FortPlayerPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FHitResult& K2Node_CustomEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
