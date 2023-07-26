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

// 0xC (0xB34 - 0xB28)
// BlueprintGeneratedClass GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
class UGA_TrapBuildGeneric_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          PlacedCue;                                         // 0xB30(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_TrapBuildGeneric_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_TrapBuildGeneric(int32 EntryPoint, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
