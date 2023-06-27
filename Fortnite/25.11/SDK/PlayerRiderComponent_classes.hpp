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

// 0x110 (0x7E0 - 0x6D0)
// BlueprintGeneratedClass PlayerRiderComponent.PlayerRiderComponent_C
class UPlayerRiderComponent_C : public UControllingRiderComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 T_PlayerIsRiding;                                  // 0x6D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_PlayerIsRiding;                                 // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       FortPlayerRef;                                     // 0x700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       JumpOnMountDistanceCheck;                          // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RiderUINewStats;                                   // 0x710(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            RiderUIEnd;                                        // 0x720(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       TargetEnergy;                                      // 0x730(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                       TargetHealth;                                      // 0x738(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_CannotRideBucket;                                // 0x740(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            RiderUIUpdateEnergy;                               // 0x760(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            RiderUIUpdateHealth;                               // 0x770(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                CachedRidableActor;                                // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Cannot_Ride_Rider_Bucket;                          // 0x788(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          JumpOnCreature_Cue_Tag;                            // 0x7A8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E32[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UGameplayEffect>           GE_PlayerPetting;                                  // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Tag_Quests_Wildlife_Pet;                           // 0x7B8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAbilityAsync_WaitGameplayTagAdded*    ActiveRidableBlockRidingGameplayTagAsyncAction;    // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerRiderComponent_C");
		return Clss;
	}

	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
	void OnRep_targetHealth();
	void OnRep_targetEnergy();
	void GetJumpInfo(class AActor* TargetActor, class UActorComponent** TargetActorComponent, double* JumpAttach_GroundHeightMin, double* JumpAttach_GroundHeightBuffer, bool* UseAltRidingMessage, class UCreatureBaseNonRidableComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UCreatureBaseRidableComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void TestIfValidForRidingAttempt(class UObject* Object, bool* Success, class UObject** TargetObject, bool* UseAltRidingMessage, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UActorComponent* CallFunc_GetJumpInfo_TargetActorComponent, double CallFunc_GetJumpInfo_JumpAttach_GroundHeightMin, double CallFunc_GetJumpInfo_JumpAttach_GroundHeightBuffer, bool CallFunc_GetJumpInfo_UseAltRidingMessage, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_1, class UObject* K2Node_Select_Default, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GetOnlyLeaderInteraction_ReturnValue, class AFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1);
	void ToggleRiding(class AActor* PlayerPawn, class AActor* Target, bool ShouldRide, bool* bChangedRiding, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_StopRidingActor_ReturnValue, bool CallFunc_StartRidingActor_ReturnValue, class UControllingRiderComponent* K2Node_DynamicCast_AsControlling_Rider_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1);
	void EventReceived_E5B5FB5340DB5660002329825657B406(const struct FGameplayEventData& Payload);
	void Added_42EF586645CCFF06FFA4D9A5D59B1298();
	void Added_A83C775344FE0F6BDAAC4B971F57425E();
	void EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(const struct FGameplayEventData& Payload);
	void Added_D3DFE4374EED456A4C597E95375A2028();
	void ToggleRidingAlternative();
	void ReceiveBeginPlay();
	void HandleStartedRiding(class URidableComponent* Ridable);
	void HandleStoppedRiding(class URidableComponent* Ridable);
	void ToggleRidingOnServer(class UObject* TargetObject, bool UseAltRidingMessage);
	void SetTargetHealth(double TargetHealth);
	void RiderUIStartClient(class FText Name, const struct FSlateBrush& Icon, class AActor* Ridable);
	void RiderUIEndClient(class AActor* Ridable);
	void MovementModeChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void MountLanded(struct FHitResult& Hit);
	void HandleRequestPettingStart();
	void HandleRequestPettingStop();
	void HandleRidableFound(struct FHitResult& HitResult);
	void ExecuteUbergraph_PlayerRiderComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class URidableComponent* K2Node_Event_Ridable_1, class URidableComponent* K2Node_Event_Ridable, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_4, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToSelf_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_6, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UObject* K2Node_CustomEvent_TargetObject, bool K2Node_CustomEvent_UseAltRidingMessage, FInterfaceProperty_ K2Node_DynamicCast_AsRiding_Generic_Interafce, bool K2Node_DynamicCast_bSuccess_3, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_ToggleRiding_bChangedRiding, const struct FGameplayEventData& Temp_struct_Variable_1, double K2Node_CustomEvent_targetHealth, class FText K2Node_CustomEvent_Name, const struct FSlateBrush& K2Node_CustomEvent_Icon, class AActor* K2Node_CustomEvent_Ridable_1, class AActor* K2Node_CustomEvent_Ridable, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_StopRidingActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_7, class UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue, class UAbilityAsync_WaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FGameplayEventData& K2Node_CustomEvent_Payload_1, bool CallFunc_StopRidingActor_ReturnValue_1, const struct FGameplayEventData& Temp_struct_Variable_2, class AActor* CallFunc_GetOwner_ReturnValue_8, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_6, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, const struct FGameplayEventData& K2Node_CustomEvent_Payload, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& K2Node_CustomEvent_Hit, class AActor* CallFunc_GetOwner_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_8, class AActor* CallFunc_GetOwner_ReturnValue_10, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_5, class AActor* CallFunc_GetOwner_ReturnValue_11, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class UCreatureBaseRidableComponent_C* K2Node_DynamicCast_AsCreature_Base_Ridable_Component, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_12, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_1, bool CallFunc_IsRidingActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_CanBePet_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_11, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_12, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FHitResult& K2Node_Event_HitResult, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_TestIfValidForRidingAttempt_Success, class UObject* CallFunc_TestIfValidForRidingAttempt_TargetObject, bool CallFunc_TestIfValidForRidingAttempt_UseAltRidingMessage, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_16, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, class AActor* CallFunc_GetOwner_ReturnValue_17, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_7, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_IsValid_ReturnValue_16, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast);
	void RiderUIUpdateHealth__DelegateSignature(double Health);
	void RiderUIUpdateEnergy__DelegateSignature(double Energy);
	void RiderUIEnd__DelegateSignature(class AActor* RidableActor);
	void RiderUINewStats__DelegateSignature(class FText Name, const struct FSlateBrush& Icon, class AActor* RidableActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif