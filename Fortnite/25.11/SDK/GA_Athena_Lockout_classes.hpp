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

// 0x18 (0xB40 - 0xB28)
// BlueprintGeneratedClass GA_Athena_Lockout.GA_Athena_Lockout_C
class UGA_Athena_Lockout_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer_LockoutFailsafe;                             // 0xB30(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LockoutFailsafeTime;                               // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Lockout_C");
		return Clss;
	}

	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Failsafe();
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Athena_Lockout(int32 EntryPoint, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1, bool K2Node_Event_bWasCancelled, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
