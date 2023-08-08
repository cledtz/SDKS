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


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsPending                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAnnualRefundTicket::OnUpdatePendingState(bool bIsPending)
{
	static auto Func = Class->GetFunction("FortAnnualRefundTicket", "OnUpdatePendingState");

	Params::UFortAnnualRefundTicket_OnUpdatePendingState_Params Parms;

	Parms.bIsPending = bIsPending;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsAvailable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAnnualRefundTicket::OnUpdateAvailableState(bool bIsAvailable)
{
	static auto Func = Class->GetFunction("FortAnnualRefundTicket", "OnUpdateAvailableState");

	Params::UFortAnnualRefundTicket_OnUpdateAvailableState_Params Parms;

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnPlayLockingAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAnnualRefundTicket::OnPlayLockingAnimation()
{
	static auto Func = Class->GetFunction("FortAnnualRefundTicket", "OnPlayLockingAnimation");

	Params::UFortAnnualRefundTicket_OnPlayLockingAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.UpdateItemList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortCosmeticItemCard*>ItemCards                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::UpdateItemList(TArray<class UFortCosmeticItemCard*>& ItemCards)
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryEntry", "UpdateItemList");

	Params::UFortPurchaseHistoryEntry_UpdateItemList_Params Parms;

	Parms.ItemCards = ItemCards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCosmeticItemCard*       ItemCard                                                         (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   Item                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::SetupItemCard(class UFortCosmeticItemCard* ItemCard, class UFortItem* Item)
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryEntry", "SetupItemCard");

	Params::UFortPurchaseHistoryEntry_SetupItemCard_Params Parms;

	Parms.ItemCard = ItemCard;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PurchaseDateText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        RefundDateText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bHasBeenRefunded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortPurchaseHistoryRefundTypeRefundType                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::SetPurchaseText(class FText& PurchaseDateText, class FText& RefundDateText, bool bHasBeenRefunded, enum class EFortPurchaseHistoryRefundType RefundType)
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryEntry", "SetPurchaseText");

	Params::UFortPurchaseHistoryEntry_SetPurchaseText_Params Parms;

	Parms.PurchaseDateText = PurchaseDateText;
	Parms.RefundDateText = RefundDateText;
	Parms.bHasBeenRefunded = bHasBeenRefunded;
	Parms.RefundType = RefundType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasBeenRefunded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsTokenlessRefund                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerHasTokens                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNonRefundable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable)
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryEntry", "OnSetHistory");

	Params::UFortPurchaseHistoryEntry_OnSetHistory_Params Parms;

	Parms.bHasBeenRefunded = bHasBeenRefunded;
	Parms.bIsTokenlessRefund = bIsTokenlessRefund;
	Parms.bPlayerHasTokens = bPlayerHasTokens;
	Parms.bNonRefundable = bNonRefundable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnPopulateView()
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnPopulateView");

	Params::UFortPurchaseHistoryScreen_OnPopulateView_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnNoPurchasesAvailable()
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnNoPurchasesAvailable");

	Params::UFortPurchaseHistoryScreen_OnNoPurchasesAvailable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnEndRefundSubmission()
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnEndRefundSubmission");

	Params::UFortPurchaseHistoryScreen_OnEndRefundSubmission_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnBeginRefundSubmission()
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnBeginRefundSubmission");

	Params::UFortPurchaseHistoryScreen_OnBeginRefundSubmission_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.BP_IsShowingPurchases
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPurchaseHistoryScreen::BP_IsShowingPurchases()
{
	static auto Func = Class->GetFunction("FortPurchaseHistoryScreen", "BP_IsShowingPurchases");

	Params::UFortPurchaseHistoryScreen_BP_IsShowingPurchases_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateRefundType
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortPurchaseHistoryRefundTypeRefundType                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRefundConfirmation::BP_UpdateRefundType(enum class EFortPurchaseHistoryRefundType RefundType)
{
	static auto Func = Class->GetFunction("FortRefundConfirmation", "BP_UpdateRefundType");

	Params::UFortRefundConfirmation_BP_UpdateRefundType_Params Parms;

	Parms.RefundType = RefundType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateItemsList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*> SelectedItemDefs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              TotalMtxPaid                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRefundConfirmation::BP_UpdateItemsList(TArray<class UFortItemDefinition*>& SelectedItemDefs, int32 TotalMtxPaid)
{
	static auto Func = Class->GetFunction("FortRefundConfirmation", "BP_UpdateItemsList");

	Params::UFortRefundConfirmation_BP_UpdateItemsList_Params Parms;

	Parms.SelectedItemDefs = SelectedItemDefs;
	Parms.TotalMtxPaid = TotalMtxPaid;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
