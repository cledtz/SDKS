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


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ProgressEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonPopupMenuLegacy*      PopupMenu                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithProgressPopupMenu");

	Params::UCommonActivatablePanelLegacy_SetInputActionHandlerWithProgressPopupMenu_Params Parms;

	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ProgressEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithProgress");

	Params::UCommonActivatablePanelLegacy_SetInputActionHandlerWithProgress_Params Parms;

	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonPopupMenuLegacy*      PopupMenu                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithPopupMenu");

	Params::UCommonActivatablePanelLegacy_SetInputActionHandlerWithPopupMenu_Params Parms;

	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandler");

	Params::UCommonActivatablePanelLegacy_SetInputActionHandler_Params Parms;

	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 DisabledCommitEvent                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State, FDelegateProperty_ DisabledCommitEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateWithDisabledCommitEvent");

	Params::UCommonActivatablePanelLegacy_SetActionHandlerStateWithDisabledCommitEvent_Params Parms;

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;
	Parms.DisabledCommitEvent = DisabledCommitEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 DisabledCommitEvent                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State, FDelegateProperty_ DisabledCommitEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateFromHandleWithDisabledCommitEvent");

	Params::UCommonActivatablePanelLegacy_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params Parms;

	Parms.InputActionRow = InputActionRow;
	Parms.State = State;
	Parms.DisabledCommitEvent = DisabledCommitEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateFromHandle");

	Params::UCommonActivatablePanelLegacy_SetActionHandlerStateFromHandle_Params Parms;

	Parms.InputActionRow = InputActionRow;
	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerState");

	Params::UCommonActivatablePanelLegacy_SetActionHandlerState_Params Parms;

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "RemoveInputActionHandler");

	Params::UCommonActivatablePanelLegacy_RemoveInputActionHandler_Params Parms;

	Parms.InputActionRow = InputActionRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::RemoveAllInputActionHandlers()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "RemoveAllInputActionHandlers");

	Params::UCommonActivatablePanelLegacy_RemoveAllInputActionHandlers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.PopPanel
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::PopPanel()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "PopPanel");

	Params::UCommonActivatablePanelLegacy_PopPanel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnTransitionedBySwitcher()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnTransitionedBySwitcher");

	Params::UCommonActivatablePanelLegacy_OnTransitionedBySwitcher_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnRemovedFromActivationStack()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnRemovedFromActivationStack");

	Params::UCommonActivatablePanelLegacy_OnRemovedFromActivationStack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnInputModeChanged");

	Params::UCommonActivatablePanelLegacy_OnInputModeChanged_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnBeginOutro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnBeginOutro");

	Params::UCommonActivatablePanelLegacy_OnBeginOutro_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnBeginIntro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnBeginIntro");

	Params::UCommonActivatablePanelLegacy_OnBeginIntro_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnAddedToActivationStack()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnAddedToActivationStack");

	Params::UCommonActivatablePanelLegacy_OnAddedToActivationStack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanelLegacy::IsIntroed()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "IsIntroed");

	Params::UCommonActivatablePanelLegacy_IsIntroed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanelLegacy::IsInActivationStack()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "IsInActivationStack");

	Params::UCommonActivatablePanelLegacy_IsInActivationStack_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanelLegacy::HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "HasInputActionHandler");

	Params::UCommonActivatablePanelLegacy_HasInputActionHandler_Params Parms;

	Parms.InputActionRow = InputActionRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FCommonInputActionHandlerData>InputActionDataRows                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanelLegacy::GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "GetInputActions");

	Params::UCommonActivatablePanelLegacy_GetInputActions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InputActionDataRows != nullptr)
		*InputActionDataRows = Parms.InputActionDataRows;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.EndOutro
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::EndOutro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "EndOutro");

	Params::UCommonActivatablePanelLegacy_EndOutro_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.EndIntro
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::EndIntro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "EndIntro");

	Params::UCommonActivatablePanelLegacy_EndIntro_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::BeginOutro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "BeginOutro");

	Params::UCommonActivatablePanelLegacy_BeginOutro_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::BeginIntro()
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "BeginIntro");

	Params::UCommonActivatablePanelLegacy_BeginIntro_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionNoHandler");

	Params::UCommonActivatablePanelLegacy_AddInputActionNoHandler_Params Parms;

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ProgressEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonPopupMenuLegacy*      PopupMenu                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithProgressPopup");

	Params::UCommonActivatablePanelLegacy_AddInputActionHandlerWithProgressPopup_Params Parms;

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ProgressEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithProgress(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithProgress");

	Params::UCommonActivatablePanelLegacy_AddInputActionHandlerWithProgress_Params Parms;

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonPopupMenuLegacy*      PopupMenu                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithPopup(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithPopup");

	Params::UCommonActivatablePanelLegacy_AddInputActionHandlerWithPopup_Params Parms;

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::AddInputActionHandler(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent)
{
	static auto Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandler");

	Params::UCommonActivatablePanelLegacy_AddInputActionHandler_Params Parms;

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UCommonActivatablePanelLegacy*OldPanel                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::SetTriggeredInputActionLegacy(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel)
{
	static auto Func = Class->GetFunction("CommonButtonLegacy", "SetTriggeredInputActionLegacy");

	Params::UCommonButtonLegacy_SetTriggeredInputActionLegacy_Params Parms;

	Parms.InputActionRow = InputActionRow;
	Parms.OldPanel = OldPanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected)
{
	static auto Func = Class->GetFunction("CommonButtonLegacy", "HandleOnSelectedChanged");

	Params::UCommonButtonLegacy_HandleOnSelectedChanged_Params Parms;

	Parms.Button = Button;
	Parms.InSelected = InSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnButtonUnhovered(class UCommonButtonBase* Button)
{
	static auto Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonUnhovered");

	Params::UCommonButtonLegacy_HandleOnButtonUnhovered_Params Parms;

	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnButtonHovered(class UCommonButtonBase* Button)
{
	static auto Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonHovered");

	Params::UCommonButtonLegacy_HandleOnButtonHovered_Params Parms;

	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnButtonDoubleClicked(class UCommonButtonBase* Button)
{
	static auto Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonDoubleClicked");

	Params::UCommonButtonLegacy_HandleOnButtonDoubleClicked_Params Parms;

	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnButtonClicked(class UCommonButtonBase* Button)
{
	static auto Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonClicked");

	Params::UCommonButtonLegacy_HandleOnButtonClicked_Params Parms;

	Parms.Button = Button;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonInputManagerLegacy::SuspendStartingOperationProcessing()
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "SuspendStartingOperationProcessing");

	Params::UCommonInputManagerLegacy_SuspendStartingOperationProcessing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionDataRow                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CompleteEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ProgressEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManagerLegacy::StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, FDelegateProperty_& CompleteEvent, FDelegateProperty_& ProgressEvent)
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "StopListeningForExistingHeldAction");

	Params::UCommonInputManagerLegacy_StopListeningForExistingHeldAction_Params Parms;

	Parms.InputActionDataRow = InputActionDataRow;
	Parms.CompleteEvent = CompleteEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionDataRow                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CompleteEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ProgressEvent                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManagerLegacy::StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, FDelegateProperty_& CompleteEvent, FDelegateProperty_& ProgressEvent)
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "StartListeningForExistingHeldAction");

	Params::UCommonInputManagerLegacy_StartListeningForExistingHeldAction_Params Parms;

	Parms.InputActionDataRow = InputActionDataRow;
	Parms.CompleteEvent = CompleteEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InFilterPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManagerLegacy::SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority)
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "SetGlobalInputHandlerPriorityFilter");

	Params::UCommonInputManagerLegacy_SetGlobalInputHandlerPriorityFilter_Params Parms;

	Parms.InFilterPriority = InFilterPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonInputManagerLegacy::ResumeStartingOperationProcessing()
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "ResumeStartingOperationProcessing");

	Params::UCommonInputManagerLegacy_ResumeStartingOperationProcessing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatablePanelLegacy*ActivatablePanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIntroPanel                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutroPanelBelow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManagerLegacy::PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow)
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "PushActivatablePanel");

	Params::UCommonInputManagerLegacy_PushActivatablePanel_Params Parms;

	Parms.ActivatablePanel = ActivatablePanel;
	Parms.bIntroPanel = bIntroPanel;
	Parms.bOutroPanelBelow = bOutroPanelBelow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatablePanelLegacy*ActivatablePanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManagerLegacy::PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel)
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "PopActivatablePanel");

	Params::UCommonInputManagerLegacy_PopActivatablePanel_Params Parms;

	Parms.ActivatablePanel = ActivatablePanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatablePanelLegacy*InPanel                                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManagerLegacy::IsPanelOnStack(class UCommonActivatablePanelLegacy* InPanel)
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "IsPanelOnStack");

	Params::UCommonInputManagerLegacy_IsPanelOnStack_Params Parms;

	Parms.InPanel = InPanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManagerLegacy::IsInputSuspended()
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "IsInputSuspended");

	Params::UCommonInputManagerLegacy_IsInputSuspended_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.GetTopPanel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatablePanelLegacy*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatablePanelLegacy* UCommonInputManagerLegacy::GetTopPanel()
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "GetTopPanel");

	Params::UCommonInputManagerLegacy_GetTopPanel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonInputManagerLegacy::GetGlobalInputHandlerPriorityFilter()
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "GetGlobalInputHandlerPriorityFilter");

	Params::UCommonInputManagerLegacy_GetGlobalInputHandlerPriorityFilter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCommonInputActionHandlerData>AvailableInputActions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManagerLegacy::GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions)
{
	static auto Func = Class->GetFunction("CommonInputManagerLegacy", "GetAvailableInputActions");

	Params::UCommonInputManagerLegacy_GetAvailableInputActions_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AvailableInputActions != nullptr)
		*AvailableInputActions = Parms.AvailableInputActions;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         AddedButton                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCommonInputActionHandlerDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonInputReflectorLegacy::OnButtonAdded(class UCommonButtonLegacy* AddedButton, struct FCommonInputActionHandlerData& Data)
{
	static auto Func = Class->GetFunction("CommonInputReflectorLegacy", "OnButtonAdded");

	Params::UCommonInputReflectorLegacy_OnButtonAdded_Params Parms;

	Parms.AddedButton = AddedButton;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget
// (Final, Native, Private)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UCommonPopupButtonLegacy::GetMenuAnchorWidget()
{
	static auto Func = Class->GetFunction("CommonPopupButtonLegacy", "GetMenuAnchorWidget");

	Params::UCommonPopupButtonLegacy_GetMenuAnchorWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMenuAnchor*                 MenuAnchor                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPopupMenuLegacy::SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor)
{
	static auto Func = Class->GetFunction("CommonPopupMenuLegacy", "SetOwningMenuAnchor");

	Params::UCommonPopupMenuLegacy_SetOwningMenuAnchor_Params Parms;

	Parms.MenuAnchor = MenuAnchor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ContextProvidingObject                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPopupMenuLegacy::SetContextProvider(class UObject* ContextProvidingObject)
{
	static auto Func = Class->GetFunction("CommonPopupMenuLegacy", "SetContextProvider");

	Params::UCommonPopupMenuLegacy_SetContextProvider_Params Parms;

	Parms.ContextProvidingObject = ContextProvidingObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.RequestClose
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonPopupMenuLegacy::RequestClose()
{
	static auto Func = Class->GetFunction("CommonPopupMenuLegacy", "RequestClose");

	Params::UCommonPopupMenuLegacy_RequestClose_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged
// (Final, Native, Protected)
// Parameters:
// bool                               IsOpen                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPopupMenuLegacy::OnIsOpenChanged(bool IsOpen)
{
	static auto Func = Class->GetFunction("CommonPopupMenuLegacy", "OnIsOpenChanged");

	Params::UCommonPopupMenuLegacy_OnIsOpenChanged_Params Parms;

	Parms.IsOpen = IsOpen;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonPopupMenuLegacy::HandlePreDifferentContextProviderSet()
{
	static auto Func = Class->GetFunction("CommonPopupMenuLegacy", "HandlePreDifferentContextProviderSet");

	Params::UCommonPopupMenuLegacy_HandlePreDifferentContextProviderSet_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonPopupMenuLegacy::HandlePostDifferentContextProviderSet()
{
	static auto Func = Class->GetFunction("CommonPopupMenuLegacy", "HandlePostDifferentContextProviderSet");

	Params::UCommonPopupMenuLegacy_HandlePostDifferentContextProviderSet_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButtonLegacy* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidgetLegacy", "OnTabButtonRemoved__DelegateSignature");

	Params::UCommonTabListWidgetLegacy_OnTabButtonRemoved__DelegateSignature_Params Parms;

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButtonLegacy* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidgetLegacy", "OnTabButtonCreated__DelegateSignature");

	Params::UCommonTabListWidgetLegacy_OnTabButtonCreated__DelegateSignature_Params Parms;

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::HandleTabRemoved(class FName TabNameID, class UCommonButtonLegacy* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleTabRemoved");

	Params::UCommonTabListWidgetLegacy_HandleTabRemoved_Params Parms;

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::HandleTabCreated(class FName TabNameID, class UCommonButtonLegacy* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleTabCreated");

	Params::UCommonTabListWidgetLegacy_HandleTabCreated_Params Parms;

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::HandleOnTabButtonRemoved(class FName TabId, class UCommonButtonBase* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleOnTabButtonRemoved");

	Params::UCommonTabListWidgetLegacy_HandleOnTabButtonRemoved_Params Parms;

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::HandleOnTabButtonCreated(class FName TabId, class UCommonButtonBase* TabButton)
{
	static auto Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleOnTabButtonCreated");

	Params::UCommonTabListWidgetLegacy_HandleOnTabButtonCreated_Params Parms;

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonLegacy* UCommonTabListWidgetLegacy::GetTabButtonByID(class FName TabNameID)
{
	static auto Func = Class->GetFunction("CommonTabListWidgetLegacy", "GetTabButtonByID");

	Params::UCommonTabListWidgetLegacy_GetTabButtonByID_Params Parms;

	Parms.TabNameID = TabNameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bInputSuspended                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUISubsystemLegacy::InputSuspensionChanged__DelegateSignature(bool bInputSuspended)
{
	static auto Func = Class->GetFunction("CommonUISubsystemLegacy", "InputSuspensionChanged__DelegateSignature");

	Params::UCommonUISubsystemLegacy_InputSuspensionChanged__DelegateSignature_Params Parms;

	Parms.bInputSuspended = bInputSuspended;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonUISubsystemLegacy.GetInputManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonInputManagerLegacy*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonInputManagerLegacy* UCommonUISubsystemLegacy::GetInputManager()
{
	static auto Func = Class->GetFunction("CommonUISubsystemLegacy", "GetInputManager");

	Params::UCommonUISubsystemLegacy_GetInputManager_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonWidgetStackLegacy.PushWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetStackLegacy::PushWidget(class UWidget* InWidget)
{
	static auto Func = Class->GetFunction("CommonWidgetStackLegacy", "PushWidget");

	Params::UCommonWidgetStackLegacy_PushWidget_Params Parms;

	Parms.InWidget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonWidgetStackLegacy.PopWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonWidgetStackLegacy::PopWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetStackLegacy", "PopWidget");

	Params::UCommonWidgetStackLegacy_PopWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                     InActiveWidget                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InActiveWidgetIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetStackLegacy::OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* InActiveWidget, int32 InActiveWidgetIndex)
{
	static auto Func = Class->GetFunction("CommonWidgetStackLegacy", "OnActiveWidgetChangedLegacy__DelegateSignature");

	Params::UCommonWidgetStackLegacy_OnActiveWidgetChangedLegacy__DelegateSignature_Params Parms;

	Parms.InActiveWidget = InActiveWidget;
	Parms.InActiveWidgetIndex = InActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonWidgetStackLegacy::DeactivateWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetStackLegacy", "DeactivateWidget");

	Params::UCommonWidgetStackLegacy_DeactivateWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonWidgetStackLegacy::ActivateWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetStackLegacy", "ActivateWidget");

	Params::UCommonWidgetStackLegacy_ActivateWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttemptActivationChange                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcherLegacy::SetActiveWidgetIndex_Advanced(int32 Index, bool AttemptActivationChange)
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "SetActiveWidgetIndex_Advanced");

	Params::UCommonWidgetSwitcherLegacy_SetActiveWidgetIndex_Advanced_Params Parms;

	Parms.Index = Index;
	Parms.AttemptActivationChange = AttemptActivationChange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttemptActivationChange                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcherLegacy::SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange)
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "SetActiveWidget_Advanced");

	Params::UCommonWidgetSwitcherLegacy_SetActiveWidget_Advanced_Params Parms;

	Parms.Widget = Widget;
	Parms.AttemptActivationChange = AttemptActivationChange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated
// (Final, Native, Private)
// Parameters:
// class UCommonActivatablePanelLegacy*DeactivatedPanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcherLegacy::HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "HandleActiveWidgetDeactivated");

	Params::UCommonWidgetSwitcherLegacy_HandleActiveWidgetDeactivated_Params Parms;

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetSwitcherLegacy::DeactivateWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "DeactivateWidget");

	Params::UCommonWidgetSwitcherLegacy_DeactivateWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetSwitcherLegacy::ActivateWidget()
{
	static auto Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "ActivateWidget");

	Params::UCommonWidgetSwitcherLegacy_ActivateWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "OnSelectionStateChanged");

	Params::UCommonButtonGroupLegacy_OnSelectionStateChanged_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.bIsSelected = bIsSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "OnHandleButtonDoubleClicked");

	Params::UCommonButtonGroupLegacy_OnHandleButtonDoubleClicked_Params Parms;

	Parms.BaseButton = BaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "OnHandleButtonClicked");

	Params::UCommonButtonGroupLegacy_OnHandleButtonClicked_Params Parms;

	Parms.BaseButton = BaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnButtonUnhovered(class UCommonButtonLegacy* BaseButton)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "OnButtonUnhovered");

	Params::UCommonButtonGroupLegacy_OnButtonUnhovered_Params Parms;

	Parms.BaseButton = BaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnButtonHovered(class UCommonButtonLegacy* BaseButton)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "OnButtonHovered");

	Params::UCommonButtonGroupLegacy_OnButtonHovered_Params Parms;

	Parms.BaseButton = BaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnSelectedButtonChanged");

	Params::UCommonButtonGroupLegacy_HandleOnSelectedButtonChanged_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnHoveredButtonChanged");

	Params::UCommonButtonGroupLegacy_HandleOnHoveredButtonChanged_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnButtonDoubleClicked");

	Params::UCommonButtonGroupLegacy_HandleOnButtonDoubleClicked_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnButtonClicked");

	Params::UCommonButtonGroupLegacy_HandleOnButtonClicked_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnSelectedButtonChanged");

	Params::UCommonButtonGroupLegacy_HandleNativeOnSelectedButtonChanged_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnHoveredButtonChanged");

	Params::UCommonButtonGroupLegacy_HandleNativeOnHoveredButtonChanged_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnButtonDoubleClicked");

	Params::UCommonButtonGroupLegacy_HandleNativeOnButtonDoubleClicked_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnButtonClicked");

	Params::UCommonButtonGroupLegacy_HandleNativeOnButtonClicked_Params Parms;

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonLegacy*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonLegacy* UCommonButtonGroupLegacy::GetSelectedButton()
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "GetSelectedButton");

	Params::UCommonButtonGroupLegacy_GetSelectedButton_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonLegacy* UCommonButtonGroupLegacy::GetButtonAtIndex(int32 Index)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "GetButtonAtIndex");

	Params::UCommonButtonGroupLegacy_GetButtonAtIndex_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInSelectionRequired                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonGroupLegacy*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonGroupLegacy* UCommonButtonGroupLegacy::CreateButtonGroup(class UObject* ContextObject, bool bInSelectionRequired)
{
	static auto Func = Class->GetFunction("CommonButtonGroupLegacy", "CreateButtonGroup");

	Params::UCommonButtonGroupLegacy_CreateButtonGroup_Params Parms;

	Parms.ContextObject = ContextObject;
	Parms.bInSelectionRequired = bInSelectionRequired;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
