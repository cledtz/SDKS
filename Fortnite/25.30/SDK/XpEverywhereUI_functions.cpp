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


// Function XpEverywhereUI.XpEverywhereAccoladesWidget.OpenWidget
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortAccoladeItemDefinition* AccoladeDef                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              XpValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        DisplayName                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D>   AccoladeLargePreviewImageOverride                                (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        SimulatedName                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        SimulatedText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EFortSimulatedXPSize    SimulatedXpSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXpEverywhereAccoladesWidget::OpenWidget(class UFortAccoladeItemDefinition* AccoladeDef, int32 XpValue, class FText& DisplayName, TSoftObjectPtr<class UTexture2D>& AccoladeLargePreviewImageOverride, class FText& SimulatedName, class FText& SimulatedText, enum class EFortSimulatedXPSize SimulatedXpSize)
{
	static auto Func = Class->GetFunction("XpEverywhereAccoladesWidget", "OpenWidget");

	Params::UXpEverywhereAccoladesWidget_OpenWidget_Params Parms;

	Parms.AccoladeDef = AccoladeDef;
	Parms.XpValue = XpValue;
	Parms.DisplayName = DisplayName;
	Parms.AccoladeLargePreviewImageOverride = AccoladeLargePreviewImageOverride;
	Parms.SimulatedName = SimulatedName;
	Parms.SimulatedText = SimulatedText;
	Parms.SimulatedXpSize = SimulatedXpSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereAccoladesWidget.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UXpEverywhereAccoladesWidget::OnStompedByOtherWidget()
{
	static auto Func = Class->GetFunction("XpEverywhereAccoladesWidget", "OnStompedByOtherWidget");

	Params::UXpEverywhereAccoladesWidget_OnStompedByOtherWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereAccoladesWidget.OnEventAdded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UXpEverywhereAccoladesWidget::OnEventAdded()
{
	static auto Func = Class->GetFunction("XpEverywhereAccoladesWidget", "OnEventAdded");

	Params::UXpEverywhereAccoladesWidget_OnEventAdded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereAccoladesWidget.HasMoreXPEvents
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UXpEverywhereAccoladesWidget::HasMoreXPEvents()
{
	static auto Func = Class->GetFunction("XpEverywhereAccoladesWidget", "HasMoreXPEvents");

	Params::UXpEverywhereAccoladesWidget_HasMoreXPEvents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function XpEverywhereUI.XpEverywhereAccoladesWidget.CloseWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UXpEverywhereAccoladesWidget::CloseWidget()
{
	static auto Func = Class->GetFunction("XpEverywhereAccoladesWidget", "CloseWidget");

	Params::UXpEverywhereAccoladesWidget_CloseWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function XpEverywhereUI.XpEverywhereBar.OnXpBarUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              ShownXP                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ShownLevel                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewDesiredXP                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewDesiredLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewRemainingRestXP                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXpEverywhereBar::OnXpBarUpdated(int32 ShownXP, int32 ShownLevel, int32 NewDesiredXP, int32 NewDesiredLevel, int32 NewRemainingRestXP)
{
	static auto Func = Class->GetFunction("XpEverywhereBar", "OnXpBarUpdated");

	Params::UXpEverywhereBar_OnXpBarUpdated_Params Parms;

	Parms.ShownXP = ShownXP;
	Parms.ShownLevel = ShownLevel;
	Parms.NewDesiredXP = NewDesiredXP;
	Parms.NewDesiredLevel = NewDesiredLevel;
	Parms.NewRemainingRestXP = NewRemainingRestXP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereBar.OnXpBarInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentXP                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentRemainingRestXP                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXpEverywhereBar::OnXpBarInitialized(int32 CurrentXP, int32 CurrentLevel, int32 CurrentRemainingRestXP)
{
	static auto Func = Class->GetFunction("XpEverywhereBar", "OnXpBarInitialized");

	Params::UXpEverywhereBar_OnXpBarInitialized_Params Parms;

	Parms.CurrentXP = CurrentXP;
	Parms.CurrentLevel = CurrentLevel;
	Parms.CurrentRemainingRestXP = CurrentRemainingRestXP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereBar.GetTotalXpRequiredForLevel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InLevel                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UXpEverywhereBar::GetTotalXpRequiredForLevel(int32 InLevel)
{
	static auto Func = Class->GetFunction("XpEverywhereBar", "GetTotalXpRequiredForLevel");

	Params::UXpEverywhereBar_GetTotalXpRequiredForLevel_Params Parms;

	Parms.InLevel = InLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function XpEverywhereUI.XpEverywhereBar.DoneUpdatingXpBar
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UXpEverywhereBar::DoneUpdatingXpBar()
{
	static auto Func = Class->GetFunction("XpEverywhereBar", "DoneUpdatingXpBar");

	Params::UXpEverywhereBar_DoneUpdatingXpBar_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function XpEverywhereUI.XpEverywhereLevelUpWidget.OnShowWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXpEverywhereLevelUpWidget::OnShowWidget(int32 NewLevel)
{
	static auto Func = Class->GetFunction("XpEverywhereLevelUpWidget", "OnShowWidget");

	Params::UXpEverywhereLevelUpWidget_OnShowWidget_Params Parms;

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereLevelUpWidget.DoneLevelingUp
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UXpEverywhereLevelUpWidget::DoneLevelingUp()
{
	static auto Func = Class->GetFunction("XpEverywhereLevelUpWidget", "DoneLevelingUp");

	Params::UXpEverywhereLevelUpWidget_DoneLevelingUp_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function XpEverywhereUI.XpEverywhereLevelUpWidget.DisplayLevelUpRewards
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:

void UXpEverywhereLevelUpWidget::DisplayLevelUpRewards()
{
	static auto Func = Class->GetFunction("XpEverywhereLevelUpWidget", "DisplayLevelUpRewards");

	Params::UXpEverywhereLevelUpWidget_DisplayLevelUpRewards_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPSource
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewSourceText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UXpEverywhereReticleWidget::UpdateXPSource(class FText& NewSourceText)
{
	static auto Func = Class->GetFunction("XpEverywhereReticleWidget", "UpdateXPSource");

	Params::UXpEverywhereReticleWidget_UpdateXPSource_Params Parms;

	Parms.NewSourceText = NewSourceText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPAmount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewAmount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundCue*                   Cue                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortSimulatedXPSize    SimulatedXpSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXpEverywhereReticleWidget::UpdateXPAmount(int32 NewAmount, class USoundCue* Cue, enum class EFortSimulatedXPSize SimulatedXpSize)
{
	static auto Func = Class->GetFunction("XpEverywhereReticleWidget", "UpdateXPAmount");

	Params::UXpEverywhereReticleWidget_UpdateXPAmount_Params Parms;

	Parms.NewAmount = NewAmount;
	Parms.Cue = Cue;
	Parms.SimulatedXpSize = SimulatedXpSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereReticleWidget.UpdateRestXP
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RestXpRemaining                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXpEverywhereReticleWidget::UpdateRestXP(int32 RestXpRemaining)
{
	static auto Func = Class->GetFunction("XpEverywhereReticleWidget", "UpdateRestXP");

	Params::UXpEverywhereReticleWidget_UpdateRestXP_Params Parms;

	Parms.RestXpRemaining = RestXpRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpEverywhereUI.XpEverywhereReticleWidget.HandleProfileUpdated
// (Final, Native, Protected)
// Parameters:

void UXpEverywhereReticleWidget::HandleProfileUpdated()
{
	static auto Func = Class->GetFunction("XpEverywhereReticleWidget", "HandleProfileUpdated");

	Params::UXpEverywhereReticleWidget_HandleProfileUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function XpEverywhereUI.XpEverywhereReticleWidget.ForwardEvents
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UXpEverywhereReticleWidget::ForwardEvents()
{
	static auto Func = Class->GetFunction("XpEverywhereReticleWidget", "ForwardEvents");

	Params::UXpEverywhereReticleWidget_ForwardEvents_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function XpEverywhereUI.XpEverywhereRewardWidget.HandleNotificationUpdateFinished
// (Final, Native, Protected)
// Parameters:

void UXpEverywhereRewardWidget::HandleNotificationUpdateFinished()
{
	static auto Func = Class->GetFunction("XpEverywhereRewardWidget", "HandleNotificationUpdateFinished");

	Params::UXpEverywhereRewardWidget_HandleNotificationUpdateFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
