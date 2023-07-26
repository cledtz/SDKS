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

// 0x59 (0xB81 - 0xB28)
// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       PostTriggerCancelDelay;                            // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideReticle;                                       // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_94FF[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 ReticleHUDElementTags;                             // 0xB48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  MontageOverrideSection;                            // 0xB68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAbilityStopped;                                   // 0xB6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9500[0x3];                                     // Fixing Size After Last Property..
	class FName                                  EmoteHolsterId;                                    // 0xB70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHolstered;                                        // 0xB74(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9501[0x3];                                     // Fixing Size After Last Property..
	class FName                                  HUDElementVisibilityReasonName;                    // 0xB78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WaitForLoadedCount;                                // 0xB7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bClearInteractOnActivate;                          // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_Emote_Generic_C");
		return Clss;
	}

	bool ShouldPlayFailedMontage(struct FGameplayTagContainer& FailedReason, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_ShouldPlayFailedMontage_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class UObject* CallFunc_GetSourceObject_BP_ReturnValue, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTagContainer& CallFunc_CanActivateMontageItem_OutFailureTags, bool CallFunc_CanActivateMontageItem_ReturnValue);
	void IsMontagePlaying(class UAnimMontage* Montage, bool* Result, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ForceStopMontage(class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDefaultBlendOutTime_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void SetReticleVisibility(bool ShouldHide, bool CallFunc_IsServer_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	TSoftObjectPtr<class UAnimMontage> GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender, TSoftObjectPtr<class UAnimMontage> CallFunc_GetAnimation_ReturnValue);
	void GetBodyTypeAndGender(enum class EFortCustomBodyType* BodyType, enum class EFortCustomGender* Gender, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, enum class EFortCustomBodyType CallFunc_GetCharacterBodyType_ReturnValue, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base, bool K2Node_DynamicCast_bSuccess, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue);
	void Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void OnLoaded_DA96775D40CD998BF2FF0085FE5AB126(class UObject* Loaded);
	void K2_ActivateAbility();
	void OnMontageStartedPlaying();
	void PlayInitialEmoteMontage();
	void NonMontageAsyncAssetsReady();
	void ExecuteUbergraph_GAB_Emote_Generic(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDefaultBlendOutTime_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base, bool K2Node_DynamicCast_bSuccess, enum class EFortCustomBodyType CallFunc_GetBodyTypeAndGender_BodyType, enum class EFortCustomGender CallFunc_GetBodyTypeAndGender_Gender, class UObject* Temp_object_Variable, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageToPlay_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsAssetNull_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue_1, class UFortMontageItemDefinitionBase* K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetPersistentName_ReturnValue, class UObject* Temp_object_Variable_1, class FName CallFunc_Conv_StringToName_ReturnValue, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsMontagePlaying_Result, bool CallFunc_ShouldHolsterWeapon_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, class FName CallFunc_PickMontageSection_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_4, TArray<struct FSoftObjectPath>& CallFunc_GatherVariantAssets_VariantAssetsNeeded, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FSoftObjectPath& CallFunc_Array_Get_Item, TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
