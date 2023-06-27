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

// 0x188 (0x1168 - 0xFE0)
// BlueprintGeneratedClass B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
class AB_Athena_Zipline_Ascender_C : public AFortAscenderZipline
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0xFE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortSoundIndicatorComponent*          FortSoundIndicator;                                // 0xFF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Ascender_End_Cap;                                  // 0xFF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       PoleMotorSFX;                                      // 0x1000(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     HandleVFX;                                         // 0x1008(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PoleMotorVFX;                                      // 0x1010(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HandleAscendingSFX;                                // 0x1018(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HandleDescendingSFX;                               // 0x1020(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      HandleInteractVolume;                              // 0x1028(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Handle;                                            // 0x1030(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Top;                                               // 0x1038(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Hotfix;                                            // 0x1040(0x28)(Edit, BlueprintVisible)
	class USoundBase*                            StartHandleSound;                                  // 0x1068(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StopHandleSound;                                   // 0x1070(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StopPoleMotorSoundSkid;                            // 0x1078(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SplineMeshMaterialOverride;                        // 0x1080(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        AscendingHandleVFX;                                // 0x1088(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        DescendingHandleVFX;                               // 0x1090(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SplineThickenMeshMaterialOverride;                 // 0x1098(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       MaxWobbleAnimationLength;                          // 0x10A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LastWobbleActivationTime;                          // 0x10A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TilingDivisor;                                     // 0x10B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HandleAnimOffset;                                  // 0x10B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SlideAnimOffset;                                   // 0x10D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PlayerGrabBeginDecentSound;                        // 0x10E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HandleStart;                                       // 0x10F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndCapRelativeScale;                               // 0x10F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                StructureDamageGE;                                 // 0x1110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          AudioVisualizerHandle;                             // 0x1118(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerPawn*>               PlayersOnAscender;                                 // 0x1120(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class USoundBase*                            TravelSound;                                       // 0x1130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldPlayWhoosh;                                  // 0x1138(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E90[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            AscendWhooshSound;                                 // 0x1140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x1148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          WhooshHandle;                                      // 0x1150(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LinkToDestroyedGC;                                 // 0x1158(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         BeDestroy;                                         // 0x115C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E91[0x3];                                     // Fixing Size After Last Property..
	class APlayerState*                          PlayerStateUsingHandleComponent;                   // 0x1160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Athena_Zipline_Ascender_C");
		return Clss;
	}

	TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array);
	bool ShouldShowSoundIndicator(class AFortPlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	enum class EDynamicDestructionResourceType GetDynamicDestructionResourceType();
	void GetDynamicDestructionStaticMeshComponents(TArray<class UStaticMeshComponent*>* OutFullFXStaticMeshComponents, TArray<class UStaticMeshComponent*>* OutVisibilityOnlyStaticMeshComponents, TArray<class UStaticMeshComponent*>* OutShadowProxyStaticMeshComponents, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_1);
	bool ShouldUseDynamicDestructionNiagaraSystem();
	bool ShouldUseDynamicDestructionMaterial();
	void OnRep_BeDestroy();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, const struct FGameplayTagContainer& BlockInteractionTags, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, FInterfaceProperty_ CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CanBeginZiplining(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, bool CallFunc_CanBeginZiplining_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, class AFortPlayerPawn* CallFunc_GetDBNOHoistee_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void LocalOnFailedInteract(class AFortPlayerPawn* InteractingPawn);
	void GetBoundsComponents(class AActor* SelfActor, TArray<class USceneComponent*>* OutComponents);
	void ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<TSubclassOf<class UGameplayEffect>>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void AttachCapToEndOfSplineMesh(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_MakeVector_Z_ImplicitCast);
	bool AttemptOverrideZiplineSocketOffset(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, struct FVector& BaseSocketOffset, struct FVector* OutSocketOffset, bool Temp_bool_Variable, class UPrimitiveComponent* CallFunc_GetHandleComponent_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void CalculateLaunchVelocity(class AActor* PlayerPawn, struct FVector* LaunchVelocity, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast);
	void SetCableTilingBySplineLength(float CallFunc_GetSplineLength_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void DeactivateCableWobble(bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void ActivateCableWobble(bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1);
	void HotfixEnabled(bool CallFunc_GetValueAsBool_ReturnValue);
	class UPrimitiveComponent* GetTopComponent();
	class UPrimitiveComponent* GetHandleComponent();
	class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Vector_DistanceSquared_ReturnValue, double CallFunc_Square_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UPrimitiveComponent* K2Node_Select_Default, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	bool PawnIsInHandleRange(class AFortPawn* Pawn, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_Array_Contains_ReturnValue);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText K2Node_Select_Default);
	int32 GetLastSplinePointIndex(int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnReady_93837FC44A18F6AE57D3478CC43A98AB(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player);
	void BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player);
	void BP_HandleStartedLoweringCable();
	void BP_HandleStartedLoweringHandle();
	void BP_HandleStoppedLoweringCable();
	void BP_HandleStoppedLoweringHandle();
	void OnZipliningStarted(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent);
	void PlayerDescendingStarted(class AFortPlayerPawn* Sliding_Player);
	void ReceiveBeginPlay();
	void BP_HandleUpdatedLoweringCable();
	void OnZipliningStopped(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration);
	void ShouldPlayWhooshTimer();
	void OnAscenderSetupComplete_Event();
	void HandleLinkedActorDestroyed(class AActor* DamageCauser);
	void ExecuteUbergraph_B_Athena_Zipline_Ascender(int32 EntryPoint, class AFortPlayerPawn* K2Node_Event_Player, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_Event_Player_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AFortPlayerPawn* K2Node_Event_InteractingPawn_1, class UPrimitiveComponent* K2Node_Event_InteractComponent_1, class AFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AFortPlayerPawn* K2Node_CustomEvent_Sliding_Player, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* K2Node_Event_InteractingPawn, class UPrimitiveComponent* K2Node_Event_InteractComponent, float K2Node_Event_ZiplineUsageDuration, class AFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue_2, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class AFortGameStateAthena* Temp_object_Variable, class UFortPlaylist* Temp_object_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_8, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class AActor* K2Node_CustomEvent_DamageCauser, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_GetValueAsBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
