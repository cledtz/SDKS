#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
// (None)

class UClass* UClassSelectorLoadoutContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClassSelectorLoadoutContainer");

	return Clss;
}


// ClassSelectorLoadoutContainer CRD_ClassSelectorUI.Default__ClassSelectorLoadoutContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UClassSelectorLoadoutContainer* UClassSelectorLoadoutContainer::GetDefaultObj()
{
	static class UClassSelectorLoadoutContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UClassSelectorLoadoutContainer*>(UClassSelectorLoadoutContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class CRD_ClassSelectorUI.ClassSelectorTabButtons
// (None)

class UClass* UClassSelectorTabButtons::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClassSelectorTabButtons");

	return Clss;
}


// ClassSelectorTabButtons CRD_ClassSelectorUI.Default__ClassSelectorTabButtons
// (Public, ClassDefaultObject, ArchetypeObject)

class UClassSelectorTabButtons* UClassSelectorTabButtons::GetDefaultObj()
{
	static class UClassSelectorTabButtons* Default = nullptr;

	if (!Default)
		Default = static_cast<UClassSelectorTabButtons*>(UClassSelectorTabButtons::StaticClass()->DefaultObject);

	return Default;
}


// Class CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
// (None)

class UClass* UClassSelectorTeamInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClassSelectorTeamInfoWidget");

	return Clss;
}


// ClassSelectorTeamInfoWidget CRD_ClassSelectorUI.Default__ClassSelectorTeamInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UClassSelectorTeamInfoWidget* UClassSelectorTeamInfoWidget::GetDefaultObj()
{
	static class UClassSelectorTeamInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UClassSelectorTeamInfoWidget*>(UClassSelectorTeamInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class CRD_ClassSelectorUI.CreativeClassSelectorButton
// (None)

class UClass* UCreativeClassSelectorButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeClassSelectorButton");

	return Clss;
}


// CreativeClassSelectorButton CRD_ClassSelectorUI.Default__CreativeClassSelectorButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeClassSelectorButton* UCreativeClassSelectorButton::GetDefaultObj()
{
	static class UCreativeClassSelectorButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeClassSelectorButton*>(UCreativeClassSelectorButton::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_ClassSelectorUI.CreativeClassSelectorButton.SetButtonText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCreativeClassSelectorButton::SetButtonText(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassSelectorButton", "SetButtonText");

	Params::UCreativeClassSelectorButton_SetButtonText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CRD_ClassSelectorUI.ClassSelectorTeamTile
// (None)

class UClass* UClassSelectorTeamTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClassSelectorTeamTile");

	return Clss;
}


// ClassSelectorTeamTile CRD_ClassSelectorUI.Default__ClassSelectorTeamTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UClassSelectorTeamTile* UClassSelectorTeamTile::GetDefaultObj()
{
	static class UClassSelectorTeamTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UClassSelectorTeamTile*>(UClassSelectorTeamTile::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMinigameTeam               NewTeamData                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UClassSelectorTeamTile::OnTeamSet(struct FMinigameTeam& NewTeamData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamSet");

	Params::UClassSelectorTeamTile_OnTeamSet_Params Parms{};

	Parms.NewTeamData = NewTeamData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamIconSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCreativeIconOption         NewTeamIcon                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UClassSelectorTeamTile::OnTeamIconSet(struct FCreativeIconOption& NewTeamIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamIconSet");

	Params::UClassSelectorTeamTile_OnTeamIconSet_Params Parms{};

	Parms.NewTeamIcon = NewTeamIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamColorIndexSet
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              TeamColorIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClassSelectorTeamTile::OnTeamColorIndexSet(int32 TeamColorIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamColorIndexSet");

	Params::UClassSelectorTeamTile_OnTeamColorIndexSet_Params Parms{};

	Parms.TeamColorIndex = TeamColorIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnPlayerCountSet
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewPlayerCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClassSelectorTeamTile::OnPlayerCountSet(int32 NewPlayerCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClassSelectorTeamTile", "OnPlayerCountSet");

	Params::UClassSelectorTeamTile_OnPlayerCountSet_Params Parms{};

	Parms.NewPlayerCount = NewPlayerCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CRD_ClassSelectorUI.ClassSelectorTeamTiles
// (None)

class UClass* UClassSelectorTeamTiles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClassSelectorTeamTiles");

	return Clss;
}


// ClassSelectorTeamTiles CRD_ClassSelectorUI.Default__ClassSelectorTeamTiles
// (Public, ClassDefaultObject, ArchetypeObject)

class UClassSelectorTeamTiles* UClassSelectorTeamTiles::GetDefaultObj()
{
	static class UClassSelectorTeamTiles* Default = nullptr;

	if (!Default)
		Default = static_cast<UClassSelectorTeamTiles*>(UClassSelectorTeamTiles::StaticClass()->DefaultObject);

	return Default;
}


// Class CRD_ClassSelectorUI.CreativeClassItemInfo
// (None)

class UClass* UCreativeClassItemInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeClassItemInfo");

	return Clss;
}


// CreativeClassItemInfo CRD_ClassSelectorUI.Default__CreativeClassItemInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeClassItemInfo* UCreativeClassItemInfo::GetDefaultObj()
{
	static class UCreativeClassItemInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeClassItemInfo*>(UCreativeClassItemInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class CRD_ClassSelectorUI.CreativeClassEntry
// (None)

class UClass* UCreativeClassEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeClassEntry");

	return Clss;
}


// CreativeClassEntry CRD_ClassSelectorUI.Default__CreativeClassEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeClassEntry* UCreativeClassEntry::GetDefaultObj()
{
	static class UCreativeClassEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeClassEntry*>(UCreativeClassEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_ClassSelectorUI.CreativeClassEntry.OnClassEntryDataSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsCurrentClass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsPendingClass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassEntry::OnClassEntryDataSet(bool bIsCurrentClass, bool bIsPendingClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassEntry", "OnClassEntryDataSet");

	Params::UCreativeClassEntry_OnClassEntryDataSet_Params Parms{};

	Parms.bIsCurrentClass = bIsCurrentClass;
	Parms.bIsPendingClass = bIsPendingClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.CreativeClassEntry.OnBrowsingLoadout
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bBrowsingLoadout                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassEntry::OnBrowsingLoadout(bool bBrowsingLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassEntry", "OnBrowsingLoadout");

	Params::UCreativeClassEntry_OnBrowsingLoadout_Params Parms{};

	Parms.bBrowsingLoadout = bBrowsingLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CRD_ClassSelectorUI.CreativeClassSelector
// (None)

class UClass* UCreativeClassSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeClassSelector");

	return Clss;
}


// CreativeClassSelector CRD_ClassSelectorUI.Default__CreativeClassSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeClassSelector* UCreativeClassSelector::GetDefaultObj()
{
	static class UCreativeClassSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeClassSelector*>(UCreativeClassSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_ClassSelectorUI.CreativeClassSelector.OnTimerCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RemainingTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassSelector::OnTimerCountdown(int32 RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassSelector", "OnTimerCountdown");

	Params::UCreativeClassSelector_OnTimerCountdown_Params Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.CreativeClassSelector.OnLoadoutCommitted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewClassName                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NewTeamName                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bNewLoadout                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassSelector::OnLoadoutCommitted(class FText& NewClassName, class FText& NewTeamName, bool bNewLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassSelector", "OnLoadoutCommitted");

	Params::UCreativeClassSelector_OnLoadoutCommitted_Params Parms{};

	Parms.NewClassName = NewClassName;
	Parms.NewTeamName = NewTeamName;
	Parms.bNewLoadout = bNewLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectorUIPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasValidData                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassSelector::OnClassSelectorUIPopulated(bool bHasValidData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassSelector", "OnClassSelectorUIPopulated");

	Params::UCreativeClassSelector_OnClassSelectorUIPopulated_Params Parms{};

	Parms.bHasValidData = bHasValidData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectionChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewClassName                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NewClassDescription                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCreativeClassSelector::OnClassSelectionChanged(class FText& NewClassName, class FText& NewClassDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassSelector", "OnClassSelectionChanged");

	Params::UCreativeClassSelector_OnClassSelectionChanged_Params Parms{};

	Parms.NewClassName = NewClassName;
	Parms.NewClassDescription = NewClassDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.CreativeClassSelector.HandleMinigameStateChanged
// (Final, Native, Protected)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassSelector::HandleMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassSelector", "HandleMinigameStateChanged");

	Params::UCreativeClassSelector_HandleMinigameStateChanged_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_ClassSelectorUI.CreativeClassSelector.GetFirstLoadoutItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCreativeClassSelector::GetFirstLoadoutItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassSelector", "GetFirstLoadoutItem");

	Params::UCreativeClassSelector_GetFirstLoadoutItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CRD_ClassSelectorUI.CreativeClassSelectorMapTab
// (None)

class UClass* UCreativeClassSelectorMapTab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeClassSelectorMapTab");

	return Clss;
}


// CreativeClassSelectorMapTab CRD_ClassSelectorUI.Default__CreativeClassSelectorMapTab
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeClassSelectorMapTab* UCreativeClassSelectorMapTab::GetDefaultObj()
{
	static class UCreativeClassSelectorMapTab* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeClassSelectorMapTab*>(UCreativeClassSelectorMapTab::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_ClassSelectorUI.CreativeClassSelectorMapTab.SetTabName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TabName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCreativeClassSelectorMapTab::SetTabName(class FText& TabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeClassSelectorMapTab", "SetTabName");

	Params::UCreativeClassSelectorMapTab_SetTabName_Params Parms{};

	Parms.TabName = TabName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CRD_ClassSelectorUI.Mutator_ClassSelectorUI
// (Actor)

class UClass* UMutator_ClassSelectorUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mutator_ClassSelectorUI");

	return Clss;
}


// Mutator_ClassSelectorUI CRD_ClassSelectorUI.Default__Mutator_ClassSelectorUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UMutator_ClassSelectorUI* UMutator_ClassSelectorUI::GetDefaultObj()
{
	static class UMutator_ClassSelectorUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UMutator_ClassSelectorUI*>(UMutator_ClassSelectorUI::StaticClass()->DefaultObject);

	return Default;
}

}


