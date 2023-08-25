#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UCraftingGlobals* GetDefaultObj();

};

// 0x68 (0x9E0 - 0x978)
// Class CraftingRuntime.CraftingObjectBGA
class UCraftingObjectBGA : public UBuildingGameplayActor
{
public:
	uint8                                        Pad_368A[0x8];                                     // Fixing Size After Last Property 
	class UFortInventory*                        Inventory;                                         // 0x980(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_368C[0x18];                                    // Fixing Size After Last Property 
	class USphereComponent*                      SphereComponent_InteractionRange;                  // 0x9A0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             MenuWidget;                                        // 0x9A8(0x20)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      WidgetComponent_PotContents;                       // 0x9C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowCraftingUI;                                   // 0x9D0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSendEventMessageOnLocalInteract;                  // 0x9D1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_368D[0x6];                                     // Fixing Size After Last Property 
	class UStaticMeshComponent*                  CraftingObjectMesh;                                // 0x9D8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCraftingObjectBGA* GetDefaultObj();

	void HandleInteractionRangeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void HandleInteractionRangeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x0 (0x28 - 0x28)
// Class CraftingRuntime.CraftingCheatManager
class UCraftingCheatManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UCraftingCheatManager* GetDefaultObj();

	void ToggleFreeCrafting();
	void StartSelfCrafting(class FName FormulaName);
};

// 0x3A0 (0x440 - 0xA0)
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
	uint8                                        Pad_369E[0x4];                                     // Fixing Size After Last Property 
	class FString                                LastIngredientStringForAnalytics;                  // 0x138(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastFormulaStringForAnalytics;                     // 0x148(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastResultsStringForAnalytics;                     // 0x158(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayAbilitySpecHandle            WhileCraftingAbilitySpecHandle;                    // 0x168(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayAbilitySpecHandle            OwnerCraftingAbilitySpecHandle;                    // 0x16C(0x4)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          CraftingObjectTag;                                 // 0x170(0x4)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36A0[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 CraftingObjectTags;                                // 0x178(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CraftingTimeLength;                                // 0x198(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ReadyTimeLength;                                   // 0x1C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        OverCraftingTimeLength;                            // 0x1E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ResettingTimeLength;                               // 0x210(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  OverCraftingLootTierKey;                           // 0x238(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTakeItemsAtCraftingStart : 1;                     // Mask: 0x1, PropSize: 0x10x23C(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1FF : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_36A3[0x3];                                     // Fixing Size After Last Property 
	float                                        DecayRate;                                         // 0x240(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveIngredientsToCraftingObject : 1;              // Mask: 0x1, PropSize: 0x10x244(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveIngredientsToInstigator : 1;                  // Mask: 0x2, PropSize: 0x10x244(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_200 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_36A4[0x3];                                     // Fixing Size After Last Property 
	struct FVector                               IngredientSpawnOffset;                             // 0x248(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveToCraftingObject : 1;                         // Mask: 0x1, PropSize: 0x10x260(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveResultToInstigator : 1;                       // Mask: 0x2, PropSize: 0x10x260(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_201 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_36A5[0x7];                                     // Fixing Size After Last Property 
	TSoftClassPtr<class UFortGameplayAbility>    OwnerCraftingAbility;                              // 0x268(0x20)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortGameplayAbility>    WhileCraftingAbility;                              // 0x288(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortGameplayAbility>    InstigatorWhileCraftingAbility;                    // 0x2A8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScaleMultiCraftingTime;                           // 0x2C8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36A7[0x7];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 CraftingFailedTags;                                // 0x2D0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_36A8[0x148];                                   // Fixing Size After Last Property 
	bool                                         FreeCraftingEnabled;                               // 0x438(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36A9[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCraftingObjectComponent* GetDefaultObj();

	void OnRep_CraftingObjectRepStateData(TArray<struct FCraftingObjectRepStateData>& OldValue);
	void HandlePickupCraftingItemPickedUp(class UFortPickup* Pickup, class UFortPawn* InteractingPawn, class UFortWorldItemDefinition* WorldItemDefinition, const struct FVector& PickupLocation);
	void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x10 (0xB8 - 0xA8)
// Class CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{
public:
	FMulticastInlineDelegateProperty_            OnCraftingSuccess;                                 // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortControllerComponent_CraftingNetworkEvents* GetDefaultObj();

	void ServerStartCrafting(class UActor* CraftingObject, class FName& CraftingFormulaName, int32 NumberToCraft, const struct FCraftingMultiKey& Key);
	void ServerResumeCrafting(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void ServerReportCraftingSuccess(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void ServerPickupItemAndStartCrafting(class UActor* CraftingObject, class UFortPickup* Pickup, class FName& CraftingFormulaName, const struct FCraftingMultiKey& Key);
	void ServerPauseCrafting(class UActor* CraftingObject, bool bDecayPausedTime, const struct FCraftingMultiKey& Key);
	void ServerEjectItems(class UActor* CraftingObject);
	void ServerClaimCraftingResults(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void ServerCancelCrafting(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void NotifyCraftingSuccess(class UActor* CraftingObject, class FName& FormulaRowName, const struct FCraftingMultiKey& Key);
	void ClientNotifyCraftingSuccess(class UActor* CraftingObject, class FName& FormulaRowName, const struct FCraftingMultiKey& Key);
	void ClientNotifyCraftingFailed(class UActor* CraftingObject, struct FGameplayTagContainer& FailedReason, const struct FCraftingMultiKey& Key);
};

// 0x1A8 (0x248 - 0xA0)
// Class CraftingRuntime.FortGameStateComponent_Crafting
class UFortGameStateComponent_Crafting : public UFortGameStateComponent
{
public:
	struct FDataRegistryType                     CraftingFormulaRegistryType;                       // 0xA0(0x4)(ZeroConstructor, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryType                     CraftingIngredientsUIDataRegistryType;             // 0xA4(0x4)(ZeroConstructor, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_36E4[0x140];                                   // Fixing Size After Last Property 
	TArray<struct FCraftingResult>               CraftingResultsList;                               // 0x1E8(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_36E5[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameStateComponent_Crafting* GetDefaultObj();

	void OnRep_CraftingResultsList();
	void OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
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
	uint8                                        Pad_36ED[0x6];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPickupInteractOverrideComponent_Crafting* GetDefaultObj();

};

// 0x0 (0xF8 - 0xF8)
// Class CraftingRuntime.FortContextualTutorial_CraftingComplete
class UFortContextualTutorial_CraftingComplete : public UFortContextualTutorial
{
public:

	static class UClass* StaticClass();
	static class UFortContextualTutorial_CraftingComplete* GetDefaultObj();

	void OnCraftingSuccess(struct FCraftingObjectSuccessEvent& Event);
};

// 0x0 (0xF8 - 0xF8)
// Class CraftingRuntime.FortContextualTutorial_CraftingReady
class UFortContextualTutorial_CraftingReady : public UFortContextualTutorial
{
public:

	static class UClass* StaticClass();
	static class UFortContextualTutorial_CraftingReady* GetDefaultObj();

	void HandleFormulaCraftableChanged(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x8 (0x100 - 0xF8)
// Class CraftingRuntime.FortContextualTutorial_CraftingTabOpen
class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial
{
public:
	uint8                                        Pad_36FA[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortContextualTutorial_CraftingTabOpen* GetDefaultObj();

	void HandleInventoryTabChanged(class FName InventoryTabNameId);
	void HandleFormulaCraftableChanged(class FName& FormulaRowName, bool bIsCraftable);
};

// 0x0 (0x28 - 0x28)
// Class CraftingRuntime.CraftingLibrary
class UCraftingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCraftingLibrary* GetDefaultObj();

	void StartCrafting(class UFortPlayerController* Instigator, class UActor* CraftingObject, class FName& CraftingFormulaName, int32 NumberToCraft, const struct FCraftingMultiKey& Key);
	void ResumeCrafting(class UFortPlayerController* Instigator, class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void ReportCraftingSuccess(class UFortPlayerController* Instigator, class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void PickupItemAndStartCrafting(class UFortPlayerController* Instigator, class UActor* CraftingObject, class UFortPickup* Pickup, class FName& CraftingFormulaName, const struct FCraftingMultiKey& Key);
	void PauseCrafting(class UFortPlayerController* Instigator, class UActor* CraftingObject, bool bDecayPausedTime, const struct FCraftingMultiKey& Key);
	bool IsValidIngredient(class UFortPlayerController* FortPC, class UActor* CraftingObject, class UFortItemDefinition* ItemDef);
	void GiveItemToCraftingObject(class UFortPlayerController* Instigator, class UActor* CraftingObject, struct FFortItemEntry& ItemEntryToGrant);
	void GetValidIngredientsInInventory(class UFortPlayerController* FortPC, class UActor* CraftingObject, TArray<class UFortWorldItem*>* OutIngredients);
	void GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, struct FGameplayTagContainer& IngredientTags, TArray<TSoftObjectPtr<class UFortItemDefinition>>* OutItemDefs, TArray<TSoftObjectPtr<class UObject>>* OutIcons);
	float GetTimeToCraftRecipe(class UActor* CraftingObject, class FName& CraftingFormulaName);
	class FName GetLastCraftedItemFormulaName(class UActor* CraftingObject);
	void GetKnownCraftingFormulas(class UFortPlayerController* FortPC, class UActor* CraftingObject, TArray<class FName>* OutFormulas);
	TArray<class UFortWorldItem*> GetIngredientsInCraftingObject(class UActor* CraftingObject);
	void GetCraftingResultsForRowName(class UObject* WorldContextObject, class FName& CraftingFormulaRow, TArray<struct FItemAndCount>* OutResults, int32 NumToCraft);
	struct FGameplayTagContainer GetCraftingObjectTags(class UActor* CraftingObject);
	float GetCraftingObjectPausedTime(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	float GetCraftingObjectCurrentCraftingStateTimeLeft(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	float GetCraftingObjectCurrentCraftingStateStartTime(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	float GetCraftingObjectCurrentCraftingStateEndTime(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	enum class ECraftingObjectState GetCraftingObjectCraftingState(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	class UCraftingObjectComponent* GetCraftingObjectComponent(class UActor* CraftingObject);
	TArray<class UFortWorldItem*> GetCraftingIngredients_TempItems(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	class FName GetCraftingFormulaNameBeingCrafted(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	bool GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, class FName& CraftingFormulaRow, TArray<struct FCraftingIngredientRequirement>* OutIngredientRequirements);
	TArray<class UFortWorldItem*> GetCraftedResults_TempItems(class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	void GetAllValidIngredients(class UFortPlayerController* FortPC, class UActor* CraftingObject, TArray<struct FGameplayTagContainer>* OutIngredients);
	void GetAllCraftingFormulas(class UFortPlayerController* FortPC, class UActor* CraftingObject, TArray<class FName>* OutFormulas);
	void GetAllCraftableFormulas(class UFortPlayerController* FortPC, class UActor* CraftingObject, TArray<class FName>* OutFormulas);
	void EjectItems(class UFortPlayerController* Instigator, class UActor* CraftingObject);
	void ClaimCraftingResults(class UFortPlayerController* Instigator, class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
	bool CanCraftFormulaWithAdditionalItems(class UFortPlayerController* FortPC, class UActor* CraftingObject, class FName CraftingFormulaRow, TArray<struct FItemAndCount>& AdditionalItems, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, int32 NumberToCraft);
	bool CanCraftFormula(class UFortPlayerController* FortPC, class UActor* CraftingObject, class FName CraftingFormulaRow, TArray<struct FCraftingIngredientQueryState>* OutIngredientStates, int32 NumberToCraft);
	void CancelCrafting(class UFortPlayerController* Instigator, class UActor* CraftingObject, const struct FCraftingMultiKey& Key);
};

}


