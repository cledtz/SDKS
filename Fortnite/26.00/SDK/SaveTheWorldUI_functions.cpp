#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SaveTheWorldUI.FortQuestMapViewer
// (None)

class UClass* UFortQuestMapViewer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapViewer");

	return Clss;
}


// FortQuestMapViewer SaveTheWorldUI.Default__FortQuestMapViewer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapViewer* UFortQuestMapViewer::GetDefaultObj()
{
	static class UFortQuestMapViewer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapViewer*>(UFortQuestMapViewer::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapViewer.UpdateViewerData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapViewer::UpdateViewerData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer", "UpdateViewerData");

	Params::UFortQuestMapViewer_UpdateViewerData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapViewer.OnTryUpdateUserWidgetColor
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor                 OverrideColor                                                    (Parm, NativeAccessSpecifierPublic)

void UFortQuestMapViewer::OnTryUpdateUserWidgetColor(class UUserWidget* Widget, const struct FSlateColor& OverrideColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer", "OnTryUpdateUserWidgetColor");

	Params::UFortQuestMapViewer_OnTryUpdateUserWidgetColor_Params Parms{};

	Parms.Widget = Widget;
	Parms.OverrideColor = OverrideColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutOutroAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EViewerNavigationDirectionTravelDirection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapViewer::OnPlayLayoutOutroAnimation(enum class EViewerNavigationDirection TravelDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer", "OnPlayLayoutOutroAnimation");

	Params::UFortQuestMapViewer_OnPlayLayoutOutroAnimation_Params Parms{};

	Parms.TravelDirection = TravelDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutFadeInAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapViewer::OnPlayLayoutFadeInAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer", "OnPlayLayoutFadeInAnimation");

	Params::UFortQuestMapViewer_OnPlayLayoutFadeInAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapViewer.HandleLayoutOutroAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapViewer::HandleLayoutOutroAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer", "HandleLayoutOutroAnimationFinished");

	Params::UFortQuestMapViewer_HandleLayoutOutroAnimationFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortArmoryScreen
// (None)

class UClass* UFortArmoryScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortArmoryScreen");

	return Clss;
}


// FortArmoryScreen SaveTheWorldUI.Default__FortArmoryScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortArmoryScreen* UFortArmoryScreen::GetDefaultObj()
{
	static class UFortArmoryScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortArmoryScreen*>(UFortArmoryScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortArmoryScreen.PushItemManagementScreen
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EFortFrontendInventoryFilterItemManagementFilter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   ItemToSelect                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowAutoMulch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortArmoryScreen::PushItemManagementScreen(enum class EFortFrontendInventoryFilter ItemManagementFilter, class UFortItem* ItemToSelect, bool bShowAutoMulch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortArmoryScreen", "PushItemManagementScreen");

	Params::UFortArmoryScreen_PushItemManagementScreen_Params Parms{};

	Parms.ItemManagementFilter = ItemManagementFilter;
	Parms.ItemToSelect = ItemToSelect;
	Parms.bShowAutoMulch = bShowAutoMulch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortArmoryScreen.PushItemInspectionScreen
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortItemInspectionMode Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemTileView*           CycleTileView                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReadOnly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowFavoriting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsTemporaryItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRarityUpgrading                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortArmoryScreen::PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortArmoryScreen", "PushItemInspectionScreen");

	Params::UFortArmoryScreen_PushItemInspectionScreen_Params Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.CycleTileView = CycleTileView;
	Parms.bReadOnly = bReadOnly;
	Parms.bAllowFavoriting = bAllowFavoriting;
	Parms.bIsTemporaryItem = bIsTemporaryItem;
	Parms.bAllowRarityUpgrading = bAllowRarityUpgrading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortArmoryScreen.PushHeroLoadoutScreen
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortCampaignHeroLoadoutItem*HeroLoadout                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortArmoryScreen::PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortArmoryScreen", "PushHeroLoadoutScreen");

	Params::UFortArmoryScreen_PushHeroLoadoutScreen_Params Parms{};

	Parms.HeroLoadout = HeroLoadout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortArmoryScreen_Legacy
// (None)

class UClass* UFortArmoryScreen_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortArmoryScreen_Legacy");

	return Clss;
}


// FortArmoryScreen_Legacy SaveTheWorldUI.Default__FortArmoryScreen_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortArmoryScreen_Legacy* UFortArmoryScreen_Legacy::GetDefaultObj()
{
	static class UFortArmoryScreen_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortArmoryScreen_Legacy*>(UFortArmoryScreen_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortCommandScreen
// (None)

class UClass* UFortCommandScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCommandScreen");

	return Clss;
}


// FortCommandScreen SaveTheWorldUI.Default__FortCommandScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCommandScreen* UFortCommandScreen::GetDefaultObj()
{
	static class UFortCommandScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCommandScreen*>(UFortCommandScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCommandScreen.PushItemInspectionScreen
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortItemInspectionMode Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemTileView*           CycleTileView                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReadOnly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowFavoriting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsTemporaryItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRarityUpgrading                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCommandScreen::PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCommandScreen", "PushItemInspectionScreen");

	Params::UFortCommandScreen_PushItemInspectionScreen_Params Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.CycleTileView = CycleTileView;
	Parms.bReadOnly = bReadOnly;
	Parms.bAllowFavoriting = bAllowFavoriting;
	Parms.bIsTemporaryItem = bIsTemporaryItem;
	Parms.bAllowRarityUpgrading = bAllowRarityUpgrading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCommandScreen.PushHeroLoadoutScreen
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortCampaignHeroLoadoutItem*HeroLoadout                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCommandScreen::PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCommandScreen", "PushHeroLoadoutScreen");

	Params::UFortCommandScreen_PushHeroLoadoutScreen_Params Parms{};

	Parms.HeroLoadout = HeroLoadout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCommandScreen.HandleUpgradeInspectHero
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCommandScreen::HandleUpgradeInspectHero()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCommandScreen", "HandleUpgradeInspectHero");

	Params::UFortCommandScreen_HandleUpgradeInspectHero_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCommandScreen.HandleShowAllStats
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCommandScreen::HandleShowAllStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCommandScreen", "HandleShowAllStats");

	Params::UFortCommandScreen_HandleShowAllStats_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortCollectionBookGenericRewardWidget
// (None)

class UClass* UFortCollectionBookGenericRewardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookGenericRewardWidget");

	return Clss;
}


// FortCollectionBookGenericRewardWidget SaveTheWorldUI.Default__FortCollectionBookGenericRewardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookGenericRewardWidget* UFortCollectionBookGenericRewardWidget::GetDefaultObj()
{
	static class UFortCollectionBookGenericRewardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookGenericRewardWidget*>(UFortCollectionBookGenericRewardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewardStatus
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ECollectionBookRewardStatusStatus                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookGenericRewardWidget::SetRewardStatus(enum class ECollectionBookRewardStatus Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "SetRewardStatus");

	Params::UFortCollectionBookGenericRewardWidget_SetRewardStatus_Params Parms{};

	Parms.Status = Status;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewards
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortRewardInfo             Rewards                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortCollectionBookGenericRewardWidget::SetRewards(struct FFortRewardInfo& Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "SetRewards");

	Params::UFortCollectionBookGenericRewardWidget_SetRewards_Params Parms{};

	Parms.Rewards = Rewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay
// (Native, Protected)
// Parameters:
// class UFortItem*                   ItemToDisplay                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookGenericRewardWidget::SetCurrentItemToDisplay(class UFortItem* ItemToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "SetCurrentItemToDisplay");

	Params::UFortCollectionBookGenericRewardWidget_SetCurrentItemToDisplay_Params Parms{};

	Parms.ItemToDisplay = ItemToDisplay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECollectionBookRewardStatusNewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookGenericRewardWidget::OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "OnRewardStatusChanged");

	Params::UFortCollectionBookGenericRewardWidget_OnRewardStatusChanged_Params Parms{};

	Parms.NewStatus = NewStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.HasRewards
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCollectionBookGenericRewardWidget::HasRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "HasRewards");

	Params::UFortCollectionBookGenericRewardWidget_HasRewards_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.GetRewardStatus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECollectionBookRewardStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECollectionBookRewardStatus UFortCollectionBookGenericRewardWidget::GetRewardStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "GetRewardStatus");

	Params::UFortCollectionBookGenericRewardWidget_GetRewardStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookGenericRewardWidget.ClearRewards
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortCollectionBookGenericRewardWidget::ClearRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "ClearRewards");

	Params::UFortCollectionBookGenericRewardWidget_ClearRewards_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookHelpWidget
// (None)

class UClass* UFortCollectionBookHelpWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookHelpWidget");

	return Clss;
}


// FortCollectionBookHelpWidget SaveTheWorldUI.Default__FortCollectionBookHelpWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookHelpWidget* UFortCollectionBookHelpWidget::GetDefaultObj()
{
	static class UFortCollectionBookHelpWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookHelpWidget*>(UFortCollectionBookHelpWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortCollectionBookItemPopupMenu
// (None)

class UClass* UFortCollectionBookItemPopupMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookItemPopupMenu");

	return Clss;
}


// FortCollectionBookItemPopupMenu SaveTheWorldUI.Default__FortCollectionBookItemPopupMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookItemPopupMenu* UFortCollectionBookItemPopupMenu::GetDefaultObj()
{
	static class UFortCollectionBookItemPopupMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookItemPopupMenu*>(UFortCollectionBookItemPopupMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCollectionBookItemPopupMenu::HandleItemUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "HandleItemUpdated");

	Params::UFortCollectionBookItemPopupMenu_HandleItemUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAmmoChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIngredientsChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookItemPopupMenu::HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "HandleItemChanged");

	Params::UFortCollectionBookItemPopupMenu_HandleItemChanged_Params Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.GetHostButton
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortCollectionBookSlotButton*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortCollectionBookSlotButton* UFortCollectionBookItemPopupMenu::GetHostButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "GetHostButton");

	Params::UFortCollectionBookItemPopupMenu_GetHostButton_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBeUnslotted
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCollectionBookItemPopupMenu::CanItemBeUnslotted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "CanItemBeUnslotted");

	Params::UFortCollectionBookItemPopupMenu_CanItemBeUnslotted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBePurchased
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCollectionBookItemPopupMenu::CanItemBePurchased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "CanItemBePurchased");

	Params::UFortCollectionBookItemPopupMenu_CanItemBePurchased_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortCollectionBookOverviewWidget
// (None)

class UClass* UFortCollectionBookOverviewWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookOverviewWidget");

	return Clss;
}


// FortCollectionBookOverviewWidget SaveTheWorldUI.Default__FortCollectionBookOverviewWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookOverviewWidget* UFortCollectionBookOverviewWidget::GetDefaultObj()
{
	static class UFortCollectionBookOverviewWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookOverviewWidget*>(UFortCollectionBookOverviewWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookOverviewWidget.OnDeactivated
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortCollectionBookOverviewWidget::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookOverviewWidget", "OnDeactivated");

	Params::UFortCollectionBookOverviewWidget_OnDeactivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookOverviewWidget.OnActivated
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortCollectionBookOverviewWidget::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookOverviewWidget", "OnActivated");

	Params::UFortCollectionBookOverviewWidget_OnActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookOverviewWidget.HandlePagesChanged
// (Final, Native, Private)
// Parameters:
// class UFortCollectionBookManager*  CBManager                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookOverviewWidget::HandlePagesChanged(class UFortCollectionBookManager* CBManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookOverviewWidget", "HandlePagesChanged");

	Params::UFortCollectionBookOverviewWidget_HandlePagesChanged_Params Parms{};

	Parms.CBManager = CBManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
// (None)

class UClass* UFortCollectionBookPageCompletionRewardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookPageCompletionRewardWidget");

	return Clss;
}


// FortCollectionBookPageCompletionRewardWidget SaveTheWorldUI.Default__FortCollectionBookPageCompletionRewardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookPageCompletionRewardWidget* UFortCollectionBookPageCompletionRewardWidget::GetDefaultObj()
{
	static class UFortCollectionBookPageCompletionRewardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookPageCompletionRewardWidget*>(UFortCollectionBookPageCompletionRewardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortCollectionBookPageDetailsWidget
// (None)

class UClass* UFortCollectionBookPageDetailsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookPageDetailsWidget");

	return Clss;
}


// FortCollectionBookPageDetailsWidget SaveTheWorldUI.Default__FortCollectionBookPageDetailsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookPageDetailsWidget* UFortCollectionBookPageDetailsWidget::GetDefaultObj()
{
	static class UFortCollectionBookPageDetailsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookPageDetailsWidget*>(UFortCollectionBookPageDetailsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnUnslotItemComplete
// (Final, Native, Protected)
// Parameters:
// class UFortAccountItem*            SlottedItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAccountItem*            OldItem                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageDetailsWidget::OnUnslotItemComplete(class UFortAccountItem* SlottedItem, class UFortAccountItem* OldItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "OnUnslotItemComplete");

	Params::UFortCollectionBookPageDetailsWidget_OnUnslotItemComplete_Params Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.OldItem = OldItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete
// (Final, Native, Protected)
// Parameters:
// class UFortAccountItem*            SlottedItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageDetailsWidget::OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "OnSlotItemComplete");

	Params::UFortCollectionBookPageDetailsWidget_OnSlotItemComplete_Params Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TotalFilledSlots                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalSlots                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortCollectionBookStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageDetailsWidget::OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "OnPageProgressionUpdated");

	Params::UFortCollectionBookPageDetailsWidget_OnPageProgressionUpdated_Params Parms{};

	Parms.TotalFilledSlots = TotalFilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     InNewDetailsPage                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageDetailsWidget::OnDetailsPageChanged(class UFortCollectionBookPage* InNewDetailsPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "OnDetailsPageChanged");

	Params::UFortCollectionBookPageDetailsWidget_OnDetailsPageChanged_Params Parms{};

	Parms.InNewDetailsPage = InNewDetailsPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated
// (Final, Native, Private)
// Parameters:
// class UCommonActivatablePanelLegacy*DeactivatedPanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageDetailsWidget::HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "HandleRewardDetailsModalWidgetDeactivated");

	Params::UFortCollectionBookPageDetailsWidget_HandleRewardDetailsModalWidgetDeactivated_Params Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookPageListWidget
// (None)

class UClass* UFortCollectionBookPageListWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookPageListWidget");

	return Clss;
}


// FortCollectionBookPageListWidget SaveTheWorldUI.Default__FortCollectionBookPageListWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookPageListWidget* UFortCollectionBookPageListWidget::GetDefaultObj()
{
	static class UFortCollectionBookPageListWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookPageListWidget*>(UFortCollectionBookPageListWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     Page                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageListWidget::SetupAsPage(class UFortCollectionBookPage* Page)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "SetupAsPage");

	Params::UFortCollectionBookPageListWidget_SetupAsPage_Params Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookCategory* Category                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageListWidget::SetupAsCategory(class UFortCollectionBookCategory* Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "SetupAsCategory");

	Params::UFortCollectionBookPageListWidget_SetupAsCategory_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnSlottedItemOperationComplete
// (Final, Native, Protected)
// Parameters:
// class UFortAccountItem*            SlottedItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageListWidget::OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "OnSlottedItemOperationComplete");

	Params::UFortCollectionBookPageListWidget_OnSlottedItemOperationComplete_Params Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              AvailableSlots                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FilledSlots                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalSlots                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortCollectionBookStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageListWidget::OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "OnPageDetailsUpdated");

	Params::UFortCollectionBookPageListWidget_OnPageDetailsUpdated_Params Parms{};

	Parms.AvailableSlots = AvailableSlots;
	Parms.FilledSlots = FilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookPageListWidget.OnCategoryDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              AvailableSlots                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FilledSlots                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalSlots                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPageListWidget::OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "OnCategoryDetailsUpdated");

	Params::UFortCollectionBookPageListWidget_OnCategoryDetailsUpdated_Params Parms{};

	Parms.AvailableSlots = AvailableSlots;
	Parms.FilledSlots = FilledSlots;
	Parms.TotalSlots = TotalSlots;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortCollectionBookPicker
// (None)

class UClass* UFortCollectionBookPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookPicker");

	return Clss;
}


// FortCollectionBookPicker SaveTheWorldUI.Default__FortCollectionBookPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookPicker* UFortCollectionBookPicker::GetDefaultObj()
{
	static class UFortCollectionBookPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookPicker*>(UFortCollectionBookPicker::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookPicker.ShowMulchDialogForItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToMulch                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPicker::ShowMulchDialogForItem(class UFortItem* ItemToMulch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPicker", "ShowMulchDialogForItem");

	Params::UFortCollectionBookPicker_ShowMulchDialogForItem_Params Parms{};

	Parms.ItemToMulch = ItemToMulch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPicker.ShowMulchConfirmationModal
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortCollectionBookPicker::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPicker", "ShowMulchConfirmationModal");

	Params::UFortCollectionBookPicker_ShowMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPicker.OnCollectComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCollectionBookPicker::OnCollectComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPicker", "OnCollectComplete");

	Params::UFortCollectionBookPicker_OnCollectComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelDeactivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortCollectionBookPicker::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPicker", "NotifyPanelDeactivated");

	Params::UFortCollectionBookPicker_NotifyPanelDeactivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelActivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortCollectionBookPicker::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPicker", "NotifyPanelActivated");

	Params::UFortCollectionBookPicker_NotifyPanelActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPicker.HideMulchConfirmationModal
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortCollectionBookPicker::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPicker", "HideMulchConfirmationModal");

	Params::UFortCollectionBookPicker_HideMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel
// (None)

class UClass* UFortCollectionBookPrimaryPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookPrimaryPanel");

	return Clss;
}


// FortCollectionBookPrimaryPanel SaveTheWorldUI.Default__FortCollectionBookPrimaryPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookPrimaryPanel* UFortCollectionBookPrimaryPanel::GetDefaultObj()
{
	static class UFortCollectionBookPrimaryPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookPrimaryPanel*>(UFortCollectionBookPrimaryPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel::OnSummonInfoPanelExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnSummonInfoPanelExecuted");

	Params::UFortCollectionBookPrimaryPanel_OnSummonInfoPanelExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged
// (Final, Native, Protected)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnInputMethodChanged");

	Params::UFortCollectionBookPrimaryPanel_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection*  ClickedSection                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel::OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnCollectionBookSectionClicked");

	Params::UFortCollectionBookPrimaryPanel_OnCollectionBookSectionClicked_Params Parms{};

	Parms.ClickedSection = ClickedSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     SelectedPage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel::OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnCollectionBookPageSelected");

	Params::UFortCollectionBookPrimaryPanel_OnCollectionBookPageSelected_Params Parms{};

	Parms.SelectedPage = SelectedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     ClickedPage                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel::OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnCollectionBookPageClicked");

	Params::UFortCollectionBookPrimaryPanel_OnCollectionBookPageClicked_Params Parms{};

	Parms.ClickedPage = ClickedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted
// (Final, Native, Public)
// Parameters:

void UFortCollectionBookPrimaryPanel::OnBackActionExecuted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnBackActionExecuted");

	Params::UFortCollectionBookPrimaryPanel_OnBackActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy
// (None)

class UClass* UFortCollectionBookPrimaryPanel_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookPrimaryPanel_Legacy");

	return Clss;
}


// FortCollectionBookPrimaryPanel_Legacy SaveTheWorldUI.Default__FortCollectionBookPrimaryPanel_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookPrimaryPanel_Legacy* UFortCollectionBookPrimaryPanel_Legacy::GetDefaultObj()
{
	static class UFortCollectionBookPrimaryPanel_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookPrimaryPanel_Legacy*>(UFortCollectionBookPrimaryPanel_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnSummonInfoPanelExecuted
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel_Legacy::OnSummonInfoPanelExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel_Legacy", "OnSummonInfoPanelExecuted");

	Params::UFortCollectionBookPrimaryPanel_Legacy_OnSummonInfoPanelExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnInputMethodChanged
// (Final, Native, Protected)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel_Legacy::OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel_Legacy", "OnInputMethodChanged");

	Params::UFortCollectionBookPrimaryPanel_Legacy_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookSectionClicked
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection*  ClickedSection                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel_Legacy::OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel_Legacy", "OnCollectionBookSectionClicked");

	Params::UFortCollectionBookPrimaryPanel_Legacy_OnCollectionBookSectionClicked_Params Parms{};

	Parms.ClickedSection = ClickedSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageSelected
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     SelectedPage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel_Legacy::OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel_Legacy", "OnCollectionBookPageSelected");

	Params::UFortCollectionBookPrimaryPanel_Legacy_OnCollectionBookPageSelected_Params Parms{};

	Parms.SelectedPage = SelectedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageClicked
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     ClickedPage                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel_Legacy::OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel_Legacy", "OnCollectionBookPageClicked");

	Params::UFortCollectionBookPrimaryPanel_Legacy_OnCollectionBookPageClicked_Params Parms{};

	Parms.ClickedPage = ClickedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnBackActionExecuted
// (Final, Native, Public, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookPrimaryPanel_Legacy::OnBackActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel_Legacy", "OnBackActionExecuted");

	Params::UFortCollectionBookPrimaryPanel_Legacy_OnBackActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Class SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
// (None)

class UClass* UFortCollectionBookProgressionRewardDetailInspectWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardDetailInspectWidget");

	return Clss;
}


// FortCollectionBookProgressionRewardDetailInspectWidget SaveTheWorldUI.Default__FortCollectionBookProgressionRewardDetailInspectWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookProgressionRewardDetailInspectWidget* UFortCollectionBookProgressionRewardDetailInspectWidget::GetDefaultObj()
{
	static class UFortCollectionBookProgressionRewardDetailInspectWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookProgressionRewardDetailInspectWidget*>(UFortCollectionBookProgressionRewardDetailInspectWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressionRewardDetailInspectWidget::SetAssociatedLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardDetailInspectWidget", "SetAssociatedLevel");

	Params::UFortCollectionBookProgressionRewardDetailInspectWidget_SetAssociatedLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.OnXPRequiredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewXPRequired                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressionRewardDetailInspectWidget::OnXPRequiredChanged(int32 NewXPRequired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardDetailInspectWidget", "OnXPRequiredChanged");

	Params::UFortCollectionBookProgressionRewardDetailInspectWidget_OnXPRequiredChanged_Params Parms{};

	Parms.NewXPRequired = NewXPRequired;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.GetXPRequired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortCollectionBookProgressionRewardDetailInspectWidget::GetXPRequired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardDetailInspectWidget", "GetXPRequired");

	Params::UFortCollectionBookProgressionRewardDetailInspectWidget_GetXPRequired_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
// (None)

class UClass* UFortCollectionBookProgressionRewardsModalWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardsModalWidget");

	return Clss;
}


// FortCollectionBookProgressionRewardsModalWidget SaveTheWorldUI.Default__FortCollectionBookProgressionRewardsModalWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookProgressionRewardsModalWidget* UFortCollectionBookProgressionRewardsModalWidget::GetDefaultObj()
{
	static class UFortCollectionBookProgressionRewardsModalWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookProgressionRewardsModalWidget*>(UFortCollectionBookProgressionRewardsModalWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged
// (Final, Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         SelectedButton                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressionRewardsModalWidget::OnSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardsModalWidget", "OnSelectedButtonChanged");

	Params::UFortCollectionBookProgressionRewardsModalWidget_OnSelectedButtonChanged_Params Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NextLvlPct                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxAchievedLevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressionRewardsModalWidget::OnLevelProgressionSet(int32 CurrentLevel, float NextLvlPct, int32 MaxAchievedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardsModalWidget", "OnLevelProgressionSet");

	Params::UFortCollectionBookProgressionRewardsModalWidget_OnLevelProgressionSet_Params Parms{};

	Parms.CurrentLevel = CurrentLevel;
	Parms.NextLvlPct = NextLvlPct;
	Parms.MaxAchievedLevel = MaxAchievedLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressionRewardsModalWidget::InspectItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardsModalWidget", "InspectItemBP");

	Params::UFortCollectionBookProgressionRewardsModalWidget_InspectItemBP_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
// (None)

class UClass* UFortCollectionBookProgressionRewardsPreviewWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardsPreviewWidget");

	return Clss;
}


// FortCollectionBookProgressionRewardsPreviewWidget SaveTheWorldUI.Default__FortCollectionBookProgressionRewardsPreviewWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookProgressionRewardsPreviewWidget* UFortCollectionBookProgressionRewardsPreviewWidget::GetDefaultObj()
{
	static class UFortCollectionBookProgressionRewardsPreviewWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookProgressionRewardsPreviewWidget*>(UFortCollectionBookProgressionRewardsPreviewWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
// (None)

class UClass* UFortCollectionBookProgressionRewardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookProgressionRewardWidget");

	return Clss;
}


// FortCollectionBookProgressionRewardWidget SaveTheWorldUI.Default__FortCollectionBookProgressionRewardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookProgressionRewardWidget* UFortCollectionBookProgressionRewardWidget::GetDefaultObj()
{
	static class UFortCollectionBookProgressionRewardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookProgressionRewardWidget*>(UFortCollectionBookProgressionRewardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookProgressionRewardWidget.SetAssociatedLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressionRewardWidget::SetAssociatedLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardWidget", "SetAssociatedLevel");

	Params::UFortCollectionBookProgressionRewardWidget_SetAssociatedLevel_Params Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookProgressWidget
// (None)

class UClass* UFortCollectionBookProgressWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookProgressWidget");

	return Clss;
}


// FortCollectionBookProgressWidget SaveTheWorldUI.Default__FortCollectionBookProgressWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookProgressWidget* UFortCollectionBookProgressWidget::GetDefaultObj()
{
	static class UFortCollectionBookProgressWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookProgressWidget*>(UFortCollectionBookProgressWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete
// (Final, Native, Protected)
// Parameters:
// class UFortAccountItem*            ItemSlotted                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressWidget::OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnSlottedItemOperationComplete");

	Params::UFortCollectionBookProgressWidget_OnSlottedItemOperationComplete_Params Parms{};

	Parms.ItemSlotted = ItemSlotted;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnInventoryUpdated
// (Final, Native, Protected)
// Parameters:

void UFortCollectionBookProgressWidget::OnInventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnInventoryUpdated");

	Params::UFortCollectionBookProgressWidget_OnInventoryUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              PreviewCompletionPct                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressWidget::OnCollectionBookPreviewXPChange(float PreviewCompletionPct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnCollectionBookPreviewXPChange");

	Params::UFortCollectionBookProgressWidget_OnCollectionBookPreviewXPChange_Params Parms{};

	Parms.PreviewCompletionPct = PreviewCompletionPct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     SelectedPage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressWidget::OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnCollectionBookPageSelected");

	Params::UFortCollectionBookProgressWidget_OnCollectionBookPageSelected_Params Parms{};

	Parms.SelectedPage = SelectedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewCompletionPct                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressWidget::OnCollectionBookLevelProgressionChanged(float NewCompletionPct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnCollectionBookLevelProgressionChanged");

	Params::UFortCollectionBookProgressWidget_OnCollectionBookLevelProgressionChanged_Params Parms{};

	Parms.NewCompletionPct = NewCompletionPct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressWidget::OnCollectionBookLevelChanged(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnCollectionBookLevelChanged");

	Params::UFortCollectionBookProgressWidget_OnCollectionBookLevelChanged_Params Parms{};

	Parms.NewLevel = NewLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated
// (Final, Native, Private)
// Parameters:
// class UCommonActivatablePanelLegacy*DeactivatedPanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookProgressWidget::HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "HandleDetailsModalWidgetDeactivated");

	Params::UFortCollectionBookProgressWidget_HandleDetailsModalWidgetDeactivated_Params Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
// (None)

class UClass* UFortCollectionBookRecycleSlotResultsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookRecycleSlotResultsWidget");

	return Clss;
}


// FortCollectionBookRecycleSlotResultsWidget SaveTheWorldUI.Default__FortCollectionBookRecycleSlotResultsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookRecycleSlotResultsWidget* UFortCollectionBookRecycleSlotResultsWidget::GetDefaultObj()
{
	static class UFortCollectionBookRecycleSlotResultsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookRecycleSlotResultsWidget*>(UFortCollectionBookRecycleSlotResultsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAccountItem*            InItemToRecycle                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookRecycleSlotResultsWidget::SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookRecycleSlotResultsWidget", "SetCurrentItemToRecycle");

	Params::UFortCollectionBookRecycleSlotResultsWidget_SetCurrentItemToRecycle_Params Parms{};

	Parms.InItemToRecycle = InItemToRecycle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookRewardCardWidget
// (None)

class UClass* UFortCollectionBookRewardCardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookRewardCardWidget");

	return Clss;
}


// FortCollectionBookRewardCardWidget SaveTheWorldUI.Default__FortCollectionBookRewardCardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookRewardCardWidget* UFortCollectionBookRewardCardWidget::GetDefaultObj()
{
	static class UFortCollectionBookRewardCardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookRewardCardWidget*>(UFortCollectionBookRewardCardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.SetRewards
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortRewardInfo             Rewards                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortCollectionBookRewardCardWidget::SetRewards(struct FFortRewardInfo& Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookRewardCardWidget", "SetRewards");

	Params::UFortCollectionBookRewardCardWidget_SetRewards_Params Parms{};

	Parms.Rewards = Rewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction SaveTheWorldUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortItem*                   DisplayedItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookRewardCardWidget::OnDisplayedItemChangedEvent__DelegateSignature(class UFortItem* DisplayedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookRewardCardWidget", "OnDisplayedItemChangedEvent__DelegateSignature");

	Params::UFortCollectionBookRewardCardWidget_OnDisplayedItemChangedEvent__DelegateSignature_Params Parms{};

	Parms.DisplayedItem = DisplayedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.HasRewards
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCollectionBookRewardCardWidget::HasRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookRewardCardWidget", "HasRewards");

	Params::UFortCollectionBookRewardCardWidget_HasRewards_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookRewardCardWidget.ClearRewards
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortCollectionBookRewardCardWidget::ClearRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookRewardCardWidget", "ClearRewards");

	Params::UFortCollectionBookRewardCardWidget_ClearRewards_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookRewardModalWidget
// (None)

class UClass* UFortCollectionBookRewardModalWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookRewardModalWidget");

	return Clss;
}


// FortCollectionBookRewardModalWidget SaveTheWorldUI.Default__FortCollectionBookRewardModalWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookRewardModalWidget* UFortCollectionBookRewardModalWidget::GetDefaultObj()
{
	static class UFortCollectionBookRewardModalWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookRewardModalWidget*>(UFortCollectionBookRewardModalWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
// (None)

class UClass* UFortCollectionBookSectionCompletionRewardWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookSectionCompletionRewardWidget");

	return Clss;
}


// FortCollectionBookSectionCompletionRewardWidget SaveTheWorldUI.Default__FortCollectionBookSectionCompletionRewardWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookSectionCompletionRewardWidget* UFortCollectionBookSectionCompletionRewardWidget::GetDefaultObj()
{
	static class UFortCollectionBookSectionCompletionRewardWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookSectionCompletionRewardWidget*>(UFortCollectionBookSectionCompletionRewardWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated
// (Final, Native, Private)
// Parameters:
// class UCommonActivatablePanelLegacy*DeactivatedPanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionCompletionRewardWidget::HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionCompletionRewardWidget", "HandleRewardDetailsModalWidgetDeactivated");

	Params::UFortCollectionBookSectionCompletionRewardWidget_HandleRewardDetailsModalWidgetDeactivated_Params Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookSectionPanel
// (None)

class UClass* UFortCollectionBookSectionPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookSectionPanel");

	return Clss;
}


// FortCollectionBookSectionPanel SaveTheWorldUI.Default__FortCollectionBookSectionPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookSectionPanel* UFortCollectionBookSectionPanel::GetDefaultObj()
{
	static class UFortCollectionBookSectionPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookSectionPanel*>(UFortCollectionBookSectionPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemOperationComplete
// (Final, Native, Private)
// Parameters:
// class UFortAccountItem*            UnslottedItem                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAccountItem*            OldSlottedItem                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnUnslotItemOperationComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldSlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnUnslotItemOperationComplete");

	Params::UFortCollectionBookSectionPanel_OnUnslotItemOperationComplete_Params Parms{};

	Parms.UnslottedItem = UnslottedItem;
	Parms.OldSlottedItem = OldSlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   UnslottedItem                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnUnslotItemComplete(class UFortItem* UnslottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnUnslotItemComplete");

	Params::UFortCollectionBookSectionPanel_OnUnslotItemComplete_Params Parms{};

	Parms.UnslottedItem = UnslottedItem;
	Parms.SlotId = SlotId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemActionExecuted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnUnslotItemActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnUnslotItemActionExecuted");

	Params::UFortCollectionBookSectionPanel_OnUnslotItemActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete
// (Final, Native, Private)
// Parameters:
// class UFortAccountItem*            SlottedItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlottedItemOperationComplete");

	Params::UFortCollectionBookSectionPanel_OnSlottedItemOperationComplete_Params Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnSlotItemActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlotItemActionExecuted");

	Params::UFortCollectionBookSectionPanel_OnSlotItemActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonSelected
// (Final, Native, Protected)
// Parameters:
// class UFortCollectionBookSlotButton*SlotButton                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnSlotButtonSelected(class UFortCollectionBookSlotButton* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlotButtonSelected");

	Params::UFortCollectionBookSectionPanel_OnSlotButtonSelected_Params Parms{};

	Parms.SlotButton = SlotButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonHovered
// (Final, Native, Protected)
// Parameters:
// int32                              ButtonIx                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnSlotButtonHovered(int32 ButtonIx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlotButtonHovered");

	Params::UFortCollectionBookSectionPanel_OnSlotButtonHovered_Params Parms{};

	Parms.ButtonIx = ButtonIx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonContextAction
// (Final, Native, Protected)
// Parameters:
// enum class EFortCollectionBookPopupButtonTypeContextAction                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnSlotButtonContextAction(enum class EFortCollectionBookPopupButtonType ContextAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlotButtonContextAction");

	Params::UFortCollectionBookSectionPanel_OnSlotButtonContextAction_Params Parms{};

	Parms.ContextAction = ContextAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnSectionChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection*  Section                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnSectionChanged(class UFortCollectionBookSection* Section)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSectionChanged");

	Params::UFortCollectionBookSectionPanel_OnSectionChanged_Params Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemOperationComplete
// (Final, Native, Private)
// Parameters:
// class UFortAccountItem*            NewItem                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TemplateId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnResearchItemOperationComplete(class UFortAccountItem* NewItem, const class FString& TemplateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnResearchItemOperationComplete");

	Params::UFortCollectionBookSectionPanel_OnResearchItemOperationComplete_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.TemplateId = TemplateId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemAction__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortCollectionBookSlotData SlotData                                                         (ConstParm, Parm, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnResearchItemAction__DelegateSignature(class UFortItem* SelectedItem, const struct FFortCollectionBookSlotData& SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnResearchItemAction__DelegateSignature");

	Params::UFortCollectionBookSectionPanel_OnResearchItemAction__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SlotData = SlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnPurchaseItemActionExecuted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnPurchaseItemActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnPurchaseItemActionExecuted");

	Params::UFortCollectionBookSectionPanel_OnPurchaseItemActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnOpenPickerActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnOpenPickerActionExecuted");

	Params::UFortCollectionBookSectionPanel_OnOpenPickerActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnLogAllowedItemsActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnLogAllowedItemsActionExecuted");

	Params::UFortCollectionBookSectionPanel_OnLogAllowedItemsActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               EnableItemActions                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsPlaceholderItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnItemInspectAction__DelegateSignature(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnItemInspectAction__DelegateSignature");

	Params::UFortCollectionBookSectionPanel_OnItemInspectAction__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.EnableItemActions = EnableItemActions;
	Parms.IsPlaceholderItem = IsPlaceholderItem;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnItemAction__DelegateSignature(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnItemAction__DelegateSignature");

	Params::UFortCollectionBookSectionPanel_OnItemAction__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnInspectActionExecuted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnInspectActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnInspectActionExecuted");

	Params::UFortCollectionBookSectionPanel_OnInspectActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortCollectionBookSectionPanel.OnBackActionExecuted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionPanel::OnBackActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnBackActionExecuted");

	Params::UFortCollectionBookSectionPanel_OnBackActionExecuted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Class SaveTheWorldUI.FortCollectionBookSectionTileWidget
// (None)

class UClass* UFortCollectionBookSectionTileWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookSectionTileWidget");

	return Clss;
}


// FortCollectionBookSectionTileWidget SaveTheWorldUI.Default__FortCollectionBookSectionTileWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookSectionTileWidget* UFortCollectionBookSectionTileWidget::GetDefaultObj()
{
	static class UFortCollectionBookSectionTileWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookSectionTileWidget*>(UFortCollectionBookSectionTileWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumFilledSlots                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSlots                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortCollectionBookStateSectionState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionTileWidget::OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, enum class EFortCollectionBookState SectionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionTileWidget", "OnSectionSlotUpdate");

	Params::UFortCollectionBookSectionTileWidget_OnSectionSlotUpdate_Params Parms{};

	Parms.NumFilledSlots = NumFilledSlots;
	Parms.NumSlots = NumSlots;
	Parms.SectionState = SectionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemUnslotted
// (Native, Protected)
// Parameters:
// class UFortAccountItem*            ItemUnslotted                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAccountItem*            OldSlottedItem                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionTileWidget::OnItemUnslotted(class UFortAccountItem* ItemUnslotted, class UFortAccountItem* OldSlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionTileWidget", "OnItemUnslotted");

	Params::UFortCollectionBookSectionTileWidget_OnItemUnslotted_Params Parms{};

	Parms.ItemUnslotted = ItemUnslotted;
	Parms.OldSlottedItem = OldSlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemSlotted
// (Native, Protected)
// Parameters:
// class UFortAccountItem*            ItemSlotted                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSectionTileWidget::OnItemSlotted(class UFortAccountItem* ItemSlotted, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSectionTileWidget", "OnItemSlotted");

	Params::UFortCollectionBookSectionTileWidget_OnItemSlotted_Params Parms{};

	Parms.ItemSlotted = ItemSlotted;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookSlotButton
// (None)

class UClass* UFortCollectionBookSlotButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookSlotButton");

	return Clss;
}


// FortCollectionBookSlotButton SaveTheWorldUI.Default__FortCollectionBookSlotButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookSlotButton* UFortCollectionBookSlotButton::GetDefaultObj()
{
	static class UFortCollectionBookSlotButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookSlotButton*>(UFortCollectionBookSlotButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookSlotButton.PopupMenuClosedWithAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortCollectionBookPopupButtonTypeSelection                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSlotButton::PopupMenuClosedWithAction(enum class EFortCollectionBookPopupButtonType Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotButton", "PopupMenuClosedWithAction");

	Params::UFortCollectionBookSlotButton_PopupMenuClosedWithAction_Params Parms{};

	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSlotButton.OnSlottedItemUpdated
// (Final, Native, Private)
// Parameters:

void UFortCollectionBookSlotButton::OnSlottedItemUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotButton", "OnSlottedItemUpdated");

	Params::UFortCollectionBookSlotButton_OnSlottedItemUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSlotButton.GetPopupMenu
// (Final, Native, Private)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UFortCollectionBookSlotButton::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotButton", "GetPopupMenu");

	Params::UFortCollectionBookSlotButton_GetPopupMenu_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
// (None)

class UClass* UFortCollectionBookSlotConfirmationModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookSlotConfirmationModal");

	return Clss;
}


// FortCollectionBookSlotConfirmationModal SaveTheWorldUI.Default__FortCollectionBookSlotConfirmationModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookSlotConfirmationModal* UFortCollectionBookSlotConfirmationModal::GetDefaultObj()
{
	static class UFortCollectionBookSlotConfirmationModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookSlotConfirmationModal*>(UFortCollectionBookSlotConfirmationModal::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequestedComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCollectionBookSlotConfirmationModal::OnSlotItemRequestedComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotConfirmationModal", "OnSlotItemRequestedComplete");

	Params::UFortCollectionBookSlotConfirmationModal_OnSlotItemRequestedComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequested
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCollectionBookSlotConfirmationModal::OnSlotItemRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotConfirmationModal", "OnSlotItemRequested");

	Params::UFortCollectionBookSlotConfirmationModal_OnSlotItemRequested_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.HandleSlotItemComplete
// (Final, Native, Private)
// Parameters:
// class UFortAccountItem*            SlottedItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSlotConfirmationModal::HandleSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotConfirmationModal", "HandleSlotItemComplete");

	Params::UFortCollectionBookSlotConfirmationModal_HandleSlotItemComplete_Params Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
// (None)

class UClass* UFortCollectionBookSlotDetailsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookSlotDetailsWidget");

	return Clss;
}


// FortCollectionBookSlotDetailsWidget SaveTheWorldUI.Default__FortCollectionBookSlotDetailsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookSlotDetailsWidget* UFortCollectionBookSlotDetailsWidget::GetDefaultObj()
{
	static class UFortCollectionBookSlotDetailsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookSlotDetailsWidget*>(UFortCollectionBookSlotDetailsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortCollectionBookSlotView
// (None)

class UClass* UFortCollectionBookSlotView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookSlotView");

	return Clss;
}


// FortCollectionBookSlotView SaveTheWorldUI.Default__FortCollectionBookSlotView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookSlotView* UFortCollectionBookSlotView::GetDefaultObj()
{
	static class UFortCollectionBookSlotView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookSlotView*>(UFortCollectionBookSlotView::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonHovered
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         HoveredButton                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIdx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSlotView::OnSlotButtonHovered(class UCommonButtonLegacy* HoveredButton, int32 ButtonIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotView", "OnSlotButtonHovered");

	Params::UFortCollectionBookSlotView_OnSlotButtonHovered_Params Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.ButtonIdx = ButtonIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         ClickedButton                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIdx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSlotView::OnSlotButtonClicked(class UCommonButtonLegacy* ClickedButton, int32 ButtonIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotView", "OnSlotButtonClicked");

	Params::UFortCollectionBookSlotView_OnSlotButtonClicked_Params Parms{};

	Parms.ClickedButton = ClickedButton;
	Parms.ButtonIdx = ButtonIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         SelectedButton                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIdx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSlotView::OnSelectedSlotButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotView", "OnSelectedSlotButtonChanged");

	Params::UFortCollectionBookSlotView_OnSelectedSlotButtonChanged_Params Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.ButtonIdx = ButtonIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookSlotWidget
// (None)

class UClass* UFortCollectionBookSlotWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookSlotWidget");

	return Clss;
}


// FortCollectionBookSlotWidget SaveTheWorldUI.Default__FortCollectionBookSlotWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookSlotWidget* UFortCollectionBookSlotWidget::GetDefaultObj()
{
	static class UFortCollectionBookSlotWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookSlotWidget*>(UFortCollectionBookSlotWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemDestroyed
// (Final, Native, Private)
// Parameters:

void UFortCollectionBookSlotWidget::OnItemDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "OnItemDestroyed");

	Params::UFortCollectionBookSlotWidget_OnItemDestroyed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemCardUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCollectionBookSlotWidget::OnItemCardUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "OnItemCardUpdated");

	Params::UFortCollectionBookSlotWidget_OnItemCardUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.IsItemSlotted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCollectionBookSlotWidget::IsItemSlotted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "IsItemSlotted");

	Params::UFortCollectionBookSlotWidget_IsItemSlotted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.HasItemsToSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCollectionBookSlotWidget::HasItemsToSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "HasItemsToSlot");

	Params::UFortCollectionBookSlotWidget_HasItemsToSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleUnslotItemComplete
// (Final, Native, Protected)
// Parameters:
// class UFortAccountItem*            UnslottedItem                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAccountItem*            OldItem                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSlotWidget::HandleUnslotItemComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "HandleUnslotItemComplete");

	Params::UFortCollectionBookSlotWidget_HandleUnslotItemComplete_Params Parms{};

	Parms.UnslottedItem = UnslottedItem;
	Parms.OldItem = OldItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleSlottedItemOperationComplete
// (Final, Native, Protected)
// Parameters:
// class UFortAccountItem*            NewItem                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TemplateId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSlotWidget::HandleSlottedItemOperationComplete(class UFortAccountItem* NewItem, class FName TemplateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "HandleSlottedItemOperationComplete");

	Params::UFortCollectionBookSlotWidget_HandleSlottedItemOperationComplete_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.TemplateId = TemplateId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.HandleResearchItemComplete
// (Final, Native, Protected)
// Parameters:
// class UFortAccountItem*            ResearchedItem                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SlotId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookSlotWidget::HandleResearchItemComplete(class UFortAccountItem* ResearchedItem, const class FString& SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "HandleResearchItemComplete");

	Params::UFortCollectionBookSlotWidget_HandleResearchItemComplete_Params Parms{};

	Parms.ResearchedItem = ResearchedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlottedItemRepresentation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItem* UFortCollectionBookSlotWidget::GetSlottedItemRepresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "GetSlottedItemRepresentation");

	Params::UFortCollectionBookSlotWidget_GetSlottedItemRepresentation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlotRowName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFortCollectionBookSlotWidget::GetSlotRowName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "GetSlotRowName");

	Params::UFortCollectionBookSlotWidget_GetSlotRowName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCollectionBookSlotWidget.GetNumItemsToSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortCollectionBookSlotWidget::GetNumItemsToSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "GetNumItemsToSlot");

	Params::UFortCollectionBookSlotWidget_GetNumItemsToSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction SaveTheWorldUI.FortCollectionBookSlotWidget.FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortCollectionBookSlotWidget::FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature");

	Params::UFortCollectionBookSlotWidget_FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortCollectionBookWidget
// (None)

class UClass* UFortCollectionBookWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookWidget");

	return Clss;
}


// FortCollectionBookWidget SaveTheWorldUI.Default__FortCollectionBookWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookWidget* UFortCollectionBookWidget::GetDefaultObj()
{
	static class UFortCollectionBookWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookWidget*>(UFortCollectionBookWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookWidget.RequestToClose
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortCollectionBookWidget::RequestToClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget", "RequestToClose");

	Params::UFortCollectionBookWidget_RequestToClose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget.OnPreviewXPChangeRequest
// (Final, Native, Protected)
// Parameters:
// int32                              XPChange                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookWidget::OnPreviewXPChangeRequest(int32 XPChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnPreviewXPChangeRequest");

	Params::UFortCollectionBookWidget_OnPreviewXPChangeRequest_Params Parms{};

	Parms.XPChange = XPChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionCloseRequest
// (Final, Native, Protected)
// Parameters:

void UFortCollectionBookWidget::OnCollectionBookSectionCloseRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnCollectionBookSectionCloseRequest");

	Params::UFortCollectionBookWidget_OnCollectionBookSectionCloseRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionClicked
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection*  ClickedSection                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookWidget::OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnCollectionBookSectionClicked");

	Params::UFortCollectionBookWidget_OnCollectionBookSectionClicked_Params Parms{};

	Parms.ClickedSection = ClickedSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageSelected
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     SelectedPage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookWidget::OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnCollectionBookPageSelected");

	Params::UFortCollectionBookWidget_OnCollectionBookPageSelected_Params Parms{};

	Parms.SelectedPage = SelectedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageClicked
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     ClickedPage                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookWidget::OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnCollectionBookPageClicked");

	Params::UFortCollectionBookWidget_OnCollectionBookPageClicked_Params Parms{};

	Parms.ClickedPage = ClickedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCollectionBookWidget_Legacy
// (None)

class UClass* UFortCollectionBookWidget_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollectionBookWidget_Legacy");

	return Clss;
}


// FortCollectionBookWidget_Legacy SaveTheWorldUI.Default__FortCollectionBookWidget_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollectionBookWidget_Legacy* UFortCollectionBookWidget_Legacy::GetDefaultObj()
{
	static class UFortCollectionBookWidget_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollectionBookWidget_Legacy*>(UFortCollectionBookWidget_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.RequestToClose
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortCollectionBookWidget_Legacy::RequestToClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget_Legacy", "RequestToClose");

	Params::UFortCollectionBookWidget_Legacy_RequestToClose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnPreviewXPChangeRequest
// (Final, Native, Protected)
// Parameters:
// int32                              XPChange                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookWidget_Legacy::OnPreviewXPChangeRequest(int32 XPChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget_Legacy", "OnPreviewXPChangeRequest");

	Params::UFortCollectionBookWidget_Legacy_OnPreviewXPChangeRequest_Params Parms{};

	Parms.XPChange = XPChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionCloseRequest
// (Final, Native, Protected)
// Parameters:

void UFortCollectionBookWidget_Legacy::OnCollectionBookSectionCloseRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget_Legacy", "OnCollectionBookSectionCloseRequest");

	Params::UFortCollectionBookWidget_Legacy_OnCollectionBookSectionCloseRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionClicked
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection*  ClickedSection                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookWidget_Legacy::OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget_Legacy", "OnCollectionBookSectionClicked");

	Params::UFortCollectionBookWidget_Legacy_OnCollectionBookSectionClicked_Params Parms{};

	Parms.ClickedSection = ClickedSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageSelected
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     SelectedPage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookWidget_Legacy::OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget_Legacy", "OnCollectionBookPageSelected");

	Params::UFortCollectionBookWidget_Legacy_OnCollectionBookPageSelected_Params Parms{};

	Parms.SelectedPage = SelectedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageClicked
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*     ClickedPage                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollectionBookWidget_Legacy::OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollectionBookWidget_Legacy", "OnCollectionBookPageClicked");

	Params::UFortCollectionBookWidget_Legacy_OnCollectionBookPageClicked_Params Parms{};

	Parms.ClickedPage = ClickedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortAbilitySystemContext
// (None)

class UClass* UFortAbilitySystemContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAbilitySystemContext");

	return Clss;
}


// FortAbilitySystemContext SaveTheWorldUI.Default__FortAbilitySystemContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAbilitySystemContext* UFortAbilitySystemContext::GetDefaultObj()
{
	static class UFortAbilitySystemContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAbilitySystemContext*>(UFortAbilitySystemContext::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortAbilitySystemContext.RemoveDelegatesFromWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAbilitySystemContext::RemoveDelegatesFromWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAbilitySystemContext", "RemoveDelegatesFromWidget");

	Params::UFortAbilitySystemContext_RemoveDelegatesFromWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAbilitySystemContext.RegisterForAttributeChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ASC                                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAbilitySystemContext::RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, const struct FGameplayAttribute& Attribute, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAbilitySystemContext", "RegisterForAttributeChanged");

	Params::UFortAbilitySystemContext_RegisterForAttributeChanged_Params Parms{};

	Parms.Widget = Widget;
	Parms.ASC = ASC;
	Parms.Attribute = Attribute;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAbilitySystemContext.HasMatchingGameplayTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                TagToCheck                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAbilitySystemContext::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAbilitySystemContext", "HasMatchingGameplayTag");

	Params::UFortAbilitySystemContext_HasMatchingGameplayTag_Params Parms{};

	Parms.TagToCheck = TagToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase
// (None)

class UClass* UFortDirectAcquisitionWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDirectAcquisitionWidgetBase");

	return Clss;
}


// FortDirectAcquisitionWidgetBase SaveTheWorldUI.Default__FortDirectAcquisitionWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDirectAcquisitionWidgetBase* UFortDirectAcquisitionWidgetBase::GetDefaultObj()
{
	static class UFortDirectAcquisitionWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDirectAcquisitionWidgetBase*>(UFortDirectAcquisitionWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.OnDisplayToast
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bDisplayToast                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDirectAcquisitionWidgetBase::OnDisplayToast(bool bDisplayToast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "OnDisplayToast");

	Params::UFortDirectAcquisitionWidgetBase_OnDisplayToast_Params Parms{};

	Parms.bDisplayToast = bDisplayToast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.IsTabsLayout
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShouldDisplayTabs                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDirectAcquisitionWidgetBase::IsTabsLayout(bool bShouldDisplayTabs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "IsTabsLayout");

	Params::UFortDirectAcquisitionWidgetBase_IsTabsLayout_Params Parms{};

	Parms.bShouldDisplayTabs = bShouldDisplayTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.HandleAffiliateButtonClicked
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortDirectAcquisitionWidgetBase::HandleAffiliateButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "HandleAffiliateButtonClicked");

	Params::UFortDirectAcquisitionWidgetBase_HandleAffiliateButtonClicked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetWeeklyStoreEndDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UFortDirectAcquisitionWidgetBase::GetWeeklyStoreEndDate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "GetWeeklyStoreEndDate");

	Params::UFortDirectAcquisitionWidgetBase_GetWeeklyStoreEndDate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetStoreCurrencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortAccountItemDefinition*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortAccountItemDefinition*> UFortDirectAcquisitionWidgetBase::GetStoreCurrencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "GetStoreCurrencies");

	Params::UFortDirectAcquisitionWidgetBase_GetStoreCurrencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetSeasonStoreEndDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UFortDirectAcquisitionWidgetBase::GetSeasonStoreEndDate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "GetSeasonStoreEndDate");

	Params::UFortDirectAcquisitionWidgetBase_GetSeasonStoreEndDate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetDailyStoreEndDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UFortDirectAcquisitionWidgetBase::GetDailyStoreEndDate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "GetDailyStoreEndDate");

	Params::UFortDirectAcquisitionWidgetBase_GetDailyStoreEndDate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
// (None)

class UClass* UFortDirectAcquisitionWidgetBase_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDirectAcquisitionWidgetBase_Legacy");

	return Clss;
}


// FortDirectAcquisitionWidgetBase_Legacy SaveTheWorldUI.Default__FortDirectAcquisitionWidgetBase_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDirectAcquisitionWidgetBase_Legacy* UFortDirectAcquisitionWidgetBase_Legacy::GetDefaultObj()
{
	static class UFortDirectAcquisitionWidgetBase_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDirectAcquisitionWidgetBase_Legacy*>(UFortDirectAcquisitionWidgetBase_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.OnDisplayToast
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bDisplayToast                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDirectAcquisitionWidgetBase_Legacy::OnDisplayToast(bool bDisplayToast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "OnDisplayToast");

	Params::UFortDirectAcquisitionWidgetBase_Legacy_OnDisplayToast_Params Parms{};

	Parms.bDisplayToast = bDisplayToast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.IsTabsLayout
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShouldDisplayTabs                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDirectAcquisitionWidgetBase_Legacy::IsTabsLayout(bool bShouldDisplayTabs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "IsTabsLayout");

	Params::UFortDirectAcquisitionWidgetBase_Legacy_IsTabsLayout_Params Parms{};

	Parms.bShouldDisplayTabs = bShouldDisplayTabs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.HandleAffiliateButtonClicked
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortDirectAcquisitionWidgetBase_Legacy::HandleAffiliateButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "HandleAffiliateButtonClicked");

	Params::UFortDirectAcquisitionWidgetBase_Legacy_HandleAffiliateButtonClicked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetWeeklyStoreEndDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UFortDirectAcquisitionWidgetBase_Legacy::GetWeeklyStoreEndDate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "GetWeeklyStoreEndDate");

	Params::UFortDirectAcquisitionWidgetBase_Legacy_GetWeeklyStoreEndDate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetStoreCurrencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortAccountItemDefinition*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortAccountItemDefinition*> UFortDirectAcquisitionWidgetBase_Legacy::GetStoreCurrencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "GetStoreCurrencies");

	Params::UFortDirectAcquisitionWidgetBase_Legacy_GetStoreCurrencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetSeasonStoreEndDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UFortDirectAcquisitionWidgetBase_Legacy::GetSeasonStoreEndDate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "GetSeasonStoreEndDate");

	Params::UFortDirectAcquisitionWidgetBase_Legacy_GetSeasonStoreEndDate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetDailyStoreEndDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UFortDirectAcquisitionWidgetBase_Legacy::GetDailyStoreEndDate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "GetDailyStoreEndDate");

	Params::UFortDirectAcquisitionWidgetBase_Legacy_GetDailyStoreEndDate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortExpeditionBuildSquadWidget
// (None)

class UClass* UFortExpeditionBuildSquadWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionBuildSquadWidget");

	return Clss;
}


// FortExpeditionBuildSquadWidget SaveTheWorldUI.Default__FortExpeditionBuildSquadWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionBuildSquadWidget* UFortExpeditionBuildSquadWidget::GetDefaultObj()
{
	static class UFortExpeditionBuildSquadWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionBuildSquadWidget*>(UFortExpeditionBuildSquadWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionBuildSquadWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "SetData");

	Params::UFortExpeditionBuildSquadWidget_SetData_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionBuildSquadWidget::SetCurrentSquadId(class FName SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "SetCurrentSquadId");

	Params::UFortExpeditionBuildSquadWidget_SetCurrentSquadId_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRequestClosePicker
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortExpeditionBuildSquadWidget::OnRequestClosePicker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "OnRequestClosePicker");

	Params::UFortExpeditionBuildSquadWidget_OnRequestClosePicker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRefreshBuildSquadWidget
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortExpeditionBuildSquadWidget::OnRefreshBuildSquadWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "OnRefreshBuildSquadWidget");

	Params::UFortExpeditionBuildSquadWidget_OnRefreshBuildSquadWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortExpeditionBuildSquadWidget::IsSquadSlotLocked(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "IsSquadSlotLocked");

	Params::UFortExpeditionBuildSquadWidget_IsSquadSlotLocked_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortExpeditionBuildSquadWidget::IsExpeditionValidToStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "IsExpeditionValidToStart");

	Params::UFortExpeditionBuildSquadWidget_IsExpeditionValidToStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleRequestStartExpedition
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionBuildSquadWidget::HandleRequestStartExpedition(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "HandleRequestStartExpedition");

	Params::UFortExpeditionBuildSquadWidget_HandleRequestStartExpedition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected
// (Final, Native, Private)
// Parameters:
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionBuildSquadWidget::HandleDifferentSquadSlotSelected(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "HandleDifferentSquadSlotSelected");

	Params::UFortExpeditionBuildSquadWidget_HandleDifferentSquadSlotSelected_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPreviewOnly                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionBuildSquadWidget::ClearTemporaryExpeditionSquadState(bool bPreviewOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "ClearTemporaryExpeditionSquadState");

	Params::UFortExpeditionBuildSquadWidget_ClearTemporaryExpeditionSquadState_Params Parms{};

	Parms.bPreviewOnly = bPreviewOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortExpeditionDetailsWidget
// (None)

class UClass* UFortExpeditionDetailsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionDetailsWidget");

	return Clss;
}


// FortExpeditionDetailsWidget SaveTheWorldUI.Default__FortExpeditionDetailsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionDetailsWidget* UFortExpeditionDetailsWidget::GetDefaultObj()
{
	static class UFortExpeditionDetailsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionDetailsWidget*>(UFortExpeditionDetailsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionDetailsWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionDetailsWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionDetailsWidget", "SetData");

	Params::UFortExpeditionDetailsWidget_SetData_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionDetailsWidget.SetCurrentSquadId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionDetailsWidget::SetCurrentSquadId(class FName SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionDetailsWidget", "SetCurrentSquadId");

	Params::UFortExpeditionDetailsWidget_SetCurrentSquadId_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionDetailsWidget.RequestAbandonExpedition
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortExpeditionDetailsWidget::RequestAbandonExpedition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionDetailsWidget", "RequestAbandonExpedition");

	Params::UFortExpeditionDetailsWidget_RequestAbandonExpedition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted
// (Final, Native, Private)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionDetailsWidget::HandleAbandonExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionDetailsWidget", "HandleAbandonExpeditionCompleted");

	Params::UFortExpeditionDetailsWidget_HandleAbandonExpeditionCompleted_Params Parms{};

	Parms.Expedition = Expedition;
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortExpeditionExpiresWidget
// (None)

class UClass* UFortExpeditionExpiresWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionExpiresWidget");

	return Clss;
}


// FortExpeditionExpiresWidget SaveTheWorldUI.Default__FortExpeditionExpiresWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionExpiresWidget* UFortExpeditionExpiresWidget::GetDefaultObj()
{
	static class UFortExpeditionExpiresWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionExpiresWidget*>(UFortExpeditionExpiresWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionExpiresWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionExpiresWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionExpiresWidget", "SetData");

	Params::UFortExpeditionExpiresWidget_SetData_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortExpeditionExpiresWidget::OnExpeditionExpirationUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionExpiresWidget", "OnExpeditionExpirationUpdated");

	Params::UFortExpeditionExpiresWidget_OnExpeditionExpirationUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortExpeditionListItemWidget
// (None)

class UClass* UFortExpeditionListItemWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionListItemWidget");

	return Clss;
}


// FortExpeditionListItemWidget SaveTheWorldUI.Default__FortExpeditionListItemWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionListItemWidget* UFortExpeditionListItemWidget::GetDefaultObj()
{
	static class UFortExpeditionListItemWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionListItemWidget*>(UFortExpeditionListItemWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionListItemWidget.OnItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortExpeditionListItemWidget::OnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionListItemWidget", "OnItemChanged");

	Params::UFortExpeditionListItemWidget_OnItemChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortExpeditionListViewWidget
// (None)

class UClass* UFortExpeditionListViewWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionListViewWidget");

	return Clss;
}


// FortExpeditionListViewWidget SaveTheWorldUI.Default__FortExpeditionListViewWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionListViewWidget* UFortExpeditionListViewWidget::GetDefaultObj()
{
	static class UFortExpeditionListViewWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionListViewWidget*>(UFortExpeditionListViewWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionListViewWidget.SetExpeditionListSortType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortExpeditionListSort InSortType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionListViewWidget::SetExpeditionListSortType(enum class EFortExpeditionListSort InSortType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionListViewWidget", "SetExpeditionListSortType");

	Params::UFortExpeditionListViewWidget_SetExpeditionListSortType_Params Parms{};

	Parms.InSortType = InSortType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionListViewWidget.GetExpeditionListSortName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortExpeditionListViewWidget::GetExpeditionListSortName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionListViewWidget", "GetExpeditionListSortName");

	Params::UFortExpeditionListViewWidget_GetExpeditionListSortName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortExpeditionMasterWidget
// (None)

class UClass* UFortExpeditionMasterWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionMasterWidget");

	return Clss;
}


// FortExpeditionMasterWidget SaveTheWorldUI.Default__FortExpeditionMasterWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionMasterWidget* UFortExpeditionMasterWidget::GetDefaultObj()
{
	static class UFortExpeditionMasterWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionMasterWidget*>(UFortExpeditionMasterWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortExpeditionOverviewWidget
// (None)

class UClass* UFortExpeditionOverviewWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionOverviewWidget");

	return Clss;
}


// FortExpeditionOverviewWidget SaveTheWorldUI.Default__FortExpeditionOverviewWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionOverviewWidget* UFortExpeditionOverviewWidget::GetDefaultObj()
{
	static class UFortExpeditionOverviewWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionOverviewWidget*>(UFortExpeditionOverviewWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionOverviewWidget.UpdateExpeditionTabs
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortExpeditionOverviewWidget::UpdateExpeditionTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "UpdateExpeditionTabs");

	Params::UFortExpeditionOverviewWidget_UpdateExpeditionTabs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected
// (Native, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionOverviewWidget::OnExpeditionTabSelected(class FName& TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "OnExpeditionTabSelected");

	Params::UFortExpeditionOverviewWidget_OnExpeditionTabSelected_Params Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionOverviewRefresh
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortExpeditionOverviewWidget::OnExpeditionOverviewRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "OnExpeditionOverviewRefresh");

	Params::UFortExpeditionOverviewWidget_OnExpeditionOverviewRefresh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected
// (Final, Native, Private)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionOverviewWidget::HandleExpeditionTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "HandleExpeditionTabSelected");

	Params::UFortExpeditionOverviewWidget_HandleExpeditionTabSelected_Params Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated
// (Final, Native, Private)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionOverviewWidget::HandleExpeditionTabButtonCreated(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "HandleExpeditionTabButtonCreated");

	Params::UFortExpeditionOverviewWidget_HandleExpeditionTabButtonCreated_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortExpeditionPickVehicleWidget
// (None)

class UClass* UFortExpeditionPickVehicleWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionPickVehicleWidget");

	return Clss;
}


// FortExpeditionPickVehicleWidget SaveTheWorldUI.Default__FortExpeditionPickVehicleWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionPickVehicleWidget* UFortExpeditionPickVehicleWidget::GetDefaultObj()
{
	static class UFortExpeditionPickVehicleWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionPickVehicleWidget*>(UFortExpeditionPickVehicleWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionPickVehicleWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionPickVehicleWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionPickVehicleWidget", "SetData");

	Params::UFortExpeditionPickVehicleWidget_SetData_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortExpeditionReturnsWidget
// (None)

class UClass* UFortExpeditionReturnsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionReturnsWidget");

	return Clss;
}


// FortExpeditionReturnsWidget SaveTheWorldUI.Default__FortExpeditionReturnsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionReturnsWidget* UFortExpeditionReturnsWidget::GetDefaultObj()
{
	static class UFortExpeditionReturnsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionReturnsWidget*>(UFortExpeditionReturnsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionReturnsWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionReturnsWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionReturnsWidget", "SetData");

	Params::UFortExpeditionReturnsWidget_SetData_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortExpeditionReturnsWidget::OnExpeditionInProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionReturnsWidget", "OnExpeditionInProgressUpdated");

	Params::UFortExpeditionReturnsWidget_OnExpeditionInProgressUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortExpeditionRewardsWidget
// (None)

class UClass* UFortExpeditionRewardsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionRewardsWidget");

	return Clss;
}


// FortExpeditionRewardsWidget SaveTheWorldUI.Default__FortExpeditionRewardsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionRewardsWidget* UFortExpeditionRewardsWidget::GetDefaultObj()
{
	static class UFortExpeditionRewardsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionRewardsWidget*>(UFortExpeditionRewardsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionRewardsWidget.RefreshRewardsUI
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExpeditionSucceeded                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortExpeditionRewardsWidget::RefreshRewardsUI(class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionRewardsWidget", "RefreshRewardsUI");

	Params::UFortExpeditionRewardsWidget_RefreshRewardsUI_Params Parms{};

	Parms.Expedition = Expedition;
	Parms.bExpeditionSucceeded = bExpeditionSucceeded;
	Parms.Rewards = Rewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionRewardsWidget.ProcessNextReward
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortExpeditionRewardsWidget::ProcessNextReward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionRewardsWidget", "ProcessNextReward");

	Params::UFortExpeditionRewardsWidget_ProcessNextReward_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bMcpSuccess                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExpeditionSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortExpeditionRewardsWidget::HandleCollectionExpeditionCompleted(bool bMcpSuccess, class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionRewardsWidget", "HandleCollectionExpeditionCompleted");

	Params::UFortExpeditionRewardsWidget_HandleCollectionExpeditionCompleted_Params Parms{};

	Parms.bMcpSuccess = bMcpSuccess;
	Parms.Expedition = Expedition;
	Parms.bExpeditionSuccess = bExpeditionSuccess;
	Parms.Rewards = Rewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortExpeditionSummaryWidget
// (None)

class UClass* UFortExpeditionSummaryWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionSummaryWidget");

	return Clss;
}


// FortExpeditionSummaryWidget SaveTheWorldUI.Default__FortExpeditionSummaryWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionSummaryWidget* UFortExpeditionSummaryWidget::GetDefaultObj()
{
	static class UFortExpeditionSummaryWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionSummaryWidget*>(UFortExpeditionSummaryWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionSummaryWidget.UnbindInventoryDelegates
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortExpeditionSummaryWidget::UnbindInventoryDelegates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionSummaryWidget", "UnbindInventoryDelegates");

	Params::UFortExpeditionSummaryWidget_UnbindInventoryDelegates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionSummaryWidget.OnRefreshSummaryWidget
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortExpeditionSummaryWidget::OnRefreshSummaryWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionSummaryWidget", "OnRefreshSummaryWidget");

	Params::UFortExpeditionSummaryWidget_OnRefreshSummaryWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortExpeditionSummaryWidget.BindInventoryDelegates
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortExpeditionSummaryWidget::BindInventoryDelegates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionSummaryWidget", "BindInventoryDelegates");

	Params::UFortExpeditionSummaryWidget_BindInventoryDelegates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortExpeditionUtilities
// (None)

class UClass* UFortExpeditionUtilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionUtilities");

	return Clss;
}


// FortExpeditionUtilities SaveTheWorldUI.Default__FortExpeditionUtilities
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionUtilities* UFortExpeditionUtilities::GetDefaultObj()
{
	static class UFortExpeditionUtilities* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionUtilities*>(UFortExpeditionUtilities::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TabNameID                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortExpeditionUtilities::TotalUnseenExpeditionsForTab(class UWidget* Widget, class FName& TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "TotalUnseenExpeditionsForTab");

	Params::UFortExpeditionUtilities_TotalUnseenExpeditionsForTab_Params Parms{};

	Parms.Widget = Widget;
	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.IsSquadOnExpedition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortExpeditionUtilities::IsSquadOnExpedition(class UWidget* Widget, class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "IsSquadOnExpedition");

	Params::UFortExpeditionUtilities_IsSquadOnExpedition_Params Parms{};

	Parms.Widget = Widget;
	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UFortExpeditionUtilities::GetVehicleTagRequiredForExpedition(class UFortExpeditionItem* Expedition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "GetVehicleTagRequiredForExpedition");

	Params::UFortExpeditionUtilities_GetVehicleTagRequiredForExpedition_Params Parms{};

	Parms.Expedition = Expedition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.GetVehicleTagFromSquadId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OutFoundVehicleTag                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortExpeditionUtilities::GetVehicleTagFromSquadId(class FName& SquadId, struct FGameplayTag* OutFoundVehicleTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "GetVehicleTagFromSquadId");

	Params::UFortExpeditionUtilities_GetVehicleTagFromSquadId_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFoundVehicleTag != nullptr)
		*OutFoundVehicleTag = Parms.OutFoundVehicleTag;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutLandVehicles                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutLandVehiclesAvailable                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutSeaVehicles                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutSeaVehiclesAvailable                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutAirVehicles                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutAirVehiclesAvailable                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortExpeditionUtilities::GetTotalExpeditionVehiclesAvailable(class UWidget* Widget, class UFortPlayerController* FortPC, int32* OutLandVehicles, int32* OutLandVehiclesAvailable, int32* OutSeaVehicles, int32* OutSeaVehiclesAvailable, int32* OutAirVehicles, int32* OutAirVehiclesAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "GetTotalExpeditionVehiclesAvailable");

	Params::UFortExpeditionUtilities_GetTotalExpeditionVehiclesAvailable_Params Parms{};

	Parms.Widget = Widget;
	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLandVehicles != nullptr)
		*OutLandVehicles = Parms.OutLandVehicles;

	if (OutLandVehiclesAvailable != nullptr)
		*OutLandVehiclesAvailable = Parms.OutLandVehiclesAvailable;

	if (OutSeaVehicles != nullptr)
		*OutSeaVehicles = Parms.OutSeaVehicles;

	if (OutSeaVehiclesAvailable != nullptr)
		*OutSeaVehiclesAvailable = Parms.OutSeaVehiclesAvailable;

	if (OutAirVehicles != nullptr)
		*OutAirVehicles = Parms.OutAirVehicles;

	if (OutAirVehiclesAvailable != nullptr)
		*OutAirVehiclesAvailable = Parms.OutAirVehiclesAvailable;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.GetMatchedCriteriaTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortItem*>           SlottedItems                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGameplayTag>        OutMatchedCriteria                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortExpeditionUtilities::GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, TArray<struct FGameplayTag>* OutMatchedCriteria)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "GetMatchedCriteriaTags");

	Params::UFortExpeditionUtilities_GetMatchedCriteriaTags_Params Parms{};

	Parms.Expedition = Expedition;
	Parms.SlottedItems = SlottedItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMatchedCriteria != nullptr)
		*OutMatchedCriteria = Parms.OutMatchedCriteria;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       RequirementTags                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutExpeditionSquadIds                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortExpeditionUtilities::GetExpeditionSquadsThatMatchRequirements(struct FGameplayTagContainer& RequirementTags, class UFortPlayerController* FortPC, TArray<class FName>* OutExpeditionSquadIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "GetExpeditionSquadsThatMatchRequirements");

	Params::UFortExpeditionUtilities_GetExpeditionSquadsThatMatchRequirements_Params Parms{};

	Parms.RequirementTags = RequirementTags;
	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutExpeditionSquadIds != nullptr)
		*OutExpeditionSquadIds = Parms.OutExpeditionSquadIds;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.GetExpeditionSquadPower
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortExpeditionUtilities::GetExpeditionSquadPower(class UFortPlayerController* FortPC, class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "GetExpeditionSquadPower");

	Params::UFortExpeditionUtilities_GetExpeditionSquadPower_Params Parms{};

	Parms.FortPC = FortPC;
	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.GetAllExpeditionSquadIds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                OutExpeditionSquadIds                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortExpeditionUtilities::GetAllExpeditionSquadIds(TArray<class FName>* OutExpeditionSquadIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "GetAllExpeditionSquadIds");

	Params::UFortExpeditionUtilities_GetAllExpeditionSquadIds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutExpeditionSquadIds != nullptr)
		*OutExpeditionSquadIds = Parms.OutExpeditionSquadIds;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.CalculateTotalPower
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UFortPlayerController*       FortPC                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortItem*>           SlottedItems                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortExpeditionUtilities::CalculateTotalPower(class UFortPlayerController* FortPC, class UFortExpeditionItem* Expedition, class FName& SquadId, TArray<class UFortItem*>& SlottedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "CalculateTotalPower");

	Params::UFortExpeditionUtilities_CalculateTotalPower_Params Parms{};

	Parms.FortPC = FortPC;
	Parms.Expedition = Expedition;
	Parms.SquadId = SquadId;
	Parms.SlottedItems = SlottedItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortItem*>           SlottedItems                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              GlobalPowerMod                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      SlottedItemMods                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortExpeditionUtilities::CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, float* GlobalPowerMod, TArray<float>* SlottedItemMods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "CalculateGlobalAndItemRatingModValuesBP");

	Params::UFortExpeditionUtilities_CalculateGlobalAndItemRatingModValuesBP_Params Parms{};

	Parms.Expedition = Expedition;
	Parms.SlottedItems = SlottedItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GlobalPowerMod != nullptr)
		*GlobalPowerMod = Parms.GlobalPowerMod;

	if (SlottedItemMods != nullptr)
		*SlottedItemMods = Parms.SlottedItemMods;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TotalPower                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortExpeditionUtilities::CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem* Expedition, float TotalPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "CalculateExpeditionPercentageChanceForSuccess");

	Params::UFortExpeditionUtilities_CalculateExpeditionPercentageChanceForSuccess_Params Parms{};

	Parms.Expedition = Expedition;
	Parms.TotalPower = TotalPower;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.AreExpeditionsUnlocked
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            UniqueID                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortExpeditionUtilities::AreExpeditionsUnlocked(class UObject* WorldContextObject, struct FUniqueNetIdRepl& UniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "AreExpeditionsUnlocked");

	Params::UFortExpeditionUtilities_AreExpeditionsUnlocked_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.UniqueID = UniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortExpeditionUtilities.AreAnyExpeditionsComplete
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortExpeditionUtilities::AreAnyExpeditionsComplete(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortExpeditionUtilities", "AreAnyExpeditionsComplete");

	Params::UFortExpeditionUtilities_AreAnyExpeditionsComplete_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
// (None)

class UClass* UFortExpeditionVehicleTileItemWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortExpeditionVehicleTileItemWidget");

	return Clss;
}


// FortExpeditionVehicleTileItemWidget SaveTheWorldUI.Default__FortExpeditionVehicleTileItemWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortExpeditionVehicleTileItemWidget* UFortExpeditionVehicleTileItemWidget::GetDefaultObj()
{
	static class UFortExpeditionVehicleTileItemWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortExpeditionVehicleTileItemWidget*>(UFortExpeditionVehicleTileItemWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortFeatureUnlockWidget
// (None)

class UClass* UFortFeatureUnlockWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortFeatureUnlockWidget");

	return Clss;
}


// FortFeatureUnlockWidget SaveTheWorldUI.Default__FortFeatureUnlockWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortFeatureUnlockWidget* UFortFeatureUnlockWidget::GetDefaultObj()
{
	static class UFortFeatureUnlockWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortFeatureUnlockWidget*>(UFortFeatureUnlockWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortFeatureUnlockWidget.SetData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemTemplateID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortFeatureUnlockWidget::SetData(const class FString& ItemTemplateID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "SetData");

	Params::UFortFeatureUnlockWidget_SetData_Params Parms{};

	Parms.ItemTemplateID = ItemTemplateID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortFeatureUnlockWidget.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortFeatureUnlockWidget::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "RefreshDataBP");

	Params::UFortFeatureUnlockWidget_RefreshDataBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetVideo
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UFortFeatureUnlockWidget::GetVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetVideo");

	Params::UFortFeatureUnlockWidget_GetVideo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetTitle
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortFeatureUnlockWidget::GetTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetTitle");

	Params::UFortFeatureUnlockWidget_GetTitle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetSmallIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UFortFeatureUnlockWidget::GetSmallIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetSmallIcon");

	Params::UFortFeatureUnlockWidget_GetSmallIcon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetLargeIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UFortFeatureUnlockWidget::GetLargeIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetLargeIcon");

	Params::UFortFeatureUnlockWidget_GetLargeIcon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortFeatureUnlockWidget.GetDescription
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortFeatureUnlockWidget::GetDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetDescription");

	Params::UFortFeatureUnlockWidget_GetDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortResultsWidgetSTW
// (None)

class UClass* UFortResultsWidgetSTW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortResultsWidgetSTW");

	return Clss;
}


// FortResultsWidgetSTW SaveTheWorldUI.Default__FortResultsWidgetSTW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortResultsWidgetSTW* UFortResultsWidgetSTW::GetDefaultObj()
{
	static class UFortResultsWidgetSTW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortResultsWidgetSTW*>(UFortResultsWidgetSTW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortResultsWidgetSTW.TriggerSetupTeleportCameraEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortResultsWidgetSTW::TriggerSetupTeleportCameraEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "TriggerSetupTeleportCameraEvent");

	Params::UFortResultsWidgetSTW_TriggerSetupTeleportCameraEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.ToggleChat
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortResultsWidgetSTW::ToggleChat(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "ToggleChat");

	Params::UFortResultsWidgetSTW_ToggleChat_Params Parms{};

	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundUpVoteAnalytic
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetPlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortResultsWidgetSTW::SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "SendEndOfRoundUpVoteAnalytic");

	Params::UFortResultsWidgetSTW_SendEndOfRoundUpVoteAnalytic_Params Parms{};

	Parms.TargetId = TargetId;
	Parms.TargetPlayerName = TargetPlayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundScreenAnalytic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ScreenName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Skipped                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeSpent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortResultsWidgetSTW::SendEndOfRoundScreenAnalytic(const class FString& ScreenName, bool Skipped, float TimeSpent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "SendEndOfRoundScreenAnalytic");

	Params::UFortResultsWidgetSTW_SendEndOfRoundScreenAnalytic_Params Parms{};

	Parms.ScreenName = ScreenName;
	Parms.Skipped = Skipped;
	Parms.TimeSpent = TimeSpent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundFriendInviteAnalytic
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TargetPlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortResultsWidgetSTW::SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "SendEndOfRoundFriendInviteAnalytic");

	Params::UFortResultsWidgetSTW_SendEndOfRoundFriendInviteAnalytic_Params Parms{};

	Parms.TargetId = TargetId;
	Parms.TargetPlayerName = TargetPlayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.RequestExitZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortResultsWidgetSTW::RequestExitZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "RequestExitZone");

	Params::UFortResultsWidgetSTW_RequestExitZone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.LogXPData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortResultsWidgetSTW::LogXPData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "LogXPData");

	Params::UFortResultsWidgetSTW_LogXPData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.IsDataFinalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortResultsWidgetSTW::IsDataFinalized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "IsDataFinalized");

	Params::UFortResultsWidgetSTW_IsDataFinalized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.HandlePickerCancel
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortResultsWidgetSTW::HandlePickerCancel(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "HandlePickerCancel");

	Params::UFortResultsWidgetSTW_HandlePickerCancel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.HandleEmoteClicked
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortResultsWidgetSTW::HandleEmoteClicked(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "HandleEmoteClicked");

	Params::UFortResultsWidgetSTW_HandleEmoteClicked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResultText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortResultsWidgetSTW::GetZoneCompletionResultText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "GetZoneCompletionResultText");

	Params::UFortResultsWidgetSTW_GetZoneCompletionResultText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortCompletionResult   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortCompletionResult UFortResultsWidgetSTW::GetZoneCompletionResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "GetZoneCompletionResult");

	Params::UFortResultsWidgetSTW_GetZoneCompletionResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.GetTotalMissionPointsEarned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResultsWidgetSTW::GetTotalMissionPointsEarned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "GetTotalMissionPointsEarned");

	Params::UFortResultsWidgetSTW_GetTotalMissionPointsEarned_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResultsWidgetSTW.GetRewardsByType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EFortRewardItemTypeSTW  Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortItem*>           OutRewards                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortResultsWidgetSTW::GetRewardsByType(enum class EFortRewardItemTypeSTW Type, TArray<class UFortItem*>* OutRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResultsWidgetSTW", "GetRewardsByType");

	Params::UFortResultsWidgetSTW_GetRewardsByType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRewards != nullptr)
		*OutRewards = Parms.OutRewards;

}


// Class SaveTheWorldUI.FortSTWUIData
// (None)

class UClass* UFortSTWUIData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSTWUIData");

	return Clss;
}


// FortSTWUIData SaveTheWorldUI.Default__FortSTWUIData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSTWUIData* UFortSTWUIData::GetDefaultObj()
{
	static class UFortSTWUIData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSTWUIData*>(UFortSTWUIData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRootViewportLayout_STW
// (None)

class UClass* UFortRootViewportLayout_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRootViewportLayout_STW");

	return Clss;
}


// FortRootViewportLayout_STW SaveTheWorldUI.Default__FortRootViewportLayout_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRootViewportLayout_STW* UFortRootViewportLayout_STW::GetDefaultObj()
{
	static class UFortRootViewportLayout_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRootViewportLayout_STW*>(UFortRootViewportLayout_STW::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
// (None)

class UClass* UFortItemAutoMulchActivatablePanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemAutoMulchActivatablePanel_STW");

	return Clss;
}


// FortItemAutoMulchActivatablePanel_STW SaveTheWorldUI.Default__FortItemAutoMulchActivatablePanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemAutoMulchActivatablePanel_STW* UFortItemAutoMulchActivatablePanel_STW::GetDefaultObj()
{
	static class UFortItemAutoMulchActivatablePanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemAutoMulchActivatablePanel_STW*>(UFortItemAutoMulchActivatablePanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SetItemManagementScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItemManagementScreen_STW*InItemManagementScreen                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemAutoMulchActivatablePanel_STW::SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "SetItemManagementScreen");

	Params::UFortItemAutoMulchActivatablePanel_STW_SetItemManagementScreen_Params Parms{};

	Parms.InItemManagementScreen = InItemManagementScreen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.SaveSettings
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemAutoMulchActivatablePanel_STW::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "SaveSettings");

	Params::UFortItemAutoMulchActivatablePanel_STW_SaveSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.RestoreAutoMulchSettings
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemAutoMulchActivatablePanel_STW::RestoreAutoMulchSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "RestoreAutoMulchSettings");

	Params::UFortItemAutoMulchActivatablePanel_STW_RestoreAutoMulchSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetMulchCategoriesForInventoryFilter
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortAutoMulchCategory>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class EFortAutoMulchCategory> UFortItemAutoMulchActivatablePanel_STW::GetMulchCategoriesForInventoryFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "GetMulchCategoriesForInventoryFilter");

	Params::UFortItemAutoMulchActivatablePanel_STW_GetMulchCategoriesForInventoryFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.GetFrontendInventoryFilter
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortFrontendInventoryFilterReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortFrontendInventoryFilter UFortItemAutoMulchActivatablePanel_STW::GetFrontendInventoryFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "GetFrontendInventoryFilter");

	Params::UFortItemAutoMulchActivatablePanel_STW_GetFrontendInventoryFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.EnterMulchModeForAutoMulch
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemAutoMulchActivatablePanel_STW::EnterMulchModeForAutoMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "EnterMulchModeForAutoMulch");

	Params::UFortItemAutoMulchActivatablePanel_STW_EnterMulchModeForAutoMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW.CacheAutoMulchSettings
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemAutoMulchActivatablePanel_STW::CacheAutoMulchSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "CacheAutoMulchSettings");

	Params::UFortItemAutoMulchActivatablePanel_STW_CacheAutoMulchSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
// (None)

class UClass* UFortItemCraftingOptionsActivatablePanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemCraftingOptionsActivatablePanel_STW");

	return Clss;
}


// FortItemCraftingOptionsActivatablePanel_STW SaveTheWorldUI.Default__FortItemCraftingOptionsActivatablePanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemCraftingOptionsActivatablePanel_STW* UFortItemCraftingOptionsActivatablePanel_STW::GetDefaultObj()
{
	static class UFortItemCraftingOptionsActivatablePanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemCraftingOptionsActivatablePanel_STW*>(UFortItemCraftingOptionsActivatablePanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.UpdateTierImages
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemCraftingOptionsActivatablePanel_STW::UpdateTierImages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "UpdateTierImages");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_UpdateTierImages_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetTargetCraftingTierIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewTierIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemCraftingOptionsActivatablePanel_STW::SetTargetCraftingTierIndex(int32 NewTierIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SetTargetCraftingTierIndex");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_SetTargetCraftingTierIndex_Params Parms{};

	Parms.NewTierIndex = NewTierIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetSelectedQuantity_BP
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewQuantity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemCraftingOptionsActivatablePanel_STW::SetSelectedQuantity_BP(int32 NewQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SetSelectedQuantity_BP");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_SetSelectedQuantity_BP_Params Parms{};

	Parms.NewQuantity = NewQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetItemManagementScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItemManagementScreen_STW*InItemManagementScreen                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemCraftingOptionsActivatablePanel_STW::SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SetItemManagementScreen");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_SetItemManagementScreen_Params Parms{};

	Parms.InItemManagementScreen = InItemManagementScreen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetBaseSchematicItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortSchematicItem*          InBaseItem                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemCraftingOptionsActivatablePanel_STW::SetBaseSchematicItem(class UFortSchematicItem* InBaseItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SetBaseSchematicItem");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_SetBaseSchematicItem_Params Parms{};

	Parms.InBaseItem = InBaseItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectPreviousTier
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemCraftingOptionsActivatablePanel_STW::SelectPreviousTier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SelectPreviousTier");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_SelectPreviousTier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectNextTier
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemCraftingOptionsActivatablePanel_STW::SelectNextTier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SelectNextTier");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_SelectNextTier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnTargetItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          NewTargetItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemCraftingOptionsActivatablePanel_STW::OnTargetItemChanged(class UFortSchematicItem* NewTargetItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "OnTargetItemChanged");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_OnTargetItemChanged_Params Parms{};

	Parms.NewTargetItem = NewTargetItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnSelectedQuantityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewSelectedQuantity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemCraftingOptionsActivatablePanel_STW::OnSelectedQuantityChanged(int32 NewSelectedQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "OnSelectedQuantityChanged");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_OnSelectedQuantityChanged_Params Parms{};

	Parms.NewSelectedQuantity = NewSelectedQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnMaxQuantityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewMaxQuantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemCraftingOptionsActivatablePanel_STW::OnMaxQuantityChanged(int32 NewMaxQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "OnMaxQuantityChanged");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_OnMaxQuantityChanged_Params Parms{};

	Parms.NewMaxQuantity = NewMaxQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnBaseItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          NewBaseItem                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemCraftingOptionsActivatablePanel_STW::OnBaseItemChanged(class UFortSchematicItem* NewBaseItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "OnBaseItemChanged");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_OnBaseItemChanged_Params Parms{};

	Parms.NewBaseItem = NewBaseItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.IncreaseSelectedQuantity
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemCraftingOptionsActivatablePanel_STW::IncreaseSelectedQuantity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "IncreaseSelectedQuantity");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_IncreaseSelectedQuantity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.DecreaseSelectedQuantity
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemCraftingOptionsActivatablePanel_STW::DecreaseSelectedQuantity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "DecreaseSelectedQuantity");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_DecreaseSelectedQuantity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftTargetItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemCraftingOptionsActivatablePanel_STW::CraftTargetItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "CraftTargetItem");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_CraftTargetItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftAndSlotTargetItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemCraftingOptionsActivatablePanel_STW::CraftAndSlotTargetItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "CraftAndSlotTargetItem");

	Params::UFortItemCraftingOptionsActivatablePanel_STW_CraftAndSlotTargetItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
// (None)

class UClass* UFortItemDetailsActivatablePanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemDetailsActivatablePanel_STW");

	return Clss;
}


// FortItemDetailsActivatablePanel_STW SaveTheWorldUI.Default__FortItemDetailsActivatablePanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemDetailsActivatablePanel_STW* UFortItemDetailsActivatablePanel_STW::GetDefaultObj()
{
	static class UFortItemDetailsActivatablePanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemDetailsActivatablePanel_STW*>(UFortItemDetailsActivatablePanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleItemToDetailTooltipAssetsLoaded
// (Final, Native, Private)
// Parameters:

void UFortItemDetailsActivatablePanel_STW::HandleItemToDetailTooltipAssetsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemDetailsActivatablePanel_STW", "HandleItemToDetailTooltipAssetsLoaded");

	Params::UFortItemDetailsActivatablePanel_STW_HandleItemToDetailTooltipAssetsLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToDetailSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemDetailsActivatablePanel_STW::HandleDifferentItemToDetailSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemDetailsActivatablePanel_STW", "HandleDifferentItemToDetailSetBP");

	Params::UFortItemDetailsActivatablePanel_STW_HandleDifferentItemToDetailSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToCompareSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemDetailsActivatablePanel_STW::HandleDifferentItemToCompareSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemDetailsActivatablePanel_STW", "HandleDifferentItemToCompareSetBP");

	Params::UFortItemDetailsActivatablePanel_STW_HandleDifferentItemToCompareSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItemProgressChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemDetailsActivatablePanel_STW::HandleConsumeItemProgressChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemDetailsActivatablePanel_STW", "HandleConsumeItemProgressChangedBP");

	Params::UFortItemDetailsActivatablePanel_STW_HandleConsumeItemProgressChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
// (None)

class UClass* UFortItemDetailsModeActivatablePanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemDetailsModeActivatablePanel_STW");

	return Clss;
}


// FortItemDetailsModeActivatablePanel_STW SaveTheWorldUI.Default__FortItemDetailsModeActivatablePanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemDetailsModeActivatablePanel_STW* UFortItemDetailsModeActivatablePanel_STW::GetDefaultObj()
{
	static class UFortItemDetailsModeActivatablePanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemDetailsModeActivatablePanel_STW*>(UFortItemDetailsModeActivatablePanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW.HandleOnActiveWidgetChanged
// (Final, Native, Private)
// Parameters:
// class UWidget*                     ActiveWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ActiveWidgetIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemDetailsModeActivatablePanel_STW::HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemDetailsModeActivatablePanel_STW", "HandleOnActiveWidgetChanged");

	Params::UFortItemDetailsModeActivatablePanel_STW_HandleOnActiveWidgetChanged_Params Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
// (None)

class UClass* UFortItemCompareModeActivatablePanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemCompareModeActivatablePanel_STW");

	return Clss;
}


// FortItemCompareModeActivatablePanel_STW SaveTheWorldUI.Default__FortItemCompareModeActivatablePanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemCompareModeActivatablePanel_STW* UFortItemCompareModeActivatablePanel_STW::GetDefaultObj()
{
	static class UFortItemCompareModeActivatablePanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemCompareModeActivatablePanel_STW*>(UFortItemCompareModeActivatablePanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
// (None)

class UClass* UFortItemMulchModeActivatablePanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemMulchModeActivatablePanel_STW");

	return Clss;
}


// FortItemMulchModeActivatablePanel_STW SaveTheWorldUI.Default__FortItemMulchModeActivatablePanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemMulchModeActivatablePanel_STW* UFortItemMulchModeActivatablePanel_STW::GetDefaultObj()
{
	static class UFortItemMulchModeActivatablePanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemMulchModeActivatablePanel_STW*>(UFortItemMulchModeActivatablePanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
// (None)

class UClass* UFortItemManagementCustomFilterModalWidget_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemManagementCustomFilterModalWidget_STW");

	return Clss;
}


// FortItemManagementCustomFilterModalWidget_STW SaveTheWorldUI.Default__FortItemManagementCustomFilterModalWidget_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemManagementCustomFilterModalWidget_STW* UFortItemManagementCustomFilterModalWidget_STW::GetDefaultObj()
{
	static class UFortItemManagementCustomFilterModalWidget_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemManagementCustomFilterModalWidget_STW*>(UFortItemManagementCustomFilterModalWidget_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.ToggleFilter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EFortInventoryCustomFilterFilter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementCustomFilterModalWidget_STW::ToggleFilter(enum class EFortInventoryCustomFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "ToggleFilter");

	Params::UFortItemManagementCustomFilterModalWidget_STW_ToggleFilter_Params Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnEndCommitCustomFilter
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementCustomFilterModalWidget_STW::OnEndCommitCustomFilter(bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "OnEndCommitCustomFilter");

	Params::UFortItemManagementCustomFilterModalWidget_STW_OnEndCommitCustomFilter_Params Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnCustomFilterSetUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementCustomFilterModalWidget_STW::OnCustomFilterSetUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "OnCustomFilterSetUpdated");

	Params::UFortItemManagementCustomFilterModalWidget_STW_OnCustomFilterSetUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnBeginCommitCustomFilter
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementCustomFilterModalWidget_STW::OnBeginCommitCustomFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "OnBeginCommitCustomFilter");

	Params::UFortItemManagementCustomFilterModalWidget_STW_OnBeginCommitCustomFilter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.IsCustomFilterEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInventoryCustomFilterFilter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementCustomFilterModalWidget_STW::IsCustomFilterEnabled(enum class EFortInventoryCustomFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "IsCustomFilterEnabled");

	Params::UFortItemManagementCustomFilterModalWidget_STW_IsCustomFilterEnabled_Params Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.EnableAllFilters
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemManagementCustomFilterModalWidget_STW::EnableAllFilters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "EnableAllFilters");

	Params::UFortItemManagementCustomFilterModalWidget_STW_EnableAllFilters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.DisableAllFilters
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemManagementCustomFilterModalWidget_STW::DisableAllFilters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "DisableAllFilters");

	Params::UFortItemManagementCustomFilterModalWidget_STW_DisableAllFilters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.CommitCustomFilters
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemManagementCustomFilterModalWidget_STW::CommitCustomFilters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "CommitCustomFilters");

	Params::UFortItemManagementCustomFilterModalWidget_STW_CommitCustomFilters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortItemManagementInventoryPanel_STW
// (None)

class UClass* UFortItemManagementInventoryPanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemManagementInventoryPanel_STW");

	return Clss;
}


// FortItemManagementInventoryPanel_STW SaveTheWorldUI.Default__FortItemManagementInventoryPanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemManagementInventoryPanel_STW* UFortItemManagementInventoryPanel_STW::GetDefaultObj()
{
	static class UFortItemManagementInventoryPanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemManagementInventoryPanel_STW*>(UFortItemManagementInventoryPanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.UpdateSchematicTiles
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::UpdateSchematicTiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "UpdateSchematicTiles");

	Params::UFortItemManagementInventoryPanel_STW_UpdateSchematicTiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.ToggleTileSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::ToggleTileSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "ToggleTileSize");

	Params::UFortItemManagementInventoryPanel_STW_ToggleTileSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.TogglePrioritizeFavorites
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::TogglePrioritizeFavorites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "TogglePrioritizeFavorites");

	Params::UFortItemManagementInventoryPanel_STW_TogglePrioritizeFavorites_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SwitchPanelFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::SwitchPanelFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "SwitchPanelFocus");

	Params::UFortItemManagementInventoryPanel_STW_SwitchPanelFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetSortType
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EInventoryContentSortTypeSortType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::SetSortType(enum class EInventoryContentSortType SortType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "SetSortType");

	Params::UFortItemManagementInventoryPanel_STW_SetSortType_Params Parms{};

	Parms.SortType = SortType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetFilter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        FilterName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::SetFilter(class FName FilterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "SetFilter");

	Params::UFortItemManagementInventoryPanel_STW_SetFilter_Params Parms{};

	Parms.FilterName = FilterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RequestFocusEquipSlots
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::RequestFocusEquipSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "RequestFocusEquipSlots");

	Params::UFortItemManagementInventoryPanel_STW_RequestFocusEquipSlots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RefreshCraftingSort
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::RefreshCraftingSort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "RefreshCraftingSort");

	Params::UFortItemManagementInventoryPanel_STW_RefreshCraftingSort_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.OnMulchRestrictionTextShown
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShown                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::OnMulchRestrictionTextShown(bool bShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "OnMulchRestrictionTextShown");

	Params::UFortItemManagementInventoryPanel_STW_OnMulchRestrictionTextShown_Params Parms{};

	Parms.bShown = bShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.MarkAllItemsAsSeen
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::MarkAllItemsAsSeen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "MarkAllItemsAsSeen");

	Params::UFortItemManagementInventoryPanel_STW_MarkAllItemsAsSeen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSwitchPanelAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementInventoryPanel_STW::IsSwitchPanelAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "IsSwitchPanelAvailable");

	Params::UFortItemManagementInventoryPanel_STW_IsSwitchPanelAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSelectedItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*                   Item                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementInventoryPanel_STW::IsSelectedItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "IsSelectedItem");

	Params::UFortItemManagementInventoryPanel_STW_IsSelectedItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HasUnlockedStorageSlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementInventoryPanel_STW::HasUnlockedStorageSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HasUnlockedStorageSlots");

	Params::UFortItemManagementInventoryPanel_STW_HasUnlockedStorageSlots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleSetOfItemsToMulchChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleSetOfItemsToMulchChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleSetOfItemsToMulchChangedBP");

	Params::UFortItemManagementInventoryPanel_STW_HandleSetOfItemsToMulchChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleQuickBarChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickBarType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleQuickBarChangedBP");

	Params::UFortItemManagementInventoryPanel_STW_HandleQuickBarChangedBP_Params Parms{};

	Parms.QuickBarType = QuickBarType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleItemBeginDrag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::HandleItemBeginDrag(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleItemBeginDrag");

	Params::UFortItemManagementInventoryPanel_STW_HandleItemBeginDrag_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleInventoryUpdatedEvent
// (Final, Native, Private)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleInventoryUpdatedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleInventoryUpdatedEvent");

	Params::UFortItemManagementInventoryPanel_STW_HandleInventoryUpdatedEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFocusEquipSlotsBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleFocusEquipSlotsBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleFocusEquipSlotsBP");

	Params::UFortItemManagementInventoryPanel_STW_HandleFocusEquipSlotsBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabSelected
// (Final, Native, Private)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::HandleFilterTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleFilterTabSelected");

	Params::UFortItemManagementInventoryPanel_STW_HandleFilterTabSelected_Params Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabButtonCreated
// (Final, Native, Private)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::HandleFilterTabButtonCreated(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleFilterTabButtonCreated");

	Params::UFortItemManagementInventoryPanel_STW_HandleFilterTabButtonCreated_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentSortTypeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleDifferentSortTypeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleDifferentSortTypeSetBP");

	Params::UFortItemManagementInventoryPanel_STW_HandleDifferentSortTypeSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleDifferentItemManagementModeSetBP");

	Params::UFortItemManagementInventoryPanel_STW_HandleDifferentItemManagementModeSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFrontendInventoryFilterSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleDifferentFrontendInventoryFilterSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleDifferentFrontendInventoryFilterSetBP");

	Params::UFortItemManagementInventoryPanel_STW_HandleDifferentFrontendInventoryFilterSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFilterSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleDifferentFilterSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleDifferentFilterSetBP");

	Params::UFortItemManagementInventoryPanel_STW_HandleDifferentFilterSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCustomInventoryFilterChanged
// (Final, Native, Protected)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleCustomInventoryFilterChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleCustomInventoryFilterChanged");

	Params::UFortItemManagementInventoryPanel_STW_HandleCustomInventoryFilterChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCursorModeEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 CursorModeContentWidget                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleCursorModeChangedBP");

	Params::UFortItemManagementInventoryPanel_STW_HandleCursorModeChangedBP_Params Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChanged
// (Final, Native, Private)
// Parameters:
// bool                               bCursorModeEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 CursorModeContentWidget                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleCursorModeChanged");

	Params::UFortItemManagementInventoryPanel_STW_HandleCursorModeChanged_Params Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCraftItemStarted
// (Final, Native, Private)
// Parameters:

void UFortItemManagementInventoryPanel_STW::HandleCraftItemStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleCraftItemStarted");

	Params::UFortItemManagementInventoryPanel_STW_HandleCraftItemStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetUpgradeItemDefinitionsForCurrentInventory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortItemDefinition*> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortItemDefinition*> UFortItemManagementInventoryPanel_STW::GetUpgradeItemDefinitionsForCurrentInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "GetUpgradeItemDefinitionsForCurrentInventory");

	Params::UFortItemManagementInventoryPanel_STW_GetUpgradeItemDefinitionsForCurrentInventory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetSupportedSortTypesForCurrentInventory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EInventoryContentSortType>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class EInventoryContentSortType> UFortItemManagementInventoryPanel_STW::GetSupportedSortTypesForCurrentInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "GetSupportedSortTypesForCurrentInventory");

	Params::UFortItemManagementInventoryPanel_STW_GetSupportedSortTypesForCurrentInventory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetShouldPrioritizeFavorites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementInventoryPanel_STW::GetShouldPrioritizeFavorites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "GetShouldPrioritizeFavorites");

	Params::UFortItemManagementInventoryPanel_STW_GetShouldPrioritizeFavorites_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetQualifiedFilterDisplayName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortItemManagementInventoryPanel_STW::GetQualifiedFilterDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "GetQualifiedFilterDisplayName");

	Params::UFortItemManagementInventoryPanel_STW_GetQualifiedFilterDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CycleSortType
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::CycleSortType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "CycleSortType");

	Params::UFortItemManagementInventoryPanel_STW_CycleSortType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CanDragItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementInventoryPanel_STW::CanDragItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "CanDragItems");

	Params::UFortItemManagementInventoryPanel_STW_CanDragItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AdvanceSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementInventoryPanel_STW::AdvanceSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "AdvanceSelection");

	Params::UFortItemManagementInventoryPanel_STW_AdvanceSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AddItemStackToMulch
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementInventoryPanel_STW::AddItemStackToMulch(class UFortItem* Item, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "AddItemStackToMulch");

	Params::UFortItemManagementInventoryPanel_STW_AddItemStackToMulch_Params Parms{};

	Parms.Item = Item;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortItemManagementItemTileButton_STW
// (None)

class UClass* UFortItemManagementItemTileButton_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemManagementItemTileButton_STW");

	return Clss;
}


// FortItemManagementItemTileButton_STW SaveTheWorldUI.Default__FortItemManagementItemTileButton_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemManagementItemTileButton_STW* UFortItemManagementItemTileButton_STW::GetDefaultObj()
{
	static class UFortItemManagementItemTileButton_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemManagementItemTileButton_STW*>(UFortItemManagementItemTileButton_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.UpdateEquipSlotOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              CurrentSlotIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementItemTileButton_STW::UpdateEquipSlotOverlay(int32 CurrentSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "UpdateEquipSlotOverlay");

	Params::UFortItemManagementItemTileButton_STW_UpdateEquipSlotOverlay_Params Parms{};

	Parms.CurrentSlotIndex = CurrentSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.PopulateEquipSlotOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementItemTileButton_STW::PopulateEquipSlotOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "PopulateEquipSlotOverlay");

	Params::UFortItemManagementItemTileButton_STW_PopulateEquipSlotOverlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.OnSlotItemComplete
// (Final, Native, Private)
// Parameters:
// class UFortAccountItem*            SlottedItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementItemTileButton_STW::OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "OnSlotItemComplete");

	Params::UFortItemManagementItemTileButton_STW_OnSlotItemComplete_Params Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.IsValidEquipSlotOverlayIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementItemTileButton_STW::IsValidEquipSlotOverlayIndex(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "IsValidEquipSlotOverlayIndex");

	Params::UFortItemManagementItemTileButton_STW_IsValidEquipSlotOverlayIndex_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowRefundIndicatorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemTileButton_STW::HandleShowRefundIndicatorChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleShowRefundIndicatorChanged");

	Params::UFortItemManagementItemTileButton_STW_HandleShowRefundIndicatorChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowCollectionBookIndicatorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemTileButton_STW::HandleShowCollectionBookIndicatorChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleShowCollectionBookIndicatorChanged");

	Params::UFortItemManagementItemTileButton_STW_HandleShowCollectionBookIndicatorChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemMulchStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemTileButton_STW::HandleItemMulchStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleItemMulchStateChanged");

	Params::UFortItemManagementItemTileButton_STW_HandleItemMulchStateChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemTileButton_STW::HandleItemChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleItemChangedBP");

	Params::UFortItemManagementItemTileButton_STW_HandleItemChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToDetailChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemTileButton_STW::HandleHasItemToDetailChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleHasItemToDetailChanged");

	Params::UFortItemManagementItemTileButton_STW_HandleHasItemToDetailChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToCompareDetailsWithChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemTileButton_STW::HandleHasItemToCompareDetailsWithChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleHasItemToCompareDetailsWithChanged");

	Params::UFortItemManagementItemTileButton_STW_HandleHasItemToCompareDetailsWithChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleEquipSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              EquipSlot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementItemTileButton_STW::HandleEquipSlotChanged(int32 EquipSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleEquipSlotChanged");

	Params::UFortItemManagementItemTileButton_STW_HandleEquipSlotChanged_Params Parms{};

	Parms.EquipSlot = EquipSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemTileButton_STW::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleDifferentItemManagementModeSetBP");

	Params::UFortItemManagementItemTileButton_STW_HandleDifferentItemManagementModeSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetPopupMenu
// (Final, Native, Private)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UFortItemManagementItemTileButton_STW::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "GetPopupMenu");

	Params::UFortItemManagementItemTileButton_STW_GetPopupMenu_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetItemManagementMode
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortItemManagementMode ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortItemManagementMode UFortItemManagementItemTileButton_STW::GetItemManagementMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "GetItemManagementMode");

	Params::UFortItemManagementItemTileButton_STW_GetItemManagementMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetHomebaseSquadSlotForItem
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHomebaseSquadSlotId        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FHomebaseSquadSlotId UFortItemManagementItemTileButton_STW::GetHomebaseSquadSlotForItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "GetHomebaseSquadSlotForItem");

	Params::UFortItemManagementItemTileButton_STW_GetHomebaseSquadSlotForItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
// (None)

class UClass* UFortItemManagementItemDetailsPanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemManagementItemDetailsPanel_STW");

	return Clss;
}


// FortItemManagementItemDetailsPanel_STW SaveTheWorldUI.Default__FortItemManagementItemDetailsPanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemManagementItemDetailsPanel_STW* UFortItemManagementItemDetailsPanel_STW::GetDefaultObj()
{
	static class UFortItemManagementItemDetailsPanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemManagementItemDetailsPanel_STW*>(UFortItemManagementItemDetailsPanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHostSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemDetailsPanel_STW::HandleHostSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemDetailsPanel_STW", "HandleHostSet");

	Params::UFortItemManagementItemDetailsPanel_STW_HandleHostSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementItemDetailsPanel_STW::HandleHasItemMarkedForMulchingChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemDetailsPanel_STW", "HandleHasItemMarkedForMulchingChanged");

	Params::UFortItemManagementItemDetailsPanel_STW_HandleHasItemMarkedForMulchingChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.GetAmmoTypeItemDefinitions
// (Final, Native, Static, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UFortAmmoItemDefinition*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortAmmoItemDefinition*> UFortItemManagementItemDetailsPanel_STW::GetAmmoTypeItemDefinitions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementItemDetailsPanel_STW", "GetAmmoTypeItemDefinitions");

	Params::UFortItemManagementItemDetailsPanel_STW_GetAmmoTypeItemDefinitions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
// (None)

class UClass* UFortItemManagementMulchDetailsPanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemManagementMulchDetailsPanel_STW");

	return Clss;
}


// FortItemManagementMulchDetailsPanel_STW SaveTheWorldUI.Default__FortItemManagementMulchDetailsPanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemManagementMulchDetailsPanel_STW* UFortItemManagementMulchDetailsPanel_STW::GetDefaultObj()
{
	static class UFortItemManagementMulchDetailsPanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemManagementMulchDetailsPanel_STW*>(UFortItemManagementMulchDetailsPanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.IsSpaceAvailableForMulch
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementMulchDetailsPanel_STW::IsSpaceAvailableForMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "IsSpaceAvailableForMulch");

	Params::UFortItemManagementMulchDetailsPanel_STW_IsSpaceAvailableForMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleSetOfItemsToMulchChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementMulchDetailsPanel_STW::HandleSetOfItemsToMulchChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "HandleSetOfItemsToMulchChangedBP");

	Params::UFortItemManagementMulchDetailsPanel_STW_HandleSetOfItemsToMulchChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleHostSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementMulchDetailsPanel_STW::HandleHostSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "HandleHostSet");

	Params::UFortItemManagementMulchDetailsPanel_STW_HandleHostSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemsToMulch
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortItem*>           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortItem*> UFortItemManagementMulchDetailsPanel_STW::GetItemsToMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "GetItemsToMulch");

	Params::UFortItemManagementMulchDetailsPanel_STW_GetItemsToMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemCountsToMulch
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UFortItemManagementMulchDetailsPanel_STW::GetItemCountsToMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "GetItemCountsToMulch");

	Params::UFortItemManagementMulchDetailsPanel_STW_GetItemCountsToMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.CommitMulch
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemManagementMulchDetailsPanel_STW::CommitMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "CommitMulch");

	Params::UFortItemManagementMulchDetailsPanel_STW_CommitMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
// (None)

class UClass* UFortItemManagementModeDetailsPanel_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemManagementModeDetailsPanel_STW");

	return Clss;
}


// FortItemManagementModeDetailsPanel_STW SaveTheWorldUI.Default__FortItemManagementModeDetailsPanel_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemManagementModeDetailsPanel_STW* UFortItemManagementModeDetailsPanel_STW::GetDefaultObj()
{
	static class UFortItemManagementModeDetailsPanel_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemManagementModeDetailsPanel_STW*>(UFortItemManagementModeDetailsPanel_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleHostSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementModeDetailsPanel_STW::HandleHostSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementModeDetailsPanel_STW", "HandleHostSet");

	Params::UFortItemManagementModeDetailsPanel_STW_HandleHostSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementModeDetailsPanel_STW::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementModeDetailsPanel_STW", "HandleDifferentItemManagementModeSetBP");

	Params::UFortItemManagementModeDetailsPanel_STW_HandleDifferentItemManagementModeSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.GetItemManagementMode
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortItemManagementMode ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortItemManagementMode UFortItemManagementModeDetailsPanel_STW::GetItemManagementMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementModeDetailsPanel_STW", "GetItemManagementMode");

	Params::UFortItemManagementModeDetailsPanel_STW_GetItemManagementMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortItemManagementScreen_STW
// (None)

class UClass* UFortItemManagementScreen_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemManagementScreen_STW");

	return Clss;
}


// FortItemManagementScreen_STW SaveTheWorldUI.Default__FortItemManagementScreen_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemManagementScreen_STW* UFortItemManagementScreen_STW::GetDefaultObj()
{
	static class UFortItemManagementScreen_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemManagementScreen_STW*>(UFortItemManagementScreen_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.TransferItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::TransferItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "TransferItem");

	Params::UFortItemManagementScreen_STW_TransferItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowRefundIndicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::ToggleShowRefundIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ToggleShowRefundIndicator");

	Params::UFortItemManagementScreen_STW_ToggleShowRefundIndicator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowCollectionBookIndicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::ToggleShowCollectionBookIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ToggleShowCollectionBookIndicator");

	Params::UFortItemManagementScreen_STW_ToggleShowCollectionBookIndicator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.ShowWarningReadOnlyWIFE
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Force                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::ShowWarningReadOnlyWIFE(bool Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ShowWarningReadOnlyWIFE");

	Params::UFortItemManagementScreen_STW_ShowWarningReadOnlyWIFE_Params Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.ShowMulchConfirmationModal
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ShowMulchConfirmationModal");

	Params::UFortItemManagementScreen_STW_ShowMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.ShowCustomFilterModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::ShowCustomFilterModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ShowCustomFilterModal");

	Params::UFortItemManagementScreen_STW_ShowCustomFilterModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.SetFrontendInventoryFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortFrontendInventoryFilterFrontendInventoryFilter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::SetFrontendInventoryFilter(enum class EFortFrontendInventoryFilter FrontendInventoryFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "SetFrontendInventoryFilter");

	Params::UFortItemManagementScreen_STW_SetFrontendInventoryFilter_Params Parms{};

	Parms.FrontendInventoryFilter = FrontendInventoryFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.SetConsumeItemRequestInProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InProgress                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::SetConsumeItemRequestInProgress(bool InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "SetConsumeItemRequestInProgress");

	Params::UFortItemManagementScreen_STW_SetConsumeItemRequestInProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.RequestPopupMenuForSelectedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::RequestPopupMenuForSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "RequestPopupMenuForSelectedItem");

	Params::UFortItemManagementScreen_STW_RequestPopupMenuForSelectedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.OpenCraftingOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortSchematicItem*          SchematicItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::OpenCraftingOptions(class UFortSchematicItem* SchematicItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "OpenCraftingOptions");

	Params::UFortItemManagementScreen_STW_OpenCraftingOptions_Params Parms{};

	Parms.SchematicItem = SchematicItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.OpenAutoMulchOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::OpenAutoMulchOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "OpenAutoMulchOptions");

	Params::UFortItemManagementScreen_STW_OpenAutoMulchOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelDeactivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "NotifyPanelDeactivated");

	Params::UFortItemManagementScreen_STW_NotifyPanelDeactivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelActivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "NotifyPanelActivated");

	Params::UFortItemManagementScreen_STW_NotifyPanelActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.MarkAllItemsAsSeen
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::MarkAllItemsAsSeen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "MarkAllItemsAsSeen");

	Params::UFortItemManagementScreen_STW_MarkAllItemsAsSeen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.IsScreenWIFE
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementScreen_STW::IsScreenWIFE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "IsScreenWIFE");

	Params::UFortItemManagementScreen_STW_IsScreenWIFE_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.InspectItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::InspectItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "InspectItem");

	Params::UFortItemManagementScreen_STW_InspectItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HideMulchConfirmationModal
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HideMulchConfirmationModal");

	Params::UFortItemManagementScreen_STW_HideMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HideCustomFilterModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::HideCustomFilterModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HideCustomFilterModal");

	Params::UFortItemManagementScreen_STW_HideCustomFilterModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HasItemBeenSeen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAccountItem*            AccountItem                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementScreen_STW::HasItemBeenSeen(class UFortAccountItem* AccountItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HasItemBeenSeen");

	Params::UFortItemManagementScreen_STW_HasItemBeenSeen_Params Parms{};

	Parms.AccountItem = AccountItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HasDefaultItemsToMulch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementScreen_STW::HasDefaultItemsToMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HasDefaultItemsToMulch");

	Params::UFortItemManagementScreen_STW_HasDefaultItemsToMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleTransferItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleTransferItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleTransferItemBP");

	Params::UFortItemManagementScreen_STW_HandleTransferItemBP_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenCraftingOptionsBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          SchematicItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleOpenCraftingOptionsBP(class UFortSchematicItem* SchematicItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleOpenCraftingOptionsBP");

	Params::UFortItemManagementScreen_STW_HandleOpenCraftingOptionsBP_Params Parms{};

	Parms.SchematicItem = SchematicItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenAutoMulchOptionsBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortItemManagementScreen_STW::HandleOpenAutoMulchOptionsBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleOpenAutoMulchOptionsBP");

	Params::UFortItemManagementScreen_STW_HandleOpenAutoMulchOptionsBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleMulchQuantitySelection
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleMulchQuantitySelection(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleMulchQuantitySelection");

	Params::UFortItemManagementScreen_STW_HandleMulchQuantitySelection_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToDetailChanged
// (Final, Native, Private)
// Parameters:
// bool                               bItemChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAmmoChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIngredientsChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleItemToDetailChanged");

	Params::UFortItemManagementScreen_STW_HandleItemToDetailChanged_Params Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToCompareWithChanged
// (Final, Native, Private)
// Parameters:
// bool                               bItemChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAmmoChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIngredientsChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleItemToCompareWithChanged");

	Params::UFortItemManagementScreen_STW_HandleItemToCompareWithChanged_Params Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleInspectItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleInspectItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleInspectItemBP");

	Params::UFortItemManagementScreen_STW_HandleInspectItemBP_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleEquipItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleEquipItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleEquipItemBP");

	Params::UFortItemManagementScreen_STW_HandleEquipItemBP_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleDropItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleDropItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleDropItemBP");

	Params::UFortItemManagementScreen_STW_HandleDropItemBP_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleDifferentItemManagementModeSetBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortItemManagementScreen_STW::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleDifferentItemManagementModeSetBP");

	Params::UFortItemManagementScreen_STW_HandleDifferentItemManagementModeSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          SchematicItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortItemTier           RequestedTier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CraftCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleCraftItemBP(class UFortSchematicItem* SchematicItem, enum class EFortItemTier RequestedTier, int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleCraftItemBP");

	Params::UFortItemManagementScreen_STW_HandleCraftItemBP_Params Parms{};

	Parms.SchematicItem = SchematicItem;
	Parms.RequestedTier = RequestedTier;
	Parms.CraftCount = CraftCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftAndSlotItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*          SchematicItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortItemTier           RequestedTier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CraftCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleCraftAndSlotItemBP(class UFortSchematicItem* SchematicItem, enum class EFortItemTier RequestedTier, int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleCraftAndSlotItemBP");

	Params::UFortItemManagementScreen_STW_HandleCraftAndSlotItemBP_Params Parms{};

	Parms.SchematicItem = SchematicItem;
	Parms.RequestedTier = RequestedTier;
	Parms.CraftCount = CraftCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.HandleConsumeItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortConsumableAccountItem*  ConsumableItem                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleConsumeItemBP");

	Params::UFortItemManagementScreen_STW_HandleConsumeItemBP_Params Parms{};

	Parms.ConsumableItem = ConsumableItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.GuardActionForReadOnlyWIFE
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementScreen_STW::GuardActionForReadOnlyWIFE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GuardActionForReadOnlyWIFE");

	Params::UFortItemManagementScreen_STW_GuardActionForReadOnlyWIFE_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowRefundIndicator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementScreen_STW::GetShouldShowRefundIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GetShouldShowRefundIndicator");

	Params::UFortItemManagementScreen_STW_GetShouldShowRefundIndicator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowCollectionBookIndicator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementScreen_STW::GetShouldShowCollectionBookIndicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GetShouldShowCollectionBookIndicator");

	Params::UFortItemManagementScreen_STW_GetShouldShowCollectionBookIndicator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToDetail
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItem* UFortItemManagementScreen_STW::GetItemToDetail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GetItemToDetail");

	Params::UFortItemManagementScreen_STW_GetItemToDetail_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToCompareDetailsWith
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItem* UFortItemManagementScreen_STW::GetItemToCompareDetailsWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GetItemToCompareDetailsWith");

	Params::UFortItemManagementScreen_STW_GetItemToCompareDetailsWith_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.EquipItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::EquipItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EquipItem");

	Params::UFortItemManagementScreen_STW_EquipItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchModeForAutoMulch
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::EnterMulchModeForAutoMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EnterMulchModeForAutoMulch");

	Params::UFortItemManagementScreen_STW_EnterMulchModeForAutoMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToMulch                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::EnterMulchMode(class UFortItem* ItemToMulch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EnterMulchMode");

	Params::UFortItemManagementScreen_STW_EnterMulchMode_Params Parms{};

	Parms.ItemToMulch = ItemToMulch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.EnterDetailsMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToDetail                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::EnterDetailsMode(class UFortItem* ItemToDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EnterDetailsMode");

	Params::UFortItemManagementScreen_STW_EnterDetailsMode_Params Parms{};

	Parms.ItemToDetail = ItemToDetail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.EnterComparisonMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToCompareDetailsWith                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EnterComparisonMode");

	Params::UFortItemManagementScreen_STW_EnterComparisonMode_Params Parms{};

	Parms.ItemToCompareDetailsWith = ItemToCompareDetailsWith;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.DropItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::DropItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "DropItem");

	Params::UFortItemManagementScreen_STW_DropItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.CycleSortType
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::CycleSortType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CycleSortType");

	Params::UFortItemManagementScreen_STW_CycleSortType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.CraftItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortSchematicItem*          SchematicItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortItemTier           RequestedTier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CraftCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::CraftItem(class UFortSchematicItem* SchematicItem, enum class EFortItemTier RequestedTier, int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CraftItem");

	Params::UFortItemManagementScreen_STW_CraftItem_Params Parms{};

	Parms.SchematicItem = SchematicItem;
	Parms.RequestedTier = RequestedTier;
	Parms.CraftCount = CraftCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.CraftAndSlotItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortSchematicItem*          SchematicItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortItemTier           RequestedTier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CraftCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::CraftAndSlotItem(class UFortSchematicItem* SchematicItem, enum class EFortItemTier RequestedTier, int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CraftAndSlotItem");

	Params::UFortItemManagementScreen_STW_CraftAndSlotItem_Params Parms{};

	Parms.SchematicItem = SchematicItem;
	Parms.RequestedTier = RequestedTier;
	Parms.CraftCount = CraftCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.ConsumeItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortConsumableAccountItem*  ConsumableItem                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemManagementScreen_STW::ConsumeItem(class UFortConsumableAccountItem* ConsumableItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ConsumeItem");

	Params::UFortItemManagementScreen_STW_ConsumeItem_Params Parms{};

	Parms.ConsumableItem = ConsumableItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.CanRequestPopupMenuForSelectedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementScreen_STW::CanRequestPopupMenuForSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CanRequestPopupMenuForSelectedItem");

	Params::UFortItemManagementScreen_STW_CanRequestPopupMenuForSelectedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.CanEquipItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemManagementScreen_STW::CanEquipItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CanEquipItem");

	Params::UFortItemManagementScreen_STW_CanEquipItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemManagementScreen_STW.CancelInventoryPanelTileViewRefresh
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortItemManagementScreen_STW::CancelInventoryPanelTileViewRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CancelInventoryPanelTileViewRefresh");

	Params::UFortItemManagementScreen_STW_CancelInventoryPanelTileViewRefresh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.MainMenu_STW
// (None)

class UClass* UMainMenu_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenu_STW");

	return Clss;
}


// MainMenu_STW SaveTheWorldUI.Default__MainMenu_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UMainMenu_STW* UMainMenu_STW::GetDefaultObj()
{
	static class UMainMenu_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenu_STW*>(UMainMenu_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.MainMenu_STW.TryShowPrimaryContent
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UCommonActivatableWidget>ContentWidgetClass                                               (Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMainMenu_STW::TryShowPrimaryContent(TSoftClassPtr<class UCommonActivatableWidget>& ContentWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_STW", "TryShowPrimaryContent");

	Params::UMainMenu_STW_TryShowPrimaryContent_Params Parms{};

	Parms.ContentWidgetClass = ContentWidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.MainMenu_STW.TryShowModal
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UCommonActivatableWidget>ModalWidgetClass                                                 (Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMainMenu_STW::TryShowModal(TSoftClassPtr<class UCommonActivatableWidget>& ModalWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_STW", "TryShowModal");

	Params::UMainMenu_STW_TryShowModal_Params Parms{};

	Parms.ModalWidgetClass = ModalWidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.MainMenu_STW.ShouldShowLeaveExperienceButton
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMainMenu_STW::ShouldShowLeaveExperienceButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_STW", "ShouldShowLeaveExperienceButton");

	Params::UMainMenu_STW_ShouldShowLeaveExperienceButton_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.MainMenu_STW.IsActiveTabMainShop
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMainMenu_STW::IsActiveTabMainShop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_STW", "IsActiveTabMainShop");

	Params::UMainMenu_STW_IsActiveTabMainShop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortUIStateWidget_STWFrontend
// (None)

class UClass* UFortUIStateWidget_STWFrontend::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUIStateWidget_STWFrontend");

	return Clss;
}


// FortUIStateWidget_STWFrontend SaveTheWorldUI.Default__FortUIStateWidget_STWFrontend
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUIStateWidget_STWFrontend* UFortUIStateWidget_STWFrontend::GetDefaultObj()
{
	static class UFortUIStateWidget_STWFrontend* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUIStateWidget_STWFrontend*>(UFortUIStateWidget_STWFrontend::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortUIStateWidget_STWJoinServer
// (None)

class UClass* UFortUIStateWidget_STWJoinServer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUIStateWidget_STWJoinServer");

	return Clss;
}


// FortUIStateWidget_STWJoinServer SaveTheWorldUI.Default__FortUIStateWidget_STWJoinServer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUIStateWidget_STWJoinServer* UFortUIStateWidget_STWJoinServer::GetDefaultObj()
{
	static class UFortUIStateWidget_STWJoinServer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUIStateWidget_STWJoinServer*>(UFortUIStateWidget_STWJoinServer::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.OnShowTutorialDialog
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortUIStateWidget_STWJoinServer::OnShowTutorialDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "OnShowTutorialDialog");

	Params::UFortUIStateWidget_STWJoinServer_OnShowTutorialDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingStateChange
// (Final, Native, Private)
// Parameters:
// enum class EMatchmakingState       OldState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMatchmakingState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUIStateWidget_STWJoinServer::HandleMatchmakingStateChange(enum class EMatchmakingState OldState, enum class EMatchmakingState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "HandleMatchmakingStateChange");

	Params::UFortUIStateWidget_STWJoinServer_HandleMatchmakingStateChange_Params Parms{};

	Parms.OldState = OldState;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingComplete
// (Final, Native, Private)
// Parameters:
// enum class EMatchmakingCompleteResultMatchmakingResult                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUIStateWidget_STWJoinServer::HandleMatchmakingComplete(enum class EMatchmakingCompleteResult MatchmakingResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "HandleMatchmakingComplete");

	Params::UFortUIStateWidget_STWJoinServer_HandleMatchmakingComplete_Params Parms{};

	Parms.MatchmakingResult = MatchmakingResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyTimeUpdated
// (Final, Native, Private)
// Parameters:
// int32                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUIStateWidget_STWJoinServer::HandleLobbyTimeUpdated(int32 TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "HandleLobbyTimeUpdated");

	Params::UFortUIStateWidget_STWJoinServer_HandleLobbyTimeUpdated_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyDisconnected
// (Final, Native, Private)
// Parameters:

void UFortUIStateWidget_STWJoinServer::HandleLobbyDisconnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "HandleLobbyDisconnected");

	Params::UFortUIStateWidget_STWJoinServer_HandleLobbyDisconnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.TopBar_STW
// (None)

class UClass* UTopBar_STW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopBar_STW");

	return Clss;
}


// TopBar_STW SaveTheWorldUI.Default__TopBar_STW
// (Public, ClassDefaultObject, ArchetypeObject)

class UTopBar_STW* UTopBar_STW::GetDefaultObj()
{
	static class UTopBar_STW* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopBar_STW*>(UTopBar_STW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.TopBar_STW.SetOnlineFriendsCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewOnlineFriendsCount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopBar_STW::SetOnlineFriendsCount(int32 NewOnlineFriendsCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBar_STW", "SetOnlineFriendsCount");

	Params::UTopBar_STW_SetOnlineFriendsCount_Params Parms{};

	Parms.NewOnlineFriendsCount = NewOnlineFriendsCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.TopBar_STW.OnSocialMenuOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTopBar_STW::OnSocialMenuOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBar_STW", "OnSocialMenuOpened");

	Params::UTopBar_STW_OnSocialMenuOpened_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.TopBar_STW.OnShouldShowPhoenixDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPhoenixSeasonDisplayInfo*PhoenixDisplayInfo                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTopBar_STW::OnShouldShowPhoenixDisplay(bool bShow, class UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopBar_STW", "OnShouldShowPhoenixDisplay");

	Params::UTopBar_STW_OnShouldShowPhoenixDisplay_Params Parms{};

	Parms.bShow = bShow;
	Parms.PhoenixDisplayInfo = PhoenixDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortHeroLoadoutGadgetPicker
// (None)

class UClass* UFortHeroLoadoutGadgetPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutGadgetPicker");

	return Clss;
}


// FortHeroLoadoutGadgetPicker SaveTheWorldUI.Default__FortHeroLoadoutGadgetPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutGadgetPicker* UFortHeroLoadoutGadgetPicker::GetDefaultObj()
{
	static class UFortHeroLoadoutGadgetPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutGadgetPicker*>(UFortHeroLoadoutGadgetPicker::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroLoadoutGadgetPicker.SetTargetLoadoutSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCampaignHeroLoadoutItem*LoadoutItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutGadgetPicker::SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem* LoadoutItem, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutGadgetPicker", "SetTargetLoadoutSlot");

	Params::UFortHeroLoadoutGadgetPicker_SetTargetLoadoutSlot_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;
	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutGadgetPicker.HandleDifferentTargetLoadoutSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutGadgetPicker::HandleDifferentTargetLoadoutSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutGadgetPicker", "HandleDifferentTargetLoadoutSlotSetBP");

	Params::UFortHeroLoadoutGadgetPicker_HandleDifferentTargetLoadoutSlotSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortHeroLoadoutHeroPicker
// (None)

class UClass* UFortHeroLoadoutHeroPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutHeroPicker");

	return Clss;
}


// FortHeroLoadoutHeroPicker SaveTheWorldUI.Default__FortHeroLoadoutHeroPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutHeroPicker* UFortHeroLoadoutHeroPicker::GetDefaultObj()
{
	static class UFortHeroLoadoutHeroPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutHeroPicker*>(UFortHeroLoadoutHeroPicker::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.UpdateFilterTabList
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FName                        PreviouslySelectedTab                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutHeroPicker::UpdateFilterTabList(class FName PreviouslySelectedTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "UpdateFilterTabList");

	Params::UFortHeroLoadoutHeroPicker_UpdateFilterTabList_Params Parms{};

	Parms.PreviouslySelectedTab = PreviouslySelectedTab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.SetTargetLoadoutSlot
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UFortCampaignHeroLoadoutItem*LoadoutItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutHeroPicker::SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem* LoadoutItem, class FName& SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "SetTargetLoadoutSlot");

	Params::UFortHeroLoadoutHeroPicker_SetTargetLoadoutSlot_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;
	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelectedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutHeroPicker::HandleFilterTabSelectedBP(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "HandleFilterTabSelectedBP");

	Params::UFortHeroLoadoutHeroPicker_HandleFilterTabSelectedBP_Params Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelected
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutHeroPicker::HandleFilterTabSelected(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "HandleFilterTabSelected");

	Params::UFortHeroLoadoutHeroPicker_HandleFilterTabSelected_Params Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleDifferentTargetLoadoutSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutHeroPicker::HandleDifferentTargetLoadoutSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "HandleDifferentTargetLoadoutSetBP");

	Params::UFortHeroLoadoutHeroPicker_HandleDifferentTargetLoadoutSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.GetCurrentlySelectedTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFortHeroLoadoutHeroPicker::GetCurrentlySelectedTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "GetCurrentlySelectedTab");

	Params::UFortHeroLoadoutHeroPicker_GetCurrentlySelectedTab_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortHeroLoadoutHeroPicker.AssociateFilterTabList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortTabListWidgetBase_Legacy*ExternalFilterTabList                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutHeroPicker::AssociateFilterTabList(class UFortTabListWidgetBase_Legacy* ExternalFilterTabList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "AssociateFilterTabList");

	Params::UFortHeroLoadoutHeroPicker_AssociateFilterTabList_Params Parms{};

	Parms.ExternalFilterTabList = ExternalFilterTabList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary
// (None)

class UClass* UFortHeroLoadoutHeroPickerFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutHeroPickerFunctionLibrary");

	return Clss;
}


// FortHeroLoadoutHeroPickerFunctionLibrary SaveTheWorldUI.Default__FortHeroLoadoutHeroPickerFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutHeroPickerFunctionLibrary* UFortHeroLoadoutHeroPickerFunctionLibrary::GetDefaultObj()
{
	static class UFortHeroLoadoutHeroPickerFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutHeroPickerFunctionLibrary*>(UFortHeroLoadoutHeroPickerFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortHeroLoadoutScreenBase
// (None)

class UClass* UFortHeroLoadoutScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutScreenBase");

	return Clss;
}


// FortHeroLoadoutScreenBase SaveTheWorldUI.Default__FortHeroLoadoutScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutScreenBase* UFortHeroLoadoutScreenBase::GetDefaultObj()
{
	static class UFortHeroLoadoutScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutScreenBase*>(UFortHeroLoadoutScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.ShowItemDetails
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UFortHeroLoadoutScreenBase::ShowItemDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "ShowItemDetails");

	Params::UFortHeroLoadoutScreenBase_ShowItemDetails_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.SetInputBindings
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ActivePickerBox                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CommanderSlot                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               NoneSlot                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CanClearAll                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutScreenBase::SetInputBindings(bool ActivePickerBox, bool CommanderSlot, bool NoneSlot, bool CanClearAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "SetInputBindings");

	Params::UFortHeroLoadoutScreenBase_SetInputBindings_Params Parms{};

	Parms.ActivePickerBox = ActivePickerBox;
	Parms.CommanderSlot = CommanderSlot;
	Parms.NoneSlot = NoneSlot;
	Parms.CanClearAll = CanClearAll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.SetHeroLoadout
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCampaignHeroLoadoutItem*HeroLoadout                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutScreenBase::SetHeroLoadout(class UFortCampaignHeroLoadoutItem* HeroLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "SetHeroLoadout");

	Params::UFortHeroLoadoutScreenBase_SetHeroLoadout_Params Parms{};

	Parms.HeroLoadout = HeroLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.PushItemInspectionScreen
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortItemInspectionMode Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemTileView*           CycleTileView                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReadOnly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowFavoriting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsTemporaryItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRarityUpgrading                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutScreenBase::PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "PushItemInspectionScreen");

	Params::UFortHeroLoadoutScreenBase_PushItemInspectionScreen_Params Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.CycleTileView = CycleTileView;
	Parms.bReadOnly = bReadOnly;
	Parms.bAllowFavoriting = bAllowFavoriting;
	Parms.bIsTemporaryItem = bIsTemporaryItem;
	Parms.bAllowRarityUpgrading = bAllowRarityUpgrading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.OnVaultItemsViewed
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class UFortItem*>           Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortHeroLoadoutScreenBase::OnVaultItemsViewed(TArray<class UFortItem*>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "OnVaultItemsViewed");

	Params::UFortHeroLoadoutScreenBase_OnVaultItemsViewed_Params Parms{};

	Parms.Items = Items;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.OnItemPreviewChanged
// (Final, Native, Protected)
// Parameters:
// class UActor*                      NewPrefab                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   NewItem                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutScreenBase::OnItemPreviewChanged(class UActor* NewPrefab, class UFortItem* NewItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "OnItemPreviewChanged");

	Params::UFortHeroLoadoutScreenBase_OnItemPreviewChanged_Params Parms{};

	Parms.NewPrefab = NewPrefab;
	Parms.NewItem = NewItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.IsLoadoutSwitchingAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHeroLoadoutScreenBase::IsLoadoutSwitchingAllowed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "IsLoadoutSwitchingAllowed");

	Params::UFortHeroLoadoutScreenBase_IsLoadoutSwitchingAllowed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HideItemDetails
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UFortHeroLoadoutScreenBase::HideItemDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HideItemDetails");

	Params::UFortHeroLoadoutScreenBase_HideItemDetails_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleToggleDescInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleToggleDescInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleToggleDescInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleToggleDescInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleShowAllStatsInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleShowAllStatsInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleShowAllStatsInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleShowAllStatsInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectRootSlotsInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleInspectRootSlotsInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleInspectRootSlotsInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleInspectRootSlotsInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectPickerInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleInspectPickerInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleInspectPickerInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleInspectPickerInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleHelpInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleHelpInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleHelpInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleHelpInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleDetailsInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleDetailsInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleDetailsInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleDetailsInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleCyclePickerInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleCyclePickerInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleCyclePickerInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleCyclePickerInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleClearAllInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleClearAllInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleClearAllInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleClearAllInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleBackInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutScreenBase::HandleBackInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "HandleBackInputAction");

	Params::UFortHeroLoadoutScreenBase_HandleBackInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.GetWidgetForFramingViewedItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UFortHeroLoadoutScreenBase::GetWidgetForFramingViewedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "GetWidgetForFramingViewedItem");

	Params::UFortHeroLoadoutScreenBase_GetWidgetForFramingViewedItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenBase.GetIsReadOnly
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHeroLoadoutScreenBase::GetIsReadOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "GetIsReadOnly");

	Params::UFortHeroLoadoutScreenBase_GetIsReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortHeroLoadoutScreenLegacy
// (None)

class UClass* UFortHeroLoadoutScreenLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutScreenLegacy");

	return Clss;
}


// FortHeroLoadoutScreenLegacy SaveTheWorldUI.Default__FortHeroLoadoutScreenLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutScreenLegacy* UFortHeroLoadoutScreenLegacy::GetDefaultObj()
{
	static class UFortHeroLoadoutScreenLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutScreenLegacy*>(UFortHeroLoadoutScreenLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroLoadoutScreenLegacy.SetHeroLoadout
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCampaignHeroLoadoutItem*HeroLoadout                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutScreenLegacy::SetHeroLoadout(class UFortCampaignHeroLoadoutItem* HeroLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenLegacy", "SetHeroLoadout");

	Params::UFortHeroLoadoutScreenLegacy_SetHeroLoadout_Params Parms{};

	Parms.HeroLoadout = HeroLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenLegacy.IsLoadoutSwitchingAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHeroLoadoutScreenLegacy::IsLoadoutSwitchingAllowed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenLegacy", "IsLoadoutSwitchingAllowed");

	Params::UFortHeroLoadoutScreenLegacy_IsLoadoutSwitchingAllowed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortHeroLoadoutScreenLegacy.GetIsReadOnly
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHeroLoadoutScreenLegacy::GetIsReadOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutScreenLegacy", "GetIsReadOnly");

	Params::UFortHeroLoadoutScreenLegacy_GetIsReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortHeroLoadoutSlotButton
// (None)

class UClass* UFortHeroLoadoutSlotButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutSlotButton");

	return Clss;
}


// FortHeroLoadoutSlotButton SaveTheWorldUI.Default__FortHeroLoadoutSlotButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutSlotButton* UFortHeroLoadoutSlotButton::GetDefaultObj()
{
	static class UFortHeroLoadoutSlotButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutSlotButton*>(UFortHeroLoadoutSlotButton::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction SaveTheWorldUI.FortHeroLoadoutSlotButton.OnRequestChangeHero__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortHeroLoadoutSlotButton*  SlotButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutSlotButton::OnRequestChangeHero__DelegateSignature(class UFortHeroLoadoutSlotButton* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutSlotButton", "OnRequestChangeHero__DelegateSignature");

	Params::UFortHeroLoadoutSlotButton_OnRequestChangeHero__DelegateSignature_Params Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SaveTheWorldUI.FortHeroLoadoutSlotButton.OnMenuOpenChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UFortHeroLoadoutSlotButton*  SlotButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsMenuOpen                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutSlotButton::OnMenuOpenChangedEvent__DelegateSignature(class UFortHeroLoadoutSlotButton* SlotButton, bool bIsMenuOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutSlotButton", "OnMenuOpenChangedEvent__DelegateSignature");

	Params::UFortHeroLoadoutSlotButton_OnMenuOpenChangedEvent__DelegateSignature_Params Parms{};

	Parms.SlotButton = SlotButton;
	Parms.bIsMenuOpen = bIsMenuOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutSlotButton.IsContextMenuOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortHeroLoadoutSlotButton::IsContextMenuOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutSlotButton", "IsContextMenuOpen");

	Params::UFortHeroLoadoutSlotButton_IsContextMenuOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortHeroLoadoutSlotButton.HandleMenuOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsMenuOpen                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutSlotButton::HandleMenuOpenChanged(bool bIsMenuOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutSlotButton", "HandleMenuOpenChanged");

	Params::UFortHeroLoadoutSlotButton_HandleMenuOpenChanged_Params Parms{};

	Parms.bIsMenuOpen = bIsMenuOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
// (None)

class UClass* UFortHeroLoadoutTeamPerkPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutTeamPerkPicker");

	return Clss;
}


// FortHeroLoadoutTeamPerkPicker SaveTheWorldUI.Default__FortHeroLoadoutTeamPerkPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutTeamPerkPicker* UFortHeroLoadoutTeamPerkPicker::GetDefaultObj()
{
	static class UFortHeroLoadoutTeamPerkPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutTeamPerkPicker*>(UFortHeroLoadoutTeamPerkPicker::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.SetTargetLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCampaignHeroLoadoutItem*LoadoutItem                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutTeamPerkPicker::SetTargetLoadout(class UFortCampaignHeroLoadoutItem* LoadoutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutTeamPerkPicker", "SetTargetLoadout");

	Params::UFortHeroLoadoutTeamPerkPicker_SetTargetLoadout_Params Parms{};

	Parms.LoadoutItem = LoadoutItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.HandleDifferentTargetLoadoutSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHeroLoadoutTeamPerkPicker::HandleDifferentTargetLoadoutSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutTeamPerkPicker", "HandleDifferentTargetLoadoutSetBP");

	Params::UFortHeroLoadoutTeamPerkPicker_HandleDifferentTargetLoadoutSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortCampaignTabsScreenBase
// (None)

class UClass* UFortCampaignTabsScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCampaignTabsScreenBase");

	return Clss;
}


// FortCampaignTabsScreenBase SaveTheWorldUI.Default__FortCampaignTabsScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCampaignTabsScreenBase* UFortCampaignTabsScreenBase::GetDefaultObj()
{
	static class UFortCampaignTabsScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCampaignTabsScreenBase*>(UFortCampaignTabsScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase.UpdateItemShopButtonBang
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tab                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCampaignTabsScreenBase::UpdateItemShopButtonBang(class FName Tab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "UpdateItemShopButtonBang");

	Params::UFortCampaignTabsScreenBase_UpdateItemShopButtonBang_Params Parms{};

	Parms.Tab = Tab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase.ShouldShowItemShopBang
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCampaignTabsScreenBase::ShouldShowItemShopBang()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "ShouldShowItemShopBang");

	Params::UFortCampaignTabsScreenBase_ShouldShowItemShopBang_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCampaignTabsScreenBase::HandleMainTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "HandleMainTabSelected");

	Params::UFortCampaignTabsScreenBase_HandleMainTabSelected_Params Parms{};

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCampaignTabsScreenBase::HandleMainTabCreated(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "HandleMainTabCreated");

	Params::UFortCampaignTabsScreenBase_HandleMainTabCreated_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase.HandleFeatureStateChanged
// (Final, Native, Protected)
// Parameters:
// enum class EFortUIFeature          ChangedFeature                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortUIFeatureState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortUIFeatureStateReasonReason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCampaignTabsScreenBase::HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "HandleFeatureStateChanged");

	Params::UFortCampaignTabsScreenBase_HandleFeatureStateChanged_Params Parms{};

	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase.ConstructTabs
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortCampaignTabsScreenBase::ConstructTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "ConstructTabs");

	Params::UFortCampaignTabsScreenBase_ConstructTabs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
// (None)

class UClass* UFortCampaignTabsScreenBase_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCampaignTabsScreenBase_Legacy");

	return Clss;
}


// FortCampaignTabsScreenBase_Legacy SaveTheWorldUI.Default__FortCampaignTabsScreenBase_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCampaignTabsScreenBase_Legacy* UFortCampaignTabsScreenBase_Legacy::GetDefaultObj()
{
	static class UFortCampaignTabsScreenBase_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCampaignTabsScreenBase_Legacy*>(UFortCampaignTabsScreenBase_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCampaignTabsScreenBase_Legacy::HandleMainTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "HandleMainTabSelected");

	Params::UFortCampaignTabsScreenBase_Legacy_HandleMainTabSelected_Params Parms{};

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCampaignTabsScreenBase_Legacy::HandleMainTabCreated(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "HandleMainTabCreated");

	Params::UFortCampaignTabsScreenBase_Legacy_HandleMainTabCreated_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureStateChanged
// (Final, Native, Protected)
// Parameters:
// enum class EFortUIFeature          ChangedFeature                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortUIFeatureState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortUIFeatureStateReasonReason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCampaignTabsScreenBase_Legacy::HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "HandleFeatureStateChanged");

	Params::UFortCampaignTabsScreenBase_Legacy_HandleFeatureStateChanged_Params Parms{};

	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureNavigateRequest
// (Final, Native, Protected)
// Parameters:
// enum class EFortUIFeature          Feature                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCampaignTabsScreenBase_Legacy::HandleFeatureNavigateRequest(enum class EFortUIFeature Feature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "HandleFeatureNavigateRequest");

	Params::UFortCampaignTabsScreenBase_Legacy_HandleFeatureNavigateRequest_Params Parms{};

	Parms.Feature = Feature;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.ConstructTabs
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortCampaignTabsScreenBase_Legacy::ConstructTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "ConstructTabs");

	Params::UFortCampaignTabsScreenBase_Legacy_ConstructTabs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.StoreCardObject
// (None)

class UClass* UStoreCardObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreCardObject");

	return Clss;
}


// StoreCardObject SaveTheWorldUI.Default__StoreCardObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UStoreCardObject* UStoreCardObject::GetDefaultObj()
{
	static class UStoreCardObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreCardObject*>(UStoreCardObject::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortStoreSummary
// (None)

class UClass* UFortStoreSummary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSummary");

	return Clss;
}


// FortStoreSummary SaveTheWorldUI.Default__FortStoreSummary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSummary* UFortStoreSummary::GetDefaultObj()
{
	static class UFortStoreSummary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSummary*>(UFortStoreSummary::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortStoreSummary.ShowMulchConfirmationModal
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortStoreSummary::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "ShowMulchConfirmationModal");

	Params::UFortStoreSummary_ShowMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.SetIsInChoiceSelectionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InIsInChoiceSelectionMode                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummary::SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "SetIsInChoiceSelectionMode");

	Params::UFortStoreSummary_SetIsInChoiceSelectionMode_Params Parms{};

	Parms.InIsInChoiceSelectionMode = InIsInChoiceSelectionMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.SetCards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCard>               Cards                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortStoreSummary::SetCards(TArray<struct FCard>& Cards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "SetCards");

	Params::UFortStoreSummary_SetCards_Params Parms{};

	Parms.Cards = Cards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.NotifyPanelDeactivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortStoreSummary::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "NotifyPanelDeactivated");

	Params::UFortStoreSummary_NotifyPanelDeactivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.NotifyPanelActivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortStoreSummary::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "NotifyPanelActivated");

	Params::UFortStoreSummary_NotifyPanelActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.MarkDefaultItemsForMulch
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortStoreSummary::MarkDefaultItemsForMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "MarkDefaultItemsForMulch");

	Params::UFortStoreSummary_MarkDefaultItemsForMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.HideMulchConfirmationModal
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortStoreSummary::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "HideMulchConfirmationModal");

	Params::UFortStoreSummary_HideMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummary::HandleContextMenuOpenChangedBP(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "HandleContextMenuOpenChangedBP");

	Params::UFortStoreSummary_HandleContextMenuOpenChangedBP_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummary::HandleContextMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "HandleContextMenuOpenChanged");

	Params::UFortStoreSummary_HandleContextMenuOpenChanged_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.GetIsInChoiceSelectionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortStoreSummary::GetIsInChoiceSelectionMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "GetIsInChoiceSelectionMode");

	Params::UFortStoreSummary_GetIsInChoiceSelectionMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortStoreSummary.FinalizeFavoriteStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortStoreSummary::FinalizeFavoriteStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "FinalizeFavoriteStatus");

	Params::UFortStoreSummary_FinalizeFavoriteStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary.CloseSummaryScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortStoreSummary::CloseSummaryScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary", "CloseSummaryScreen");

	Params::UFortStoreSummary_CloseSummaryScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortStoreSummaryItemButton
// (None)

class UClass* UFortStoreSummaryItemButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSummaryItemButton");

	return Clss;
}


// FortStoreSummaryItemButton SaveTheWorldUI.Default__FortStoreSummaryItemButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSummaryItemButton* UFortStoreSummaryItemButton::GetDefaultObj()
{
	static class UFortStoreSummaryItemButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSummaryItemButton*>(UFortStoreSummaryItemButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortStoreSummaryItemButton.UpdateMulchListWithItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAddingItem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemButton::UpdateMulchListWithItem(bool bAddingItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "UpdateMulchListWithItem");

	Params::UFortStoreSummaryItemButton_UpdateMulchListWithItem_Params Parms{};

	Parms.bAddingItem = bAddingItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton.SetStoreCardObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStoreCardObject*            CardObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemButton::SetStoreCardObject(class UStoreCardObject* CardObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "SetStoreCardObject");

	Params::UFortStoreSummaryItemButton_SetStoreCardObject_Params Parms{};

	Parms.CardObject = CardObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton.HandleMenuOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemButton::HandleMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "HandleMenuOpenChanged");

	Params::UFortStoreSummaryItemButton_HandleMenuOpenChanged_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton.HandleItemMulchStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortStoreSummaryItemButton::HandleItemMulchStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "HandleItemMulchStateChanged");

	Params::UFortStoreSummaryItemButton_HandleItemMulchStateChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton.GetStoreCardObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStoreCardObject*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStoreCardObject* UFortStoreSummaryItemButton::GetStoreCardObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "GetStoreCardObject");

	Params::UFortStoreSummaryItemButton_GetStoreCardObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton.GetPopupMenu
// (Final, Native, Private)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UFortStoreSummaryItemButton::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "GetPopupMenu");

	Params::UFortStoreSummaryItemButton_GetPopupMenu_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
// (None)

class UClass* UFortStoreSummaryItemButton_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSummaryItemButton_Legacy");

	return Clss;
}


// FortStoreSummaryItemButton_Legacy SaveTheWorldUI.Default__FortStoreSummaryItemButton_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSummaryItemButton_Legacy* UFortStoreSummaryItemButton_Legacy::GetDefaultObj()
{
	static class UFortStoreSummaryItemButton_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSummaryItemButton_Legacy*>(UFortStoreSummaryItemButton_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.UpdateMulchListWithItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAddingItem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemButton_Legacy::UpdateMulchListWithItem(bool bAddingItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "UpdateMulchListWithItem");

	Params::UFortStoreSummaryItemButton_Legacy_UpdateMulchListWithItem_Params Parms{};

	Parms.bAddingItem = bAddingItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.SetStoreCardObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStoreCardObject*            CardObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemButton_Legacy::SetStoreCardObject(class UStoreCardObject* CardObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "SetStoreCardObject");

	Params::UFortStoreSummaryItemButton_Legacy_SetStoreCardObject_Params Parms{};

	Parms.CardObject = CardObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.OnContextMenuOpenChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemButton_Legacy::OnContextMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "OnContextMenuOpenChangedEvent__DelegateSignature");

	Params::UFortStoreSummaryItemButton_Legacy_OnContextMenuOpenChangedEvent__DelegateSignature_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleMenuOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemButton_Legacy::HandleMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "HandleMenuOpenChanged");

	Params::UFortStoreSummaryItemButton_Legacy_HandleMenuOpenChanged_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleItemMulchStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortStoreSummaryItemButton_Legacy::HandleItemMulchStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "HandleItemMulchStateChanged");

	Params::UFortStoreSummaryItemButton_Legacy_HandleItemMulchStateChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetStoreCardObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStoreCardObject*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStoreCardObject* UFortStoreSummaryItemButton_Legacy::GetStoreCardObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "GetStoreCardObject");

	Params::UFortStoreSummaryItemButton_Legacy_GetStoreCardObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetPopupMenu
// (Final, Native, Private)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UFortStoreSummaryItemButton_Legacy::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "GetPopupMenu");

	Params::UFortStoreSummaryItemButton_Legacy_GetPopupMenu_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu
// (None)

class UClass* UFortStoreSummaryItemPopupMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSummaryItemPopupMenu");

	return Clss;
}


// FortStoreSummaryItemPopupMenu SaveTheWorldUI.Default__FortStoreSummaryItemPopupMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSummaryItemPopupMenu* UFortStoreSummaryItemPopupMenu::GetDefaultObj()
{
	static class UFortStoreSummaryItemPopupMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSummaryItemPopupMenu*>(UFortStoreSummaryItemPopupMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.MulchItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortStoreSummaryItemPopupMenu::MulchItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu", "MulchItem");

	Params::UFortStoreSummaryItemPopupMenu_MulchItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.HandleItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAmmoChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIngredientsChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemPopupMenu::HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu", "HandleItemChanged");

	Params::UFortStoreSummaryItemPopupMenu_HandleItemChanged_Params Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu.GetHostButton
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortStoreSummaryItemButton* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortStoreSummaryItemButton* UFortStoreSummaryItemPopupMenu::GetHostButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu", "GetHostButton");

	Params::UFortStoreSummaryItemPopupMenu_GetHostButton_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy
// (None)

class UClass* UFortStoreSummaryItemPopupMenu_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSummaryItemPopupMenu_Legacy");

	return Clss;
}


// FortStoreSummaryItemPopupMenu_Legacy SaveTheWorldUI.Default__FortStoreSummaryItemPopupMenu_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSummaryItemPopupMenu_Legacy* UFortStoreSummaryItemPopupMenu_Legacy::GetDefaultObj()
{
	static class UFortStoreSummaryItemPopupMenu_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSummaryItemPopupMenu_Legacy*>(UFortStoreSummaryItemPopupMenu_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.MulchItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortStoreSummaryItemPopupMenu_Legacy::MulchItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu_Legacy", "MulchItem");

	Params::UFortStoreSummaryItemPopupMenu_Legacy_MulchItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.HandleItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAmmoChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIngredientsChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummaryItemPopupMenu_Legacy::HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu_Legacy", "HandleItemChanged");

	Params::UFortStoreSummaryItemPopupMenu_Legacy_HandleItemChanged_Params Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy.GetHostButton
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortStoreSummaryItemButton_Legacy*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortStoreSummaryItemButton_Legacy* UFortStoreSummaryItemPopupMenu_Legacy::GetHostButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu_Legacy", "GetHostButton");

	Params::UFortStoreSummaryItemPopupMenu_Legacy_GetHostButton_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortStoreSummary_Legacy
// (None)

class UClass* UFortStoreSummary_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSummary_Legacy");

	return Clss;
}


// FortStoreSummary_Legacy SaveTheWorldUI.Default__FortStoreSummary_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSummary_Legacy* UFortStoreSummary_Legacy::GetDefaultObj()
{
	static class UFortStoreSummary_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSummary_Legacy*>(UFortStoreSummary_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.ShowMulchConfirmationModal
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortStoreSummary_Legacy::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "ShowMulchConfirmationModal");

	Params::UFortStoreSummary_Legacy_ShowMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.SetIsInChoiceSelectionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InIsInChoiceSelectionMode                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummary_Legacy::SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "SetIsInChoiceSelectionMode");

	Params::UFortStoreSummary_Legacy_SetIsInChoiceSelectionMode_Params Parms{};

	Parms.InIsInChoiceSelectionMode = InIsInChoiceSelectionMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.SetCards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCard>               Cards                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortStoreSummary_Legacy::SetCards(TArray<struct FCard>& Cards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "SetCards");

	Params::UFortStoreSummary_Legacy_SetCards_Params Parms{};

	Parms.Cards = Cards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelDeactivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortStoreSummary_Legacy::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "NotifyPanelDeactivated");

	Params::UFortStoreSummary_Legacy_NotifyPanelDeactivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelActivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortStoreSummary_Legacy::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "NotifyPanelActivated");

	Params::UFortStoreSummary_Legacy_NotifyPanelActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.MarkDefaultItemsForMulch
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortStoreSummary_Legacy::MarkDefaultItemsForMulch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "MarkDefaultItemsForMulch");

	Params::UFortStoreSummary_Legacy_MarkDefaultItemsForMulch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.HideMulchConfirmationModal
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortStoreSummary_Legacy::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "HideMulchConfirmationModal");

	Params::UFortStoreSummary_Legacy_HideMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummary_Legacy::HandleContextMenuOpenChangedBP(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "HandleContextMenuOpenChangedBP");

	Params::UFortStoreSummary_Legacy_HandleContextMenuOpenChangedBP_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStoreSummary_Legacy::HandleContextMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "HandleContextMenuOpenChanged");

	Params::UFortStoreSummary_Legacy_HandleContextMenuOpenChanged_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.GetIsInChoiceSelectionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortStoreSummary_Legacy::GetIsInChoiceSelectionMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "GetIsInChoiceSelectionMode");

	Params::UFortStoreSummary_Legacy_GetIsInChoiceSelectionMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.FinalizeFavoriteStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortStoreSummary_Legacy::FinalizeFavoriteStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "FinalizeFavoriteStatus");

	Params::UFortStoreSummary_Legacy_FinalizeFavoriteStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStoreSummary_Legacy.CloseSummaryScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortStoreSummary_Legacy::CloseSummaryScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "CloseSummaryScreen");

	Params::UFortStoreSummary_Legacy_CloseSummaryScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
// (None)

class UClass* UFortHeroLoadoutGadgetTileBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutGadgetTileBase");

	return Clss;
}


// FortHeroLoadoutGadgetTileBase SaveTheWorldUI.Default__FortHeroLoadoutGadgetTileBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutGadgetTileBase* UFortHeroLoadoutGadgetTileBase::GetDefaultObj()
{
	static class UFortHeroLoadoutGadgetTileBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutGadgetTileBase*>(UFortHeroLoadoutGadgetTileBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.SetGadgetToRepresent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortGadgetItemDefinition*   GadgetItemDefinition                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutGadgetTileBase::SetGadgetToRepresent(class UFortGadgetItemDefinition* GadgetItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutGadgetTileBase", "SetGadgetToRepresent");

	Params::UFortHeroLoadoutGadgetTileBase_SetGadgetToRepresent_Params Parms{};

	Parms.GadgetItemDefinition = GadgetItemDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.OnGadgetUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsValidGadget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutGadgetTileBase::OnGadgetUpdated(bool bIsValidGadget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutGadgetTileBase", "OnGadgetUpdated");

	Params::UFortHeroLoadoutGadgetTileBase_OnGadgetUpdated_Params Parms{};

	Parms.bIsValidGadget = bIsValidGadget;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
// (None)

class UClass* UFortHeroLoadoutInGameScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutInGameScreenBase");

	return Clss;
}


// FortHeroLoadoutInGameScreenBase SaveTheWorldUI.Default__FortHeroLoadoutInGameScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutInGameScreenBase* UFortHeroLoadoutInGameScreenBase::GetDefaultObj()
{
	static class UFortHeroLoadoutInGameScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutInGameScreenBase*>(UFortHeroLoadoutInGameScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.OnPerkWidgetAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UGridSlot*                   GridSlot                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutInGameScreenBase::OnPerkWidgetAdded(class UGridSlot* GridSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutInGameScreenBase", "OnPerkWidgetAdded");

	Params::UFortHeroLoadoutInGameScreenBase_OnPerkWidgetAdded_Params Parms{};

	Parms.GridSlot = GridSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.GetGadgetDefinitionBySlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortGadgetItemDefinition*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortGadgetItemDefinition* UFortHeroLoadoutInGameScreenBase::GetGadgetDefinitionBySlot(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutInGameScreenBase", "GetGadgetDefinitionBySlot");

	Params::UFortHeroLoadoutInGameScreenBase_GetGadgetDefinitionBySlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortHeroLoadoutPerkTileBase
// (None)

class UClass* UFortHeroLoadoutPerkTileBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroLoadoutPerkTileBase");

	return Clss;
}


// FortHeroLoadoutPerkTileBase SaveTheWorldUI.Default__FortHeroLoadoutPerkTileBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroLoadoutPerkTileBase* UFortHeroLoadoutPerkTileBase::GetDefaultObj()
{
	static class UFortHeroLoadoutPerkTileBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroLoadoutPerkTileBase*>(UFortHeroLoadoutPerkTileBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroLoadoutPerkTileBase.OnPerkInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortHeroPerkDisplayTypeInPerkType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowWarning                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroLoadoutPerkTileBase::OnPerkInitialized(enum class EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroLoadoutPerkTileBase", "OnPerkInitialized");

	Params::UFortHeroLoadoutPerkTileBase_OnPerkInitialized_Params Parms{};

	Parms.InPerkType = InPerkType;
	Parms.bActive = bActive;
	Parms.bShowWarning = bShowWarning;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortAlterationModOptinScreenBase
// (None)

class UClass* UFortAlterationModOptinScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAlterationModOptinScreenBase");

	return Clss;
}


// FortAlterationModOptinScreenBase SaveTheWorldUI.Default__FortAlterationModOptinScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAlterationModOptinScreenBase* UFortAlterationModOptinScreenBase::GetDefaultObj()
{
	static class UFortAlterationModOptinScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAlterationModOptinScreenBase*>(UFortAlterationModOptinScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.SetupItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationModOptinScreenBase::SetupItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "SetupItem");

	Params::UFortAlterationModOptinScreenBase_SetupItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.RequestClose
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bCancelled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationModOptinScreenBase::RequestClose(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "RequestClose");

	Params::UFortAlterationModOptinScreenBase_RequestClose_Params Parms{};

	Parms.bCancelled = bCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.OnSetupItem
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortAlterationModOptinScreenBase::OnSetupItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "OnSetupItem");

	Params::UFortAlterationModOptinScreenBase_OnSetupItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.OnItemConversionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortAlterationModOptinScreenBase::OnItemConversionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "OnItemConversionComplete");

	Params::UFortAlterationModOptinScreenBase_OnItemConversionComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationModOptinScreenBase.ConvertItemAlterations
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortAlterationModOptinScreenBase::ConvertItemAlterations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "ConvertItemAlterations");

	Params::UFortAlterationModOptinScreenBase_ConvertItemAlterations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortAlterationModScreenBase
// (None)

class UClass* UFortAlterationModScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAlterationModScreenBase");

	return Clss;
}


// FortAlterationModScreenBase SaveTheWorldUI.Default__FortAlterationModScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAlterationModScreenBase* UFortAlterationModScreenBase::GetDefaultObj()
{
	static class UFortAlterationModScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAlterationModScreenBase*>(UFortAlterationModScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortAlterationModScreenBase.SetItemForAlterationsModding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAlterableItem*          InAlterableItem                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationModScreenBase::SetItemForAlterationsModding(class UFortAlterableItem* InAlterableItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "SetItemForAlterationsModding");

	Params::UFortAlterationModScreenBase_SetItemForAlterationsModding_Params Parms{};

	Parms.InAlterableItem = InAlterableItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.RefreshItemAndAlterationsBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortAlterationModScreenBase::RefreshItemAndAlterationsBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "RefreshItemAndAlterationsBP");

	Params::UFortAlterationModScreenBase_RefreshItemAndAlterationsBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.OnItemSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               SelectedSlot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationModScreenBase::OnItemSlotChanged(bool SelectedSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnItemSlotChanged");

	Params::UFortAlterationModScreenBase_OnItemSlotChanged_Params Parms{};

	Parms.SelectedSlot = SelectedSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationOptionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationOption*       CurrentAlterationOption                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationModScreenBase::OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnAlterationOptionChanged");

	Params::UFortAlterationModScreenBase_OnAlterationOptionChanged_Params Parms{};

	Parms.CurrentAlterationOption = CurrentAlterationOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationSucess
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ModifiedSlotIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationModScreenBase::OnAlterationModificationSucess(int32 ModifiedSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnAlterationModificationSucess");

	Params::UFortAlterationModScreenBase_OnAlterationModificationSucess_Params Parms{};

	Parms.ModifiedSlotIndex = ModifiedSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortAlterationModScreenBase::OnAlterationModificationStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnAlterationModificationStarted");

	Params::UFortAlterationModScreenBase_OnAlterationModificationStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortAlterationModScreenBase::OnAlterationModificationCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnAlterationModificationCompleted");

	Params::UFortAlterationModScreenBase_OnAlterationModificationCompleted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.HandleBackAction
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationModScreenBase::HandleBackAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "HandleBackAction");

	Params::UFortAlterationModScreenBase_HandleBackAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.ConfirmSelection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortAlterationModScreenBase::ConfirmSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "ConfirmSelection");

	Params::UFortAlterationModScreenBase_ConfirmSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.CancelSelection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortAlterationModScreenBase::CancelSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "CancelSelection");

	Params::UFortAlterationModScreenBase_CancelSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAlterationModScreenBase.AreIngredientRequirementsMent
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFortItemQuantityPair>RequiredIngredients                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAlterationModScreenBase::AreIngredientRequirementsMent(TArray<struct FFortItemQuantityPair>& RequiredIngredients)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationModScreenBase", "AreIngredientRequirementsMent");

	Params::UFortAlterationModScreenBase_AreIngredientRequirementsMent_Params Parms{};

	Parms.RequiredIngredients = RequiredIngredients;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortItemInspectionScreen
// (None)

class UClass* UFortItemInspectionScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemInspectionScreen");

	return Clss;
}


// FortItemInspectionScreen SaveTheWorldUI.Default__FortItemInspectionScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemInspectionScreen* UFortItemInspectionScreen::GetDefaultObj()
{
	static class UFortItemInspectionScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemInspectionScreen*>(UFortItemInspectionScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemInspectionScreen.SetItemToRepresent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectionScreen::SetItemToRepresent(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "SetItemToRepresent");

	Params::UFortItemInspectionScreen_SetItemToRepresent_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.SetInspectionMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EFortItemInspectionMode NewInspectMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectionScreen::SetInspectionMode(enum class EFortItemInspectionMode NewInspectMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "SetInspectionMode");

	Params::UFortItemInspectionScreen_SetInspectionMode_Params Parms{};

	Parms.NewInspectMode = NewInspectMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.SetAttemptingConversion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsAttemptingConversion                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectionScreen::SetAttemptingConversion(bool bIsAttemptingConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "SetAttemptingConversion");

	Params::UFortItemInspectionScreen_SetAttemptingConversion_Params Parms{};

	Parms.bIsAttemptingConversion = bIsAttemptingConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.OpenItemInspect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortItemInspectionMode Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ShouldAllowUpgrading                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ShouldAllowEvolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ShouldAllowFavorite                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsTemporaryItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRarityUpgrading                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QuantityOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectionScreen::OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32 QuantityOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "OpenItemInspect");

	Params::UFortItemInspectionScreen_OpenItemInspect_Params Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.ShouldAllowUpgrading = ShouldAllowUpgrading;
	Parms.ShouldAllowEvolution = ShouldAllowEvolution;
	Parms.ShouldAllowFavorite = ShouldAllowFavorite;
	Parms.IsTemporaryItem = IsTemporaryItem;
	Parms.bAllowRarityUpgrading = bAllowRarityUpgrading;
	Parms.QuantityOverride = QuantityOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.IsItemSlottedInCollectionBook
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*                   Item                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemInspectionScreen::IsItemSlottedInCollectionBook(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "IsItemSlottedInCollectionBook");

	Params::UFortItemInspectionScreen_IsItemSlottedInCollectionBook_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemInspectionScreen::HandleItemToInspectDestroyedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleItemToInspectDestroyedBP");

	Params::UFortItemInspectionScreen_HandleItemToInspectDestroyedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyed
// (Final, Native, Protected)
// Parameters:

void UFortItemInspectionScreen::HandleItemToInspectDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleItemToInspectDestroyed");

	Params::UFortItemInspectionScreen_HandleItemToInspectDestroyed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasFavoritedChanged                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectionScreen::HandleItemToInspectChangedBP(bool bWasFavoritedChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleItemToInspectChangedBP");

	Params::UFortItemInspectionScreen_HandleItemToInspectChangedBP_Params Parms{};

	Parms.bWasFavoritedChanged = bWasFavoritedChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bItemChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAmmoChanged                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIngredientsChanged                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectionScreen::HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleItemToInspectChanged");

	Params::UFortItemInspectionScreen_HandleItemToInspectChanged_Params Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.HandleIsPreviewingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemInspectionScreen::HandleIsPreviewingChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleIsPreviewingChanged");

	Params::UFortItemInspectionScreen_HandleIsPreviewingChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentItemToInspectSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemInspectionScreen::HandleDifferentItemToInspectSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleDifferentItemToInspectSetBP");

	Params::UFortItemInspectionScreen_HandleDifferentItemToInspectSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentInspectionModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemInspectionScreen::HandleDifferentInspectionModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleDifferentInspectionModeSetBP");

	Params::UFortItemInspectionScreen_HandleDifferentInspectionModeSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemInspectionScreen.GetRefundResultItem
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAccountItem*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAccountItem* UFortItemInspectionScreen::GetRefundResultItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "GetRefundResultItem");

	Params::UFortItemInspectionScreen_GetRefundResultItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.GetRefundDescriptionText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortItemInspectionScreen::GetRefundDescriptionText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "GetRefundDescriptionText");

	Params::UFortItemInspectionScreen_GetRefundDescriptionText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.GetItemQuantityOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortItemInspectionScreen::GetItemQuantityOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "GetItemQuantityOverride");

	Params::UFortItemInspectionScreen_GetItemQuantityOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.GetCycleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortItemInspectCycleWidget* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItemInspectCycleWidget* UFortItemInspectionScreen::GetCycleWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "GetCycleWidget");

	Params::UFortItemInspectionScreen_GetCycleWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.DoesItemHaveLegacyAlterations
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortItemInspectionScreen::DoesItemHaveLegacyAlterations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "DoesItemHaveLegacyAlterations");

	Params::UFortItemInspectionScreen_DoesItemHaveLegacyAlterations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortItemInspectionScreen.DoAlterationModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemInspectionScreen::DoAlterationModification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectionScreen", "DoAlterationModification");

	Params::UFortItemInspectionScreen_DoAlterationModification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortItemInspectCycleWidget
// (None)

class UClass* UFortItemInspectCycleWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemInspectCycleWidget");

	return Clss;
}


// FortItemInspectCycleWidget SaveTheWorldUI.Default__FortItemInspectCycleWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemInspectCycleWidget* UFortItemInspectCycleWidget::GetDefaultObj()
{
	static class UFortItemInspectCycleWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemInspectCycleWidget*>(UFortItemInspectCycleWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortItemInspectCycleWidget.SetupActionHandlers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemInspectCycleWidget::SetupActionHandlers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SetupActionHandlers");

	Params::UFortItemInspectCycleWidget_SetupActionHandlers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectCycleWidget.SetOwningItemInspectScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItemInspectionScreen*   ItemInspect                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectCycleWidget::SetOwningItemInspectScreen(class UFortItemInspectionScreen* ItemInspect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SetOwningItemInspectScreen");

	Params::UFortItemInspectCycleWidget_SetOwningItemInspectScreen_Params Parms{};

	Parms.ItemInspect = ItemInspect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectCycleWidget.SetItemToRepresent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*                   NewItemToRepresent                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectCycleWidget::SetItemToRepresent(class UFortItem* NewItemToRepresent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SetItemToRepresent");

	Params::UFortItemInspectCycleWidget_SetItemToRepresent_Params Parms{};

	Parms.NewItemToRepresent = NewItemToRepresent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectPreviousItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemInspectCycleWidget::SelectPreviousItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SelectPreviousItem");

	Params::UFortItemInspectCycleWidget_SelectPreviousItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectNextItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortItemInspectCycleWidget::SelectNextItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SelectNextItem");

	Params::UFortItemInspectCycleWidget_SelectNextItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectCycleWidget.SelectItemWithOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectCycleWidget::SelectItemWithOffset(int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SelectItemWithOffset");

	Params::UFortItemInspectCycleWidget_SelectItemWithOffset_Params Parms{};

	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortItemInspectCycleWidget.OnItemCycled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   OldItem                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   NewItem                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OffsetFromPreviousItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemInspectCycleWidget::OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "OnItemCycled");

	Params::UFortItemInspectCycleWidget_OnItemCycled_Params Parms{};

	Parms.OldItem = OldItem;
	Parms.NewItem = NewItem;
	Parms.OffsetFromPreviousItem = OffsetFromPreviousItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortItemInspectCycleWidget.GetItemWithOffset_BP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              IndexOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItem* UFortItemInspectCycleWidget::GetItemWithOffset_BP(int32 IndexOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "GetItemWithOffset_BP");

	Params::UFortItemInspectCycleWidget_GetItemWithOffset_BP_Params Parms{};

	Parms.IndexOffset = IndexOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortAlterationOption
// (None)

class UClass* UFortAlterationOption::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAlterationOption");

	return Clss;
}


// FortAlterationOption SaveTheWorldUI.Default__FortAlterationOption
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAlterationOption* UFortAlterationOption::GetDefaultObj()
{
	static class UFortAlterationOption* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAlterationOption*>(UFortAlterationOption::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortAlterationOption.Setup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAlterationOption           InAlterationOption                                               (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EFortAlterationOptionTypeInAlterationOptionType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationOption::Setup(struct FAlterationOption* InAlterationOption, enum class EFortAlterationOptionType InAlterationOptionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOption", "Setup");

	Params::UFortAlterationOption_Setup_Params Parms{};

	Parms.InAlterationOptionType = InAlterationOptionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAlterationOption != nullptr)
		*InAlterationOption = Parms.InAlterationOption;

}


// Function SaveTheWorldUI.FortAlterationOption.OnSetup
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAlterationOption::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOption", "OnSetup");

	Params::UFortAlterationOption_OnSetup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationOption.GetRequiredIngredients
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFortItemQuantityPair>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FFortItemQuantityPair> UFortAlterationOption::GetRequiredIngredients()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOption", "GetRequiredIngredients");

	Params::UFortAlterationOption_GetRequiredIngredients_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortAlterationOption.GetNextPipCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              MaxPipCount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAlterationOption::GetNextPipCount(float MaxPipCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOption", "GetNextPipCount");

	Params::UFortAlterationOption_GetNextPipCount_Params Parms{};

	Parms.MaxPipCount = MaxPipCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortAlterationOption.GetCurrentPipCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              MaxPipCount                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAlterationOption::GetCurrentPipCount(float MaxPipCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOption", "GetCurrentPipCount");

	Params::UFortAlterationOption_GetCurrentPipCount_Params Parms{};

	Parms.MaxPipCount = MaxPipCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortAlterationOption.GetAlterationOptionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortAlterationOptionTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortAlterationOptionType UFortAlterationOption::GetAlterationOptionType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOption", "GetAlterationOptionType");

	Params::UFortAlterationOption_GetAlterationOptionType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortAlterationOption.GetAlterationDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAlterationItemDefinition*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAlterationItemDefinition* UFortAlterationOption::GetAlterationDefinition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOption", "GetAlterationDefinition");

	Params::UFortAlterationOption_GetAlterationDefinition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortAlterationOptionsBase
// (None)

class UClass* UFortAlterationOptionsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAlterationOptionsBase");

	return Clss;
}


// FortAlterationOptionsBase SaveTheWorldUI.Default__FortAlterationOptionsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAlterationOptionsBase* UFortAlterationOptionsBase::GetDefaultObj()
{
	static class UFortAlterationOptionsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAlterationOptionsBase*>(UFortAlterationOptionsBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortAlterationOptionsBase.ProcessAlterationOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIntroAlterations                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationOptionsBase::ProcessAlterationOptions(bool bIntroAlterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOptionsBase", "ProcessAlterationOptions");

	Params::UFortAlterationOptionsBase_ProcessAlterationOptions_Params Parms{};

	Parms.bIntroAlterations = bIntroAlterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAlterationOptionsBase.OnItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIntroAlterations                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationOptionsBase::OnItemChanged(bool bIntroAlterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOptionsBase", "OnItemChanged");

	Params::UFortAlterationOptionsBase_OnItemChanged_Params Parms{};

	Parms.bIntroAlterations = bIntroAlterations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationOptionsBase.OnGenerateOption
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortAlterationOptionTypeOptionType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAlterationOption*       OptionWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationOptionsBase::OnGenerateOption(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOptionsBase", "OnGenerateOption");

	Params::UFortAlterationOptionsBase_OnGenerateOption_Params Parms{};

	Parms.OptionType = OptionType;
	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortAlterationOptionsBase.IsValidAlterationSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAlterationOptionsBase::IsValidAlterationSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOptionsBase", "IsValidAlterationSlot");

	Params::UFortAlterationOptionsBase_IsValidAlterationSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionSelected
// (Final, Native, Public)
// Parameters:
// class UCommonButtonLegacy*         AlterationOptionButton                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GroupIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationOptionsBase::HandleAlterationsOptionSelected(class UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOptionsBase", "HandleAlterationsOptionSelected");

	Params::UFortAlterationOptionsBase_HandleAlterationsOptionSelected_Params Parms{};

	Parms.AlterationOptionButton = AlterationOptionButton;
	Parms.GroupIndex = GroupIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionHovered
// (Final, Native, Public)
// Parameters:
// class UCommonButtonLegacy*         AlterationOptionButton                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GroupIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAlterationOptionsBase::HandleAlterationsOptionHovered(class UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOptionsBase", "HandleAlterationsOptionHovered");

	Params::UFortAlterationOptionsBase_HandleAlterationsOptionHovered_Params Parms{};

	Parms.AlterationOptionButton = AlterationOptionButton;
	Parms.GroupIndex = GroupIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortAlterationOptionsBase.DoAlterationOptionsExist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortAlterationOptionTypeOptionType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAlterationOptionsBase::DoAlterationOptionsExist(enum class EFortAlterationOptionType OptionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAlterationOptionsBase", "DoAlterationOptionsExist");

	Params::UFortAlterationOptionsBase_DoAlterationOptionsExist_Params Parms{};

	Parms.OptionType = OptionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortMissionActivationInfoSTW
// (None)

class UClass* UFortMissionActivationInfoSTW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMissionActivationInfoSTW");

	return Clss;
}


// FortMissionActivationInfoSTW SaveTheWorldUI.Default__FortMissionActivationInfoSTW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMissionActivationInfoSTW* UFortMissionActivationInfoSTW::GetDefaultObj()
{
	static class UFortMissionActivationInfoSTW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMissionActivationInfoSTW*>(UFortMissionActivationInfoSTW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.TimeSecondsToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortMissionActivationInfoSTW::TimeSecondsToText(float InSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "TimeSecondsToText");

	Params::UFortMissionActivationInfoSTW_TimeSecondsToText_Params Parms{};

	Parms.InSeconds = InSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.SubmitVote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bApprove                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationInfoSTW::SubmitVote(enum class EFortVoteType VoteType, bool bApprove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "SubmitVote");

	Params::UFortMissionActivationInfoSTW_SubmitVote_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.bApprove = bApprove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.RequestVote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VoteDuration                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FailedVoteLockOutDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortVoteArbitratorType ArbitratorType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationInfoSTW::RequestVote(enum class EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, enum class EFortVoteArbitratorType ArbitratorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "RequestVote");

	Params::UFortMissionActivationInfoSTW_RequestVote_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.VoteDuration = VoteDuration;
	Parms.FailedVoteLockOutDuration = FailedVoteLockOutDuration;
	Parms.ArbitratorType = ArbitratorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMissionActivationInfoSTW::IsVoteLocked(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "IsVoteLocked");

	Params::UFortMissionActivationInfoSTW_IsVoteLocked_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMissionActivationInfoSTW::IsVoteActive(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "IsVoteActive");

	Params::UFortMissionActivationInfoSTW_IsVoteActive_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.IsPlayerVoteInstigator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMissionActivationInfoSTW::IsPlayerVoteInstigator(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "IsPlayerVoteInstigator");

	Params::UFortMissionActivationInfoSTW_IsPlayerVoteInstigator_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.IsAnyVoteActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMissionActivationInfoSTW::IsAnyVoteActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "IsAnyVoteActive");

	Params::UFortMissionActivationInfoSTW_IsAnyVoteActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.HasPlayerVoted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMissionActivationInfoSTW::HasPlayerVoted(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "HasPlayerVoted");

	Params::UFortMissionActivationInfoSTW_HasPlayerVoted_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberRemoved
// (Final, Native, Private)
// Parameters:
// int32                              RemovedIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationInfoSTW::HandleTeamMemberRemoved(int32 RemovedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "HandleTeamMemberRemoved");

	Params::UFortMissionActivationInfoSTW_HandleTeamMemberRemoved_Params Parms{};

	Parms.RemovedIndex = RemovedIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberAdded
// (Final, Native, Private)
// Parameters:
// struct FFortTeamMemberInfo         NewInfo                                                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationInfoSTW::HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "HandleTeamMemberAdded");

	Params::UFortMissionActivationInfoSTW_HandleTeamMemberAdded_Params Parms{};

	Parms.NewInfo = NewInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.HandleGameplayVoteUpdated
// (Final, Native, Private, HasOutParams)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortVoteStatus         VoteStatus                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VoteResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVoter>              Voters                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortMissionActivationInfoSTW::HandleGameplayVoteUpdated(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "HandleGameplayVoteUpdated");

	Params::UFortMissionActivationInfoSTW_HandleGameplayVoteUpdated_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.VoteStatus = VoteStatus;
	Parms.VoteResult = VoteResult;
	Parms.Voters = Voters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortMissionActivationInfoSTW::GetVoteTimeRemaining(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetVoteTimeRemaining");

	Params::UFortMissionActivationInfoSTW_GetVoteTimeRemaining_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVoter>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVoter> UFortMissionActivationInfoSTW::GetVoters(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetVoters");

	Params::UFortMissionActivationInfoSTW_GetVoters_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteCounts
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutYesVoteCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutNoVoteCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationInfoSTW::GetVoteCounts(enum class EFortVoteType VoteType, int32* OutYesVoteCount, int32* OutNoVoteCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetVoteCounts");

	Params::UFortMissionActivationInfoSTW_GetVoteCounts_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutYesVoteCount != nullptr)
		*OutYesVoteCount = Parms.OutYesVoteCount;

	if (OutNoVoteCount != nullptr)
		*OutNoVoteCount = Parms.OutNoVoteCount;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetStartObjectiveBluGloRequirement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortMissionActivationInfoSTW::GetStartObjectiveBluGloRequirement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetStartObjectiveBluGloRequirement");

	Params::UFortMissionActivationInfoSTW_GetStartObjectiveBluGloRequirement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMissionInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortMissionInfo*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortMissionInfo* UFortMissionActivationInfoSTW::GetPrimaryMissionInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetPrimaryMissionInfo");

	Params::UFortMissionActivationInfoSTW_GetPrimaryMissionInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMission
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortMission*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortMission* UFortMissionActivationInfoSTW::GetPrimaryMission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetPrimaryMission");

	Params::UFortMissionActivationInfoSTW_GetPrimaryMission_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionVoteType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortVoteType           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortVoteType UFortMissionActivationInfoSTW::GetMissionVoteType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetMissionVoteType");

	Params::UFortMissionActivationInfoSTW_GetMissionVoteType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionObjectiveTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortMissionActivationInfoSTW::GetMissionObjectiveTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetMissionObjectiveTimeRemaining");

	Params::UFortMissionActivationInfoSTW_GetMissionObjectiveTimeRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetLockoutTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortMissionActivationInfoSTW::GetLockoutTimeRemaining(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetLockoutTimeRemaining");

	Params::UFortMissionActivationInfoSTW_GetLockoutTimeRemaining_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetInstigatorId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UFortMissionActivationInfoSTW::GetInstigatorId(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetInstigatorId");

	Params::UFortMissionActivationInfoSTW_GetInstigatorId_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetIncreaseDifficultyBluGloRequirement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortMissionActivationInfoSTW::GetIncreaseDifficultyBluGloRequirement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetIncreaseDifficultyBluGloRequirement");

	Params::UFortMissionActivationInfoSTW_GetIncreaseDifficultyBluGloRequirement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetDeltaRewards
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              BaseDifficultyIncreaseTier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ComparedDifficultyIncreaseTier                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortItemDelta>      DeltaRewards                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortMissionActivationInfoSTW::GetDeltaRewards(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<struct FFortItemDelta>* DeltaRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetDeltaRewards");

	Params::UFortMissionActivationInfoSTW_GetDeltaRewards_Params Parms{};

	Parms.BaseDifficultyIncreaseTier = BaseDifficultyIncreaseTier;
	Parms.ComparedDifficultyIncreaseTier = ComparedDifficultyIncreaseTier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeltaRewards != nullptr)
		*DeltaRewards = Parms.DeltaRewards;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetAvailableBluGloCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortMissionActivationInfoSTW::GetAvailableBluGloCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetAvailableBluGloCount");

	Params::UFortMissionActivationInfoSTW_GetAvailableBluGloCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.GetArbitratorType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortVoteArbitratorType ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortVoteArbitratorType UFortMissionActivationInfoSTW::GetArbitratorType(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetArbitratorType");

	Params::UFortMissionActivationInfoSTW_GetArbitratorType_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.DoesPrimaryMissionContainTags
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMissionActivationInfoSTW::DoesPrimaryMissionContainTags(struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "DoesPrimaryMissionContainTags");

	Params::UFortMissionActivationInfoSTW_DoesPrimaryMissionContainTags_Params Parms{};

	Parms.Tags = Tags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortMissionActivationInfoSTW.CanRequestVote
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortMissionActivationInfoSTW::CanRequestVote(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "CanRequestVote");

	Params::UFortMissionActivationInfoSTW_CanRequestVote_Params Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
// (None)

class UClass* UFortMissionActivationWidgetSTWPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMissionActivationWidgetSTWPanel");

	return Clss;
}


// FortMissionActivationWidgetSTWPanel SaveTheWorldUI.Default__FortMissionActivationWidgetSTWPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMissionActivationWidgetSTWPanel* UFortMissionActivationWidgetSTWPanel::GetDefaultObj()
{
	static class UFortMissionActivationWidgetSTWPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMissionActivationWidgetSTWPanel*>(UFortMissionActivationWidgetSTWPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.SetInfoObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortMissionActivationInfoSTW*NewInfoObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTWPanel::SetInfoObject(class UFortMissionActivationInfoSTW* NewInfoObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "SetInfoObject");

	Params::UFortMissionActivationWidgetSTWPanel_SetInfoObject_Params Parms{};

	Parms.NewInfoObject = NewInfoObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteUpdatedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTWPanel::OnVoteUpdatedBP(enum class EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "OnVoteUpdatedBP");

	Params::UFortMissionActivationWidgetSTWPanel_OnVoteUpdatedBP_Params Parms{};

	Parms.VoteType = VoteType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteLockoutChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocked                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTWPanel::OnVoteLockoutChangedBP(enum class EFortVoteType VoteType, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "OnVoteLockoutChangedBP");

	Params::UFortMissionActivationWidgetSTWPanel_OnVoteLockoutChangedBP_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnMultiplayerChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsMultiplayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTWPanel::OnMultiplayerChangedBP(bool bIsMultiplayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "OnMultiplayerChangedBP");

	Params::UFortMissionActivationWidgetSTWPanel_OnMultiplayerChangedBP_Params Parms{};

	Parms.bIsMultiplayer = bIsMultiplayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnActiveVoteChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsVoteActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VoteResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTWPanel::OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "OnActiveVoteChangedBP");

	Params::UFortMissionActivationWidgetSTWPanel_OnActiveVoteChangedBP_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsVoteActive = bIsVoteActive;
	Parms.VoteResult = VoteResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.InfoObjectUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortMissionActivationWidgetSTWPanel::InfoObjectUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "InfoObjectUpdated");

	Params::UFortMissionActivationWidgetSTWPanel_InfoObjectUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortMissionActivationWidgetSTW
// (None)

class UClass* UFortMissionActivationWidgetSTW::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMissionActivationWidgetSTW");

	return Clss;
}


// FortMissionActivationWidgetSTW SaveTheWorldUI.Default__FortMissionActivationWidgetSTW
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMissionActivationWidgetSTW* UFortMissionActivationWidgetSTW::GetDefaultObj()
{
	static class UFortMissionActivationWidgetSTW* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMissionActivationWidgetSTW*>(UFortMissionActivationWidgetSTW::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestStartObjectiveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortMissionActivationWidgetSTW::RequestStartObjectiveState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "RequestStartObjectiveState");

	Params::UFortMissionActivationWidgetSTW_RequestStartObjectiveState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDifficultyIncreaseState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortMissionActivationWidgetSTW::RequestDifficultyIncreaseState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "RequestDifficultyIncreaseState");

	Params::UFortMissionActivationWidgetSTW_RequestDifficultyIncreaseState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDefaultState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortMissionActivationWidgetSTW::RequestDefaultState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "RequestDefaultState");

	Params::UFortMissionActivationWidgetSTW_RequestDefaultState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.OnVoteLockoutChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocked                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTW::OnVoteLockoutChangedBP(enum class EFortVoteType VoteType, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "OnVoteLockoutChangedBP");

	Params::UFortMissionActivationWidgetSTW_OnVoteLockoutChangedBP_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.OnStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMissionActivationWidgetSTWStateActiveState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMissionActivationWidgetSTWStatePreviousState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTW::OnStateUpdated(enum class EFortMissionActivationWidgetSTWState ActiveState, enum class EFortMissionActivationWidgetSTWState PreviousState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "OnStateUpdated");

	Params::UFortMissionActivationWidgetSTW_OnStateUpdated_Params Parms{};

	Parms.ActiveState = ActiveState;
	Parms.PreviousState = PreviousState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.OnMultiplayerChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsMultiplayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTW::OnMultiplayerChangedBP(bool bIsMultiplayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "OnMultiplayerChangedBP");

	Params::UFortMissionActivationWidgetSTW_OnMultiplayerChangedBP_Params Parms{};

	Parms.bIsMultiplayer = bIsMultiplayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.OnActiveVoteChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsVoteActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              VoteResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMissionActivationWidgetSTW::OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "OnActiveVoteChangedBP");

	Params::UFortMissionActivationWidgetSTW_OnActiveVoteChangedBP_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsVoteActive = bIsVoteActive;
	Parms.VoteResult = VoteResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortMissionActivationWidgetSTW.GetCurrentState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortMissionActivationWidgetSTWStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortMissionActivationWidgetSTWState UFortMissionActivationWidgetSTW::GetCurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "GetCurrentState");

	Params::UFortMissionActivationWidgetSTW_GetCurrentState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortOutpostScreen
// (None)

class UClass* UFortOutpostScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortOutpostScreen");

	return Clss;
}


// FortOutpostScreen SaveTheWorldUI.Default__FortOutpostScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortOutpostScreen* UFortOutpostScreen::GetDefaultObj()
{
	static class UFortOutpostScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortOutpostScreen*>(UFortOutpostScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortOutpostScreen.SetInputReflectorBoxVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortOutpostScreen::SetInputReflectorBoxVisibility(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortOutpostScreen", "SetInputReflectorBoxVisibility");

	Params::UFortOutpostScreen_SetInputReflectorBoxVisibility_Params Parms{};

	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortCampaignPlayFlow
// (None)

class UClass* UFortCampaignPlayFlow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCampaignPlayFlow");

	return Clss;
}


// FortCampaignPlayFlow SaveTheWorldUI.Default__FortCampaignPlayFlow
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCampaignPlayFlow* UFortCampaignPlayFlow::GetDefaultObj()
{
	static class UFortCampaignPlayFlow* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCampaignPlayFlow*>(UFortCampaignPlayFlow::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortJournalQuestDetails
// (None)

class UClass* UFortJournalQuestDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortJournalQuestDetails");

	return Clss;
}


// FortJournalQuestDetails SaveTheWorldUI.Default__FortJournalQuestDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortJournalQuestDetails* UFortJournalQuestDetails::GetDefaultObj()
{
	static class UFortJournalQuestDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortJournalQuestDetails*>(UFortJournalQuestDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortJournalQuestDetails.SetCurrentQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortQuestItem*              InCurrentQuest                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortJournalQuestDetails::SetCurrentQuest(class UFortQuestItem* InCurrentQuest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "SetCurrentQuest");

	Params::UFortJournalQuestDetails_SetCurrentQuest_Params Parms{};

	Parms.InCurrentQuest = InCurrentQuest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortJournalQuestDetails.RegisterEndSpokenDialogEvent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortJournalQuestDetails::RegisterEndSpokenDialogEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "RegisterEndSpokenDialogEvent");

	Params::UFortJournalQuestDetails_RegisterEndSpokenDialogEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortJournalQuestDetails.OnEndSpokenDialog
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortJournalQuestDetails::OnEndSpokenDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "OnEndSpokenDialog");

	Params::UFortJournalQuestDetails_OnEndSpokenDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortJournalQuestDetails::HandleCurrentQuestChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "HandleCurrentQuestChangedBP");

	Params::UFortJournalQuestDetails_HandleCurrentQuestChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortJournalQuestDetails.GetVisibleObjectives
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortQuestObjectiveInfo*>VisibleObjectives                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortJournalQuestDetails::GetVisibleObjectives(TArray<class UFortQuestObjectiveInfo*>* VisibleObjectives)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "GetVisibleObjectives");

	Params::UFortJournalQuestDetails_GetVisibleObjectives_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VisibleObjectives != nullptr)
		*VisibleObjectives = Parms.VisibleObjectives;

}


// Function SaveTheWorldUI.FortJournalQuestDetails.GetRewards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>OutRewards                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FFortItemInstanceQuantityPair>OutSelectableRewards                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortJournalQuestDetails::GetRewards(TArray<struct FFortItemInstanceQuantityPair>* OutRewards, TArray<struct FFortItemInstanceQuantityPair>* OutSelectableRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "GetRewards");

	Params::UFortJournalQuestDetails_GetRewards_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRewards != nullptr)
		*OutRewards = Parms.OutRewards;

	if (OutSelectableRewards != nullptr)
		*OutSelectableRewards = Parms.OutSelectableRewards;

}


// Function SaveTheWorldUI.FortJournalQuestDetails.GetFutureObjectives
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortQuestObjectiveInfo*>FutureObjectives                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortJournalQuestDetails::GetFutureObjectives(TArray<class UFortQuestObjectiveInfo*>* FutureObjectives)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "GetFutureObjectives");

	Params::UFortJournalQuestDetails_GetFutureObjectives_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FutureObjectives != nullptr)
		*FutureObjectives = Parms.FutureObjectives;

}


// Function SaveTheWorldUI.FortJournalQuestDetails.GetActiveMissionTileType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortTheaterMapTileType ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortTheaterMapTileType UFortJournalQuestDetails::GetActiveMissionTileType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "GetActiveMissionTileType");

	Params::UFortJournalQuestDetails_GetActiveMissionTileType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortJournalQuestDetails.CanPlayQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortJournalQuestDetails::CanPlayQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "CanPlayQuest");

	Params::UFortJournalQuestDetails_CanPlayQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortJournalQuestDetails::CanPartyLeaderPlayQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "CanPartyLeaderPlayQuest");

	Params::UFortJournalQuestDetails_CanPartyLeaderPlayQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortJournalQuestDetails.CanGotoQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortJournalQuestDetails::CanGotoQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestDetails", "CanGotoQuest");

	Params::UFortJournalQuestDetails_CanGotoQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortJournalQuestProgressBar
// (None)

class UClass* UFortJournalQuestProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortJournalQuestProgressBar");

	return Clss;
}


// FortJournalQuestProgressBar SaveTheWorldUI.Default__FortJournalQuestProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortJournalQuestProgressBar* UFortJournalQuestProgressBar::GetDefaultObj()
{
	static class UFortJournalQuestProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortJournalQuestProgressBar*>(UFortJournalQuestProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortJournalQuestProgressBar.GetProgressDetails
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        OutNumerator                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// class FText                        OutDenominator                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              OutFraction                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortJournalQuestProgressBar::GetProgressDetails(class FText* OutNumerator, class FText* OutDenominator, float* OutFraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortJournalQuestProgressBar", "GetProgressDetails");

	Params::UFortJournalQuestProgressBar_GetProgressDetails_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutNumerator != nullptr)
		*OutNumerator = Parms.OutNumerator;

	if (OutDenominator != nullptr)
		*OutDenominator = Parms.OutDenominator;

	if (OutFraction != nullptr)
		*OutFraction = Parms.OutFraction;

}


// Class SaveTheWorldUI.FortLayoutQuestNode
// (None)

class UClass* UFortLayoutQuestNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLayoutQuestNode");

	return Clss;
}


// FortLayoutQuestNode SaveTheWorldUI.Default__FortLayoutQuestNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLayoutQuestNode* UFortLayoutQuestNode::GetDefaultObj()
{
	static class UFortLayoutQuestNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLayoutQuestNode*>(UFortLayoutQuestNode::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortLayoutQuestNode_Legacy
// (None)

class UClass* UFortLayoutQuestNode_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLayoutQuestNode_Legacy");

	return Clss;
}


// FortLayoutQuestNode_Legacy SaveTheWorldUI.Default__FortLayoutQuestNode_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLayoutQuestNode_Legacy* UFortLayoutQuestNode_Legacy::GetDefaultObj()
{
	static class UFortLayoutQuestNode_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLayoutQuestNode_Legacy*>(UFortLayoutQuestNode_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortProgressArrowButton
// (None)

class UClass* UFortProgressArrowButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressArrowButton");

	return Clss;
}


// FortProgressArrowButton SaveTheWorldUI.Default__FortProgressArrowButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressArrowButton* UFortProgressArrowButton::GetDefaultObj()
{
	static class UFortProgressArrowButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressArrowButton*>(UFortProgressArrowButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortProgressArrowButton.UpdateArrowColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 Color                                                            (Parm, NativeAccessSpecifierPublic)
// struct FSlateColor                 HoverColor                                                       (Parm, NativeAccessSpecifierPublic)

void UFortProgressArrowButton::UpdateArrowColor(const struct FSlateColor& Color, const struct FSlateColor& HoverColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressArrowButton", "UpdateArrowColor");

	Params::UFortProgressArrowButton_UpdateArrowColor_Params Parms{};

	Parms.Color = Color;
	Parms.HoverColor = HoverColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortProgressArrowButton.OnShadowColorSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortProgressArrowButton::OnShadowColorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressArrowButton", "OnShadowColorSet");

	Params::UFortProgressArrowButton_OnShadowColorSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortProgressArrowButton.OnIsInteractiveSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsInteractive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressArrowButton::OnIsInteractiveSet(bool bIsInteractive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressArrowButton", "OnIsInteractiveSet");

	Params::UFortProgressArrowButton_OnIsInteractiveSet_Params Parms{};

	Parms.bIsInteractive = bIsInteractive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortProgressArrowButton.OnArrowColorSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortProgressArrowButton::OnArrowColorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressArrowButton", "OnArrowColorSet");

	Params::UFortProgressArrowButton_OnArrowColorSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortProgressArrowButton_Legacy
// (None)

class UClass* UFortProgressArrowButton_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortProgressArrowButton_Legacy");

	return Clss;
}


// FortProgressArrowButton_Legacy SaveTheWorldUI.Default__FortProgressArrowButton_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortProgressArrowButton_Legacy* UFortProgressArrowButton_Legacy::GetDefaultObj()
{
	static class UFortProgressArrowButton_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortProgressArrowButton_Legacy*>(UFortProgressArrowButton_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortProgressArrowButton_Legacy.UpdateArrowColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 Color                                                            (Parm, NativeAccessSpecifierPublic)
// struct FSlateColor                 HoverColor                                                       (Parm, NativeAccessSpecifierPublic)

void UFortProgressArrowButton_Legacy::UpdateArrowColor(const struct FSlateColor& Color, const struct FSlateColor& HoverColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressArrowButton_Legacy", "UpdateArrowColor");

	Params::UFortProgressArrowButton_Legacy_UpdateArrowColor_Params Parms{};

	Parms.Color = Color;
	Parms.HoverColor = HoverColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnShadowColorSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortProgressArrowButton_Legacy::OnShadowColorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressArrowButton_Legacy", "OnShadowColorSet");

	Params::UFortProgressArrowButton_Legacy_OnShadowColorSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnIsInteractiveSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsInteractive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortProgressArrowButton_Legacy::OnIsInteractiveSet(bool bIsInteractive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressArrowButton_Legacy", "OnIsInteractiveSet");

	Params::UFortProgressArrowButton_Legacy_OnIsInteractiveSet_Params Parms{};

	Parms.bIsInteractive = bIsInteractive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortProgressArrowButton_Legacy.OnArrowColorSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortProgressArrowButton_Legacy::OnArrowColorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortProgressArrowButton_Legacy", "OnArrowColorSet");

	Params::UFortProgressArrowButton_Legacy_OnArrowColorSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortQuestExpiresWidget
// (None)

class UClass* UFortQuestExpiresWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestExpiresWidget");

	return Clss;
}


// FortQuestExpiresWidget SaveTheWorldUI.Default__FortQuestExpiresWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestExpiresWidget* UFortQuestExpiresWidget::GetDefaultObj()
{
	static class UFortQuestExpiresWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestExpiresWidget*>(UFortQuestExpiresWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestExpiresWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              InItem                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestExpiresWidget::SetData(class UFortQuestItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestExpiresWidget", "SetData");

	Params::UFortQuestExpiresWidget_SetData_Params Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestExpiresWidget.OnQuestExpirationUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestExpiresWidget::OnQuestExpirationUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestExpiresWidget", "OnQuestExpirationUpdated");

	Params::UFortQuestExpiresWidget_OnQuestExpirationUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestMapCosmeticListWidget
// (None)

class UClass* UFortQuestMapCosmeticListWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapCosmeticListWidget");

	return Clss;
}


// FortQuestMapCosmeticListWidget SaveTheWorldUI.Default__FortQuestMapCosmeticListWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapCosmeticListWidget* UFortQuestMapCosmeticListWidget::GetDefaultObj()
{
	static class UFortQuestMapCosmeticListWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapCosmeticListWidget*>(UFortQuestMapCosmeticListWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapCosmeticListWidget.UpdateCosmeticListDisplay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapCosmeticListWidget::UpdateCosmeticListDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapCosmeticListWidget", "UpdateCosmeticListDisplay");

	Params::UFortQuestMapCosmeticListWidget_UpdateCosmeticListDisplay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapCosmeticListWidget.GetDisplayItemDefs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortItemDefinition*> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortItemDefinition*> UFortQuestMapCosmeticListWidget::GetDisplayItemDefs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapCosmeticListWidget", "GetDisplayItemDefs");

	Params::UFortQuestMapCosmeticListWidget_GetDisplayItemDefs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortQuestMapDetailsPanelBase
// (None)

class UClass* UFortQuestMapDetailsPanelBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapDetailsPanelBase");

	return Clss;
}


// FortQuestMapDetailsPanelBase SaveTheWorldUI.Default__FortQuestMapDetailsPanelBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapDetailsPanelBase* UFortQuestMapDetailsPanelBase::GetDefaultObj()
{
	static class UFortQuestMapDetailsPanelBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapDetailsPanelBase*>(UFortQuestMapDetailsPanelBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetScrollWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapDetailsPanelBase::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapDetailsPanelBase", "SetScrollWidget");

	Params::UFortQuestMapDetailsPanelBase_SetScrollWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetQuestToDisplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortQuestItemDefinition*    QuestDef                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapDetailsPanelBase::SetQuestToDisplay(class UFortQuestItemDefinition* QuestDef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapDetailsPanelBase", "SetQuestToDisplay");

	Params::UFortQuestMapDetailsPanelBase_SetQuestToDisplay_Params Parms{};

	Parms.QuestDef = QuestDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapDetailsPanelBase.HandleQuestsUpdatedInternal
// (Final, Native, Private)
// Parameters:

void UFortQuestMapDetailsPanelBase::HandleQuestsUpdatedInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapDetailsPanelBase", "HandleQuestsUpdatedInternal");

	Params::UFortQuestMapDetailsPanelBase_HandleQuestsUpdatedInternal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestMapDetailsPanel
// (None)

class UClass* UFortQuestMapDetailsPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapDetailsPanel");

	return Clss;
}


// FortQuestMapDetailsPanel SaveTheWorldUI.Default__FortQuestMapDetailsPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapDetailsPanel* UFortQuestMapDetailsPanel::GetDefaultObj()
{
	static class UFortQuestMapDetailsPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapDetailsPanel*>(UFortQuestMapDetailsPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
// (None)

class UClass* UFortQuestMapDetailsPanel_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapDetailsPanel_Legacy");

	return Clss;
}


// FortQuestMapDetailsPanel_Legacy SaveTheWorldUI.Default__FortQuestMapDetailsPanel_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapDetailsPanel_Legacy* UFortQuestMapDetailsPanel_Legacy::GetDefaultObj()
{
	static class UFortQuestMapDetailsPanel_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapDetailsPanel_Legacy*>(UFortQuestMapDetailsPanel_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapEventCallout
// (None)

class UClass* UFortQuestMapEventCallout::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapEventCallout");

	return Clss;
}


// FortQuestMapEventCallout SaveTheWorldUI.Default__FortQuestMapEventCallout
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapEventCallout* UFortQuestMapEventCallout::GetDefaultObj()
{
	static class UFortQuestMapEventCallout* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapEventCallout*>(UFortQuestMapEventCallout::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateGoButtonBangState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bClear                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapEventCallout::UpdateGoButtonBangState(bool bClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "UpdateGoButtonBangState");

	Params::UFortQuestMapEventCallout_UpdateGoButtonBangState_Params Parms{};

	Parms.bClear = bClear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateCalloutData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout::UpdateCalloutData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "UpdateCalloutData");

	Params::UFortQuestMapEventCallout_UpdateCalloutData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.UpdateActiveEvents
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout::UpdateActiveEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "UpdateActiveEvents");

	Params::UFortQuestMapEventCallout_UpdateActiveEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.SetIsFaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Faded                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapEventCallout::SetIsFaded(bool Faded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "SetIsFaded");

	Params::UFortQuestMapEventCallout_SetIsFaded_Params Parms{};

	Parms.Faded = Faded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Expanded                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapEventCallout::SetIsExpanded(bool Expanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "SetIsExpanded");

	Params::UFortQuestMapEventCallout_SetIsExpanded_Params Parms{};

	Parms.Expanded = Expanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.ResetCallout
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout::ResetCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "ResetCallout");

	Params::UFortQuestMapEventCallout_ResetCallout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "PlayFadeOut");

	Params::UFortQuestMapEventCallout_PlayFadeOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "PlayFadeIn");

	Params::UFortQuestMapEventCallout_PlayFadeIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.OnResetCallout
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapEventCallout::OnResetCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnResetCallout");

	Params::UFortQuestMapEventCallout_OnResetCallout_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.OnPlayFadeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFadeOut                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapEventCallout::OnPlayFadeAnimation(bool bIsFadeOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnPlayFadeAnimation");

	Params::UFortQuestMapEventCallout_OnPlayFadeAnimation_Params Parms{};

	Parms.bIsFadeOut = bIsFadeOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.OnEventIndexChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapEventCallout::OnEventIndexChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnEventIndexChanged");

	Params::UFortQuestMapEventCallout_OnEventIndexChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.OnDeactivatePlayAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapEventCallout::OnDeactivatePlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnDeactivatePlayAnimation");

	Params::UFortQuestMapEventCallout_OnDeactivatePlayAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.OnActivatePlayAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapEventCallout::OnActivatePlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnActivatePlayAnimation");

	Params::UFortQuestMapEventCallout_OnActivatePlayAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.IsCurrentEventUnlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapEventCallout::IsCurrentEventUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "IsCurrentEventUnlocked");

	Params::UFortQuestMapEventCallout_IsCurrentEventUnlocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.GetRequiredQuestForCurrentEvent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortQuestItemDefinition*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortQuestItemDefinition* UFortQuestMapEventCallout::GetRequiredQuestForCurrentEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "GetRequiredQuestForCurrentEvent");

	Params::UFortQuestMapEventCallout_GetRequiredQuestForCurrentEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.GetIsFaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapEventCallout::GetIsFaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "GetIsFaded");

	Params::UFortQuestMapEventCallout_GetIsFaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapEventCallout::GetIsExpanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "GetIsExpanded");

	Params::UFortQuestMapEventCallout_GetIsExpanded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.GetEventCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortQuestMapEventCallout::GetEventCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "GetEventCount");

	Params::UFortQuestMapEventCallout_GetEventCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout.DeactivateCallout
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout::DeactivateCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout", "DeactivateCallout");

	Params::UFortQuestMapEventCallout_DeactivateCallout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestMapEventCallout_Legacy
// (None)

class UClass* UFortQuestMapEventCallout_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapEventCallout_Legacy");

	return Clss;
}


// FortQuestMapEventCallout_Legacy SaveTheWorldUI.Default__FortQuestMapEventCallout_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapEventCallout_Legacy* UFortQuestMapEventCallout_Legacy::GetDefaultObj()
{
	static class UFortQuestMapEventCallout_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapEventCallout_Legacy*>(UFortQuestMapEventCallout_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateGoButtonBangState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bClear                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapEventCallout_Legacy::UpdateGoButtonBangState(bool bClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "UpdateGoButtonBangState");

	Params::UFortQuestMapEventCallout_Legacy_UpdateGoButtonBangState_Params Parms{};

	Parms.bClear = bClear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateCalloutData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout_Legacy::UpdateCalloutData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "UpdateCalloutData");

	Params::UFortQuestMapEventCallout_Legacy_UpdateCalloutData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateActiveEvents
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout_Legacy::UpdateActiveEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "UpdateActiveEvents");

	Params::UFortQuestMapEventCallout_Legacy_UpdateActiveEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsFaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Faded                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapEventCallout_Legacy::SetIsFaded(bool Faded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "SetIsFaded");

	Params::UFortQuestMapEventCallout_Legacy_SetIsFaded_Params Parms{};

	Parms.Faded = Faded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Expanded                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapEventCallout_Legacy::SetIsExpanded(bool Expanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "SetIsExpanded");

	Params::UFortQuestMapEventCallout_Legacy_SetIsExpanded_Params Parms{};

	Parms.Expanded = Expanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.ResetCallout
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout_Legacy::ResetCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "ResetCallout");

	Params::UFortQuestMapEventCallout_Legacy_ResetCallout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout_Legacy::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "PlayFadeOut");

	Params::UFortQuestMapEventCallout_Legacy_PlayFadeOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout_Legacy::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "PlayFadeIn");

	Params::UFortQuestMapEventCallout_Legacy_PlayFadeIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnResetCallout
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapEventCallout_Legacy::OnResetCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnResetCallout");

	Params::UFortQuestMapEventCallout_Legacy_OnResetCallout_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnPlayFadeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFadeOut                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapEventCallout_Legacy::OnPlayFadeAnimation(bool bIsFadeOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnPlayFadeAnimation");

	Params::UFortQuestMapEventCallout_Legacy_OnPlayFadeAnimation_Params Parms{};

	Parms.bIsFadeOut = bIsFadeOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnEventIndexChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapEventCallout_Legacy::OnEventIndexChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnEventIndexChanged");

	Params::UFortQuestMapEventCallout_Legacy_OnEventIndexChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnDeactivatePlayAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapEventCallout_Legacy::OnDeactivatePlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnDeactivatePlayAnimation");

	Params::UFortQuestMapEventCallout_Legacy_OnDeactivatePlayAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnActivatePlayAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapEventCallout_Legacy::OnActivatePlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnActivatePlayAnimation");

	Params::UFortQuestMapEventCallout_Legacy_OnActivatePlayAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.IsCurrentEventUnlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapEventCallout_Legacy::IsCurrentEventUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "IsCurrentEventUnlocked");

	Params::UFortQuestMapEventCallout_Legacy_IsCurrentEventUnlocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetRequiredQuestForCurrentEvent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortQuestItemDefinition*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortQuestItemDefinition* UFortQuestMapEventCallout_Legacy::GetRequiredQuestForCurrentEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "GetRequiredQuestForCurrentEvent");

	Params::UFortQuestMapEventCallout_Legacy_GetRequiredQuestForCurrentEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsFaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapEventCallout_Legacy::GetIsFaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "GetIsFaded");

	Params::UFortQuestMapEventCallout_Legacy_GetIsFaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapEventCallout_Legacy::GetIsExpanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "GetIsExpanded");

	Params::UFortQuestMapEventCallout_Legacy_GetIsExpanded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetEventCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortQuestMapEventCallout_Legacy::GetEventCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "GetEventCount");

	Params::UFortQuestMapEventCallout_Legacy_GetEventCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapEventCallout_Legacy.DeactivateCallout
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapEventCallout_Legacy::DeactivateCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "DeactivateCallout");

	Params::UFortQuestMapEventCallout_Legacy_DeactivateCallout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel
// (None)

class UClass* UFortQuestMapEventDetailsPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapEventDetailsPanel");

	return Clss;
}


// FortQuestMapEventDetailsPanel SaveTheWorldUI.Default__FortQuestMapEventDetailsPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapEventDetailsPanel* UFortQuestMapEventDetailsPanel::GetDefaultObj()
{
	static class UFortQuestMapEventDetailsPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapEventDetailsPanel*>(UFortQuestMapEventDetailsPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
// (None)

class UClass* UFortQuestMapEventDetailsPanel_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapEventDetailsPanel_Legacy");

	return Clss;
}


// FortQuestMapEventDetailsPanel_Legacy SaveTheWorldUI.Default__FortQuestMapEventDetailsPanel_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapEventDetailsPanel_Legacy* UFortQuestMapEventDetailsPanel_Legacy::GetDefaultObj()
{
	static class UFortQuestMapEventDetailsPanel_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapEventDetailsPanel_Legacy*>(UFortQuestMapEventDetailsPanel_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapEventDot
// (None)

class UClass* UFortQuestMapEventDot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapEventDot");

	return Clss;
}


// FortQuestMapEventDot SaveTheWorldUI.Default__FortQuestMapEventDot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapEventDot* UFortQuestMapEventDot::GetDefaultObj()
{
	static class UFortQuestMapEventDot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapEventDot*>(UFortQuestMapEventDot::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapEventSequence
// (None)

class UClass* UFortQuestMapEventSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapEventSequence");

	return Clss;
}


// FortQuestMapEventSequence SaveTheWorldUI.Default__FortQuestMapEventSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapEventSequence* UFortQuestMapEventSequence::GetDefaultObj()
{
	static class UFortQuestMapEventSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapEventSequence*>(UFortQuestMapEventSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapEventSideEntry
// (None)

class UClass* UFortQuestMapEventSideEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapEventSideEntry");

	return Clss;
}


// FortQuestMapEventSideEntry SaveTheWorldUI.Default__FortQuestMapEventSideEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapEventSideEntry* UFortQuestMapEventSideEntry::GetDefaultObj()
{
	static class UFortQuestMapEventSideEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapEventSideEntry*>(UFortQuestMapEventSideEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
// (None)

class UClass* UFortQuestMapEventSideEntry_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapEventSideEntry_Legacy");

	return Clss;
}


// FortQuestMapEventSideEntry_Legacy SaveTheWorldUI.Default__FortQuestMapEventSideEntry_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapEventSideEntry_Legacy* UFortQuestMapEventSideEntry_Legacy::GetDefaultObj()
{
	static class UFortQuestMapEventSideEntry_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapEventSideEntry_Legacy*>(UFortQuestMapEventSideEntry_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapNewBangWrapper
// (None)

class UClass* UFortQuestMapNewBangWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapNewBangWrapper");

	return Clss;
}


// FortQuestMapNewBangWrapper SaveTheWorldUI.Default__FortQuestMapNewBangWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapNewBangWrapper* UFortQuestMapNewBangWrapper::GetDefaultObj()
{
	static class UFortQuestMapNewBangWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapNewBangWrapper*>(UFortQuestMapNewBangWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
// (None)

class UClass* UFortQuestMapNewBangWrapper_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapNewBangWrapper_Legacy");

	return Clss;
}


// FortQuestMapNewBangWrapper_Legacy SaveTheWorldUI.Default__FortQuestMapNewBangWrapper_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapNewBangWrapper_Legacy* UFortQuestMapNewBangWrapper_Legacy::GetDefaultObj()
{
	static class UFortQuestMapNewBangWrapper_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapNewBangWrapper_Legacy*>(UFortQuestMapNewBangWrapper_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortQuestMapNodeLayout
// (None)

class UClass* UFortQuestMapNodeLayout::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapNodeLayout");

	return Clss;
}


// FortQuestMapNodeLayout SaveTheWorldUI.Default__FortQuestMapNodeLayout
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapNodeLayout* UFortQuestMapNodeLayout::GetDefaultObj()
{
	static class UFortQuestMapNodeLayout* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapNodeLayout*>(UFortQuestMapNodeLayout::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestIndexSelectionModelIndexChanged
// (Final, Native, Private)
// Parameters:
// bool                               bUpdateButtonSelection                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapNodeLayout::HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapNodeLayout", "HandleQuestIndexSelectionModelIndexChanged");

	Params::UFortQuestMapNodeLayout_HandleQuestIndexSelectionModelIndexChanged_Params Parms{};

	Parms.bUpdateButtonSelection = bUpdateButtonSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestButtonSelected
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           SelectedQuestButton                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapNodeLayout::HandleQuestButtonSelected(class UCommonButtonBase* SelectedQuestButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapNodeLayout", "HandleQuestButtonSelected");

	Params::UFortQuestMapNodeLayout_HandleQuestButtonSelected_Params Parms{};

	Parms.SelectedQuestButton = SelectedQuestButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
// (None)

class UClass* UFortQuestMapNodeLayout_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapNodeLayout_Legacy");

	return Clss;
}


// FortQuestMapNodeLayout_Legacy SaveTheWorldUI.Default__FortQuestMapNodeLayout_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapNodeLayout_Legacy* UFortQuestMapNodeLayout_Legacy::GetDefaultObj()
{
	static class UFortQuestMapNodeLayout_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapNodeLayout_Legacy*>(UFortQuestMapNodeLayout_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestIndexSelectionModelIndexChanged
// (Final, Native, Private)
// Parameters:
// bool                               bUpdateButtonSelection                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapNodeLayout_Legacy::HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapNodeLayout_Legacy", "HandleQuestIndexSelectionModelIndexChanged");

	Params::UFortQuestMapNodeLayout_Legacy_HandleQuestIndexSelectionModelIndexChanged_Params Parms{};

	Parms.bUpdateButtonSelection = bUpdateButtonSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestButtonSelected
// (Final, Native, Private)
// Parameters:
// class UCommonButtonLegacy*         SelectedQuestButton                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapNodeLayout_Legacy::HandleQuestButtonSelected(class UCommonButtonLegacy* SelectedQuestButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapNodeLayout_Legacy", "HandleQuestButtonSelected");

	Params::UFortQuestMapNodeLayout_Legacy_HandleQuestButtonSelected_Params Parms{};

	Parms.SelectedQuestButton = SelectedQuestButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestMapQuestTile
// (None)

class UClass* UFortQuestMapQuestTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapQuestTile");

	return Clss;
}


// FortQuestMapQuestTile SaveTheWorldUI.Default__FortQuestMapQuestTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapQuestTile* UFortQuestMapQuestTile::GetDefaultObj()
{
	static class UFortQuestMapQuestTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapQuestTile*>(UFortQuestMapQuestTile::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapQuestTile.HandleSelectedChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapQuestTile::HandleSelectedChange(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapQuestTile", "HandleSelectedChange");

	Params::UFortQuestMapQuestTile_HandleSelectedChange_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapQuestTile.HandleQuestDataChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapQuestTile::HandleQuestDataChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapQuestTile", "HandleQuestDataChangedBP");

	Params::UFortQuestMapQuestTile_HandleQuestDataChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapQuestTile.GetQuestNodeData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortQuestItemDefinition*    QuestItemDefinition                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortQuestMapNode           NodeData                                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortQuestMapQuestTile::GetQuestNodeData(class UFortQuestItemDefinition** QuestItemDefinition, struct FFortQuestMapNode* NodeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapQuestTile", "GetQuestNodeData");

	Params::UFortQuestMapQuestTile_GetQuestNodeData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QuestItemDefinition != nullptr)
		*QuestItemDefinition = Parms.QuestItemDefinition;

	if (NodeData != nullptr)
		*NodeData = Parms.NodeData;

}


// Class SaveTheWorldUI.FortQuestMapQuestTile_Legacy
// (None)

class UClass* UFortQuestMapQuestTile_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapQuestTile_Legacy");

	return Clss;
}


// FortQuestMapQuestTile_Legacy SaveTheWorldUI.Default__FortQuestMapQuestTile_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapQuestTile_Legacy* UFortQuestMapQuestTile_Legacy::GetDefaultObj()
{
	static class UFortQuestMapQuestTile_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapQuestTile_Legacy*>(UFortQuestMapQuestTile_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleSelectedChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapQuestTile_Legacy::HandleSelectedChange(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapQuestTile_Legacy", "HandleSelectedChange");

	Params::UFortQuestMapQuestTile_Legacy_HandleSelectedChange_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleQuestDataChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapQuestTile_Legacy::HandleQuestDataChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapQuestTile_Legacy", "HandleQuestDataChangedBP");

	Params::UFortQuestMapQuestTile_Legacy_HandleQuestDataChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapQuestTile_Legacy.GetQuestNodeData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortQuestItemDefinition*    QuestItemDefinition                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortQuestMapNode           NodeData                                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortQuestMapQuestTile_Legacy::GetQuestNodeData(class UFortQuestItemDefinition** QuestItemDefinition, struct FFortQuestMapNode* NodeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapQuestTile_Legacy", "GetQuestNodeData");

	Params::UFortQuestMapQuestTile_Legacy_GetQuestNodeData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QuestItemDefinition != nullptr)
		*QuestItemDefinition = Parms.QuestItemDefinition;

	if (NodeData != nullptr)
		*NodeData = Parms.NodeData;

}


// Class SaveTheWorldUI.FortQuestMapScreen
// (None)

class UClass* UFortQuestMapScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapScreen");

	return Clss;
}


// FortQuestMapScreen SaveTheWorldUI.Default__FortQuestMapScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapScreen* UFortQuestMapScreen::GetDefaultObj()
{
	static class UFortQuestMapScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapScreen*>(UFortQuestMapScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapScreen.UpdateQuestMapMode
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQuestMapScreenMode     QuestMapMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::UpdateQuestMapMode(enum class EQuestMapScreenMode QuestMapMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "UpdateQuestMapMode");

	Params::UFortQuestMapScreen_UpdateQuestMapMode_Params Parms{};

	Parms.QuestMapMode = QuestMapMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.UpdateInputActionStates
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bShowingCallout                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::UpdateInputActionStates(bool bShowingCallout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "UpdateInputActionStates");

	Params::UFortQuestMapScreen_UpdateInputActionStates_Params Parms{};

	Parms.bShowingCallout = bShowingCallout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.ToggleQuestMapState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen::ToggleQuestMapState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "ToggleQuestMapState");

	Params::UFortQuestMapScreen_ToggleQuestMapState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.ShowQuestLog
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortQuestItem*              QuestItem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::ShowQuestLog(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "ShowQuestLog");

	Params::UFortQuestMapScreen_ShowQuestLog_Params Parms{};

	Parms.QuestItem = QuestItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.SetQuestMapViewer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortQuestMapViewer*         Value                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::SetQuestMapViewer(class UFortQuestMapViewer* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "SetQuestMapViewer");

	Params::UFortQuestMapScreen_SetQuestMapViewer_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.SetIgnorePageNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIgnoreNavigation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::SetIgnorePageNavigation(bool bIgnoreNavigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "SetIgnorePageNavigation");

	Params::UFortQuestMapScreen_SetIgnorePageNavigation_Params Parms{};

	Parms.bIgnoreNavigation = bIgnoreNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.SetBeyondCutoffQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bBeyondCutoff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::SetBeyondCutoffQuest(bool bBeyondCutoff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "SetBeyondCutoffQuest");

	Params::UFortQuestMapScreen_SetBeyondCutoffQuest_Params Parms{};

	Parms.bBeyondCutoff = bBeyondCutoff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.OnShowCurrentQuestInputActionValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen::OnShowCurrentQuestInputActionValueChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "OnShowCurrentQuestInputActionValueChanged");

	Params::UFortQuestMapScreen_OnShowCurrentQuestInputActionValueChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutExpandChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen::OnEventCalloutExpandChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "OnEventCalloutExpandChanged");

	Params::UFortQuestMapScreen_OnEventCalloutExpandChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutButtonClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen::OnEventCalloutButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "OnEventCalloutButtonClicked");

	Params::UFortQuestMapScreen_OnEventCalloutButtonClicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.IsEventFlagActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventFlag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapScreen::IsEventFlagActive(const class FString& EventFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "IsEventFlagActive");

	Params::UFortQuestMapScreen_IsEventFlagActive_Params Parms{};

	Parms.EventFlag = EventFlag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapScreen.IsBeyondQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortQuestItemDefinition*    QuestDef                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapScreen::IsBeyondQuest(class UFortQuestItemDefinition* QuestDef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "IsBeyondQuest");

	Params::UFortQuestMapScreen_IsBeyondQuest_Params Parms{};

	Parms.QuestDef = QuestDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapScreen.InitializeQuestData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen::InitializeQuestData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "InitializeQuestData");

	Params::UFortQuestMapScreen_InitializeQuestData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestPageChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen::HandleQuestPageChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleQuestPageChanged");

	Params::UFortQuestMapScreen_HandleQuestPageChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestIndexSelectionModelChanged
// (Final, Native, Private)
// Parameters:
// bool                               bUpdateButtonSelection                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleQuestIndexSelectionModelChanged");

	Params::UFortQuestMapScreen_HandleQuestIndexSelectionModelChanged_Params Parms{};

	Parms.bUpdateButtonSelection = bUpdateButtonSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.HandleQuestDetailsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestDefinition                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleQuestDetailsUpdated");

	Params::UFortQuestMapScreen_HandleQuestDetailsUpdated_Params Parms{};

	Parms.QuestDefinition = QuestDefinition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.HandleMapViewerNavigationRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EViewerNavigationDirectionDirection                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::HandleMapViewerNavigationRequest(enum class EViewerNavigationDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleMapViewerNavigationRequest");

	Params::UFortQuestMapScreen_HandleMapViewerNavigationRequest_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.HandleMapModeSwitch
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen::HandleMapModeSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleMapModeSwitch");

	Params::UFortQuestMapScreen_HandleMapModeSwitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.HandleEventQuestMapActivate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen::HandleEventQuestMapActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleEventQuestMapActivate");

	Params::UFortQuestMapScreen_HandleEventQuestMapActivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen.HandleEventCalloutDataChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen::HandleEventCalloutDataChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleEventCalloutDataChangedBP");

	Params::UFortQuestMapScreen_HandleEventCalloutDataChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.HandleBackInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen::HandleBackInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleBackInputAction");

	Params::UFortQuestMapScreen_HandleBackInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.GetCurrentPageCameraMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFrontEndCamera         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFrontEndCamera UFortQuestMapScreen::GetCurrentPageCameraMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "GetCurrentPageCameraMode");

	Params::UFortQuestMapScreen_GetCurrentPageCameraMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapScreen.GetBeyondCutoffQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapScreen::GetBeyondCutoffQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "GetBeyondCutoffQuest");

	Params::UFortQuestMapScreen_GetBeyondCutoffQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapScreen.ClaimQuestRewards
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen::ClaimQuestRewards(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "ClaimQuestRewards");

	Params::UFortQuestMapScreen_ClaimQuestRewards_Params Parms{};

	Parms.QuestItem = QuestItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen.CheckForNewMainQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen::CheckForNewMainQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen", "CheckForNewMainQuest");

	Params::UFortQuestMapScreen_CheckForNewMainQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestMapScreen_Legacy
// (None)

class UClass* UFortQuestMapScreen_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapScreen_Legacy");

	return Clss;
}


// FortQuestMapScreen_Legacy SaveTheWorldUI.Default__FortQuestMapScreen_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapScreen_Legacy* UFortQuestMapScreen_Legacy::GetDefaultObj()
{
	static class UFortQuestMapScreen_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapScreen_Legacy*>(UFortQuestMapScreen_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.UpdateQuestMapMode
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQuestMapScreenMode     QuestMapMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen_Legacy::UpdateQuestMapMode(enum class EQuestMapScreenMode QuestMapMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "UpdateQuestMapMode");

	Params::UFortQuestMapScreen_Legacy_UpdateQuestMapMode_Params Parms{};

	Parms.QuestMapMode = QuestMapMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.ToggleQuestMapState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen_Legacy::ToggleQuestMapState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "ToggleQuestMapState");

	Params::UFortQuestMapScreen_Legacy_ToggleQuestMapState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetQuestMapViewer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortQuestMapViewer_Legacy*  Value                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen_Legacy::SetQuestMapViewer(class UFortQuestMapViewer_Legacy* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "SetQuestMapViewer");

	Params::UFortQuestMapScreen_Legacy_SetQuestMapViewer_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetIgnorePageNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIgnoreNavigation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen_Legacy::SetIgnorePageNavigation(bool bIgnoreNavigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "SetIgnorePageNavigation");

	Params::UFortQuestMapScreen_Legacy_SetIgnorePageNavigation_Params Parms{};

	Parms.bIgnoreNavigation = bIgnoreNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetFindCurrentActionVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EInputActionState       ActionVisibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen_Legacy::SetFindCurrentActionVisibility(enum class EInputActionState ActionVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "SetFindCurrentActionVisibility");

	Params::UFortQuestMapScreen_Legacy_SetFindCurrentActionVisibility_Params Parms{};

	Parms.ActionVisibility = ActionVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.SetBeyondCutoffQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bBeyondCutoff                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen_Legacy::SetBeyondCutoffQuest(bool bBeyondCutoff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "SetBeyondCutoffQuest");

	Params::UFortQuestMapScreen_Legacy_SetBeyondCutoffQuest_Params Parms{};

	Parms.bBeyondCutoff = bBeyondCutoff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutExpandChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen_Legacy::OnEventCalloutExpandChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "OnEventCalloutExpandChanged");

	Params::UFortQuestMapScreen_Legacy_OnEventCalloutExpandChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutButtonClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen_Legacy::OnEventCalloutButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "OnEventCalloutButtonClicked");

	Params::UFortQuestMapScreen_Legacy_OnEventCalloutButtonClicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.IsEventFlagActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      EventFlag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapScreen_Legacy::IsEventFlagActive(const class FString& EventFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "IsEventFlagActive");

	Params::UFortQuestMapScreen_Legacy_IsEventFlagActive_Params Parms{};

	Parms.EventFlag = EventFlag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.IsBeyondQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortQuestItemDefinition*    QuestDef                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapScreen_Legacy::IsBeyondQuest(class UFortQuestItemDefinition* QuestDef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "IsBeyondQuest");

	Params::UFortQuestMapScreen_Legacy_IsBeyondQuest_Params Parms{};

	Parms.QuestDef = QuestDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.InitializeQuestData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen_Legacy::InitializeQuestData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "InitializeQuestData");

	Params::UFortQuestMapScreen_Legacy_InitializeQuestData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleRequestCurrentQuestNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen_Legacy::HandleRequestCurrentQuestNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleRequestCurrentQuestNavigation");

	Params::UFortQuestMapScreen_Legacy_HandleRequestCurrentQuestNavigation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestPageChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen_Legacy::HandleQuestPageChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleQuestPageChanged");

	Params::UFortQuestMapScreen_Legacy_HandleQuestPageChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestIndexSelectionModelChanged
// (Final, Native, Private)
// Parameters:
// bool                               bUpdateButtonSelection                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen_Legacy::HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleQuestIndexSelectionModelChanged");

	Params::UFortQuestMapScreen_Legacy_HandleQuestIndexSelectionModelChanged_Params Parms{};

	Parms.bUpdateButtonSelection = bUpdateButtonSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestDetailsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestDefinition                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen_Legacy::HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleQuestDetailsUpdated");

	Params::UFortQuestMapScreen_Legacy_HandleQuestDetailsUpdated_Params Parms{};

	Parms.QuestDefinition = QuestDefinition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapViewerNavigationRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EViewerNavigationDirectionDirection                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapScreen_Legacy::HandleMapViewerNavigationRequest(enum class EViewerNavigationDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleMapViewerNavigationRequest");

	Params::UFortQuestMapScreen_Legacy_HandleMapViewerNavigationRequest_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapModeSwitch
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen_Legacy::HandleMapModeSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleMapModeSwitch");

	Params::UFortQuestMapScreen_Legacy_HandleMapModeSwitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventQuestMapActivate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen_Legacy::HandleEventQuestMapActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleEventQuestMapActivate");

	Params::UFortQuestMapScreen_Legacy_HandleEventQuestMapActivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventCalloutDataChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapScreen_Legacy::HandleEventCalloutDataChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleEventCalloutDataChangedBP");

	Params::UFortQuestMapScreen_Legacy_HandleEventCalloutDataChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.GetCurrentPageCameraMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFrontEndCamera         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFrontEndCamera UFortQuestMapScreen_Legacy::GetCurrentPageCameraMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "GetCurrentPageCameraMode");

	Params::UFortQuestMapScreen_Legacy_GetCurrentPageCameraMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.GetBeyondCutoffQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestMapScreen_Legacy::GetBeyondCutoffQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "GetBeyondCutoffQuest");

	Params::UFortQuestMapScreen_Legacy_GetBeyondCutoffQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestMapScreen_Legacy.CheckForNewMainQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapScreen_Legacy::CheckForNewMainQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "CheckForNewMainQuest");

	Params::UFortQuestMapScreen_Legacy_CheckForNewMainQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestMapViewer_Legacy
// (None)

class UClass* UFortQuestMapViewer_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestMapViewer_Legacy");

	return Clss;
}


// FortQuestMapViewer_Legacy SaveTheWorldUI.Default__FortQuestMapViewer_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestMapViewer_Legacy* UFortQuestMapViewer_Legacy::GetDefaultObj()
{
	static class UFortQuestMapViewer_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestMapViewer_Legacy*>(UFortQuestMapViewer_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.UpdateViewerData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapViewer_Legacy::UpdateViewerData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "UpdateViewerData");

	Params::UFortQuestMapViewer_Legacy_UpdateViewerData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnTryUpdateUserWidgetColor
// (Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor                 OverrideColor                                                    (Parm, NativeAccessSpecifierPublic)

void UFortQuestMapViewer_Legacy::OnTryUpdateUserWidgetColor(class UUserWidget* Widget, const struct FSlateColor& OverrideColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "OnTryUpdateUserWidgetColor");

	Params::UFortQuestMapViewer_Legacy_OnTryUpdateUserWidgetColor_Params Parms{};

	Parms.Widget = Widget;
	Parms.OverrideColor = OverrideColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutOutroAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EViewerNavigationDirectionTravelDirection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestMapViewer_Legacy::OnPlayLayoutOutroAnimation(enum class EViewerNavigationDirection TravelDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "OnPlayLayoutOutroAnimation");

	Params::UFortQuestMapViewer_Legacy_OnPlayLayoutOutroAnimation_Params Parms{};

	Parms.TravelDirection = TravelDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutFadeInAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestMapViewer_Legacy::OnPlayLayoutFadeInAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "OnPlayLayoutFadeInAnimation");

	Params::UFortQuestMapViewer_Legacy_OnPlayLayoutFadeInAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestMapViewer_Legacy.HandleLayoutOutroAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestMapViewer_Legacy::HandleLayoutOutroAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "HandleLayoutOutroAnimationFinished");

	Params::UFortQuestMapViewer_Legacy_HandleLayoutOutroAnimationFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestPlayButton
// (None)

class UClass* UFortQuestPlayButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestPlayButton");

	return Clss;
}


// FortQuestPlayButton SaveTheWorldUI.Default__FortQuestPlayButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestPlayButton* UFortQuestPlayButton::GetDefaultObj()
{
	static class UFortQuestPlayButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestPlayButton*>(UFortQuestPlayButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestPlayButton.OnContentMissing
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestPlayButton::OnContentMissing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestPlayButton", "OnContentMissing");

	Params::UFortQuestPlayButton_OnContentMissing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestPlayButton.HandlePlayerStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestPlayButton::HandlePlayerStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestPlayButton", "HandlePlayerStateChanged");

	Params::UFortQuestPlayButton_HandlePlayerStateChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestPlayButton::HandleMatchmakingStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestPlayButton", "HandleMatchmakingStarted");

	Params::UFortQuestPlayButton_HandleMatchmakingStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EMatchmakingCompleteResultResult                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestPlayButton::HandleMatchmakingComplete(enum class EMatchmakingCompleteResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestPlayButton", "HandleMatchmakingComplete");

	Params::UFortQuestPlayButton_HandleMatchmakingComplete_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestPlayButton.HandleLobbyDisconnected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortQuestPlayButton::HandleLobbyDisconnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestPlayButton", "HandleLobbyDisconnected");

	Params::UFortQuestPlayButton_HandleLobbyDisconnected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestPlayButton.CanPlayQuest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortQuestPlayButton::CanPlayQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestPlayButton", "CanPlayQuest");

	Params::UFortQuestPlayButton_CanPlayQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortQuestPlayButton.AttemptToPlayQuest
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQuestPlayButton::AttemptToPlayQuest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestPlayButton", "AttemptToPlayQuest");

	Params::UFortQuestPlayButton_AttemptToPlayQuest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestTreeItemWidget
// (None)

class UClass* UFortQuestTreeItemWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestTreeItemWidget");

	return Clss;
}


// FortQuestTreeItemWidget SaveTheWorldUI.Default__FortQuestTreeItemWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestTreeItemWidget* UFortQuestTreeItemWidget::GetDefaultObj()
{
	static class UFortQuestTreeItemWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestTreeItemWidget*>(UFortQuestTreeItemWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsQuest
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Category                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestTreeItemWidget::SetupAsQuest(class UFortQuestItem* Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestTreeItemWidget", "SetupAsQuest");

	Params::UFortQuestTreeItemWidget_SetupAsQuest_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortQuestCategory*          Category                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestTreeItemWidget::SetupAsCategory(class UFortQuestCategory* Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestTreeItemWidget", "SetupAsCategory");

	Params::UFortQuestTreeItemWidget_SetupAsCategory_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestTreeItemWidget.OnQuestsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestTreeItemWidget::OnQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestTreeItemWidget", "OnQuestsUpdated");

	Params::UFortQuestTreeItemWidget_OnQuestsUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestTreeItemWidget.HandleQuestsUpdated
// (Final, Native, Protected)
// Parameters:

void UFortQuestTreeItemWidget::HandleQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestTreeItemWidget", "HandleQuestsUpdated");

	Params::UFortQuestTreeItemWidget_HandleQuestsUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
// (None)

class UClass* UFortQuestTreeItemWidget_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestTreeItemWidget_Legacy");

	return Clss;
}


// FortQuestTreeItemWidget_Legacy SaveTheWorldUI.Default__FortQuestTreeItemWidget_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestTreeItemWidget_Legacy* UFortQuestTreeItemWidget_Legacy::GetDefaultObj()
{
	static class UFortQuestTreeItemWidget_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestTreeItemWidget_Legacy*>(UFortQuestTreeItemWidget_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsQuest
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Category                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestTreeItemWidget_Legacy::SetupAsQuest(class UFortQuestItem* Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestTreeItemWidget_Legacy", "SetupAsQuest");

	Params::UFortQuestTreeItemWidget_Legacy_SetupAsQuest_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortQuestCategory*          Category                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestTreeItemWidget_Legacy::SetupAsCategory(class UFortQuestCategory* Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestTreeItemWidget_Legacy", "SetupAsCategory");

	Params::UFortQuestTreeItemWidget_Legacy_SetupAsCategory_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.OnQuestsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestTreeItemWidget_Legacy::OnQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestTreeItemWidget_Legacy", "OnQuestsUpdated");

	Params::UFortQuestTreeItemWidget_Legacy_OnQuestsUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.HandleQuestsUpdated
// (Final, Native, Protected)
// Parameters:

void UFortQuestTreeItemWidget_Legacy::HandleQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestTreeItemWidget_Legacy", "HandleQuestsUpdated");

	Params::UFortQuestTreeItemWidget_Legacy_HandleQuestsUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestScreen
// (None)

class UClass* UFortQuestScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestScreen");

	return Clss;
}


// FortQuestScreen SaveTheWorldUI.Default__FortQuestScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestScreen* UFortQuestScreen::GetDefaultObj()
{
	static class UFortQuestScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestScreen*>(UFortQuestScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestScreen.TriggerClaimRewardEvent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortQuestItem*              QuestItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestScreen::TriggerClaimRewardEvent(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "TriggerClaimRewardEvent");

	Params::UFortQuestScreen_TriggerClaimRewardEvent_Params Parms{};

	Parms.QuestItem = QuestItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestScreen.SetInputActionStates
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortQuestItem*              QuestItem                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsQuestAudioPlaying                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldShowPlayQuest                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAreQuestItemsDifferent                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestScreen::SetInputActionStates(class UFortQuestItem* QuestItem, bool bIsQuestAudioPlaying, bool bShouldShowPlayQuest, bool bAreQuestItemsDifferent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "SetInputActionStates");

	Params::UFortQuestScreen_SetInputActionStates_Params Parms{};

	Parms.QuestItem = QuestItem;
	Parms.bIsQuestAudioPlaying = bIsQuestAudioPlaying;
	Parms.bShouldShowPlayQuest = bShouldShowPlayQuest;
	Parms.bAreQuestItemsDifferent = bAreQuestItemsDifferent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestScreen.SetDisableClaimRewardButton
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bToDisable                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestScreen::SetDisableClaimRewardButton(bool bToDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "SetDisableClaimRewardButton");

	Params::UFortQuestScreen_SetDisableClaimRewardButton_Params Parms{};

	Parms.bToDisable = bToDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestScreen.ProcessPendingSeenQuestItems
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UFortQuestScreen::ProcessPendingSeenQuestItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "ProcessPendingSeenQuestItems");

	Params::UFortQuestScreen_ProcessPendingSeenQuestItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortQuestScreen.OnContentMissing
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::OnContentMissing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "OnContentMissing");

	Params::UFortQuestScreen_OnContentMissing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_SetInitialQuestToSelect
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestItem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestScreen::BP_SetInitialQuestToSelect(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_SetInitialQuestToSelect");

	Params::UFortQuestScreen_BP_SetInitialQuestToSelect_Params Parms{};

	Parms.QuestItem = QuestItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandleUnpinQuestAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandleUnpinQuestAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleUnpinQuestAction");

	Params::UFortQuestScreen_BP_HandleUnpinQuestAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandleStopConversationAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandleStopConversationAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleStopConversationAction");

	Params::UFortQuestScreen_BP_HandleStopConversationAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandleReplayOutroAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandleReplayOutroAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleReplayOutroAction");

	Params::UFortQuestScreen_BP_HandleReplayOutroAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandleReplayIntroAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandleReplayIntroAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleReplayIntroAction");

	Params::UFortQuestScreen_BP_HandleReplayIntroAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandlePlayQuestAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandlePlayQuestAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandlePlayQuestAction");

	Params::UFortQuestScreen_BP_HandlePlayQuestAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandlePinQuestAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandlePinQuestAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandlePinQuestAction");

	Params::UFortQuestScreen_BP_HandlePinQuestAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandleClaimRewardAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandleClaimRewardAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleClaimRewardAction");

	Params::UFortQuestScreen_BP_HandleClaimRewardAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandleBackAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleBackAction");

	Params::UFortQuestScreen_BP_HandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.BP_HandleAbandonQuestAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortQuestScreen::BP_HandleAbandonQuestAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleAbandonQuestAction");

	Params::UFortQuestScreen_BP_HandleAbandonQuestAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortQuestScreen.AttemptToPlayQuest
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortQuestItem*              QuestItem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestScreen::AttemptToPlayQuest(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen", "AttemptToPlayQuest");

	Params::UFortQuestScreen_AttemptToPlayQuest_Params Parms{};

	Parms.QuestItem = QuestItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortQuestScreen_Legacy
// (None)

class UClass* UFortQuestScreen_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestScreen_Legacy");

	return Clss;
}


// FortQuestScreen_Legacy SaveTheWorldUI.Default__FortQuestScreen_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestScreen_Legacy* UFortQuestScreen_Legacy::GetDefaultObj()
{
	static class UFortQuestScreen_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestScreen_Legacy*>(UFortQuestScreen_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortQuestScreen_Legacy.ProcessPendingSeenQuestItems
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UFortQuestScreen_Legacy::ProcessPendingSeenQuestItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestScreen_Legacy", "ProcessPendingSeenQuestItems");

	Params::UFortQuestScreen_Legacy_ProcessPendingSeenQuestItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortResearchMenuBase
// (None)

class UClass* UFortResearchMenuBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortResearchMenuBase");

	return Clss;
}


// FortResearchMenuBase SaveTheWorldUI.Default__FortResearchMenuBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortResearchMenuBase* UFortResearchMenuBase::GetDefaultObj()
{
	static class UFortResearchMenuBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortResearchMenuBase*>(UFortResearchMenuBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortResearchMenuBase.UseResearchRespecToken
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortResearchMenuBase::UseResearchRespecToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchMenuBase", "UseResearchRespecToken");

	Params::UFortResearchMenuBase_UseResearchRespecToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResearchMenuBase.RequestPurchaseResearchLevel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      StatId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortResearchMenuBase::RequestPurchaseResearchLevel(const class FString& StatId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchMenuBase", "RequestPurchaseResearchLevel");

	Params::UFortResearchMenuBase_RequestPurchaseResearchLevel_Params Parms{};

	Parms.StatId = StatId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortResearchMenuBase.OnUseResearchRespecTokenComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortResearchMenuBase::OnUseResearchRespecTokenComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchMenuBase", "OnUseResearchRespecTokenComplete");

	Params::UFortResearchMenuBase_OnUseResearchRespecTokenComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortResearchMenuBase::OnPurchaseResearchLevelStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchMenuBase", "OnPurchaseResearchLevelStarted");

	Params::UFortResearchMenuBase_OnPurchaseResearchLevelStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortResearchMenuBase::OnPurchaseResearchLevelCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchMenuBase", "OnPurchaseResearchLevelCompleted");

	Params::UFortResearchMenuBase_OnPurchaseResearchLevelCompleted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortResearchMenuBase.GetResearchRespecTokenCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchMenuBase::GetResearchRespecTokenCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchMenuBase", "GetResearchRespecTokenCount");

	Params::UFortResearchMenuBase_GetResearchRespecTokenCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchMenuBase.GetClaimableResearchPointEstimate
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchMenuBase::GetClaimableResearchPointEstimate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchMenuBase", "GetClaimableResearchPointEstimate");

	Params::UFortResearchMenuBase_GetClaimableResearchPointEstimate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchMenuBase.AreResearchRespecTokensAvailable
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortResearchMenuBase::AreResearchRespecTokensAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchMenuBase", "AreResearchRespecTokensAvailable");

	Params::UFortResearchMenuBase_AreResearchRespecTokensAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortResearchStatTileWidget
// (None)

class UClass* UFortResearchStatTileWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortResearchStatTileWidget");

	return Clss;
}


// FortResearchStatTileWidget SaveTheWorldUI.Default__FortResearchStatTileWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortResearchStatTileWidget* UFortResearchStatTileWidget::GetDefaultObj()
{
	static class UFortResearchStatTileWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortResearchStatTileWidget*>(UFortResearchStatTileWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortResearchStatTileWidget.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortResearchStatTileWidget::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "OnStatChanged");

	Params::UFortResearchStatTileWidget_OnStatChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.IsAtMaxResearchLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortResearchStatTileWidget::IsAtMaxResearchLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "IsAtMaxResearchLevel");

	Params::UFortResearchStatTileWidget_IsAtMaxResearchLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetStatIdName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFortResearchStatTileWidget::GetStatIdName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetStatIdName");

	Params::UFortResearchStatTileWidget_GetStatIdName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetPersonalStatType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortStatType           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortStatType UFortResearchStatTileWidget::GetPersonalStatType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetPersonalStatType");

	Params::UFortResearchStatTileWidget_GetPersonalStatType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextTeamStatValueDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchStatTileWidget::GetNextTeamStatValueDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetNextTeamStatValueDelta");

	Params::UFortResearchStatTileWidget_GetNextTeamStatValueDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextPersonalStatValueDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchStatTileWidget::GetNextPersonalStatValueDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetNextPersonalStatValueDelta");

	Params::UFortResearchStatTileWidget_GetNextPersonalStatValueDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetNextCombinedStatValueDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchStatTileWidget::GetNextCombinedStatValueDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetNextCombinedStatValueDelta");

	Params::UFortResearchStatTileWidget_GetNextCombinedStatValueDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentTeamStatValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchStatTileWidget::GetCurrentTeamStatValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCurrentTeamStatValue");

	Params::UFortResearchStatTileWidget_GetCurrentTeamStatValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentResearchLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchStatTileWidget::GetCurrentResearchLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCurrentResearchLevel");

	Params::UFortResearchStatTileWidget_GetCurrentResearchLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentPersonalStatValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchStatTileWidget::GetCurrentPersonalStatValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCurrentPersonalStatValue");

	Params::UFortResearchStatTileWidget_GetCurrentPersonalStatValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentCombinedStatValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchStatTileWidget::GetCurrentCombinedStatValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCurrentCombinedStatValue");

	Params::UFortResearchStatTileWidget_GetCurrentCombinedStatValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortResearchStatTileWidget.GetCostToIncreaseStat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortResearchStatTileWidget::GetCostToIncreaseStat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCostToIncreaseStat");

	Params::UFortResearchStatTileWidget_GetCostToIncreaseStat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortRewardNotificationData
// (None)

class UClass* UFortRewardNotificationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardNotificationData");

	return Clss;
}


// FortRewardNotificationData SaveTheWorldUI.Default__FortRewardNotificationData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardNotificationData* UFortRewardNotificationData::GetDefaultObj()
{
	static class UFortRewardNotificationData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardNotificationData*>(UFortRewardNotificationData::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortRewardNotificationData.GetIconBrush
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EFortBrushSize          BrushSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortRewardNotificationData::GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationData", "GetIconBrush");

	Params::UFortRewardNotificationData_GetIconBrush_Params Parms{};

	Parms.BrushSize = BrushSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IconBrush != nullptr)
		*IconBrush = Parms.IconBrush;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortRewardCollectionBookData
// (None)

class UClass* UFortRewardCollectionBookData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardCollectionBookData");

	return Clss;
}


// FortRewardCollectionBookData SaveTheWorldUI.Default__FortRewardCollectionBookData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardCollectionBookData* UFortRewardCollectionBookData::GetDefaultObj()
{
	static class UFortRewardCollectionBookData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardCollectionBookData*>(UFortRewardCollectionBookData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardNotificationSubWidget
// (None)

class UClass* UFortRewardNotificationSubWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardNotificationSubWidget");

	return Clss;
}


// FortRewardNotificationSubWidget SaveTheWorldUI.Default__FortRewardNotificationSubWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardNotificationSubWidget* UFortRewardNotificationSubWidget::GetDefaultObj()
{
	static class UFortRewardNotificationSubWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardNotificationSubWidget*>(UFortRewardNotificationSubWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOutBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::TransitionOutBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "TransitionOutBegin");

	Params::UFortRewardNotificationSubWidget_TransitionOutBegin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortRewardNotificationSubWidget::TransitionOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "TransitionOut");

	Params::UFortRewardNotificationSubWidget_TransitionOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionInBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::TransitionInBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "TransitionInBegin");

	Params::UFortRewardNotificationSubWidget_TransitionInBegin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortRewardNotificationSubWidget::TransitionIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "TransitionIn");

	Params::UFortRewardNotificationSubWidget_TransitionIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionText
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::SetPrimaryActionText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "SetPrimaryActionText");

	Params::UFortRewardNotificationSubWidget_SetPrimaryActionText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionHidden
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationSubWidget::SetPrimaryActionHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "SetPrimaryActionHidden");

	Params::UFortRewardNotificationSubWidget_SetPrimaryActionHidden_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::SetPrimaryActionEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "SetPrimaryActionEnabled");

	Params::UFortRewardNotificationSubWidget_SetPrimaryActionEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.SetInputActionHandlerState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::SetInputActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "SetInputActionHandlerState");

	Params::UFortRewardNotificationSubWidget_SetInputActionHandlerState_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveInputActionHandler
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "RemoveInputActionHandler");

	Params::UFortRewardNotificationSubWidget_RemoveInputActionHandler_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveAllInputActionHandlers
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationSubWidget::RemoveAllInputActionHandlers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "RemoveAllInputActionHandlers");

	Params::UFortRewardNotificationSubWidget_RemoveAllInputActionHandlers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::OnPrimaryAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnPrimaryAction");

	Params::UFortRewardNotificationSubWidget_OnPrimaryAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::OnNavigationUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnNavigationUp");

	Params::UFortRewardNotificationSubWidget_OnNavigationUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::OnNavigationRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnNavigationRight");

	Params::UFortRewardNotificationSubWidget_OnNavigationRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::OnNavigationLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnNavigationLeft");

	Params::UFortRewardNotificationSubWidget_OnNavigationLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::OnNavigationDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnNavigationDown");

	Params::UFortRewardNotificationSubWidget_OnNavigationDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnDeactivated");

	Params::UFortRewardNotificationSubWidget_OnDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.OnActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortRewardNotificationSubWidget::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnActivated");

	Params::UFortRewardNotificationSubWidget_OnActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bHidden                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::IsPrimaryActionHidden(bool* bHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "IsPrimaryActionHidden");

	Params::UFortRewardNotificationSubWidget_IsPrimaryActionHidden_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHidden != nullptr)
		*bHidden = Parms.bHidden;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::IsPrimaryActionEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "IsPrimaryActionEnabled");

	Params::UFortRewardNotificationSubWidget_IsPrimaryActionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.InspectItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QuantityOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::InspectItem(class UFortItem* ItemToInspect, int32 QuantityOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "InspectItem");

	Params::UFortRewardNotificationSubWidget_InspectItem_Params Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.QuantityOverride = QuantityOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortRewardNotificationWidget*MainWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::Init(class UFortRewardNotificationWidget* MainWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "Init");

	Params::UFortRewardNotificationSubWidget_Init_Params Parms{};

	Parms.MainWidget = MainWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationSubWidget.AddInputActionHandler
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommittedEvent                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationSubWidget::AddInputActionHandler(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommittedEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "AddInputActionHandler");

	Params::UFortRewardNotificationSubWidget_AddInputActionHandler_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommittedEvent = CommittedEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortRewardConversationWidget
// (None)

class UClass* UFortRewardConversationWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardConversationWidget");

	return Clss;
}


// FortRewardConversationWidget SaveTheWorldUI.Default__FortRewardConversationWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardConversationWidget* UFortRewardConversationWidget::GetDefaultObj()
{
	static class UFortRewardConversationWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardConversationWidget*>(UFortRewardConversationWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortRewardConversationWidget.IsValidConversation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortConversation*           Conversation                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortRewardConversationWidget::IsValidConversation(class UFortConversation* Conversation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardConversationWidget", "IsValidConversation");

	Params::UFortRewardConversationWidget_IsValidConversation_Params Parms{};

	Parms.Conversation = Conversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortRewardConversationWidget.GetDataFromSentence
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  TalkingHeadTexture                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardConversationWidget::GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardConversationWidget", "GetDataFromSentence");

	Params::UFortRewardConversationWidget_GetDataFromSentence_Params Parms{};

	Parms.Sentence = Sentence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Text != nullptr)
		*Text = Parms.Text;

	if (TalkingHeadTexture != nullptr)
		*TalkingHeadTexture = Parms.TalkingHeadTexture;

}


// Class SaveTheWorldUI.FortRewardDifficultyIncrease
// (None)

class UClass* UFortRewardDifficultyIncrease::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardDifficultyIncrease");

	return Clss;
}


// FortRewardDifficultyIncrease SaveTheWorldUI.Default__FortRewardDifficultyIncrease
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardDifficultyIncrease* UFortRewardDifficultyIncrease::GetDefaultObj()
{
	static class UFortRewardDifficultyIncrease* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardDifficultyIncrease*>(UFortRewardDifficultyIncrease::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardEpicQuestData
// (None)

class UClass* UFortRewardEpicQuestData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardEpicQuestData");

	return Clss;
}


// FortRewardEpicQuestData SaveTheWorldUI.Default__FortRewardEpicQuestData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardEpicQuestData* UFortRewardEpicQuestData::GetDefaultObj()
{
	static class UFortRewardEpicQuestData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardEpicQuestData*>(UFortRewardEpicQuestData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardExpeditionData
// (None)

class UClass* UFortRewardExpeditionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardExpeditionData");

	return Clss;
}


// FortRewardExpeditionData SaveTheWorldUI.Default__FortRewardExpeditionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardExpeditionData* UFortRewardExpeditionData::GetDefaultObj()
{
	static class UFortRewardExpeditionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardExpeditionData*>(UFortRewardExpeditionData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardExpeditionWidget
// (None)

class UClass* UFortRewardExpeditionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardExpeditionWidget");

	return Clss;
}


// FortRewardExpeditionWidget SaveTheWorldUI.Default__FortRewardExpeditionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardExpeditionWidget* UFortRewardExpeditionWidget::GetDefaultObj()
{
	static class UFortRewardExpeditionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardExpeditionWidget*>(UFortRewardExpeditionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSucceeded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardExpeditionWidget::OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardExpeditionWidget", "OnCollectExpeditionCompleted");

	Params::UFortRewardExpeditionWidget_OnCollectExpeditionCompleted_Params Parms{};

	Parms.Expedition = Expedition;
	Parms.bSucceeded = bSucceeded;
	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardExpeditionWidget.CollectExpedition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortExpeditionItem*         Expedition                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardExpeditionWidget::CollectExpedition(class UFortExpeditionItem* Expedition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardExpeditionWidget", "CollectExpedition");

	Params::UFortRewardExpeditionWidget_CollectExpedition_Params Parms{};

	Parms.Expedition = Expedition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortRewardGiftBoxData
// (None)

class UClass* UFortRewardGiftBoxData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardGiftBoxData");

	return Clss;
}


// FortRewardGiftBoxData SaveTheWorldUI.Default__FortRewardGiftBoxData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardGiftBoxData* UFortRewardGiftBoxData::GetDefaultObj()
{
	static class UFortRewardGiftBoxData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardGiftBoxData*>(UFortRewardGiftBoxData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardItemCacheData
// (None)

class UClass* UFortRewardItemCacheData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardItemCacheData");

	return Clss;
}


// FortRewardItemCacheData SaveTheWorldUI.Default__FortRewardItemCacheData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardItemCacheData* UFortRewardItemCacheData::GetDefaultObj()
{
	static class UFortRewardItemCacheData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardItemCacheData*>(UFortRewardItemCacheData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardMissionAlertData
// (None)

class UClass* UFortRewardMissionAlertData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardMissionAlertData");

	return Clss;
}


// FortRewardMissionAlertData SaveTheWorldUI.Default__FortRewardMissionAlertData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardMissionAlertData* UFortRewardMissionAlertData::GetDefaultObj()
{
	static class UFortRewardMissionAlertData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardMissionAlertData*>(UFortRewardMissionAlertData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardMissionData
// (None)

class UClass* UFortRewardMissionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardMissionData");

	return Clss;
}


// FortRewardMissionData SaveTheWorldUI.Default__FortRewardMissionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardMissionData* UFortRewardMissionData::GetDefaultObj()
{
	static class UFortRewardMissionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardMissionData*>(UFortRewardMissionData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardNewQuestWidget
// (None)

class UClass* UFortRewardNewQuestWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardNewQuestWidget");

	return Clss;
}


// FortRewardNewQuestWidget SaveTheWorldUI.Default__FortRewardNewQuestWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardNewQuestWidget* UFortRewardNewQuestWidget::GetDefaultObj()
{
	static class UFortRewardNewQuestWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardNewQuestWidget*>(UFortRewardNewQuestWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortRewardNewQuestWidget.IsValidConversation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortConversation*           Conversation                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortRewardNewQuestWidget::IsValidConversation(class UFortConversation* Conversation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNewQuestWidget", "IsValidConversation");

	Params::UFortRewardNewQuestWidget_IsValidConversation_Params Parms{};

	Parms.Conversation = Conversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortRewardNewQuestWidget.GetDataFromSentence
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  TalkingHeadTexture                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNewQuestWidget::GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNewQuestWidget", "GetDataFromSentence");

	Params::UFortRewardNewQuestWidget_GetDataFromSentence_Params Parms{};

	Parms.Sentence = Sentence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Text != nullptr)
		*Text = Parms.Text;

	if (TalkingHeadTexture != nullptr)
		*TalkingHeadTexture = Parms.TalkingHeadTexture;

}


// Class SaveTheWorldUI.FortRewardNotificationWidget
// (None)

class UClass* UFortRewardNotificationWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardNotificationWidget");

	return Clss;
}


// FortRewardNotificationWidget SaveTheWorldUI.Default__FortRewardNotificationWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardNotificationWidget* UFortRewardNotificationWidget::GetDefaultObj()
{
	static class UFortRewardNotificationWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardNotificationWidget*>(UFortRewardNotificationWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortRewardNotificationWidget.ShowMulchConfirmationModal
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "ShowMulchConfirmationModal");

	Params::UFortRewardNotificationWidget_ShowMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::SetPrimaryActionText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "SetPrimaryActionText");

	Params::UFortRewardNotificationWidget_SetPrimaryActionText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionHidden
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::SetPrimaryActionHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "SetPrimaryActionHidden");

	Params::UFortRewardNotificationWidget_SetPrimaryActionHidden_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::SetPrimaryActionEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "SetPrimaryActionEnabled");

	Params::UFortRewardNotificationWidget_SetPrimaryActionEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.ResetAllRewardData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::ResetAllRewardData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "ResetAllRewardData");

	Params::UFortRewardNotificationWidget_ResetAllRewardData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.PopulateReward
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortRewardNotificationData* Reward                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::PopulateReward(class UFortRewardNotificationData* Reward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "PopulateReward");

	Params::UFortRewardNotificationWidget_PopulateReward_Params Parms{};

	Parms.Reward = Reward;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsScreenClosed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnRewardsScreenClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnRewardsScreenClosed");

	Params::UFortRewardNotificationWidget_OnRewardsScreenClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnRewardsClaimFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnRewardsClaimFailed");

	Params::UFortRewardNotificationWidget_OnRewardsClaimFailed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimed
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>ItemList                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::OnRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnRewardsClaimed");

	Params::UFortRewardNotificationWidget_OnRewardsClaimed_Params Parms{};

	Parms.ItemList = ItemList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::OnPrimaryActionTextChanged(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPrimaryActionTextChanged");

	Params::UFortRewardNotificationWidget_OnPrimaryActionTextChanged_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnPrimaryActionHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPrimaryActionHidden");

	Params::UFortRewardNotificationWidget_OnPrimaryActionHidden_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnPrimaryActionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPrimaryActionEnabled");

	Params::UFortRewardNotificationWidget_OnPrimaryActionEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnPrimaryActionDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPrimaryActionDisabled");

	Params::UFortRewardNotificationWidget_OnPrimaryActionDisabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateNewQuestReward
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortRewardEpicQuestData*    QuestReward                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::OnPopulateNewQuestReward(class UFortRewardEpicQuestData* QuestReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPopulateNewQuestReward");

	Params::UFortRewardNotificationWidget_OnPopulateNewQuestReward_Params Parms{};

	Parms.QuestReward = QuestReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateGiftBoxReward
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortRewardGiftBoxData*      GiftBoxReward                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::OnPopulateGiftBoxReward(class UFortRewardGiftBoxData* GiftBoxReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPopulateGiftBoxReward");

	Params::UFortRewardNotificationWidget_OnPopulateGiftBoxReward_Params Parms{};

	Parms.GiftBoxReward = GiftBoxReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateExpeditionReward
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortRewardExpeditionData*   ExpeditionReward                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::OnPopulateExpeditionReward(class UFortRewardExpeditionData* ExpeditionReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPopulateExpeditionReward");

	Params::UFortRewardNotificationWidget_OnPopulateExpeditionReward_Params Parms{};

	Parms.ExpeditionReward = ExpeditionReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateChoiceRewards
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>ItemList                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::OnPopulateChoiceRewards(TArray<struct FFortItemInstanceQuantityPair>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPopulateChoiceRewards");

	Params::UFortRewardNotificationWidget_OnPopulateChoiceRewards_Params Parms{};

	Parms.ItemList = ItemList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationUp
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnNavigationUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnNavigationUp");

	Params::UFortRewardNotificationWidget_OnNavigationUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationRight
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnNavigationRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnNavigationRight");

	Params::UFortRewardNotificationWidget_OnNavigationRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationLeft
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnNavigationLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnNavigationLeft");

	Params::UFortRewardNotificationWidget_OnNavigationLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationDown
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnNavigationDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnNavigationDown");

	Params::UFortRewardNotificationWidget_OnNavigationDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.OnMulchCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortRewardNotificationWidget::OnMulchCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnMulchCompleted");

	Params::UFortRewardNotificationWidget_OnMulchCompleted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelDeactivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "NotifyPanelDeactivated");

	Params::UFortRewardNotificationWidget_NotifyPanelDeactivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelActivated
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "NotifyPanelActivated");

	Params::UFortRewardNotificationWidget_NotifyPanelActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.MarkDefaultItemsForMulch
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>ItemList                                                         (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::MarkDefaultItemsForMulch(const TArray<struct FFortItemInstanceQuantityPair>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "MarkDefaultItemsForMulch");

	Params::UFortRewardNotificationWidget_MarkDefaultItemsForMulch_Params Parms{};

	Parms.ItemList = ItemList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionHidden
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bHidden                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::IsPrimaryActionHidden(bool* bHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "IsPrimaryActionHidden");

	Params::UFortRewardNotificationWidget_IsPrimaryActionHidden_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHidden != nullptr)
		*bHidden = Parms.bHidden;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionEnabled
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::IsPrimaryActionEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "IsPrimaryActionEnabled");

	Params::UFortRewardNotificationWidget_IsPrimaryActionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.InspectItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QuantityOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::InspectItem(class UFortItem* ItemToInspect, int32 QuantityOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "InspectItem");

	Params::UFortRewardNotificationWidget_InspectItem_Params Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.QuantityOverride = QuantityOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HideMulchConfirmationModal
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HideMulchConfirmationModal");

	Params::UFortRewardNotificationWidget_HideMulchConfirmationModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnQuestRewardClaimed
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UFortQuestItem*              Quest                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::HandleOnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnQuestRewardClaimed");

	Params::UFortRewardNotificationWidget_HandleOnQuestRewardClaimed_Params Parms{};

	Parms.Quest = Quest;
	Parms.Rewards = Rewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnNoQuestRewardsToClaim
// (Final, Native, Private)
// Parameters:

void UFortRewardNotificationWidget::HandleOnNoQuestRewardsToClaim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnNoQuestRewardsToClaim");

	Params::UFortRewardNotificationWidget_HandleOnNoQuestRewardsToClaim_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpenFailed
// (Final, Native, Private)
// Parameters:

void UFortRewardNotificationWidget::HandleOnMissionRewardsOpenFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnMissionRewardsOpenFailed");

	Params::UFortRewardNotificationWidget_HandleOnMissionRewardsOpenFailed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpened
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>MissionRewards                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::HandleOnMissionRewardsOpened(TArray<struct FFortItemInstanceQuantityPair>& MissionRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnMissionRewardsOpened");

	Params::UFortRewardNotificationWidget_HandleOnMissionRewardsOpened_Params Parms{};

	Parms.MissionRewards = MissionRewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionAlertRewardsOpened
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>AlertRewards                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::HandleOnMissionAlertRewardsOpened(TArray<struct FFortItemInstanceQuantityPair>& AlertRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnMissionAlertRewardsOpened");

	Params::UFortRewardNotificationWidget_HandleOnMissionAlertRewardsOpened_Params Parms{};

	Parms.AlertRewards = AlertRewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimFailed
// (Final, Native, Private)
// Parameters:

void UFortRewardNotificationWidget::HandleOnItemCacheRewardsClaimFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnItemCacheRewardsClaimFailed");

	Params::UFortRewardNotificationWidget_HandleOnItemCacheRewardsClaimFailed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimed
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>ClaimedRewards                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::HandleOnItemCacheRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& ClaimedRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnItemCacheRewardsClaimed");

	Params::UFortRewardNotificationWidget_HandleOnItemCacheRewardsClaimed_Params Parms{};

	Parms.ClaimedRewards = ClaimedRewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimFailed
// (Final, Native, Private)
// Parameters:

void UFortRewardNotificationWidget::HandleOnDifficultyIncreaseRewardsClaimFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnDifficultyIncreaseRewardsClaimFailed");

	Params::UFortRewardNotificationWidget_HandleOnDifficultyIncreaseRewardsClaimFailed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimed
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>DifficultyRewards                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::HandleOnDifficultyIncreaseRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& DifficultyRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnDifficultyIncreaseRewardsClaimed");

	Params::UFortRewardNotificationWidget_HandleOnDifficultyIncreaseRewardsClaimed_Params Parms{};

	Parms.DifficultyRewards = DifficultyRewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.HandleOnCollectionBookRewardClaimed
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FFortCollectionBookRewards  RewardClaimed                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortItemInstanceQuantityPair>ActualRewards                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::HandleOnCollectionBookRewardClaimed(const struct FFortCollectionBookRewards& RewardClaimed, bool bSuccess, TArray<struct FFortItemInstanceQuantityPair>& ActualRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnCollectionBookRewardClaimed");

	Params::UFortRewardNotificationWidget_HandleOnCollectionBookRewardClaimed_Params Parms{};

	Parms.RewardClaimed = RewardClaimed;
	Parms.bSuccess = bSuccess;
	Parms.ActualRewards = ActualRewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.BeginCloseRewardsScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::BeginCloseRewardsScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "BeginCloseRewardsScreen");

	Params::UFortRewardNotificationWidget_BeginCloseRewardsScreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddQuestData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::AddQuestData(class UFortQuestItem* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddQuestData");

	Params::UFortRewardNotificationWidget_AddQuestData_Params Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddPhoenixLevelUpRewardData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::AddPhoenixLevelUpRewardData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddPhoenixLevelUpRewardData");

	Params::UFortRewardNotificationWidget_AddPhoenixLevelUpRewardData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddMissionData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::AddMissionData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddMissionData");

	Params::UFortRewardNotificationWidget_AddMissionData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddMissionAlertData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::AddMissionAlertData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddMissionAlertData");

	Params::UFortRewardNotificationWidget_AddMissionAlertData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddItemCacheRewardData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortItem*                   ItemCache                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::AddItemCacheRewardData(class UFortItem* ItemCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddItemCacheRewardData");

	Params::UFortRewardNotificationWidget_AddItemCacheRewardData_Params Parms{};

	Parms.ItemCache = ItemCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddGiftBoxData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::AddGiftBoxData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddGiftBoxData");

	Params::UFortRewardNotificationWidget_AddGiftBoxData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddExpeditionData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortExpeditionItem*         ExpeditionItem                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::AddExpeditionData(class UFortExpeditionItem* ExpeditionItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddExpeditionData");

	Params::UFortRewardNotificationWidget_AddExpeditionData_Params Parms{};

	Parms.ExpeditionItem = ExpeditionItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddEpicQuestData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortQuestItem*              Quest                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::AddEpicQuestData(class UFortQuestItem* Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddEpicQuestData");

	Params::UFortRewardNotificationWidget_AddEpicQuestData_Params Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddDifficultyIncreaseRewardData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortRewardNotificationWidget::AddDifficultyIncreaseRewardData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddDifficultyIncreaseRewardData");

	Params::UFortRewardNotificationWidget_AddDifficultyIncreaseRewardData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortRewardNotificationWidget.AddCollectionBookData
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortCollectionBookRewards  CollectionBookRewards                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortRewardNotificationWidget::AddCollectionBookData(struct FFortCollectionBookRewards& CollectionBookRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddCollectionBookData");

	Params::UFortRewardNotificationWidget_AddCollectionBookData_Params Parms{};

	Parms.CollectionBookRewards = CollectionBookRewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortRewardPhoenixLevelUpData
// (None)

class UClass* UFortRewardPhoenixLevelUpData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardPhoenixLevelUpData");

	return Clss;
}


// FortRewardPhoenixLevelUpData SaveTheWorldUI.Default__FortRewardPhoenixLevelUpData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardPhoenixLevelUpData* UFortRewardPhoenixLevelUpData::GetDefaultObj()
{
	static class UFortRewardPhoenixLevelUpData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardPhoenixLevelUpData*>(UFortRewardPhoenixLevelUpData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortRewardQuestData
// (None)

class UClass* UFortRewardQuestData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRewardQuestData");

	return Clss;
}


// FortRewardQuestData SaveTheWorldUI.Default__FortRewardQuestData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRewardQuestData* UFortRewardQuestData::GetDefaultObj()
{
	static class UFortRewardQuestData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRewardQuestData*>(UFortRewardQuestData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.SaveTheWorldRegisterUIManager
// (None)

class UClass* USaveTheWorldRegisterUIManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveTheWorldRegisterUIManager");

	return Clss;
}


// SaveTheWorldRegisterUIManager SaveTheWorldUI.Default__SaveTheWorldRegisterUIManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USaveTheWorldRegisterUIManager* USaveTheWorldRegisterUIManager::GetDefaultObj()
{
	static class USaveTheWorldRegisterUIManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveTheWorldRegisterUIManager*>(USaveTheWorldRegisterUIManager::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.SaveTheWorldRequestsFeatureAction
// (None)

class UClass* USaveTheWorldRequestsFeatureAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveTheWorldRequestsFeatureAction");

	return Clss;
}


// SaveTheWorldRequestsFeatureAction SaveTheWorldUI.Default__SaveTheWorldRequestsFeatureAction
// (Public, ClassDefaultObject, ArchetypeObject)

class USaveTheWorldRequestsFeatureAction* USaveTheWorldRequestsFeatureAction::GetDefaultObj()
{
	static class USaveTheWorldRequestsFeatureAction* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveTheWorldRequestsFeatureAction*>(USaveTheWorldRequestsFeatureAction::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortSquadSelectorButton
// (None)

class UClass* UFortSquadSelectorButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSelectorButton");

	return Clss;
}


// FortSquadSelectorButton SaveTheWorldUI.Default__FortSquadSelectorButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSelectorButton* UFortSquadSelectorButton::GetDefaultObj()
{
	static class UFortSquadSelectorButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSelectorButton*>(UFortSquadSelectorButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSelectorButton.TryGetStaticSquadDataBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHomebaseSquad              OutSquadData                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSelectorButton::TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSelectorButton", "TryGetStaticSquadDataBP");

	Params::UFortSquadSelectorButton_TryGetStaticSquadDataBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadData != nullptr)
		*OutSquadData = Parms.OutSquadData;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSelectorButton.SetIdOfSquadToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSelectorButton::SetIdOfSquadToManageBP(class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSelectorButton", "SetIdOfSquadToManageBP");

	Params::UFortSquadSelectorButton_SetIdOfSquadToManageBP_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSelectorButton.HandleSquadChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSelectorButton::HandleSquadChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSelectorButton", "HandleSquadChangedBP");

	Params::UFortSquadSelectorButton_HandleSquadChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSelectorButton.HandleDifferentSquadSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSelectorButton::HandleDifferentSquadSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSelectorButton", "HandleDifferentSquadSetBP");

	Params::UFortSquadSelectorButton_HandleDifferentSquadSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSelectorButton.GetIdOfSquadToManageBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFortSquadSelectorButton::GetIdOfSquadToManageBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSelectorButton", "GetIdOfSquadToManageBP");

	Params::UFortSquadSelectorButton_GetIdOfSquadToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortDefenderSquadSelectorButton
// (None)

class UClass* UFortDefenderSquadSelectorButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDefenderSquadSelectorButton");

	return Clss;
}


// FortDefenderSquadSelectorButton SaveTheWorldUI.Default__FortDefenderSquadSelectorButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDefenderSquadSelectorButton* UFortDefenderSquadSelectorButton::GetDefaultObj()
{
	static class UFortDefenderSquadSelectorButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDefenderSquadSelectorButton*>(UFortDefenderSquadSelectorButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      OutTheaterUniqueId                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OutIsUnlocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDefenderSquadSelectorButton::TryGetTheaterUniqueId(class FString* OutTheaterUniqueId, bool* OutIsUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDefenderSquadSelectorButton", "TryGetTheaterUniqueId");

	Params::UFortDefenderSquadSelectorButton_TryGetTheaterUniqueId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTheaterUniqueId != nullptr)
		*OutTheaterUniqueId = Parms.OutTheaterUniqueId;

	if (OutIsUnlocked != nullptr)
		*OutIsUnlocked = Parms.OutIsUnlocked;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortDefenderSquadSelectorButton.TryGetPowerLevel
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OutPowerLevel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortDefenderSquadSelectorButton::TryGetPowerLevel(int32* OutPowerLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDefenderSquadSelectorButton", "TryGetPowerLevel");

	Params::UFortDefenderSquadSelectorButton_TryGetPowerLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPowerLevel != nullptr)
		*OutPowerLevel = Parms.OutPowerLevel;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortSquadStatDetailsWidget
// (None)

class UClass* UFortSquadStatDetailsWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadStatDetailsWidget");

	return Clss;
}


// FortSquadStatDetailsWidget SaveTheWorldUI.Default__FortSquadStatDetailsWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadStatDetailsWidget* UFortSquadStatDetailsWidget::GetDefaultObj()
{
	static class UFortSquadStatDetailsWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadStatDetailsWidget*>(UFortSquadStatDetailsWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortHeroSquadBonusPerksWidgetBase
// (None)

class UClass* UFortHeroSquadBonusPerksWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroSquadBonusPerksWidgetBase");

	return Clss;
}


// FortHeroSquadBonusPerksWidgetBase SaveTheWorldUI.Default__FortHeroSquadBonusPerksWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroSquadBonusPerksWidgetBase* UFortHeroSquadBonusPerksWidgetBase::GetDefaultObj()
{
	static class UFortHeroSquadBonusPerksWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroSquadBonusPerksWidgetBase*>(UFortHeroSquadBonusPerksWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortSquadManagementScreenBase
// (None)

class UClass* UFortSquadManagementScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadManagementScreenBase");

	return Clss;
}


// FortSquadManagementScreenBase SaveTheWorldUI.Default__FortSquadManagementScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadManagementScreenBase* UFortSquadManagementScreenBase::GetDefaultObj()
{
	static class UFortSquadManagementScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadManagementScreenBase*>(UFortSquadManagementScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHomebaseSquad              OutSquadData                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadManagementScreenBase::TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "TryGetStaticSquadDataBP");

	Params::UFortSquadManagementScreenBase_TryGetStaticSquadDataBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadData != nullptr)
		*OutSquadData = Parms.OutSquadData;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadTeamAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAttribute          OutGameplayAttribute                                             (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadManagementScreenBase::TryGetSquadTeamAttribute(struct FGameplayAttribute* OutGameplayAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "TryGetSquadTeamAttribute");

	Params::UFortSquadManagementScreenBase_TryGetSquadTeamAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGameplayAttribute != nullptr)
		*OutGameplayAttribute = Parms.OutGameplayAttribute;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadMainAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAttribute          OutGameplayAttribute                                             (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadManagementScreenBase::TryGetSquadMainAttribute(struct FGameplayAttribute* OutGameplayAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "TryGetSquadMainAttribute");

	Params::UFortSquadManagementScreenBase_TryGetSquadMainAttribute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGameplayAttribute != nullptr)
		*OutGameplayAttribute = Parms.OutGameplayAttribute;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.TryGetAttributeValueFromSquad
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadManagementScreenBase::TryGetAttributeValueFromSquad(float* OutValue, struct FGameplayAttribute& Attribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "TryGetAttributeValueFromSquad");

	Params::UFortSquadManagementScreenBase_TryGetAttributeValueFromSquad_Params Parms{};

	Parms.Attribute = Attribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.ShowWarningReadOnlyWIFE
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Force                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::ShowWarningReadOnlyWIFE(bool Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "ShowWarningReadOnlyWIFE");

	Params::UFortSquadManagementScreenBase_ShowWarningReadOnlyWIFE_Params Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.SetupInputHandlers
// (Native, Protected, BlueprintCallable)
// Parameters:

void UFortSquadManagementScreenBase::SetupInputHandlers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SetupInputHandlers");

	Params::UFortSquadManagementScreenBase_SetupInputHandlers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::SetIdOfSquadToManageBP(class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SetIdOfSquadToManageBP");

	Params::UFortSquadManagementScreenBase_SetIdOfSquadToManageBP_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectSquadWithOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::SelectSquadWithOffset(int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SelectSquadWithOffset");

	Params::UFortSquadManagementScreenBase_SelectSquadWithOffset_Params Parms{};

	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectPreviousSquad
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadManagementScreenBase::SelectPreviousSquad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SelectPreviousSquad");

	Params::UFortSquadManagementScreenBase_SelectPreviousSquad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.SelectNextSquad
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadManagementScreenBase::SelectNextSquad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SelectNextSquad");

	Params::UFortSquadManagementScreenBase_SelectNextSquad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.NavigateToSquadSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::NavigateToSquadSlot(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "NavigateToSquadSlot");

	Params::UFortSquadManagementScreenBase_NavigateToSquadSlot_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.IsScreenWIFE
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadManagementScreenBase::IsScreenWIFE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "IsScreenWIFE");

	Params::UFortSquadManagementScreenBase_IsScreenWIFE_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleViewInAll
// (Final, Native, Private)
// Parameters:
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::HandleViewInAll(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleViewInAll");

	Params::UFortSquadManagementScreenBase_HandleViewInAll_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadManagementScreenBase::HandleSquadStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleSquadStateChanged");

	Params::UFortSquadManagementScreenBase_HandleSquadStateChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerShown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadManagementScreenBase::HandleSquadSlotPickerShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleSquadSlotPickerShown");

	Params::UFortSquadManagementScreenBase_HandleSquadSlotPickerShown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadManagementScreenBase::HandleSquadSlotPickerHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleSquadSlotPickerHidden");

	Params::UFortSquadManagementScreenBase_HandleSquadSlotPickerHidden_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleShouldAutoSlotSurvivorSquadsChanged
// (Final, Native, Private)
// Parameters:

void UFortSquadManagementScreenBase::HandleShouldAutoSlotSurvivorSquadsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleShouldAutoSlotSurvivorSquadsChanged");

	Params::UFortSquadManagementScreenBase_HandleShouldAutoSlotSurvivorSquadsChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleSelectPickerSlotInputAction
// (Final, Native, Private)
// Parameters:

void UFortSquadManagementScreenBase::HandleSelectPickerSlotInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleSelectPickerSlotInputAction");

	Params::UFortSquadManagementScreenBase_HandleSelectPickerSlotInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePreviousSquadInputAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortSquadManagementScreenBase::HandlePreviousSquadInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandlePreviousSquadInputAction");

	Params::UFortSquadManagementScreenBase_HandlePreviousSquadInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted
// (Final, Native, Private)
// Parameters:
// class UFortItem*                   CommittedItem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::HandlePickerSelectionCommitted(class UFortItem* CommittedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandlePickerSelectionCommitted");

	Params::UFortSquadManagementScreenBase_HandlePickerSelectionCommitted_Params Parms{};

	Parms.CommittedItem = CommittedItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged
// (Final, Native, Private)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::HandlePickerSelectionChanged(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandlePickerSelectionChanged");

	Params::UFortSquadManagementScreenBase_HandlePickerSelectionChanged_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleOpenSquadSlot
// (Final, Native, Private)
// Parameters:
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::HandleOpenSquadSlot(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleOpenSquadSlot");

	Params::UFortSquadManagementScreenBase_HandleOpenSquadSlot_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleNextSquadInputAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortSquadManagementScreenBase::HandleNextSquadInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleNextSquadInputAction");

	Params::UFortSquadManagementScreenBase_HandleNextSquadInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleManageInputAction
// (Final, Native, Protected)
// Parameters:

void UFortSquadManagementScreenBase::HandleManageInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleManageInputAction");

	Params::UFortSquadManagementScreenBase_HandleManageInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleInventoryInputAction
// (Final, Native, Private)
// Parameters:

void UFortSquadManagementScreenBase::HandleInventoryInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleInventoryInputAction");

	Params::UFortSquadManagementScreenBase_HandleInventoryInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleInspectInputAction
// (Final, Native, Private)
// Parameters:

void UFortSquadManagementScreenBase::HandleInspectInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleInspectInputAction");

	Params::UFortSquadManagementScreenBase_HandleInspectInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected
// (Native, Protected)
// Parameters:
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadManagementScreenBase::HandleDifferentSquadSlotSelected(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleDifferentSquadSlotSelected");

	Params::UFortSquadManagementScreenBase_HandleDifferentSquadSlotSelected_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadManagementScreenBase::HandleDifferentSquadSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleDifferentSquadSetBP");

	Params::UFortSquadManagementScreenBase_HandleDifferentSquadSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleCyclePickerSortInputAction
// (Final, Native, Private)
// Parameters:

void UFortSquadManagementScreenBase::HandleCyclePickerSortInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleCyclePickerSortInputAction");

	Params::UFortSquadManagementScreenBase_HandleCyclePickerSortInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleClosePickerInputAction
// (Final, Native, Private)
// Parameters:

void UFortSquadManagementScreenBase::HandleClosePickerInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleClosePickerInputAction");

	Params::UFortSquadManagementScreenBase_HandleClosePickerInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.HandleBackInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortSquadManagementScreenBase::HandleBackInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleBackInputAction");

	Params::UFortSquadManagementScreenBase_HandleBackInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.GetNumUnlockedSquads
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortSquadManagementScreenBase::GetNumUnlockedSquads()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "GetNumUnlockedSquads");

	Params::UFortSquadManagementScreenBase_GetNumUnlockedSquads_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFortSquadManagementScreenBase::GetIdOfSquadToManageBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "GetIdOfSquadToManageBP");

	Params::UFortSquadManagementScreenBase_GetIdOfSquadToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadManagementScreenBase.ClearSquad
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadManagementScreenBase::ClearSquad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "ClearSquad");

	Params::UFortSquadManagementScreenBase_ClearSquad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortHeroSquadManagementScreen
// (None)

class UClass* UFortHeroSquadManagementScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHeroSquadManagementScreen");

	return Clss;
}


// FortHeroSquadManagementScreen SaveTheWorldUI.Default__FortHeroSquadManagementScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHeroSquadManagementScreen* UFortHeroSquadManagementScreen::GetDefaultObj()
{
	static class UFortHeroSquadManagementScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHeroSquadManagementScreen*>(UFortHeroSquadManagementScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortHeroSquadManagementScreen.PlayFeedbackForSlottingPerson
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCharacter*              Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHeroSquadManagementScreen::PlayFeedbackForSlottingPerson(class UFortCharacter* Character, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHeroSquadManagementScreen", "PlayFeedbackForSlottingPerson");

	Params::UFortHeroSquadManagementScreen_PlayFeedbackForSlottingPerson_Params Parms{};

	Parms.Character = Character;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSquadIcon
// (None)

class UClass* UFortSquadIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadIcon");

	return Clss;
}


// FortSquadIcon SaveTheWorldUI.Default__FortSquadIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadIcon* UFortSquadIcon::GetDefaultObj()
{
	static class UFortSquadIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadIcon*>(UFortSquadIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadIcon.SetSquad
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadIcon::SetSquad(class FName& InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadIcon", "SetSquad");

	Params::UFortSquadIcon_SetSquad_Params Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadIcon.HandleDifferentSquadSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadIcon::HandleDifferentSquadSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadIcon", "HandleDifferentSquadSetBP");

	Params::UFortSquadIcon_HandleDifferentSquadSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
// (None)

class UClass* UFortSquadLandingPageDefenderSquadDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSquadDetails");

	return Clss;
}


// FortSquadLandingPageDefenderSquadDetails SaveTheWorldUI.Default__FortSquadLandingPageDefenderSquadDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadLandingPageDefenderSquadDetails* UFortSquadLandingPageDefenderSquadDetails::GetDefaultObj()
{
	static class UFortSquadLandingPageDefenderSquadDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadLandingPageDefenderSquadDetails*>(UFortSquadLandingPageDefenderSquadDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortLandingPageDefenderSummaryInfoDefenderSummaryInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortSquadLandingPageDefenderSquadDetails::SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSquadDetails", "SetDefenderSquadInfo");

	Params::UFortSquadLandingPageDefenderSquadDetails_SetDefenderSquadInfo_Params Parms{};

	Parms.DefenderSummaryInfo = DefenderSummaryInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortLandingPageDefenderSummaryInfoDefenderSummaryInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortSquadLandingPageDefenderSquadDetails::HandleDefenderSquadInfoSetBP(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSquadDetails", "HandleDefenderSquadInfoSetBP");

	Params::UFortSquadLandingPageDefenderSquadDetails_HandleDefenderSquadInfoSetBP_Params Parms{};

	Parms.DefenderSummaryInfo = DefenderSummaryInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadLandingPageDefenderSquadDetails::HandleAddDefenderSquadMemberBP(class FName& SquadId, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSquadDetails", "HandleAddDefenderSquadMemberBP");

	Params::UFortSquadLandingPageDefenderSquadDetails_HandleAddDefenderSquadMemberBP_Params Parms{};

	Parms.SquadId = SquadId;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
// (None)

class UClass* UFortSquadLandingPageDefenderSquadDetailsLocked::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSquadDetailsLocked");

	return Clss;
}


// FortSquadLandingPageDefenderSquadDetailsLocked SaveTheWorldUI.Default__FortSquadLandingPageDefenderSquadDetailsLocked
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadLandingPageDefenderSquadDetailsLocked* UFortSquadLandingPageDefenderSquadDetailsLocked::GetDefaultObj()
{
	static class UFortSquadLandingPageDefenderSquadDetailsLocked* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadLandingPageDefenderSquadDetailsLocked*>(UFortSquadLandingPageDefenderSquadDetailsLocked::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked.SetDefenderSquadInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortLandingPageDefenderSummaryInfoDefenderSummaryInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortSquadLandingPageDefenderSquadDetailsLocked::SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSquadDetailsLocked", "SetDefenderSquadInfo");

	Params::UFortSquadLandingPageDefenderSquadDetailsLocked_SetDefenderSquadInfo_Params Parms{};

	Parms.DefenderSummaryInfo = DefenderSummaryInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortSquadLandingPageDefenderSummary
// (None)

class UClass* UFortSquadLandingPageDefenderSummary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadLandingPageDefenderSummary");

	return Clss;
}


// FortSquadLandingPageDefenderSummary SaveTheWorldUI.Default__FortSquadLandingPageDefenderSummary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadLandingPageDefenderSummary* UFortSquadLandingPageDefenderSummary::GetDefaultObj()
{
	static class UFortSquadLandingPageDefenderSummary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadLandingPageDefenderSummary*>(UFortSquadLandingPageDefenderSummary::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortSquadLandingPageDefenderSummary::HandleClearDefenderSquadDetailsBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSummary", "HandleClearDefenderSquadDetailsBP");

	Params::UFortSquadLandingPageDefenderSummary_HandleClearDefenderSquadDetailsBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortLandingPageDefenderSummaryInfoDefenderSummaryInfo                                              (Parm, NativeAccessSpecifierPublic)

void UFortSquadLandingPageDefenderSummary::HandleAddLockedDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSummary", "HandleAddLockedDefenderSquadDetailsBP");

	Params::UFortSquadLandingPageDefenderSummary_HandleAddLockedDefenderSquadDetailsBP_Params Parms{};

	Parms.DefenderSummaryInfo = DefenderSummaryInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortLandingPageDefenderSummaryInfoDefenderSummaryInfo                                              (Parm, NativeAccessSpecifierPublic)

void UFortSquadLandingPageDefenderSummary::HandleAddDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSummary", "HandleAddDefenderSquadDetailsBP");

	Params::UFortSquadLandingPageDefenderSummary_HandleAddDefenderSquadDetailsBP_Params Parms{};

	Parms.DefenderSummaryInfo = DefenderSummaryInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
// (None)

class UClass* UFortSquadLandingPageSurvivorSummary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadLandingPageSurvivorSummary");

	return Clss;
}


// FortSquadLandingPageSurvivorSummary SaveTheWorldUI.Default__FortSquadLandingPageSurvivorSummary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadLandingPageSurvivorSummary* UFortSquadLandingPageSurvivorSummary::GetDefaultObj()
{
	static class UFortSquadLandingPageSurvivorSummary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadLandingPageSurvivorSummary*>(UFortSquadLandingPageSurvivorSummary::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleClearSetBonusSummaryLineItemsBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortSquadLandingPageSurvivorSummary::HandleClearSetBonusSummaryLineItemsBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageSurvivorSummary", "HandleClearSetBonusSummaryLineItemsBP");

	Params::UFortSquadLandingPageSurvivorSummary_HandleClearSetBonusSummaryLineItemsBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortAttributeModifierAccumulationAttributeModifierAccumulation                                    (Parm, NativeAccessSpecifierPublic)

void UFortSquadLandingPageSurvivorSummary::HandleAddSetBonusSummaryLineItemBP(const struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadLandingPageSurvivorSummary", "HandleAddSetBonusSummaryLineItemBP");

	Params::UFortSquadLandingPageSurvivorSummary_HandleAddSetBonusSummaryLineItemBP_Params Parms{};

	Parms.AttributeModifierAccumulation = AttributeModifierAccumulation;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSquadManagementItemViewContextBase
// (None)

class UClass* UFortSquadManagementItemViewContextBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadManagementItemViewContextBase");

	return Clss;
}


// FortSquadManagementItemViewContextBase SaveTheWorldUI.Default__FortSquadManagementItemViewContextBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadManagementItemViewContextBase* UFortSquadManagementItemViewContextBase::GetDefaultObj()
{
	static class UFortSquadManagementItemViewContextBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadManagementItemViewContextBase*>(UFortSquadManagementItemViewContextBase::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortItemViewContext_SquadSlotsView
// (None)

class UClass* UFortItemViewContext_SquadSlotsView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemViewContext_SquadSlotsView");

	return Clss;
}


// FortItemViewContext_SquadSlotsView SaveTheWorldUI.Default__FortItemViewContext_SquadSlotsView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemViewContext_SquadSlotsView* UFortItemViewContext_SquadSlotsView::GetDefaultObj()
{
	static class UFortItemViewContext_SquadSlotsView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemViewContext_SquadSlotsView*>(UFortItemViewContext_SquadSlotsView::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker
// (None)

class UClass* UFortItemViewContext_SquadSlotItemPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemViewContext_SquadSlotItemPicker");

	return Clss;
}


// FortItemViewContext_SquadSlotItemPicker SaveTheWorldUI.Default__FortItemViewContext_SquadSlotItemPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemViewContext_SquadSlotItemPicker* UFortItemViewContext_SquadSlotItemPicker::GetDefaultObj()
{
	static class UFortItemViewContext_SquadSlotItemPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemViewContext_SquadSlotItemPicker*>(UFortItemViewContext_SquadSlotItemPicker::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView
// (None)

class UClass* UFortItemViewContext_ExpeditionSquadSlotsView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemViewContext_ExpeditionSquadSlotsView");

	return Clss;
}


// FortItemViewContext_ExpeditionSquadSlotsView SaveTheWorldUI.Default__FortItemViewContext_ExpeditionSquadSlotsView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemViewContext_ExpeditionSquadSlotsView* UFortItemViewContext_ExpeditionSquadSlotsView::GetDefaultObj()
{
	static class UFortItemViewContext_ExpeditionSquadSlotsView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemViewContext_ExpeditionSquadSlotsView*>(UFortItemViewContext_ExpeditionSquadSlotsView::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
// (None)

class UClass* UFortItemViewContext_ExpeditionSquadSlotItemPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemViewContext_ExpeditionSquadSlotItemPicker");

	return Clss;
}


// FortItemViewContext_ExpeditionSquadSlotItemPicker SaveTheWorldUI.Default__FortItemViewContext_ExpeditionSquadSlotItemPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemViewContext_ExpeditionSquadSlotItemPicker* UFortItemViewContext_ExpeditionSquadSlotItemPicker::GetDefaultObj()
{
	static class UFortItemViewContext_ExpeditionSquadSlotItemPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemViewContext_ExpeditionSquadSlotItemPicker*>(UFortItemViewContext_ExpeditionSquadSlotItemPicker::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortSquadSlotDetailsPanel
// (None)

class UClass* UFortSquadSlotDetailsPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotDetailsPanel");

	return Clss;
}


// FortSquadSlotDetailsPanel SaveTheWorldUI.Default__FortSquadSlotDetailsPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotDetailsPanel* UFortSquadSlotDetailsPanel::GetDefaultObj()
{
	static class UFortSquadSlotDetailsPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotDetailsPanel*>(UFortSquadSlotDetailsPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*                   OutItemToPreviewInSlot                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotDetailsPanel::TryGetItemToPreviewInSlot(class UFortItem** OutItemToPreviewInSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "TryGetItemToPreviewInSlot");

	Params::UFortSquadSlotDetailsPanel_TryGetItemToPreviewInSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItemToPreviewInSlot != nullptr)
		*OutItemToPreviewInSlot = Parms.OutItemToPreviewInSlot;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.SetScrollWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadSlotDetailsPanel::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "SetScrollWidget");

	Params::UFortSquadSlotDetailsPanel_SetScrollWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotDetailsPanel::SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "SetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotDetailsPanel_SetIdOfSquadSlotToManageBP_Params Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotDetailsPanel::IsSquadSlotLockedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "IsSquadSlotLockedBP");

	Params::UFortSquadSlotDetailsPanel_IsSquadSlotLockedBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotStateChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSlotDetailsPanel::HandleSquadSlotStateChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "HandleSquadSlotStateChangedBP");

	Params::UFortSquadSlotDetailsPanel_HandleSquadSlotStateChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotRestrictionFactorsChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSlotDetailsPanel::HandleSquadSlotRestrictionFactorsChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "HandleSquadSlotRestrictionFactorsChangedBP");

	Params::UFortSquadSlotDetailsPanel_HandleSquadSlotRestrictionFactorsChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSlotDetailsPanel::HandleDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "HandleDifferentSquadSlotSetBP");

	Params::UFortSquadSlotDetailsPanel_HandleDifferentSquadSlotSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortSquadSlottingRestrictionReason>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class EFortSquadSlottingRestrictionReason> UFortSquadSlotDetailsPanel::GetSlottingRestrictionReasons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "GetSlottingRestrictionReasons");

	Params::UFortSquadSlotDetailsPanel_GetSlottingRestrictionReasons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItem* UFortSquadSlotDetailsPanel::GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "GetItemInSquadSlotBP");

	Params::UFortSquadSlotDetailsPanel_GetItemInSquadSlotBP_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutSquadSlotIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotDetailsPanel::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "GetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotDetailsPanel_GetIdOfSquadSlotToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;

}


// Class SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
// (None)

class UClass* UFortSquadSlotItemDetailElementWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotItemDetailElementWidget");

	return Clss;
}


// FortSquadSlotItemDetailElementWidget SaveTheWorldUI.Default__FortSquadSlotItemDetailElementWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotItemDetailElementWidget* UFortSquadSlotItemDetailElementWidget::GetDefaultObj()
{
	static class UFortSquadSlotItemDetailElementWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotItemDetailElementWidget*>(UFortSquadSlotItemDetailElementWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotItemDetailElementWidget::SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "SetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotItemDetailElementWidget_SetIdOfSquadSlotToManageBP_Params Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotItemDetailElementWidget::IsSquadSlotLockedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "IsSquadSlotLockedBP");

	Params::UFortSquadSlotItemDetailElementWidget_IsSquadSlotLockedBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSlotItemDetailElementWidget::HandlePostDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "HandlePostDifferentSquadSlotSetBP");

	Params::UFortSquadSlotItemDetailElementWidget_HandlePostDifferentSquadSlotSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItem* UFortSquadSlotItemDetailElementWidget::GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "GetItemInSquadSlotBP");

	Params::UFortSquadSlotItemDetailElementWidget_GetItemInSquadSlotBP_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutSquadSlotIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotItemDetailElementWidget::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "GetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotItemDetailElementWidget_GetIdOfSquadSlotToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;

}


// Class SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
// (None)

class UClass* UFortSquadSlotItemDetailsHostPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotItemDetailsHostPanel");

	return Clss;
}


// FortSquadSlotItemDetailsHostPanel SaveTheWorldUI.Default__FortSquadSlotItemDetailsHostPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotItemDetailsHostPanel* UFortSquadSlotItemDetailsHostPanel::GetDefaultObj()
{
	static class UFortSquadSlotItemDetailsHostPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotItemDetailsHostPanel*>(UFortSquadSlotItemDetailsHostPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotItemDetailsHostPanel::SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailsHostPanel", "SetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotItemDetailsHostPanel_SetIdOfSquadSlotToManageBP_Params Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotItemDetailsHostPanel::IsSquadSlotLockedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailsHostPanel", "IsSquadSlotLockedBP");

	Params::UFortSquadSlotItemDetailsHostPanel_IsSquadSlotLockedBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItem* UFortSquadSlotItemDetailsHostPanel::GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailsHostPanel", "GetItemInSquadSlotBP");

	Params::UFortSquadSlotItemDetailsHostPanel_GetItemInSquadSlotBP_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutSquadSlotIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotItemDetailsHostPanel::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemDetailsHostPanel", "GetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotItemDetailsHostPanel_GetIdOfSquadSlotToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;

}


// Class SaveTheWorldUI.FortSquadSlotItemPicker
// (None)

class UClass* UFortSquadSlotItemPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotItemPicker");

	return Clss;
}


// FortSquadSlotItemPicker SaveTheWorldUI.Default__FortSquadSlotItemPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotItemPicker* UFortSquadSlotItemPicker::GetDefaultObj()
{
	static class UFortSquadSlotItemPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotItemPicker*>(UFortSquadSlotItemPicker::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotItemPicker.SetSortTypes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSquadSlotSortTypes         SquadSlotSortTypes                                               (Parm, NativeAccessSpecifierPublic)

void UFortSquadSlotItemPicker::SetSortTypes(const struct FSquadSlotSortTypes& SquadSlotSortTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "SetSortTypes");

	Params::UFortSquadSlotItemPicker_SetSortTypes_Params Parms{};

	Parms.SquadSlotSortTypes = SquadSlotSortTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotItemPicker::SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "SetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotItemPicker_SetIdOfSquadSlotToManageBP_Params Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutSquadSlotIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotItemPicker::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "GetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotItemPicker_GetIdOfSquadSlotToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;

}


// DelegateFunction SaveTheWorldUI.FortSquadSlotItemPicker.FortSquadSlotSortChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class ESquadSlotSortType      CurrentSortType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESquadSlotType          SquadSlotType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotItemPicker::FortSquadSlotSortChanged__DelegateSignature(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType SquadSlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "FortSquadSlotSortChanged__DelegateSignature");

	Params::UFortSquadSlotItemPicker_FortSquadSlotSortChanged__DelegateSignature_Params Parms{};

	Parms.CurrentSortType = CurrentSortType;
	Parms.SquadSlotType = SquadSlotType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotItemPicker.CycleSortType
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadSlotItemPicker::CycleSortType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "CycleSortType");

	Params::UFortSquadSlotItemPicker_CycleSortType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortSquadSlotItemPickerTileButton
// (None)

class UClass* UFortSquadSlotItemPickerTileButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotItemPickerTileButton");

	return Clss;
}


// FortSquadSlotItemPickerTileButton SaveTheWorldUI.Default__FortSquadSlotItemPickerTileButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotItemPickerTileButton* UFortSquadSlotItemPickerTileButton::GetDefaultObj()
{
	static class UFortSquadSlotItemPickerTileButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotItemPickerTileButton*>(UFortSquadSlotItemPickerTileButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSlotItemPickerTileButton::HandleSlottingRestrictionReasonsChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemPickerTileButton", "HandleSlottingRestrictionReasonsChanged");

	Params::UFortSquadSlotItemPickerTileButton_HandleSlottingRestrictionReasonsChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHomebaseSquadSlotId        SquadSlotId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotItemPickerTileButton::HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemPickerTileButton", "HandleItemSlottedToDifferentSquad");

	Params::UFortSquadSlotItemPickerTileButton_HandleItemSlottedToDifferentSquad_Params Parms{};

	Parms.SquadSlotId = SquadSlotId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortSquadSlottingRestrictionReason>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class EFortSquadSlottingRestrictionReason> UFortSquadSlotItemPickerTileButton::GetSlottingRestrictionReasons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotItemPickerTileButton", "GetSlottingRestrictionReasons");

	Params::UFortSquadSlotItemPickerTileButton_GetSlottingRestrictionReasons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
// (None)

class UClass* UFortSquadSlotSelectorPopupMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotSelectorPopupMenu");

	return Clss;
}


// FortSquadSlotSelectorPopupMenu SaveTheWorldUI.Default__FortSquadSlotSelectorPopupMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotSelectorPopupMenu* UFortSquadSlotSelectorPopupMenu::GetDefaultObj()
{
	static class UFortSquadSlotSelectorPopupMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotSelectorPopupMenu*>(UFortSquadSlotSelectorPopupMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.IsScreenWIFE
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotSelectorPopupMenu::IsScreenWIFE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorPopupMenu", "IsScreenWIFE");

	Params::UFortSquadSlotSelectorPopupMenu_IsScreenWIFE_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.GetHostButton
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortSquadSlotSelectorButton*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortSquadSlotSelectorButton* UFortSquadSlotSelectorPopupMenu::GetHostButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorPopupMenu", "GetHostButton");

	Params::UFortSquadSlotSelectorPopupMenu_GetHostButton_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
// (None)

class UClass* UFortSquadSlotSurvivorTraitMatchesDetailWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotSurvivorTraitMatchesDetailWidget");

	return Clss;
}


// FortSquadSlotSurvivorTraitMatchesDetailWidget SaveTheWorldUI.Default__FortSquadSlotSurvivorTraitMatchesDetailWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotSurvivorTraitMatchesDetailWidget* UFortSquadSlotSurvivorTraitMatchesDetailWidget::GetDefaultObj()
{
	static class UFortSquadSlotSurvivorTraitMatchesDetailWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotSurvivorTraitMatchesDetailWidget*>(UFortSquadSlotSurvivorTraitMatchesDetailWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget.HandleTraitValuesUpdatedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSlotSurvivorTraitMatchesDetailWidget::HandleTraitValuesUpdatedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSurvivorTraitMatchesDetailWidget", "HandleTraitValuesUpdatedBP");

	Params::UFortSquadSlotSurvivorTraitMatchesDetailWidget_HandleTraitValuesUpdatedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSquadSlotSelectorButton
// (None)

class UClass* UFortSquadSlotSelectorButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotSelectorButton");

	return Clss;
}


// FortSquadSlotSelectorButton SaveTheWorldUI.Default__FortSquadSlotSelectorButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotSelectorButton* UFortSquadSlotSelectorButton::GetDefaultObj()
{
	static class UFortSquadSlotSelectorButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotSelectorButton*>(UFortSquadSlotSelectorButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.ViewInAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadSlotSelectorButton::ViewInAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "ViewInAll");

	Params::UFortSquadSlotSelectorButton_ViewInAll_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.SquadSlotWidgetUpdated
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortSquadSlotSelectorButton::SquadSlotWidgetUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "SquadSlotWidgetUpdated");

	Params::UFortSquadSlotSelectorButton_SquadSlotWidgetUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotSelectorButton::SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "SetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotSelectorButton_SetIdOfSquadSlotToManageBP_Params Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.OpenSquadSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadSlotSelectorButton::OpenSquadSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "OpenSquadSlot");

	Params::UFortSquadSlotSelectorButton_OpenSquadSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotSelectorButton::IsSquadSlotLockedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "IsSquadSlotLockedBP");

	Params::UFortSquadSlotSelectorButton_IsSquadSlotLockedBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePreDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSlotSelectorButton::HandlePreDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "HandlePreDifferentSquadSlotSetBP");

	Params::UFortSquadSlotSelectorButton_HandlePreDifferentSquadSlotSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadSlotSelectorButton::HandlePostDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "HandlePostDifferentSquadSlotSetBP");

	Params::UFortSquadSlotSelectorButton_HandlePostDifferentSquadSlotSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetPopupMenu
// (Final, Native, Private)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UFortSquadSlotSelectorButton::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "GetPopupMenu");

	Params::UFortSquadSlotSelectorButton_GetPopupMenu_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetInPreviewMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotSelectorButton::GetInPreviewMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "GetInPreviewMode");

	Params::UFortSquadSlotSelectorButton_GetInPreviewMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutSquadSlotIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotSelectorButton::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "GetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotSelectorButton_GetIdOfSquadSlotToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;

}


// Class SaveTheWorldUI.FortSquadSlotsView
// (None)

class UClass* UFortSquadSlotsView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotsView");

	return Clss;
}


// FortSquadSlotsView SaveTheWorldUI.Default__FortSquadSlotsView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotsView* UFortSquadSlotsView::GetDefaultObj()
{
	static class UFortSquadSlotsView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotsView*>(UFortSquadSlotsView::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotsView.TryGetStaticSquadDataBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHomebaseSquad              OutSquadData                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotsView::TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "TryGetStaticSquadDataBP");

	Params::UFortSquadSlotsView_TryGetStaticSquadDataBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadData != nullptr)
		*OutSquadData = Parms.OutSquadData;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotsView.TryGetSelectedSquadSlotSortTypes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSquadSlotSortTypes         OutSlotSortTypes                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotsView::TryGetSelectedSquadSlotSortTypes(struct FSquadSlotSortTypes* OutSlotSortTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "TryGetSelectedSquadSlotSortTypes");

	Params::UFortSquadSlotsView_TryGetSelectedSquadSlotSortTypes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSlotSortTypes != nullptr)
		*OutSlotSortTypes = Parms.OutSlotSortTypes;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotsView.SetIsSelectionLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ShouldSelectionBeLocked                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::SetIsSelectionLocked(bool ShouldSelectionBeLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "SetIsSelectionLocked");

	Params::UFortSquadSlotsView_SetIsSelectionLocked_Params Parms{};

	Parms.ShouldSelectionBeLocked = ShouldSelectionBeLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.SetInPreviewMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPreview                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::SetInPreviewMode(bool bPreview)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "SetInPreviewMode");

	Params::UFortSquadSlotsView_SetInPreviewMode_Params Parms{};

	Parms.bPreview = bPreview;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.SetIdOfSquadToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::SetIdOfSquadToManageBP(class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "SetIdOfSquadToManageBP");

	Params::UFortSquadSlotsView_SetIdOfSquadToManageBP_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.SelectSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::SelectSlot(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "SelectSlot");

	Params::UFortSquadSlotsView_SelectSlot_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction SaveTheWorldUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "OnDifferentSquadSlotSelected__DelegateSignature");

	Params::UFortSquadSlotsView_OnDifferentSquadSlotSelected__DelegateSignature_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadSlotsView.HandleSelectedButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonLegacy*         SelectedButton                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::HandleSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleSelectedButtonChanged");

	Params::UFortSquadSlotsView_HandleSelectedButtonChanged_Params Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.HandleRequestViewInAll
// (Final, Native, Private)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::HandleRequestViewInAll(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleRequestViewInAll");

	Params::UFortSquadSlotsView_HandleRequestViewInAll_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.HandleRequestOpenSquadSlot
// (Final, Native, Private)
// Parameters:
// int32                              SquadSlotIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::HandleRequestOpenSquadSlot(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleRequestOpenSquadSlot");

	Params::UFortSquadSlotsView_HandleRequestOpenSquadSlot_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.HandleHoveredButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonLegacy*         HoveredButton                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::HandleHoveredButtonChanged(class UCommonButtonLegacy* HoveredButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleHoveredButtonChanged");

	Params::UFortSquadSlotsView_HandleHoveredButtonChanged_Params Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.HandleButtonDoubleClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonLegacy*         CommittedButton                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::HandleButtonDoubleClicked(class UCommonButtonLegacy* CommittedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleButtonDoubleClicked");

	Params::UFortSquadSlotsView_HandleButtonDoubleClicked_Params Parms{};

	Parms.CommittedButton = CommittedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.HandleButtonClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonLegacy*         CommittedButton                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotsView::HandleButtonClicked(class UCommonButtonLegacy* CommittedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleButtonClicked");

	Params::UFortSquadSlotsView_HandleButtonClicked_Params Parms{};

	Parms.CommittedButton = CommittedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortSquadSlotsView::GetIndexOfSelectedSquadSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "GetIndexOfSelectedSquadSlot");

	Params::UFortSquadSlotsView_GetIndexOfSelectedSquadSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotsView.GetIdOfSquadToManageBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFortSquadSlotsView::GetIdOfSquadToManageBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "GetIdOfSquadToManageBP");

	Params::UFortSquadSlotsView_GetIdOfSquadToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotsView.CreateAndAddSquadSlotButton
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHomebaseSquadSlot          SquadSlotDefinition                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     OutSquadSlotButtonHost                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortSquadSlotSelectorButton*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortSquadSlotSelectorButton* UFortSquadSlotsView::CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotsView", "CreateAndAddSquadSlotButton");

	Params::UFortSquadSlotsView_CreateAndAddSquadSlotButton_Params Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;
	Parms.SquadSlotDefinition = SquadSlotDefinition;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSquadSlotButtonHost != nullptr)
		*OutSquadSlotButtonHost = Parms.OutSquadSlotButtonHost;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortSquadSlotWidget
// (None)

class UClass* UFortSquadSlotWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadSlotWidget");

	return Clss;
}


// FortSquadSlotWidget SaveTheWorldUI.Default__FortSquadSlotWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadSlotWidget* UFortSquadSlotWidget::GetDefaultObj()
{
	static class UFortSquadSlotWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadSlotWidget*>(UFortSquadSlotWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SquadSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotWidget::SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotWidget", "SetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotWidget_SetIdOfSquadSlotToManageBP_Params Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotWidget.SetCardSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortItemCardSize       CardSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotWidget::SetCardSize(enum class EFortItemCardSize CardSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotWidget", "SetCardSize");

	Params::UFortSquadSlotWidget_SetCardSize_Params Parms{};

	Parms.CardSize = CardSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadSlotWidget.IsSquadSlotLockedBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadSlotWidget::IsSquadSlotLockedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotWidget", "IsSquadSlotLockedBP");

	Params::UFortSquadSlotWidget_IsSquadSlotLockedBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotWidget.GetItemInSquadSlotBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItem* UFortSquadSlotWidget::GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotWidget", "GetItemInSquadSlotBP");

	Params::UFortSquadSlotWidget_GetItemInSquadSlotBP_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutSquadSlotIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadSlotWidget::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadSlotWidget", "GetIdOfSquadSlotToManageBP");

	Params::UFortSquadSlotWidget_GetIdOfSquadSlotToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;

}


// Class SaveTheWorldUI.FortSquadStatsWidgetBase
// (None)

class UClass* UFortSquadStatsWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadStatsWidgetBase");

	return Clss;
}


// FortSquadStatsWidgetBase SaveTheWorldUI.Default__FortSquadStatsWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadStatsWidgetBase* UFortSquadStatsWidgetBase::GetDefaultObj()
{
	static class UFortSquadStatsWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadStatsWidgetBase*>(UFortSquadStatsWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadStatsWidgetBase.RequestStatsUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadStatsWidgetBase::RequestStatsUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "RequestStatsUpdate");

	Params::UFortSquadStatsWidgetBase_RequestStatsUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadStatsWidgetBase.RequestShowPreviewStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortSquadStatsWidgetBase::RequestShowPreviewStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "RequestShowPreviewStats");

	Params::UFortSquadStatsWidgetBase_RequestShowPreviewStats_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadStatsWidgetBase.HandleSquadSlottingPreviewStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadStatsWidgetBase::HandleSquadSlottingPreviewStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "HandleSquadSlottingPreviewStateChanged");

	Params::UFortSquadStatsWidgetBase_HandleSquadSlottingPreviewStateChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadStatsWidgetBase.HandlePowerRatingChanged_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bHasTeamMebers                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadStatsWidgetBase::HandlePowerRatingChanged_BP(bool bHasTeamMebers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "HandlePowerRatingChanged_BP");

	Params::UFortSquadStatsWidgetBase_HandlePowerRatingChanged_BP_Params Parms{};

	Parms.bHasTeamMebers = bHasTeamMebers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadStatsWidgetBase.GetLocalPlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UFortSquadStatsWidgetBase::GetLocalPlayerId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "GetLocalPlayerId");

	Params::UFortSquadStatsWidgetBase_GetLocalPlayerId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortSquadStatValueWithIcon
// (None)

class UClass* UFortSquadStatValueWithIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadStatValueWithIcon");

	return Clss;
}


// FortSquadStatValueWithIcon SaveTheWorldUI.Default__FortSquadStatValueWithIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadStatValueWithIcon* UFortSquadStatValueWithIcon::GetDefaultObj()
{
	static class UFortSquadStatValueWithIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadStatValueWithIcon*>(UFortSquadStatValueWithIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadStatValueWithIcon.HandleDifferentAttributeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSquadStatValueWithIcon::HandleDifferentAttributeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadStatValueWithIcon", "HandleDifferentAttributeSetBP");

	Params::UFortSquadStatValueWithIcon_HandleDifferentAttributeSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSquadTypeLandingPageBase
// (None)

class UClass* UFortSquadTypeLandingPageBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSquadTypeLandingPageBase");

	return Clss;
}


// FortSquadTypeLandingPageBase SaveTheWorldUI.Default__FortSquadTypeLandingPageBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSquadTypeLandingPageBase* UFortSquadTypeLandingPageBase::GetDefaultObj()
{
	static class UFortSquadTypeLandingPageBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSquadTypeLandingPageBase*>(UFortSquadTypeLandingPageBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.ShowWarningReadOnlyWIFE
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Force                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadTypeLandingPageBase::ShowWarningReadOnlyWIFE(bool Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "ShowWarningReadOnlyWIFE");

	Params::UFortSquadTypeLandingPageBase_ShowWarningReadOnlyWIFE_Params Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.IsScreenWIFE
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSquadTypeLandingPageBase::IsScreenWIFE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "IsScreenWIFE");

	Params::UFortSquadTypeLandingPageBase_IsScreenWIFE_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.HandlePendingNavigationOp
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortSquadTypeLandingPageBase::HandlePendingNavigationOp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "HandlePendingNavigationOp");

	Params::UFortSquadTypeLandingPageBase_HandlePendingNavigationOp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.HandleBackInputAction
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSquadTypeLandingPageBase::HandleBackInputAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "HandleBackInputAction");

	Params::UFortSquadTypeLandingPageBase_HandleBackInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function SaveTheWorldUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortSquadSelectorButton*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortSquadSelectorButton* UFortSquadTypeLandingPageBase::CreateAndAddSquadButton(class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "CreateAndAddSquadButton");

	Params::UFortSquadTypeLandingPageBase_CreateAndAddSquadButton_Params Parms{};

	Parms.SquadId = SquadId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortStatIcon
// (None)

class UClass* UFortStatIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStatIcon");

	return Clss;
}


// FortStatIcon SaveTheWorldUI.Default__FortStatIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStatIcon* UFortStatIcon::GetDefaultObj()
{
	static class UFortStatIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStatIcon*>(UFortStatIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortStatIcon.SetAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAttribute          InAttribute                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStatIcon::SetAttribute(struct FGameplayAttribute& InAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStatIcon", "SetAttribute");

	Params::UFortStatIcon_SetAttribute_Params Parms{};

	Parms.InAttribute = InAttribute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStatIcon.HandleDifferentAttributeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortStatIcon::HandleDifferentAttributeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStatIcon", "HandleDifferentAttributeSetBP");

	Params::UFortStatIcon_HandleDifferentAttributeSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSurvivorSquadManagementScreen
// (None)

class UClass* UFortSurvivorSquadManagementScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSurvivorSquadManagementScreen");

	return Clss;
}


// FortSurvivorSquadManagementScreen SaveTheWorldUI.Default__FortSurvivorSquadManagementScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSurvivorSquadManagementScreen* UFortSurvivorSquadManagementScreen::GetDefaultObj()
{
	static class UFortSurvivorSquadManagementScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSurvivorSquadManagementScreen*>(UFortSurvivorSquadManagementScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.UpdateCycleButtons
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSurvivorSquadManagementScreen::UpdateCycleButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadManagementScreen", "UpdateCycleButtons");

	Params::UFortSurvivorSquadManagementScreen_UpdateCycleButtons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.ShowHelpDialog
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSurvivorSquadManagementScreen::ShowHelpDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadManagementScreen", "ShowHelpDialog");

	Params::UFortSurvivorSquadManagementScreen_ShowHelpDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSurvivorSquadManagementScreen.PlayFeedbackForSlottingPerson
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortWorker*                 Worker                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortSurvivorSquadSlottingFeedbackDataFeedbackData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortSurvivorSquadManagementScreen::PlayFeedbackForSlottingPerson(class UFortWorker* Worker, int32 SlotIndex, struct FFortSurvivorSquadSlottingFeedbackData& FeedbackData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadManagementScreen", "PlayFeedbackForSlottingPerson");

	Params::UFortSurvivorSquadManagementScreen_PlayFeedbackForSlottingPerson_Params Parms{};

	Parms.Worker = Worker;
	Parms.SlotIndex = SlotIndex;
	Parms.FeedbackData = FeedbackData;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSurvivorSquadSelectorButton
// (None)

class UClass* UFortSurvivorSquadSelectorButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSurvivorSquadSelectorButton");

	return Clss;
}


// FortSurvivorSquadSelectorButton SaveTheWorldUI.Default__FortSurvivorSquadSelectorButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSurvivorSquadSelectorButton* UFortSurvivorSquadSelectorButton::GetDefaultObj()
{
	static class UFortSurvivorSquadSelectorButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSurvivorSquadSelectorButton*>(UFortSurvivorSquadSelectorButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFortSurvivorSquadSelectorButtonSummaryStatsOutSummaryStats                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSurvivorSquadSelectorButton::TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats* OutSummaryStats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadSelectorButton", "TryGetSummaryStats");

	Params::UFortSurvivorSquadSelectorButton_TryGetSummaryStats_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSummaryStats != nullptr)
		*OutSummaryStats = Parms.OutSummaryStats;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UFortWorker*>         OutSquadMembers                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSurvivorSquadSelectorButton::TryGetSquadMembers(TArray<class UFortWorker*>* OutSquadMembers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadSelectorButton", "TryGetSquadMembers");

	Params::UFortSurvivorSquadSelectorButton_TryGetSquadMembers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadMembers != nullptr)
		*OutSquadMembers = Parms.OutSquadMembers;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFortSurvivorSquadSelectorButtonPersonalityMatchesOutPersonalityMatches                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSurvivorSquadSelectorButton::TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches* OutPersonalityMatches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadSelectorButton", "TryGetPersonalityMatches");

	Params::UFortSurvivorSquadSelectorButton_TryGetPersonalityMatches_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPersonalityMatches != nullptr)
		*OutPersonalityMatches = Parms.OutPersonalityMatches;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortSurvivorSquadStatMatchBase
// (None)

class UClass* UFortSurvivorSquadStatMatchBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSurvivorSquadStatMatchBase");

	return Clss;
}


// FortSurvivorSquadStatMatchBase SaveTheWorldUI.Default__FortSurvivorSquadStatMatchBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSurvivorSquadStatMatchBase* UFortSurvivorSquadStatMatchBase::GetDefaultObj()
{
	static class UFortSurvivorSquadStatMatchBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSurvivorSquadStatMatchBase*>(UFortSurvivorSquadStatMatchBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSurvivorSquadStatMatchBase.OnStatMatchUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortUISurvivorSquadStatMatchUpdatedMatch                                                     (Parm, NativeAccessSpecifierPublic)

void UFortSurvivorSquadStatMatchBase::OnStatMatchUpdated(const struct FFortUISurvivorSquadStatMatch& UpdatedMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchBase", "OnStatMatchUpdated");

	Params::UFortSurvivorSquadStatMatchBase_OnStatMatchUpdated_Params Parms{};

	Parms.UpdatedMatch = UpdatedMatch;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
// (None)

class UClass* UFortSurvivorSquadStatMatchesBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSurvivorSquadStatMatchesBase");

	return Clss;
}


// FortSurvivorSquadStatMatchesBase SaveTheWorldUI.Default__FortSurvivorSquadStatMatchesBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSurvivorSquadStatMatchesBase* UFortSurvivorSquadStatMatchesBase::GetDefaultObj()
{
	static class UFortSurvivorSquadStatMatchesBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSurvivorSquadStatMatchesBase*>(UFortSurvivorSquadStatMatchesBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHomebaseSquad              OutSquadData                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortSurvivorSquadStatMatchesBase::TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "TryGetStaticSquadDataBP");

	Params::UFortSurvivorSquadStatMatchesBase_TryGetStaticSquadDataBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadData != nullptr)
		*OutSquadData = Parms.OutSquadData;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetSummaryView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSummaryView                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSurvivorSquadStatMatchesBase::SetSummaryView(bool bInSummaryView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "SetSummaryView");

	Params::UFortSurvivorSquadStatMatchesBase_SetSummaryView_Params Parms{};

	Parms.bInSummaryView = bInSummaryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SquadId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSurvivorSquadStatMatchesBase::SetIdOfSquadToManageBP(class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "SetIdOfSquadToManageBP");

	Params::UFortSurvivorSquadStatMatchesBase_SetIdOfSquadToManageBP_Params Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.HandleDifferentSquadSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortSurvivorSquadStatMatchesBase::HandleDifferentSquadSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "HandleDifferentSquadSetBP");

	Params::UFortSurvivorSquadStatMatchesBase_HandleDifferentSquadSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UFortSurvivorSquadStatMatchesBase::GetIdOfSquadToManageBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "GetIdOfSquadToManageBP");

	Params::UFortSurvivorSquadStatMatchesBase_GetIdOfSquadToManageBP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.AddStatMatch
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortSurvivorSquadStatMatchBase*SetBonus                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortSurvivorSquadStatMatchesBase::AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "AddStatMatch");

	Params::UFortSurvivorSquadStatMatchesBase_AddStatMatch_Params Parms{};

	Parms.SetBonus = SetBonus;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
// (None)

class UClass* UFortSurvivorSquadSummaryStatItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSurvivorSquadSummaryStatItem");

	return Clss;
}


// FortSurvivorSquadSummaryStatItem SaveTheWorldUI.Default__FortSurvivorSquadSummaryStatItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSurvivorSquadSummaryStatItem* UFortSurvivorSquadSummaryStatItem::GetDefaultObj()
{
	static class UFortSurvivorSquadSummaryStatItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSurvivorSquadSummaryStatItem*>(UFortSurvivorSquadSummaryStatItem::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortAttributeModifierAccumulationAccumulation                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortSurvivorSquadSummaryStatItem::SetAttributeModifierAccumulation(struct FFortAttributeModifierAccumulation& Accumulation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortSurvivorSquadSummaryStatItem", "SetAttributeModifierAccumulation");

	Params::UFortSurvivorSquadSummaryStatItem_SetAttributeModifierAccumulation_Params Parms{};

	Parms.Accumulation = Accumulation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortWorkerSetBonusIcon
// (None)

class UClass* UFortWorkerSetBonusIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortWorkerSetBonusIcon");

	return Clss;
}


// FortWorkerSetBonusIcon SaveTheWorldUI.Default__FortWorkerSetBonusIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortWorkerSetBonusIcon* UFortWorkerSetBonusIcon::GetDefaultObj()
{
	static class UFortWorkerSetBonusIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortWorkerSetBonusIcon*>(UFortWorkerSetBonusIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortWorkerSetBonusIcon.SetGameplayTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InGameplayTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortWorkerSetBonusIcon::SetGameplayTag(struct FGameplayTag& InGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortWorkerSetBonusIcon", "SetGameplayTag");

	Params::UFortWorkerSetBonusIcon_SetGameplayTag_Params Parms{};

	Parms.InGameplayTag = InGameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortWorkerSetBonusIcon.HandleDifferentGameplayTagSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortWorkerSetBonusIcon::HandleDifferentGameplayTagSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortWorkerSetBonusIcon", "HandleDifferentGameplayTagSetBP");

	Params::UFortWorkerSetBonusIcon_HandleDifferentGameplayTagSetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortStatsOverviewDetailsBase
// (None)

class UClass* UFortStatsOverviewDetailsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStatsOverviewDetailsBase");

	return Clss;
}


// FortStatsOverviewDetailsBase SaveTheWorldUI.Default__FortStatsOverviewDetailsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStatsOverviewDetailsBase* UFortStatsOverviewDetailsBase::GetDefaultObj()
{
	static class UFortStatsOverviewDetailsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStatsOverviewDetailsBase*>(UFortStatsOverviewDetailsBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortStatsOverviewDetailsBase.RequestStatsUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortStatsOverviewDetailsBase::RequestStatsUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStatsOverviewDetailsBase", "RequestStatsUpdate");

	Params::UFortStatsOverviewDetailsBase_RequestStatsUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStatsOverviewDetailsBase.ListenForChanges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bListen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortStatsOverviewDetailsBase::ListenForChanges(bool bListen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStatsOverviewDetailsBase", "ListenForChanges");

	Params::UFortStatsOverviewDetailsBase_ListenForChanges_Params Parms{};

	Parms.bListen = bListen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortStatsOverviewDetailsBase.GetLocalPlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UFortStatsOverviewDetailsBase::GetLocalPlayerId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortStatsOverviewDetailsBase", "GetLocalPlayerId");

	Params::UFortStatsOverviewDetailsBase_GetLocalPlayerId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortLlamaStoreData
// (None)

class UClass* UFortLlamaStoreData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLlamaStoreData");

	return Clss;
}


// FortLlamaStoreData SaveTheWorldUI.Default__FortLlamaStoreData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLlamaStoreData* UFortLlamaStoreData::GetDefaultObj()
{
	static class UFortLlamaStoreData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLlamaStoreData*>(UFortLlamaStoreData::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortLlamaStoreBase
// (None)

class UClass* UFortLlamaStoreBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLlamaStoreBase");

	return Clss;
}


// FortLlamaStoreBase SaveTheWorldUI.Default__FortLlamaStoreBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLlamaStoreBase* UFortLlamaStoreBase::GetDefaultObj()
{
	static class UFortLlamaStoreBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLlamaStoreBase*>(UFortLlamaStoreBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortLlamaStoreBase.SwapToCardEnterState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortLlamaStoreBase::SwapToCardEnterState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase", "SwapToCardEnterState");

	Params::UFortLlamaStoreBase_SwapToCardEnterState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortLlamaStoreBase.SetupFocus
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortLlamaStoreBase::SetupFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase", "SetupFocus");

	Params::UFortLlamaStoreBase_SetupFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortLlamaStoreBase.OnStoreStateChanged
// (Final, Native, Protected)
// Parameters:
// enum class EFortStoreState         NewStoreState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLlamaStoreBase::OnStoreStateChanged(enum class EFortStoreState NewStoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase", "OnStoreStateChanged");

	Params::UFortLlamaStoreBase_OnStoreStateChanged_Params Parms{};

	Parms.NewStoreState = NewStoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortLlamaStoreBase.OnStorePurchaseCompleted
// (Final, Native, Private)
// Parameters:

void UFortLlamaStoreBase::OnStorePurchaseCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase", "OnStorePurchaseCompleted");

	Params::UFortLlamaStoreBase_OnStorePurchaseCompleted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortLlamaStoreBase.HandleTencentDetails
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortLlamaStoreBase::HandleTencentDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase", "HandleTencentDetails");

	Params::UFortLlamaStoreBase_HandleTencentDetails_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortLlamaStoreBase.HandleAddVBucks
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortLlamaStoreBase::HandleAddVBucks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase", "HandleAddVBucks");

	Params::UFortLlamaStoreBase_HandleAddVBucks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortLlamaStoreBase.CreateTencentPuchaseOpenModal
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortLlamaStoreBase::CreateTencentPuchaseOpenModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase", "CreateTencentPuchaseOpenModal");

	Params::UFortLlamaStoreBase_CreateTencentPuchaseOpenModal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortLlamaStoreBase_Legacy
// (None)

class UClass* UFortLlamaStoreBase_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLlamaStoreBase_Legacy");

	return Clss;
}


// FortLlamaStoreBase_Legacy SaveTheWorldUI.Default__FortLlamaStoreBase_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLlamaStoreBase_Legacy* UFortLlamaStoreBase_Legacy::GetDefaultObj()
{
	static class UFortLlamaStoreBase_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLlamaStoreBase_Legacy*>(UFortLlamaStoreBase_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.SwapToCardEnterState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortLlamaStoreBase_Legacy::SwapToCardEnterState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "SwapToCardEnterState");

	Params::UFortLlamaStoreBase_Legacy_SwapToCardEnterState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.SetupFocus
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortLlamaStoreBase_Legacy::SetupFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "SetupFocus");

	Params::UFortLlamaStoreBase_Legacy_SetupFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStoreStateChanged
// (Final, Native, Protected)
// Parameters:
// enum class EFortStoreState         NewStoreState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLlamaStoreBase_Legacy::OnStoreStateChanged(enum class EFortStoreState NewStoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "OnStoreStateChanged");

	Params::UFortLlamaStoreBase_Legacy_OnStoreStateChanged_Params Parms{};

	Parms.NewStoreState = NewStoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStorePurchaseCompleted
// (Final, Native, Private)
// Parameters:

void UFortLlamaStoreBase_Legacy::OnStorePurchaseCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "OnStorePurchaseCompleted");

	Params::UFortLlamaStoreBase_Legacy_OnStorePurchaseCompleted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortLlamaStoreBase_Legacy.CreateTencentPuchaseOpenModal
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortLlamaStoreBase_Legacy::CreateTencentPuchaseOpenModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "CreateTencentPuchaseOpenModal");

	Params::UFortLlamaStoreBase_Legacy_CreateTencentPuchaseOpenModal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortLlamaStoreDetailsBase
// (None)

class UClass* UFortLlamaStoreDetailsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLlamaStoreDetailsBase");

	return Clss;
}


// FortLlamaStoreDetailsBase SaveTheWorldUI.Default__FortLlamaStoreDetailsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLlamaStoreDetailsBase* UFortLlamaStoreDetailsBase::GetDefaultObj()
{
	static class UFortLlamaStoreDetailsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLlamaStoreDetailsBase*>(UFortLlamaStoreDetailsBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToSilver
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortLlamaStoreDetailsBase::StartUpgradingToSilver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "StartUpgradingToSilver");

	Params::UFortLlamaStoreDetailsBase_StartUpgradingToSilver_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToGold
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortLlamaStoreDetailsBase::StartUpgradingToGold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "StartUpgradingToGold");

	Params::UFortLlamaStoreDetailsBase_StartUpgradingToGold_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.SetScrollWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortLlamaStoreDetailsBase::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "SetScrollWidget");

	Params::UFortLlamaStoreDetailsBase_SetScrollWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.OnOfferInfoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentOfferRarity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortLlamaStoreDetailsBase::OnOfferInfoChanged(int32 CurrentOfferRarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "OnOfferInfoChanged");

	Params::UFortLlamaStoreDetailsBase_OnOfferInfoChanged_Params Parms{};

	Parms.CurrentOfferRarity = CurrentOfferRarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNotInCollectionBookCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortLlamaStoreDetailsBase::GetNotInCollectionBookCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "GetNotInCollectionBookCount");

	Params::UFortLlamaStoreDetailsBase_GetNotInCollectionBookCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNewItemCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortLlamaStoreDetailsBase::GetNewItemCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "GetNewItemCount");

	Params::UFortLlamaStoreDetailsBase_GetNewItemCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortLlamaStoreDetailsBase.GetChoiceItemCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortLlamaStoreDetailsBase::GetChoiceItemCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "GetChoiceItemCount");

	Params::UFortLlamaStoreDetailsBase_GetChoiceItemCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortLlamaStoreInspectionScreen
// (None)

class UClass* UFortLlamaStoreInspectionScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortLlamaStoreInspectionScreen");

	return Clss;
}


// FortLlamaStoreInspectionScreen SaveTheWorldUI.Default__FortLlamaStoreInspectionScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortLlamaStoreInspectionScreen* UFortLlamaStoreInspectionScreen::GetDefaultObj()
{
	static class UFortLlamaStoreInspectionScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortLlamaStoreInspectionScreen*>(UFortLlamaStoreInspectionScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.IsItemChoicePack
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ItemToCheck                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortLlamaStoreInspectionScreen::IsItemChoicePack(class UObject* ItemToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreInspectionScreen", "IsItemChoicePack");

	Params::UFortLlamaStoreInspectionScreen_IsItemChoicePack_Params Parms{};

	Parms.ItemToCheck = ItemToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetSelectedCardPack
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortCardPackItem*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortCardPackItem* UFortLlamaStoreInspectionScreen::GetSelectedCardPack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreInspectionScreen", "GetSelectedCardPack");

	Params::UFortLlamaStoreInspectionScreen_GetSelectedCardPack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetInspectChoiceInputState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EInputActionState UFortLlamaStoreInspectionScreen::GetInspectChoiceInputState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortLlamaStoreInspectionScreen", "GetInspectChoiceInputState");

	Params::UFortLlamaStoreInspectionScreen_GetInspectChoiceInputState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortOpenCardPackModal
// (None)

class UClass* UFortOpenCardPackModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortOpenCardPackModal");

	return Clss;
}


// FortOpenCardPackModal SaveTheWorldUI.Default__FortOpenCardPackModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortOpenCardPackModal* UFortOpenCardPackModal::GetDefaultObj()
{
	static class UFortOpenCardPackModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortOpenCardPackModal*>(UFortOpenCardPackModal::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortOpenCardPackModal_Legacy
// (None)

class UClass* UFortOpenCardPackModal_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortOpenCardPackModal_Legacy");

	return Clss;
}


// FortOpenCardPackModal_Legacy SaveTheWorldUI.Default__FortOpenCardPackModal_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortOpenCardPackModal_Legacy* UFortOpenCardPackModal_Legacy::GetDefaultObj()
{
	static class UFortOpenCardPackModal_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortOpenCardPackModal_Legacy*>(UFortOpenCardPackModal_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.StWHUD
// (None)

class UClass* UStWHUD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StWHUD");

	return Clss;
}


// StWHUD SaveTheWorldUI.Default__StWHUD
// (Public, ClassDefaultObject, ArchetypeObject)

class UStWHUD* UStWHUD::GetDefaultObj()
{
	static class UStWHUD* Default = nullptr;

	if (!Default)
		Default = static_cast<UStWHUD*>(UStWHUD::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.StWHUD.NativeHandleWeaponEquipped
// (Final, Native, Public)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStWHUD::NativeHandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StWHUD", "NativeHandleWeaponEquipped");

	Params::UStWHUD_NativeHandleWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.StWHUD.HandlePickerOpenRequest
// (Final, Native, Protected)
// Parameters:
// enum class EFortPickerMode         Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InitialOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIgnoreFirstAccept                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStWHUD::HandlePickerOpenRequest(enum class EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StWHUD", "HandlePickerOpenRequest");

	Params::UStWHUD_HandlePickerOpenRequest_Params Parms{};

	Parms.Mode = Mode;
	Parms.InitialOption = InitialOption;
	Parms.bIgnoreFirstAccept = bIgnoreFirstAccept;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.StWHUD.HandleCursorModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bCursorModeEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 CursorModeContentWidget                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStWHUD::HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StWHUD", "HandleCursorModeChanged");

	Params::UStWHUD_HandleCursorModeChanged_Params Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortTheaterSelect
// (None)

class UClass* UFortTheaterSelect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTheaterSelect");

	return Clss;
}


// FortTheaterSelect SaveTheWorldUI.Default__FortTheaterSelect
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortTheaterSelect* UFortTheaterSelect::GetDefaultObj()
{
	static class UFortTheaterSelect* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTheaterSelect*>(UFortTheaterSelect::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortTheaterSelect.OnNavigationRight
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortTheaterSelect::OnNavigationRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTheaterSelect", "OnNavigationRight");

	Params::UFortTheaterSelect_OnNavigationRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortTheaterSelect.OnNavigationLeft
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortTheaterSelect::OnNavigationLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTheaterSelect", "OnNavigationLeft");

	Params::UFortTheaterSelect_OnNavigationLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortTheaterSelect.GetTheaterRecommendedRatingRange
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Minimum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Maximum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortTheaterSelect::GetTheaterRecommendedRatingRange(const class FString& UniqueID, int32* Minimum, int32* Maximum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTheaterSelect", "GetTheaterRecommendedRatingRange");

	Params::UFortTheaterSelect_GetTheaterRecommendedRatingRange_Params Parms{};

	Parms.UniqueID = UniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Minimum != nullptr)
		*Minimum = Parms.Minimum;

	if (Maximum != nullptr)
		*Maximum = Parms.Maximum;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortTheaterSelect_Legacy
// (None)

class UClass* UFortTheaterSelect_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTheaterSelect_Legacy");

	return Clss;
}


// FortTheaterSelect_Legacy SaveTheWorldUI.Default__FortTheaterSelect_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortTheaterSelect_Legacy* UFortTheaterSelect_Legacy::GetDefaultObj()
{
	static class UFortTheaterSelect_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTheaterSelect_Legacy*>(UFortTheaterSelect_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationRight
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortTheaterSelect_Legacy::OnNavigationRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTheaterSelect_Legacy", "OnNavigationRight");

	Params::UFortTheaterSelect_Legacy_OnNavigationRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationLeft
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortTheaterSelect_Legacy::OnNavigationLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTheaterSelect_Legacy", "OnNavigationLeft");

	Params::UFortTheaterSelect_Legacy_OnNavigationLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortTheaterSelect_Legacy.GetTheaterRecommendedRatingRange
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Minimum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Maximum                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortTheaterSelect_Legacy::GetTheaterRecommendedRatingRange(const class FString& UniqueID, int32* Minimum, int32* Maximum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTheaterSelect_Legacy", "GetTheaterRecommendedRatingRange");

	Params::UFortTheaterSelect_Legacy_GetTheaterRecommendedRatingRange_Params Parms{};

	Parms.UniqueID = UniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Minimum != nullptr)
		*Minimum = Parms.Minimum;

	if (Maximum != nullptr)
		*Maximum = Parms.Maximum;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortHomebaseNodeItemTooltip
// (None)

class UClass* UFortHomebaseNodeItemTooltip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHomebaseNodeItemTooltip");

	return Clss;
}


// FortHomebaseNodeItemTooltip SaveTheWorldUI.Default__FortHomebaseNodeItemTooltip
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHomebaseNodeItemTooltip* UFortHomebaseNodeItemTooltip::GetDefaultObj()
{
	static class UFortHomebaseNodeItemTooltip* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHomebaseNodeItemTooltip*>(UFortHomebaseNodeItemTooltip::StaticClass()->DefaultObject);

	return Default;
}


// Class SaveTheWorldUI.FortUpgradeDetailsBase
// (None)

class UClass* UFortUpgradeDetailsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUpgradeDetailsBase");

	return Clss;
}


// FortUpgradeDetailsBase SaveTheWorldUI.Default__FortUpgradeDetailsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUpgradeDetailsBase* UFortUpgradeDetailsBase::GetDefaultObj()
{
	static class UFortUpgradeDetailsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUpgradeDetailsBase*>(UFortUpgradeDetailsBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortUpgradeDetailsBase.RequestPurchaseNode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUpgradeDetailsBase::RequestPurchaseNode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "RequestPurchaseNode");

	Params::UFortUpgradeDetailsBase_RequestPurchaseNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeDetailsBase.OnUpgradeToDetailChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortUpgradeDetailsBase::OnUpgradeToDetailChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "OnUpgradeToDetailChanged");

	Params::UFortUpgradeDetailsBase_OnUpgradeToDetailChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeDetailsBase.OnShowIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeDetailsBase::OnShowIcon(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "OnShowIcon");

	Params::UFortUpgradeDetailsBase_OnShowIcon_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeDetailsBase.OnScreenActive
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortUpgradeDetailsBase::OnScreenActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "OnScreenActive");

	Params::UFortUpgradeDetailsBase_OnScreenActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeDetailsBase.OnPurchaseComplete
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortUpgradeDetailsBase::OnPurchaseComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "OnPurchaseComplete");

	Params::UFortUpgradeDetailsBase_OnPurchaseComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortUpgradeInfo
// (None)

class UClass* UFortUpgradeInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUpgradeInfo");

	return Clss;
}


// FortUpgradeInfo SaveTheWorldUI.Default__FortUpgradeInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUpgradeInfo* UFortUpgradeInfo::GetDefaultObj()
{
	static class UFortUpgradeInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUpgradeInfo*>(UFortUpgradeInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortUpgradeInfo.IsUpgradeUnlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeInfo::IsUpgradeUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "IsUpgradeUnlocked");

	Params::UFortUpgradeInfo_IsUpgradeUnlocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.IsPreviewing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeInfo::IsPreviewing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "IsPreviewing");

	Params::UFortUpgradeInfo_IsPreviewing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetVideo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaSource*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaSource* UFortUpgradeInfo::GetVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetVideo");

	Params::UFortUpgradeInfo_GetVideo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetUpgradeUnlockLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortUpgradeInfo::GetUpgradeUnlockLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetUpgradeUnlockLevel");

	Params::UFortUpgradeInfo_GetUpgradeUnlockLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetTitle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortUpgradeInfo::GetTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetTitle");

	Params::UFortUpgradeInfo_GetTitle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevelTitle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortUpgradeInfo::GetNextLevelTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetNextLevelTitle");

	Params::UFortUpgradeInfo_GetNextLevelTitle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevelDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortUpgradeInfo::GetNextLevelDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetNextLevelDescription");

	Params::UFortUpgradeInfo_GetNextLevelDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetNextLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortUpgradeInfo::GetNextLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetNextLevel");

	Params::UFortUpgradeInfo_GetNextLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetMaxLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortUpgradeInfo::GetMaxLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetMaxLevel");

	Params::UFortUpgradeInfo_GetMaxLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetItemName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortUpgradeInfo::GetItemName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetItemName");

	Params::UFortUpgradeInfo_GetItemName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EUpgradeInfoImageSize   ImageSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UFortUpgradeInfo::GetIcon(enum class EUpgradeInfoImageSize ImageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetIcon");

	Params::UFortUpgradeInfo_GetIcon_Params Parms{};

	Parms.ImageSize = ImageSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetDisplayAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFortDisplayAttribute>OutDisplayAttributes                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeInfo::GetDisplayAttributes(TArray<struct FFortDisplayAttribute>* OutDisplayAttributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetDisplayAttributes");

	Params::UFortUpgradeInfo_GetDisplayAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDisplayAttributes != nullptr)
		*OutDisplayAttributes = Parms.OutDisplayAttributes;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortUpgradeInfo::GetDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetDescription");

	Params::UFortUpgradeInfo_GetDescription_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetCurrentLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortUpgradeInfo::GetCurrentLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetCurrentLevel");

	Params::UFortUpgradeInfo_GetCurrentLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.GetCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortUpgradeInfo::GetCost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "GetCost");

	Params::UFortUpgradeInfo_GetCost_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.ForwardPreview
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortUpgradeInfo::ForwardPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "ForwardPreview");

	Params::UFortUpgradeInfo_ForwardPreview_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeInfo.CanPreview
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeInfo::CanPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "CanPreview");

	Params::UFortUpgradeInfo_CanPreview_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.CanAffordUpgrade
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeInfo::CanAffordUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "CanAffordUpgrade");

	Params::UFortUpgradeInfo_CanAffordUpgrade_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeInfo.BackwardPreview
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortUpgradeInfo::BackwardPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeInfo", "BackwardPreview");

	Params::UFortUpgradeInfo_BackwardPreview_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SaveTheWorldUI.FortUpgradeScreenBase
// (None)

class UClass* UFortUpgradeScreenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUpgradeScreenBase");

	return Clss;
}


// FortUpgradeScreenBase SaveTheWorldUI.Default__FortUpgradeScreenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUpgradeScreenBase* UFortUpgradeScreenBase::GetDefaultObj()
{
	static class UFortUpgradeScreenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUpgradeScreenBase*>(UFortUpgradeScreenBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortUpgradeScreenBase.UseUpgradesRespecToken
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUpgradeScreenBase::UseUpgradesRespecToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "UseUpgradesRespecToken");

	Params::UFortUpgradeScreenBase_UseUpgradesRespecToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.TogglePreview
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUpgradeScreenBase::TogglePreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "TogglePreview");

	Params::UFortUpgradeScreenBase_TogglePreview_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.RefreshFocus
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUpgradeScreenBase::RefreshFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "RefreshFocus");

	Params::UFortUpgradeScreenBase_RefreshFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.OnUseUpgradesRespecTokenComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortUpgradeScreenBase::OnUseUpgradesRespecTokenComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "OnUseUpgradesRespecTokenComplete");

	Params::UFortUpgradeScreenBase_OnUseUpgradesRespecTokenComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.OnUpgradeInfoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortUpgradeScreenBase::OnUpgradeInfoChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "OnUpgradeInfoChanged");

	Params::UFortUpgradeScreenBase_OnUpgradeInfoChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.OnPurchaseNodeComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortUpgradeScreenBase::OnPurchaseNodeComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "OnPurchaseNodeComplete");

	Params::UFortUpgradeScreenBase_OnPurchaseNodeComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.IsPreviewing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeScreenBase::IsPreviewing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "IsPreviewing");

	Params::UFortUpgradeScreenBase_IsPreviewing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.HandleTabSelected
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeScreenBase::HandleTabSelected(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "HandleTabSelected");

	Params::UFortUpgradeScreenBase_HandleTabSelected_Params Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.GetUpgradesRespecTokenCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortUpgradeScreenBase::GetUpgradesRespecTokenCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "GetUpgradesRespecTokenCount");

	Params::UFortUpgradeScreenBase_GetUpgradesRespecTokenCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.CanPreview
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeScreenBase::CanPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "CanPreview");

	Params::UFortUpgradeScreenBase_CanPreview_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase.AreUpgradesRespecTokensAvailable
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeScreenBase::AreUpgradesRespecTokensAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase", "AreUpgradesRespecTokensAvailable");

	Params::UFortUpgradeScreenBase_AreUpgradesRespecTokensAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortUpgradeScreenBase_Legacy
// (None)

class UClass* UFortUpgradeScreenBase_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUpgradeScreenBase_Legacy");

	return Clss;
}


// FortUpgradeScreenBase_Legacy SaveTheWorldUI.Default__FortUpgradeScreenBase_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUpgradeScreenBase_Legacy* UFortUpgradeScreenBase_Legacy::GetDefaultObj()
{
	static class UFortUpgradeScreenBase_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUpgradeScreenBase_Legacy*>(UFortUpgradeScreenBase_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.UseUpgradesRespecToken
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUpgradeScreenBase_Legacy::UseUpgradesRespecToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "UseUpgradesRespecToken");

	Params::UFortUpgradeScreenBase_Legacy_UseUpgradesRespecToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.TogglePreview
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUpgradeScreenBase_Legacy::TogglePreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "TogglePreview");

	Params::UFortUpgradeScreenBase_Legacy_TogglePreview_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.RefreshFocus
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortUpgradeScreenBase_Legacy::RefreshFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "RefreshFocus");

	Params::UFortUpgradeScreenBase_Legacy_RefreshFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUseUpgradesRespecTokenComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortUpgradeScreenBase_Legacy::OnUseUpgradesRespecTokenComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "OnUseUpgradesRespecTokenComplete");

	Params::UFortUpgradeScreenBase_Legacy_OnUseUpgradesRespecTokenComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUpgradeInfoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortUpgradeScreenBase_Legacy::OnUpgradeInfoChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "OnUpgradeInfoChanged");

	Params::UFortUpgradeScreenBase_Legacy_OnUpgradeInfoChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnPurchaseNodeComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortUpgradeScreenBase_Legacy::OnPurchaseNodeComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "OnPurchaseNodeComplete");

	Params::UFortUpgradeScreenBase_Legacy_OnPurchaseNodeComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.IsPreviewing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeScreenBase_Legacy::IsPreviewing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "IsPreviewing");

	Params::UFortUpgradeScreenBase_Legacy_IsPreviewing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.HandleTabSelected
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeScreenBase_Legacy::HandleTabSelected(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "HandleTabSelected");

	Params::UFortUpgradeScreenBase_Legacy_HandleTabSelected_Params Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.GetUpgradesRespecTokenCount
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortUpgradeScreenBase_Legacy::GetUpgradesRespecTokenCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "GetUpgradesRespecTokenCount");

	Params::UFortUpgradeScreenBase_Legacy_GetUpgradesRespecTokenCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.CanPreview
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeScreenBase_Legacy::CanPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "CanPreview");

	Params::UFortUpgradeScreenBase_Legacy_CanPreview_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SaveTheWorldUI.FortUpgradeScreenBase_Legacy.AreUpgradesRespecTokensAvailable
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortUpgradeScreenBase_Legacy::AreUpgradesRespecTokensAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "AreUpgradesRespecTokensAvailable");

	Params::UFortUpgradeScreenBase_Legacy_AreUpgradesRespecTokensAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SaveTheWorldUI.FortUpgradeTileBase
// (None)

class UClass* UFortUpgradeTileBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUpgradeTileBase");

	return Clss;
}


// FortUpgradeTileBase SaveTheWorldUI.Default__FortUpgradeTileBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUpgradeTileBase* UFortUpgradeTileBase::GetDefaultObj()
{
	static class UFortUpgradeTileBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUpgradeTileBase*>(UFortUpgradeTileBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortUpgradeTileBase.OnDataRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUpgrade                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeTileBase::OnDataRefresh(bool bUpgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeTileBase", "OnDataRefresh");

	Params::UFortUpgradeTileBase_OnDataRefresh_Params Parms{};

	Parms.bUpgrade = bUpgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SaveTheWorldUI.FortUpgradeTileBase_Legacy
// (None)

class UClass* UFortUpgradeTileBase_Legacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUpgradeTileBase_Legacy");

	return Clss;
}


// FortUpgradeTileBase_Legacy SaveTheWorldUI.Default__FortUpgradeTileBase_Legacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUpgradeTileBase_Legacy* UFortUpgradeTileBase_Legacy::GetDefaultObj()
{
	static class UFortUpgradeTileBase_Legacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUpgradeTileBase_Legacy*>(UFortUpgradeTileBase_Legacy::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveTheWorldUI.FortUpgradeTileBase_Legacy.OnDataRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUpgrade                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeTileBase_Legacy::OnDataRefresh(bool bUpgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeTileBase_Legacy", "OnDataRefresh");

	Params::UFortUpgradeTileBase_Legacy_OnDataRefresh_Params Parms{};

	Parms.bUpgrade = bUpgrade;

	UObject::ProcessEvent(Func, &Parms);

}

}


