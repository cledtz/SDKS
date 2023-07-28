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


// Function BattlePassS25UI.BattlePassLandingPageS25.OnBattlePassSubscriptionAllowed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSubscriptionAllowed                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageS25::OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed)
{
	static auto Func = Class->GetFunction("BattlePassLandingPageS25", "OnBattlePassSubscriptionAllowed");

	Params::UBattlePassLandingPageS25_OnBattlePassSubscriptionAllowed_Params Parms;

	Parms.bSubscriptionAllowed = bSubscriptionAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassRewardPageS25.OnPageChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PageNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RewardPageTotal                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS25::OnPageChanged(int32 PageNumber, int32 RewardPageTotal)
{
	static auto Func = Class->GetFunction("BattlePassRewardPageS25", "OnPageChanged");

	Params::UBattlePassRewardPageS25_OnPageChanged_Params Parms;

	Parms.PageNumber = PageNumber;
	Parms.RewardPageTotal = RewardPageTotal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassRewardPageS25.OnLoadingScreenSelectedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS25::OnLoadingScreenSelectedChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("BattlePassRewardPageS25", "OnLoadingScreenSelectedChanged");

	Params::UBattlePassRewardPageS25_OnLoadingScreenSelectedChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassRewardPageS25.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS25::OnInputMethodChanged(enum class ECommonInputType InputType)
{
	static auto Func = Class->GetFunction("BattlePassRewardPageS25", "OnInputMethodChanged");

	Params::UBattlePassRewardPageS25_OnInputMethodChanged_Params Parms;

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassRewardPageS25.OnInitForPageType
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ERewardPageType         InRewardPageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS25::OnInitForPageType(enum class ERewardPageType InRewardPageType)
{
	static auto Func = Class->GetFunction("BattlePassRewardPageS25", "OnInitForPageType");

	Params::UBattlePassRewardPageS25_OnInitForPageType_Params Parms;

	Parms.InRewardPageType = InRewardPageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassRewardPageS25.HandleRewardTracksBoundaryNavigation
// (Final, Native, Private)
// Parameters:
// enum class EUINavigation           InNavigation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UBattlePassRewardPageS25::HandleRewardTracksBoundaryNavigation(enum class EUINavigation InNavigation)
{
	static auto Func = Class->GetFunction("BattlePassRewardPageS25", "HandleRewardTracksBoundaryNavigation");

	Params::UBattlePassRewardPageS25_HandleRewardTracksBoundaryNavigation_Params Parms;

	Parms.InNavigation = InNavigation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassS25UI.BattlePassRewardPageS25.GetRewardPageBackgroundData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVaultWorldBackgroundData   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVaultWorldBackgroundData UBattlePassRewardPageS25::GetRewardPageBackgroundData()
{
	static auto Func = Class->GetFunction("BattlePassRewardPageS25", "GetRewardPageBackgroundData");

	Params::UBattlePassRewardPageS25_GetRewardPageBackgroundData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassS25UI.BattlePassScreenS25.OverviewShowAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBattlePassScreenS25::OverviewShowAnimationFinished()
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OverviewShowAnimationFinished");

	Params::UBattlePassScreenS25_OverviewShowAnimationFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassS25UI.BattlePassScreenS25.OnUpdateStatusBar
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        StatusText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EBattlePassStatusBarTypeS25BarType                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnUpdateStatusBar(class FText& StatusText, enum class EBattlePassStatusBarTypeS25& BarType)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnUpdateStatusBar");

	Params::UBattlePassScreenS25_OnUpdateStatusBar_Params Parms;

	Parms.StatusText = StatusText;
	Parms.BarType = BarType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnUpdateBattlePassRequiredBar
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPassRequiredVisible                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnUpdateBattlePassRequiredBar");

	Params::UBattlePassScreenS25_OnUpdateBattlePassRequiredBar_Params Parms;

	Parms.bPassRequiredVisible = bPassRequiredVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnTransitionItemDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTransitionForward                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnTransitionItemDetails(bool bTransitionForward)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnTransitionItemDetails");

	Params::UBattlePassScreenS25_OnTransitionItemDetails_Params Parms;

	Parms.bTransitionForward = bTransitionForward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetWeeklyRewardsInfo
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTimespan                   DelayTimespan                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AvailableRewards                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AvailablePages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CompletedPages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPages                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetWeeklyRewardsInfo(struct FTimespan& DelayTimespan, int32 AvailableRewards, int32 OwnedRewards, int32 TotalRewards, int32 AvailablePages, int32 CompletedPages, int32 TotalPages)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetWeeklyRewardsInfo");

	Params::UBattlePassScreenS25_OnSetWeeklyRewardsInfo_Params Parms;

	Parms.DelayTimespan = DelayTimespan;
	Parms.AvailableRewards = AvailableRewards;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.AvailablePages = AvailablePages;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetResourcePrice
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPersistentResourceItemDefinition*PersistentResource                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetResourcePrice(int32 Cost, class UFortPersistentResourceItemDefinition* PersistentResource)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetResourcePrice");

	Params::UBattlePassScreenS25_OnSetResourcePrice_Params Parms;

	Parms.Cost = Cost;
	Parms.PersistentResource = PersistentResource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetQuestRewardsInfo
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTimespan                   DelayTimespan                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CompletedPages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPages                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetQuestRewardsInfo(struct FTimespan& DelayTimespan, int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetQuestRewardsInfo");

	Params::UBattlePassScreenS25_OnSetQuestRewardsInfo_Params Parms;

	Parms.DelayTimespan = DelayTimespan;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetPrerequisiteInfo
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              CurrentAmount                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NeededAmount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBattlePassRewardPrerequisiteTypePrerequisiteType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowPrerequisiteLock                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetPrerequisiteInfo(class FText& Description, int32 CurrentAmount, int32 NeededAmount, enum class EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetPrerequisiteInfo");

	Params::UBattlePassScreenS25_OnSetPrerequisiteInfo_Params Parms;

	Parms.Description = Description;
	Parms.CurrentAmount = CurrentAmount;
	Parms.NeededAmount = NeededAmount;
	Parms.PrerequisiteType = PrerequisiteType;
	Parms.bShowPrerequisiteLock = bShowPrerequisiteLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetItemPrice
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBattlePassCurrencyType CurrencyType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetItemPrice(int32 Cost, enum class EBattlePassCurrencyType CurrencyType)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetItemPrice");

	Params::UBattlePassScreenS25_OnSetItemPrice_Params Parms;

	Parms.Cost = Cost;
	Parms.CurrencyType = CurrencyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetCrewInfo
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// bool                               bIsNextMonthRewards                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        MonthText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTimespan                   NextMonthlyRewardTimespan                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CharacterDisplayName                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        CharacterDescription                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetCrewInfo(bool bIsNextMonthRewards, class FText& MonthText, struct FTimespan& NextMonthlyRewardTimespan, class FText& CharacterDisplayName, class FText& CharacterDescription)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetCrewInfo");

	Params::UBattlePassScreenS25_OnSetCrewInfo_Params Parms;

	Parms.bIsNextMonthRewards = bIsNextMonthRewards;
	Parms.MonthText = MonthText;
	Parms.NextMonthlyRewardTimespan = NextMonthlyRewardTimespan;
	Parms.CharacterDisplayName = CharacterDisplayName;
	Parms.CharacterDescription = CharacterDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetCoverPageData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Description                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bPageComplete                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetCoverPageData(class FText& Title, class FText& Description, bool bPageComplete)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetCoverPageData");

	Params::UBattlePassScreenS25_OnSetCoverPageData_Params Parms;

	Parms.Title = Title;
	Parms.Description = Description;
	Parms.bPageComplete = bPageComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetBonusRewardsInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsUnlocked                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CompletedPages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPages                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ClaimedOutfits                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalOutfits                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetBonusRewardsInfo(bool bIsUnlocked, int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages, int32 ClaimedOutfits, int32 TotalOutfits)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetBonusRewardsInfo");

	Params::UBattlePassScreenS25_OnSetBonusRewardsInfo_Params Parms;

	Parms.bIsUnlocked = bIsUnlocked;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;
	Parms.ClaimedOutfits = ClaimedOutfits;
	Parms.TotalOutfits = TotalOutfits;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnSetBaseRewardsInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CompletedPages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPages                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnSetBaseRewardsInfo(int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnSetBaseRewardsInfo");

	Params::UBattlePassScreenS25_OnSetBaseRewardsInfo_Params Parms;

	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnItemDelayed
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTimespan                   Delay                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnItemDelayed(const struct FTimespan& Delay)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnItemDelayed");

	Params::UBattlePassScreenS25_OnItemDelayed_Params Parms;

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnInsufficientResource
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPersistentResourceItemDefinition*PersistentResource                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnInsufficientResource(class UFortPersistentResourceItemDefinition* PersistentResource)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnInsufficientResource");

	Params::UBattlePassScreenS25_OnInsufficientResource_Params Parms;

	Parms.PersistentResource = PersistentResource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnInsufficientFunds
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassCurrencyType CurrencyType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnInsufficientFunds(enum class EBattlePassCurrencyType CurrencyType)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnInsufficientFunds");

	Params::UBattlePassScreenS25_OnInsufficientFunds_Params Parms;

	Parms.CurrencyType = CurrencyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnBattlePassOwned
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenS25::OnBattlePassOwned()
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnBattlePassOwned");

	Params::UBattlePassScreenS25_OnBattlePassOwned_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.OnBattlePassGiftingAllowed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bGiftingAllowed                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::OnBattlePassGiftingAllowed(bool bGiftingAllowed)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "OnBattlePassGiftingAllowed");

	Params::UBattlePassScreenS25_OnBattlePassGiftingAllowed_Params Parms;

	Parms.bGiftingAllowed = bGiftingAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.BattlePassScreenS25.IsSeasonalCustomizationItemOwned
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBattlePassScreenS25::IsSeasonalCustomizationItemOwned()
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "IsSeasonalCustomizationItemOwned");

	Params::UBattlePassScreenS25_IsSeasonalCustomizationItemOwned_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassS25UI.BattlePassScreenS25.HandleSwitcherVisibilityShown
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBattlePassScreenS25::HandleSwitcherVisibilityShown()
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "HandleSwitcherVisibilityShown");

	Params::UBattlePassScreenS25_HandleSwitcherVisibilityShown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassS25UI.BattlePassScreenS25.HandleFullScreenMapToggled
// (Final, Native, Private)
// Parameters:
// bool                               bMapVisible                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::HandleFullScreenMapToggled(bool bMapVisible)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "HandleFullScreenMapToggled");

	Params::UBattlePassScreenS25_HandleFullScreenMapToggled_Params Parms;

	Parms.bMapVisible = bMapVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassS25UI.BattlePassScreenS25.HandleClaimRewardComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OfferTemplateIdList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassScreenS25::HandleClaimRewardComplete(bool bSuccess, TArray<class FString>& OfferTemplateIdList)
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "HandleClaimRewardComplete");

	Params::UBattlePassScreenS25_HandleClaimRewardComplete_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.OfferTemplateIdList = OfferTemplateIdList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassS25UI.BattlePassScreenS25.GoBackOneScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBattlePassScreenS25::GoBackOneScreen()
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "GoBackOneScreen");

	Params::UBattlePassScreenS25_GoBackOneScreen_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassS25UI.BattlePassScreenS25.GetQuestPageDelay
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UBattlePassScreenS25::GetQuestPageDelay()
{
	static auto Func = Class->GetFunction("BattlePassScreenS25", "GetQuestPageDelay");

	Params::UBattlePassScreenS25_GetQuestPageDelay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function BattlePassS25UI.FortBattlePassResourcesWidgetS25.OnStylePointsRewardsSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Rewards                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassResourcesWidgetS25::OnStylePointsRewardsSet(int32 Rewards)
{
	static auto Func = Class->GetFunction("FortBattlePassResourcesWidgetS25", "OnStylePointsRewardsSet");

	Params::UFortBattlePassResourcesWidgetS25_OnStylePointsRewardsSet_Params Parms;

	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.FortBattlePassResourcesWidgetS25.OnBattleStarRewardsSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Rewards                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassResourcesWidgetS25::OnBattleStarRewardsSet(int32 Rewards)
{
	static auto Func = Class->GetFunction("FortBattlePassResourcesWidgetS25", "OnBattleStarRewardsSet");

	Params::UFortBattlePassResourcesWidgetS25_OnBattleStarRewardsSet_Params Parms;

	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.FortBattlePassTutorialTooltipS25.ShowTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltipS25::ShowTooltip()
{
	static auto Func = Class->GetFunction("FortBattlePassTutorialTooltipS25", "ShowTooltip");

	Params::UFortBattlePassTutorialTooltipS25_ShowTooltip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS25UI.FortBattlePassTutorialTooltipS25.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UFortBattlePassTutorialTooltipS25::SetText(class FText Text)
{
	static auto Func = Class->GetFunction("FortBattlePassTutorialTooltipS25", "SetText");

	Params::UFortBattlePassTutorialTooltipS25_SetText_Params Parms;

	Parms.Text = Text;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function BattlePassS25UI.FortBattlePassTutorialTooltipS25.HideTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltipS25::HideTooltip()
{
	static auto Func = Class->GetFunction("FortBattlePassTutorialTooltipS25", "HideTooltip");

	Params::UFortBattlePassTutorialTooltipS25_HideTooltip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
