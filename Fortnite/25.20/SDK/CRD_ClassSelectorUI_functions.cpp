#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CRD_ClassSelectorUI.CreativeClassSelectorButton.SetButtonText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCreativeClassSelectorButton::SetButtonText(class FText& InText)
{
	static auto Func = Class->GetFunction("CreativeClassSelectorButton", "SetButtonText");

	Params::UCreativeClassSelectorButton_SetButtonText_Params Parms;

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMinigameTeam               NewTeamData                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UClassSelectorTeamTile::OnTeamSet(struct FMinigameTeam& NewTeamData)
{
	static auto Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamSet");

	Params::UClassSelectorTeamTile_OnTeamSet_Params Parms;

	Parms.NewTeamData = NewTeamData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamIconSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCreativeIconOption         NewTeamIcon                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UClassSelectorTeamTile::OnTeamIconSet(struct FCreativeIconOption& NewTeamIcon)
{
	static auto Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamIconSet");

	Params::UClassSelectorTeamTile_OnTeamIconSet_Params Parms;

	Parms.NewTeamIcon = NewTeamIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamColorIndexSet
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              TeamColorIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClassSelectorTeamTile::OnTeamColorIndexSet(int32 TeamColorIndex)
{
	static auto Func = Class->GetFunction("ClassSelectorTeamTile", "OnTeamColorIndexSet");

	Params::UClassSelectorTeamTile_OnTeamColorIndexSet_Params Parms;

	Parms.TeamColorIndex = TeamColorIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnPlayerCountSet
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewPlayerCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClassSelectorTeamTile::OnPlayerCountSet(int32 NewPlayerCount)
{
	static auto Func = Class->GetFunction("ClassSelectorTeamTile", "OnPlayerCountSet");

	Params::UClassSelectorTeamTile_OnPlayerCountSet_Params Parms;

	Parms.NewPlayerCount = NewPlayerCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.CreativeClassEntry.OnClassEntryDataSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsCurrentClass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsPendingClass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassEntry::OnClassEntryDataSet(bool bIsCurrentClass, bool bIsPendingClass)
{
	static auto Func = Class->GetFunction("CreativeClassEntry", "OnClassEntryDataSet");

	Params::UCreativeClassEntry_OnClassEntryDataSet_Params Parms;

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
	static auto Func = Class->GetFunction("CreativeClassEntry", "OnBrowsingLoadout");

	Params::UCreativeClassEntry_OnBrowsingLoadout_Params Parms;

	Parms.bBrowsingLoadout = bBrowsingLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.CreativeClassSelector.OnTimerCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RemainingTime                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassSelector::OnTimerCountdown(int32 RemainingTime)
{
	static auto Func = Class->GetFunction("CreativeClassSelector", "OnTimerCountdown");

	Params::UCreativeClassSelector_OnTimerCountdown_Params Parms;

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
	static auto Func = Class->GetFunction("CreativeClassSelector", "OnLoadoutCommitted");

	Params::UCreativeClassSelector_OnLoadoutCommitted_Params Parms;

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
	static auto Func = Class->GetFunction("CreativeClassSelector", "OnClassSelectorUIPopulated");

	Params::UCreativeClassSelector_OnClassSelectorUIPopulated_Params Parms;

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
	static auto Func = Class->GetFunction("CreativeClassSelector", "OnClassSelectionChanged");

	Params::UCreativeClassSelector_OnClassSelectionChanged_Params Parms;

	Parms.NewClassName = NewClassName;
	Parms.NewClassDescription = NewClassDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_ClassSelectorUI.CreativeClassSelector.HandleMinigameStateChanged
// (Final, Native, Protected)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeClassSelector::HandleMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static auto Func = Class->GetFunction("CreativeClassSelector", "HandleMinigameStateChanged");

	Params::UCreativeClassSelector_HandleMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_ClassSelectorUI.CreativeClassSelector.GetFirstLoadoutItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCreativeClassSelector::GetFirstLoadoutItem()
{
	static auto Func = Class->GetFunction("CreativeClassSelector", "GetFirstLoadoutItem");

	Params::UCreativeClassSelector_GetFirstLoadoutItem_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRD_ClassSelectorUI.CreativeClassSelectorMapTab.SetTabName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TabName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCreativeClassSelectorMapTab::SetTabName(class FText& TabName)
{
	static auto Func = Class->GetFunction("CreativeClassSelectorMapTab", "SetTabName");

	Params::UCreativeClassSelectorMapTab_SetTabName_Params Parms;

	Parms.TabName = TabName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
