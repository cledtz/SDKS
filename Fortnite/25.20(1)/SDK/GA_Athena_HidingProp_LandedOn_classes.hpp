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
// BlueprintGeneratedClass GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C
class UGA_Athena_HidingProp_LandedOn_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FScalableFloat                        HidingEnabled;                                     // 0xB30(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_HidingProp_LandedOn_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_HidingProp_LandedOn(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
