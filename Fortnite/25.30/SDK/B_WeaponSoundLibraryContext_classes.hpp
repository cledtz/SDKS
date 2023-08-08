#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_WeaponSoundLibraryContext_C");
		return Clss;
	}

	void GetRootComponent(class UActor* Actor, const struct FGameplayTag& EventTag, class USceneComponent** RootComponent, const struct FGameplayTagContainer& EquipTags, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	bool Play(class USoundBase* Sound, class UActor* Owner, struct FSoundLibraryPlayResult& OutResults, class USceneComponent* CallFunc_GetRootComponent_RootComponent, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
