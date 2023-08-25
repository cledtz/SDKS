#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
// (None)

class UClass* UFortUIManagerComponent_VictoryCrowns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUIManagerComponent_VictoryCrowns");

	return Clss;
}


// FortUIManagerComponent_VictoryCrowns VictoryCrownsUI.Default__FortUIManagerComponent_VictoryCrowns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUIManagerComponent_VictoryCrowns* UFortUIManagerComponent_VictoryCrowns::GetDefaultObj()
{
	static class UFortUIManagerComponent_VictoryCrowns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUIManagerComponent_VictoryCrowns*>(UFortUIManagerComponent_VictoryCrowns::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.RebuildBearerIndicators
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TArray<class UFortPlayerStateAthena*>CrownBearerList                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortUIManagerComponent_VictoryCrowns::RebuildBearerIndicators(TArray<class UFortPlayerStateAthena*>& CrownBearerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUIManagerComponent_VictoryCrowns", "RebuildBearerIndicators");

	Params::UFortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators_Params Parms{};

	Parms.CrownBearerList = CrownBearerList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.HandleGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class UFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUIManagerComponent_VictoryCrowns::HandleGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUIManagerComponent_VictoryCrowns", "HandleGamePhaseStepChanged");

	Params::UFortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VictoryCrownsUI.VictoryCrownsBearerInfoBase
// (None)

class UClass* UVictoryCrownsBearerInfoBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryCrownsBearerInfoBase");

	return Clss;
}


// VictoryCrownsBearerInfoBase VictoryCrownsUI.Default__VictoryCrownsBearerInfoBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVictoryCrownsBearerInfoBase* UVictoryCrownsBearerInfoBase::GetDefaultObj()
{
	static class UVictoryCrownsBearerInfoBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryCrownsBearerInfoBase*>(UVictoryCrownsBearerInfoBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsBearerInfoBase::SetPlayerState(class UFortPlayerStateAthena* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsBearerInfoBase", "SetPlayerState");

	Params::UVictoryCrownsBearerInfoBase_SetPlayerState_Params Parms{};

	Parms.InPlayerState = InPlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      PSA                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsBearerInfoBase::OnSetPlayerState(class UFortPlayerStateAthena* PSA)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsBearerInfoBase", "OnSetPlayerState");

	Params::UVictoryCrownsBearerInfoBase_OnSetPlayerState_Params Parms{};

	Parms.PSA = PSA;

	UObject::ProcessEvent(Func, &Parms);

}


// Class VictoryCrownsUI.VictoryCrownsIndicator
// (None)

class UClass* UVictoryCrownsIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryCrownsIndicator");

	return Clss;
}


// VictoryCrownsIndicator VictoryCrownsUI.Default__VictoryCrownsIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UVictoryCrownsIndicator* UVictoryCrownsIndicator::GetDefaultObj()
{
	static class UVictoryCrownsIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryCrownsIndicator*>(UVictoryCrownsIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownsUI.VictoryCrownsIndicator.OnScreenClampChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsClamped                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsIndicator::OnScreenClampChanged(bool bIsClamped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsIndicator", "OnScreenClampChanged");

	Params::UVictoryCrownsIndicator_OnScreenClampChanged_Params Parms{};

	Parms.bIsClamped = bIsClamped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsIndicator.OnDistanceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsIndicator::OnDistanceChanged(int32 Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsIndicator", "OnDistanceChanged");

	Params::UVictoryCrownsIndicator_OnDistanceChanged_Params Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsIndicator.GetIndicatedPlayerStateAthena
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerStateAthena*      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPlayerStateAthena* UVictoryCrownsIndicator::GetIndicatedPlayerStateAthena()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsIndicator", "GetIndicatedPlayerStateAthena");

	Params::UVictoryCrownsIndicator_GetIndicatedPlayerStateAthena_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VictoryCrownsUI.VictoryCrownsPlacementOverlay
// (None)

class UClass* UVictoryCrownsPlacementOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryCrownsPlacementOverlay");

	return Clss;
}


// VictoryCrownsPlacementOverlay VictoryCrownsUI.Default__VictoryCrownsPlacementOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UVictoryCrownsPlacementOverlay* UVictoryCrownsPlacementOverlay::GetDefaultObj()
{
	static class UVictoryCrownsPlacementOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryCrownsPlacementOverlay*>(UVictoryCrownsPlacementOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Class VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
// (None)

class UClass* UVictoryCrownsPlayerInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryCrownsPlayerInfoWidget");

	return Clss;
}


// VictoryCrownsPlayerInfoWidget VictoryCrownsUI.Default__VictoryCrownsPlayerInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UVictoryCrownsPlayerInfoWidget* UVictoryCrownsPlayerInfoWidget::GetDefaultObj()
{
	static class UVictoryCrownsPlayerInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryCrownsPlayerInfoWidget*>(UVictoryCrownsPlayerInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.OnPlayerVictoryCrownStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasCrown                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsPlayerInfoWidget::OnPlayerVictoryCrownStatusChanged(bool bHasCrown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPlayerInfoWidget", "OnPlayerVictoryCrownStatusChanged");

	Params::UVictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged_Params Parms{};

	Parms.bHasCrown = bHasCrown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.HandleCrownBearerListChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TArray<class UFortPlayerStateAthena*>CrownBearerList                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVictoryCrownsPlayerInfoWidget::HandleCrownBearerListChanged(TArray<class UFortPlayerStateAthena*>& CrownBearerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPlayerInfoWidget", "HandleCrownBearerListChanged");

	Params::UVictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged_Params Parms{};

	Parms.CrownBearerList = CrownBearerList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VictoryCrownsUI.VictoryCrownsPreGameWidget
// (None)

class UClass* UVictoryCrownsPreGameWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryCrownsPreGameWidget");

	return Clss;
}


// VictoryCrownsPreGameWidget VictoryCrownsUI.Default__VictoryCrownsPreGameWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UVictoryCrownsPreGameWidget* UVictoryCrownsPreGameWidget::GetDefaultObj()
{
	static class UVictoryCrownsPreGameWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryCrownsPreGameWidget*>(UVictoryCrownsPreGameWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.UnregisterCloseButtonInput
// (Final, Native, Private)
// Parameters:

void UVictoryCrownsPreGameWidget::UnregisterCloseButtonInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "UnregisterCloseButtonInput");

	Params::UVictoryCrownsPreGameWidget_UnregisterCloseButtonInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.StartFadeOut
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVictoryCrownsPreGameWidget::StartFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "StartFadeOut");

	Params::UVictoryCrownsPreGameWidget_StartFadeOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RegisterCloseButtonInput
// (Final, Native, Private)
// Parameters:

void UVictoryCrownsPreGameWidget::RegisterCloseButtonInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "RegisterCloseButtonInput");

	Params::UVictoryCrownsPreGameWidget_RegisterCloseButtonInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class UFortPlayerStateAthena*>CrownBearerList                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVictoryCrownsPreGameWidget::RebuildBearerList(TArray<class UFortPlayerStateAthena*>& CrownBearerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "RebuildBearerList");

	Params::UVictoryCrownsPreGameWidget_RebuildBearerList_Params Parms{};

	Parms.CrownBearerList = CrownBearerList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsPreGameWidget::OnInputMethodChanged(enum class ECommonInputType CurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnInputMethodChanged");

	Params::UVictoryCrownsPreGameWidget_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInput = CurrentInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnCloseActionsComplete
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UVictoryCrownsPreGameWidget::OnCloseActionsComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnCloseActionsComplete");

	Params::UVictoryCrownsPreGameWidget_OnCloseActionsComplete_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsPreGameWidget::OnButtonCloseProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnButtonCloseProgress");

	Params::UVictoryCrownsPreGameWidget_OnButtonCloseProgress_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonClose
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVictoryCrownsPreGameWidget::OnButtonClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnButtonClose");

	Params::UVictoryCrownsPreGameWidget_OnButtonClose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.HandleGamePhaseStepChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// TScriptInterface<class UFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsPreGameWidget::HandleGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "HandleGamePhaseStepChanged");

	Params::UVictoryCrownsPreGameWidget_HandleGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.FadeOutTimerFinished
// (Final, Native, Private)
// Parameters:

void UVictoryCrownsPreGameWidget::FadeOutTimerFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownsPreGameWidget", "FadeOutTimerFinished");

	Params::UVictoryCrownsPreGameWidget_FadeOutTimerFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


