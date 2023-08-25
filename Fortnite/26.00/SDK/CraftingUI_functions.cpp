#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CraftingUI.FortCraftingListItem
// (None)

class UClass* UFortCraftingListItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCraftingListItem");

	return Clss;
}


// FortCraftingListItem CraftingUI.Default__FortCraftingListItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCraftingListItem* UFortCraftingListItem::GetDefaultObj()
{
	static class UFortCraftingListItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCraftingListItem*>(UFortCraftingListItem::StaticClass()->DefaultObject);

	return Default;
}


// Class CraftingUI.AthenaCraftingQuickBarButton
// (None)

class UClass* UAthenaCraftingQuickBarButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCraftingQuickBarButton");

	return Clss;
}


// AthenaCraftingQuickBarButton CraftingUI.Default__AthenaCraftingQuickBarButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaCraftingQuickBarButton* UAthenaCraftingQuickBarButton::GetDefaultObj()
{
	static class UAthenaCraftingQuickBarButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCraftingQuickBarButton*>(UAthenaCraftingQuickBarButton::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingUI.AthenaCraftingQuickBarButton.OnIsCraftableItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCraftableItem                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaCraftingQuickBarButton::OnIsCraftableItemChanged(bool bIsCraftableItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCraftingQuickBarButton", "OnIsCraftableItemChanged");

	Params::UAthenaCraftingQuickBarButton_OnIsCraftableItemChanged_Params Parms{};

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaCraftingQuickBarButton.OnCanCraftNowChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaCraftingQuickBarButton::OnCanCraftNowChanged(bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCraftingQuickBarButton", "OnCanCraftNowChanged");

	Params::UAthenaCraftingQuickBarButton_OnCanCraftNowChanged_Params Parms{};

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CraftingUI.AthenaEquippedItemCraftingIndicator
// (None)

class UClass* UAthenaEquippedItemCraftingIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaEquippedItemCraftingIndicator");

	return Clss;
}


// AthenaEquippedItemCraftingIndicator CraftingUI.Default__AthenaEquippedItemCraftingIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaEquippedItemCraftingIndicator* UAthenaEquippedItemCraftingIndicator::GetDefaultObj()
{
	static class UAthenaEquippedItemCraftingIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaEquippedItemCraftingIndicator*>(UAthenaEquippedItemCraftingIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCraftableItem                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaEquippedItemCraftingIndicator::OnIsCraftableItemChanged(bool bIsCraftableItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "OnIsCraftableItemChanged");

	Params::UAthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged_Params Parms{};

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaEquippedItemCraftingIndicator::OnCanCraftNowChanged(bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "OnCanCraftNowChanged");

	Params::UAthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "HandleWeaponEquipped");

	Params::UAthenaEquippedItemCraftingIndicator_HandleWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
// (None)

class UClass* UAthenaInventoryItemInfoCraftingIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaInventoryItemInfoCraftingIndicator");

	return Clss;
}


// AthenaInventoryItemInfoCraftingIndicator CraftingUI.Default__AthenaInventoryItemInfoCraftingIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaInventoryItemInfoCraftingIndicator* UAthenaInventoryItemInfoCraftingIndicator::GetDefaultObj()
{
	static class UAthenaInventoryItemInfoCraftingIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaInventoryItemInfoCraftingIndicator*>(UAthenaInventoryItemInfoCraftingIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCraftableItem                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaInventoryItemInfoCraftingIndicator::OnIsCraftableItemChanged(bool bIsCraftableItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "OnIsCraftableItemChanged");

	Params::UAthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged_Params Parms{};

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaInventoryItemInfoCraftingIndicator::OnCanCraftNowChanged(bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "OnCanCraftNowChanged");

	Params::UAthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged_Params Parms{};

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected
// (Final, Native, Private)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaInventoryItemInfoCraftingIndicator::HandleInventoryItemSelected(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "HandleInventoryItemSelected");

	Params::UAthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
// (None)

class UClass* UAthenaQuickBarSlotCraftingIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaQuickBarSlotCraftingIndicator");

	return Clss;
}


// AthenaQuickBarSlotCraftingIndicator CraftingUI.Default__AthenaQuickBarSlotCraftingIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaQuickBarSlotCraftingIndicator* UAthenaQuickBarSlotCraftingIndicator::GetDefaultObj()
{
	static class UAthenaQuickBarSlotCraftingIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaQuickBarSlotCraftingIndicator*>(UAthenaQuickBarSlotCraftingIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsCraftableItem                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaQuickBarSlotCraftingIndicator::OnIsCraftableItemChanged(bool bIsCraftableItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnIsCraftableItemChanged");

	Params::UAthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged_Params Parms{};

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIngredientChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaQuickBarSlotCraftingIndicator::OnIngredientChanged(bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnIngredientChanged");

	Params::UAthenaQuickBarSlotCraftingIndicator_OnIngredientChanged_Params Parms{};

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanCraftNow                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaQuickBarSlotCraftingIndicator::OnCanCraftNowChanged(bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnCanCraftNowChanged");

	Params::UAthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "HandleWeaponEquipped");

	Params::UAthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CraftingUI.FortCookingScreen
// (None)

class UClass* UFortCookingScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCookingScreen");

	return Clss;
}


// FortCookingScreen CraftingUI.Default__FortCookingScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCookingScreen* UFortCookingScreen::GetDefaultObj()
{
	static class UFortCookingScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCookingScreen*>(UFortCookingScreen::StaticClass()->DefaultObject);

	return Default;
}


// Class CraftingUI.FortCraftingFormulaIngredientsWidget
// (None)

class UClass* UFortCraftingFormulaIngredientsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCraftingFormulaIngredientsWidget");

	return Clss;
}


// FortCraftingFormulaIngredientsWidget CraftingUI.Default__FortCraftingFormulaIngredientsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCraftingFormulaIngredientsWidget* UFortCraftingFormulaIngredientsWidget::GetDefaultObj()
{
	static class UFortCraftingFormulaIngredientsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCraftingFormulaIngredientsWidget*>(UFortCraftingFormulaIngredientsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class CraftingUI.FortCraftingIngredientWidget
// (None)

class UClass* UFortCraftingIngredientWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCraftingIngredientWidget");

	return Clss;
}


// FortCraftingIngredientWidget CraftingUI.Default__FortCraftingIngredientWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCraftingIngredientWidget* UFortCraftingIngredientWidget::GetDefaultObj()
{
	static class UFortCraftingIngredientWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCraftingIngredientWidget*>(UFortCraftingIngredientWidget::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCraftingIngredientWidget", "OnIngredientWidgetUpdated");

	Params::UFortCraftingIngredientWidget_OnIngredientWidgetUpdated_Params Parms{};

	Parms.NumAvailable = NumAvailable;
	Parms.NumRequired = NumRequired;
	Parms.bIsPrimaryIngredient = bIsPrimaryIngredient;
	Parms.bIsLastIngredient = bIsLastIngredient;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CraftingUI.FortCraftingItemInfoWidget
// (None)

class UClass* UFortCraftingItemInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCraftingItemInfoWidget");

	return Clss;
}


// FortCraftingItemInfoWidget CraftingUI.Default__FortCraftingItemInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCraftingItemInfoWidget* UFortCraftingItemInfoWidget::GetDefaultObj()
{
	static class UFortCraftingItemInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCraftingItemInfoWidget*>(UFortCraftingItemInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortRarity             Rarity                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortRarityItemData         RarityItemData                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)

void UFortCraftingItemInfoWidget::OnItemRaritySet(enum class EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCraftingItemInfoWidget", "OnItemRaritySet");

	Params::UFortCraftingItemInfoWidget_OnItemRaritySet_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.RarityItemData = RarityItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CraftingUI.FortCraftingListEntry
// (None)

class UClass* UFortCraftingListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCraftingListEntry");

	return Clss;
}


// FortCraftingListEntry CraftingUI.Default__FortCraftingListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCraftingListEntry* UFortCraftingListEntry::GetDefaultObj()
{
	static class UFortCraftingListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCraftingListEntry*>(UFortCraftingListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingUI.FortCraftingListEntry.OnCraftingListItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCraftingListEntry::OnCraftingListItemSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCraftingListEntry", "OnCraftingListItemSet");

	Params::UFortCraftingListEntry_OnCraftingListItemSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class CraftingUI.FortCraftingTab
// (None)

class UClass* UFortCraftingTab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCraftingTab");

	return Clss;
}


// FortCraftingTab CraftingUI.Default__FortCraftingTab
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCraftingTab* UFortCraftingTab::GetDefaultObj()
{
	static class UFortCraftingTab* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCraftingTab*>(UFortCraftingTab::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingUI.FortCraftingTab.OnFormulaListUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumFormulas                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCraftingTab::OnFormulaListUpdated(int32 NumFormulas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCraftingTab", "OnFormulaListUpdated");

	Params::UFortCraftingTab_OnFormulaListUpdated_Params Parms{};

	Parms.NumFormulas = NumFormulas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CraftingUI.FortCraftingTab.HandleInventoryItemSelected
// (Final, Native, Private)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCraftingTab::HandleInventoryItemSelected(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCraftingTab", "HandleInventoryItemSelected");

	Params::UFortCraftingTab_HandleInventoryItemSelected_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CraftingUI.FortPotContentsPopup
// (None)

class UClass* UFortPotContentsPopup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPotContentsPopup");

	return Clss;
}


// FortPotContentsPopup CraftingUI.Default__FortPotContentsPopup
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPotContentsPopup* UFortPotContentsPopup::GetDefaultObj()
{
	static class UFortPotContentsPopup* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPotContentsPopup*>(UFortPotContentsPopup::StaticClass()->DefaultObject);

	return Default;
}


// Function CraftingUI.FortPotContentsPopup.SetOwningCraftingObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCraftingObjectBGA*          InCraftingObject                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPotContentsPopup::SetOwningCraftingObject(class UCraftingObjectBGA* InCraftingObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPotContentsPopup", "SetOwningCraftingObject");

	Params::UFortPotContentsPopup_SetOwningCraftingObject_Params Parms{};

	Parms.InCraftingObject = InCraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CraftingUI.FortPotContentsTile
// (None)

class UClass* UFortPotContentsTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPotContentsTile");

	return Clss;
}


// FortPotContentsTile CraftingUI.Default__FortPotContentsTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPotContentsTile* UFortPotContentsTile::GetDefaultObj()
{
	static class UFortPotContentsTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPotContentsTile*>(UFortPotContentsTile::StaticClass()->DefaultObject);

	return Default;
}


// Class CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
// (None)

class UClass* UFortUIGameFeatureAction_SetCraftMenuWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUIGameFeatureAction_SetCraftMenuWidget");

	return Clss;
}


// FortUIGameFeatureAction_SetCraftMenuWidget CraftingUI.Default__FortUIGameFeatureAction_SetCraftMenuWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUIGameFeatureAction_SetCraftMenuWidget* UFortUIGameFeatureAction_SetCraftMenuWidget::GetDefaultObj()
{
	static class UFortUIGameFeatureAction_SetCraftMenuWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUIGameFeatureAction_SetCraftMenuWidget*>(UFortUIGameFeatureAction_SetCraftMenuWidget::StaticClass()->DefaultObject);

	return Default;
}

}


