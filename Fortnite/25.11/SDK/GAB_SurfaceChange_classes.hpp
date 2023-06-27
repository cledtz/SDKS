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

// 0x298 (0xDC0 - 0xB28)
// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
class UGAB_SurfaceChange_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0xB30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FA[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        RemovalDelay;                                      // 0xB38(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        IcySurfacesEnabled;                                // 0xB60(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 HasIce;                                            // 0xB88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_SurfaceChange_Ice;                              // 0xBA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_SurfaceChange_Snow;                             // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_SurfaceChange_Lava;                             // 0xBB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             AvatarPawn;                                        // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 IceTags;                                           // 0xBC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 LavaTags;                                          // 0xBE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 SnowTags;                                          // 0xC08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 SandTags;                                          // 0xC28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ChromeTags;                                        // 0xC48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       LavaBounceMultiplier;                              // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RandomAngleOffset;                                 // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        RandomConeAngle;                                   // 0xC78(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FacingAngleVelocityComponent;                      // 0xCA0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        BaseVerticalBounceVelocity;                        // 0xCC8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        BaseLateralBounceVelocity;                         // 0xCF0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        MaxBounceMultiplier;                               // 0xD18(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        BounceMultiplierStepAmount;                        // 0xD40(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                         RandomAngleStream;                                 // 0xD68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	struct FGameplayTag                          LavaBounceCue;                                     // 0xD70(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventTag_SandUnburrow;                             // 0xD74(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        IceLingerDuration;                                 // 0xD78(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 PreviousSurfaceTagContainer;                       // 0xDA0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SurfaceChange_C");
		return Clss;
	}

	void OnRep_ReplicatedRandomAngle();
	void SurfaceCleanup(bool AddLingeringEffects, enum class EPhysicalSurface SurfaceType, bool bHasChrome, bool bHasSand, bool bHasSnow, bool bAddLingeringEffects, bool bHasLava, bool bHasIce, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2, FInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void LavaBounce(float CallFunc_RandomFloatFromStream_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_FFloor_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_6, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_FMin_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Normal2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector_NetQuantizeNormal& CallFunc_MakeVector_NetQuantizeNormal_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_FMin_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_Vector2DFloat_B_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2, double CallFunc_RandomFloatInRange_Max_ImplicitCast);
	void HotfixableGEApplication(struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse, struct FActiveGameplayEffectHandle* GE_Handle, float CallFunc_GetValueAtLevel_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void SurfaceCleanupSpecial();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void MovementModeChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void GamePhaseChanged(enum class EAthenaGamePhase GamePhase);
	void ExecuteUbergraph_GAB_SurfaceChange(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, bool CallFunc_IsFalling_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_HotfixableGEApplication_GE_Handle, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
