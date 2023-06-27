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

// 0x91 (0xB81 - 0xAF0)
// BlueprintGeneratedClass GCNL_Grinding.GCNL_Grinding_C
class AGCNL_Grinding_C : public AFortGameplayCueNotifyLoop_Grinding
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortSoundIndicatorComponent*          FortSoundIndicator;                                // 0xAF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AlphaCurve_AlphaCurve_9B7371B340D33525AE3B1686831C0FC6; // 0xB00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                AlphaCurve__Direction_9B7371B340D33525AE3B1686831C0FC6; // 0xB04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A09D[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    AlphaCurve;                                        // 0xB08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    GrindRailFX;                                       // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_GrindingComponent_C*               Cached_Grinding_Component;                         // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrindAudioLoop;                                    // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrindAudioStart;                                   // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn_0;                                      // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EColorSelect                      ColorEnum;                                         // 0xB38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A09E[0x7];                                     // Fixing Size After Last Property..
	class AFortGrindRail*                        GrindRail;                                         // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABuildingGameplayActor*                GrindingRail;                                      // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       JumpOffAudio;                                      // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        NotRenderedDisableEffectsTime;                     // 0xB58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A09F[0x4];                                     // Fixing Size After Last Property..
	class USoundBase*                            StartLoopSound;                                    // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            LeanForwardSound;                                  // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            JumpUpSound;                                       // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LeanForwardAudio;                                  // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bGrinding;                                         // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Grinding_C");
		return Clss;
	}

	void AllowAudio();
	void OnJumpedOff(bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void GrindAudioState(bool Start, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_OnLocalPlayersTeam_Return_Value, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void AlphaCurve__FinishedFunc();
	void AlphaCurve__UpdateFunc();
	void OnFeetLanded();
	void OnGrindRailSprint(bool bNewIsSprinting);
	void OnGrindRailBoosterMode(enum class EGrindRailBoosterMode PreviousBoosterMode);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnApplicationGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void HandleGrindRailChanged(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail);
	void OnForwardChanged(bool bNewState);
	void ReceiveTick(float DeltaSeconds);
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_Grinding(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_bNewIsSprinting, bool K2Node_SwitchEnum_CmpSuccess, enum class EGrindRailBoosterMode K2Node_CustomEvent_PreviousBoosterMode, bool K2Node_SwitchEnum_CmpSuccess_1, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_MyTarget_2, const struct FGameplayCueParameters& K2Node_Event_Parameters_2, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_2, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class ADecalActor* K2Node_Event_BurstDecalInstance_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortGrindRail* K2Node_CustomEvent_OldRail, class AFortGrindRail* K2Node_CustomEvent_NewRail, class ABGA_GrindRail_C* K2Node_DynamicCast_AsBGA_Grind_Rail, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_Event_bNewState, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UAudioComponent* CallFunc_Array_Get_Item, class UFXSystemComponent* CallFunc_Array_Get_Item_1, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
