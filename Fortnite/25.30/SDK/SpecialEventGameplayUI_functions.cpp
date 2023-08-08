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


// Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayCinematicWidget::OnStartCinematic()
{
	static auto Func = Class->GetFunction("FortGameplayCinematicWidget", "OnStartCinematic");

	Params::UFortGameplayCinematicWidget_OnStartCinematic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayCinematicWidget::OnCinematicFinished()
{
	static auto Func = Class->GetFunction("FortGameplayCinematicWidget", "OnCinematicFinished");

	Params::UFortGameplayCinematicWidget_OnCinematicFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForReadyForGameplay()
{
	static auto Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForReadyForGameplay");

	Params::UFortGameplayIntroPanelWidget_OnWaitingForReadyForGameplay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForPawn()
{
	static auto Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForPawn");

	Params::UFortGameplayIntroPanelWidget_OnWaitingForPawn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForMinTime()
{
	static auto Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForMinTime");

	Params::UFortGameplayIntroPanelWidget_OnWaitingForMinTime_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnStartIntro()
{
	static auto Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnStartIntro");

	Params::UFortGameplayIntroPanelWidget_OnStartIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayIntroPanelWidget::OnIntroFinished()
{
	static auto Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnIntroFinished");

	Params::UFortGameplayIntroPanelWidget_OnIntroFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class USpecialEventCursorPawnComponent*InCursorPawnComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NormalizedLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWidget::OnViewportLocationChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FVector2D& NormalizedLocation, struct FVector2D& ViewportLocation)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWidget", "OnViewportLocationChanged");

	Params::USpecialEventCursorWidget_OnViewportLocationChanged_Params Parms;

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NormalizedLocation = NormalizedLocation;
	Parms.ViewportLocation = ViewportLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class USpecialEventCursorPawnComponent*InCursorPawnComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldBeVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWidget::OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWidget", "OnDesiredVisibilityChanged");

	Params::USpecialEventCursorWidget_OnDesiredVisibilityChanged_Params Parms;

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.CursorModeTag = CursorModeTag;
	Parms.bShouldBeVisible = bShouldBeVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class USpecialEventCursorPawnComponent*InCursorPawnComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewCursorModeTag                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OldCursorModeTag                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWidget::OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWidget", "OnCursorModeChanged");

	Params::USpecialEventCursorWidget_OnCursorModeChanged_Params Parms;

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NewCursorModeTag = NewCursorModeTag;
	Parms.OldCursorModeTag = OldCursorModeTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer USpecialEventCursorWidget::GetCursorModeTags()
{
	static auto Func = Class->GetFunction("SpecialEventCursorWidget", "GetCursorModeTags");

	Params::USpecialEventCursorWidget_GetCursorModeTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnDesiredVisibilityChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class USpecialEventCursorPawnComponent*InCursorPawnComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldBeVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWidget::BP_OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWidget", "BP_OnDesiredVisibilityChanged");

	Params::USpecialEventCursorWidget_BP_OnDesiredVisibilityChanged_Params Parms;

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.CursorModeTag = CursorModeTag;
	Parms.bShouldBeVisible = bShouldBeVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnCursorModeChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class USpecialEventCursorPawnComponent*InCursorPawnComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewCursorModeTag                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OldCursorModeTag                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWidget::BP_OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag)
{
	static auto Func = Class->GetFunction("SpecialEventCursorWidget", "BP_OnCursorModeChanged");

	Params::USpecialEventCursorWidget_BP_OnCursorModeChanged_Params Parms;

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NewCursorModeTag = NewCursorModeTag;
	Parms.OldCursorModeTag = OldCursorModeTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerStateAthena*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPlayerStateAthena* USpecialEventPlayerInfoWidget::GetRepresentedPlayerState()
{
	static auto Func = Class->GetFunction("SpecialEventPlayerInfoWidget", "GetRepresentedPlayerState");

	Params::USpecialEventPlayerInfoWidget_GetRepresentedPlayerState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SpecialEventGameplayUI.SpecialEventUILibrary.HideFrontEndStateWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewlyHidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventUILibrary::HideFrontEndStateWidget(class UObject* WorldContextObject, bool bNewlyHidden)
{
	static auto Func = Class->GetFunction("SpecialEventUILibrary", "HideFrontEndStateWidget");

	Params::USpecialEventUILibrary_HideFrontEndStateWidget_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.bNewlyHidden = bNewlyHidden;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
