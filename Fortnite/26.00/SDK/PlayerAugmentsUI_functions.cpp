#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker
// (None)

class UClass* UFortMobileButtonBehaviorComponent_AugmentsListIconPicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileButtonBehaviorComponent_AugmentsListIconPicker");

	return Clss;
}


// FortMobileButtonBehaviorComponent_AugmentsListIconPicker PlayerAugmentsUI.Default__FortMobileButtonBehaviorComponent_AugmentsListIconPicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker* UFortMobileButtonBehaviorComponent_AugmentsListIconPicker::GetDefaultObj()
{
	static class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileButtonBehaviorComponent_AugmentsListIconPicker*>(UFortMobileButtonBehaviorComponent_AugmentsListIconPicker::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker.OnAugmentToolViewSwap
// (Final, Native, Private)
// Parameters:
// bool                               bIsInInventoryView                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileButtonBehaviorComponent_AugmentsListIconPicker::OnAugmentToolViewSwap(bool bIsInInventoryView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobileButtonBehaviorComponent_AugmentsListIconPicker", "OnAugmentToolViewSwap");

	Params::UFortMobileButtonBehaviorComponent_AugmentsListIconPicker_OnAugmentToolViewSwap_Params Parms{};

	Parms.bIsInInventoryView = bIsInInventoryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility
// (None)

class UClass* UFortMobileButtonBehaviorComponent_AugmentsListVisibility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileButtonBehaviorComponent_AugmentsListVisibility");

	return Clss;
}


// FortMobileButtonBehaviorComponent_AugmentsListVisibility PlayerAugmentsUI.Default__FortMobileButtonBehaviorComponent_AugmentsListVisibility
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileButtonBehaviorComponent_AugmentsListVisibility* UFortMobileButtonBehaviorComponent_AugmentsListVisibility::GetDefaultObj()
{
	static class UFortMobileButtonBehaviorComponent_AugmentsListVisibility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileButtonBehaviorComponent_AugmentsListVisibility*>(UFortMobileButtonBehaviorComponent_AugmentsListVisibility::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility.HandleAugmentToolViewSwap
// (Final, Native, Private)
// Parameters:
// bool                               bInIsInventoryView                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileButtonBehaviorComponent_AugmentsListVisibility::HandleAugmentToolViewSwap(bool bInIsInventoryView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobileButtonBehaviorComponent_AugmentsListVisibility", "HandleAugmentToolViewSwap");

	Params::UFortMobileButtonBehaviorComponent_AugmentsListVisibility_HandleAugmentToolViewSwap_Params Parms{};

	Parms.bInIsInventoryView = bInIsInventoryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility.HandleAugmentToolOpenedStatusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpened                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIsInventoryView                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileButtonBehaviorComponent_AugmentsListVisibility::HandleAugmentToolOpenedStatusChanged(bool bIsOpened, bool bInIsInventoryView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobileButtonBehaviorComponent_AugmentsListVisibility", "HandleAugmentToolOpenedStatusChanged");

	Params::UFortMobileButtonBehaviorComponent_AugmentsListVisibility_HandleAugmentToolOpenedStatusChanged_Params Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bInIsInventoryView = bInIsInventoryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
// (None)

class UClass* UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap");

	return Clss;
}


// FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap PlayerAugmentsUI.Default__FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap* UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap::GetDefaultObj()
{
	static class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap*>(UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
// (None)

class UClass* UFortPlayerAugmentHUDTimerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentHUDTimerWidget");

	return Clss;
}


// FortPlayerAugmentHUDTimerWidget PlayerAugmentsUI.Default__FortPlayerAugmentHUDTimerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentHUDTimerWidget* UFortPlayerAugmentHUDTimerWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentHUDTimerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentHUDTimerWidget*>(UFortPlayerAugmentHUDTimerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnTimerUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::OnTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnTimerUpdated");

	Params::UFortPlayerAugmentHUDTimerWidget_OnTimerUpdated_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnNumPendingAugmentsToGrantUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumPendingAugmentsToGrant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnNumPendingAugmentsToGrantUpdated");

	Params::UFortPlayerAugmentHUDTimerWidget_OnNumPendingAugmentsToGrantUpdated_Params Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnMovementModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentHUDTimerWidget::OnMovementModeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnMovementModeChanged");

	Params::UFortPlayerAugmentHUDTimerWidget_OnMovementModeChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnHUDElementVisibilityChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenElementTagContainer                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnHUDElementVisibilityChanged");

	Params::UFortPlayerAugmentHUDTimerWidget_OnHUDElementVisibilityChanged_Params Parms{};

	Parms.HiddenElementTagContainer = HiddenElementTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnCanSelectAugmentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanSelectAugment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::OnCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnCanSelectAugmentChanged");

	Params::UFortPlayerAugmentHUDTimerWidget_OnCanSelectAugmentChanged_Params Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentSelectorOpenedStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsOpened                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::OnAugmentSelectorOpenedStatusChanged(bool bIsOpened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnAugmentSelectorOpenedStatusChanged");

	Params::UFortPlayerAugmentHUDTimerWidget_OnAugmentSelectorOpenedStatusChanged_Params Parms{};

	Parms.bIsOpened = bIsOpened;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersResetForMatch
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentHUDTimerWidget::OnAugmentGrantingTimersResetForMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnAugmentGrantingTimersResetForMatch");

	Params::UFortPlayerAugmentHUDTimerWidget_OnAugmentGrantingTimersResetForMatch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.OnAugmentGrantingTimersFinishedForMatch
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentHUDTimerWidget::OnAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnAugmentGrantingTimersFinishedForMatch");

	Params::UFortPlayerAugmentHUDTimerWidget_OnAugmentGrantingTimersFinishedForMatch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleTimerUpdated
// (Final, Native, Private)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::HandleTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleTimerUpdated");

	Params::UFortPlayerAugmentHUDTimerWidget_HandleTimerUpdated_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleNumPendingAugmentsToGrantUpdated
// (Final, Native, Private)
// Parameters:
// int8                               NumPendingAugmentsToGrant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleNumPendingAugmentsToGrantUpdated");

	Params::UFortPlayerAugmentHUDTimerWidget_HandleNumPendingAugmentsToGrantUpdated_Params Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleHUDElementVisibilityChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       HiddenElementTagContainer                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::HandleHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleHUDElementVisibilityChanged");

	Params::UFortPlayerAugmentHUDTimerWidget_HandleHUDElementVisibilityChanged_Params Parms{};

	Parms.HiddenElementTagContainer = HiddenElementTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleCanSelectAugmentChanged
// (Final, Native, Private)
// Parameters:
// bool                               bCanSelectAugment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::HandleCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleCanSelectAugmentChanged");

	Params::UFortPlayerAugmentHUDTimerWidget_HandleCanSelectAugmentChanged_Params Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentSelectorOpenedStatusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpened                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bViewingAugmentInventory                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDTimerWidget::HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleAugmentSelectorOpenedStatusChanged");

	Params::UFortPlayerAugmentHUDTimerWidget_HandleAugmentSelectorOpenedStatusChanged_Params Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersResetForMatch
// (Final, Native, Private)
// Parameters:

void UFortPlayerAugmentHUDTimerWidget::HandleAugmentGrantingTimersResetForMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleAugmentGrantingTimersResetForMatch");

	Params::UFortPlayerAugmentHUDTimerWidget_HandleAugmentGrantingTimersResetForMatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.HandleAugmentGrantingTimersFinishedForMatch
// (Final, Native, Private)
// Parameters:

void UFortPlayerAugmentHUDTimerWidget::HandleAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleAugmentGrantingTimersFinishedForMatch");

	Params::UFortPlayerAugmentHUDTimerWidget_HandleAugmentGrantingTimersFinishedForMatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.GetPendingAugmentsToGrant
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortPlayerAugmentHUDTimerWidget::GetPendingAugmentsToGrant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "GetPendingAugmentsToGrant");

	Params::UFortPlayerAugmentHUDTimerWidget_GetPendingAugmentsToGrant_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.FormatTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              TotalSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortPlayerAugmentHUDTimerWidget::FormatTime(float TotalSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "FormatTime");

	Params::UFortPlayerAugmentHUDTimerWidget_FormatTime_Params Parms{};

	Parms.TotalSeconds = TotalSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanSelectAugment
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPlayerAugmentHUDTimerWidget::CanSelectAugment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "CanSelectAugment");

	Params::UFortPlayerAugmentHUDTimerWidget_CanSelectAugment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget.CanEquipSelectionTool
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPlayerAugmentHUDTimerWidget::CanEquipSelectionTool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "CanEquipSelectionTool");

	Params::UFortPlayerAugmentHUDTimerWidget_CanEquipSelectionTool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget
// (None)

class UClass* UFortPlayerAugmentHUDSelectionTimerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentHUDSelectionTimerWidget");

	return Clss;
}


// FortPlayerAugmentHUDSelectionTimerWidget PlayerAugmentsUI.Default__FortPlayerAugmentHUDSelectionTimerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentHUDSelectionTimerWidget* UFortPlayerAugmentHUDSelectionTimerWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentHUDSelectionTimerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentHUDSelectionTimerWidget*>(UFortPlayerAugmentHUDSelectionTimerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.UpdateCountdown
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDSelectionTimerWidget::UpdateCountdown(float TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDSelectionTimerWidget", "UpdateCountdown");

	Params::UFortPlayerAugmentHUDSelectionTimerWidget_UpdateCountdown_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.SetMobileProgressTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDSelectionTimerWidget::SetMobileProgressTimer(float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDSelectionTimerWidget", "SetMobileProgressTimer");

	Params::UFortPlayerAugmentHUDSelectionTimerWidget_SetMobileProgressTimer_Params Parms{};

	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.OnCountdownActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentHUDSelectionTimerWidget::OnCountdownActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDSelectionTimerWidget", "OnCountdownActivated");

	Params::UFortPlayerAugmentHUDSelectionTimerWidget_OnCountdownActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.IsCountdownVisible
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPlayerAugmentHUDSelectionTimerWidget::IsCountdownVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDSelectionTimerWidget", "IsCountdownVisible");

	Params::UFortPlayerAugmentHUDSelectionTimerWidget_IsCountdownVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
// (None)

class UClass* UFortMobileActionBBE_AugmentShoot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileActionBBE_AugmentShoot");

	return Clss;
}


// FortMobileActionBBE_AugmentShoot PlayerAugmentsUI.Default__FortMobileActionBBE_AugmentShoot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileActionBBE_AugmentShoot* UFortMobileActionBBE_AugmentShoot::GetDefaultObj()
{
	static class UFortMobileActionBBE_AugmentShoot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileActionBBE_AugmentShoot*>(UFortMobileActionBBE_AugmentShoot::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments
// (None)

class UClass* UFortMobileActionButtonBehavior_RerollAugments::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_RerollAugments");

	return Clss;
}


// FortMobileActionButtonBehavior_RerollAugments PlayerAugmentsUI.Default__FortMobileActionButtonBehavior_RerollAugments
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileActionButtonBehavior_RerollAugments* UFortMobileActionButtonBehavior_RerollAugments::GetDefaultObj()
{
	static class UFortMobileActionButtonBehavior_RerollAugments* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileActionButtonBehavior_RerollAugments*>(UFortMobileActionButtonBehavior_RerollAugments::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortMobilePlayerAugmentTimer
// (None)

class UClass* UFortMobilePlayerAugmentTimer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobilePlayerAugmentTimer");

	return Clss;
}


// FortMobilePlayerAugmentTimer PlayerAugmentsUI.Default__FortMobilePlayerAugmentTimer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobilePlayerAugmentTimer* UFortMobilePlayerAugmentTimer::GetDefaultObj()
{
	static class UFortMobilePlayerAugmentTimer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobilePlayerAugmentTimer*>(UFortMobilePlayerAugmentTimer::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortMobilePlayerAugmentTimer.HandleHUDElementVisibilityChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FGameplayTagContainer       HiddenElementTagContainer                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortMobilePlayerAugmentTimer::HandleHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobilePlayerAugmentTimer", "HandleHUDElementVisibilityChanged");

	Params::UFortMobilePlayerAugmentTimer_HandleHUDElementVisibilityChanged_Params Parms{};

	Parms.HiddenElementTagContainer = HiddenElementTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortMobilePlayerAugmentTimer.BP_OnHUDElementVisibilityChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenElementTagContainer                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bForceCollapse                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobilePlayerAugmentTimer::BP_OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer, bool bForceCollapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMobilePlayerAugmentTimer", "BP_OnHUDElementVisibilityChanged");

	Params::UFortMobilePlayerAugmentTimer_BP_OnHUDElementVisibilityChanged_Params Parms{};

	Parms.HiddenElementTagContainer = HiddenElementTagContainer;
	Parms.bForceCollapse = bForceCollapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Class PlayerAugmentsUI.FortPickupInteractOverrideComponent_Augments
// (None)

class UClass* UFortPickupInteractOverrideComponent_Augments::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPickupInteractOverrideComponent_Augments");

	return Clss;
}


// FortPickupInteractOverrideComponent_Augments PlayerAugmentsUI.Default__FortPickupInteractOverrideComponent_Augments
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPickupInteractOverrideComponent_Augments* UFortPickupInteractOverrideComponent_Augments::GetDefaultObj()
{
	static class UFortPickupInteractOverrideComponent_Augments* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPickupInteractOverrideComponent_Augments*>(UFortPickupInteractOverrideComponent_Augments::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry
// (None)

class UClass* UFortPlayerAugmentCollectionListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentCollectionListEntry");

	return Clss;
}


// FortPlayerAugmentCollectionListEntry PlayerAugmentsUI.Default__FortPlayerAugmentCollectionListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentCollectionListEntry* UFortPlayerAugmentCollectionListEntry::GetDefaultObj()
{
	static class UFortPlayerAugmentCollectionListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentCollectionListEntry*>(UFortPlayerAugmentCollectionListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
// (None)

class UClass* UFortPlayerAugmentCollectionScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentCollectionScreen");

	return Clss;
}


// FortPlayerAugmentCollectionScreen PlayerAugmentsUI.Default__FortPlayerAugmentCollectionScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentCollectionScreen* UFortPlayerAugmentCollectionScreen::GetDefaultObj()
{
	static class UFortPlayerAugmentCollectionScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentCollectionScreen*>(UFortPlayerAugmentCollectionScreen::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer
// (None)

class UClass* UFortPlayerAugmentCollectionScreenContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentCollectionScreenContainer");

	return Clss;
}


// FortPlayerAugmentCollectionScreenContainer PlayerAugmentsUI.Default__FortPlayerAugmentCollectionScreenContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentCollectionScreenContainer* UFortPlayerAugmentCollectionScreenContainer::GetDefaultObj()
{
	static class UFortPlayerAugmentCollectionScreenContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentCollectionScreenContainer*>(UFortPlayerAugmentCollectionScreenContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay
// (None)

class UClass* UFortPlayerAugmentCollectionScreenInfoOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentCollectionScreenInfoOverlay");

	return Clss;
}


// FortPlayerAugmentCollectionScreenInfoOverlay PlayerAugmentsUI.Default__FortPlayerAugmentCollectionScreenInfoOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentCollectionScreenInfoOverlay* UFortPlayerAugmentCollectionScreenInfoOverlay::GetDefaultObj()
{
	static class UFortPlayerAugmentCollectionScreenInfoOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentCollectionScreenInfoOverlay*>(UFortPlayerAugmentCollectionScreenInfoOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortPlayerAugmentGranterWidget
// (None)

class UClass* UFortPlayerAugmentGranterWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentGranterWidget");

	return Clss;
}


// FortPlayerAugmentGranterWidget PlayerAugmentsUI.Default__FortPlayerAugmentGranterWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentGranterWidget* UFortPlayerAugmentGranterWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentGranterWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentGranterWidget*>(UFortPlayerAugmentGranterWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnTimerUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnTimerUpdated");

	Params::UFortPlayerAugmentGranterWidget_OnTimerUpdated_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnSelectedAugmentForGrant
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerAugmentItemDefinition*HighlightedAugment                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* HighlightedAugment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnSelectedAugmentForGrant");

	Params::UFortPlayerAugmentGranterWidget_OnSelectedAugmentForGrant_Params Parms{};

	Parms.HighlightedAugment = HighlightedAugment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnRerollAugments
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentGranterWidget::OnRerollAugments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnRerollAugments");

	Params::UFortPlayerAugmentGranterWidget_OnRerollAugments_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnPopulateAvailableAugmentsHUD
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortPlayerAugmentItemDefinition*>AugmentItemDefinition                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnPopulateAvailableAugmentsHUD(TArray<class UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnPopulateAvailableAugmentsHUD");

	Params::UFortPlayerAugmentGranterWidget_OnPopulateAvailableAugmentsHUD_Params Parms{};

	Parms.AugmentItemDefinition = AugmentItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnNumPendingAugmentsToGrantUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumPendingAugmentsToGrant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnNumPendingAugmentsToGrantUpdated");

	Params::UFortPlayerAugmentGranterWidget_OnNumPendingAugmentsToGrantUpdated_Params Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnInputTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        NewInputType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnInputTypeChanged(enum class ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnInputTypeChanged");

	Params::UFortPlayerAugmentGranterWidget_OnInputTypeChanged_Params Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnCanSelectAugmentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanSelectAugment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnCanSelectAugmentChanged");

	Params::UFortPlayerAugmentGranterWidget_OnCanSelectAugmentChanged_Params Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorToolViewSwapped
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bViewingAugmentInventory                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnAugmentSelectorToolViewSwapped(bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentSelectorToolViewSwapped");

	Params::UFortPlayerAugmentGranterWidget_OnAugmentSelectorToolViewSwapped_Params Parms{};

	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorOpenedStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsOpened                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bViewingAugmentInventory                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentSelectorOpenedStatusChanged");

	Params::UFortPlayerAugmentGranterWidget_OnAugmentSelectorOpenedStatusChanged_Params Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectionStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              SelectedAugmentIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnAugmentSelectionStarted(int32 SelectedAugmentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentSelectionStarted");

	Params::UFortPlayerAugmentGranterWidget_OnAugmentSelectionStarted_Params Parms{};

	Parms.SelectedAugmentIndex = SelectedAugmentIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollUpEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentGranterWidget::OnAugmentScrollUpEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentScrollUpEvent");

	Params::UFortPlayerAugmentGranterWidget_OnAugmentScrollUpEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollDownEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentGranterWidget::OnAugmentScrollDownEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentScrollDownEvent");

	Params::UFortPlayerAugmentGranterWidget_OnAugmentScrollDownEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentHighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              HighlightedAugmentIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::OnAugmentHighlighted(int32 HighlightedAugmentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentHighlighted");

	Params::UFortPlayerAugmentGranterWidget_OnAugmentHighlighted_Params Parms{};

	Parms.HighlightedAugmentIndex = HighlightedAugmentIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleTimerUpdated
// (Final, Native, Private)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleTimerUpdated");

	Params::UFortPlayerAugmentGranterWidget_HandleTimerUpdated_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleSelectedAugmentForGrant
// (Final, Native, Private)
// Parameters:
// class UFortPlayerAugmentItemDefinition*SelectedAugment                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* SelectedAugment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleSelectedAugmentForGrant");

	Params::UFortPlayerAugmentGranterWidget_HandleSelectedAugmentForGrant_Params Parms{};

	Parms.SelectedAugment = SelectedAugment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleRerollAugments
// (Final, Native, Private)
// Parameters:

void UFortPlayerAugmentGranterWidget::HandleRerollAugments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleRerollAugments");

	Params::UFortPlayerAugmentGranterWidget_HandleRerollAugments_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleNumPendingAugmentsToGrantUpdated
// (Final, Native, Private)
// Parameters:
// int8                               NumPendingAugmentsToGrant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleNumPendingAugmentsToGrantUpdated");

	Params::UFortPlayerAugmentGranterWidget_HandleNumPendingAugmentsToGrantUpdated_Params Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleCanSelectAugmentChanged
// (Final, Native, Private)
// Parameters:
// bool                               bCanSelectAugment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleCanSelectAugmentChanged");

	Params::UFortPlayerAugmentGranterWidget_HandleCanSelectAugmentChanged_Params Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAvailableAugmentsForGrantingUpdated
// (Final, Native, Private)
// Parameters:
// class UFortControllerComponent_AugmentGrantingSystem*GrantingComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleAvailableAugmentsForGrantingUpdated(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAvailableAugmentsForGrantingUpdated");

	Params::UFortPlayerAugmentGranterWidget_HandleAvailableAugmentsForGrantingUpdated_Params Parms{};

	Parms.GrantingComponent = GrantingComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorToolViewSwapped
// (Final, Native, Private)
// Parameters:
// bool                               bViewingAugmentsInventory                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleAugmentSelectorToolViewSwapped(bool bViewingAugmentsInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAugmentSelectorToolViewSwapped");

	Params::UFortPlayerAugmentGranterWidget_HandleAugmentSelectorToolViewSwapped_Params Parms{};

	Parms.bViewingAugmentsInventory = bViewingAugmentsInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorOpenedStatusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpened                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bViewingAugmentInventory                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAugmentSelectorOpenedStatusChanged");

	Params::UFortPlayerAugmentGranterWidget_HandleAugmentSelectorOpenedStatusChanged_Params Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectionStarted
// (Final, Native, Private)
// Parameters:
// int32                              SelectedAugmentIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleAugmentSelectionStarted(int32 SelectedAugmentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAugmentSelectionStarted");

	Params::UFortPlayerAugmentGranterWidget_HandleAugmentSelectionStarted_Params Parms{};

	Parms.SelectedAugmentIndex = SelectedAugmentIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentHighlighted
// (Final, Native, Private)
// Parameters:
// int32                              HighlightedAugmentIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentGranterWidget::HandleAugmentHighlighted(int32 HighlightedAugmentIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAugmentHighlighted");

	Params::UFortPlayerAugmentGranterWidget_HandleAugmentHighlighted_Params Parms{};

	Parms.HighlightedAugmentIndex = HighlightedAugmentIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentGranterWidget.GetPendingAugmentsToGrant
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortPlayerAugmentGranterWidget::GetPendingAugmentsToGrant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "GetPendingAugmentsToGrant");

	Params::UFortPlayerAugmentGranterWidget_GetPendingAugmentsToGrant_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
// (None)

class UClass* UFortPlayerAugmentHUDQuickbarWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentHUDQuickbarWidget");

	return Clss;
}


// FortPlayerAugmentHUDQuickbarWidget PlayerAugmentsUI.Default__FortPlayerAugmentHUDQuickbarWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentHUDQuickbarWidget* UFortPlayerAugmentHUDQuickbarWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentHUDQuickbarWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentHUDQuickbarWidget*>(UFortPlayerAugmentHUDQuickbarWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget.OnAugmentsUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortPlayerAugmentItemDefinition*>ActiveAugments                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDQuickbarWidget::OnAugmentsUpdated(TArray<class UFortPlayerAugmentItemDefinition*>& ActiveAugments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDQuickbarWidget", "OnAugmentsUpdated");

	Params::UFortPlayerAugmentHUDQuickbarWidget_OnAugmentsUpdated_Params Parms{};

	Parms.ActiveAugments = ActiveAugments;

	UObject::ProcessEvent(Func, &Parms);

}


// Class PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
// (None)

class UClass* UFortPlayerAugmentHUDRerollWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentHUDRerollWidget");

	return Clss;
}


// FortPlayerAugmentHUDRerollWidget PlayerAugmentsUI.Default__FortPlayerAugmentHUDRerollWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentHUDRerollWidget* UFortPlayerAugmentHUDRerollWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentHUDRerollWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentHUDRerollWidget*>(UFortPlayerAugmentHUDRerollWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.StartRerollHoldProgress
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              Duration                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDRerollWidget::StartRerollHoldProgress(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "StartRerollHoldProgress");

	Params::UFortPlayerAugmentHUDRerollWidget_StartRerollHoldProgress_Params Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnUpdateCurrency
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              OwnedCurrency                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RerollCost                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDRerollWidget::OnUpdateCurrency(int32 OwnedCurrency, int32 RerollCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "OnUpdateCurrency");

	Params::UFortPlayerAugmentHUDRerollWidget_OnUpdateCurrency_Params Parms{};

	Parms.OwnedCurrency = OwnedCurrency;
	Parms.RerollCost = RerollCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnRerollAugments
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentHUDRerollWidget::OnRerollAugments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "OnRerollAugments");

	Params::UFortPlayerAugmentHUDRerollWidget_OnRerollAugments_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnFreeRerollsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewNumFreeRerolls                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDRerollWidget::OnFreeRerollsUpdated(int32 NewNumFreeRerolls)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "OnFreeRerollsUpdated");

	Params::UFortPlayerAugmentHUDRerollWidget_OnFreeRerollsUpdated_Params Parms{};

	Parms.NewNumFreeRerolls = NewNumFreeRerolls;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleRerollAugments
// (Final, Native, Private)
// Parameters:

void UFortPlayerAugmentHUDRerollWidget::HandleRerollAugments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "HandleRerollAugments");

	Params::UFortPlayerAugmentHUDRerollWidget_HandleRerollAugments_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleFreeRerollsUpdated
// (Final, Native, Private)
// Parameters:
// int32                              NewNumFreeRerolls                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentHUDRerollWidget::HandleFreeRerollsUpdated(int32 NewNumFreeRerolls)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "HandleFreeRerollsUpdated");

	Params::UFortPlayerAugmentHUDRerollWidget_HandleFreeRerollsUpdated_Params Parms{};

	Parms.NewNumFreeRerolls = NewNumFreeRerolls;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.EndRerollHoldProgress
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortPlayerAugmentHUDRerollWidget::EndRerollHoldProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "EndRerollHoldProgress");

	Params::UFortPlayerAugmentHUDRerollWidget_EndRerollHoldProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
// (None)

class UClass* UFortPlayerAugmentInfoEntryWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentInfoEntryWidget");

	return Clss;
}


// FortPlayerAugmentInfoEntryWidget PlayerAugmentsUI.Default__FortPlayerAugmentInfoEntryWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentInfoEntryWidget* UFortPlayerAugmentInfoEntryWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentInfoEntryWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentInfoEntryWidget*>(UFortPlayerAugmentInfoEntryWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.UpdateAugment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerAugmentItemDefinition*AugmentItemDefinition                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInfoEntryWidget::UpdateAugment(class UFortPlayerAugmentItemDefinition* AugmentItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInfoEntryWidget", "UpdateAugment");

	Params::UFortPlayerAugmentInfoEntryWidget_UpdateAugment_Params Parms{};

	Parms.AugmentItemDefinition = AugmentItemDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemRaritySet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortRarity             Rarity                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortRarityItemData         RarityItemData                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInfoEntryWidget::OnItemRaritySet(enum class EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInfoEntryWidget", "OnItemRaritySet");

	Params::UFortPlayerAugmentInfoEntryWidget_OnItemRaritySet_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.RarityItemData = RarityItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemPinColorSet
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor                PinColor                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInfoEntryWidget::OnItemPinColorSet(const struct FLinearColor& PinColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInfoEntryWidget", "OnItemPinColorSet");

	Params::UFortPlayerAugmentInfoEntryWidget_OnItemPinColorSet_Params Parms{};

	Parms.PinColor = PinColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemNewOrBorrowedSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsNew                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsBorrowed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInfoEntryWidget::OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInfoEntryWidget", "OnItemNewOrBorrowedSet");

	Params::UFortPlayerAugmentInfoEntryWidget_OnItemNewOrBorrowedSet_Params Parms{};

	Parms.bIsNew = bIsNew;
	Parms.bIsBorrowed = bIsBorrowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Class PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget
// (None)

class UClass* UFortPlayerAugmentInGameCarriedWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentInGameCarriedWidget");

	return Clss;
}


// FortPlayerAugmentInGameCarriedWidget PlayerAugmentsUI.Default__FortPlayerAugmentInGameCarriedWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentInGameCarriedWidget* UFortPlayerAugmentInGameCarriedWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentInGameCarriedWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentInGameCarriedWidget*>(UFortPlayerAugmentInGameCarriedWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget.OnShowInitialAugment
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerAugmentItemDefinition*PlayerAugmentItemDefinition                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInGameCarriedWidget::OnShowInitialAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInGameCarriedWidget", "OnShowInitialAugment");

	Params::UFortPlayerAugmentInGameCarriedWidget_OnShowInitialAugment_Params Parms{};

	Parms.PlayerAugmentItemDefinition = PlayerAugmentItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget.HandleExitBus
// (Final, Native, Private)
// Parameters:
// class UFortPlayerControllerZone*   FortPCZone                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInGameCarriedWidget::HandleExitBus(class UFortPlayerControllerZone* FortPCZone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInGameCarriedWidget", "HandleExitBus");

	Params::UFortPlayerAugmentInGameCarriedWidget_HandleExitBus_Params Parms{};

	Parms.FortPCZone = FortPCZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow
// (None)

class UClass* UFortPlayerAugmentInventoryExtensionRow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentInventoryExtensionRow");

	return Clss;
}


// FortPlayerAugmentInventoryExtensionRow PlayerAugmentsUI.Default__FortPlayerAugmentInventoryExtensionRow
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentInventoryExtensionRow* UFortPlayerAugmentInventoryExtensionRow::GetDefaultObj()
{
	static class UFortPlayerAugmentInventoryExtensionRow* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentInventoryExtensionRow*>(UFortPlayerAugmentInventoryExtensionRow::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
// (None)

class UClass* UFortPlayerAugmentInventoryInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentInventoryInfoWidget");

	return Clss;
}


// FortPlayerAugmentInventoryInfoWidget PlayerAugmentsUI.Default__FortPlayerAugmentInventoryInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentInventoryInfoWidget* UFortPlayerAugmentInventoryInfoWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentInventoryInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentInventoryInfoWidget*>(UFortPlayerAugmentInventoryInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemRaritySet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortRarity             Rarity                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortRarityItemData         RarityItemData                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInventoryInfoWidget::OnItemRaritySet(enum class EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryInfoWidget", "OnItemRaritySet");

	Params::UFortPlayerAugmentInventoryInfoWidget_OnItemRaritySet_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.RarityItemData = RarityItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemNewOrBorrowedSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsNew                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsBorrowed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInventoryInfoWidget::OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryInfoWidget", "OnItemNewOrBorrowedSet");

	Params::UFortPlayerAugmentInventoryInfoWidget_OnItemNewOrBorrowedSet_Params Parms{};

	Parms.bIsNew = bIsNew;
	Parms.bIsBorrowed = bIsBorrowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Class PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry
// (None)

class UClass* UFortPlayerAugmentInventoryListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentInventoryListEntry");

	return Clss;
}


// FortPlayerAugmentInventoryListEntry PlayerAugmentsUI.Default__FortPlayerAugmentInventoryListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentInventoryListEntry* UFortPlayerAugmentInventoryListEntry::GetDefaultObj()
{
	static class UFortPlayerAugmentInventoryListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentInventoryListEntry*>(UFortPlayerAugmentInventoryListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry.OnAugmentListItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         ItemDefinition                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInventoryListEntry::OnAugmentListItemSet(class UFortItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryListEntry", "OnAugmentListItemSet");

	Params::UFortPlayerAugmentInventoryListEntry_OnAugmentListItemSet_Params Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

}


// Class PlayerAugmentsUI.FortPlayerAugmentInventoryTab
// (None)

class UClass* UFortPlayerAugmentInventoryTab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentInventoryTab");

	return Clss;
}


// FortPlayerAugmentInventoryTab PlayerAugmentsUI.Default__FortPlayerAugmentInventoryTab
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentInventoryTab* UFortPlayerAugmentInventoryTab::GetDefaultObj()
{
	static class UFortPlayerAugmentInventoryTab* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentInventoryTab*>(UFortPlayerAugmentInventoryTab::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.RequestOpenSelector
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortPlayerAugmentInventoryTab::RequestOpenSelector()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "RequestOpenSelector");

	Params::UFortPlayerAugmentInventoryTab_RequestOpenSelector_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnTimerUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInventoryTab::OnTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnTimerUpdated");

	Params::UFortPlayerAugmentInventoryTab_OnTimerUpdated_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnNumPendingAugmentsToGrantUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumPendingAugmentsToGrant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInventoryTab::OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnNumPendingAugmentsToGrantUpdated");

	Params::UFortPlayerAugmentInventoryTab_OnNumPendingAugmentsToGrantUpdated_Params Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentListUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumAugments                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInventoryTab::OnAugmentListUpdated(int32 NumAugments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnAugmentListUpdated");

	Params::UFortPlayerAugmentInventoryTab_OnAugmentListUpdated_Params Parms{};

	Parms.NumAugments = NumAugments;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersResetForMatch
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentInventoryTab::OnAugmentGrantingTimersResetForMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnAugmentGrantingTimersResetForMatch");

	Params::UFortPlayerAugmentInventoryTab_OnAugmentGrantingTimersResetForMatch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersFinishedForMatch
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentInventoryTab::OnAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnAugmentGrantingTimersFinishedForMatch");

	Params::UFortPlayerAugmentInventoryTab_OnAugmentGrantingTimersFinishedForMatch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleTimerUpdated
// (Final, Native, Private)
// Parameters:
// float                              TimeRemaining                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimePercentage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInventoryTab::HandleTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "HandleTimerUpdated");

	Params::UFortPlayerAugmentInventoryTab_HandleTimerUpdated_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleNumPendingAugmentsToGrantUpdated
// (Final, Native, Private)
// Parameters:
// int8                               NumPendingAugmentsToGrant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentInventoryTab::HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "HandleNumPendingAugmentsToGrantUpdated");

	Params::UFortPlayerAugmentInventoryTab_HandleNumPendingAugmentsToGrantUpdated_Params Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersResetForMatch
// (Final, Native, Private)
// Parameters:

void UFortPlayerAugmentInventoryTab::HandleAugmentGrantingTimersResetForMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "HandleAugmentGrantingTimersResetForMatch");

	Params::UFortPlayerAugmentInventoryTab_HandleAugmentGrantingTimersResetForMatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersFinishedForMatch
// (Final, Native, Private)
// Parameters:

void UFortPlayerAugmentInventoryTab::HandleAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "HandleAugmentGrantingTimersFinishedForMatch");

	Params::UFortPlayerAugmentInventoryTab_HandleAugmentGrantingTimersFinishedForMatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PlayerAugmentsUI.FortPlayerAugmentInventoryTab.GetPendingAugmentsToGrant
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortPlayerAugmentInventoryTab::GetPendingAugmentsToGrant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "GetPendingAugmentsToGrant");

	Params::UFortPlayerAugmentInventoryTab_GetPendingAugmentsToGrant_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class PlayerAugmentsUI.FortPlayerAugmentLobbyWidget
// (None)

class UClass* UFortPlayerAugmentLobbyWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentLobbyWidget");

	return Clss;
}


// FortPlayerAugmentLobbyWidget PlayerAugmentsUI.Default__FortPlayerAugmentLobbyWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentLobbyWidget* UFortPlayerAugmentLobbyWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentLobbyWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentLobbyWidget*>(UFortPlayerAugmentLobbyWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentLobbyWidget.OnShowInitialAugment
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerAugmentItemDefinition*CarriedAugment                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentLobbyWidget::OnShowInitialAugment(class UFortPlayerAugmentItemDefinition* CarriedAugment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentLobbyWidget", "OnShowInitialAugment");

	Params::UFortPlayerAugmentLobbyWidget_OnShowInitialAugment_Params Parms{};

	Parms.CarriedAugment = CarriedAugment;

	UObject::ProcessEvent(Func, &Parms);

}


// Class PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget
// (None)

class UClass* UFortPlayerAugmentPostMatchUnlocksWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentPostMatchUnlocksWidget");

	return Clss;
}


// FortPlayerAugmentPostMatchUnlocksWidget PlayerAugmentsUI.Default__FortPlayerAugmentPostMatchUnlocksWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentPostMatchUnlocksWidget* UFortPlayerAugmentPostMatchUnlocksWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentPostMatchUnlocksWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentPostMatchUnlocksWidget*>(UFortPlayerAugmentPostMatchUnlocksWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget.OnShowUnlockedAugments
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortPlayerAugmentItemDefinition*>UnlockedAugments                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPlayerAugmentPostMatchUnlocksWidget::OnShowUnlockedAugments(TArray<class UFortPlayerAugmentItemDefinition*>& UnlockedAugments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentPostMatchUnlocksWidget", "OnShowUnlockedAugments");

	Params::UFortPlayerAugmentPostMatchUnlocksWidget_OnShowUnlockedAugments_Params Parms{};

	Parms.UnlockedAugments = UnlockedAugments;

	UObject::ProcessEvent(Func, &Parms);

}


// Class PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
// (None)

class UClass* UFortPlayerAugmentSpecialAcquiredNotificationWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerAugmentSpecialAcquiredNotificationWidget");

	return Clss;
}


// FortPlayerAugmentSpecialAcquiredNotificationWidget PlayerAugmentsUI.Default__FortPlayerAugmentSpecialAcquiredNotificationWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerAugmentSpecialAcquiredNotificationWidget* UFortPlayerAugmentSpecialAcquiredNotificationWidget::GetDefaultObj()
{
	static class UFortPlayerAugmentSpecialAcquiredNotificationWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerAugmentSpecialAcquiredNotificationWidget*>(UFortPlayerAugmentSpecialAcquiredNotificationWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OpenWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerAugmentItemDefinition*ItemDef                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerAugmentSpecialAcquiredNotificationWidget::OpenWidget(class UFortPlayerAugmentItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "OpenWidget");

	Params::UFortPlayerAugmentSpecialAcquiredNotificationWidget_OpenWidget_Params Parms{};

	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentSpecialAcquiredNotificationWidget::OnStompedByOtherWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "OnStompedByOtherWidget");

	Params::UFortPlayerAugmentSpecialAcquiredNotificationWidget_OnStompedByOtherWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnEventAdded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPlayerAugmentSpecialAcquiredNotificationWidget::OnEventAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "OnEventAdded");

	Params::UFortPlayerAugmentSpecialAcquiredNotificationWidget_OnEventAdded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.HasMoreAugmentEvents
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPlayerAugmentSpecialAcquiredNotificationWidget::HasMoreAugmentEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "HasMoreAugmentEvents");

	Params::UFortPlayerAugmentSpecialAcquiredNotificationWidget_HasMoreAugmentEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.ConstructEventDescription
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerAugmentItemDefinition*ItemDef                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortPlayerAugmentSpecialAcquiredNotificationWidget::ConstructEventDescription(class UFortPlayerAugmentItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "ConstructEventDescription");

	Params::UFortPlayerAugmentSpecialAcquiredNotificationWidget_ConstructEventDescription_Params Parms{};

	Parms.ItemDef = ItemDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.CloseWidget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortPlayerAugmentSpecialAcquiredNotificationWidget::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "CloseWidget");

	Params::UFortPlayerAugmentSpecialAcquiredNotificationWidget_CloseWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


