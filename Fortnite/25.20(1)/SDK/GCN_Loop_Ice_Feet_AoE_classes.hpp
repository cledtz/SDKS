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

// 0xC0 (0xA28 - 0x968)
// BlueprintGeneratedClass GCN_Loop_Ice_Feet_AoE.GCN_Loop_Ice_Feet_AoE_C
class UGCN_Loop_Ice_Feet_AoE_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Duration;                                          // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExpirationTellDuration;                            // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       TargetPlayer;                                      // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExpireTellDelayTimer;                              // 0x988(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExpirationSoundTimer;                              // 0x990(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ExpirationSoundPeriod;                             // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>      SpawnedEmitters;                                   // 0x9A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       Crack;                                             // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DataTellDuration;                                  // 0x9B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            SC_Footstep_Local;                                 // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SC_Footstep_Remote;                                // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SC_Collision;                                      // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*          CollisionAudioComp;                                // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>               SpawnedAudioComps;                                 // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class USoundBase*                            SC_OnJumpOrBeginFalling;                           // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SC_OnLand;                                         // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ExpireFX;                                          // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_Ice_Feet_AoE_C");
		return Clss;
	}

	void OnLoopingStart(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void On_Player_Step();
	void On_Target_Pawn_Hit_Event(class UActor* SelfActor, class UActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void On_Target_Pawn_Landed(struct FHitResult& Hit);
	void On_Target_Pawn_Movement_Mode_Changed(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class UActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_AoE(int32 EntryPoint, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UActor* K2Node_CustomEvent_SelfActor, class UActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UParticleSystemComponent* CallFunc_Array_Get_Item_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Event_DeltaSeconds, const struct FTransform& Temp_struct_Variable, class UAudioComponent* CallFunc_Array_Get_Item_3, class UFortCollisionAudioComponent* CallFunc_AddComponent_ReturnValue, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_OnCollision_OutResult, float CallFunc_OnCollision_OutMagnitude, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool Temp_bool_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class USoundBase* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Variable, class UCharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UParticleSystemComponent* CallFunc_Array_Get_Item_4, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UPrimitiveComponent* K2Node_Event_MyComp, class UActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, double CallFunc_VSize_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, double K2Node_VariableSet_Duration_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_InFloat_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
