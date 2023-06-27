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

// 0xE8 (0xB88 - 0xAA0)
// BlueprintGeneratedClass GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C
class AGCNL_Jetpack_Hover_Lateral_C : public AGameplayCueNotify_Jetpack_Hovering
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bJetpackAudioEnabled;                              // 0xAA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BD[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            SoundOnStart;                                      // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnStop;                                       // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnIdle;                                   // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnAccel;                                  // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnOutOfFuel;                              // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnFuelWarning;                                // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnOutOfFuel;                                  // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFirstJump;                                      // 0xAE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BE[0x7];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              GroundInteract;                                    // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMeshComponent> Milo_Check;                                        // 0xAF8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                Milo_Backpack;                                     // 0xB20(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                               Milo_LightScale;                                   // 0xB48(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HoverEffect;                                       // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachSocketName;                                  // 0xB68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BF[0x4];                                     // Fixing Size After Last Property..
	class UParticleSystem*                       P_GroundInteract;                                  // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    HoverFXSystem;                                     // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                        NS_Hover;                                          // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Jetpack_Hover_Lateral_C");
		return Clss;
	}

	void SetJetpackAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_2);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OnRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMesh* CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& Temp_struct_Variable, bool Temp_bool_Variable, const struct FVector& K2Node_Select_Default);
	void ResetFX();
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ReceiveDestroyed();
	void TryToPlayGroundEffects();
	void ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool Temp_bool_IsClosed_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
