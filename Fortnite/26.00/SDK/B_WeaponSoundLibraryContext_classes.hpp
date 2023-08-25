#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// BlueprintGeneratedClass B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C
class UB_WeaponSoundLibraryContext_C : public USoundLibrarySimpleContext
{
public:

	static class UClass* StaticClass();
	static class UB_WeaponSoundLibraryContext_C* GetDefaultObj();

	void GetRootComponent(class UActor* Actor, const struct FGameplayTag& EventTag, class USceneComponent** RootComponent, const struct FGameplayTagContainer& EquipTags, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	bool Play(struct FSoundLibraryContextEventInput& InEventData, TArray<class UAudioComponent*>* OutComponents, class USceneComponent* CallFunc_GetRootComponent_RootComponent, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, TArray<class UAudioComponent*>& K2Node_MakeArray_Array);
};

}


