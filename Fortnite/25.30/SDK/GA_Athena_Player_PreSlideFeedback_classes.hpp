#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB30 - 0xB28)
// BlueprintGeneratedClass GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C
class UGA_Athena_Player_PreSlideFeedback_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Player_PreSlideFeedback_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void CustomEvent_0();
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPlayerPawn* CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
