#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x358 - 0x338)
// Class LootController.FortAthenaMutator_CR_CreativeAllowLootItem
class UFortAthenaMutator_CR_CreativeAllowLootItem : public UFortAthenaMutator
{
public:
	struct FGameplayTagContainer                 ItemGameplayTagsNotAllowed;                        // 0x338(0x20)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaMutator_CR_CreativeAllowLootItem* GetDefaultObj();

	void SetItemGameplayTagsNotAllowed(struct FGameplayTagContainer& InItemGameplayTagsNotAllowed);
};

// 0x0 (0x338 - 0x338)
// Class LootController.FortAthenaMutator_CR_LootChoice
class UFortAthenaMutator_CR_LootChoice : public UFortAthenaMutator
{
public:

	static class UClass* StaticClass();
	static class UFortAthenaMutator_CR_LootChoice* GetDefaultObj();

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
	TArray<class UActor*>                        OutActors;                                         // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAsyncGetActorsOfClassCompleted;                  // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULootControllerNativeComponent* GetDefaultObj();

	void PrintDebugString(const class FString& DebugString, bool LogWarning);
	bool IsThrottleEnabled();
	bool IsRemoveLootEnabled();
	void AsyncGetActorsOfClass(class UObject* WorldContextObject, TSubclassOf<class UActor> ActorClass);
	void AddToArray(TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int32 InBuildingContainerFoundIndex, struct FBuildingContainersArrayEntry& InBuildingContainerToAdd);
};

}


