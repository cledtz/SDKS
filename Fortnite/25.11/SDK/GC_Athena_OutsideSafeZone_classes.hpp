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

// 0xB1 (0xA11 - 0x960)
// BlueprintGeneratedClass GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C
class AGC_Athena_OutsideSafeZone_C : public AFortGameplayCueNotifyLoop_OutsideSafeZone
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  Random_Lighting_Light;                             // 0x968(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A; // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A; // 0x974(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDC[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    LightningFlashTL;                                  // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Storm_Sound;                                       // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LightningFlashDiameter;                            // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LightningFlashHeight;                              // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Lightning_Spawn_Location;                          // 0x998(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       _ChanceOfLightningMesh;                            // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Lightning_Intensity;                               // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LightningIntensityMin;                             // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LightningIntensityMax;                             // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LightningTimelinePlaySpeedMin;                     // 0x9D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LightningTimelinePlaySpeedMax;                     // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_Generic_C*          Player_Pawn;                                       // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LightningFlashRepeatDelayMin;                      // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LightningFlashRepeatDelayMax;                      // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Storm_Stage;                                       // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          StormAudioTag_Low;                                 // 0x9FC(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          StormAudioTag_Medium;                              // 0xA00(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          StormAudioTag_High;                                // 0xA04(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAmbientAudioDataAsset*                StormAudioBank;                                    // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         StormEffectsEnabled;                               // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Athena_OutsideSafeZone_C");
		return Clss;
	}

	void Random_Lighting_Flashes(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Get_Location_in_Circle_XY_Location_Local_Space, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_SetPlayRate_NewRate_ImplicitCast);
	void Get_Location_in_Circle_XY(struct FVector* Location_Local_Space, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_RandomFloat_ReturnValue, double CallFunc_GetPI_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Cos_ReturnValue, double CallFunc_Sin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_VLerp_Alpha_ImplicitCast);
	void LightningFlashTL__FinishedFunc();
	void LightningFlashTL__UpdateFunc();
	void FlashTimeline();
	void OnStormEffectsEnabled(bool bEnabled);
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue_1, double CallFunc_Lerp_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool K2Node_Event_bEnabled, bool CallFunc_BooleanAND_ReturnValue, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UFXSystemComponent* CallFunc_Array_Get_Item, class APlayerPawn_Athena_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
