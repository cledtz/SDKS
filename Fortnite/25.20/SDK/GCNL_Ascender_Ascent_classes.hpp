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

// 0x60 (0x9C8 - 0x968)
// BlueprintGeneratedClass GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C
class AGCNL_Ascender_Ascent_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MinCamShakeAmp;                                    // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxCamShakeAmp;                                    // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinCamShakeFreq;                                   // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxCamShakeFreq;                                   // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULegacyCameraShake*                    MatineeCamShake;                                   // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxAscenderSpeed;                                  // 0x9A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Ascender_Ascent_C");
		return Clss;
	}

	void OnApplicationGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void CameraShakeTimer();
	void ExecuteUbergraph_GCNL_Ascender_Ascent(int32 EntryPoint, class AActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, double CallFunc_VSize_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_FMax_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, class ULegacyCameraShake* CallFunc_Conv_LegacyCameraShake_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_StartCameraShake_Scale_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
