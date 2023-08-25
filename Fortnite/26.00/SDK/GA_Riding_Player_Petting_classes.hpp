#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xB58 - 0xB28)
// BlueprintGeneratedClass GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
class UGA_Riding_Player_Petting_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URidableComponent*                     Active_Ridable;                                    // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayEffect>           GE_PlayerPetting;                                  // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  TagsToCancelPetting;                               // 0xB40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortPlayerPawn*                       FortPlayerPawnRider;                               // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Riding_Player_Petting_C* GetDefaultObj();

	void PettingTelemetry(class UActor* Owner, bool CallFunc_K2_HasAuthority_ReturnValue, class UFortAthenaAITelemetryData* CallFunc_GetOrCreateAITelemetryData_ReturnValue, class UFortAthenaPettingWildlifeTelemetryData* K2Node_DynamicCast_AsFort_Athena_Petting_Wildlife_Telemetry_Data, bool K2Node_DynamicCast_bSuccess);
	void GetRiderPettingMontage(class UAnimMontage** RiderPettingMontage, const struct FRidingPettingData& CallFunc_GetPettingData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FRidingPettingData& CallFunc_GetPettingData_ReturnValue_1);
	void OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8();
	void OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8();
	void OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8();
	void OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8();
	void Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Riding_Player_Petting(int32 EntryPoint, class UActor* CallFunc_GetOwner_ReturnValue, class UControllableRidableComponent* K2Node_DynamicCast_AsControllable_Ridable_Component, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_bWasCancelled, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UControllingRiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UControllingRiderComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class UActor* CallFunc_GetOwner_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_4, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UAnimMontage* CallFunc_GetRiderPettingMontage_RiderPettingMontage, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_7);
};

}


