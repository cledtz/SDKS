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

// 0x81 (0x9E9 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C
class AGCNL_Athena_Player_Sliding_CameraShake_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x970(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_BlendWeight_11D30796436EDF3C6112C3BD3BA47DBC; // 0x978(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_11D30796436EDF3C6112C3BD3BA47DBC; // 0x97C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FDA[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_0;                                        // 0x980(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULegacyCameraShake*                    MatineeCamShake;                                   // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MinCamShakeAmp;                                    // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxCamShakeAmp;                                    // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinCamShakeFreq;                                   // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxCamShakeFreq;                                   // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxSlideSpeed;                                     // 0x9B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       CameraShakeSpeed;                                  // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSuperHigh;                                      // 0x9E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_Player_Sliding_CameraShake_C");
		return Clss;
	}

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void CameraShakeTimer();
	void OnApplicationGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake(int32 EntryPoint, class AActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, int64 CallFunc_Conv_DoubleToInt64_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class ULegacyCameraShake* CallFunc_Conv_LegacyCameraShake_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetValueAtLevel_ReturnValue, int64 CallFunc_Conv_DoubleToInt64_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Divide_Int64Int64UsingFloatingPoint_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, const struct FFOscillator& K2Node_MakeStruct_FOscillator, const struct FROscillator& K2Node_MakeStruct_ROscillator, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Conv_DoubleToInt64_InDouble_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, float K2Node_MakeStruct_Frequency_ImplicitCast, float K2Node_MakeStruct_Amplitude_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
