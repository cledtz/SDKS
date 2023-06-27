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


// Function BattlePassBase.BattlePassSubPageInterface.OnEnterSubPage
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassSubPageInterface::OnEnterSubPage()
{
	static auto Func = Class->GetFunction("BattlePassSubPageInterface", "OnEnterSubPage");

	Params::UBattlePassSubPageInterface_OnEnterSubPage_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageButton::OnSubscriptionTextureLoaded(class UTexture2D* Texture)
{
	static auto Func = Class->GetFunction("BattlePassLandingPageButton", "OnSubscriptionTextureLoaded");

	Params::UBattlePassLandingPageButton_OnSubscriptionTextureLoaded_Params Parms;

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bOwnsSubsciption                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageButton::OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption)
{
	static auto Func = Class->GetFunction("BattlePassLandingPageButton", "OnSubscriptionOwnershipUpdated");

	Params::UBattlePassLandingPageButton_OnSubscriptionOwnershipUpdated_Params Parms;

	Parms.bOwnsSubsciption = bOwnsSubsciption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnShowDisplayDetails
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassLandingPageButton::OnShowDisplayDetails()
{
	static auto Func = Class->GetFunction("BattlePassLandingPageButton", "OnShowDisplayDetails");

	Params::UBattlePassLandingPageButton_OnShowDisplayDetails_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnSetTileImageMaterial
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageButton::OnSetTileImageMaterial(class UMaterialInstance* Material)
{
	static auto Func = Class->GetFunction("BattlePassLandingPageButton", "OnSetTileImageMaterial");

	Params::UBattlePassLandingPageButton_OnSetTileImageMaterial_Params Parms;

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FBattlePassLandingPageButtonDisplayDetailsNewDisplayDetails                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassLandingPageButton::OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails)
{
	static auto Func = Class->GetFunction("BattlePassLandingPageButton", "OnDisplayDetailsUpdated");

	Params::UBattlePassLandingPageButton_OnDisplayDetailsUpdated_Params Parms;

	Parms.NewDisplayDetails = NewDisplayDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBattlePassLandingPageButtonDisplayDetailsReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FBattlePassLandingPageButtonDisplayDetails UBattlePassLandingPageButton::GetBattlePassDisplayDetails()
{
	static auto Func = Class->GetFunction("BattlePassLandingPageButton", "GetBattlePassDisplayDetails");

	Params::UBattlePassLandingPageButton_GetBattlePassDisplayDetails_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCustomSkinCategoryTile::SetPreviewedTile(int32 Index)
{
	static auto Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "SetPreviewedTile");

	Params::UFortBattlePassCustomSkinCategoryTile_SetPreviewedTile_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentlyOwnedRewards                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CategoryProgress                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCustomSkinCategoryTile::OnOwnedTilesUpdated(int32 CurrentlyOwnedRewards, int32 TotalRewards, float CategoryProgress)
{
	static auto Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnOwnedTilesUpdated");

	Params::UFortBattlePassCustomSkinCategoryTile_OnOwnedTilesUpdated_Params Parms;

	Parms.CurrentlyOwnedRewards = CurrentlyOwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CategoryProgress = CategoryProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCategoryLocked                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCustomSkinCategoryTile::OnLockedStateChanged(bool bCategoryLocked)
{
	static auto Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnLockedStateChanged");

	Params::UFortBattlePassCustomSkinCategoryTile_OnLockedStateChanged_Params Parms;

	Parms.bCategoryLocked = bCategoryLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentlyOwnedBeforeCategory                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewardsBeforeCategory                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LockedProgress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCustomSkinCategoryTile::OnLockedProgressUpdated(int32 CurrentlyOwnedBeforeCategory, int32 TotalRewardsBeforeCategory, float LockedProgress)
{
	static auto Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnLockedProgressUpdated");

	Params::UFortBattlePassCustomSkinCategoryTile_OnLockedProgressUpdated_Params Parms;

	Parms.CurrentlyOwnedBeforeCategory = CurrentlyOwnedBeforeCategory;
	Parms.TotalRewardsBeforeCategory = TotalRewardsBeforeCategory;
	Parms.LockedProgress = LockedProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCustomSkinCategoryTile::FocusTile(int32 Index)
{
	static auto Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "FocusTile");

	Params::UFortBattlePassCustomSkinCategoryTile_FocusTile_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassBulkBuyPageBase::OnRewardCountChanged(int32 Count)
{
	static auto Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnRewardCountChanged");

	Params::UFortBattlePassBulkBuyPageBase_OnRewardCountChanged_Params Parms;

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              FromPage                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ToPage                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassBulkBuyPageBase::OnPageRangeChanged(int32 FromPage, int32 ToPage)
{
	static auto Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnPageRangeChanged");

	Params::UFortBattlePassBulkBuyPageBase_OnPageRangeChanged_Params Parms;

	Parms.FromPage = FromPage;
	Parms.ToPage = ToPage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassBulkBuyPageBase::OnCostChanged(int32 Cost)
{
	static auto Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnCostChanged");

	Params::UFortBattlePassBulkBuyPageBase_OnCostChanged_Params Parms;

	Parms.Cost = Cost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled
// (Final, Native, Protected)
// Parameters:
// float                              ScrollAmount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassBulkBuyPageBase::HandleUserScrolled(float ScrollAmount)
{
	static auto Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "HandleUserScrolled");

	Params::UFortBattlePassBulkBuyPageBase_HandleUserScrolled_Params Parms;

	Parms.ScrollAmount = ScrollAmount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassCheckBoxButton.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewIsChecked                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCheckBoxButton::OnStateChanged(bool bNewIsChecked)
{
	static auto Func = Class->GetFunction("FortBattlePassCheckBoxButton", "OnStateChanged");

	Params::UFortBattlePassCheckBoxButton_OnStateChanged_Params Parms;

	Parms.bNewIsChecked = bNewIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSeasonCurrencyMcpData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSeasonCurrencyMcpData> UFortBattlePassContext::GetSeasonalCurrencies()
{
	static auto Func = Class->GetFunction("FortBattlePassContext", "GetSeasonalCurrencies");

	Params::UFortBattlePassContext_GetSeasonalCurrencies_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortBattlePassContext::GetLevelPurchaseDisclaimerText()
{
	static auto Func = Class->GetFunction("FortBattlePassContext", "GetLevelPurchaseDisclaimerText");

	Params::UFortBattlePassContext_GetLevelPurchaseDisclaimerText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortBattlePassContext::GetDefaultDisclaimerText()
{
	static auto Func = Class->GetFunction("FortBattlePassContext", "GetDefaultDisclaimerText");

	Params::UFortBattlePassContext_GetDefaultDisclaimerText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bFullText                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortBattlePassContext::GetCurrentSeasonNumberAsText(bool bFullText)
{
	static auto Func = Class->GetFunction("FortBattlePassContext", "GetCurrentSeasonNumberAsText");

	Params::UFortBattlePassContext_GetCurrentSeasonNumberAsText_Params Parms;

	Parms.bFullText = bFullText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bFullText                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortBattlePassContext::GetCurrentChapterAsText(bool bFullText)
{
	static auto Func = Class->GetFunction("FortBattlePassContext", "GetCurrentChapterAsText");

	Params::UFortBattlePassContext_GetCurrentChapterAsText_Params Parms;

	Parms.bFullText = bFullText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassContext::CanPurchaseBattlePassLevel()
{
	static auto Func = Class->GetFunction("FortBattlePassContext", "CanPurchaseBattlePassLevel");

	Params::UFortBattlePassContext_CanPurchaseBattlePassLevel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassResourcesWidgetBase.ShowResourcesInfoModal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortBattlePassResourcesWidgetBase::ShowResourcesInfoModal()
{
	static auto Func = Class->GetFunction("FortBattlePassResourcesWidgetBase", "ShowResourcesInfoModal");

	Params::UFortBattlePassResourcesWidgetBase_ShowResourcesInfoModal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassResourcesWidgetBase.OnShowMoreInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldShowMoreInfo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassResourcesWidgetBase::OnShowMoreInfo(bool bShouldShowMoreInfo)
{
	static auto Func = Class->GetFunction("FortBattlePassResourcesWidgetBase", "OnShowMoreInfo");

	Params::UFortBattlePassResourcesWidgetBase_OnShowMoreInfo_Params Parms;

	Parms.bShouldShowMoreInfo = bShouldShowMoreInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassDynamicIcon.OnBattlePassInfoUpdated
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                               bOwnsBattlePass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassDynamicIcon::OnBattlePassInfoUpdated(bool bOwnsBattlePass)
{
	static auto Func = Class->GetFunction("FortBattlePassDynamicIcon", "OnBattlePassInfoUpdated");

	Params::UFortBattlePassDynamicIcon_OnBattlePassInfoUpdated_Params Parms;

	Parms.bOwnsBattlePass = bOwnsBattlePass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnUpdatePageUnlockText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PageUnlockText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBattlePassPurchaseResourcesWidget::OnUpdatePageUnlockText(class FText& PageUnlockText)
{
	static auto Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnUpdatePageUnlockText");

	Params::UFortBattlePassPurchaseResourcesWidget_OnUpdatePageUnlockText_Params Parms;

	Parms.PageUnlockText = PageUnlockText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewPrice                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassPurchaseResourcesWidget::OnTotalPriceChanged(int32 NewPrice)
{
	static auto Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnTotalPriceChanged");

	Params::UFortBattlePassPurchaseResourcesWidget_OnTotalPriceChanged_Params Parms;

	Parms.NewPrice = NewPrice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewAmount                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LevelsLeft                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassPurchaseResourcesWidget::OnPurchaseAmountChanged(int32 NewAmount, int32 LevelsLeft)
{
	static auto Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnPurchaseAmountChanged");

	Params::UFortBattlePassPurchaseResourcesWidget_OnPurchaseAmountChanged_Params Parms;

	Parms.NewAmount = NewAmount;
	Parms.LevelsLeft = LevelsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassPurchaseResourcesWidget::OnOfferUnavailable()
{
	static auto Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnOfferUnavailable");

	Params::UFortBattlePassPurchaseResourcesWidget_OnOfferUnavailable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassPurchaseResourcesWidget::OnAmountChangeButtonClicked()
{
	static auto Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnAmountChangeButtonClicked");

	Params::UFortBattlePassPurchaseResourcesWidget_OnAmountChangeButtonClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassPurchaseResourcesWidget::IsReloadMtxEnabled()
{
	static auto Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "IsReloadMtxEnabled");

	Params::UFortBattlePassPurchaseResourcesWidget_IsReloadMtxEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPurchasedItemInfo>  PurchasedItems                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              OfferIdList                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBattlePassPurchaseResourcesWidget::HandlePurchaseMultiComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, TArray<class FString>& OfferIdList)
{
	static auto Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "HandlePurchaseMultiComplete");

	Params::UFortBattlePassPurchaseResourcesWidget_HandlePurchaseMultiComplete_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;
	Parms.OfferIdList = OfferIdList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPurchasedItemInfo>  PurchasedItems                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      OfferId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassPurchaseResourcesWidget::HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferId)
{
	static auto Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "HandlePurchaseComplete");

	Params::UFortBattlePassPurchaseResourcesWidget_HandlePurchaseComplete_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;
	Parms.OfferId = OfferId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassRewardGrid::OnPageUnselected()
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGrid", "OnPageUnselected");

	Params::UFortBattlePassRewardGrid_OnPageUnselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGrid.OnPageSelected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassRewardGrid::OnPageSelected()
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGrid", "OnPageSelected");

	Params::UFortBattlePassRewardGrid_OnPageSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ERewardPageType         PageType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassRewardGridHeader::OnSetPageType(enum class ERewardPageType PageType)
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnSetPageType");

	Params::UFortBattlePassRewardGridHeader_OnSetPageType_Params Parms;

	Parms.PageType = PageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageCustomName
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CustomName                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBattlePassRewardGridHeader::OnSetPageCustomName(class FText& CustomName)
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnSetPageCustomName");

	Params::UFortBattlePassRewardGridHeader_OnSetPageCustomName_Params Parms;

	Parms.CustomName = CustomName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageUnlocked
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PurchasedRewards                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassRewardGridHeader::OnPageUnlocked(int32 PurchasedRewards, int32 TotalRewards)
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageUnlocked");

	Params::UFortBattlePassRewardGridHeader_OnPageUnlocked_Params Parms;

	Parms.PurchasedRewards = PurchasedRewards;
	Parms.TotalRewards = TotalRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageNumberSet
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              InPageNumber                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassRewardGridHeader::OnPageNumberSet(int32 InPageNumber)
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageNumberSet");

	Params::UFortBattlePassRewardGridHeader_OnPageNumberSet_Params Parms;

	Parms.InPageNumber = InPageNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageLocked
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// int32                              RequiredLevel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequiredRewards                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsTimeLocked                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeRemaining                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassRewardGridHeader::OnPageLocked(int32 RequiredLevel, int32 RequiredRewards, bool IsTimeLocked, const struct FTimespan& TimeRemaining)
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageLocked");

	Params::UFortBattlePassRewardGridHeader_OnPageLocked_Params Parms;

	Parms.RequiredLevel = RequiredLevel;
	Parms.RequiredRewards = RequiredRewards;
	Parms.IsTimeLocked = IsTimeLocked;
	Parms.TimeRemaining = TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.OnBattlePassLevelSet
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              BattlePassLevel                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassRewardGridHeader::OnBattlePassLevelSet(int32 BattlePassLevel)
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnBattlePassLevelSet");

	Params::UFortBattlePassRewardGridHeader_OnBattlePassLevelSet_Params Parms;

	Parms.BattlePassLevel = BattlePassLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortBattlePassRewardGridHeader::GetPageNumber()
{
	static auto Func = Class->GetFunction("FortBattlePassRewardGridHeader", "GetPageNumber");

	Params::UFortBattlePassRewardGridHeader_GetPageNumber_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassRewardTrack.OnPageUnselected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassRewardTrack::OnPageUnselected()
{
	static auto Func = Class->GetFunction("FortBattlePassRewardTrack", "OnPageUnselected");

	Params::UFortBattlePassRewardTrack_OnPageUnselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardTrack.OnPageSelected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassRewardTrack::OnPageSelected()
{
	static auto Func = Class->GetFunction("FortBattlePassRewardTrack", "OnPageSelected");

	Params::UFortBattlePassRewardTrack_OnPageSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.SetState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EBattlePassTileAvailabilityStatesNewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::SetState(enum class EBattlePassTileAvailabilityStates NewState)
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "SetState");

	Params::UFortBattlePassTileBase_SetState_Params Parms;

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassTileBase.SetSize
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EPageItemTileSize       TileSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   CellSpacing                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::SetSize(enum class EPageItemTileSize TileSize, struct FVector2D& CellSpacing)
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "SetSize");

	Params::UFortBattlePassTileBase_SetSize_Params Parms;

	Parms.TileSize = TileSize;
	Parms.CellSpacing = CellSpacing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassTileBase.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassTileAvailabilityStatesNewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::OnStateChanged(enum class EBattlePassTileAvailabilityStates NewState)
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "OnStateChanged");

	Params::UFortBattlePassTileBase_OnStateChanged_Params Parms;

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnSizeChanged
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewSize                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::OnSizeChanged(struct FVector2D& NewSize)
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "OnSizeChanged");

	Params::UFortBattlePassTileBase_OnSizeChanged_Params Parms;

	Parms.NewSize = NewSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnSetTileColors
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTileBase::OnSetTileColors()
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "OnSetTileColors");

	Params::UFortBattlePassTileBase_OnSetTileColors_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bRequiresBP                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::OnSetRequiresBattlePass(bool bRequiresBP)
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "OnSetRequiresBattlePass");

	Params::UFortBattlePassTileBase_OnSetRequiresBattlePass_Params Parms;

	Parms.bRequiresBP = bRequiresBP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnRevealed
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassTileBase::OnRevealed()
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "OnRevealed");

	Params::UFortBattlePassTileBase_OnRevealed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnPeeked
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassTileBase::OnPeeked()
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "OnPeeked");

	Params::UFortBattlePassTileBase_OnPeeked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.IsOwned
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTileBase::IsOwned()
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "IsOwned");

	Params::UFortBattlePassTileBase_IsOwned_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTileBase.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTileBase::IsLocked()
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "IsLocked");

	Params::UFortBattlePassTileBase_IsLocked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTileBase.IsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTileBase::IsAvailable()
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "IsAvailable");

	Params::UFortBattlePassTileBase_IsAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTileBase.GetState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EBattlePassTileAvailabilityStatesReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EBattlePassTileAvailabilityStates UFortBattlePassTileBase::GetState()
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "GetState");

	Params::UFortBattlePassTileBase_GetState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTileBase.AreAnyGrantedItemsEquipped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTileBase::AreAnyGrantedItemsEquipped()
{
	static auto Func = Class->GetFunction("FortBattlePassTileBase", "AreAnyGrantedItemsEquipped");

	Params::UFortBattlePassTileBase_AreAnyGrantedItemsEquipped_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTile.OnUnpreviewed
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnUnpreviewed()
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnUnpreviewed");

	Params::UFortBattlePassTile_OnUnpreviewed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnUnhighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnUnhighlighted()
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnUnhighlighted");

	Params::UFortBattlePassTile_OnUnhighlighted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnTilePreviewCycled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnTilePreviewCycled()
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnTilePreviewCycled");

	Params::UFortBattlePassTile_OnTilePreviewCycled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnSetTrack
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsFreeTrack                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOwnsBattlePass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTile::OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass)
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnSetTrack");

	Params::UFortBattlePassTile_OnSetTrack_Params Parms;

	Parms.bIsFreeTrack = bIsFreeTrack;
	Parms.bOwnsBattlePass = bOwnsBattlePass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassCurrencyType Currency                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Price                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTile::OnSetCurrencyAndPrice(enum class EBattlePassCurrencyType Currency, int32 Price)
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnSetCurrencyAndPrice");

	Params::UFortBattlePassTile_OnSetCurrencyAndPrice_Params Parms;

	Parms.Currency = Currency;
	Parms.Price = Price;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnPreviewed
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnPreviewed()
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnPreviewed");

	Params::UFortBattlePassTile_OnPreviewed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnLockedStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               OwnsBattlePass                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ParentUnlocked                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasRemainingPrerequisites                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDelayed                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTile::OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed)
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnLockedStateUpdated");

	Params::UFortBattlePassTile_OnLockedStateUpdated_Params Parms;

	Parms.OwnsBattlePass = OwnsBattlePass;
	Parms.ParentUnlocked = ParentUnlocked;
	Parms.HasRemainingPrerequisites = HasRemainingPrerequisites;
	Parms.bIsDelayed = bIsDelayed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentlyOwnedRewards                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NeededRewards                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTile::OnLockedProgressUpdated(float Progress, int32 CurrentlyOwnedRewards, int32 NeededRewards)
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnLockedProgressUpdated");

	Params::UFortBattlePassTile_OnLockedProgressUpdated_Params Parms;

	Parms.Progress = Progress;
	Parms.CurrentlyOwnedRewards = CurrentlyOwnedRewards;
	Parms.NeededRewards = NeededRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnHighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnHighlighted()
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnHighlighted");

	Params::UFortBattlePassTile_OnHighlighted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnAffordabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasEnougCurrency                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTile::OnAffordabilityChanged(bool bHasEnougCurrency)
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "OnAffordabilityChanged");

	Params::UFortBattlePassTile_OnAffordabilityChanged_Params Parms;

	Parms.bHasEnougCurrency = bHasEnougCurrency;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.IsAffordable
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTile::IsAffordable()
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "IsAffordable");

	Params::UFortBattlePassTile_IsAffordable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTile.HasPrerequisites
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTile::HasPrerequisites()
{
	static auto Func = Class->GetFunction("FortBattlePassTile", "HasPrerequisites");

	Params::UFortBattlePassTile_HasPrerequisites_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltip::ShowTooltip()
{
	static auto Func = Class->GetFunction("FortBattlePassTutorialTooltip", "ShowTooltip");

	Params::UFortBattlePassTutorialTooltip_ShowTooltip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTutorialTooltip::SetTooltipEnabled(bool bEnable)
{
	static auto Func = Class->GetFunction("FortBattlePassTutorialTooltip", "SetTooltipEnabled");

	Params::UFortBattlePassTutorialTooltip_SetTooltipEnabled_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassTutorialTooltip.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UFortBattlePassTutorialTooltip::SetText(class FText Text)
{
	static auto Func = Class->GetFunction("FortBattlePassTutorialTooltip", "SetText");

	Params::UFortBattlePassTutorialTooltip_SetText_Params Parms;

	Parms.Text = Text;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltip::HideTooltip()
{
	static auto Func = Class->GetFunction("FortBattlePassTutorialTooltip", "HideTooltip");

	Params::UFortBattlePassTutorialTooltip_HideTooltip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.RebootRallyQuestPanel.OnRebootRallyEligibilityUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEligible                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URebootRallyQuestPanel::OnRebootRallyEligibilityUpdated(bool bEligible)
{
	static auto Func = Class->GetFunction("RebootRallyQuestPanel", "OnRebootRallyEligibilityUpdated");

	Params::URebootRallyQuestPanel_OnRebootRallyEligibilityUpdated_Params Parms;

	Parms.bEligible = bEligible;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
