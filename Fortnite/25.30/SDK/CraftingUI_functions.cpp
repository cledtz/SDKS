#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CraftingUI.AthenaCraftingQuickBarButton.OnIsCraftableItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCraftableItem                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaCraftingQuickBarButton::OnIsCraftableItemChanged(bool bIsCraftableItem)
{
	static auto Func = Class->GetFunction("AthenaCraftingQuickBarButton", "OnIsCraftableItemChanged");

	Params::UAthenaCraftingQuickBarButton_OnIsCraftableItemChanged_Params Parms;

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaCraftingQuickBarButton.OnCanCraftNowChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaCraftingQuickBarButton::OnCanCraftNowChanged(bool bCanCraftNow)
{
	static auto Func = Class->GetFunction("AthenaCraftingQuickBarButton", "OnCanCraftNowChanged");

	Params::UAthenaCraftingQuickBarButton_OnCanCraftNowChanged_Params Parms;

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCraftableItem                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaEquippedItemCraftingIndicator::OnIsCraftableItemChanged(bool bIsCraftableItem)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "OnIsCraftableItemChanged");

	Params::UAthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged_Params Parms;

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaEquippedItemCraftingIndicator::OnCanCraftNowChanged(bool bCanCraftNow)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "OnCanCraftNowChanged");

	Params::UAthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged_Params Parms;

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaEquippedItemCraftingIndicator.HandleWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaEquippedItemCraftingIndicator::HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "HandleWeaponEquipped");

	Params::UAthenaEquippedItemCraftingIndicator_HandleWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCraftableItem                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaInventoryItemInfoCraftingIndicator::OnIsCraftableItemChanged(bool bIsCraftableItem)
{
	static auto Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "OnIsCraftableItemChanged");

	Params::UAthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged_Params Parms;

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaInventoryItemInfoCraftingIndicator::OnCanCraftNowChanged(bool bCanCraftNow)
{
	static auto Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "OnCanCraftNowChanged");

	Params::UAthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged_Params Parms;

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected
// (Final, Native, Private)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaInventoryItemInfoCraftingIndicator::HandleInventoryItemSelected(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "HandleInventoryItemSelected");

	Params::UAthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected_Params Parms;

	Parms.SelectedItem = SelectedItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCraftableItem                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaQuickBarSlotCraftingIndicator::OnIsCraftableItemChanged(bool bIsCraftableItem)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnIsCraftableItemChanged");

	Params::UAthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged_Params Parms;

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIngredientChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaQuickBarSlotCraftingIndicator::OnIngredientChanged(bool bCanCraftNow)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnIngredientChanged");

	Params::UAthenaQuickBarSlotCraftingIndicator_OnIngredientChanged_Params Parms;

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaQuickBarSlotCraftingIndicator::OnCanCraftNowChanged(bool bCanCraftNow)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnCanCraftNowChanged");

	Params::UAthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged_Params Parms;

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.HandleWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaQuickBarSlotCraftingIndicator::HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "HandleWeaponEquipped");

	Params::UAthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingUI.FortCraftingIngredientWidget.OnIngredientWidgetUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumAvailable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumRequired                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsPrimaryIngredient                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLastIngredient                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCraftingIngredientWidget::OnIngredientWidgetUpdated(int32 NumAvailable, int32 NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient)
{
	static auto Func = Class->GetFunction("FortCraftingIngredientWidget", "OnIngredientWidgetUpdated");

	Params::UFortCraftingIngredientWidget_OnIngredientWidgetUpdated_Params Parms;

	Parms.NumAvailable = NumAvailable;
	Parms.NumRequired = NumRequired;
	Parms.bIsPrimaryIngredient = bIsPrimaryIngredient;
	Parms.bIsLastIngredient = bIsLastIngredient;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortRarity             Rarity                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortRarityItemData         RarityItemData                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)

void UFortCraftingItemInfoWidget::OnItemRaritySet(enum class EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData)
{
	static auto Func = Class->GetFunction("FortCraftingItemInfoWidget", "OnItemRaritySet");

	Params::UFortCraftingItemInfoWidget_OnItemRaritySet_Params Parms;

	Parms.Rarity = Rarity;
	Parms.RarityItemData = RarityItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.FortCraftingListEntry.OnCraftingListItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCraftingListEntry::OnCraftingListItemSet()
{
	static auto Func = Class->GetFunction("FortCraftingListEntry", "OnCraftingListItemSet");

	Params::UFortCraftingListEntry_OnCraftingListItemSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.FortCraftingTab.OnFormulaListUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumFormulas                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCraftingTab::OnFormulaListUpdated(int32 NumFormulas)
{
	static auto Func = Class->GetFunction("FortCraftingTab", "OnFormulaListUpdated");

	Params::UFortCraftingTab_OnFormulaListUpdated_Params Parms;

	Parms.NumFormulas = NumFormulas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.FortCraftingTab.HandleInventoryItemSelected
// (Final, Native, Private)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCraftingTab::HandleInventoryItemSelected(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("FortCraftingTab", "HandleInventoryItemSelected");

	Params::UFortCraftingTab_HandleInventoryItemSelected_Params Parms;

	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CraftingUI.FortPotContentsPopup.SetOwningCraftingObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCraftingObjectBGA*          InCraftingObject                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPotContentsPopup::SetOwningCraftingObject(class UCraftingObjectBGA* InCraftingObject)
{
	static auto Func = Class->GetFunction("FortPotContentsPopup", "SetOwningCraftingObject");

	Params::UFortPotContentsPopup_SetOwningCraftingObject_Params Parms;

	Parms.InCraftingObject = InCraftingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
