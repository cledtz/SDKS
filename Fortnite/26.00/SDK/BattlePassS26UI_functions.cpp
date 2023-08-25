#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BattlePassS26UI.BattlePassBulkBuyPageS26
// (None)

class UClass* UBattlePassBulkBuyPageS26::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassBulkBuyPageS26");

	return Clss;
}


// BattlePassBulkBuyPageS26 BattlePassS26UI.Default__BattlePassBulkBuyPageS26
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassBulkBuyPageS26* UBattlePassBulkBuyPageS26::GetDefaultObj()
{
	static class UBattlePassBulkBuyPageS26* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassBulkBuyPageS26*>(UBattlePassBulkBuyPageS26::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassS26UI.BattlePassLandingPageS26
// (None)

class UClass* UBattlePassLandingPageS26::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassLandingPageS26");

	return Clss;
}


// BattlePassLandingPageS26 BattlePassS26UI.Default__BattlePassLandingPageS26
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassLandingPageS26* UBattlePassLandingPageS26::GetDefaultObj()
{
	static class UBattlePassLandingPageS26* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassLandingPageS26*>(UBattlePassLandingPageS26::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS26UI.BattlePassLandingPageS26.OnBattlePassSubscriptionAllowed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSubscriptionAllowed                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageS26::OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageS26", "OnBattlePassSubscriptionAllowed");

	Params::UBattlePassLandingPageS26_OnBattlePassSubscriptionAllowed_Params Parms{};

	Parms.bSubscriptionAllowed = bSubscriptionAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassS26UI.BattlePassRewardPageS26
// (None)

class UClass* UBattlePassRewardPageS26::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassRewardPageS26");

	return Clss;
}


// BattlePassRewardPageS26 BattlePassS26UI.Default__BattlePassRewardPageS26
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassRewardPageS26* UBattlePassRewardPageS26::GetDefaultObj()
{
	static class UBattlePassRewardPageS26* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassRewardPageS26*>(UBattlePassRewardPageS26::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS26UI.BattlePassRewardPageS26.OnPageChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PageNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RewardPageTotal                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS26::OnPageChanged(int32 PageNumber, int32 RewardPageTotal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS26", "OnPageChanged");

	Params::UBattlePassRewardPageS26_OnPageChanged_Params Parms{};

	Parms.PageNumber = PageNumber;
	Parms.RewardPageTotal = RewardPageTotal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassRewardPageS26.OnLoadingScreenSelectedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS26::OnLoadingScreenSelectedChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS26", "OnLoadingScreenSelectedChanged");

	Params::UBattlePassRewardPageS26_OnLoadingScreenSelectedChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassRewardPageS26.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS26::OnInputMethodChanged(enum class ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS26", "OnInputMethodChanged");

	Params::UBattlePassRewardPageS26_OnInputMethodChanged_Params Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassRewardPageS26.OnInitForPageType
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ERewardPageType         InRewardPageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassRewardPageS26::OnInitForPageType(enum class ERewardPageType InRewardPageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS26", "OnInitForPageType");

	Params::UBattlePassRewardPageS26_OnInitForPageType_Params Parms{};

	Parms.InRewardPageType = InRewardPageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassRewardPageS26.HandleRewardTracksBoundaryNavigation
// (Final, Native, Private)
// Parameters:
// enum class EUINavigation           InNavigation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UBattlePassRewardPageS26::HandleRewardTracksBoundaryNavigation(enum class EUINavigation InNavigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS26", "HandleRewardTracksBoundaryNavigation");

	Params::UBattlePassRewardPageS26_HandleRewardTracksBoundaryNavigation_Params Parms{};

	Parms.InNavigation = InNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassS26UI.BattlePassRewardPageS26.GetRewardPageBackgroundData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVaultWorldBackgroundData   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVaultWorldBackgroundData UBattlePassRewardPageS26::GetRewardPageBackgroundData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassRewardPageS26", "GetRewardPageBackgroundData");

	Params::UBattlePassRewardPageS26_GetRewardPageBackgroundData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BattlePassS26UI.BattlePassScreenS26
// (None)

class UClass* UBattlePassScreenS26::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreenS26");

	return Clss;
}


// BattlePassScreenS26 BattlePassS26UI.Default__BattlePassScreenS26
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassScreenS26* UBattlePassScreenS26::GetDefaultObj()
{
	static class UBattlePassScreenS26* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreenS26*>(UBattlePassScreenS26::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS26UI.BattlePassScreenS26.OverviewShowAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBattlePassScreenS26::OverviewShowAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OverviewShowAnimationFinished");

	Params::UBattlePassScreenS26_OverviewShowAnimationFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS26UI.BattlePassScreenS26.OnUpdateStatusBar
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        StatusText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EBattlePassStatusBarTypeS26BarType                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnUpdateStatusBar(class FText& StatusText, enum class EBattlePassStatusBarTypeS26& BarType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnUpdateStatusBar");

	Params::UBattlePassScreenS26_OnUpdateStatusBar_Params Parms{};

	Parms.StatusText = StatusText;
	Parms.BarType = BarType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnUpdateBattlePassRequiredBar
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPassRequiredVisible                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnUpdateBattlePassRequiredBar");

	Params::UBattlePassScreenS26_OnUpdateBattlePassRequiredBar_Params Parms{};

	Parms.bPassRequiredVisible = bPassRequiredVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnTransitionItemDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bTransitionForward                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnTransitionItemDetails(bool bTransitionForward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnTransitionItemDetails");

	Params::UBattlePassScreenS26_OnTransitionItemDetails_Params Parms{};

	Parms.bTransitionForward = bTransitionForward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetWeeklyRewardsInfo
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTimespan                   DelayTimespan                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AvailableRewards                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AvailablePages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CompletedPages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPages                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetWeeklyRewardsInfo(struct FTimespan& DelayTimespan, int32 AvailableRewards, int32 OwnedRewards, int32 TotalRewards, int32 AvailablePages, int32 CompletedPages, int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetWeeklyRewardsInfo");

	Params::UBattlePassScreenS26_OnSetWeeklyRewardsInfo_Params Parms{};

	Parms.DelayTimespan = DelayTimespan;
	Parms.AvailableRewards = AvailableRewards;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.AvailablePages = AvailablePages;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetResourcePrice
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPersistentResourceItemDefinition*PersistentResource                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetResourcePrice(int32 Cost, class UFortPersistentResourceItemDefinition* PersistentResource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetResourcePrice");

	Params::UBattlePassScreenS26_OnSetResourcePrice_Params Parms{};

	Parms.Cost = Cost;
	Parms.PersistentResource = PersistentResource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetQuestRewardsInfo
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTimespan                   DelayTimespan                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CompletedPages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPages                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetQuestRewardsInfo(struct FTimespan& DelayTimespan, int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetQuestRewardsInfo");

	Params::UBattlePassScreenS26_OnSetQuestRewardsInfo_Params Parms{};

	Parms.DelayTimespan = DelayTimespan;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetPrerequisiteInfo
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              CurrentAmount                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NeededAmount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBattlePassRewardPrerequisiteTypePrerequisiteType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowPrerequisiteLock                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetPrerequisiteInfo(class FText& Description, int32 CurrentAmount, int32 NeededAmount, enum class EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetPrerequisiteInfo");

	Params::UBattlePassScreenS26_OnSetPrerequisiteInfo_Params Parms{};

	Parms.Description = Description;
	Parms.CurrentAmount = CurrentAmount;
	Parms.NeededAmount = NeededAmount;
	Parms.PrerequisiteType = PrerequisiteType;
	Parms.bShowPrerequisiteLock = bShowPrerequisiteLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetItemPrice
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Cost                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBattlePassCurrencyType CurrencyType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetItemPrice(int32 Cost, enum class EBattlePassCurrencyType CurrencyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetItemPrice");

	Params::UBattlePassScreenS26_OnSetItemPrice_Params Parms{};

	Parms.Cost = Cost;
	Parms.CurrencyType = CurrencyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetCrewInfo
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// bool                               bIsNextMonthRewards                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        MonthText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTimespan                   NextMonthlyRewardTimespan                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CharacterDisplayName                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        CharacterDescription                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetCrewInfo(bool bIsNextMonthRewards, class FText& MonthText, struct FTimespan& NextMonthlyRewardTimespan, class FText& CharacterDisplayName, class FText& CharacterDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetCrewInfo");

	Params::UBattlePassScreenS26_OnSetCrewInfo_Params Parms{};

	Parms.bIsNextMonthRewards = bIsNextMonthRewards;
	Parms.MonthText = MonthText;
	Parms.NextMonthlyRewardTimespan = NextMonthlyRewardTimespan;
	Parms.CharacterDisplayName = CharacterDisplayName;
	Parms.CharacterDescription = CharacterDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetCoverPageData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Description                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bPageComplete                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetCoverPageData(class FText& Title, class FText& Description, bool bPageComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetCoverPageData");

	Params::UBattlePassScreenS26_OnSetCoverPageData_Params Parms{};

	Parms.Title = Title;
	Parms.Description = Description;
	Parms.bPageComplete = bPageComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetBonusRewardsInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsUnlocked                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CompletedPages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPages                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ClaimedOutfits                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalOutfits                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetBonusRewardsInfo(bool bIsUnlocked, int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages, int32 ClaimedOutfits, int32 TotalOutfits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetBonusRewardsInfo");

	Params::UBattlePassScreenS26_OnSetBonusRewardsInfo_Params Parms{};

	Parms.bIsUnlocked = bIsUnlocked;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;
	Parms.ClaimedOutfits = ClaimedOutfits;
	Parms.TotalOutfits = TotalOutfits;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnSetBaseRewardsInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              OwnedRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CompletedPages                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPages                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnSetBaseRewardsInfo(int32 OwnedRewards, int32 TotalRewards, int32 CompletedPages, int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnSetBaseRewardsInfo");

	Params::UBattlePassScreenS26_OnSetBaseRewardsInfo_Params Parms{};

	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnItemDelayed
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTimespan                   Delay                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnItemDelayed(const struct FTimespan& Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnItemDelayed");

	Params::UBattlePassScreenS26_OnItemDelayed_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnInsufficientResource
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPersistentResourceItemDefinition*PersistentResource                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnInsufficientResource(class UFortPersistentResourceItemDefinition* PersistentResource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnInsufficientResource");

	Params::UBattlePassScreenS26_OnInsufficientResource_Params Parms{};

	Parms.PersistentResource = PersistentResource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnInsufficientFunds
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassCurrencyType CurrencyType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnInsufficientFunds(enum class EBattlePassCurrencyType CurrencyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnInsufficientFunds");

	Params::UBattlePassScreenS26_OnInsufficientFunds_Params Parms{};

	Parms.CurrencyType = CurrencyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnBattlePassOwned
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenS26::OnBattlePassOwned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnBattlePassOwned");

	Params::UBattlePassScreenS26_OnBattlePassOwned_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.OnBattlePassGiftingAllowed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bGiftingAllowed                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::OnBattlePassGiftingAllowed(bool bGiftingAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "OnBattlePassGiftingAllowed");

	Params::UBattlePassScreenS26_OnBattlePassGiftingAllowed_Params Parms{};

	Parms.bGiftingAllowed = bGiftingAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.BattlePassScreenS26.IsSeasonalCustomizationItemOwned
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBattlePassScreenS26::IsSeasonalCustomizationItemOwned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "IsSeasonalCustomizationItemOwned");

	Params::UBattlePassScreenS26_IsSeasonalCustomizationItemOwned_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassS26UI.BattlePassScreenS26.HandleSwitcherVisibilityShown
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBattlePassScreenS26::HandleSwitcherVisibilityShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "HandleSwitcherVisibilityShown");

	Params::UBattlePassScreenS26_HandleSwitcherVisibilityShown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS26UI.BattlePassScreenS26.HandleFullScreenMapToggled
// (Final, Native, Private)
// Parameters:
// bool                               bMapVisible                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::HandleFullScreenMapToggled(bool bMapVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "HandleFullScreenMapToggled");

	Params::UBattlePassScreenS26_HandleFullScreenMapToggled_Params Parms{};

	Parms.bMapVisible = bMapVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS26UI.BattlePassScreenS26.HandleClaimRewardComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OfferTemplateIdList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassScreenS26::HandleClaimRewardComplete(bool bSuccess, TArray<class FString>& OfferTemplateIdList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "HandleClaimRewardComplete");

	Params::UBattlePassScreenS26_HandleClaimRewardComplete_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.OfferTemplateIdList = OfferTemplateIdList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS26UI.BattlePassScreenS26.GoBackOneScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBattlePassScreenS26::GoBackOneScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "GoBackOneScreen");

	Params::UBattlePassScreenS26_GoBackOneScreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS26UI.BattlePassScreenS26.GetQuestPageDelay
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimespan UBattlePassScreenS26::GetQuestPageDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenS26", "GetQuestPageDelay");

	Params::UBattlePassScreenS26_GetQuestPageDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BattlePassS26UI.FortBattlePassCustomSkinPageS26
// (None)

class UClass* UFortBattlePassCustomSkinPageS26::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassCustomSkinPageS26");

	return Clss;
}


// FortBattlePassCustomSkinPageS26 BattlePassS26UI.Default__FortBattlePassCustomSkinPageS26
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassCustomSkinPageS26* UFortBattlePassCustomSkinPageS26::GetDefaultObj()
{
	static class UFortBattlePassCustomSkinPageS26* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassCustomSkinPageS26*>(UFortBattlePassCustomSkinPageS26::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassS26UI.FortBattlePassResourcesWidgetS26
// (None)

class UClass* UFortBattlePassResourcesWidgetS26::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassResourcesWidgetS26");

	return Clss;
}


// FortBattlePassResourcesWidgetS26 BattlePassS26UI.Default__FortBattlePassResourcesWidgetS26
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassResourcesWidgetS26* UFortBattlePassResourcesWidgetS26::GetDefaultObj()
{
	static class UFortBattlePassResourcesWidgetS26* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassResourcesWidgetS26*>(UFortBattlePassResourcesWidgetS26::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS26UI.FortBattlePassResourcesWidgetS26.OnStylePointsRewardsSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Rewards                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassResourcesWidgetS26::OnStylePointsRewardsSet(int32 Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetS26", "OnStylePointsRewardsSet");

	Params::UFortBattlePassResourcesWidgetS26_OnStylePointsRewardsSet_Params Parms{};

	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.FortBattlePassResourcesWidgetS26.OnBattleStarRewardsSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Rewards                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassResourcesWidgetS26::OnBattleStarRewardsSet(int32 Rewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetS26", "OnBattleStarRewardsSet");

	Params::UFortBattlePassResourcesWidgetS26_OnBattleStarRewardsSet_Params Parms{};

	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassS26UI.FortBattlePassTutorialTooltipS26
// (None)

class UClass* UFortBattlePassTutorialTooltipS26::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassTutorialTooltipS26");

	return Clss;
}


// FortBattlePassTutorialTooltipS26 BattlePassS26UI.Default__FortBattlePassTutorialTooltipS26
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassTutorialTooltipS26* UFortBattlePassTutorialTooltipS26::GetDefaultObj()
{
	static class UFortBattlePassTutorialTooltipS26* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassTutorialTooltipS26*>(UFortBattlePassTutorialTooltipS26::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassS26UI.FortBattlePassTutorialTooltipS26.ShowTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltipS26::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS26", "ShowTooltip");

	Params::UFortBattlePassTutorialTooltipS26_ShowTooltip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassS26UI.FortBattlePassTutorialTooltipS26.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UFortBattlePassTutorialTooltipS26::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS26", "SetText");

	Params::UFortBattlePassTutorialTooltipS26_SetText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassS26UI.FortBattlePassTutorialTooltipS26.HideTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltipS26::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS26", "HideTooltip");

	Params::UFortBattlePassTutorialTooltipS26_HideTooltip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


