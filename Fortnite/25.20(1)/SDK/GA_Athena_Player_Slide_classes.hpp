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

// 0xE58 (0x1980 - 0xB28)
// BlueprintGeneratedClass GA_Athena_Player_Slide.GA_Athena_Player_Slide_C
class UGA_Athena_Player_Slide_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class UCameraShakeBase>          CameraShake;                                       // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UFortCameraMode>           Camera_Mode_Class;                                 // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                          CameraShakeGCNL;                                   // 0xB40(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D79[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCameraModifier>           CameraModifier;                                    // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       MinAngleForMomentum;                               // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          SpeedlinesCue;                                     // 0xB58(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D7A[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCameraShakeBase>          StartSlideCameraShake;                             // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       AdditionalLaunchVelocityOffRamp;                   // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlidingControlParams                 DefaultSlidingParams;                              // 0xB70(0x698)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlidingControlParams                 PostDashGroundSlidingParams;                       // 0x1208(0x698)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       LevelGroundSlideDuration;                          // 0x18A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          EndLevelGroundSlideTimerHandle;                    // 0x18A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DashDuration;                                      // 0x18B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          CameraFXDelay;                                     // 0x18D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          PlayerGameplayCue;                                 // 0x18E0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D7B[0x4];                                     // Fixing Size After Last Property..
	double                                       CameraShakeDelay;                                  // 0x18E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MinAdditionalMomentum;                             // 0x18F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MaxAdditionalMomentum;                             // 0x1918(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MinAngleForAdditionalMomentum;                     // 0x1940(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Prev_FallingGracePeriodState;                      // 0x1968(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D7C[0x7];                                     // Fixing Size After Last Property..
	class UCameraModifier*                       SlideCameraModifier;                               // 0x1970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          AddMomentumTimerHandle;                            // 0x1978(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Player_Slide_C");
		return Clss;
	}

	void EndAbilityServerSide(class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, class UPlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess, class UPlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue);
	void EndAbilityClientSide(class UCameraModifier_Athena_Sliding_C* K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	bool BuildDataRegistryResolverScope(TArray<class FName>* InOutResolverScopes, int32* InOutPriority);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void AddMomentum();
	void EndLevelGroundSlide();
	void CameraFX();
	void OnFinishedCharacterCustomization_Event_0(class UFortPlayerPawn* Pawn);
	void ForceRemoveSlideGC();
	void ExecuteUbergraph_GA_Athena_Player_Slide(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool K2Node_Event_bWasCancelled, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, bool Temp_bool_Has_Been_Initd_Variable, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UCameraModifier* CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_3, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6, class UPlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess_2, class UPlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7, class UFortPlayerPawn* K2Node_CustomEvent_Pawn, bool CallFunc_IsValid_ReturnValue_4, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_IsClosed_Variable, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_2, bool K2Node_DynamicCast_bSuccess_4, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_6, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character_3, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, bool CallFunc_RemoveCameraModifier_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
