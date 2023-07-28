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

// 0x180 (0xAE8 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C
class UGCNL_Athena_VictoryCrown_CrownWearer_Looping_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Intro_Ambient_FX_Timeline_Ambient_FX_Volume_EE4EF3FC4169AF85C3E076ADB15A9FAB; // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Intro_Ambient_FX_Timeline__Direction_EE4EF3FC4169AF85C3E076ADB15A9FAB; // 0x974(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9619[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Intro_Ambient_FX_Timeline;                         // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Intro_Flare_Timeline_Flare_FX_Volume_DC12FFA64C913C89F456A7BA1F0987D7; // 0x980(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Intro_Flare_Timeline__Direction_DC12FFA64C913C89F456A7BA1F0987D7; // 0x984(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_961A[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Intro_Flare_Timeline;                              // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Audio_Vizualizer_Shown_On_Wearer_;                 // 0x990(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Audio_Vizualizer_Range;                            // 0x9B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Audio_Vizualizer_Ping_Frequency;                   // 0x9E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Intro_AmbientFX_Timeline_Rate;                     // 0xA08(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Intro_Flare_Timline_Rate;                          // 0xA30(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Intro_FX_Visual_Volume;                            // 0xA58(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        _1st_Person_FX_Visual_Volume;                      // 0xA80(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        _3rd_Perosn_FX_Visual_Volume;                      // 0xAA8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          Timer_handle;                                      // 0xAD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UFXSystemComponent*>            Particle_Components;                               // 0xAD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_VictoryCrown_CrownWearer_Looping_C");
		return Clss;
	}

	void GetVisualVolume(bool IsFirstPerson, double* NewParam1, bool Temp_bool_Variable, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Option_0_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast);
	void Intro_Ambient_FX_Timeline__FinishedFunc();
	void Intro_Ambient_FX_Timeline__UpdateFunc();
	void Intro_Flare_Timeline__FinishedFunc();
	void Intro_Flare_Timeline__UpdateFunc();
	void AVIndicatorLoop();
	void OnRemovalGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void OnApplicationGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping(int32 EntryPoint, TArray<class UFortPlayerController*>& Temp_object_Variable, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, class UActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class UDecalActor* K2Node_Event_BurstDecalInstance_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, TArray<class UFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, bool CallFunc_Array_Contains_ReturnValue, double CallFunc_GetVisualVolume_NewParam1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
