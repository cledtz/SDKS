#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x18E1 - 0x1840)
// BlueprintGeneratedClass B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
class UB_Athena_Pickaxe_DualWield_Generic_C : public UFortWeaponPickaxeDualWieldAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1840(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Equipped;                                          // 0x1848(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8722[0x7];                                     // Fixing Size After Last Property 
	class UParticleSystemComponent*              Alteration_Ambient_PS;                             // 0x1850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MeleeHeavy_ParticleSystem;                         // 0x1858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MeleeHeavy_PSC;                                    // 0x1860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDestroyEffect;                                  // 0x1868(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8723[0x7];                                     // Fixing Size After Last Property 
	class UParticleSystem*                       WeaponDurabilityDestroyEffect;                     // 0x1870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffectIcon;                 // 0x1878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Offhand_Alteration_Ambient_PS;                     // 0x1880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bEquipPendingInstigator;                           // 0x1888(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8724[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Offhand_Socket_Name;                               // 0x188C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          MontageReference;                                  // 0x1890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         UseTimeofDayControl;                               // 0x1898(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8725[0x7];                                     // Fixing Size After Last Property 
	class UFXSystemComponent*                    Impact_FX;                                         // 0x18A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Swing_Right_;                                      // 0x18A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_8726[0x7];                                     // Fixing Size After Last Property 
	struct FRotator                              Left_Swing_Rotation;                               // 0x18B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Right_Swing_Rotation;                              // 0x18C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Swing_Right_;                                      // 0x18E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_Athena_Pickaxe_DualWield_Generic_C* GetDefaultObj();

	void Binding_Time_of_Day_Control(bool F_, TScriptInterface<class UFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetWpnRarity();
	void Unbind_Dual_Melee_Swing_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UPawn* CallFunc_GetInstigator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UPawn* CallFunc_GetInstigator_ReturnValue_1, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void Bind_Dual_Melee_Swing_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPawn* CallFunc_GetInstigator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UPawn* CallFunc_GetInstigator_ReturnValue_1, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void Set_Active_Alteration_Idle_Particles(bool Active, bool Reset, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UserConstructionScript();
	void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(class FName StatName, int32 StatValue);
	void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void PlayRClickImpacts();
	void OnEquippedWeaponDestory();
	void OnWeaponAttached();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnWeaponDetached();
	void OnInitWeaponCosmetics();
	void Swing_Left_End();
	void Swing_Right_End();
	void OnInstigatorSet();
	void K2_OnUnEquip();
	void SwingRight_Common();
	void SwingLeft_Common();
	void Swing_Left();
	void Swing_Right();
	void Swing_Left_2();
	void Swing_Right_2();
	void Anim_Trails_Notify(bool bActive);
	void Anim_Trails_Disable();
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void TODCheck(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void HandleKillWatch();
	void UpdateBasedOnKills(int32 Watched_Kills);
	void Vehicle_Passenger(class UFortPlayerPawn* FortPlayerPawn, class UActor* NewVehicle, class UActor* OldVehicle);
	void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_GetPI_ReturnValue, int32 Temp_int_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, class FName Temp_name_Variable, double CallFunc_GetPI_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, enum class EPhysicalSurface Temp_byte_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 Temp_int_Variable_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Variable_2, class UPawn* CallFunc_GetInstigator_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, bool CallFunc_IsValid_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UTexture2D* CallFunc_GetOrLoadSynchronously_ReturnValue, int32 Temp_int_Variable_3, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Variable_6, class UPawn* CallFunc_GetInstigator_ReturnValue_1, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Variable_7, class UFXSystemComponent* CallFunc_GetAnimTrailsPSC_ReturnValue, class UFXSystemComponent* CallFunc_GetAnimTrailsOffhandPSC_ReturnValue, int32 Temp_int_Variable_8, bool CallFunc_DoesSocketExist_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, int32 Temp_int_Variable_9, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 Temp_int_Variable_10, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue, class UFXSystemComponent* CallFunc_GetIdleOffhandVFXComponent_ReturnValue, class UFXSystemComponent* CallFunc_GetSwingOffhandVFXComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UFXSystemComponent* CallFunc_GetSwingOffhandVFXComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class UFXSystemComponent* CallFunc_GetSwingVFXComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UFXSystemComponent* CallFunc_GetSwingVFXComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, enum class EFortDualWieldSwingState CallFunc_GetCurrentSwingState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_bActive, bool CallFunc_GetUseAnimTrailsPSC_ReturnValue, class FName CallFunc_GetAnimTrailsSecondSocketName_ReturnValue, class FName CallFunc_GetAnimTrailsFirstSocketName_ReturnValue, float CallFunc_GetAnimTrailsWidth_ReturnValue, bool CallFunc_GetUseAnimTrailsOffhandPSC_ReturnValue, class UFXSystemComponent* CallFunc_GetAnimTrailsOffhandPSC_ReturnValue_1, class UParticleSystemComponent* K2Node_DynamicCast_AsCascade_Particle_System_Component, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_8, class FName CallFunc_GetAnimTrailsOffhandSecondSocketName_ReturnValue, class FName CallFunc_GetAnimTrailsOffhandFirstSocketName_ReturnValue, float CallFunc_GetAnimTrailsOffhandWidth_ReturnValue, int32 Temp_int_Variable_11, bool CallFunc_GetUseAnimTrailsOffhandPSC_ReturnValue_1, class UFXSystemComponent* CallFunc_GetAnimTrailsOffhandPSC_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, class UParticleSystemComponent* K2Node_DynamicCast_AsCascade_Particle_System_Component_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_GetUseAnimTrailsPSC_ReturnValue_1, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, int32 Temp_int_Variable_16, class UFXSystemComponent* CallFunc_GetAnimTrailVFXComponent_ReturnValue, class UFXSystemComponent* CallFunc_GetAnimTrailVFXComponent_ReturnValue_1, class UParticleSystemComponent* K2Node_DynamicCast_AsCascade_Particle_System_Component_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_10, class UParticleSystemComponent* K2Node_DynamicCast_AsCascade_Particle_System_Component_3, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_11, enum class EFortDualWieldSwingState CallFunc_GetCurrentSwingState_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EFortDualWieldSwingState CallFunc_GetCurrentSwingState_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UFXSystemComponent* K2Node_Event_SpawnedPSC, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, enum class EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable_17, int32 Temp_int_Variable_18, int32 K2Node_CustomEvent_Watched_Kills, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_8, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, int32 Temp_int_Variable_19, int32 Temp_int_Variable_20, int32 Temp_int_Variable_21, int32 Temp_int_Variable_22, bool CallFunc_IsDedicatedServer_ReturnValue_2, int32 Temp_int_Variable_23, bool CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue, const struct FRotator& K2Node_Select_Default, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_TransformRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_IsSingleWielding_ReturnValue, bool CallFunc_IsSingleWielding_ReturnValue_1, bool CallFunc_IsDualWielding_ReturnValue, int32 Temp_int_Variable_24, class UFXSystemComponent* CallFunc_GetIdleOffhandVFXComponent_ReturnValue_1, bool CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_14, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess_9, int32 Temp_int_Variable_25, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue_1, class UFXSystemComponent* CallFunc_GetIdleOffhandVFXComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_16, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component_1, bool K2Node_DynamicCast_bSuccess_10, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue_2, TScriptInterface<class UFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, bool CallFunc_IsValid_ReturnValue_17, int32 Temp_int_Variable_26, int32 Temp_int_Variable_27, int32 Temp_int_Variable_28, int32 Temp_int_Variable_29, int32 Temp_int_Variable_30, class UFortPlayerPawn* K2Node_CustomEvent_FortPlayerPawn, class UActor* K2Node_CustomEvent_NewVehicle, class UActor* K2Node_CustomEvent_OldVehicle, bool CallFunc_IsDrivingVehicle_ReturnValue, bool CallFunc_IsPassengerInVehicle_ReturnValue, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, class UFXSystemComponent* CallFunc_GetIdleOffhandVFXComponent_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_31, int32 Temp_int_Variable_32, int32 Temp_int_Variable_33, bool Temp_bool_IsClosed_Variable, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_11, int32 Temp_int_Variable_34, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_GetSectionIndex_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_3, int32 Temp_int_Variable_35, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Select_Default_1, class UPawn* CallFunc_GetInstigator_ReturnValue_2, class UPlayerPawn_Generic_Parent_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent, bool K2Node_DynamicCast_bSuccess_12, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, double CallFunc_Divide_DoubleDouble_ReturnValue_5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_2, double CallFunc_VSize_ReturnValue_1, bool CallFunc_DoesSocketExist_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_8, double CallFunc_Divide_DoubleDouble_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_5, bool CallFunc_DoesSocketExist_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5);
};

}


