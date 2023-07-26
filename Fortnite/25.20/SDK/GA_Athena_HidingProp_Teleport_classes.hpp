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

// 0x98 (0xBC0 - 0xB28)
// BlueprintGeneratedClass GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C
class UGA_Athena_HidingProp_Teleport_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            NewEventDispatcher_0;                              // 0xB30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AB_HidingProp_C*                       HidingProp;                                        // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AB_HidingProp_C*                       TargetTeleporter;                                  // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_HudElementToHide;                                // 0xB50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          TargetPropTeleportingCue;                          // 0xB70(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A13[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          WobbleHandle;                                      // 0xB78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          WobbleCue;                                         // 0xB80(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A14[0x4];                                     // Fixing Size After Last Property..
	double                                       ServerWorldTime;                                   // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EnterCue;                                          // 0xB90(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          HidingInPropTag;                                   // 0xB94(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ChangeEquipmentTag;                                // 0xB98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle           TeleportingGEOnPlayer;                             // 0xBB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_HidingProp_Teleport_C");
		return Clss;
	}

	void Added_FD079A2341CDD832DF47CD975DFC3BB3();
	void OnComplete_EE0FA6804073079396C44591432259C0();
	void Added_67FE14EA4DF2D8C2DB494AA89443681B();
	void Added_CB8220A04B74338E758C11B7371D4630();
	void Added_F96D6DD549939CA425D2D1BE1AD32090();
	void EventReceived_ABAD14334D754F46E9037882BF0256B6(const struct FGameplayEventData& Payload);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void QuestUpdate(class AFortPawn* Pawn);
	void Wobble();
	void OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void GrapplerFailSafe(class AFortPawn* FortPawn);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Athena_HidingProp_Teleport(int32 EntryPoint, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, class FName Temp_name_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, class AB_HidingProp_C* K2Node_DynamicCast_AsB_Hiding_Prop, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class AFortPawn* K2Node_CustomEvent_Pawn, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, bool Temp_bool_Variable, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_3, bool K2Node_DynamicCast_bSuccess_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& K2Node_Select_Default, class UFortAsyncAction_TeleportAndWaitForLevelStreaming* CallFunc_CreateTeleportAndWaitForLevelStreaming_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_TeleportPlayerPawn_ReturnValue, int32 CallFunc_IncrementAnalyticMatchCount_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_3, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_6, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_7, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_8, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6, class FName Temp_name_Variable_1, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, class AFortPawn* K2Node_CustomEvent_FortPawn, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_9, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_ServerWorldTime_ImplicitCast, float CallFunc_FireAnalyticEventEnvironmentalItemUsed_SessionLength_ImplicitCast);
	void NewEventDispatcher_0__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
