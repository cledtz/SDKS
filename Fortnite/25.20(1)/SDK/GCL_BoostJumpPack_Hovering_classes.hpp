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

// 0xD8 (0xB80 - 0xAA8)
// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
class UGCL_BoostJumpPack_Hovering_C : public UGameplayCueNotify_Jetpack_Hovering
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bJetpackAudioEnabled;                              // 0xAB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CEE[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            SoundOnStart;                                      // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnStop;                                       // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnIdle;                                   // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnAccel;                                  // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnOutOfFuel;                              // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFuelWarning;                                // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnOutOfFuel;                                  // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              GroundInteract;                                    // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMeshComponent> Milo_Check;                                        // 0xAF8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                Milo_Backpack;                                     // 0xB20(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                               Milo_LightScale;                                   // 0xB48(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachSocketName;                                  // 0xB60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CEF[0x4];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    VFX;                                               // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_GroundInteraction;                               // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                        NS_Hover;                                          // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_BoostJumpPack_Hovering_C");
		return Clss;
	}

	void SetJetpackAudioEnabled(bool Enabled, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_2);
	bool OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OnRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool OnActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& Temp_struct_Variable, bool Temp_bool_Variable, const struct FVector& K2Node_Select_Default);
	void ResetFX();
	void K2_HandleGameplayCue(class UActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ReceiveDestroyed();
	void PlayLowFuelWarning();
	void TryToPlayGroundEffects();
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int32 EntryPoint, TArray<class UActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue_3, class UActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsPlaying_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, float CallFunc_SetFloatParameter_Param_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
