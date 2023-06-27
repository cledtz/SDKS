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

// 0x338 (0xE60 - 0xB28)
// BlueprintGeneratedClass GA_NPC_Parent.GA_NPC_Parent_C
class UGA_NPC_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortAIPawn*                           NPC_ActivatingFortAIPawn;                          // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EFortMovementUrgency              NPC_InitialMovementUrgency;                        // 0xB38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_DebugAbility;                                  // 0xB39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9883[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 NPC_IgnoreDamageAndOnlyDoKnockbackIfTheseAbilitiesAreActive; // 0xB40(0x20)(Edit, BlueprintVisible)
	bool                                         NPC_DebugFreezeFrameEnabled;                       // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_DebugFreezeFrameOnlyWhenAbilityTargetHit;      // 0xB61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_DebugFreezeFrameOnlyWhenWeHaveSomeTarget;      // 0xB62(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_DamageHitAbilityTargetDuringThisAbilityActivation; // 0xB63(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9884[0x4];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        NPC_DamageActorsWeHaveHitDuringThisAbilityActivation; // 0xB68(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       NPC_CanActivateAbility_MaxTargetZDistanceBelow;    // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NPC_CanActivateAbility_MaxTargetZDistanceAbove;    // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NPC_CanActivateAbility_MaxTargetZDistanceAbove_ForIntentionalFailedAttack; // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        BuildingTargetingHitActors;                        // 0xB90(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_NPC_FrustrationTagsToClearForGoals;             // 0xBA0(0x20)(Edit, BlueprintVisible)
	enum class Enum_NPC_AlertLevel               NPC_AlertLevelGoalIsFortPawn;                      // 0xBC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               NPC_AlertLevelGoalIsOther;                         // 0xBC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NPC_AlertLevel               NPC_AlertLevelGoalIsNotValid;                      // 0xBC2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9885[0x5];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        NPC_DamageKnockbackVelocityHF;                     // 0xBC8(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_DamageKnockbackVerticalAngleHF;                // 0xBF0(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_DamageKnockbackMinimumYawValueHF;              // 0xC18(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_DamageCanAttackDBNOPlayersHF;                  // 0xC40(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_DamageKnockbackVelocityVehicleHF;              // 0xC68(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_DamageKnockbackVerticalAngleVehicleHF;         // 0xC90(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_DamageKnockbackMinimumYawValueVehicleHF;       // 0xCB8(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_DamageChanceToEjectFromVehicleHF;              // 0xCE0(0x28)(Edit, BlueprintVisible)
	struct FGameplayTag                          DestroyBuildingGC;                                 // 0xD08(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9886[0x4];                                     // Fixing Size After Last Property..
	class UClass*                                DestroyBuildingGE;                                 // 0xD10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_NPC_FrustrationTagsToClearForMovement;          // 0xD18(0x20)(Edit, BlueprintVisible)
	struct FGameplayTag                          TC_NPC_FrustrationBuildDueToGoal;                  // 0xD38(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_NPC_FrustrationBuildDueToMovement;              // 0xD3C(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                     TQ_NPC_RequirementsToBuildFrustrationDueToGoal;    // 0xD40(0x48)(Edit, BlueprintVisible)
	struct FGameplayTagQuery                     TQ_NPC_RequirementsToBuildFrustrationDueToMovement; // 0xD88(0x48)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_BodyBumpBuildingsWhenBuildingMovementFrustrationHF; // 0xDD0(0x28)(Edit, BlueprintVisible)
	struct FScalableFloat                        NPC_FrustrationBodyBumpOnlyDestroyPlayerBuildingsHF; // 0xDF8(0x28)(Edit, BlueprintVisible)
	struct FGameplayTag                          TC_NPC_EffectContainer_BodyBumpBuildingsWhenBuildingMovementFrustration; // 0xE20(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9887[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      BuildingTargetingTargetData;                       // 0xE28(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          BuildingTargetingApplicationTag;                   // 0xE50(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_BuildingTypePlayer;                             // 0xE54(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_NPC_MMR_Scaling_AbilityCooldown;                // 0xE58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_NPC_Parent_C");
		return Clss;
	}

	void FilterHitActors(TArray<class AActor*>& HitActors);
	void NPC_ResetRotationRate(bool CallFunc_IsValid_ReturnValue);
	void NPC_OverrideRotationRate(const struct FScalableFloat& RotationRate, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	class UObject* NPC_GetGoalActor(class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void NPC_AbilityTargetIsBuildingWeAreDestroyingToNavigate(bool* IsNavigationBuildingWeAreDestroying, class ABuildingActor** BuildingWeAreDestroying, double* HealthOfBuildingWeAreDestroying, class UObject* CallFunc_NPC_GetGoalActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealth_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double K2Node_FunctionResult_HealthOfBuildingWeAreDestroying_ImplicitCast);
	void NPC_ApplyGameplayEffectWithMMRScaling(class UClass* GameplayEffectClass, class AActor* Actor, int32 AvgMMR, class UObject* ApplyGeTo, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const class FString& CallFunc_BuildString_Object_ReturnValue, int32 CallFunc_GetAvgPlayerMMR_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, float CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast, float CallFunc_BP_ApplyGameplayEffectToTarget_Level_ImplicitCast_1);
	void NPC_ApplyGameplayAbilityCooldownWithMMRScaling();
	void NPC_ScalableFloatIsValid(struct FScalableFloat& ScalableFloat, bool* Valid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void NPC_GetScalableFloatHotfixValue(const struct FScalableFloat& ScalableFloatHotfix, double AtLevel, bool* AsBool, int32* AsIntRounded, double* AsFloat, bool CallFunc_NPC_ScalableFloatIsValid_Valid, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetValueAtLevel_Level_ImplicitCast, double K2Node_FunctionResult_AsFloat_ImplicitCast, double K2Node_FunctionResult_AsFloat_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1);
	void NPC_SetAlertLevelByAIAbilityTargetType(bool Temp_bool_Variable, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool Temp_bool_Option_B___If_false__use_Option_A_Variable_1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, enum class Enum_NPC_AlertLevel K2Node_Select_Default, enum class Enum_NPC_AlertLevel K2Node_Select_Default_1);
	void NPC_SetAlertLevel(enum class Enum_NPC_AlertLevel NPC_AlertLevel, class FName Temp_name_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, enum class Enum_NPC_AlertLevel Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class FName K2Node_Select_Default, class ANPC_Pawn_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_BuildString_Name_ReturnValue);
	void NPC_DoIntentionalFailedAttack(bool* DoIntentionalFailedAttack, bool AboveTestForIntentionalFailedAttackPassed, bool AboveTestPassed, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1);
	void NPC_AttemptBuildFrustrationDueToMovement(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FInterfaceProperty_ CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsTagQueryEmpty_ReturnValue);
	void NPC_AttemptBuildFrustrationDueToGoal(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FInterfaceProperty_ CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsTagQueryEmpty_ReturnValue);
	void NPC_ClearFrustrationTagsForMovement(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue);
	void NPC_ClearFrustrationTagsForGoals(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue);
	void DestroyBuilding(class AActor* BuildingActor, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsGameplayTagValid_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, class AFortAthenaSupplyDropBalloon* K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue, class UFortHeldObjectComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool Temp_bool_Variable, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_HasAuthority_ReturnValue);
	void NPC_GenerateLaunchVelocityWithMinimumAngle(class AActor* ActorWeWantToLaunch, bool Vehicle, struct FVector* LaunchVelocity, class AActor** LaunchActor, bool* LaunchingVehicle, bool IsVehicle, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const class FString& CallFunc_BuildString_Double_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, const struct FScalableFloat& K2Node_Select_Default, const class FString& CallFunc_BuildString_Double_ReturnValue_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FScalableFloat& K2Node_Select_Default_1, const class FString& CallFunc_BuildString_Bool_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FScalableFloat& K2Node_Select_Default_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_BuildString_Double_InDouble_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, bool NPC_PassAboveZ_ForIntentionalFailedAttack, bool NPC_PassBelowZ, bool NPC_PassAboveZ, bool NPC_CanActivateAbility, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double CallFunc_Abs_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_3);
	void NPC_TryResetMovementUrgency(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void NPC_TrySetMovementUrgency(enum class EFortMovementUrgency MovementUrgency, bool TryResetUrgencyIfInvalid, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void NPC_EQS_Results(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus, enum class EEnvQueryRunMode EQS_RunMode, bool NumReturnedItemsIsImportant, TArray<class AActor*>* ResultActors, int32* NumValidActorsGenerated, bool* ResultActorsSuccess, TArray<struct FVector>* ResultLocations, int32* NumValidLocationsGenerated, bool* ResultLocationsSuccess, class UEnvQueryInstanceBlueprintWrapper** QueryInstanceOut, enum class EEnvQueryStatus* QueryStatusOut, bool NumReturnedItemsImportant, int32 RandomlyChosenIndexToReturnAsOurResult, int32 LastGoodIndex, double ScoreThreshold, double BestScore, enum class EEnvQueryRunMode RunMode, const TArray<struct FVector>& ResultLocationsFinal, int32 NumResultLocationsGenerated, const TArray<struct FVector>& ResultLocationsGenerated, bool GeneratedLocations, const TArray<class AActor*>& ResultActorsFinal, int32 NumResultActorsGenerated, const TArray<class AActor*>& ResultActorsGenerated, bool GeneratedActors, enum class EEnvQueryStatus QueryStatusVar, class UEnvQueryInstanceBlueprintWrapper* Query, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetItemScore_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_GetItemScore_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_Array_Get_Item_2, class AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, TArray<class AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors, bool CallFunc_GetQueryResultsAsActors_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_BestScore_ImplicitCast);
	void NPC_DebugFreezeFrame(bool ForceDebugFreezeFrame, bool HitAbilityTargetRightNow, bool HitAbilityTargetDuringThisAbilityActivation, TArray<class AActor*>& ActorsWeHaveHitDuringThisAbilityActivation, TArray<class AActor*>& ActorsHitWithThisSpecificTargetSelection, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void NPC_ApplyGameplayEffectContainerAndLaunchTargets(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag, int32 GameplayEffectLevel, bool AbilityTargetCanBeHitMultipleTimesByThisSelection, bool ForceDebugFreezeFrameForThisSpecificTargeting, bool* HitAbilityTargetRightNow, bool* HitAbilityTargetDuringThisAbilityActivation, TArray<class AActor*>* ActorsWeHaveHitDuringThisAbilityActivation, TArray<class AActor*>* ActorsHitWithThisSpecificTargetSelection, bool HitWasVehicle, bool ForceDebugFreezeFrame, const struct FHitResult& CurrentHitActorWeAreTestingHitResultFromTargetData, int32 CurrentHitActorWeAreTestingArrayIndex, class AActor* CurrentHitActorWeAreTesting, bool CurrentAbilityTargetCanBeHitMultipleTimesByThisSelection, int32 GetCurrentGameplayEffectLevel, const struct FGameplayTag& CurrentApplicationTag, const TArray<class AActor*>& CurrentActorsGatheredThisTargetSelection, double CurrentKnockbackVelocity, const struct FGameplayAbilityTargetDataHandle& CurrentTargetData, bool CallFunc_IsValid_ReturnValue, class ANPC_Pawn_Parent_C* K2Node_DynamicCast_AsNPC_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2, const struct FScalableFloat& K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue_1, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_Contains_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue_2, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_3, int32 Temp_int_Variable_1, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue_1, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_Array_Get_Item_1, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle_1, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchVelocity, class AActor* CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchActor, bool CallFunc_NPC_GenerateLaunchVelocityWithMinimumAngle_LaunchingVehicle, FInterfaceProperty_ CallFunc_BP_GetAllPassengers_self_CastInput, TArray<class AFortPlayerPawn*>& CallFunc_BP_GetAllPassengers_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_TargetDataHasHitResult_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void NPC_AbilityTargetIsWithinAngleThreshold(double AngleThreshold, bool* IsWithinAngle, double AngleThresholdVar, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const class FString& CallFunc_BuildString_Double_ReturnValue, const class FString& CallFunc_BuildString_Double_ReturnValue_1);
	void NPC_IsMontageInfoValid(const struct FFortGameplayAbilityMontageInfo& MontageInfo, bool* IsValid_, bool CallFunc_IsValid_ReturnValue);
	void NPC_AbilityDebugMessage(const class FString& String, bool OnlyWhenDebug, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void NPC_SetupAbility(class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess);
	void Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_13B12ED64A3570FC1E117FAC4E3F7961(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_13B12ED64A3570FC1E117FAC4E3F7961(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void BeginDestroyBuildings(const struct FGameplayTag& TargetSelectionApplicationTag, bool DoContinuousTargetSelection);
	void ExecuteUbergraph_GA_NPC_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_TargetSelectionApplicationTag, bool K2Node_CustomEvent_DoContinuousTargetSelection, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UFortAbilityTask_TargetSelectionContinuous* CallFunc_DoTargetSelectionContinuous_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
