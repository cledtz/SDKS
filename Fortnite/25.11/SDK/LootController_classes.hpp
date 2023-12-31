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

// 0x20 (0x350 - 0x330)
// Class LootController.FortAthenaMutator_CR_CreativeAllowLootItem
class AFortAthenaMutator_CR_CreativeAllowLootItem : public AFortAthenaMutator
{
public:
	struct FGameplayTagContainer                 ItemGameplayTagsNotAllowed;                        // 0x330(0x20)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_CR_CreativeAllowLootItem");
		return Clss;
	}

	void SetItemGameplayTagsNotAllowed(struct FGameplayTagContainer& InItemGameplayTagsNotAllowed);
};

// 0x0 (0x330 - 0x330)
// Class LootController.FortAthenaMutator_CR_LootChoice
class AFortAthenaMutator_CR_LootChoice : public AFortAthenaMutator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaMutator_CR_LootChoice");
		return Clss;
	}

	class UDataTable* GetLootTierDataTable();
	class FString GetLootSelectionString();
	class UDataTable* GetLootPackageTable();
	struct FGameplayTagContainer GetContextTagsToRemove();
	struct FGameplayTagContainer GetContextTagsToAdd();
};

// 0x20 (0xC0 - 0xA0)
// Class LootController.LootControllerNativeComponent
class ULootControllerNativeComponent : public UActorComponent
{
public:
	TArray<class AActor*>                        OutActors;                                         // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAsyncGetActorsOfClassCompleted;                  // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LootControllerNativeComponent");
		return Clss;
	}

	void PrintDebugString(const class FString& DebugString, bool LogWarning);
	bool IsThrottleEnabled();
	bool IsRemoveLootEnabled();
	void AsyncGetActorsOfClass(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass);
	void AddToArray(TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int32 InBuildingContainerFoundIndex, struct FBuildingContainersArrayEntry& InBuildingContainerToAdd);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
