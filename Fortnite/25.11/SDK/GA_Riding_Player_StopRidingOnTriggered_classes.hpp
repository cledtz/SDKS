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

// 0x8 (0xB30 - 0xB28)
// BlueprintGeneratedClass GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
class UGA_Riding_Player_StopRidingOnTriggered_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Riding_Player_StopRidingOnTriggered_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_StopRidingActor_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
