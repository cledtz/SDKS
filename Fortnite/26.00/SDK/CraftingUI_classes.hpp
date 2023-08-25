#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x118 - 0x28)
// Class CraftingUI.FortCraftingListItem
class UFortCraftingListItem : public UObject
{
public:
	uint8                                        Pad_3712[0xF0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCraftingListItem* GetDefaultObj();

};

// 0x20 (0x14A0 - 0x1480)
// Class CraftingUI.AthenaCraftingQuickBarButton
class UAthenaCraftingQuickBarButton : public UAthenaQuickBarSlotButtonBase
{
public:
	uint8                                        Pad_371A[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaCraftingQuickBarButton* GetDefaultObj();

	void OnIsCraftableItemChanged(bool bIsCraftableItem);
	void OnCanCraftNowChanged(bool bCanCraftNow);
};

// 0x20 (0x2F0 - 0x2D0)
// Class CraftingUI.AthenaEquippedItemCraftingIndicator
class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget
{
public:
	uint8                                        Pad_374C[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaEquippedItemCraftingIndicator* GetDefaultObj();

	void OnIsCraftableItemChanged(bool bIsCraftableItem);
	void OnCanCraftNowChanged(bool bCanCraftNow);
	void HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
};

// 0x20 (0x2F0 - 0x2D0)
// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget
{
public:
	uint8                                        Pad_3756[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaInventoryItemInfoCraftingIndicator* GetDefaultObj();

	void OnIsCraftableItemChanged(bool bIsCraftableItem);
	void OnCanCraftNowChanged(bool bCanCraftNow);
	void HandleInventoryItemSelected(class UFortItem* SelectedItem);
};

// 0x30 (0x308 - 0x2D8)
// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase
{
public:
	uint8                                        Pad_3765[0x20];                                    // Fixing Size After Last Property 
	bool                                         bCheckForIngredientChangesWhenCraftable;           // 0x2F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3766[0xF];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAthenaQuickBarSlotCraftingIndicator* GetDefaultObj();

	void OnIsCraftableItemChanged(bool bIsCraftableItem);
	void OnIngredientChanged(bool bCanCraftNow);
	void OnCanCraftNowChanged(bool bCanCraftNow);
	void HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon);
};

// 0x50 (0x438 - 0x3E8)
// Class CraftingUI.FortCookingScreen
class UFortCookingScreen : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3769[0x8];                                     // Fixing Size After Last Property 
	struct FDataTableRowHandle                   CloseInputAction;                                  // 0x3F0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_376B[0x8];                                     // Fixing Size After Last Property 
	class UCommonButtonLegacy*                   Button_EjectAll;                                   // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Cancel;                                     // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RecipeName;                                   // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RecipeDescription;                            // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Recipe;                                      // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSlottedRadialMenu*                RadialMenu_Recipes;                                // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCookingScreen* GetDefaultObj();

};

// 0x8 (0x2D8 - 0x2D0)
// Class CraftingUI.FortCraftingFormulaIngredientsWidget
class UFortCraftingFormulaIngredientsWidget : public UCommonUserWidget
{
public:
	class UDynamicEntryBox*                      EntryBox_Ingredients;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCraftingFormulaIngredientsWidget* GetDefaultObj();

};

// 0x28 (0x2F8 - 0x2D0)
// Class CraftingUI.FortCraftingIngredientWidget
class UFortCraftingIngredientWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_3779[0x8];                                     // Fixing Size After Last Property 
	class UCommonTextBlock*                      Text_NumAvailable;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_NumRequired;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaItemIcon*                       ItemIcon;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      LazyImage_Icon;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCraftingIngredientWidget* GetDefaultObj();

	void OnIngredientWidgetUpdated(int32 NumAvailable, int32 NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient);
};

// 0x68 (0x450 - 0x3E8)
// Class CraftingUI.FortCraftingItemInfoWidget
class UFortCraftingItemInfoWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_3783[0x8];                                     // Fixing Size After Last Property 
	class FText                                  RarityTextFormat;                                  // 0x3F0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemRarity;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemCategory;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemCategoryIndicator*            ItemCategoryIndicator;                             // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemDescription;                              // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaInventoryItemStatsWidget*       ItemStatsWidget;                                   // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCraftingFormulaIngredientsWidget* IngredientsWidget;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_StartCrafting;                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3788[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCraftingItemInfoWidget* GetDefaultObj();

	void OnItemRaritySet(enum class EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData);
};

// 0x20 (0x14E0 - 0x14C0)
// Class CraftingUI.FortCraftingListEntry
class UFortCraftingListEntry : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_3791[0x8];                                     // Fixing Size After Last Property 
	class UAthenaItemIcon*                       ItemIcon;                                          // 0x14C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanCraftItem;                                     // 0x14D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3792[0xF];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCraftingListEntry* GetDefaultObj();

	void OnCraftingListItemSet();
};

// 0x148 (0x530 - 0x3E8)
// Class CraftingUI.FortCraftingTab
class UFortCraftingTab : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_379C[0x8];                                     // Fixing Size After Last Property 
	class FName                                  TabNameID;                                         // 0x3F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_379E[0xC];                                     // Fixing Size After Last Property 
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x400(0xF0)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 PrimaryIngredientTags;                             // 0x4F0(0x20)(Edit, NativeAccessSpecifierPrivate)
	class UFortCraftingItemInfoWidget*           CraftingItemInfo;                                  // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Recipes;                                  // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaQuickbarEditorBase*             QuickbarEditor;                                    // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37A0[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCraftingTab* GetDefaultObj();

	void OnFormulaListUpdated(int32 NumFormulas);
	void HandleInventoryItemSelected(class UFortItem* Item);
};

// 0x28 (0x2D0 - 0x2A8)
// Class CraftingUI.FortPotContentsPopup
class UFortPotContentsPopup : public UUserWidget
{
public:
	int32                                        MaxItemsToShow;                                    // 0x2A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37A8[0xC];                                     // Fixing Size After Last Property 
	class UCommonTileView*                       TileView_PotContents;                              // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_MoreItems;                                    // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_Popup;                                     // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPotContentsPopup* GetDefaultObj();

	void SetOwningCraftingObject(class UCraftingObjectBGA* InCraftingObject);
};

// 0x10 (0x14D0 - 0x14C0)
// Class CraftingUI.FortPotContentsTile
class UFortPotContentsTile : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_37AA[0x8];                                     // Fixing Size After Last Property 
	class UCommonLazyImage*                      Image_Item;                                        // 0x14C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPotContentsTile* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
class UFortUIGameFeatureAction_SetCraftMenuWidget : public UFortUIGameFeatureAction
{
public:
	TSubclassOf<class UCraftingObjectBGA>        CraftingObject;                                    // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UUserWidget>             CraftingMenuWidget;                                // 0x30(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_37AC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortUIGameFeatureAction_SetCraftMenuWidget* GetDefaultObj();

};

}


