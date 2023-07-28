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


// Function EventScreenBase.FortEventModalBase.CloseModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortEventModalBase::CloseModal()
{
	static auto Func = Class->GetFunction("FortEventModalBase", "CloseModal");

	Params::UFortEventModalBase_CloseModal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventScreenBase.FortEventMoreInfoGroup.OnSetGroupText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Header                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Body                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventMoreInfoGroup::OnSetGroupText(class FText& Header, class FText& Body)
{
	static auto Func = Class->GetFunction("FortEventMoreInfoGroup", "OnSetGroupText");

	Params::UFortEventMoreInfoGroup_OnSetGroupText_Params Parms;

	Parms.Header = Header;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventMoreInfoGroup.OnIconLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventMoreInfoGroup::OnIconLoaded(class UTexture2D* Icon)
{
	static auto Func = Class->GetFunction("FortEventMoreInfoGroup", "OnIconLoaded");

	Params::UFortEventMoreInfoGroup_OnIconLoaded_Params Parms;

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventMoreInfoGroup.OnEventScreenDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventScreenData*        InEventScreenData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventMoreInfoGroup::OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData)
{
	static auto Func = Class->GetFunction("FortEventMoreInfoGroup", "OnEventScreenDataSet");

	Params::UFortEventMoreInfoGroup_OnEventScreenDataSet_Params Parms;

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventMoreInfoModal.SetModalText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Header                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        SubHeader                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Legal                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventMoreInfoModal::SetModalText(class FText& Header, class FText& SubHeader, class FText& Legal)
{
	static auto Func = Class->GetFunction("FortEventMoreInfoModal", "SetModalText");

	Params::UFortEventMoreInfoModal_SetModalText_Params Parms;

	Parms.Header = Header;
	Parms.SubHeader = SubHeader;
	Parms.Legal = Legal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventMoreInfoModal.OnModalBackout
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortEventMoreInfoModal::OnModalBackout()
{
	static auto Func = Class->GetFunction("FortEventMoreInfoModal", "OnModalBackout");

	Params::UFortEventMoreInfoModal_OnModalBackout_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventMoreInfoModal.OnEventScreenDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventScreenData*        InEventScreenData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventMoreInfoModal::OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData)
{
	static auto Func = Class->GetFunction("FortEventMoreInfoModal", "OnEventScreenDataSet");

	Params::UFortEventMoreInfoModal_OnEventScreenDataSet_Params Parms;

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventMoreInfoModal.GetEventScreenData
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortEventScreenData*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortEventScreenData* UFortEventMoreInfoModal::GetEventScreenData()
{
	static auto Func = Class->GetFunction("FortEventMoreInfoModal", "GetEventScreenData");

	Params::UFortEventMoreInfoModal_GetEventScreenData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventPurchaseLevelsModal.OnTotalPriceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewPrice                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventPurchaseLevelsModal::OnTotalPriceChanged(int32 NewPrice)
{
	static auto Func = Class->GetFunction("FortEventPurchaseLevelsModal", "OnTotalPriceChanged");

	Params::UFortEventPurchaseLevelsModal_OnTotalPriceChanged_Params Parms;

	Parms.NewPrice = NewPrice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchaseLevelsModal.OnPurchaseAmountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PurchaseQuantity                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ResourceQuantity                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventPurchaseLevelsModal::OnPurchaseAmountChanged(int32 PurchaseQuantity, int32 ResourceQuantity)
{
	static auto Func = Class->GetFunction("FortEventPurchaseLevelsModal", "OnPurchaseAmountChanged");

	Params::UFortEventPurchaseLevelsModal_OnPurchaseAmountChanged_Params Parms;

	Parms.PurchaseQuantity = PurchaseQuantity;
	Parms.ResourceQuantity = ResourceQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchaseLevelsModal.OnEventScreenDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventScreenData*        InEventScreenData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventPurchaseLevelsModal::OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData)
{
	static auto Func = Class->GetFunction("FortEventPurchaseLevelsModal", "OnEventScreenDataSet");

	Params::UFortEventPurchaseLevelsModal_OnEventScreenDataSet_Params Parms;

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchaseLevelsModal.OnCMSTextApplied
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LegalText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventPurchaseLevelsModal::OnCMSTextApplied(class FText& LegalText)
{
	static auto Func = Class->GetFunction("FortEventPurchaseLevelsModal", "OnCMSTextApplied");

	Params::UFortEventPurchaseLevelsModal_OnCMSTextApplied_Params Parms;

	Parms.LegalText = LegalText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchaseLevelsModal.OnAmountChangeButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortEventPurchaseLevelsModal::OnAmountChangeButtonClicked()
{
	static auto Func = Class->GetFunction("FortEventPurchaseLevelsModal", "OnAmountChangeButtonClicked");

	Params::UFortEventPurchaseLevelsModal_OnAmountChangeButtonClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchaseLevelsModal.HandlePurchaseComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPurchasedItemInfo>  PurchasedItems                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InOfferId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventPurchaseLevelsModal::HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& InOfferId)
{
	static auto Func = Class->GetFunction("FortEventPurchaseLevelsModal", "HandlePurchaseComplete");

	Params::UFortEventPurchaseLevelsModal_HandlePurchaseComplete_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;
	Parms.InOfferId = InOfferId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventScreenBase.FortEventPurchaseLevelsModal.GetEventScreenData
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortEventScreenData*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortEventScreenData* UFortEventPurchaseLevelsModal::GetEventScreenData()
{
	static auto Func = Class->GetFunction("FortEventPurchaseLevelsModal", "GetEventScreenData");

	Params::UFortEventPurchaseLevelsModal_GetEventScreenData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortPurchasePremiumTrackBody.OnPopulate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              BodyIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        BodyText                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPurchasePremiumTrackBody::OnPopulate(int32 BodyIndex, class FText& BodyText)
{
	static auto Func = Class->GetFunction("FortPurchasePremiumTrackBody", "OnPopulate");

	Params::UFortPurchasePremiumTrackBody_OnPopulate_Params Parms;

	Parms.BodyIndex = BodyIndex;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchasePremiumTrackModal.OnPriceSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Price                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventPurchasePremiumTrackModal::OnPriceSet(int32 Price)
{
	static auto Func = Class->GetFunction("FortEventPurchasePremiumTrackModal", "OnPriceSet");

	Params::UFortEventPurchasePremiumTrackModal_OnPriceSet_Params Parms;

	Parms.Price = Price;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchasePremiumTrackModal.OnEventScreenDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventScreenData*        InEventScreenData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventPurchasePremiumTrackModal::OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData)
{
	static auto Func = Class->GetFunction("FortEventPurchasePremiumTrackModal", "OnEventScreenDataSet");

	Params::UFortEventPurchasePremiumTrackModal_OnEventScreenDataSet_Params Parms;

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchasePremiumTrackModal.OnCMSTextApplied
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        HeaderText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        LegalText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventPurchasePremiumTrackModal::OnCMSTextApplied(class FText& HeaderText, class FText& LegalText)
{
	static auto Func = Class->GetFunction("FortEventPurchasePremiumTrackModal", "OnCMSTextApplied");

	Params::UFortEventPurchasePremiumTrackModal_OnCMSTextApplied_Params Parms;

	Parms.HeaderText = HeaderText;
	Parms.LegalText = LegalText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventPurchasePremiumTrackModal.HandlePurchaseComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPurchasedItemInfo>  PurchasedItems                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      InOfferId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventPurchasePremiumTrackModal::HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& InOfferId)
{
	static auto Func = Class->GetFunction("FortEventPurchasePremiumTrackModal", "HandlePurchaseComplete");

	Params::UFortEventPurchasePremiumTrackModal_HandlePurchaseComplete_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;
	Parms.InOfferId = InOfferId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventScreenBase.FortEventPurchasePremiumTrackModal.GetEventScreenData
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortEventScreenData*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortEventScreenData* UFortEventPurchasePremiumTrackModal::GetEventScreenData()
{
	static auto Func = Class->GetFunction("FortEventPurchasePremiumTrackModal", "GetEventScreenData");

	Params::UFortEventPurchasePremiumTrackModal_GetEventScreenData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventRewardTracksWidget.BPSetProgressPercent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardTracksWidget::BPSetProgressPercent(float Percent)
{
	static auto Func = Class->GetFunction("FortEventRewardTracksWidget", "BPSetProgressPercent");

	Params::UFortEventRewardTracksWidget_BPSetProgressPercent_Params Parms;

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardTracksWidget.BPSetAllRewardsCollected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bAllCollected                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardTracksWidget::BPSetAllRewardsCollected(bool bAllCollected)
{
	static auto Func = Class->GetFunction("FortEventRewardTracksWidget", "BPSetAllRewardsCollected");

	Params::UFortEventRewardTracksWidget_BPSetAllRewardsCollected_Params Parms;

	Parms.bAllCollected = bAllCollected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardTracksWidget.BPOnSetRewardItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RequiredProgress                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RemainingProgress                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RewardProgressPercent                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PreviewProgressPercent                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverallProgressPercent                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInPreviewMode                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardTracksWidget::BPOnSetRewardItem(int32 RequiredProgress, int32 RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode)
{
	static auto Func = Class->GetFunction("FortEventRewardTracksWidget", "BPOnSetRewardItem");

	Params::UFortEventRewardTracksWidget_BPOnSetRewardItem_Params Parms;

	Parms.RequiredProgress = RequiredProgress;
	Parms.RemainingProgress = RemainingProgress;
	Parms.RewardProgressPercent = RewardProgressPercent;
	Parms.PreviewProgressPercent = PreviewProgressPercent;
	Parms.OverallProgressPercent = OverallProgressPercent;
	Parms.bInPreviewMode = bInPreviewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardTracksWidget.BPOnEventScreenDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventScreenData*        InEventScreenData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardTracksWidget::BPOnEventScreenDataSet(class UFortEventScreenData* InEventScreenData)
{
	static auto Func = Class->GetFunction("FortEventRewardTracksWidget", "BPOnEventScreenDataSet");

	Params::UFortEventRewardTracksWidget_BPOnEventScreenDataSet_Params Parms;

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetTrackData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FEventScreenTrackData       TrackData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsOwned                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetTrackData(struct FEventScreenTrackData& TrackData, bool bIsOwned)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetTrackData");

	Params::UFortEventRewardWidget_SetTrackData_Params Parms;

	Parms.TrackData = TrackData;
	Parms.bIsOwned = bIsOwned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetProgressPercent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetProgressPercent(float Percent)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetProgressPercent");

	Params::UFortEventRewardWidget_SetProgressPercent_Params Parms;

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetIsBannerItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsBanner                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetIsBannerItem(bool bIsBanner)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetIsBannerItem");

	Params::UFortEventRewardWidget_SetIsBannerItem_Params Parms;

	Parms.bIsBanner = bIsBanner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetInSelectedState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetInSelectedState(bool bSelected)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetInSelectedState");

	Params::UFortEventRewardWidget_SetInSelectedState_Params Parms;

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetInPreviewSelectedState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetInPreviewSelectedState(bool bSelected)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetInPreviewSelectedState");

	Params::UFortEventRewardWidget_SetInPreviewSelectedState_Params Parms;

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetInPreviewedState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPreviewed                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetInPreviewedState(bool bPreviewed)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetInPreviewedState");

	Params::UFortEventRewardWidget_SetInPreviewedState_Params Parms;

	Parms.bPreviewed = bPreviewed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetInPremiumUpgradeState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetInPremiumUpgradeState(bool bHighlighted)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetInPremiumUpgradeState");

	Params::UFortEventRewardWidget_SetInPremiumUpgradeState_Params Parms;

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetDoubleWidth
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bDoubleWidth                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetDoubleWidth(bool bDoubleWidth)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetDoubleWidth");

	Params::UFortEventRewardWidget_SetDoubleWidth_Params Parms;

	Parms.bDoubleWidth = bDoubleWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetCustomItemIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  CustomItemIcon                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetCustomItemIcon(class UTexture2D* CustomItemIcon)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetCustomItemIcon");

	Params::UFortEventRewardWidget_SetCustomItemIcon_Params Parms;

	Parms.CustomItemIcon = CustomItemIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.SetAllRewardsCollected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bAllCollected                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::SetAllRewardsCollected(bool bAllCollected)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "SetAllRewardsCollected");

	Params::UFortEventRewardWidget_SetAllRewardsCollected_Params Parms;

	Parms.bAllCollected = bAllCollected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.OnSetRewardItem
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RequiredProgress                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RemainingProgress                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RewardProgressPercent                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PreviewProgressPercent                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverallProgressPercent                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInPreviewMode                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::OnSetRewardItem(int32 RequiredProgress, int32 RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "OnSetRewardItem");

	Params::UFortEventRewardWidget_OnSetRewardItem_Params Parms;

	Parms.RequiredProgress = RequiredProgress;
	Parms.RemainingProgress = RemainingProgress;
	Parms.RewardProgressPercent = RewardProgressPercent;
	Parms.PreviewProgressPercent = PreviewProgressPercent;
	Parms.OverallProgressPercent = OverallProgressPercent;
	Parms.bInPreviewMode = bInPreviewMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.OnRewardWidgetReset
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortEventRewardWidget::OnRewardWidgetReset()
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "OnRewardWidgetReset");

	Params::UFortEventRewardWidget_OnRewardWidgetReset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        NewInputType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::OnInputMethodChanged(enum class ECommonInputType NewInputType)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "OnInputMethodChanged");

	Params::UFortEventRewardWidget_OnInputMethodChanged_Params Parms;

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.OnEventScreenDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventScreenData*        InEventScreenData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventRewardWidget::OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData)
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "OnEventScreenDataSet");

	Params::UFortEventRewardWidget_OnEventScreenDataSet_Params Parms;

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventRewardWidget.GetEventScreenData
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortEventScreenData*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortEventScreenData* UFortEventRewardWidget::GetEventScreenData()
{
	static auto Func = Class->GetFunction("FortEventRewardWidget", "GetEventScreenData");

	Params::UFortEventRewardWidget_GetEventScreenData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventScreenBase.UpdateVariantCounter
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentVariantIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalNumVariants                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventScreenBase::UpdateVariantCounter(int32 CurrentVariantIndex, int32 TotalNumVariants)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "UpdateVariantCounter");

	Params::UFortEventScreenBase_UpdateVariantCounter_Params Parms;

	Parms.CurrentVariantIndex = CurrentVariantIndex;
	Parms.TotalNumVariants = TotalNumVariants;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.SetRewardTrackLegal
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LegalText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventScreenBase::SetRewardTrackLegal(class FText& LegalText)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "SetRewardTrackLegal");

	Params::UFortEventScreenBase_SetRewardTrackLegal_Params Parms;

	Parms.LegalText = LegalText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.SetItemShopOfferInfoVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventScreenBase::SetItemShopOfferInfoVisibility(bool bIsVisible)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "SetItemShopOfferInfoVisibility");

	Params::UFortEventScreenBase_SetItemShopOfferInfoVisibility_Params Parms;

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.SetItemShopCallout
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ItemShopCalloutText                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventScreenBase::SetItemShopCallout(class FText& ItemShopCalloutText)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "SetItemShopCallout");

	Params::UFortEventScreenBase_SetItemShopCallout_Params Parms;

	Parms.ItemShopCalloutText = ItemShopCalloutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.RegisterLayoutSlots
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortEventScreenBase::RegisterLayoutSlots()
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "RegisterLayoutSlots");

	Params::UFortEventScreenBase_RegisterLayoutSlots_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.OnScreenViewChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEventScreenView        PrevScreenView                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEventScreenView        NewScreenView                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventScreenBase::OnScreenViewChanged(enum class EEventScreenView PrevScreenView, enum class EEventScreenView NewScreenView)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "OnScreenViewChanged");

	Params::UFortEventScreenBase_OnScreenViewChanged_Params Parms;

	Parms.PrevScreenView = PrevScreenView;
	Parms.NewScreenView = NewScreenView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.OnRewardPreviewItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  Item                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFreeTrack                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventScreenBase::OnRewardPreviewItemChanged(class UFortAccountItemDefinition* Item, bool bFreeTrack)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "OnRewardPreviewItemChanged");

	Params::UFortEventScreenBase_OnRewardPreviewItemChanged_Params Parms;

	Parms.Item = Item;
	Parms.bFreeTrack = bFreeTrack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.OnFirstViewAfterCompletion
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortEventScreenBase::OnFirstViewAfterCompletion()
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "OnFirstViewAfterCompletion");

	Params::UFortEventScreenBase_OnFirstViewAfterCompletion_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.OnCalendarEventStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventScreenBase::OnCalendarEventStarted(const class FString& EventName)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "OnCalendarEventStarted");

	Params::UFortEventScreenBase_OnCalendarEventStarted_Params Parms;

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.OnCalendarEventEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventScreenBase::OnCalendarEventEnded(const class FString& EventName)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "OnCalendarEventEnded");

	Params::UFortEventScreenBase_OnCalendarEventEnded_Params Parms;

	Parms.EventName = EventName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventScreenBase.IsCalendarEventActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortEventScreenBase::IsCalendarEventActive(const class FString& EventName)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "IsCalendarEventActive");

	Params::UFortEventScreenBase_IsCalendarEventActive_Params Parms;

	Parms.EventName = EventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventScreenBase.HasPurchasedPremiumTrack
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortEventScreenBase::HasPurchasedPremiumTrack()
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "HasPurchasedPremiumTrack");

	Params::UFortEventScreenBase_HasPurchasedPremiumTrack_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventScreenBase.HandleUpsellPromptNavigateUpEvent
// (Final, Native, Private)
// Parameters:
// enum class EUINavigation           InNavigation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UFortEventScreenBase::HandleUpsellPromptNavigateUpEvent(enum class EUINavigation InNavigation)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "HandleUpsellPromptNavigateUpEvent");

	Params::UFortEventScreenBase_HandleUpsellPromptNavigateUpEvent_Params Parms;

	Parms.InNavigation = InNavigation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventScreenBase.HandleToggleFullscreenMap
// (Final, Native, Private)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventScreenBase::HandleToggleFullscreenMap(bool bVisible)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "HandleToggleFullscreenMap");

	Params::UFortEventScreenBase_HandleToggleFullscreenMap_Params Parms;

	Parms.bVisible = bVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventScreenBase.FortEventScreenBase.HandleRewardListNavigateUpEvent
// (Final, Native, Private)
// Parameters:
// enum class EUINavigation           InNavigation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UFortEventScreenBase::HandleRewardListNavigateUpEvent(enum class EUINavigation InNavigation)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "HandleRewardListNavigateUpEvent");

	Params::UFortEventScreenBase_HandleRewardListNavigateUpEvent_Params Parms;

	Parms.InNavigation = InNavigation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventScreenBase.HandleRewardListNavigateRightEvent
// (Final, Native, Private)
// Parameters:
// enum class EUINavigation           InNavigation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UFortEventScreenBase::HandleRewardListNavigateRightEvent(enum class EUINavigation InNavigation)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "HandleRewardListNavigateRightEvent");

	Params::UFortEventScreenBase_HandleRewardListNavigateRightEvent_Params Parms;

	Parms.InNavigation = InNavigation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventScreenBase.HandleItemShown
// (Final, Native, Private)
// Parameters:
// class UFortAccountItemDefinition*  AccountItemDef                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventScreenBase::HandleItemShown(class UFortAccountItemDefinition* AccountItemDef)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "HandleItemShown");

	Params::UFortEventScreenBase_HandleItemShown_Params Parms;

	Parms.AccountItemDef = AccountItemDef;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventScreenBase.FortEventScreenBase.HandleGiftBoxClosed
// (Final, Native, Private)
// Parameters:

void UFortEventScreenBase::HandleGiftBoxClosed()
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "HandleGiftBoxClosed");

	Params::UFortEventScreenBase_HandleGiftBoxClosed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventScreenBase.FortEventScreenBase.HandleActiveSeasonDataChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class FString>              ActiveEventFlags                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventScreenBase::HandleActiveSeasonDataChanged(TArray<class FString>& ActiveEventFlags)
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "HandleActiveSeasonDataChanged");

	Params::UFortEventScreenBase_HandleActiveSeasonDataChanged_Params Parms;

	Parms.ActiveEventFlags = ActiveEventFlags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventScreenBase.FortEventScreenBase.GetVaultWorldFloorMID
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UFortEventScreenBase::GetVaultWorldFloorMID()
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "GetVaultWorldFloorMID");

	Params::UFortEventScreenBase_GetVaultWorldFloorMID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventScreenBase.GetVaultWorldBackgroundMID
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UFortEventScreenBase::GetVaultWorldBackgroundMID()
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "GetVaultWorldBackgroundMID");

	Params::UFortEventScreenBase_GetVaultWorldBackgroundMID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventScreenBase.GetActiveModal
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortEventModalBase*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortEventModalBase* UFortEventScreenBase::GetActiveModal()
{
	static auto Func = Class->GetFunction("FortEventScreenBase", "GetActiveModal");

	Params::UFortEventScreenBase_GetActiveModal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.EventScreenListView.SetNativeTickAllowed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEventScreenListView::SetNativeTickAllowed(bool bAllowed)
{
	static auto Func = Class->GetFunction("EventScreenListView", "SetNativeTickAllowed");

	Params::UEventScreenListView_SetNativeTickAllowed_Params Parms;

	Parms.bAllowed = bAllowed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EventScreenBase.EventScreenListView.GetEventScreenData
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortEventScreenData*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortEventScreenData* UEventScreenListView::GetEventScreenData()
{
	static auto Func = Class->GetFunction("EventScreenListView", "GetEventScreenData");

	Params::UEventScreenListView_GetEventScreenData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventTokenCollectionWidget.OnRefreshIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsCollected                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsFirstViewAfterCollection                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventTokenCollectionWidget::OnRefreshIcon(bool IsCollected, bool bIsFirstViewAfterCollection)
{
	static auto Func = Class->GetFunction("FortEventTokenCollectionWidget", "OnRefreshIcon");

	Params::UFortEventTokenCollectionWidget_OnRefreshIcon_Params Parms;

	Parms.IsCollected = IsCollected;
	Parms.bIsFirstViewAfterCollection = bIsFirstViewAfterCollection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule.OnModuleInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventScreenData*        InEventScreenData                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventTrackerModule::OnModuleInitialized(class UFortEventScreenData* InEventScreenData)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule", "OnModuleInitialized");

	Params::UFortEventTrackerModule_OnModuleInitialized_Params Parms;

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule.GetEventScreenData
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortEventScreenData*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortEventScreenData* UFortEventTrackerModule::GetEventScreenData()
{
	static auto Func = Class->GetFunction("FortEventTrackerModule", "GetEventScreenData");

	Params::UFortEventTrackerModule_GetEventScreenData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventTrackerModule_EventDetails.UpdateEventTimeRemaining
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OutEventTimeRemaining                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_EventDetails::UpdateEventTimeRemaining(class FText& OutEventTimeRemaining)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_EventDetails", "UpdateEventTimeRemaining");

	Params::UFortEventTrackerModule_EventDetails_UpdateEventTimeRemaining_Params Parms;

	Parms.OutEventTimeRemaining = OutEventTimeRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_EventDetails.OnPopulateEventDetailsText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OutEventName                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        OutEventDescription                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_EventDetails::OnPopulateEventDetailsText(class FText& OutEventName, class FText& OutEventDescription)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_EventDetails", "OnPopulateEventDetailsText");

	Params::UFortEventTrackerModule_EventDetails_OnPopulateEventDetailsText_Params Parms;

	Parms.OutEventName = OutEventName;
	Parms.OutEventDescription = OutEventDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceStarterHeader
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Header                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_Header::OnPopulateEventResourceStarterHeader(class FText& Header)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_Header", "OnPopulateEventResourceStarterHeader");

	Params::UFortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader_Params Parms;

	Parms.Header = Header;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceHeader
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Header                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ResourceValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_Header::OnPopulateEventResourceHeader(class FText& Header, int32 ResourceValue)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_Header", "OnPopulateEventResourceHeader");

	Params::UFortEventTrackerModule_Header_OnPopulateEventResourceHeader_Params Parms;

	Parms.Header = Header;
	Parms.ResourceValue = ResourceValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateNextRewardDetails
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FText>                RewardNames                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ResourceNeeded                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_RewardDetails::OnPopulateNextRewardDetails(TArray<class FText>& RewardNames, int32 ResourceNeeded)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_RewardDetails", "OnPopulateNextRewardDetails");

	Params::UFortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails_Params Parms;

	Parms.RewardNames = RewardNames;
	Parms.ResourceNeeded = ResourceNeeded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateCompletedReward
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FText>                RewardNames                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_RewardDetails::OnPopulateCompletedReward(TArray<class FText>& RewardNames)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_RewardDetails", "OnPopulateCompletedReward");

	Params::UFortEventTrackerModule_RewardDetails_OnPopulateCompletedReward_Params Parms;

	Parms.RewardNames = RewardNames;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_RewardDetails.IsPremiumTrackOwned
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortEventTrackerModule_RewardDetails::IsPremiumTrackOwned()
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_RewardDetails", "IsPremiumTrackOwned");

	Params::UFortEventTrackerModule_RewardDetails_IsPremiumTrackOwned_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventTrackerModule_RewardRemaining.OnPopulateRemaining
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              ResourceNeeded                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalResourceRequired                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRequiresPremiumTrackPurchase                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_RewardRemaining::OnPopulateRemaining(int32 ResourceNeeded, int32 TotalResourceRequired, bool bRequiresPremiumTrackPurchase)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_RewardRemaining", "OnPopulateRemaining");

	Params::UFortEventTrackerModule_RewardRemaining_OnPopulateRemaining_Params Parms;

	Parms.ResourceNeeded = ResourceNeeded;
	Parms.TotalResourceRequired = TotalResourceRequired;
	Parms.bRequiresPremiumTrackPurchase = bRequiresPremiumTrackPurchase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_ProgressiveRewards.OnPopulateCompletionMessage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bIsComplete                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CompletionText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_ProgressiveRewards::OnPopulateCompletionMessage(bool bIsComplete, class FText& CompletionText)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_ProgressiveRewards", "OnPopulateCompletionMessage");

	Params::UFortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage_Params Parms;

	Parms.bIsComplete = bIsComplete;
	Parms.CompletionText = CompletionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_Collection.OnGatherTokenCollectionWidgets
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class UFortEventTokenCollectionWidget*>OutCollectionWidgets                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_Collection::OnGatherTokenCollectionWidgets(TArray<class UFortEventTokenCollectionWidget*>* OutCollectionWidgets)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_Collection", "OnGatherTokenCollectionWidgets");

	Params::UFortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (OutCollectionWidgets != nullptr)
		*OutCollectionWidgets = Parms.OutCollectionWidgets;

}


// Function EventScreenBase.FortEventTrackerModule_Banner.OnPopulateHeaderCTAText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        HeaderCTAText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_Banner::OnPopulateHeaderCTAText(class FText& HeaderCTAText)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_Banner", "OnPopulateHeaderCTAText");

	Params::UFortEventTrackerModule_Banner_OnPopulateHeaderCTAText_Params Parms;

	Parms.HeaderCTAText = HeaderCTAText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_Banner.OnPopulateBannerText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        BannerText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_Banner::OnPopulateBannerText(class FText& BannerText)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_Banner", "OnPopulateBannerText");

	Params::UFortEventTrackerModule_Banner_OnPopulateBannerText_Params Parms;

	Parms.BannerText = BannerText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_Banner.OnCTACompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsComplete                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_Banner::OnCTACompleted(bool bIsComplete)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_Banner", "OnCTACompleted");

	Params::UFortEventTrackerModule_Banner_OnCTACompleted_Params Parms;

	Parms.bIsComplete = bIsComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnPopulateText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        HeaderText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        BodyText                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_PremiumUpsell::OnPopulateText(class FText& HeaderText, class FText& BodyText)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_PremiumUpsell", "OnPopulateText");

	Params::UFortEventTrackerModule_PremiumUpsell_OnPopulateText_Params Parms;

	Parms.HeaderText = HeaderText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnIconLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                    LoadedTexture                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_PremiumUpsell::OnIconLoaded(class UTexture* LoadedTexture)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_PremiumUpsell", "OnIconLoaded");

	Params::UFortEventTrackerModule_PremiumUpsell_OnIconLoaded_Params Parms;

	Parms.LoadedTexture = LoadedTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventScreenBase.FortEventTrackerModule_PremiumUpsell.IsPremiumTrackOwned
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortEventTrackerModule_PremiumUpsell::IsPremiumTrackOwned()
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_PremiumUpsell", "IsPremiumTrackOwned");

	Params::UFortEventTrackerModule_PremiumUpsell_IsPremiumTrackOwned_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EventScreenBase.FortEventTrackerModule_CustomText.OnPopulateText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CustomText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortEventTrackerModule_CustomText::OnPopulateText(class FText& CustomText)
{
	static auto Func = Class->GetFunction("FortEventTrackerModule_CustomText", "OnPopulateText");

	Params::UFortEventTrackerModule_CustomText_OnPopulateText_Params Parms;

	Parms.CustomText = CustomText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
