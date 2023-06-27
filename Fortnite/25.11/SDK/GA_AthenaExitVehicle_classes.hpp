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

// 0x30 (0xB58 - 0xB28)
// BlueprintGeneratedClass GA_AthenaExitVehicle.GA_AthenaExitVehicle_C
class UGA_AthenaExitVehicle_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Keep_DBNO_players_in_Vehicles;                     // 0xB30(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9320[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 Event_Damage_Died_Tags;                            // 0xB38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_AthenaExitVehicle_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_AthenaExitVehicle(int32 EntryPoint, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class AActor* CallFunc_GetVehicleActor_ReturnValue, class AFortAthenaVehicle* CallFunc_ServerOnExitVehicle_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
