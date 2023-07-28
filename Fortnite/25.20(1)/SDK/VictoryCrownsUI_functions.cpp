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


// Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.RebuildBearerIndicators
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TArray<class UFortPlayerStateAthena*>CrownBearerList                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortUIManagerComponent_VictoryCrowns::RebuildBearerIndicators(TArray<class UFortPlayerStateAthena*>& CrownBearerList)
{
	static auto Func = Class->GetFunction("FortUIManagerComponent_VictoryCrowns", "RebuildBearerIndicators");

	Params::UFortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators_Params Parms;

	Parms.CrownBearerList = CrownBearerList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.HandleGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// FInterfaceProperty_                SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUIManagerComponent_VictoryCrowns::HandleGamePhaseStepChanged(FInterfaceProperty_& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("FortUIManagerComponent_VictoryCrowns", "HandleGamePhaseStepChanged");

	Params::UFortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged_Params Parms;

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsBearerInfoBase::SetPlayerState(class UFortPlayerStateAthena* InPlayerState)
{
	static auto Func = Class->GetFunction("VictoryCrownsBearerInfoBase", "SetPlayerState");

	Params::UVictoryCrownsBearerInfoBase_SetPlayerState_Params Parms;

	Parms.InPlayerState = InPlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      PSA                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsBearerInfoBase::OnSetPlayerState(class UFortPlayerStateAthena* PSA)
{
	static auto Func = Class->GetFunction("VictoryCrownsBearerInfoBase", "OnSetPlayerState");

	Params::UVictoryCrownsBearerInfoBase_OnSetPlayerState_Params Parms;

	Parms.PSA = PSA;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsIndicator.OnScreenClampChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsClamped                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsIndicator::OnScreenClampChanged(bool bIsClamped)
{
	static auto Func = Class->GetFunction("VictoryCrownsIndicator", "OnScreenClampChanged");

	Params::UVictoryCrownsIndicator_OnScreenClampChanged_Params Parms;

	Parms.bIsClamped = bIsClamped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsIndicator.OnDistanceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsIndicator::OnDistanceChanged(int32 Distance)
{
	static auto Func = Class->GetFunction("VictoryCrownsIndicator", "OnDistanceChanged");

	Params::UVictoryCrownsIndicator_OnDistanceChanged_Params Parms;

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsIndicator.GetIndicatedPlayerStateAthena
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerStateAthena*      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPlayerStateAthena* UVictoryCrownsIndicator::GetIndicatedPlayerStateAthena()
{
	static auto Func = Class->GetFunction("VictoryCrownsIndicator", "GetIndicatedPlayerStateAthena");

	Params::UVictoryCrownsIndicator_GetIndicatedPlayerStateAthena_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.OnPlayerVictoryCrownStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasCrown                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsPlayerInfoWidget::OnPlayerVictoryCrownStatusChanged(bool bHasCrown)
{
	static auto Func = Class->GetFunction("VictoryCrownsPlayerInfoWidget", "OnPlayerVictoryCrownStatusChanged");

	Params::UVictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged_Params Parms;

	Parms.bHasCrown = bHasCrown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.HandleCrownBearerListChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TArray<class UFortPlayerStateAthena*>CrownBearerList                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVictoryCrownsPlayerInfoWidget::HandleCrownBearerListChanged(TArray<class UFortPlayerStateAthena*>& CrownBearerList)
{
	static auto Func = Class->GetFunction("VictoryCrownsPlayerInfoWidget", "HandleCrownBearerListChanged");

	Params::UVictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged_Params Parms;

	Parms.CrownBearerList = CrownBearerList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.UnregisterCloseButtonInput
// (Final, Native, Private)
// Parameters:

void UVictoryCrownsPreGameWidget::UnregisterCloseButtonInput()
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "UnregisterCloseButtonInput");

	Params::UVictoryCrownsPreGameWidget_UnregisterCloseButtonInput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.StartFadeOut
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVictoryCrownsPreGameWidget::StartFadeOut()
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "StartFadeOut");

	Params::UVictoryCrownsPreGameWidget_StartFadeOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RegisterCloseButtonInput
// (Final, Native, Private)
// Parameters:

void UVictoryCrownsPreGameWidget::RegisterCloseButtonInput()
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "RegisterCloseButtonInput");

	Params::UVictoryCrownsPreGameWidget_RegisterCloseButtonInput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class UFortPlayerStateAthena*>CrownBearerList                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVictoryCrownsPreGameWidget::RebuildBearerList(TArray<class UFortPlayerStateAthena*>& CrownBearerList)
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "RebuildBearerList");

	Params::UVictoryCrownsPreGameWidget_RebuildBearerList_Params Parms;

	Parms.CrownBearerList = CrownBearerList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsPreGameWidget::OnInputMethodChanged(enum class ECommonInputType CurrentInput)
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnInputMethodChanged");

	Params::UVictoryCrownsPreGameWidget_OnInputMethodChanged_Params Parms;

	Parms.CurrentInput = CurrentInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnCloseActionsComplete
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UVictoryCrownsPreGameWidget::OnCloseActionsComplete()
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnCloseActionsComplete");

	Params::UVictoryCrownsPreGameWidget_OnCloseActionsComplete_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsPreGameWidget::OnButtonCloseProgress(float Progress)
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnButtonCloseProgress");

	Params::UVictoryCrownsPreGameWidget_OnButtonCloseProgress_Params Parms;

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonClose
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVictoryCrownsPreGameWidget::OnButtonClose()
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "OnButtonClose");

	Params::UVictoryCrownsPreGameWidget_OnButtonClose_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.HandleGamePhaseStepChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// FInterfaceProperty_                SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVictoryCrownsPreGameWidget::HandleGamePhaseStepChanged(FInterfaceProperty_& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "HandleGamePhaseStepChanged");

	Params::UVictoryCrownsPreGameWidget_HandleGamePhaseStepChanged_Params Parms;

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VictoryCrownsUI.VictoryCrownsPreGameWidget.FadeOutTimerFinished
// (Final, Native, Private)
// Parameters:

void UVictoryCrownsPreGameWidget::FadeOutTimerFinished()
{
	static auto Func = Class->GetFunction("VictoryCrownsPreGameWidget", "FadeOutTimerFinished");

	Params::UVictoryCrownsPreGameWidget_FadeOutTimerFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
