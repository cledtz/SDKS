#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xBF0 - 0xB40)
// BlueprintGeneratedClass GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C
class UGA_Athena_ZipLine_SmashParent_C : public UFortGameplayAbility_ZiplineSmashBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       UpdateIntervalForSmashVolume;                      // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                StructureDamageGE;                                 // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_ZipLine_Athena_Harness_C*          ZiplineHarness;                                    // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaZipline*                    Zipline;                                           // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   ZiplineInteractComponent;                          // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomMovement               DrivingCustomMovementMode;                         // 0xB78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65F2[0x3];                                     // Fixing Size After Last Property
	struct FActiveGameplayEffectHandle           FallImmunityGEFX;                                  // 0xB7C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AttachVFXCue;                                      // 0xB84(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SmashCue;                                          // 0xB88(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Swimming;                                        // 0xB8C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Falling;                                         // 0xB90(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65F3[0x4];                                     // Fixing Size After Last Property
	struct FGameplayTagContainer                 TagsThatBlockFallImmunityRemoval;                  // 0xB98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          TH_DelayFallDamageRemoval;                         // 0xBB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SurroundingsCheckTimerHandle;                      // 0xBC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ZiplineExitTag;                                    // 0xBC8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65F4[0x4];                                     // Fixing Size After Last Property
	struct FVector                               Smash_Box_Extent;                                  // 0xBD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SmashBoxPosAdditionalZ;                            // 0xBE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_ZipLine_SmashParent_C");
		return Clss;
	}

	void Get_Zipline_Motor_Offset(struct FVector* Offset, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess);
	void GetZiplineRotationForMotor(struct FRotator* Rotation, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
	void Get_Zipline_Pole_A_Socket_Loc(struct FVector* PoleBSocketLoc, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess);
	void Get_Zipline_Pole_B_Socket_Loc(struct FVector* PoleBSocketLoc, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess);
	void CheckForQuestProgress(TScriptInterface<class UGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class UController* CallFunc_GetController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FVerbMessage_Custom& CallFunc_MakeCustomVerbMessage_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FVerbMessage_Custom& CallFunc_AddTagsForSubject_Result);
	void CheckMotor(bool HasHarness, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UActor*>& CallFunc_GetAttachedActors_OutActors, int32 Temp_int_Loop_Counter_Variable, class UActor* CallFunc_Array_Get_Item, class UBP_ZipLine_Athena_Harness_C* K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Spawn_Motor(class UActor* PlayerPawn, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_Get_Zipline_Motor_Offset_Offset, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UBP_ZipLine_Athena_Harness_Yellow_C* CallFunc_FinishSpawningActor_ReturnValue);
	void BreakNearbyStructures(class UFortPlayerPawn* PlayerPawn, TArray<class UActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void Added_5A9C02A9480D39B213A8AC81767C7A76();
	void Removed_A0F18316443E5C5267615C9692274B36();
	void SurroundingsCheck();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnPawnLanded_Bind(struct FHitResult& Hit);
	void HandleZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* Pawn);
	void RemoveFallDamageImmunity();
	void OnEnterVehicle_Bind();
	void ZipliningComplete();
	void OnEnteredAircraft_Bind();
	void OnBeginSkydiving_Bind();
	void DelaySpawnMotor();
	void BindEvent();
	void SwimmingStarted();
	void EnterWaterExit(class UFortPlayerPawn* FortPlayerPawn);
	void HandleClientSplineZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* Pawn);
	void SplineZiplineMovementModeDelayOver();
	void K2_OnEndAbility(bool bWasCancelled);
	void Remove_Fall_Damage_Immunity_Delayed();
	void EndAsyncBreakNearbyStructuresOverlap(TArray<class UActor*>& OverlapActors);
	void SurroundingsCheck_SmashObjects();
	void SurroundingsCheck_MotorCheck();
	void SurruondingsCheck_VehicleCheck();
	void StartSurroundingsCheck();
	void OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void GameplayTagEvent_ZiplineEnter(struct FGameplayEventData& EventData);
	void GameplayTagEvent_ZiplineExit(struct FGameplayEventData& EventData);
	void GameplayEvent_ZiplineEnter_BeginZiplining();
	void FallingTagRemoved();
	void Pre_BeginZiplinging();
	void HandleGameplayEventTag(struct FGameplayEventData& EventData);
	void ZiplinePostBegin_Event();
	void ExecuteUbergraph_GA_Athena_ZipLine_SmashParent(int32 EntryPoint, bool CallFunc_WantsToGoFromVehicleToZipline_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInInteractBlockingVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& K2Node_CustomEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool K2Node_CustomEvent_bIsZiplining_1, class UFortPlayerPawn* K2Node_CustomEvent_Pawn_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FGameplayEventData& K2Node_Event_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UController* CallFunc_GetController_ReturnValue_1, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_3, class UFortPlayerPawn* K2Node_CustomEvent_FortPlayerPawn, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_bIsZiplining, class UFortPlayerPawn* K2Node_CustomEvent_Pawn, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, TArray<class UActor*>& K2Node_Event_OverlapActors, bool CallFunc_IsValid_ReturnValue_8, class UActor* CallFunc_Array_Get_Item, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_5, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_6, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, class UFortAthenaSupplyDropBalloon* K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon, bool K2Node_DynamicCast_bSuccess_7, class UFortHeldObjectComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortAnimInputEvent* CallFunc_CreateAnimInputEvent_ReturnValue, class UFortAnimInputEvent* CallFunc_CreateAnimInputEvent_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, class UActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UController* K2Node_CustomEvent_InstigatedBy, class UActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess_8, class UFortAthenaZipline* K2Node_DynamicCast_AsFort_Athena_Zipline, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, const struct FGameplayEventData& K2Node_CustomEvent_EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
