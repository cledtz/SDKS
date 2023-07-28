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

// 0x1E8 (0xD10 - 0xB28)
// BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
class UGA_DefaultPlayer_InteractSearch_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RefillGasTankTag;                                  // 0xB38(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_473F[0x4];                                     // Fixing Size After Last Property..
	struct FFortGameplayAbilityMontageInfo       RefillGasTankMontage;                              // 0xB40(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          CatchFireflyTag;                                   // 0xB98(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4740[0x4];                                     // Fixing Size After Last Property..
	struct FFortGameplayAbilityMontageInfo       FireflyCatchMontage;                               // 0xBA0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo       RefillVehicleFuelMontage;                          // 0xBF8(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GasCanRefillVehicleTag;                            // 0xC50(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4741[0x4];                                     // Fixing Size After Last Property..
	struct FFortGameplayAbilityMontageInfo       DBNOMontageInfo;                                   // 0xC58(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          Tag_UseOverrideSearchMontage;                      // 0xCB0(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4742[0x4];                                     // Fixing Size After Last Property..
	struct FFortGameplayAbilityMontageInfo       OverrideSearchMontageInfo;                         // 0xCB8(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DefaultPlayer_InteractSearch_C");
		return Clss;
	}

	void EndInteractSearch(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StartInteractSearch(bool CallFunc_IsValid_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled);
	void Completed_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3E01853F4E8362C959E7B4B82217702E(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3E01853F4E8362C959E7B4B82217702E(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3E01853F4E8362C959E7B4B82217702E(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_64A40E14483311B0BA6F95B516CA6468(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_64A40E14483311B0BA6F95B516CA6468(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_64A40E14483311B0BA6F95B516CA6468(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_InteractSearch(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_16, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_16, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_15, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_15, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_14, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_13, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_12, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_11, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_10, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_9, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_8, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_7, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_6, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayTag& Temp_struct_Variable_6, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_7, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FGameplayTag& Temp_struct_Variable_8, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_9, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FGameplayTag& Temp_struct_Variable_10, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_11, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_17, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_17, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue_5, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_6);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
