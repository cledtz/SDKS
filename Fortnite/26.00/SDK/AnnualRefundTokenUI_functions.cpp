#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnnualRefundTokenUI.FortPurchaseHistoryEntryBase
// (None)

class UClass* UFortPurchaseHistoryEntryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryEntryBase");

	return Clss;
}


// FortPurchaseHistoryEntryBase AnnualRefundTokenUI.Default__FortPurchaseHistoryEntryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryEntryBase* UFortPurchaseHistoryEntryBase::GetDefaultObj()
{
	static class UFortPurchaseHistoryEntryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryEntryBase*>(UFortPurchaseHistoryEntryBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntryBase.UpdateItemList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortCosmeticItemCard*>ItemCards                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntryBase::UpdateItemList(TArray<class UFortCosmeticItemCard*>& ItemCards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryEntryBase", "UpdateItemList");

	Params::UFortPurchaseHistoryEntryBase_UpdateItemList_Params Parms{};

	Parms.ItemCards = ItemCards;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AnnualRefundTokenUI.FortPurchaseHistoryEntry
// (None)

class UClass* UFortPurchaseHistoryEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryEntry");

	return Clss;
}


// FortPurchaseHistoryEntry AnnualRefundTokenUI.Default__FortPurchaseHistoryEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryEntry* UFortPurchaseHistoryEntry::GetDefaultObj()
{
	static class UFortPurchaseHistoryEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryEntry*>(UFortPurchaseHistoryEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCosmeticItemCard*       ItemCard                                                         (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*                   Item                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::SetupItemCard(class UFortCosmeticItemCard* ItemCard, class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "SetupItemCard");

	Params::UFortPurchaseHistoryEntry_SetupItemCard_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "SetPurchaseText");

	Params::UFortPurchaseHistoryEntry_SetPurchaseText_Params Parms{};

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
// bool                               IsPartOfABundle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsNextRefundable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IndexInBundle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPurchasesInBundle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryEntry::OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable, bool IsPartOfABundle, bool IsNextRefundable, int32 IndexInBundle, int32 NumPurchasesInBundle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "OnSetHistory");

	Params::UFortPurchaseHistoryEntry_OnSetHistory_Params Parms{};

	Parms.bHasBeenRefunded = bHasBeenRefunded;
	Parms.bIsTokenlessRefund = bIsTokenlessRefund;
	Parms.bPlayerHasTokens = bPlayerHasTokens;
	Parms.bNonRefundable = bNonRefundable;
	Parms.IsPartOfABundle = IsPartOfABundle;
	Parms.IsNextRefundable = IsNextRefundable;
	Parms.IndexInBundle = IndexInBundle;
	Parms.NumPurchasesInBundle = NumPurchasesInBundle;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry
// (None)

class UClass* UFortPurchaseHistoryBundleEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryBundleEntry");

	return Clss;
}


// FortPurchaseHistoryBundleEntry AnnualRefundTokenUI.Default__FortPurchaseHistoryBundleEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryBundleEntry* UFortPurchaseHistoryBundleEntry::GetDefaultObj()
{
	static class UFortPurchaseHistoryBundleEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryBundleEntry*>(UFortPurchaseHistoryBundleEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry.SetExpandButtonText
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NumPurchases                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPurchaseHistoryBundleEntry::SetExpandButtonText(int32 NumPurchases)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryBundleEntry", "SetExpandButtonText");

	Params::UFortPurchaseHistoryBundleEntry_SetExpandButtonText_Params Parms{};

	Parms.NumPurchases = NumPurchases;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AnnualRefundTokenUI.FortPurchaseHistoryListView
// (None)

class UClass* UFortPurchaseHistoryListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryListView");

	return Clss;
}


// FortPurchaseHistoryListView AnnualRefundTokenUI.Default__FortPurchaseHistoryListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryListView* UFortPurchaseHistoryListView::GetDefaultObj()
{
	static class UFortPurchaseHistoryListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryListView*>(UFortPurchaseHistoryListView::StaticClass()->DefaultObject);

	return Default;
}


// Class AnnualRefundTokenUI.FortPurchaseHistoryTreeView
// (None)

class UClass* UFortPurchaseHistoryTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryTreeView");

	return Clss;
}


// FortPurchaseHistoryTreeView AnnualRefundTokenUI.Default__FortPurchaseHistoryTreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryTreeView* UFortPurchaseHistoryTreeView::GetDefaultObj()
{
	static class UFortPurchaseHistoryTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryTreeView*>(UFortPurchaseHistoryTreeView::StaticClass()->DefaultObject);

	return Default;
}


// Class AnnualRefundTokenUI.FortAnnualRefundTicket
// (None)

class UClass* UFortAnnualRefundTicket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnnualRefundTicket");

	return Clss;
}


// FortAnnualRefundTicket AnnualRefundTokenUI.Default__FortAnnualRefundTicket
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnnualRefundTicket* UFortAnnualRefundTicket::GetDefaultObj()
{
	static class UFortAnnualRefundTicket* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnnualRefundTicket*>(UFortAnnualRefundTicket::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsPending                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAnnualRefundTicket::OnUpdatePendingState(bool bIsPending)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnUpdatePendingState");

	Params::UFortAnnualRefundTicket_OnUpdatePendingState_Params Parms{};

	Parms.bIsPending = bIsPending;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsAvailable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAnnualRefundTicket::OnUpdateAvailableState(bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnUpdateAvailableState");

	Params::UFortAnnualRefundTicket_OnUpdateAvailableState_Params Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnPlayLockingAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAnnualRefundTicket::OnPlayLockingAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnPlayLockingAnimation");

	Params::UFortAnnualRefundTicket_OnPlayLockingAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class AnnualRefundTokenUI.FortAnnualRefundTokenData
// (None)

class UClass* UFortAnnualRefundTokenData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnnualRefundTokenData");

	return Clss;
}


// FortAnnualRefundTokenData AnnualRefundTokenUI.Default__FortAnnualRefundTokenData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnnualRefundTokenData* UFortAnnualRefundTokenData::GetDefaultObj()
{
	static class UFortAnnualRefundTokenData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnnualRefundTokenData*>(UFortAnnualRefundTokenData::StaticClass()->DefaultObject);

	return Default;
}


// Class AnnualRefundTokenUI.FortPurchaseHistoryScreen
// (None)

class UClass* UFortPurchaseHistoryScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPurchaseHistoryScreen");

	return Clss;
}


// FortPurchaseHistoryScreen AnnualRefundTokenUI.Default__FortPurchaseHistoryScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPurchaseHistoryScreen* UFortPurchaseHistoryScreen::GetDefaultObj()
{
	static class UFortPurchaseHistoryScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPurchaseHistoryScreen*>(UFortPurchaseHistoryScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnPopulateView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnPopulateView");

	Params::UFortPurchaseHistoryScreen_OnPopulateView_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnNoPurchasesAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnNoPurchasesAvailable");

	Params::UFortPurchaseHistoryScreen_OnNoPurchasesAvailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnEndRefundSubmission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnEndRefundSubmission");

	Params::UFortPurchaseHistoryScreen_OnEndRefundSubmission_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortPurchaseHistoryScreen::OnBeginRefundSubmission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnBeginRefundSubmission");

	Params::UFortPurchaseHistoryScreen_OnBeginRefundSubmission_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.BP_IsShowingPurchases
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortPurchaseHistoryScreen::BP_IsShowingPurchases()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "BP_IsShowingPurchases");

	Params::UFortPurchaseHistoryScreen_BP_IsShowingPurchases_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class AnnualRefundTokenUI.FortRefundConfirmation
// (None)

class UClass* UFortRefundConfirmation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRefundConfirmation");

	return Clss;
}


// FortRefundConfirmation AnnualRefundTokenUI.Default__FortRefundConfirmation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRefundConfirmation* UFortRefundConfirmation::GetDefaultObj()
{
	static class UFortRefundConfirmation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRefundConfirmation*>(UFortRefundConfirmation::StaticClass()->DefaultObject);

	return Default;
}


// Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateRefundType
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortPurchaseHistoryRefundTypeRefundType                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBundledRefund                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRefundConfirmation::BP_UpdateRefundType(enum class EFortPurchaseHistoryRefundType RefundType, bool bBundledRefund)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRefundConfirmation", "BP_UpdateRefundType");

	Params::UFortRefundConfirmation_BP_UpdateRefundType_Params Parms{};

	Parms.RefundType = RefundType;
	Parms.bBundledRefund = bBundledRefund;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateItemsList
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UFortItemDefinition*> SelectedItemDefs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              TotalMtxPaid                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortRefundConfirmation::BP_UpdateItemsList(TArray<class UFortItemDefinition*>& SelectedItemDefs, int32 TotalMtxPaid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortRefundConfirmation", "BP_UpdateItemsList");

	Params::UFortRefundConfirmation_BP_UpdateItemsList_Params Parms{};

	Parms.SelectedItemDefs = SelectedItemDefs;
	Parms.TotalMtxPaid = TotalMtxPaid;

	UObject::ProcessEvent(Func, &Parms);

}

}


