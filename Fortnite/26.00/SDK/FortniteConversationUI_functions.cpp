#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortniteConversationUI.FortConversationOptionBrief
// (None)

class UClass* UFortConversationOptionBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationOptionBrief");

	return Clss;
}


// FortConversationOptionBrief FortniteConversationUI.Default__FortConversationOptionBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationOptionBrief* UFortConversationOptionBrief::GetDefaultObj()
{
	static class UFortConversationOptionBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationOptionBrief*>(UFortConversationOptionBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortConversationOptionBrief.ConfigureBP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConversationContext        ClientContext                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FClientConversationOptionEntryOptionEntry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              SelectedIndex                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationOptionBrief::ConfigureBP(struct FConversationContext& ClientContext, struct FClientConversationOptionEntry& OptionEntry, int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOptionBrief", "ConfigureBP");

	Params::UFortConversationOptionBrief_ConfigureBP_Params Parms{};

	Parms.ClientContext = ClientContext;
	Parms.OptionEntry = OptionEntry;
	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortItemTransactionBrief
// (None)

class UClass* UFortItemTransactionBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemTransactionBrief");

	return Clss;
}


// FortItemTransactionBrief FortniteConversationUI.Default__FortItemTransactionBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemTransactionBrief* UFortItemTransactionBrief::GetDefaultObj()
{
	static class UFortItemTransactionBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemTransactionBrief*>(UFortItemTransactionBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemTransactionBrief::OnTransactionInfoReceived(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemTransactionBrief", "OnTransactionInfoReceived");

	Params::UFortItemTransactionBrief_OnTransactionInfoReceived_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortApplyAbilityBrief
// (None)

class UClass* UFortApplyAbilityBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortApplyAbilityBrief");

	return Clss;
}


// FortApplyAbilityBrief FortniteConversationUI.Default__FortApplyAbilityBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortApplyAbilityBrief* UFortApplyAbilityBrief::GetDefaultObj()
{
	static class UFortApplyAbilityBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortApplyAbilityBrief*>(UFortApplyAbilityBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPreventAbilityUseReasonReason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortApplyAbilityBrief::OnUnableToPurchase(enum class EPreventAbilityUseReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortApplyAbilityBrief", "OnUnableToPurchase");

	Params::UFortApplyAbilityBrief_OnUnableToPurchase_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortApplyAbilityBrief::OnAbleToPurchase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortApplyAbilityBrief", "OnAbleToPurchase");

	Params::UFortApplyAbilityBrief_OnAbleToPurchase_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortBasicBrief
// (None)

class UClass* UFortBasicBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBasicBrief");

	return Clss;
}


// FortBasicBrief FortniteConversationUI.Default__FortBasicBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBasicBrief* UFortBasicBrief::GetDefaultObj()
{
	static class UFortBasicBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBasicBrief*>(UFortBasicBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortBasicBrief.OnChoiceTextReceived
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBasicBrief::OnChoiceTextReceived(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBasicBrief", "OnChoiceTextReceived");

	Params::UFortBasicBrief_OnChoiceTextReceived_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortBasicItemBrief
// (None)

class UClass* UFortBasicItemBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBasicItemBrief");

	return Clss;
}


// FortBasicItemBrief FortniteConversationUI.Default__FortBasicItemBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBasicItemBrief* UFortBasicItemBrief::GetDefaultObj()
{
	static class UFortBasicItemBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBasicItemBrief*>(UFortBasicItemBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        DescriptionText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBasicItemBrief::OnUpdateDescriptionText(class FText& DescriptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBasicItemBrief", "OnUpdateDescriptionText");

	Params::UFortBasicItemBrief_OnUpdateDescriptionText_Params Parms{};

	Parms.DescriptionText = DescriptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortBasicItemBrief.OnUnableToUse
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBasicItemBrief::OnUnableToUse(class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBasicItemBrief", "OnUnableToUse");

	Params::UFortBasicItemBrief_OnUnableToUse_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortBasicItemBrief.OnItemInfoReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StackSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBasicItemBrief::OnItemInfoReceived(class UFortItem* Item, int32 StackSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBasicItemBrief", "OnItemInfoReceived");

	Params::UFortBasicItemBrief_OnItemInfoReceived_Params Parms{};

	Parms.Item = Item;
	Parms.StackSize = StackSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortBasicItemBrief.OnAbleToUse
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowWarningMessage                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBasicItemBrief::OnAbleToUse(bool bShowWarningMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBasicItemBrief", "OnAbleToUse");

	Params::UFortBasicItemBrief_OnAbleToUse_Params Parms{};

	Parms.bShowWarningMessage = bShowWarningMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortBuyBrief
// (None)

class UClass* UFortBuyBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBuyBrief");

	return Clss;
}


// FortBuyBrief FortniteConversationUI.Default__FortBuyBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBuyBrief* UFortBuyBrief::GetDefaultObj()
{
	static class UFortBuyBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBuyBrief*>(UFortBuyBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortBuyBrief.OnPurchaseDataReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              StackSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RemainingForSale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBuyBrief::OnPurchaseDataReceived(int32 StackSize, int32 RemainingForSale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBuyBrief", "OnPurchaseDataReceived");

	Params::UFortBuyBrief_OnPurchaseDataReceived_Params Parms{};

	Parms.StackSize = StackSize;
	Parms.RemainingForSale = RemainingForSale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortBuyBrief.OnDisplayUnavailability
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECannotBuyReason        CannotBuyReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBuyBrief::OnDisplayUnavailability(enum class ECannotBuyReason CannotBuyReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBuyBrief", "OnDisplayUnavailability");

	Params::UFortBuyBrief_OnDisplayUnavailability_Params Parms{};

	Parms.CannotBuyReason = CannotBuyReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortConversationMarker
// (None)

class UClass* UFortConversationMarker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationMarker");

	return Clss;
}


// FortConversationMarker FortniteConversationUI.Default__FortConversationMarker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationMarker* UFortConversationMarker::GetDefaultObj()
{
	static class UFortConversationMarker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationMarker*>(UFortConversationMarker::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      NewIndicatorActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationMarker::OnSetIndicatedActor(class UActor* NewIndicatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMarker", "OnSetIndicatedActor");

	Params::UFortConversationMarker_OnSetIndicatedActor_Params Parms{};

	Parms.NewIndicatorActor = NewIndicatorActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      OverActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationMarker::OnMessageShownOverActor(class UActor* OverActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMarker", "OnMessageShownOverActor");

	Params::UFortConversationMarker_OnMessageShownOverActor_Params Parms{};

	Parms.OverActor = OverActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EInteractionRange       TargetInteractionRange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationMarker::OnInteractionRangeChanged(enum class EInteractionRange TargetInteractionRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMarker", "OnInteractionRangeChanged");

	Params::UFortConversationMarker_OnInteractionRangeChanged_Params Parms{};

	Parms.TargetInteractionRange = TargetInteractionRange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMarker.OnConversationActorProximityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EInteractionRange       TargetInteractionRange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortNonPlayerConversationParticipantComponent*ConversationComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationMarker::OnConversationActorProximityChanged(enum class EInteractionRange TargetInteractionRange, class UFortNonPlayerConversationParticipantComponent* ConversationComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMarker", "OnConversationActorProximityChanged");

	Params::UFortConversationMarker_OnConversationActorProximityChanged_Params Parms{};

	Parms.TargetInteractionRange = TargetInteractionRange;
	Parms.ConversationComponent = ConversationComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMarker.OnCanInteract
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanInteract                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationMarker::OnCanInteract(bool bCanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMarker", "OnCanInteract");

	Params::UFortConversationMarker_OnCanInteract_Params Parms{};

	Parms.bCanInteract = bCanInteract;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortConversationMessageWidget
// (None)

class UClass* UFortConversationMessageWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationMessageWidget");

	return Clss;
}


// FortConversationMessageWidget FortniteConversationUI.Default__FortConversationMessageWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationMessageWidget* UFortConversationMessageWidget::GetDefaultObj()
{
	static class UFortConversationMessageWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationMessageWidget*>(UFortConversationMessageWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        MessageToSet                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortConversationMessageWidget::SetPreviewMessage(class FText& MessageToSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMessageWidget", "SetPreviewMessage");

	Params::UFortConversationMessageWidget_SetPreviewMessage_Params Parms{};

	Parms.MessageToSet = MessageToSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PreviewText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortConversationMessageWidget::OnPreviewMessageSet(class FText& PreviewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMessageWidget", "OnPreviewMessageSet");

	Params::UFortConversationMessageWidget_OnPreviewMessageSet_Params Parms{};

	Parms.PreviewText = PreviewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMessageWidget.OnMessageShown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortConversationMessageWidget::OnMessageShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMessageWidget", "OnMessageShown");

	Params::UFortConversationMessageWidget_OnMessageShown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMessageWidget.OnMessageHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortConversationMessageWidget::OnMessageHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMessageWidget", "OnMessageHidden");

	Params::UFortConversationMessageWidget_OnMessageHidden_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NPCName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        MessageBody                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortConversationMessageWidget::OnMainMessageSet(class FText& NPCName, class FText& MessageBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationMessageWidget", "OnMainMessageSet");

	Params::UFortConversationMessageWidget_OnMainMessageSet_Params Parms{};

	Parms.NPCName = NPCName;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortConversationOption
// (None)

class UClass* UFortConversationOption::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationOption");

	return Clss;
}


// FortConversationOption FortniteConversationUI.Default__FortConversationOption
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationOption* UFortConversationOption::GetDefaultObj()
{
	static class UFortConversationOption* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationOption*>(UFortConversationOption::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumElements                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationOption::OnSetupPivotFromRadialInformation(int32 NumElements, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOption", "OnSetupPivotFromRadialInformation");

	Params::UFortConversationOption_OnSetupPivotFromRadialInformation_Params Parms{};

	Parms.NumElements = NumElements;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationOption.OnSetupFromItemDef
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationOption::OnSetupFromItemDef(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOption", "OnSetupFromItemDef");

	Params::UFortConversationOption_OnSetupFromItemDef_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     DisplayAsset                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationOption::OnSetupFromDisplayAsset(class UObject* DisplayAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOption", "OnSetupFromDisplayAsset");

	Params::UFortConversationOption_OnSetupFromDisplayAsset_Params Parms{};

	Parms.DisplayAsset = DisplayAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationOption.OnOptionConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortConversationOption::OnOptionConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOption", "OnOptionConfirmed");

	Params::UFortConversationOption_OnOptionConfirmed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationOption.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationOption::IsLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOption", "IsLocked");

	Params::UFortConversationOption_IsLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteConversationUI.FortConversationOption.IsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationOption::IsAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOption", "IsAvailable");

	Params::UFortConversationOption_IsAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteConversationUI.FortConversationOption.GetUnlockLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortConversationOption::GetUnlockLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOption", "GetUnlockLevel");

	Params::UFortConversationOption_GetUnlockLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteConversationUI.FortConversationOptionsPanel
// (None)

class UClass* UFortConversationOptionsPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationOptionsPanel");

	return Clss;
}


// FortConversationOptionsPanel FortniteConversationUI.Default__FortConversationOptionsPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationOptionsPanel* UFortConversationOptionsPanel::GetDefaultObj()
{
	static class UFortConversationOptionsPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationOptionsPanel*>(UFortConversationOptionsPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UFortConversationOptionsPanel::AddChildToDynamicPanel(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationOptionsPanel", "AddChildToDynamicPanel");

	Params::UFortConversationOptionsPanel_AddChildToDynamicPanel_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteConversationUI.FortConversationScreen
// (None)

class UClass* UFortConversationScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortConversationScreen");

	return Clss;
}


// FortConversationScreen FortniteConversationUI.Default__FortConversationScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortConversationScreen* UFortConversationScreen::GetDefaultObj()
{
	static class UFortConversationScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortConversationScreen*>(UFortConversationScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationScreen::ShouldBlockOptionIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationScreen", "ShouldBlockOptionIntroAnim");

	Params::UFortConversationScreen_ShouldBlockOptionIntroAnim_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsAvailable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationScreen::OnSelectedItemAvailabilityChanged(bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationScreen", "OnSelectedItemAvailabilityChanged");

	Params::UFortConversationScreen_OnSelectedItemAvailabilityChanged_Params Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortConversationScreen::OnOptionsPopulated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationScreen", "OnOptionsPopulated");

	Params::UFortConversationScreen_OnOptionsPopulated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.OnItemSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              OriginalIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationScreen::OnItemSelected(int32 OriginalIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationScreen", "OnItemSelected");

	Params::UFortConversationScreen_OnItemSelected_Params Parms{};

	Parms.OriginalIndex = OriginalIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.OnConversationStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortConversationScreen::OnConversationStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationScreen", "OnConversationStarted");

	Params::UFortConversationScreen_OnConversationStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortRadialSlot*             SelectedEntry                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationScreen::OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationScreen", "OnConversationOptionUnavailable");

	Params::UFortConversationScreen_OnConversationOptionUnavailable_Params Parms{};

	Parms.SelectedEntry = SelectedEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.EndConversation
// (Native, Protected)
// Parameters:

void UFortConversationScreen::EndConversation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortConversationScreen", "EndConversation");

	Params::UFortConversationScreen_EndConversation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteConversationUI.FortDataDrivenServiceBrief
// (None)

class UClass* UFortDataDrivenServiceBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDataDrivenServiceBrief");

	return Clss;
}


// FortDataDrivenServiceBrief FortniteConversationUI.Default__FortDataDrivenServiceBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDataDrivenServiceBrief* UFortDataDrivenServiceBrief::GetDefaultObj()
{
	static class UFortDataDrivenServiceBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDataDrivenServiceBrief*>(UFortDataDrivenServiceBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDataDrivenServiceBrief::OnUnableToPurchase(class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnUnableToPurchase");

	Params::UFortDataDrivenServiceBrief_OnUnableToPurchase_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDataDrivenServiceBrief::OnTransactionInfoReceived(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnTransactionInfoReceived");

	Params::UFortDataDrivenServiceBrief_OnTransactionInfoReceived_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortDataDrivenServiceBrief::OnAbleToPurchase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnAbleToPurchase");

	Params::UFortDataDrivenServiceBrief_OnAbleToPurchase_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortDuelBrief
// (None)

class UClass* UFortDuelBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDuelBrief");

	return Clss;
}


// FortDuelBrief FortniteConversationUI.Default__FortDuelBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDuelBrief* UFortDuelBrief::GetDefaultObj()
{
	static class UFortDuelBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDuelBrief*>(UFortDuelBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortDuelBrief.DisplayLootItems
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDuelBrief::DisplayLootItems(TArray<class UFortItem*>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDuelBrief", "DisplayLootItems");

	Params::UFortDuelBrief_DisplayLootItems_Params Parms{};

	Parms.Items = Items;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortHireBrief
// (None)

class UClass* UFortHireBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHireBrief");

	return Clss;
}


// FortHireBrief FortniteConversationUI.Default__FortHireBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHireBrief* UFortHireBrief::GetDefaultObj()
{
	static class UFortHireBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHireBrief*>(UFortHireBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortHireBrief.HandleNPCDismissal
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bAtMaxNPCNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWillDismissNPCAtHire                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHireBrief::HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHireBrief", "HandleNPCDismissal");

	Params::UFortHireBrief_HandleNPCDismissal_Params Parms{};

	Parms.bAtMaxNPCNum = bAtMaxNPCNum;
	Parms.bWillDismissNPCAtHire = bWillDismissNPCAtHire;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortIntelBrief
// (None)

class UClass* UFortIntelBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortIntelBrief");

	return Clss;
}


// FortIntelBrief FortniteConversationUI.Default__FortIntelBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortIntelBrief* UFortIntelBrief::GetDefaultObj()
{
	static class UFortIntelBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortIntelBrief*>(UFortIntelBrief::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationUI.FortItemFundBrief
// (None)

class UClass* UFortItemFundBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortItemFundBrief");

	return Clss;
}


// FortItemFundBrief FortniteConversationUI.Default__FortItemFundBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortItemFundBrief* UFortItemFundBrief::GetDefaultObj()
{
	static class UFortItemFundBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortItemFundBrief*>(UFortItemFundBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortItemFundBrief.OnProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              CurrentFundingFraction                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemFundBrief::OnProgressUpdated(float CurrentFundingFraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemFundBrief", "OnProgressUpdated");

	Params::UFortItemFundBrief_OnProgressUpdated_Params Parms{};

	Parms.CurrentFundingFraction = CurrentFundingFraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortItemFundBrief.OnIntializationComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemFundBrief::OnIntializationComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemFundBrief", "OnIntializationComplete");

	Params::UFortItemFundBrief_OnIntializationComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortItemFundBrief.InitializeFromContext
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConversationContext        ConversationContext                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortItemFundBrief::InitializeFromContext(struct FConversationContext& ConversationContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemFundBrief", "InitializeFromContext");

	Params::UFortItemFundBrief_InitializeFromContext_Params Parms{};

	Parms.ConversationContext = ConversationContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortItemFundBrief.GetDataForKey
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseIndexAdjustment                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortItemFundBrief::GetDataForKey(const class FString& Key, bool bUseIndexAdjustment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortItemFundBrief", "GetDataForKey");

	Params::UFortItemFundBrief_GetDataForKey_Params Parms{};

	Parms.Key = Key;
	Parms.bUseIndexAdjustment = bUseIndexAdjustment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteConversationUI.FortSingleItemFundBrief
// (None)

class UClass* UFortSingleItemFundBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSingleItemFundBrief");

	return Clss;
}


// FortSingleItemFundBrief FortniteConversationUI.Default__FortSingleItemFundBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSingleItemFundBrief* UFortSingleItemFundBrief::GetDefaultObj()
{
	static class UFortSingleItemFundBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSingleItemFundBrief*>(UFortSingleItemFundBrief::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationUI.FortMultiItemFundBrief
// (None)

class UClass* UFortMultiItemFundBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMultiItemFundBrief");

	return Clss;
}


// FortMultiItemFundBrief FortniteConversationUI.Default__FortMultiItemFundBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMultiItemFundBrief* UFortMultiItemFundBrief::GetDefaultObj()
{
	static class UFortMultiItemFundBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMultiItemFundBrief*>(UFortMultiItemFundBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortMultiItemFundBrief.UpdateSelectedVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMultiItemFundBrief::UpdateSelectedVisuals(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMultiItemFundBrief", "UpdateSelectedVisuals");

	Params::UFortMultiItemFundBrief_UpdateSelectedVisuals_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortNPCTextDisplay
// (None)

class UClass* UFortNPCTextDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNPCTextDisplay");

	return Clss;
}


// FortNPCTextDisplay FortniteConversationUI.Default__FortNPCTextDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNPCTextDisplay* UFortNPCTextDisplay::GetDefaultObj()
{
	static class UFortNPCTextDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNPCTextDisplay*>(UFortNPCTextDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortNPCTextDisplay.OnTextUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNPCTextDisplay::OnTextUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNPCTextDisplay", "OnTextUpdated");

	Params::UFortNPCTextDisplay_OnTextUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortNPCTextDisplay.OnItemNameUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      ItemName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNPCTextDisplay::OnItemNameUpdated(const class FString& ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNPCTextDisplay", "OnItemNameUpdated");

	Params::UFortNPCTextDisplay_OnItemNameUpdated_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortPlayerConversationUIComponent
// (None)

class UClass* UFortPlayerConversationUIComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerConversationUIComponent");

	return Clss;
}


// FortPlayerConversationUIComponent FortniteConversationUI.Default__FortPlayerConversationUIComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayerConversationUIComponent* UFortPlayerConversationUIComponent::GetDefaultObj()
{
	static class UFortPlayerConversationUIComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerConversationUIComponent*>(UFortPlayerConversationUIComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortPlayerConversationUIComponent.OnMinigameStarted
// (Final, Native, Private)
// Parameters:

void UFortPlayerConversationUIComponent::OnMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerConversationUIComponent", "OnMinigameStarted");

	Params::UFortPlayerConversationUIComponent_OnMinigameStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteConversationUI.FortQuestBrief
// (None)

class UClass* UFortQuestBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestBrief");

	return Clss;
}


// FortQuestBrief FortniteConversationUI.Default__FortQuestBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestBrief* UFortQuestBrief::GetDefaultObj()
{
	static class UFortQuestBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestBrief*>(UFortQuestBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Objective                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortRarityItemData         RarityData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                CategoryTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              XPReward                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MoneyReward                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestBrief::OnQuestInformationRecieved(class FText& Objective, struct FFortRarityItemData& RarityData, struct FGameplayTag& CategoryTag, int32 XPReward, int32 MoneyReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestBrief", "OnQuestInformationRecieved");

	Params::UFortQuestBrief_OnQuestInformationRecieved_Params Parms{};

	Parms.Objective = Objective;
	Parms.RarityData = RarityData;
	Parms.CategoryTag = CategoryTag;
	Parms.XPReward = XPReward;
	Parms.MoneyReward = MoneyReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bDisplayExpirationTime                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQuestBrief::OnQuestExpirationTimeSet(bool bDisplayExpirationTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestBrief", "OnQuestExpirationTimeSet");

	Params::UFortQuestBrief_OnQuestExpirationTimeSet_Params Parms{};

	Parms.bDisplayExpirationTime = bDisplayExpirationTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortShowFutureStormCircleBrief
// (None)

class UClass* UFortShowFutureStormCircleBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortShowFutureStormCircleBrief");

	return Clss;
}


// FortShowFutureStormCircleBrief FortniteConversationUI.Default__FortShowFutureStormCircleBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortShowFutureStormCircleBrief* UFortShowFutureStormCircleBrief::GetDefaultObj()
{
	static class UFortShowFutureStormCircleBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortShowFutureStormCircleBrief*>(UFortShowFutureStormCircleBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPreventUseStormCircleServiceReasonReason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortShowFutureStormCircleBrief::OnUnableToPurchase(enum class EPreventUseStormCircleServiceReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortShowFutureStormCircleBrief", "OnUnableToPurchase");

	Params::UFortShowFutureStormCircleBrief_OnUnableToPurchase_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortShowFutureStormCircleBrief::OnAbleToPurchase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortShowFutureStormCircleBrief", "OnAbleToPurchase");

	Params::UFortShowFutureStormCircleBrief_OnAbleToPurchase_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.FortSingleOrMultiItemFundBrief
// (None)

class UClass* UFortSingleOrMultiItemFundBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSingleOrMultiItemFundBrief");

	return Clss;
}


// FortSingleOrMultiItemFundBrief FortniteConversationUI.Default__FortSingleOrMultiItemFundBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSingleOrMultiItemFundBrief* UFortSingleOrMultiItemFundBrief::GetDefaultObj()
{
	static class UFortSingleOrMultiItemFundBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSingleOrMultiItemFundBrief*>(UFortSingleOrMultiItemFundBrief::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteConversationUI.FortTransactionStrip
// (None)

class UClass* UFortTransactionStrip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTransactionStrip");

	return Clss;
}


// FortTransactionStrip FortniteConversationUI.Default__FortTransactionStrip
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortTransactionStrip* UFortTransactionStrip::GetDefaultObj()
{
	static class UFortTransactionStrip* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTransactionStrip*>(UFortTransactionStrip::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortServiceTransactionInfo TransactionInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortTransactionStrip::OnTransactionInfoReceived(struct FFortServiceTransactionInfo& TransactionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTransactionStrip", "OnTransactionInfoReceived");

	Params::UFortTransactionStrip_OnTransactionInfoReceived_Params Parms{};

	Parms.TransactionInfo = TransactionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortTransactionStrip::OnSetTransactionCostVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTransactionStrip", "OnSetTransactionCostVisibility");

	Params::UFortTransactionStrip_OnSetTransactionCostVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged
// (Final, Native, Private)
// Parameters:
// TScriptInterface<class UFortInventoryOwnerInterface>InventoryOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         Definition                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Delta                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortTransactionStrip::HandleOnItemCountChanged(TScriptInterface<class UFortInventoryOwnerInterface> InventoryOwner, class UFortItemDefinition* Definition, int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTransactionStrip", "HandleOnItemCountChanged");

	Params::UFortTransactionStrip_HandleOnItemCountChanged_Params Parms{};

	Parms.InventoryOwner = InventoryOwner;
	Parms.Definition = Definition;
	Parms.Delta = Delta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteConversationUI.FortUpgradeBrief
// (None)

class UClass* UFortUpgradeBrief::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortUpgradeBrief");

	return Clss;
}


// FortUpgradeBrief FortniteConversationUI.Default__FortUpgradeBrief
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortUpgradeBrief* UFortUpgradeBrief::GetDefaultObj()
{
	static class UFortUpgradeBrief* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortUpgradeBrief*>(UFortUpgradeBrief::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.FortUpgradeBrief.OnUpgradeInfoReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   CurrentWeapon                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeBrief::OnUpgradeInfoReceived(class UFortItem* CurrentWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeBrief", "OnUpgradeInfoReceived");

	Params::UFortUpgradeBrief_OnUpgradeInfoReceived_Params Parms{};

	Parms.CurrentWeapon = CurrentWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortUpgradeBrief.OnUnableToUpgrade
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortWeaponUpgradeInteractionResultCannotUpgradeCause                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeBrief::OnUnableToUpgrade(enum class EFortWeaponUpgradeInteractionResult CannotUpgradeCause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortUpgradeBrief", "OnUnableToUpgrade");

	Params::UFortUpgradeBrief_OnUnableToUpgrade_Params Parms{};

	Parms.CannotUpgradeCause = CannotUpgradeCause;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteConversationUI.MobileConversationScreen
// (None)

class UClass* UMobileConversationScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobileConversationScreen");

	return Clss;
}


// MobileConversationScreen FortniteConversationUI.Default__MobileConversationScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UMobileConversationScreen* UMobileConversationScreen::GetDefaultObj()
{
	static class UMobileConversationScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UMobileConversationScreen*>(UMobileConversationScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteConversationUI.MobileConversationScreen.OnHandleConfirmClicked
// (Final, Native, Protected)
// Parameters:

void UMobileConversationScreen::OnHandleConfirmClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobileConversationScreen", "OnHandleConfirmClicked");

	Params::UMobileConversationScreen_OnHandleConfirmClicked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


