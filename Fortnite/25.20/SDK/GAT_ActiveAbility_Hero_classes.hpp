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

// 0x30 (0xB80 - 0xB50)
// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         UseHeroLoadoutSystem;                              // 0xB58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMidAbilityCosts;                               // 0xB59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTriggerCooldownOnAbilityEnd;                      // 0xB5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_976C[0x5];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               Owner_ASC;                                         // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_CooldownModifier;                               // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>   Active_Cooldown_Modifiers;                         // 0xB70(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_ActiveAbility_Hero_C");
		return Clss;
	}

	void IncrementAbilityCostAndCooldown(double Energy_Cost, bool Adjust_Cooldown, double Cooldown_Increment, TArray<struct FActiveGameplayEffectHandle>* Active_Cooldown_Modifiers, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1);
	void CommitAbilityWithEvent(bool* Passed, bool CallFunc_K2_CheckAbilityCooldown_ReturnValue, bool CallFunc_K2_CheckAbilityCost_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool K2Node_Event_bWasCancelled, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_K2_CommitAbilityCooldown_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
