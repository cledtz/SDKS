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

// 0x1A5 (0xC35 - 0xA90)
// BlueprintGeneratedClass B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C
class UB_Prj_Athena_Grenade_Base_C : public UFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortCollisionAudioComponent*          FortCollisionAudio;                                // 0xA98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0xAA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fuse_Particle;                                     // 0xAA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0xAB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrenadeFuse_AudioComponent;                        // 0xAB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Effect_Distance;                                   // 0xAC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UParticleSystem>        P_Explosion;                                       // 0xAC8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class USoundBase*                            Cue_ExplosionSound;                                // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UParticleSystem>        P_Explosion_Water;                                 // 0xAF8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        NumberOfBouncesTillExplode;                        // 0xB20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentNumberOfBounces;                            // 0xB24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_GrenadeFuseSound;                              // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BouncePawnAgainstPawnGravityScale;                 // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_Bounce;                                        // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ExplosionCameraShake;                              // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       FuseTime;                                          // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExplosionRadius;                                   // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Explosion_Rotation;                                // 0xB68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAudioComponent*                       WaterFuseAudioComponent;                           // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Water_Debris_Explosion;                            // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Splash_Sound;                                      // 0xB90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              SoundIndicatorIcon;                                // 0xB98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FuseIndicatorTimer;                                // 0xBA0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         NS_Explosion;                                      // 0xBA8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         NS_Explosion_Water;                                // 0xBD0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EFXType                           FXType;                                            // 0xBF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B8[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemAsset*                        VFX_Explosion;                                     // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                        VFX_Explosion_Water;                               // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FuseTimer_;                                        // 0xC10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_HitWater;                                       // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            WaterFuseSound;                                    // 0xC20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                        FX_Physical_Surface;                               // 0xC28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        PhysicalSurfaceID;                                 // 0xC30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowFuseSoundIndicator;                           // 0xC34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_Grenade_Base_C");
		return Clss;
	}

	void PhysicalSurfaceCheck(int32 Physical_Surface_ID, bool* CheckedPhysicalSurfaceID, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void GetExplosion(bool InWater, class UFXSystemAsset** FX_System, bool Temp_bool_Variable, class UFXSystemAsset* K2Node_Select_Default);
	void FuseEnded();
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnLoaded_6A6D02914DCE95902837C994D84D08EA(class UObject* Loaded);
	void OnLoaded_6A6D02914DCE95902837C994C3BE7DC5(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult& Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class UActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void OnBounce(struct FHitResult& Hit);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class UController* InstigatedBy, class UActor* DamageCauser);
	void OnResumeSimulation();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void Splash(class UFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(class UFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void Held_Water_Impact();
	void ShowFuseIndicator();
	void AysncLoad();
	void ExecuteUbergraph_B_Prj_Athena_Grenade_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsNullItem_Is_Null_Item, bool CallFunc_IsNullItem_Is_Null_Item_1, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FHitResult& K2Node_Event_Hit_1, TArray<class UActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ComponentHasTag_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_PhysicalSurfaceCheck_CheckedPhysicalSurfaceID, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Abs_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class UPawn* CallFunc_GetInstigator_ReturnValue, class UPawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class UController* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UObject* Temp_object_Variable, class UFXSystemAsset* K2Node_DynamicCast_AsFXSystem_Asset, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_OnCollision_OutResult, float CallFunc_OnCollision_OutMagnitude, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UObject* Temp_object_Variable_1, class UFXSystemAsset* K2Node_DynamicCast_AsFXSystem_Asset_1, bool K2Node_DynamicCast_bSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class UActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPawn* CallFunc_GetInstigator_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class UActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class UPawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsInWater_ReturnValue, class UFXSystemAsset* CallFunc_GetExplosion_FX_System, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue, class UFortWaterBodyActor* K2Node_CustomEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_CustomEvent_WaterInteractionComponent, bool K2Node_CustomEvent_bIsFirstBody, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UObject* K2Node_CustomEvent_Loaded_1, bool Temp_bool_Variable, bool CallFunc_IsInWater_ReturnValue_1, TSoftObjectPtr<class UObject> K2Node_Select_Default, bool CallFunc_IsAssetNull_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, class UFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsFirstBody, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, class UObject* K2Node_CustomEvent_Loaded, TArray<class UFortPlayerController*>& Temp_object_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, bool CallFunc_IsDedicatedServer_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_8, const struct FWaterSurfaceInfo& CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_1, bool CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1, TArray<class UFortPlayerController*>& Temp_object_Variable_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_4, TSoftObjectPtr<class UObject> K2Node_Select_Default_1, bool CallFunc_IsAssetNull_ReturnValue_1, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_2, float K2Node_VariableSet_ProjectileGravityScale_ImplicitCast, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, float K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
