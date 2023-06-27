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

// 0x40 (0x9A0 - 0x960)
// BlueprintGeneratedClass GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C
class AGCNL_Zipline_Downhill_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x960(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULegacyCameraShake*                    MatineeCamShake;                                   // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MinCamShakeAmp;                                    // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxCamShakeAmp;                                    // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinCamShakeFreq;                                   // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxCamShakeFreq;                                   // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CameraShakeTimerHandle;                            // 0x998(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Zipline_Downhill_C");
		return Clss;
	}

	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void CameraShakeTimer();
	void ExecuteUbergraph_GCNL_Zipline_Downhill(int32 EntryPoint, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetZiplineSpeedFactor_ReturnValue, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, double CallFunc_Square_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class ULegacyCameraShake* CallFunc_Conv_LegacyCameraShake_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, const struct FFOscillator& K2Node_MakeStruct_FOscillator, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FROscillator& K2Node_MakeStruct_ROscillator, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Square_A_ImplicitCast, float K2Node_MakeStruct_Amplitude_ImplicitCast, float K2Node_MakeStruct_Frequency_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
