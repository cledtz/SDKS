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

// 0x336 (0xF78 - 0xC42)
// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{
public:
	uint8                                        Pad_94F0[0x6];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                Prj_Grenade;                                       // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       GrenadeSpeedMin;                                   // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GrenadeSpeedMax;                                   // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GravityScale;                                      // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_ClusterBomb;                                    // 0xC70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_BiggerIsBetter;                                 // 0xC90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          T_GEContainer_Explosion;                           // 0xCB0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F1[0x4];                                     // Fixing Size After Last Property..
	double                                       ExplosionRadius;                                   // 0xCB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AdditionalThrowAngle;                              // 0xCC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_ClusterExplosion;                               // 0xCC8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F2[0x4];                                     // Fixing Size After Last Property..
	struct FFortFeedbackHandle                   GrenadeDialogFeedback;                             // 0xCD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                 TC_KeepOut;                                        // 0xCE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EC_KeepOut;                                        // 0xD00(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         BiggerIsBetter;                                    // 0xD04(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClusterBomb;                                       // 0xD05(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeepOut;                                           // 0xD06(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F3[0x1];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 TC_GrenadeAmmo;                                    // 0xD08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_GrenadeCost;                                    // 0xD28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_GrenadeDamage;                                  // 0xD48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         GrenadeAmmo;                                       // 0xD68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GrenadeCost;                                       // 0xD69(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GrenadeDamage;                                     // 0xD6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F4[0x1];                                     // Fixing Size After Last Property..
	int32                                        GrenadeAmmoUpgrade;                                // 0xD6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GrenadeAmmoDefault;                                // 0xD70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxGrenadeAmmo;                                    // 0xD74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusTooltip;                            // 0xD78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusDefault;                            // 0xD7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusUpgrade;                            // 0xD80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F5[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 TC_PlasmaGrenades;                                 // 0xD88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PlasmaGrenades;                                    // 0xDA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F6[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 TC_Flashbang;                                      // 0xDB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Flashbang;                                         // 0xDD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F7[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               GrenadeTargetingOriginOffset;                      // 0xDD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DummyShouldBounce;                                 // 0xDF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F8[0x7];                                     // Fixing Size After Last Property..
	double                                       DummyBounciness;                                   // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DummyFriction;                                     // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TrajectoryUpdateInterval;                          // 0xE08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DummyMaxSpeed;                                     // 0xE10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DummyGravity;                                      // 0xE18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DummyTimeStep;                                     // 0xE20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DummyExtent;                                       // 0xE28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InThrowWindup;                                     // 0xE30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94F9[0x7];                                     // Fixing Size After Last Property..
	class ABP_ProjectileTrajectory_C*            TrajectoryIndicator;                               // 0xE38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TrajectoryIndicatorClass;                          // 0xE40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo       ThrowWindupMontage;                                // 0xE48(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AbilityKeyPressed;                                 // 0xEA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FA[0x7];                                     // Fixing Size After Last Property..
	double                                       MaxSpeedPitch;                                     // 0xEA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinSpeedPitch;                                     // 0xEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTossPitch;                                      // 0xEB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTrajectoryBounces;                              // 0xEC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FB[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 TC_Tactical_Clusterbomb;                           // 0xEC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Tactical_Clusterbomb;                              // 0xEE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FC[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          EC_ClusterExplosion_Tactical;                      // 0xEEC(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       F_FrameDelay;                                      // 0xEF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BiggerIsBetter_T01;                                // 0xEF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BiggerIsBetter_T02;                                // 0xEF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClusterBomb_T01;                                   // 0xEFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClusterBomb_T02;                                   // 0xEFB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_BiggerIsBetter_T01;                              // 0xEFC(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_BiggerIsBetter_T02;                              // 0xF00(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_ClusterBomb_T01;                                 // 0xF04(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_ClusterBomb_T02;                                 // 0xF08(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FD[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        SF_BiggerIsBetterRadius_T01;                       // 0xF10(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                          ThrowMontage;                                      // 0xF38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Event_Activate;                                  // 0xF40(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Event_Deactivate;                                // 0xF44(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        SF_BiggerIsBetterRadius_T02;                       // 0xF48(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ECollisionChannel                 DummyCollisionChannel;                             // 0xF70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FE[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          ThrowCue;                                          // 0xF74(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Commando_FragGrenade_WithTrajectory_C");
		return Clss;
	}

	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut, class UAbilitySystemComponent* CallFunc_ActiveAbilitySetup_AbilitySystemOut, FInterfaceProperty_ CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, FInterfaceProperty_ CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1, FInterfaceProperty_ CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_2, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_2, FInterfaceProperty_ CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_3, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_3);
	void SpawnFragGrenade(class UClass* ProjectileClass, struct FVector& SpawnLocation, const struct FRotator& InputPin, const struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, double InitialSpeed, double GravityScale, class AB_Prj_Commando_FragGrenade_C* FragGrenade, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, class AB_Prj_Commando_FragGrenade_C* K2Node_DynamicCast_AsB_Prj_Commando_Frag_Grenade, bool K2Node_DynamicCast_bSuccess, float CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast, float CallFunc_SpawnProjectile_GravityScale_ImplicitCast);
	void CalcGrenadeSpeedFromPitch(double AimPitch, double* GrenadeSpeed, float CallFunc_NormalizeAxis_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast);
	void UpdateTrajectorySpline(TArray<class AActor*>& CallFunc_GetProjectileIgnoredActors_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_FMax_ReturnValue, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents, float CallFunc_CalculateProjectileTrajectorySpline_TraceExtent_ImplicitCast, float CallFunc_CalculateProjectileTrajectorySpline_TimeStep_ImplicitCast, float CallFunc_CalculateProjectileTrajectorySpline_Friction_ImplicitCast, float CallFunc_CalculateProjectileTrajectorySpline_Bounciness_ImplicitCast, float CallFunc_CalculateProjectileTrajectorySpline_Gravity_ImplicitCast, double CallFunc_CalcGrenadeSpeedFromPitch_AimPitch_ImplicitCast, float CallFunc_CalculateProjectileTrajectorySpline_MaxSpeed_ImplicitCast);
	void SetupDummyProjectile(const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FFortProjectileTrajectoryData& CallFunc_GetProjectileTrajectoryData_TrajectoryData, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess, double CallFunc_FMax_ReturnValue, float CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast, double K2Node_VariableSet_DummyMaxSpeed_ImplicitCast, double K2Node_VariableSet_DummyGravity_ImplicitCast, double CallFunc_FMax_A_ImplicitCast, double CallFunc_FMax_B_ImplicitCast, double K2Node_VariableSet_DummyBounciness_ImplicitCast, double K2Node_VariableSet_DummyFriction_ImplicitCast);
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_3, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_4, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_5, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_6, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_7, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_8);
	void SetupGrenade(double AimPitch, class UClass** Base_Grenade, double* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, double* Projectile_Gravity_Scale, double CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FScalableFloat& CallFunc_EvaluatePerkTierBalanceValue_Balance_Value, double CallFunc_GetRangeFromGameplayEffectContainerSpec_Range, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FFortGameplayEffectContainer& CallFunc_BP_GetGameplayEffectContainer_ReturnValue, double CallFunc_GetRangeFromGameplayEffectContainer_Range, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat, const struct FFortGameplayEffectContainer& CallFunc_ReplaceRangeInGameplayEffectContainer_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast);
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF();
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF();
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF();
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF();
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB();
	void Completed_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void K2_ActivateAbility();
	void TossGrenade();
	void ServerSpawnProjectile();
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_ActiveAbilitySetup_AbilitySystemOut, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UClass* CallFunc_SetupGrenade_Base_Grenade, double CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, double CallFunc_SetupGrenade_Projectile_Gravity_Scale, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered, bool CallFunc_SetHolsterWeaponWithName_OperationSuccessful, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue, bool CallFunc_CommitAbilityWithEvent_Passed, bool CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered_1, bool CallFunc_SetHolsterWeaponWithName_OperationSuccessful_1, double CallFunc_SetupGrenade_AimPitch_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
