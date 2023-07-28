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

// 0x2F4 (0xD84 - 0xA90)
// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
class UB_Prj_Commando_FragGrenade_C : public UFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0xA98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fuse_Particle;                                     // 0xAA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0xAA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrenadeFuse_AudioComponent;                        // 0xAB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Effect_Distance;                                   // 0xAB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Explosion;                                       // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_DistantSound;                                  // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ExplosionRadius;                                   // 0xAD8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        NumberOfBouncesTillExplode;                        // 0xAE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentNumberOfBounces;                            // 0xAE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_GrenadeFuseSound;                              // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BouncePawnAgainstPawnGravityScale;                 // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxClusterGrenades;                                // 0xB08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_ClusterExplosion;                               // 0xB0C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasCluster;                                       // 0xB10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_9890[0x7];                                     // Fixing Size After Last Property..
	class UClass*                                Prj_Cluster;                                       // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      ClusterContainerSpec;                              // 0xB20(0xB8)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bHasKeepOut;                                       // 0xBD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9891[0x7];                                     // Fixing Size After Last Property..
	struct FFortGameplayEffectContainerSpec      KeepOutContainerSpec;                              // 0xBE0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                AOE_KeepOut;                                       // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasClusterTactical;                               // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_9892[0x7];                                     // Fixing Size After Last Property..
	struct FFortGameplayEffectContainerSpec      Cluster_Tactical_Container_Spec;                   // 0xCA8(0xB8)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTagContainer                 TC_ActorTagsThatShouldExplodeOnOverlap;            // 0xD60(0x20)(Edit, BlueprintVisible)
	struct FGameplayTag                          T_Event_GrenadeExploded;                           // 0xD80(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Commando_FragGrenade_C");
		return Clss;
	}

	void SpawnKeepOut(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UFortAreaOfEffectCloud* CallFunc_SpawnAreaOfEffectCloud_ReturnValue, class UAOE_Commando_KeepOutExplosion_C* K2Node_DynamicCast_AsAOE_Commando_Keep_Out_Explosion, bool K2Node_DynamicCast_bSuccess);
	void SpawnClusters(double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, double CallFunc_RandomFloatInRange_ReturnValue_2, int32 Temp_int_Variable, const struct FFortGameplayEffectContainerSpec& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class UFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast);
	double CalcGrenadeSpeed(double Angle, double GrenadeSpeedMin, double GrenadeSpeedMax, double MaxSpeedPitch, double MinSpeedPitch, float CallFunc_NormalizeAxis_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast);
	void OnRep_StoredHit();
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult& Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class UActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class UController* InstigatedBy, class UActor* DamageCauser);
	void OnBounce(struct FHitResult& Hit);
	void On_Destroy_Grenade(class UActor* DestroyedActor);
	void Bind_Destroy_Grenade();
	void Force_On_Exploded_Effects();
	void Unbind_Destroy_Grenade();
	void TriggerDoExplsoion();
	void ReceiveDestroyed();
	void CheckKeepOutAndCluster();
	void ReceiveActorBeginOverlap(class UActor* OtherActor);
	void SendExplodedEvent();
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable, const struct FHitResult& K2Node_Event_Hit_1, class UController* CallFunc_GetInstigatorController_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, TArray<class UActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class UController* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UPawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UPawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UPawn* CallFunc_GetInstigator_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UPawn* CallFunc_GetInstigator_ReturnValue_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UActor* K2Node_CustomEvent_DestroyedActor, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool Temp_bool_IsClosed_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UActor* K2Node_Event_OtherActor, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, class UPawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class UPawn* CallFunc_GetInstigator_ReturnValue_3, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetingLocationInfo& K2Node_MakeStruct_GameplayAbilityTargetingLocationInfo, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromLocations_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, float K2Node_VariableSet_ProjectileGravityScale_ImplicitCast, float CallFunc_PlayLocalForceFeedbackAtLocationMulti_InnerRadius_ImplicitCast, float CallFunc_PlayLocalForceFeedbackAtLocationMulti_OuterRadius_ImplicitCast, float K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1, double CallFunc_Multiply_VectorFloat_B_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
