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

// 0x234 (0xD7C - 0xB48)
// BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C
class UGA_BoostJumpPack_C : public UFortGameplayAbility_JumpBoostPack
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Jump_Multiple;                                     // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Basic_Jump_Z_Adjust;                               // 0xB58(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FinalJumpHeight;                                   // 0xB70(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventTriggerData;                                  // 0xB88(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bJumpButtonHeld;                                   // 0xC38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHoverButtonHeld;                                  // 0xC39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAtApex;                                           // 0xC3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A5F[0x1];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           JetpackEffectHandle;                               // 0xC3C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A60[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       FuelFudge;                                         // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           RegenEffectHandle;                                 // 0xC58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bRegenEffectActive;                                // 0xC60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A61[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 BoostExecuteTags;                                  // 0xC68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        HoverButtonHeldCount;                              // 0xC88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A62[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 HoverExecuteTags;                                  // 0xC90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        JumpButtonHeldCount;                               // 0xCB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A63[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 HoverReleaseTags;                                  // 0xCB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       TimeStartedHovering;                               // 0xCD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeStartedFalling;                                // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EndHoverDelay;                                     // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       EndFallingDelay;                                   // 0xCF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 BoostReleaseTags;                                  // 0xCF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bHasDied;                                          // 0xD18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A64[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          BoostCue;                                          // 0xD1C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BoostJumpPackCue;                                  // 0xD20(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A65[0x4];                                     // Fixing Size After Last Property..
	class UClass*                                JetpackInUseEffect;                                // 0xD28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         TriggeredByJump;                                   // 0xD30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A66[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 BlockExecuteTags;                                  // 0xD38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                JetpackInUseEffect_Alt;                            // 0xD58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          HidingPropTag;                                     // 0xD60(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ZiplineTag;                                        // 0xD64(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GliderRedeployTag;                                 // 0xD68(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          InitialBoostCue;                                   // 0xD6C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bFirstBoost;                                       // 0xD70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A67[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          BoostEndCue;                                       // 0xD74(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BoostOutOfFuelEndCue;                              // 0xD78(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_BoostJumpPack_C");
		return Clss;
	}

	double GetReserveFuel(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_A_ImplicitCast);
	void HandleBoostEnded(bool Temp_bool_Variable, double CallFunc_GetFuel_Fuel, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct FGameplayTag& K2Node_Select_Default);
	void HandleJetpackInitialBoost(const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	bool NotInHidingSpot(const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, FInterfaceProperty_ CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAllowedToFly_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Handle_Jetpack_Equipped(double CallFunc_GetMaxFuel_MaxFuel, double CallFunc_GetFuel_Fuel, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	bool Reasons_To_Reset_on_Transition(const struct FGameplayTag& Tag, bool CallFunc_MatchesAnyTags_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsInGhostMode_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_GetPendingSkydiveLaunch_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4);
	class AFortPlayerPawn* Get_Player_Pawn(class UObject* Object, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue);
	bool IsCurrentlyDead(const struct FGameplayTag& TagOne, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_MatchesTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void Reengage_Falling_Movement(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Reengage_Hovering_Movement(bool CallFunc_IsFalling_ReturnValue);
	void SavePlayerPawn(const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void OnAbilityCanceled();
	void OnFuelIsEmpty();
	void OnFuelIsFull();
	void Reset_Toggle_Input_State(class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void ProcessTriggerData(const struct FGameplayTag& TagOne, bool CallFunc_IsSurfaceSwimming_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue_1, FInterfaceProperty_ CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_MatchesAnyTags_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_MatchesAnyTags_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4);
	void Stop_Regen_Effect(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void Start_Regen_Effect(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void Consider_Stopping_Regen_Effect(double CallFunc_GetReserveFuel_ReturnValue, double CallFunc_GetMaxFuel_MaxFuel, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_GetFuel_Fuel, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Consider_Starting_Regen_Effect(double CallFunc_GetMaxFuel_MaxFuel, double CallFunc_GetFuel_Fuel, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool IsBoostAllowed(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
	void K2_OnEndAbility(bool bWasCancelled);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, class AFortPlayerPawnAthena* PlayerPawn, const struct FGameplayTagContainer& ExplicitExecutionTags, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void GetMaxFuel(double* MaxFuel, bool Temp_bool_Variable, double Temp_real_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_Select_Default, double K2Node_Select_Option_1_ImplicitCast);
	void GetFuel(double* Fuel, bool Temp_bool_Variable, double Temp_real_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_Select_Default, double K2Node_Select_Option_1_ImplicitCast);
	void Setup_PlayerPawn();
	bool IsUsingJetpackEffectActive(int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleCurrentBoostStateChanged(enum class EJumpBoostPackState PreviousState, enum class EJumpBoostPackState CurrentState, bool K2Node_SwitchEnum_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void SetCurrentBoostState(enum class EJumpBoostPackState NewState, enum class EJumpBoostPackState PreviousState, enum class Enum_BoostJumpStates PreviewBoostState);
	void PotentiallyEndHovering(bool bForceEndHovering, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Setup_Notify_at_Apex(bool bNotifyApex, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess);
	void HandleIdle(bool bForceEndHovering);
	void HandleFalling(double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void HandleHovering(double CallFunc_GetTimeSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_FMax_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_2, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void ResetTransitionVariables(bool bForceEndHovering);
	void TransitionFromFalling(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetFuel_Fuel, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void TransitionFromHovering(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetFuel_Fuel, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void TransitionFromBoost(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_NotInHidingSpot_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetFuel_Fuel, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void TransitionFromIdle(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBoostAllowed_ReturnValue, double CallFunc_GetFuel_Fuel, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_GetFuel_Fuel_1, double CallFunc_GetMaxFuel_MaxFuel, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ProcessAbilityStateMachine(bool K2Node_SwitchEnum_CmpSuccess, enum class Enum_BoostJumpStates CallFunc_DetermineStateToTransitionTo_BoostState, bool K2Node_SwitchEnum_CmpSuccess_1);
	void DetermineStateToTransitionTo(enum class Enum_BoostJumpStates* BoostState, bool K2Node_SwitchEnum_CmpSuccess, enum class Enum_BoostJumpStates CallFunc_TransitionFromFalling_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromHovering_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromBoost_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromIdle_TargetBoostState);
	void SetupTransitionVariables(const struct FGameplayTag& InTag, bool CallFunc_Reasons_To_Reset_on_Transition_ReturnValue, bool CallFunc_IsCurrentlyDead_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void HandleBoostJump(const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* CallFunc_SetJumpHeight_Pawn_Out, const struct FVector& CallFunc_SetJumpHeight_Jump_Height);
	void SetJumpHeight(class AFortPlayerPawn* Pawn, class AFortPlayerPawn** Pawn_Out, struct FVector* Jump_Height, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void Added_A54C58044C5CE8F3DABC60A214FC45E0();
	void Added_B611282348ECFDA3CD120D87734E357C();
	void Added_D3A68EA84FC920CD9E2949BE05D3A5AC();
	void Added_F6D39ED5491065B2594D37A44C404CA7();
	void OnPawnLanded(struct FHitResult& Hit);
	void On_Reached_Jump_Apex();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnCurrentStateChanged(enum class EJumpBoostPackState InPreviousState, enum class EJumpBoostPackState InCurrentState);
	void Delay_ProcessAbilityStateMachine();
	void OnSavedPawnChanged_(class AFortPlayerPawn* PreviousPawn, class AFortPlayerPawn* NewPawn);
	void OnEnterVehicle();
	void ExecuteUbergraph_GA_BoostJumpPack(int32 EntryPoint, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& K2Node_Event_EventData, enum class EJumpBoostPackState K2Node_Event_InPreviousState, enum class EJumpBoostPackState K2Node_Event_InCurrentState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFortPlayerPawn* K2Node_CustomEvent_PreviousPawn, class AFortPlayerPawn* K2Node_CustomEvent_NewPawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayTagContainer& CallFunc_GetAbilityTags_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_HasTag_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
