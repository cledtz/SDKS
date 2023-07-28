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

// 0x50 (0xF0 - 0xA0)
// Class CosmeticsFrameworkItems.CosmeticDataComponent
class UCosmeticDataComponent : public UActorComponent
{
public:
	TMap<struct FGameplayTag, struct FInstancedStructContainer> PropertyContainers;                                // 0xA0(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CosmeticDataComponent");
		return Clss;
	}

	void ResetProperties();
	bool BP_FindProperty(const struct FGameplayTag& SlotTag, const struct FGameplayTag& PropertyTag, struct FCosmeticPropertyBase* OutProperty);
	bool BP_AddOrOverrideProperty(const struct FGameplayTag& SlotTag, struct FCosmeticPropertyBase& Property);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
