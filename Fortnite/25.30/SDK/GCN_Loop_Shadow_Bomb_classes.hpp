#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0xB38 - 0x968)
// BlueprintGeneratedClass GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C
class UGCN_Loop_Shadow_Bomb_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_0_Visbility_E1DFEC9547FE3FAED2AFF3B0D8598182; // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_E1DFEC9547FE3FAED2AFF3B0D8598182; // 0x974(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91C8[0x3];                                     // Fixing Size After Last Property
	class UTimelineComponent*                    Timeline_0;                                        // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       TargetPlayer;                                      // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ExpirationSoundPeriod;                             // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VelocityInterp;                                    // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>      AttachedFX;                                        // 0x998(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>        PlayerSkeletalMeshes;                              // 0x9A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         FriendlyPlayer;                                    // 0x9B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91CA[0x7];                                     // Fixing Size After Last Property
	struct FTimerHandle                          ExpireTellDelayTimer;                              // 0x9C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExpirationSoundTimer;                              // 0x9C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       VisbilityLevel;                                    // 0x9D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WalkVisMultiplier;                                 // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SprintVisMultiplier;                               // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinFriendlyOpacity;                                // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InteractVisibility;                                // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        DataDuration;                                      // 0x9F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataTellDuration;                                  // 0xA20(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataWalkVisMult;                                   // 0xA48(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataSprintVisMult;                                 // 0xA70(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataFriendlyVisMult;                               // 0xA98(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DataShadowPlaneOpacity;                            // 0xAC0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTimelineComponent*                    FadeinOut;                                         // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         TickENabled;                                       // 0xAF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91CB[0x7];                                     // Fixing Size After Last Property
	struct FScalableFloat                        SmokeBombDuration;                                 // 0xAF8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       TellDuration;                                      // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExpireTellOpacity;                                 // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SmokeBombDurationUserSpecified;                    // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_Shadow_Bomb_C");
		return Clss;
	}

	void UnbindEquippedWeapon(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void GetSkeletalMeshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnRemoval(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void OnLoopingStart(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void UpdateTeamVisbility();
	void Audio_Tick();
	void StartedInteract();
	void EndedInteract();
	void OnFinishedCharacterCustomization_Bind(class UFortPlayerPawn* Pawn);
	void OnWeaponEquippedDelegate_Event_0(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
	void ExecuteUbergraph_GCN_Loop_Shadow_Bomb(int32 EntryPoint, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_Array_Get_Item, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UParticleSystemComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, float CallFunc_GetValueAtLevel_ReturnValue_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2, TArray<class UFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_3, class UFortPlayerController* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_GetIsBroadcastClient_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_4, class UParticleSystemComponent* CallFunc_Array_Get_Item_4, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class UParticleSystemComponent* CallFunc_Array_Get_Item_5, double CallFunc_Abs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, class UParticleSystemComponent* CallFunc_Array_Get_Item_7, class UParticleSystemComponent* CallFunc_Array_Get_Item_8, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class USkeletalMeshComponent* CallFunc_Array_Get_Item_9, bool CallFunc_IsLocallyControlled_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_4, bool CallFunc_GetIsPlayingReplay_ReturnValue_2, bool CallFunc_GetIsBroadcastClient_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class UFortPlayerPawn* K2Node_CustomEvent_Pawn, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UFortWeapon* K2Node_CustomEvent_NewWeapon, class UFortWeapon* K2Node_CustomEvent_PrevWeapon, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, float CallFunc_SetFloatParameter_InFloat_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, double K2Node_VariableSet_WalkVisMultiplier_ImplicitCast, double K2Node_VariableSet_SprintVisMultiplier_ImplicitCast, double K2Node_VariableSet_MinFriendlyOpacity_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1, double K2Node_VariableSet_InteractVisibility_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
