#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
// (None)

class UClass* UFortMobileActionButtonBehavior_ToggleRadio::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_ToggleRadio");

	return Clss;
}


// FortMobileActionButtonBehavior_ToggleRadio SrirachaRanchUI.Default__FortMobileActionButtonBehavior_ToggleRadio
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileActionButtonBehavior_ToggleRadio* UFortMobileActionButtonBehavior_ToggleRadio::GetDefaultObj()
{
	static class UFortMobileActionButtonBehavior_ToggleRadio* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileActionButtonBehavior_ToggleRadio*>(UFortMobileActionButtonBehavior_ToggleRadio::StaticClass()->DefaultObject);

	return Default;
}


// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
// (Final, Native, Private)
// Parameters:
// class UStreamingRadioPlayerComponent*Radio                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAthenaRadioStation         Source                                                           (Parm, NativeAccessSpecifierPublic)

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_ToggleRadio", "HandleRadioStopped");

	Params::UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped_Params Parms{};

	Parms.Radio = Radio;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
// (Final, Native, Private)
// Parameters:
// class UStreamingRadioPlayerComponent*Radio                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAthenaRadioStation         Source                                                           (Parm, NativeAccessSpecifierPublic)

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_ToggleRadio", "HandleRadioPlaying");

	Params::UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying_Params Parms{};

	Parms.Radio = Radio;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SrirachaRanchUI.RadioPlayerWidgetBase
// (None)

class UClass* URadioPlayerWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioPlayerWidgetBase");

	return Clss;
}


// RadioPlayerWidgetBase SrirachaRanchUI.Default__RadioPlayerWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class URadioPlayerWidgetBase* URadioPlayerWidgetBase::GetDefaultObj()
{
	static class URadioPlayerWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<URadioPlayerWidgetBase*>(URadioPlayerWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanControl                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioPlayerWidgetBase::SetControllable(bool bCanControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "SetControllable");

	Params::URadioPlayerWidgetBase_SetControllable_Params Parms{};

	Parms.bCanControl = bCanControl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent*Radio                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAthenaRadioStation         Source                                                           (Parm, NativeAccessSpecifierPublic)

void URadioPlayerWidgetBase::OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnSourcePlaying");

	Params::URadioPlayerWidgetBase_OnSourcePlaying_Params Parms{};

	Parms.Radio = Radio;
	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent*Radio                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAthenaRadioStation         Source                                                           (Parm, NativeAccessSpecifierPublic)

void URadioPlayerWidgetBase::OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnSourceFinished");

	Params::URadioPlayerWidgetBase_OnSourceFinished_Params Parms{};

	Parms.Radio = Radio;
	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance
// (Event, Protected, BlueprintEvent)
// Parameters:

void URadioPlayerWidgetBase::OnShouldShowDueToEntrance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnShouldShowDueToEntrance");

	Params::URadioPlayerWidgetBase_OnShouldShowDueToEntrance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent*Radio                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAthenaRadioStation         LastSource                                                       (Parm, NativeAccessSpecifierPublic)

void URadioPlayerWidgetBase::OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& LastSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnRadioStopped");

	Params::URadioPlayerWidgetBase_OnRadioStopped_Params Parms{};

	Parms.Radio = Radio;
	Parms.LastSource = LastSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent*Radio                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAthenaRadioStation         Source                                                           (Parm, NativeAccessSpecifierPublic)

void URadioPlayerWidgetBase::OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnLoadingNewSource");

	Params::URadioPlayerWidgetBase_OnLoadingNewSource_Params Parms{};

	Parms.Radio = Radio;
	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent*Radio                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAthenaRadioStation         Source                                                           (Parm, NativeAccessSpecifierPublic)

void URadioPlayerWidgetBase::OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnFailedToOpenSource");

	Params::URadioPlayerWidgetBase_OnFailedToOpenSource_Params Parms{};

	Parms.Radio = Radio;
	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp
// (Event, Protected, BlueprintEvent)
// Parameters:

void URadioPlayerWidgetBase::OnDisconnectFromComp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnDisconnectFromComp");

	Params::URadioPlayerWidgetBase_OnDisconnectFromComp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   FortPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadioPlayerWidgetBase::OnControllerGainedNewFortPawn(class UFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnControllerGainedNewFortPawn");

	Params::URadioPlayerWidgetBase_OnControllerGainedNewFortPawn_Params Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
// (Final, Native, Protected)
// Parameters:

void URadioPlayerWidgetBase::NativeExitedVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "NativeExitedVehicle");

	Params::URadioPlayerWidgetBase_NativeExitedVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
// (Final, Native, Protected)
// Parameters:

void URadioPlayerWidgetBase::NativeEnteredVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "NativeEnteredVehicle");

	Params::URadioPlayerWidgetBase_NativeEnteredVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


