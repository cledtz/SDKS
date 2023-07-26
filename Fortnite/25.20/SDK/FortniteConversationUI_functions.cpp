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


// Function FortniteConversationUI.FortConversationOptionBrief.ConfigureBP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConversationContext        ClientContext                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FClientConversationOptionEntryOptionEntry                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              SelectedIndex                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationOptionBrief::ConfigureBP(struct FConversationContext& ClientContext, struct FClientConversationOptionEntry& OptionEntry, int32 SelectedIndex)
{
	static auto Func = Class->GetFunction("FortConversationOptionBrief", "ConfigureBP");

	Params::UFortConversationOptionBrief_ConfigureBP_Params Parms;

	Parms.ClientContext = ClientContext;
	Parms.OptionEntry = OptionEntry;
	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemTransactionBrief::OnTransactionInfoReceived(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("FortItemTransactionBrief", "OnTransactionInfoReceived");

	Params::UFortItemTransactionBrief_OnTransactionInfoReceived_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPreventAbilityUseReasonReason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortApplyAbilityBrief::OnUnableToPurchase(enum class EPreventAbilityUseReason Reason)
{
	static auto Func = Class->GetFunction("FortApplyAbilityBrief", "OnUnableToPurchase");

	Params::UFortApplyAbilityBrief_OnUnableToPurchase_Params Parms;

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortApplyAbilityBrief::OnAbleToPurchase()
{
	static auto Func = Class->GetFunction("FortApplyAbilityBrief", "OnAbleToPurchase");

	Params::UFortApplyAbilityBrief_OnAbleToPurchase_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortBasicBrief.OnChoiceTextReceived
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBasicBrief::OnChoiceTextReceived(class FText& Text)
{
	static auto Func = Class->GetFunction("FortBasicBrief", "OnChoiceTextReceived");

	Params::UFortBasicBrief_OnChoiceTextReceived_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        DescriptionText                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBasicItemBrief::OnUpdateDescriptionText(class FText& DescriptionText)
{
	static auto Func = Class->GetFunction("FortBasicItemBrief", "OnUpdateDescriptionText");

	Params::UFortBasicItemBrief_OnUpdateDescriptionText_Params Parms;

	Parms.DescriptionText = DescriptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortBasicItemBrief.OnUnableToUse
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBasicItemBrief::OnUnableToUse(class FText& Reason)
{
	static auto Func = Class->GetFunction("FortBasicItemBrief", "OnUnableToUse");

	Params::UFortBasicItemBrief_OnUnableToUse_Params Parms;

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
	static auto Func = Class->GetFunction("FortBasicItemBrief", "OnItemInfoReceived");

	Params::UFortBasicItemBrief_OnItemInfoReceived_Params Parms;

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
	static auto Func = Class->GetFunction("FortBasicItemBrief", "OnAbleToUse");

	Params::UFortBasicItemBrief_OnAbleToUse_Params Parms;

	Parms.bShowWarningMessage = bShowWarningMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortBuyBrief.OnPurchaseDataReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              StackSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RemainingForSale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBuyBrief::OnPurchaseDataReceived(int32 StackSize, int32 RemainingForSale)
{
	static auto Func = Class->GetFunction("FortBuyBrief", "OnPurchaseDataReceived");

	Params::UFortBuyBrief_OnPurchaseDataReceived_Params Parms;

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
	static auto Func = Class->GetFunction("FortBuyBrief", "OnDisplayUnavailability");

	Params::UFortBuyBrief_OnDisplayUnavailability_Params Parms;

	Parms.CannotBuyReason = CannotBuyReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      NewIndicatorActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationMarker::OnSetIndicatedActor(class AActor* NewIndicatorActor)
{
	static auto Func = Class->GetFunction("FortConversationMarker", "OnSetIndicatedActor");

	Params::UFortConversationMarker_OnSetIndicatedActor_Params Parms;

	Parms.NewIndicatorActor = NewIndicatorActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OverActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationMarker::OnMessageShownOverActor(class AActor* OverActor)
{
	static auto Func = Class->GetFunction("FortConversationMarker", "OnMessageShownOverActor");

	Params::UFortConversationMarker_OnMessageShownOverActor_Params Parms;

	Parms.OverActor = OverActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EInteractionRange       TargetInteractionRange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationMarker::OnInteractionRangeChanged(enum class EInteractionRange TargetInteractionRange)
{
	static auto Func = Class->GetFunction("FortConversationMarker", "OnInteractionRangeChanged");

	Params::UFortConversationMarker_OnInteractionRangeChanged_Params Parms;

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
	static auto Func = Class->GetFunction("FortConversationMarker", "OnConversationActorProximityChanged");

	Params::UFortConversationMarker_OnConversationActorProximityChanged_Params Parms;

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
	static auto Func = Class->GetFunction("FortConversationMarker", "OnCanInteract");

	Params::UFortConversationMarker_OnCanInteract_Params Parms;

	Parms.bCanInteract = bCanInteract;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        MessageToSet                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortConversationMessageWidget::SetPreviewMessage(class FText& MessageToSet)
{
	static auto Func = Class->GetFunction("FortConversationMessageWidget", "SetPreviewMessage");

	Params::UFortConversationMessageWidget_SetPreviewMessage_Params Parms;

	Parms.MessageToSet = MessageToSet;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PreviewText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortConversationMessageWidget::OnPreviewMessageSet(class FText& PreviewText)
{
	static auto Func = Class->GetFunction("FortConversationMessageWidget", "OnPreviewMessageSet");

	Params::UFortConversationMessageWidget_OnPreviewMessageSet_Params Parms;

	Parms.PreviewText = PreviewText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMessageWidget.OnMessageShown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortConversationMessageWidget::OnMessageShown()
{
	static auto Func = Class->GetFunction("FortConversationMessageWidget", "OnMessageShown");

	Params::UFortConversationMessageWidget_OnMessageShown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMessageWidget.OnMessageHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortConversationMessageWidget::OnMessageHidden()
{
	static auto Func = Class->GetFunction("FortConversationMessageWidget", "OnMessageHidden");

	Params::UFortConversationMessageWidget_OnMessageHidden_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NPCName                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        MessageBody                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortConversationMessageWidget::OnMainMessageSet(class FText& NPCName, class FText& MessageBody)
{
	static auto Func = Class->GetFunction("FortConversationMessageWidget", "OnMainMessageSet");

	Params::UFortConversationMessageWidget_OnMainMessageSet_Params Parms;

	Parms.NPCName = NPCName;
	Parms.MessageBody = MessageBody;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumElements                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationOption::OnSetupPivotFromRadialInformation(int32 NumElements, int32 ItemIndex)
{
	static auto Func = Class->GetFunction("FortConversationOption", "OnSetupPivotFromRadialInformation");

	Params::UFortConversationOption_OnSetupPivotFromRadialInformation_Params Parms;

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
	static auto Func = Class->GetFunction("FortConversationOption", "OnSetupFromItemDef");

	Params::UFortConversationOption_OnSetupFromItemDef_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     DisplayAsset                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationOption::OnSetupFromDisplayAsset(class UObject* DisplayAsset)
{
	static auto Func = Class->GetFunction("FortConversationOption", "OnSetupFromDisplayAsset");

	Params::UFortConversationOption_OnSetupFromDisplayAsset_Params Parms;

	Parms.DisplayAsset = DisplayAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationOption.OnOptionConfirmed
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortConversationOption::OnOptionConfirmed()
{
	static auto Func = Class->GetFunction("FortConversationOption", "OnOptionConfirmed");

	Params::UFortConversationOption_OnOptionConfirmed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationOption.IsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationOption::IsAvailable()
{
	static auto Func = Class->GetFunction("FortConversationOption", "IsAvailable");

	Params::UFortConversationOption_IsAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UFortConversationOptionsPanel::AddChildToDynamicPanel(class UWidget* Content)
{
	static auto Func = Class->GetFunction("FortConversationOptionsPanel", "AddChildToDynamicPanel");

	Params::UFortConversationOptionsPanel_AddChildToDynamicPanel_Params Parms;

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationScreen::ShouldBlockOptionIntroAnim()
{
	static auto Func = Class->GetFunction("FortConversationScreen", "ShouldBlockOptionIntroAnim");

	Params::UFortConversationScreen_ShouldBlockOptionIntroAnim_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsAvailable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationScreen::OnSelectedItemAvailabilityChanged(bool bIsAvailable)
{
	static auto Func = Class->GetFunction("FortConversationScreen", "OnSelectedItemAvailabilityChanged");

	Params::UFortConversationScreen_OnSelectedItemAvailabilityChanged_Params Parms;

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortConversationScreen::OnOptionsPopulated()
{
	static auto Func = Class->GetFunction("FortConversationScreen", "OnOptionsPopulated");

	Params::UFortConversationScreen_OnOptionsPopulated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.OnItemSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              OriginalIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationScreen::OnItemSelected(int32 OriginalIndex)
{
	static auto Func = Class->GetFunction("FortConversationScreen", "OnItemSelected");

	Params::UFortConversationScreen_OnItemSelected_Params Parms;

	Parms.OriginalIndex = OriginalIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.OnConversationStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortConversationScreen::OnConversationStarted()
{
	static auto Func = Class->GetFunction("FortConversationScreen", "OnConversationStarted");

	Params::UFortConversationScreen_OnConversationStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortRadialSlot*             SelectedEntry                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortConversationScreen::OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry)
{
	static auto Func = Class->GetFunction("FortConversationScreen", "OnConversationOptionUnavailable");

	Params::UFortConversationScreen_OnConversationOptionUnavailable_Params Parms;

	Parms.SelectedEntry = SelectedEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortConversationScreen.EndConversation
// (Native, Protected)
// Parameters:

void UFortConversationScreen::EndConversation()
{
	static auto Func = Class->GetFunction("FortConversationScreen", "EndConversation");

	Params::UFortConversationScreen_EndConversation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDataDrivenServiceBrief::OnUnableToPurchase(class FText& Reason)
{
	static auto Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnUnableToPurchase");

	Params::UFortDataDrivenServiceBrief_OnUnableToPurchase_Params Parms;

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortDataDrivenServiceBrief::OnTransactionInfoReceived(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnTransactionInfoReceived");

	Params::UFortDataDrivenServiceBrief_OnTransactionInfoReceived_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortDataDrivenServiceBrief::OnAbleToPurchase()
{
	static auto Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnAbleToPurchase");

	Params::UFortDataDrivenServiceBrief_OnAbleToPurchase_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortDuelBrief.DisplayLootItems
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortDuelBrief::DisplayLootItems(TArray<class UFortItem*>& Items)
{
	static auto Func = Class->GetFunction("FortDuelBrief", "DisplayLootItems");

	Params::UFortDuelBrief_DisplayLootItems_Params Parms;

	Parms.Items = Items;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortHireBrief.HandleNPCDismissal
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bAtMaxNPCNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWillDismissNPCAtHire                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHireBrief::HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire)
{
	static auto Func = Class->GetFunction("FortHireBrief", "HandleNPCDismissal");

	Params::UFortHireBrief_HandleNPCDismissal_Params Parms;

	Parms.bAtMaxNPCNum = bAtMaxNPCNum;
	Parms.bWillDismissNPCAtHire = bWillDismissNPCAtHire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortItemFundBrief.OnProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              CurrentFundingFraction                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortItemFundBrief::OnProgressUpdated(float CurrentFundingFraction)
{
	static auto Func = Class->GetFunction("FortItemFundBrief", "OnProgressUpdated");

	Params::UFortItemFundBrief_OnProgressUpdated_Params Parms;

	Parms.CurrentFundingFraction = CurrentFundingFraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortItemFundBrief.OnIntializationComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemFundBrief::OnIntializationComplete()
{
	static auto Func = Class->GetFunction("FortItemFundBrief", "OnIntializationComplete");

	Params::UFortItemFundBrief_OnIntializationComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortItemFundBrief.InitializeFromContext
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConversationContext        ConversationContext                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortItemFundBrief::InitializeFromContext(struct FConversationContext& ConversationContext)
{
	static auto Func = Class->GetFunction("FortItemFundBrief", "InitializeFromContext");

	Params::UFortItemFundBrief_InitializeFromContext_Params Parms;

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
	static auto Func = Class->GetFunction("FortItemFundBrief", "GetDataForKey");

	Params::UFortItemFundBrief_GetDataForKey_Params Parms;

	Parms.Key = Key;
	Parms.bUseIndexAdjustment = bUseIndexAdjustment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortniteConversationUI.FortMultiItemFundBrief.UpdateSelectedVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMultiItemFundBrief::UpdateSelectedVisuals(int32 SelectedIndex)
{
	static auto Func = Class->GetFunction("FortMultiItemFundBrief", "UpdateSelectedVisuals");

	Params::UFortMultiItemFundBrief_UpdateSelectedVisuals_Params Parms;

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortNPCTextDisplay.OnTextUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortNPCTextDisplay::OnTextUpdated()
{
	static auto Func = Class->GetFunction("FortNPCTextDisplay", "OnTextUpdated");

	Params::UFortNPCTextDisplay_OnTextUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortNPCTextDisplay.OnItemNameUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      ItemName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNPCTextDisplay::OnItemNameUpdated(const class FString& ItemName)
{
	static auto Func = Class->GetFunction("FortNPCTextDisplay", "OnItemNameUpdated");

	Params::UFortNPCTextDisplay_OnItemNameUpdated_Params Parms;

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortPlayerConversationUIComponent.OnMinigameStarted
// (Final, Native, Private)
// Parameters:

void UFortPlayerConversationUIComponent::OnMinigameStarted()
{
	static auto Func = Class->GetFunction("FortPlayerConversationUIComponent", "OnMinigameStarted");

	Params::UFortPlayerConversationUIComponent_OnMinigameStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("FortQuestBrief", "OnQuestInformationRecieved");

	Params::UFortQuestBrief_OnQuestInformationRecieved_Params Parms;

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
	static auto Func = Class->GetFunction("FortQuestBrief", "OnQuestExpirationTimeSet");

	Params::UFortQuestBrief_OnQuestExpirationTimeSet_Params Parms;

	Parms.bDisplayExpirationTime = bDisplayExpirationTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPreventUseStormCircleServiceReasonReason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortShowFutureStormCircleBrief::OnUnableToPurchase(enum class EPreventUseStormCircleServiceReason Reason)
{
	static auto Func = Class->GetFunction("FortShowFutureStormCircleBrief", "OnUnableToPurchase");

	Params::UFortShowFutureStormCircleBrief_OnUnableToPurchase_Params Parms;

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortShowFutureStormCircleBrief::OnAbleToPurchase()
{
	static auto Func = Class->GetFunction("FortShowFutureStormCircleBrief", "OnAbleToPurchase");

	Params::UFortShowFutureStormCircleBrief_OnAbleToPurchase_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortServiceTransactionInfo TransactionInfo                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortTransactionStrip::OnTransactionInfoReceived(struct FFortServiceTransactionInfo& TransactionInfo)
{
	static auto Func = Class->GetFunction("FortTransactionStrip", "OnTransactionInfoReceived");

	Params::UFortTransactionStrip_OnTransactionInfoReceived_Params Parms;

	Parms.TransactionInfo = TransactionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortTransactionStrip::OnSetTransactionCostVisibility(bool bVisible)
{
	static auto Func = Class->GetFunction("FortTransactionStrip", "OnSetTransactionCostVisibility");

	Params::UFortTransactionStrip_OnSetTransactionCostVisibility_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged
// (Final, Native, Private)
// Parameters:
// FInterfaceProperty_                InventoryOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         Definition                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Delta                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortTransactionStrip::HandleOnItemCountChanged(FInterfaceProperty_ InventoryOwner, class UFortItemDefinition* Definition, int32 Delta)
{
	static auto Func = Class->GetFunction("FortTransactionStrip", "HandleOnItemCountChanged");

	Params::UFortTransactionStrip_HandleOnItemCountChanged_Params Parms;

	Parms.InventoryOwner = InventoryOwner;
	Parms.Definition = Definition;
	Parms.Delta = Delta;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function FortniteConversationUI.FortUpgradeBrief.OnUpgradeInfoReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   CurrentWeapon                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeBrief::OnUpgradeInfoReceived(class UFortItem* CurrentWeapon)
{
	static auto Func = Class->GetFunction("FortUpgradeBrief", "OnUpgradeInfoReceived");

	Params::UFortUpgradeBrief_OnUpgradeInfoReceived_Params Parms;

	Parms.CurrentWeapon = CurrentWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.FortUpgradeBrief.OnUnableToUpgrade
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortWeaponUpgradeInteractionResultCannotUpgradeCause                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortUpgradeBrief::OnUnableToUpgrade(enum class EFortWeaponUpgradeInteractionResult CannotUpgradeCause)
{
	static auto Func = Class->GetFunction("FortUpgradeBrief", "OnUnableToUpgrade");

	Params::UFortUpgradeBrief_OnUnableToUpgrade_Params Parms;

	Parms.CannotUpgradeCause = CannotUpgradeCause;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteConversationUI.MobileConversationScreen.OnHandleConfirmClicked
// (Final, Native, Protected)
// Parameters:

void UMobileConversationScreen::OnHandleConfirmClicked()
{
	static auto Func = Class->GetFunction("MobileConversationScreen", "OnHandleConfirmClicked");

	Params::UMobileConversationScreen_OnHandleConfirmClicked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
