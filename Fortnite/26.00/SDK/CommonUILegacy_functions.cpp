#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonUILegacy.CommonActivatablePanelLegacy
// (None)

class UClass* UCommonActivatablePanelLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActivatablePanelLegacy");

	return Clss;
}


// CommonActivatablePanelLegacy CommonUILegacy.Default__CommonActivatablePanelLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonActivatablePanelLegacy* UCommonActivatablePanelLegacy::GetDefaultObj()
{
	static class UCommonActivatablePanelLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonActivatablePanelLegacy*>(UCommonActivatablePanelLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ProgressEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonPopupMenuLegacy*      PopupMenu                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithProgressPopupMenu");

	Params::UCommonActivatablePanelLegacy_SetInputActionHandlerWithProgressPopupMenu_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ProgressEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, FDelegateProperty_ ProgressEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithProgress");

	Params::UCommonActivatablePanelLegacy_SetInputActionHandlerWithProgress_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonPopupMenuLegacy*      PopupMenu                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithPopupMenu");

	Params::UCommonActivatablePanelLegacy_SetInputActionHandlerWithPopupMenu_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, FDelegateProperty_ CommitedEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandler");

	Params::UCommonActivatablePanelLegacy_SetInputActionHandler_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.CommitedEvent = CommitedEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateWithDisabledCommitEvent");

	Params::UCommonActivatablePanelLegacy_SetActionHandlerStateWithDisabledCommitEvent_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;
	Parms.DisabledCommitEvent = DisabledCommitEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 DisabledCommitEvent                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State, FDelegateProperty_ DisabledCommitEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateFromHandleWithDisabledCommitEvent");

	Params::UCommonActivatablePanelLegacy_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.State = State;
	Parms.DisabledCommitEvent = DisabledCommitEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateFromHandle");

	Params::UCommonActivatablePanelLegacy_SetActionHandlerStateFromHandle_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::SetActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerState");

	Params::UCommonActivatablePanelLegacy_SetActionHandlerState_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "RemoveInputActionHandler");

	Params::UCommonActivatablePanelLegacy_RemoveInputActionHandler_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::RemoveAllInputActionHandlers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "RemoveAllInputActionHandlers");

	Params::UCommonActivatablePanelLegacy_RemoveAllInputActionHandlers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.PopPanel
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::PopPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "PopPanel");

	Params::UCommonActivatablePanelLegacy_PopPanel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnTransitionedBySwitcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnTransitionedBySwitcher");

	Params::UCommonActivatablePanelLegacy_OnTransitionedBySwitcher_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnRemovedFromActivationStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnRemovedFromActivationStack");

	Params::UCommonActivatablePanelLegacy_OnRemovedFromActivationStack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::OnInputModeChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnInputModeChanged");

	Params::UCommonActivatablePanelLegacy_OnInputModeChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnBeginOutro");

	Params::UCommonActivatablePanelLegacy_OnBeginOutro_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnBeginIntro");

	Params::UCommonActivatablePanelLegacy_OnBeginIntro_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatablePanelLegacy::OnAddedToActivationStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnAddedToActivationStack");

	Params::UCommonActivatablePanelLegacy_OnAddedToActivationStack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanelLegacy::IsIntroed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "IsIntroed");

	Params::UCommonActivatablePanelLegacy_IsIntroed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanelLegacy::IsInActivationStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "IsInActivationStack");

	Params::UCommonActivatablePanelLegacy_IsInActivationStack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanelLegacy::HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "HasInputActionHandler");

	Params::UCommonActivatablePanelLegacy_HasInputActionHandler_Params Parms{};

	Parms.InputActionRow = InputActionRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FCommonInputActionHandlerData>InputActionDataRows                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatablePanelLegacy::GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "GetInputActions");

	Params::UCommonActivatablePanelLegacy_GetInputActions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InputActionDataRows != nullptr)
		*InputActionDataRows = Parms.InputActionDataRows;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.EndOutro
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::EndOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "EndOutro");

	Params::UCommonActivatablePanelLegacy_EndOutro_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.EndIntro
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::EndIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "EndIntro");

	Params::UCommonActivatablePanelLegacy_EndIntro_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::BeginOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "BeginOutro");

	Params::UCommonActivatablePanelLegacy_BeginOutro_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatablePanelLegacy::BeginIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "BeginIntro");

	Params::UCommonActivatablePanelLegacy_BeginIntro_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionNoHandler");

	Params::UCommonActivatablePanelLegacy_AddInputActionNoHandler_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithProgressPopup");

	Params::UCommonActivatablePanelLegacy_AddInputActionHandlerWithProgressPopup_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithProgress");

	Params::UCommonActivatablePanelLegacy_AddInputActionHandlerWithProgress_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithPopup");

	Params::UCommonActivatablePanelLegacy_AddInputActionHandlerWithPopup_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 CommitedEvent                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatablePanelLegacy::AddInputActionHandler(class UDataTable* DataTable, class FName RowName, FDelegateProperty_ CommitedEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandler");

	Params::UCommonActivatablePanelLegacy_AddInputActionHandler_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUILegacy.CommonButtonInternalLegacy
// (None)

class UClass* UCommonButtonInternalLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonInternalLegacy");

	return Clss;
}


// CommonButtonInternalLegacy CommonUILegacy.Default__CommonButtonInternalLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonButtonInternalLegacy* UCommonButtonInternalLegacy::GetDefaultObj()
{
	static class UCommonButtonInternalLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonInternalLegacy*>(UCommonButtonInternalLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUILegacy.CommonButtonLegacy
// (None)

class UClass* UCommonButtonLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonLegacy");

	return Clss;
}


// CommonButtonLegacy CommonUILegacy.Default__CommonButtonLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonButtonLegacy* UCommonButtonLegacy::GetDefaultObj()
{
	static class UCommonButtonLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonLegacy*>(UCommonButtonLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UCommonActivatablePanelLegacy*OldPanel                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::SetTriggeredInputActionLegacy(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonLegacy", "SetTriggeredInputActionLegacy");

	Params::UCommonButtonLegacy_SetTriggeredInputActionLegacy_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.OldPanel = OldPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnSelectedChanged");

	Params::UCommonButtonLegacy_HandleOnSelectedChanged_Params Parms{};

	Parms.Button = Button;
	Parms.InSelected = InSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnButtonUnhovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonUnhovered");

	Params::UCommonButtonLegacy_HandleOnButtonUnhovered_Params Parms{};

	Parms.Button = Button;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnButtonHovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonHovered");

	Params::UCommonButtonLegacy_HandleOnButtonHovered_Params Parms{};

	Parms.Button = Button;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnButtonDoubleClicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonDoubleClicked");

	Params::UCommonButtonLegacy_HandleOnButtonDoubleClicked_Params Parms{};

	Parms.Button = Button;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonLegacy::HandleOnButtonClicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonClicked");

	Params::UCommonButtonLegacy_HandleOnButtonClicked_Params Parms{};

	Parms.Button = Button;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUILegacy.CommonGlobalInputHandlerLegacy
// (None)

class UClass* UCommonGlobalInputHandlerLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonGlobalInputHandlerLegacy");

	return Clss;
}


// CommonGlobalInputHandlerLegacy CommonUILegacy.Default__CommonGlobalInputHandlerLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonGlobalInputHandlerLegacy* UCommonGlobalInputHandlerLegacy::GetDefaultObj()
{
	static class UCommonGlobalInputHandlerLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonGlobalInputHandlerLegacy*>(UCommonGlobalInputHandlerLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUILegacy.CommonInputManagerLegacy
// (None)

class UClass* UCommonInputManagerLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputManagerLegacy");

	return Clss;
}


// CommonInputManagerLegacy CommonUILegacy.Default__CommonInputManagerLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputManagerLegacy* UCommonInputManagerLegacy::GetDefaultObj()
{
	static class UCommonInputManagerLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputManagerLegacy*>(UCommonInputManagerLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonInputManagerLegacy::SuspendStartingOperationProcessing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "SuspendStartingOperationProcessing");

	Params::UCommonInputManagerLegacy_SuspendStartingOperationProcessing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "StopListeningForExistingHeldAction");

	Params::UCommonInputManagerLegacy_StopListeningForExistingHeldAction_Params Parms{};

	Parms.InputActionDataRow = InputActionDataRow;
	Parms.CompleteEvent = CompleteEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "StartListeningForExistingHeldAction");

	Params::UCommonInputManagerLegacy_StartListeningForExistingHeldAction_Params Parms{};

	Parms.InputActionDataRow = InputActionDataRow;
	Parms.CompleteEvent = CompleteEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InFilterPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManagerLegacy::SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "SetGlobalInputHandlerPriorityFilter");

	Params::UCommonInputManagerLegacy_SetGlobalInputHandlerPriorityFilter_Params Parms{};

	Parms.InFilterPriority = InFilterPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonInputManagerLegacy::ResumeStartingOperationProcessing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "ResumeStartingOperationProcessing");

	Params::UCommonInputManagerLegacy_ResumeStartingOperationProcessing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatablePanelLegacy*ActivatablePanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIntroPanel                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutroPanelBelow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManagerLegacy::PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "PushActivatablePanel");

	Params::UCommonInputManagerLegacy_PushActivatablePanel_Params Parms{};

	Parms.ActivatablePanel = ActivatablePanel;
	Parms.bIntroPanel = bIntroPanel;
	Parms.bOutroPanelBelow = bOutroPanelBelow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatablePanelLegacy*ActivatablePanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputManagerLegacy::PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "PopActivatablePanel");

	Params::UCommonInputManagerLegacy_PopActivatablePanel_Params Parms{};

	Parms.ActivatablePanel = ActivatablePanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatablePanelLegacy*InPanel                                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManagerLegacy::IsPanelOnStack(class UCommonActivatablePanelLegacy* InPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "IsPanelOnStack");

	Params::UCommonInputManagerLegacy_IsPanelOnStack_Params Parms{};

	Parms.InPanel = InPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManagerLegacy::IsInputSuspended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "IsInputSuspended");

	Params::UCommonInputManagerLegacy_IsInputSuspended_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.GetTopPanel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatablePanelLegacy*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatablePanelLegacy* UCommonInputManagerLegacy::GetTopPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "GetTopPanel");

	Params::UCommonInputManagerLegacy_GetTopPanel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonInputManagerLegacy::GetGlobalInputHandlerPriorityFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "GetGlobalInputHandlerPriorityFilter");

	Params::UCommonInputManagerLegacy_GetGlobalInputHandlerPriorityFilter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCommonInputActionHandlerData>AvailableInputActions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputManagerLegacy::GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputManagerLegacy", "GetAvailableInputActions");

	Params::UCommonInputManagerLegacy_GetAvailableInputActions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AvailableInputActions != nullptr)
		*AvailableInputActions = Parms.AvailableInputActions;

	return Parms.ReturnValue;

}


// Class CommonUILegacy.CommonInputReflectorLegacy
// (None)

class UClass* UCommonInputReflectorLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonInputReflectorLegacy");

	return Clss;
}


// CommonInputReflectorLegacy CommonUILegacy.Default__CommonInputReflectorLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonInputReflectorLegacy* UCommonInputReflectorLegacy::GetDefaultObj()
{
	static class UCommonInputReflectorLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonInputReflectorLegacy*>(UCommonInputReflectorLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         AddedButton                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCommonInputActionHandlerDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonInputReflectorLegacy::OnButtonAdded(class UCommonButtonLegacy* AddedButton, struct FCommonInputActionHandlerData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputReflectorLegacy", "OnButtonAdded");

	Params::UCommonInputReflectorLegacy_OnButtonAdded_Params Parms{};

	Parms.AddedButton = AddedButton;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Class CommonUILegacy.CommonPopupButtonLegacy
// (None)

class UClass* UCommonPopupButtonLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonPopupButtonLegacy");

	return Clss;
}


// CommonPopupButtonLegacy CommonUILegacy.Default__CommonPopupButtonLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonPopupButtonLegacy* UCommonPopupButtonLegacy::GetDefaultObj()
{
	static class UCommonPopupButtonLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonPopupButtonLegacy*>(UCommonPopupButtonLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget
// (Final, Native, Private)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UCommonPopupButtonLegacy::GetMenuAnchorWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPopupButtonLegacy", "GetMenuAnchorWidget");

	Params::UCommonPopupButtonLegacy_GetMenuAnchorWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUILegacy.CommonPopupMenuLegacy
// (None)

class UClass* UCommonPopupMenuLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonPopupMenuLegacy");

	return Clss;
}


// CommonPopupMenuLegacy CommonUILegacy.Default__CommonPopupMenuLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonPopupMenuLegacy* UCommonPopupMenuLegacy::GetDefaultObj()
{
	static class UCommonPopupMenuLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonPopupMenuLegacy*>(UCommonPopupMenuLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMenuAnchor*                 MenuAnchor                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPopupMenuLegacy::SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "SetOwningMenuAnchor");

	Params::UCommonPopupMenuLegacy_SetOwningMenuAnchor_Params Parms{};

	Parms.MenuAnchor = MenuAnchor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ContextProvidingObject                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPopupMenuLegacy::SetContextProvider(class UObject* ContextProvidingObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "SetContextProvider");

	Params::UCommonPopupMenuLegacy_SetContextProvider_Params Parms{};

	Parms.ContextProvidingObject = ContextProvidingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.RequestClose
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonPopupMenuLegacy::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "RequestClose");

	Params::UCommonPopupMenuLegacy_RequestClose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged
// (Final, Native, Protected)
// Parameters:
// bool                               IsOpen                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPopupMenuLegacy::OnIsOpenChanged(bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "OnIsOpenChanged");

	Params::UCommonPopupMenuLegacy_OnIsOpenChanged_Params Parms{};

	Parms.IsOpen = IsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonPopupMenuLegacy::HandlePreDifferentContextProviderSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "HandlePreDifferentContextProviderSet");

	Params::UCommonPopupMenuLegacy_HandlePreDifferentContextProviderSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UCommonPopupMenuLegacy::HandlePostDifferentContextProviderSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "HandlePostDifferentContextProviderSet");

	Params::UCommonPopupMenuLegacy_HandlePostDifferentContextProviderSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUILegacy.CommonTabListWidgetLegacy
// (None)

class UClass* UCommonTabListWidgetLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonTabListWidgetLegacy");

	return Clss;
}


// CommonTabListWidgetLegacy CommonUILegacy.Default__CommonTabListWidgetLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonTabListWidgetLegacy* UCommonTabListWidgetLegacy::GetDefaultObj()
{
	static class UCommonTabListWidgetLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonTabListWidgetLegacy*>(UCommonTabListWidgetLegacy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButtonLegacy* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "OnTabButtonRemoved__DelegateSignature");

	Params::UCommonTabListWidgetLegacy_OnTabButtonRemoved__DelegateSignature_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "OnTabButtonCreated__DelegateSignature");

	Params::UCommonTabListWidgetLegacy_OnTabButtonCreated__DelegateSignature_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleTabRemoved");

	Params::UCommonTabListWidgetLegacy_HandleTabRemoved_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::HandleTabCreated(class FName TabNameID, class UCommonButtonLegacy* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleTabCreated");

	Params::UCommonTabListWidgetLegacy_HandleTabCreated_Params Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::HandleOnTabButtonRemoved(class FName TabId, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleOnTabButtonRemoved");

	Params::UCommonTabListWidgetLegacy_HandleOnTabButtonRemoved_Params Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetLegacy::HandleOnTabButtonCreated(class FName TabId, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleOnTabButtonCreated");

	Params::UCommonTabListWidgetLegacy_HandleOnTabButtonCreated_Params Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonLegacy* UCommonTabListWidgetLegacy::GetTabButtonByID(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "GetTabButtonByID");

	Params::UCommonTabListWidgetLegacy_GetTabButtonByID_Params Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUILegacy.CommonUISubsystemLegacy
// (None)

class UClass* UCommonUISubsystemLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUISubsystemLegacy");

	return Clss;
}


// CommonUISubsystemLegacy CommonUILegacy.Default__CommonUISubsystemLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUISubsystemLegacy* UCommonUISubsystemLegacy::GetDefaultObj()
{
	static class UCommonUISubsystemLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUISubsystemLegacy*>(UCommonUISubsystemLegacy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bInputSuspended                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUISubsystemLegacy::InputSuspensionChanged__DelegateSignature(bool bInputSuspended)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUISubsystemLegacy", "InputSuspensionChanged__DelegateSignature");

	Params::UCommonUISubsystemLegacy_InputSuspensionChanged__DelegateSignature_Params Parms{};

	Parms.bInputSuspended = bInputSuspended;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonUISubsystemLegacy.GetInputManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonInputManagerLegacy*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonInputManagerLegacy* UCommonUISubsystemLegacy::GetInputManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUISubsystemLegacy", "GetInputManager");

	Params::UCommonUISubsystemLegacy_GetInputManager_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUILegacy.CommonVisibilityWidgetLegacy
// (None)

class UClass* UCommonVisibilityWidgetLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonVisibilityWidgetLegacy");

	return Clss;
}


// CommonVisibilityWidgetLegacy CommonUILegacy.Default__CommonVisibilityWidgetLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonVisibilityWidgetLegacy* UCommonVisibilityWidgetLegacy::GetDefaultObj()
{
	static class UCommonVisibilityWidgetLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonVisibilityWidgetLegacy*>(UCommonVisibilityWidgetLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonUILegacy.CommonWidgetStackLegacy
// (None)

class UClass* UCommonWidgetStackLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonWidgetStackLegacy");

	return Clss;
}


// CommonWidgetStackLegacy CommonUILegacy.Default__CommonWidgetStackLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonWidgetStackLegacy* UCommonWidgetStackLegacy::GetDefaultObj()
{
	static class UCommonWidgetStackLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonWidgetStackLegacy*>(UCommonWidgetStackLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonWidgetStackLegacy.PushWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetStackLegacy::PushWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "PushWidget");

	Params::UCommonWidgetStackLegacy_PushWidget_Params Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonWidgetStackLegacy.PopWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonWidgetStackLegacy::PopWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "PopWidget");

	Params::UCommonWidgetStackLegacy_PopWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                     InActiveWidget                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InActiveWidgetIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetStackLegacy::OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* InActiveWidget, int32 InActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "OnActiveWidgetChangedLegacy__DelegateSignature");

	Params::UCommonWidgetStackLegacy_OnActiveWidgetChangedLegacy__DelegateSignature_Params Parms{};

	Parms.InActiveWidget = InActiveWidget;
	Parms.InActiveWidgetIndex = InActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonWidgetStackLegacy::DeactivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "DeactivateWidget");

	Params::UCommonWidgetStackLegacy_DeactivateWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonWidgetStackLegacy::ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "ActivateWidget");

	Params::UCommonWidgetStackLegacy_ActivateWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUILegacy.CommonWidgetSwitcherLegacy
// (None)

class UClass* UCommonWidgetSwitcherLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonWidgetSwitcherLegacy");

	return Clss;
}


// CommonWidgetSwitcherLegacy CommonUILegacy.Default__CommonWidgetSwitcherLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonWidgetSwitcherLegacy* UCommonWidgetSwitcherLegacy::GetDefaultObj()
{
	static class UCommonWidgetSwitcherLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonWidgetSwitcherLegacy*>(UCommonWidgetSwitcherLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttemptActivationChange                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcherLegacy::SetActiveWidgetIndex_Advanced(int32 Index, bool AttemptActivationChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "SetActiveWidgetIndex_Advanced");

	Params::UCommonWidgetSwitcherLegacy_SetActiveWidgetIndex_Advanced_Params Parms{};

	Parms.Index = Index;
	Parms.AttemptActivationChange = AttemptActivationChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AttemptActivationChange                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcherLegacy::SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "SetActiveWidget_Advanced");

	Params::UCommonWidgetSwitcherLegacy_SetActiveWidget_Advanced_Params Parms{};

	Parms.Widget = Widget;
	Parms.AttemptActivationChange = AttemptActivationChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated
// (Final, Native, Private)
// Parameters:
// class UCommonActivatablePanelLegacy*DeactivatedPanel                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetSwitcherLegacy::HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "HandleActiveWidgetDeactivated");

	Params::UCommonWidgetSwitcherLegacy_HandleActiveWidgetDeactivated_Params Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetSwitcherLegacy::DeactivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "DeactivateWidget");

	Params::UCommonWidgetSwitcherLegacy_DeactivateWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget
// (Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetSwitcherLegacy::ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "ActivateWidget");

	Params::UCommonWidgetSwitcherLegacy_ActivateWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CommonUILegacy.CommonButtonGroupLegacy
// (None)

class UClass* UCommonButtonGroupLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonGroupLegacy");

	return Clss;
}


// CommonButtonGroupLegacy CommonUILegacy.Default__CommonButtonGroupLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonButtonGroupLegacy* UCommonButtonGroupLegacy::GetDefaultObj()
{
	static class UCommonButtonGroupLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonGroupLegacy*>(UCommonButtonGroupLegacy::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnSelectionStateChanged");

	Params::UCommonButtonGroupLegacy_OnSelectionStateChanged_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.bIsSelected = bIsSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnHandleButtonDoubleClicked");

	Params::UCommonButtonGroupLegacy_OnHandleButtonDoubleClicked_Params Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnHandleButtonClicked");

	Params::UCommonButtonGroupLegacy_OnHandleButtonClicked_Params Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnButtonUnhovered(class UCommonButtonLegacy* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnButtonUnhovered");

	Params::UCommonButtonGroupLegacy_OnButtonUnhovered_Params Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered
// (Native, Protected)
// Parameters:
// class UCommonButtonLegacy*         BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::OnButtonHovered(class UCommonButtonLegacy* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnButtonHovered");

	Params::UCommonButtonGroupLegacy_OnButtonHovered_Params Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnSelectedButtonChanged");

	Params::UCommonButtonGroupLegacy_HandleOnSelectedButtonChanged_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnHoveredButtonChanged");

	Params::UCommonButtonGroupLegacy_HandleOnHoveredButtonChanged_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnButtonDoubleClicked");

	Params::UCommonButtonGroupLegacy_HandleOnButtonDoubleClicked_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnButtonClicked");

	Params::UCommonButtonGroupLegacy_HandleOnButtonClicked_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnSelectedButtonChanged");

	Params::UCommonButtonGroupLegacy_HandleNativeOnSelectedButtonChanged_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnHoveredButtonChanged");

	Params::UCommonButtonGroupLegacy_HandleNativeOnHoveredButtonChanged_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnButtonDoubleClicked");

	Params::UCommonButtonGroupLegacy_HandleNativeOnButtonDoubleClicked_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InSelectedButtonIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupLegacy::HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnButtonClicked");

	Params::UCommonButtonGroupLegacy_HandleNativeOnButtonClicked_Params Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonLegacy*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonLegacy* UCommonButtonGroupLegacy::GetSelectedButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "GetSelectedButton");

	Params::UCommonButtonGroupLegacy_GetSelectedButton_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonLegacy*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonLegacy* UCommonButtonGroupLegacy::GetButtonAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "GetButtonAtIndex");

	Params::UCommonButtonGroupLegacy_GetButtonAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "CreateButtonGroup");

	Params::UCommonButtonGroupLegacy_CreateButtonGroup_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.bInSelectionRequired = bInSelectionRequired;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CommonUILegacy.CommonUIActionRouterLegacy
// (None)

class UClass* UCommonUIActionRouterLegacy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUIActionRouterLegacy");

	return Clss;
}


// CommonUIActionRouterLegacy CommonUILegacy.Default__CommonUIActionRouterLegacy
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUIActionRouterLegacy* UCommonUIActionRouterLegacy::GetDefaultObj()
{
	static class UCommonUIActionRouterLegacy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUIActionRouterLegacy*>(UCommonUIActionRouterLegacy::StaticClass()->DefaultObject);

	return Default;
}

}


