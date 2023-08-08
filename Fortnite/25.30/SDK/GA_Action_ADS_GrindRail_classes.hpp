#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB90 - 0xB58)
// BlueprintGeneratedClass GA_Action_ADS_GrindRail.GA_Action_ADS_GrindRail_C
class UGA_Action_ADS_GrindRail_C : public UFortGameplayAbility_Action
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerPawn_Athena_C*                  Player;                                            // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 BlockingTags;                                      // 0xB68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_GrindingComponent_C*               GrindingComponent;                                 // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Action_ADS_GrindRail_C");
		return Clss;
	}

	void OnPress_01A3E1CF477913F9711F7E90D15EAD37(float TimeWaited);
	void OnRelease_F2AFF35A4A031EDEC04ECF9706FAA922(float TimeHeld);
	void OnPress_C7DC18CB4B236FAE1117CE939CBC57AB(float TimeWaited);
	void OnRelease_E541412844A2A5A5D2D062A55EEC6C29(float TimeHeld);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void ExecuteUbergraph_GA_Action_ADS_GrindRail(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_TimeHeld_1, float Temp_real_Variable, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_CustomEvent_TimeWaited, float Temp_real_Variable_1, class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_TimeHeld, float Temp_real_Variable_2, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue_1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, float Temp_real_Variable_3, float K2Node_CustomEvent_TimeWaited_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
