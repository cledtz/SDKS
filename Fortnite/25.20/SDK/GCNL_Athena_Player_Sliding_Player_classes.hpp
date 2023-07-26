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

// 0x78 (0xA70 - 0x9F8)
// BlueprintGeneratedClass GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C
class AGCNL_Athena_Player_Sliding_Player_C : public AFortGameplayCueNotifyLoop_Sliding
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortCollisionAudioComponent*          FortCollisionAudio;                                // 0xA00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bUpdateAudioParams;                                // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F79[0x7];                                     // Fixing Size After Last Property..
	double                                       VelocityLengthAudioParam;                          // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ZVelocityAudioParam;                               // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StopSlideSound;                                    // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Stop_Slide_Audio;                                  // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SlidingFailsafeTimerHandle;                        // 0xA30(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StartSlideSound;                                   // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortMovementComp_Character*           Cached_Movement_ComponentRef;                      // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    Dust_FX;                                           // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsGraceFalling;                                   // 0xA50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F7A[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          SpeedLineTimerHandle;                              // 0xA58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        SurfaceTypeInt;                                    // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F7B[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          SlideAudioTimerHandle;                             // 0xA68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_Player_Sliding_Player_C");
		return Clss;
	}

	void CheckSurfaceType(class AFortPawn* Pawn, int32* SurfaceTypeInt, enum class EFortFootstepSurfaceType CallFunc_GetFootstepSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5);
	void ToggleLoopingSoundIndicator(bool bEnableSoundIndicator, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void On_Target_Pawn_Actor_Hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_OnCollision_OutResult, float CallFunc_OnCollision_OutMagnitude);
	void UpdateSoundComponentParameters(class AFortPlayerPawn* PlayerPawn, class UAudioComponent* AudioComponent, bool CallFunc_IsLocallyViewed_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput_1);
	void StopSlideAudio(bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateSlideAudio(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_SetFloatParameterExt_Value_ImplicitCast, float CallFunc_SetFloatParameterExt_Value_ImplicitCast_1);
	void StartSlideAudio(bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput, FInterfaceProperty_ CallFunc_SetBoolParameter_self_CastInput_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void ResetAudioData(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Sliding_Failsafe_Check();
	void Stop_Sliding_Audio();
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ResumeSlidingAudio();
	void Update_Speed_Line();
	void UpdateSurfaceType();
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class UFXSystemComponent* CallFunc_Array_Get_Item, class UFortMovementComp_Character* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_CheckSurfaceType_SurfaceTypeInt);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
