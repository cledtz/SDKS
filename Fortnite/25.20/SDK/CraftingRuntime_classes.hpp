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

// 0x0 (0x28 - 0x28)
// Class CraftingRuntime.CraftingGlobals
class UCraftingGlobals : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CraftingGlobals");
		return Clss;
	}

};

// 0x70 (0x9F0 - 0x980)
// Class CraftingRuntime.CraftingObjectBGA
class ACraftingObjectBGA : public ABuildingGameplayActor
{
public:
	uint8                                        Pad_1534[0x8];                                     // Fixing Size After Last Property..
	class AFortInventory*                        Inventory;                                         // 0x988(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1535[0x18];                                    // Fixing Size After Last Property..
	class USphereComponent*                      SphereComponent_InteractionRange;                  // 0x9A8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             MenuWidget;                                        // 0x9B0(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      WidgetComponent_PotContents;                       // 0x9D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowCraftingUI;                                   // 0x9E0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSendEventMessageOnLocalInteract;                  // 0x9E1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1536[0x6];                                     // Fixing Size After Last Property..
	class UStaticMeshComponent*                  CraftingObjectMesh;                                // 0x9E8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CraftingObjectBGA");
		return Clss;
	}

	void HandleInteractionRangeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void HandleInteractionRangeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x0 (0x28 - 0x28)
// Class CraftingRuntime.CraftingCheatManager
class UCraftingCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CraftingCheatManager");
		return Clss;
	}

	void ToggleFreeCrafting();
	void StartSelfCrafting(class FName FormulaName);
};

// 0x3C8 (0x468 - 0xA0)
// Class CraftingRuntime.CraftingObjectComponent
class UCraftingObjectComponent : public UGameFrameworkComponent
{
public:
	FMulticastInlineDelegateProperty_            CraftingObjectStateChanged;                        // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFormulaCraftableChanged;                         // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCraftingSuccess;                                 // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FCraftingObjectRepStateData>   CraftingObjectRepStateData;                        // 0xD0(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	TMap<struct FCraftingMultiKey, struct FCraftingObjectServerStateData> CraftingObjectServerStateData;                     // 0xE0(0x50)(Transient, NativeAccessSpecifierPrivate)
	class FName                                  LastCraftedItemFormulaRow;                         // 0x130(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1538[0x4];                                     // Fixing Size After Last Property..
	class FString                                LastIngredientStringForAnalytics;                  // 0x138(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastFormulaStringForAnalytics;                     // 0x148(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastResultsStringForAnalytics;                     // 0x158(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayAbilitySpecHandle            WhileCraftingAbilitySpecHandle;                    // 0x168(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayAbilitySpecHandle            OwnerCraftingAbilitySpecHandle;                    // 0x16C(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CraftingObjectTag;                                 // 0x170(0x4)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1539[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CraftingObjectTags;                                // 0x178(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CraftingTimeLength;                                // 0x198(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ReadyTimeLength;                                   // 0x1C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OverCraftingTimeLength;                            // 0x1E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ResettingTimeLength;                               // 0x210(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  OverCraftingLootTierKey;                           // 0x238(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTakeItemsAtCraftingStart : 1;                     // Mask: 0x1, PropSize: 0x10x23C(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_199 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_153A[0x3];                                     // Fixing Size After Last Property..
	float                                        DecayRate;                                         // 0x240(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveIngredientsToCraftingObject : 1;              // Mask: 0x1, PropSize: 0x10x244(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveIngredientsToInstigator : 1;                  // Mask: 0x2, PropSize: 0x10x244(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_19A : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_153B[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               IngredientSpawnOffset;                             // 0x248(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveToCraftingObject : 1;                         // Mask: 0x1, PropSize: 0x10x260(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveResultToInstigator : 1;                       // Mask: 0x2, PropSize: 0x10x260(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_19B : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_153C[0x7];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortGameplayAbility>    OwnerCraftingAbility;                              // 0x268(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortGameplayAbility>    WhileCraftingAbility;                              // 0x290(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortGameplayAbility>    InstigatorWhileCraftingAbility;                    // 0x2B8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScaleMultiCraftingTime;                           // 0x2E0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_153D[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CraftingFailedTags;                                // 0x2E8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_153E[0x158];                                   // Fixing Size After Last Property..
	bool                                         FreeCraftingEnabled;                               // 0x460(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_153F[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CraftingObjectComponent");
		return Clss;
	}

	void OnRep_CraftingObjectRepStateData(TArray<struct FCraftingObjectRepStateData>& OldValue);
	void HandlePickupCraftingItemPickedUp(class AFortPickup* PickUp, class AFortPawn* InteractingPawn, class UFortWorldItemDefinition* WorldItemDefinition, const struct FVector& PickupLocation);
	void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x10 (0xB8 - 0xA8)
// Class CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnCraftingSuccess;                                 // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortControllerComponent_CraftingNetworkEvents");
		return Clss;
	}

	void ServerStartCrafting(class AActor* CraftingObject, class FName& CraftingFormulaName, int32 NumberToCraft, const struct FCraftingMultiKey& Key);
	void ServerResumeCrafting(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void ServerReportCraftingSuccess(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void ServerPickupItemAndStartCrafting(class AActor* CraftingObject, class AFortPickup* PickUp, class FName& CraftingFormulaName, const struct FCraftingMultiKey& Key);
	void ServerPauseCrafting(class AActor* CraftingObject, bool bDecayPausedTime, const struct FCraftingMultiKey& Key);
	void ServerEjectItems(class AActor* CraftingObject);
	void ServerClaimCraftingResults(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void ServerCancelCrafting(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void NotifyCraftingSuccess(class AActor* CraftingObject, class FName& FormulaRowName, const struct FCraftingMultiKey& Key);
	void ClientNotifyCraftingSuccess(class AActor* CraftingObject, class FName& FormulaRowName, const struct FCraftingMultiKey& Key);
	void ClientNotifyCraftingFailed(class AActor* CraftingObject, struct FGameplayTagContainer& FailedReason, const struct FCraftingMultiKey& Key);
};

// 0x1A8 (0x248 - 0xA0)
// Class CraftingRuntime.FortGameStateComponent_Crafting
class UFortGameStateComponent_Crafting : public UFortGameStateComponent
{
public:
	struct FDataRegistryType                     CraftingFormulaRegistryType;                       // 0xA0(0x4)(ZeroConstructor, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryType                     CraftingIngredientsUIDataRegistryType;             // 0xA4(0x4)(ZeroConstructor, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1544[0x140];                                   // Fixing Size After Last Property..
	TArray<struct FCraftingResult>               CraftingResultsList;                               // 0x1E8(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1545[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameStateComponent_Crafting");
		return Clss;
	}

	void OnRep_CraftingResultsList();
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x20 (0xE0 - 0xC0)
// Class CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent
{
public:
	class UFortItemDefinition*                   LastPickupItemDef;                                 // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDefinition*                   LastFocusedItemDef;                                // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  LastTargetFormulaName;                             // 0xD0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ContextualCraftingInteractDuration;                // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETInteractionType                 CachedInteractionType;                             // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EInteractionBeingAttempted        CachedInteractionBeingAttempted;                   // 0xD9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1546[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPickupInteractOverrideComponent_Crafting");
		return Clss;
	}

};

// 0x0 (0xF8 - 0xF8)
// Class CraftingRuntime.FortContextualTutorial_CraftingComplete
class UFortContextualTutorial_CraftingComplete : public UFortContextualTutorial
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortContextualTutorial_CraftingComplete");
		return Clss;
	}

	void OnCraftingSuccess(struct FCraftingObjectSuccessEvent& Event);
};

// 0x0 (0xF8 - 0xF8)
// Class CraftingRuntime.FortContextualTutorial_CraftingReady
class UFortContextualTutorial_CraftingReady : public UFortContextualTutorial
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortContextualTutorial_CraftingReady");
		return Clss;
	}

	void HandleFormulaCraftableChanged(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x8 (0x100 - 0xF8)
// Class CraftingRuntime.FortContextualTutorial_CraftingTabOpen
class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial
{
public:
	uint8                                        Pad_1549[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortContextualTutorial_CraftingTabOpen");
		return Clss;
	}

	void HandleInventoryTabChanged(class FName InventoryTabNameId);
	void HandleFormulaCraftableChanged(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x0 (0x28 - 0x28)
// Class CraftingRuntime.CraftingLibrary
class UCraftingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CraftingLibrary");
		return Clss;
	}

	void StartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class FName& CraftingFormulaName, int32 NumberToCraft, const struct FCraftingMultiKey& Key);
	void ResumeCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void ReportCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void PickupItemAndStartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class AFortPickup* PickUp, class FName& CraftingFormulaName, const struct FCraftingMultiKey& Key);
	void PauseCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, bool bDecayPausedTime, const struct FCraftingMultiKey& Key);
	bool IsValidIngredient(class AFortPlayerController* FortPC, class AActor* CraftingObject, class UFortItemDefinition* ItemDef);
	void GiveItemToCraftingObject(class AFortPlayerController* Instigator, class AActor* CraftingObject, struct FFortItemEntry& ItemEntryToGrant);
	void GetValidIngredientsInInventory(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class UFortWorldItem*>* OutIngredients);
	void GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, struct FGameplayTagContainer& IngredientTags, TArray<TSoftObjectPtr<class UFortItemDefinition>>* OutItemDefs, TArray<TSoftObjectPtr<class UObject>>* OutIcons);
	float GetTimeToCraftRecipe(class AActor* CraftingObject, class FName& CraftingFormulaName);
	class FName GetLastCraftedItemFormulaName(class AActor* CraftingObject);
	void GetKnownCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class FName>* OutFormulas);
	TArray<class UFortWorldItem*> GetIngredientsInCraftingObject(class AActor* CraftingObject);
	void GetCraftingResultsForRowName(class UObject* WorldContextObject, class FName& CraftingFormulaRow, TArray<struct FItemAndCount>* OutResults, int32 NumToCraft);
	struct FGameplayTagContainer GetCraftingObjectTags(class AActor* CraftingObject);
	float GetCraftingObjectPausedTime(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	float GetCraftingObjectCurrentCraftingStateTimeLeft(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	float GetCraftingObjectCurrentCraftingStateStartTime(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	float GetCraftingObjectCurrentCraftingStateEndTime(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	enum class ECraftingObjectState GetCraftingObjectCraftingState(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	class UCraftingObjectComponent* GetCraftingObjectComponent(class AActor* CraftingObject);
	TArray<class UFortWorldItem*> GetCraftingIngredients_TempItems(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	class FName GetCraftingFormulaNameBeingCrafted(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	bool GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, class FName& CraftingFormulaRow, TArray<struct FCraftingIngredientRequirement>* OutIngredientRequirements);
	TArray<class UFortWorldItem*> GetCraftedResults_TempItems(class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void GetAllValidIngredients(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<struct FGameplayTagContainer>* OutIngredients);
	void GetAllCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class FName>* OutFormulas);
	void GetAllCraftableFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<class FName>* OutFormulas);
	void EjectItems(class AFortPlayerController* Instigator, class AActor* CraftingObject);
	void ClaimCraftingResults(class AFortPlayerController* Instigator, class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
	bool CanCraftFormulaWithAdditionalItems(class AFortPlayerController* FortPC, class AActor* CraftingObject, class FName CraftingFormulaRow, TArray<struct FItemAndCount>& AdditionalItems, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, int32 NumberToCraft);
	bool CanCraftFormula(class AFortPlayerController* FortPC, class AActor* CraftingObject, class FName CraftingFormulaRow, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, int32 NumberToCraft);
	void CancelCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, const struct FCraftingMultiKey& Key);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
