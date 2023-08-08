#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaCraftingQuickBarButton.OnIsCraftableItemChanged
struct UAthenaCraftingQuickBarButton_OnIsCraftableItemChanged_Params
{
public:
	bool                                         bIsCraftableItem;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaCraftingQuickBarButton.OnCanCraftNowChanged
struct UAthenaCraftingQuickBarButton_OnCanCraftNowChanged_Params
{
public:
	bool                                         bCanCraftNow;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged
struct UAthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged_Params
{
public:
	bool                                         bIsCraftableItem;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged
struct UAthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged_Params
{
public:
	bool                                         bCanCraftNow;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingUI.AthenaEquippedItemCraftingIndicator.HandleWeaponEquipped
struct UAthenaEquippedItemCraftingIndicator_HandleWeaponEquipped_Params
{
public:
	class UFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged
struct UAthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged_Params
{
public:
	bool                                         bIsCraftableItem;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged
struct UAthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged_Params
{
public:
	bool                                         bCanCraftNow;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected
struct UAthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged
struct UAthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged_Params
{
public:
	bool                                         bIsCraftableItem;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIngredientChanged
struct UAthenaQuickBarSlotCraftingIndicator_OnIngredientChanged_Params
{
public:
	bool                                         bCanCraftNow;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged
struct UAthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged_Params
{
public:
	bool                                         bCanCraftNow;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.HandleWeaponEquipped
struct UAthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped_Params
{
public:
	class UFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CraftingUI.FortCraftingIngredientWidget.OnIngredientWidgetUpdated
struct UFortCraftingIngredientWidget_OnIngredientWidgetUpdated_Params
{
public:
	int32                                        NumAvailable;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumRequired;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPrimaryIngredient;                              // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLastIngredient;                                 // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2538[0x2];                                     // Fixing Size Of Struct
};

// 0x88 (0x88 - 0x0)
// Function CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet
struct UFortCraftingItemInfoWidget_OnItemRaritySet_Params
{
public:
	enum class EFortRarity                       Rarity;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253F[0x7];                                     // Fixing Size After Last Property
	struct FFortRarityItemData                   RarityItemData;                                    // 0x8(0x80)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CraftingUI.FortCraftingListEntry.OnCraftingListItemSet
struct UFortCraftingListEntry_OnCraftingListItemSet_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CraftingUI.FortCraftingTab.OnFormulaListUpdated
struct UFortCraftingTab_OnFormulaListUpdated_Params
{
public:
	int32                                        NumFormulas;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CraftingUI.FortCraftingTab.HandleInventoryItemSelected
struct UFortCraftingTab_HandleInventoryItemSelected_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CraftingUI.FortPotContentsPopup.SetOwningCraftingObject
struct UFortPotContentsPopup_SetOwningCraftingObject_Params
{
public:
	class UCraftingObjectBGA*                    InCraftingObject;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
