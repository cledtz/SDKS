#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
// (None)

class UClass* UFortGameplayCinematicHostWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayCinematicHostWidget");

	return Clss;
}


// FortGameplayCinematicHostWidget SpecialEventGameplayUI.Default__FortGameplayCinematicHostWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayCinematicHostWidget* UFortGameplayCinematicHostWidget::GetDefaultObj()
{
	static class UFortGameplayCinematicHostWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayCinematicHostWidget*>(UFortGameplayCinematicHostWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class SpecialEventGameplayUI.FortGameplayCinematicWidget
// (None)

class UClass* UFortGameplayCinematicWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayCinematicWidget");

	return Clss;
}


// FortGameplayCinematicWidget SpecialEventGameplayUI.Default__FortGameplayCinematicWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayCinematicWidget* UFortGameplayCinematicWidget::GetDefaultObj()
{
	static class UFortGameplayCinematicWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayCinematicWidget*>(UFortGameplayCinematicWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayCinematicWidget::OnStartCinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayCinematicWidget", "OnStartCinematic");

	Params::UFortGameplayCinematicWidget_OnStartCinematic_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayCinematicWidget::OnCinematicFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayCinematicWidget", "OnCinematicFinished");

	Params::UFortGameplayCinematicWidget_OnCinematicFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
// (None)

class UClass* UFortGameplayIntroPanelWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayIntroPanelWidget");

	return Clss;
}


// FortGameplayIntroPanelWidget SpecialEventGameplayUI.Default__FortGameplayIntroPanelWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayIntroPanelWidget* UFortGameplayIntroPanelWidget::GetDefaultObj()
{
	static class UFortGameplayIntroPanelWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayIntroPanelWidget*>(UFortGameplayIntroPanelWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForReadyForGameplay");

	Params::UFortGameplayIntroPanelWidget_OnWaitingForReadyForGameplay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForPawn");

	Params::UFortGameplayIntroPanelWidget_OnWaitingForPawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnWaitingForMinTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnWaitingForMinTime");

	Params::UFortGameplayIntroPanelWidget_OnWaitingForMinTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortGameplayIntroPanelWidget::OnStartIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnStartIntro");

	Params::UFortGameplayIntroPanelWidget_OnStartIntro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortGameplayIntroPanelWidget::OnIntroFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayIntroPanelWidget", "OnIntroFinished");

	Params::UFortGameplayIntroPanelWidget_OnIntroFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SpecialEventGameplayUI.SpecialEventCursorWidget
// (None)

class UClass* USpecialEventCursorWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventCursorWidget");

	return Clss;
}


// SpecialEventCursorWidget SpecialEventGameplayUI.Default__SpecialEventCursorWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventCursorWidget* USpecialEventCursorWidget::GetDefaultObj()
{
	static class USpecialEventCursorWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventCursorWidget*>(USpecialEventCursorWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class USpecialEventCursorPawnComponent*InCursorPawnComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   NormalizedLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWidget::OnViewportLocationChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FVector2D& NormalizedLocation, struct FVector2D& ViewportLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWidget", "OnViewportLocationChanged");

	Params::USpecialEventCursorWidget_OnViewportLocationChanged_Params Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NormalizedLocation = NormalizedLocation;
	Parms.ViewportLocation = ViewportLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class USpecialEventCursorPawnComponent*InCursorPawnComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                CursorModeTag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldBeVisible                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWidget::OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWidget", "OnDesiredVisibilityChanged");

	Params::USpecialEventCursorWidget_OnDesiredVisibilityChanged_Params Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.CursorModeTag = CursorModeTag;
	Parms.bShouldBeVisible = bShouldBeVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class USpecialEventCursorPawnComponent*InCursorPawnComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewCursorModeTag                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OldCursorModeTag                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventCursorWidget::OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWidget", "OnCursorModeChanged");

	Params::USpecialEventCursorWidget_OnCursorModeChanged_Params Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NewCursorModeTag = NewCursorModeTag;
	Parms.OldCursorModeTag = OldCursorModeTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer USpecialEventCursorWidget::GetCursorModeTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWidget", "GetCursorModeTags");

	Params::USpecialEventCursorWidget_GetCursorModeTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWidget", "BP_OnDesiredVisibilityChanged");

	Params::USpecialEventCursorWidget_BP_OnDesiredVisibilityChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventCursorWidget", "BP_OnCursorModeChanged");

	Params::USpecialEventCursorWidget_BP_OnCursorModeChanged_Params Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NewCursorModeTag = NewCursorModeTag;
	Parms.OldCursorModeTag = OldCursorModeTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Class SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
// (None)

class UClass* USpecialEventPlayerInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventPlayerInfoWidget");

	return Clss;
}


// SpecialEventPlayerInfoWidget SpecialEventGameplayUI.Default__SpecialEventPlayerInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventPlayerInfoWidget* USpecialEventPlayerInfoWidget::GetDefaultObj()
{
	static class USpecialEventPlayerInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventPlayerInfoWidget*>(USpecialEventPlayerInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerStateAthena*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPlayerStateAthena* USpecialEventPlayerInfoWidget::GetRepresentedPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventPlayerInfoWidget", "GetRepresentedPlayerState");

	Params::USpecialEventPlayerInfoWidget_GetRepresentedPlayerState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SpecialEventGameplayUI.SpecialEventUILibrary
// (None)

class UClass* USpecialEventUILibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpecialEventUILibrary");

	return Clss;
}


// SpecialEventUILibrary SpecialEventGameplayUI.Default__SpecialEventUILibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USpecialEventUILibrary* USpecialEventUILibrary::GetDefaultObj()
{
	static class USpecialEventUILibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USpecialEventUILibrary*>(USpecialEventUILibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SpecialEventGameplayUI.SpecialEventUILibrary.HideFrontEndStateWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewlyHidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpecialEventUILibrary::HideFrontEndStateWidget(class UObject* WorldContextObject, bool bNewlyHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpecialEventUILibrary", "HideFrontEndStateWidget");

	Params::USpecialEventUILibrary_HideFrontEndStateWidget_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bNewlyHidden = bNewlyHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


