#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB60 - 0xB50)
// BlueprintGeneratedClass GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
class UGAT_Creative_TriggeredAbility_Pawn_C : public UGAT_Creative_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortPawn*                             AbilityOwner;                                      // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAT_Creative_TriggeredAbility_Pawn_C* GetDefaultObj();

	void SetupPawnActorAbility(class UFortPawn** FortPawn, class UFortPawn* LocalFortPawn, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UFortPawn* CallFunc_SetupPawnActorAbility_FortPawn);
};

}


