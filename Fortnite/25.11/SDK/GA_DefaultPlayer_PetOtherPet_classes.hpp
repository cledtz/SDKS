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
// BlueprintGeneratedClass GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C
class UGA_DefaultPlayer_PetOtherPet_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DefaultPlayer_PetOtherPet_C");
		return Clss;
	}

	void OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
