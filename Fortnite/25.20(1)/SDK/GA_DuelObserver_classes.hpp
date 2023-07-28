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

// 0x8 (0xB40 - 0xB38)
// BlueprintGeneratedClass GA_DuelObserver.GA_DuelObserver_C
class UGA_DuelObserver_C : public UFortGameplayAbility_ObserveDuels
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DuelObserver_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnDuelChange(enum class EDuelState NewDuelState, struct FDuelOverlayData& ChangedDuelOverlayData);
	void ExecuteUbergraph_GA_DuelObserver(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsServer_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, enum class EDuelState K2Node_Event_NewDuelState, const struct FDuelOverlayData& K2Node_Event_ChangedDuelOverlayData, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
