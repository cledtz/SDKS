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

// 0x38 (0x9A0 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C
class AGCNL_Athena_Player_Sliding_Speedlines_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFXSystemComponent*                    DustFX;                                            // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortMovementComp_Character*           CachedMovementCmponent;                            // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CachedLocalViewingPlayerController;                // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CachedPlayerPawn;                                  // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsGraceFalling;                                   // 0x990(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTickFree;                                         // 0x991(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80C3[0x6];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          DustStateTimerHandle;                              // 0x998(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_Player_Sliding_Speedlines_C");
		return Clss;
	}

	void RefreshDustStateTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue);
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void On_View_Target_Changed(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget);
	void UpdateDustState();
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UFXSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class UFortMovementComp_Character* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class AFortPlayerController* K2Node_CustomEvent_PlayerController, class AActor* K2Node_CustomEvent_OldViewTarget, class AActor* K2Node_CustomEvent_NewViewTarget, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyViewed_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
