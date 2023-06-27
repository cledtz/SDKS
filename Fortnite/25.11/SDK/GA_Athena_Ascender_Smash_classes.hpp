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

// 0x59 (0xC49 - 0xBF0)
// BlueprintGeneratedClass GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C
class UGA_Athena_Ascender_Smash_C : public UGA_Athena_ZipLine_SmashParent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPrimitiveComponent*                   ZiplineInteractComponent_0;                        // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AB_Athena_Zipline_Ascender_C*          AscenderZipline;                                   // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DescendingTag;                                     // 0xC08(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A058[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          M_AscendingAnim;                                   // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          M_DescendingAnim;                                  // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           DescendingGE_Handle;                               // 0xC20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           AscendingGE_Handle;                                // 0xC28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          F_AscendingAnim;                                   // 0xC30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          F_DescendingAnim;                                  // 0xC38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           ZiplinePassiveGE;                                  // 0xC40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHolsterApplied;                                   // 0xC48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Ascender_Smash_C");
		return Clss;
	}

	void DoFailSafeUnholster(bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void DoUnholster(bool CallFunc_GetConsoleVariableBoolValue_ReturnValue);
	void DoHolster(bool CallFunc_GetConsoleVariableBoolValue_ReturnValue);
	bool IsPlayerUsingHandle(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnCancelled_899182BF4C098785CCBCFD85AA84455F();
	void OnInterrupted_899182BF4C098785CCBCFD85AA84455F();
	void OnBlendOut_899182BF4C098785CCBCFD85AA84455F();
	void OnCompleted_899182BF4C098785CCBCFD85AA84455F();
	void ZipliningComplete();
	void SurroundingsCheck_SmashObjects();
	void SurroundingsCheck_MotorCheck();
	void GameplayTagEvent_ZiplineEnter(struct FGameplayEventData& EventData);
	void GameplayTagEvent_ZiplineExit(struct FGameplayEventData& EventData);
	void FallingTagRemoved();
	void Pre_BeginZiplinging();
	void HandleGameplayEventTag(struct FGameplayEventData& EventData);
	void ZiplinePostBegin_Event();
	void ExecuteUbergraph_GA_Athena_Ascender_Smash(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, enum class EFortCustomGender Temp_byte_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsPlayerUsingHandle_ReturnValue, bool CallFunc_IsPlayerUsingHandle_ReturnValue_1, bool CallFunc_IsPlayerUsingHandle_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAnimMontage* K2Node_Select_Default, bool CallFunc_IsPlayerUsingHandle_ReturnValue_3, class UAnimMontage* K2Node_Select_Default_1, const struct FGameplayEventData& K2Node_Event_EventData_2, const struct FGameplayEventData& K2Node_Event_EventData_1, class AB_Athena_Zipline_Ascender_C* K2Node_DynamicCast_AsB_Athena_Zipline_Ascender, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue, class UAnimMontage* K2Node_Select_Default_2, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
