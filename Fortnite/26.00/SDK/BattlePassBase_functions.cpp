#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BattlePassBase.BattlePassSubPageInterface
// (None)

class UClass* UBattlePassSubPageInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassSubPageInterface");

	return Clss;
}


// BattlePassSubPageInterface BattlePassBase.Default__BattlePassSubPageInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassSubPageInterface* UBattlePassSubPageInterface::GetDefaultObj()
{
	static class UBattlePassSubPageInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassSubPageInterface*>(UBattlePassSubPageInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.BattlePassSubPageInterface.OnEnterSubPage
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassSubPageInterface::OnEnterSubPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassSubPageInterface", "OnEnterSubPage");

	Params::UBattlePassSubPageInterface_OnEnterSubPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassBase.BattlePassLandingPageBase
// (None)

class UClass* UBattlePassLandingPageBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassLandingPageBase");

	return Clss;
}


// BattlePassLandingPageBase BattlePassBase.Default__BattlePassLandingPageBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassLandingPageBase* UBattlePassLandingPageBase::GetDefaultObj()
{
	static class UBattlePassLandingPageBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassLandingPageBase*>(UBattlePassLandingPageBase::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassBase.BattlePassLandingPageButton
// (None)

class UClass* UBattlePassLandingPageButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassLandingPageButton");

	return Clss;
}


// BattlePassLandingPageButton BattlePassBase.Default__BattlePassLandingPageButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassLandingPageButton* UBattlePassLandingPageButton::GetDefaultObj()
{
	static class UBattlePassLandingPageButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassLandingPageButton*>(UBattlePassLandingPageButton::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageButton::OnSubscriptionTextureLoaded(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnSubscriptionTextureLoaded");

	Params::UBattlePassLandingPageButton_OnSubscriptionTextureLoaded_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bOwnsSubsciption                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageButton::OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnSubscriptionOwnershipUpdated");

	Params::UBattlePassLandingPageButton_OnSubscriptionOwnershipUpdated_Params Parms{};

	Parms.bOwnsSubsciption = bOwnsSubsciption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnShowDisplayDetails
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassLandingPageButton::OnShowDisplayDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnShowDisplayDetails");

	Params::UBattlePassLandingPageButton_OnShowDisplayDetails_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnSetTileImageMaterial
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBattlePassLandingPageButton::OnSetTileImageMaterial(class UMaterialInstance* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnSetTileImageMaterial");

	Params::UBattlePassLandingPageButton_OnSetTileImageMaterial_Params Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FBattlePassLandingPageButtonDisplayDetailsNewDisplayDetails                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBattlePassLandingPageButton::OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnDisplayDetailsUpdated");

	Params::UBattlePassLandingPageButton_OnDisplayDetailsUpdated_Params Parms{};

	Parms.NewDisplayDetails = NewDisplayDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBattlePassLandingPageButtonDisplayDetailsReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FBattlePassLandingPageButtonDisplayDetails UBattlePassLandingPageButton::GetBattlePassDisplayDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassLandingPageButton", "GetBattlePassDisplayDetails");

	Params::UBattlePassLandingPageButton_GetBattlePassDisplayDetails_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BattlePassBase.BattlePassRewardPageBase
// (None)

class UClass* UBattlePassRewardPageBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassRewardPageBase");

	return Clss;
}


// BattlePassRewardPageBase BattlePassBase.Default__BattlePassRewardPageBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassRewardPageBase* UBattlePassRewardPageBase::GetDefaultObj()
{
	static class UBattlePassRewardPageBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassRewardPageBase*>(UBattlePassRewardPageBase::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassBase.BattlePassUIGameFeatureAction
// (None)

class UClass* UBattlePassUIGameFeatureAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassUIGameFeatureAction");

	return Clss;
}


// BattlePassUIGameFeatureAction BattlePassBase.Default__BattlePassUIGameFeatureAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UBattlePassUIGameFeatureAction* UBattlePassUIGameFeatureAction::GetDefaultObj()
{
	static class UBattlePassUIGameFeatureAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassUIGameFeatureAction*>(UBattlePassUIGameFeatureAction::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
// (None)

class UClass* UFortBattlePassCustomSkinCategoryTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassCustomSkinCategoryTile");

	return Clss;
}


// FortBattlePassCustomSkinCategoryTile BattlePassBase.Default__FortBattlePassCustomSkinCategoryTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassCustomSkinCategoryTile* UFortBattlePassCustomSkinCategoryTile::GetDefaultObj()
{
	static class UFortBattlePassCustomSkinCategoryTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassCustomSkinCategoryTile*>(UFortBattlePassCustomSkinCategoryTile::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCustomSkinCategoryTile::SetPreviewedTile(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "SetPreviewedTile");

	Params::UFortBattlePassCustomSkinCategoryTile_SetPreviewedTile_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentlyOwnedRewards                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalRewards                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CategoryProgress                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCustomSkinCategoryTile::OnOwnedTilesUpdated(int32 CurrentlyOwnedRewards, int32 TotalRewards, float CategoryProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnOwnedTilesUpdated");

	Params::UFortBattlePassCustomSkinCategoryTile_OnOwnedTilesUpdated_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnLockedStateChanged");

	Params::UFortBattlePassCustomSkinCategoryTile_OnLockedStateChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnLockedProgressUpdated");

	Params::UFortBattlePassCustomSkinCategoryTile_OnLockedProgressUpdated_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "FocusTile");

	Params::UFortBattlePassCustomSkinCategoryTile_FocusTile_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class BattlePassBase.FortBattlePassCustomSkinPageBase
// (None)

class UClass* UFortBattlePassCustomSkinPageBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassCustomSkinPageBase");

	return Clss;
}


// FortBattlePassCustomSkinPageBase BattlePassBase.Default__FortBattlePassCustomSkinPageBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassCustomSkinPageBase* UFortBattlePassCustomSkinPageBase::GetDefaultObj()
{
	static class UFortBattlePassCustomSkinPageBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassCustomSkinPageBase*>(UFortBattlePassCustomSkinPageBase::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassBase.FortBattlePassBulkBuyPageBase
// (None)

class UClass* UFortBattlePassBulkBuyPageBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassBulkBuyPageBase");

	return Clss;
}


// FortBattlePassBulkBuyPageBase BattlePassBase.Default__FortBattlePassBulkBuyPageBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassBulkBuyPageBase* UFortBattlePassBulkBuyPageBase::GetDefaultObj()
{
	static class UFortBattlePassBulkBuyPageBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassBulkBuyPageBase*>(UFortBattlePassBulkBuyPageBase::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassBulkBuyPageBase::OnRewardCountChanged(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnRewardCountChanged");

	Params::UFortBattlePassBulkBuyPageBase_OnRewardCountChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnPageRangeChanged");

	Params::UFortBattlePassBulkBuyPageBase_OnPageRangeChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnCostChanged");

	Params::UFortBattlePassBulkBuyPageBase_OnCostChanged_Params Parms{};

	Parms.Cost = Cost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled
// (Final, Native, Protected)
// Parameters:
// float                              ScrollAmount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassBulkBuyPageBase::HandleUserScrolled(float ScrollAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "HandleUserScrolled");

	Params::UFortBattlePassBulkBuyPageBase_HandleUserScrolled_Params Parms{};

	Parms.ScrollAmount = ScrollAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class BattlePassBase.FortBattlePassCheckBoxButton
// (None)

class UClass* UFortBattlePassCheckBoxButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassCheckBoxButton");

	return Clss;
}


// FortBattlePassCheckBoxButton BattlePassBase.Default__FortBattlePassCheckBoxButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassCheckBoxButton* UFortBattlePassCheckBoxButton::GetDefaultObj()
{
	static class UFortBattlePassCheckBoxButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassCheckBoxButton*>(UFortBattlePassCheckBoxButton::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassCheckBoxButton.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewIsChecked                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassCheckBoxButton::OnStateChanged(bool bNewIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassCheckBoxButton", "OnStateChanged");

	Params::UFortBattlePassCheckBoxButton_OnStateChanged_Params Parms{};

	Parms.bNewIsChecked = bNewIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassBase.FortBattlePassContext
// (None)

class UClass* UFortBattlePassContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassContext");

	return Clss;
}


// FortBattlePassContext BattlePassBase.Default__FortBattlePassContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassContext* UFortBattlePassContext::GetDefaultObj()
{
	static class UFortBattlePassContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassContext*>(UFortBattlePassContext::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSeasonCurrencyMcpData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSeasonCurrencyMcpData> UFortBattlePassContext::GetSeasonalCurrencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassContext", "GetSeasonalCurrencies");

	Params::UFortBattlePassContext_GetSeasonalCurrencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortBattlePassContext::GetLevelPurchaseDisclaimerText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassContext", "GetLevelPurchaseDisclaimerText");

	Params::UFortBattlePassContext_GetLevelPurchaseDisclaimerText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortBattlePassContext::GetDefaultDisclaimerText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassContext", "GetDefaultDisclaimerText");

	Params::UFortBattlePassContext_GetDefaultDisclaimerText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bFullText                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortBattlePassContext::GetCurrentSeasonNumberAsText(bool bFullText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassContext", "GetCurrentSeasonNumberAsText");

	Params::UFortBattlePassContext_GetCurrentSeasonNumberAsText_Params Parms{};

	Parms.bFullText = bFullText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bFullText                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortBattlePassContext::GetCurrentChapterAsText(bool bFullText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassContext", "GetCurrentChapterAsText");

	Params::UFortBattlePassContext_GetCurrentChapterAsText_Params Parms{};

	Parms.bFullText = bFullText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassContext::CanPurchaseBattlePassLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassContext", "CanPurchaseBattlePassLevel");

	Params::UFortBattlePassContext_CanPurchaseBattlePassLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BattlePassBase.FortBattlePassResourcesWidgetBase
// (None)

class UClass* UFortBattlePassResourcesWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassResourcesWidgetBase");

	return Clss;
}


// FortBattlePassResourcesWidgetBase BattlePassBase.Default__FortBattlePassResourcesWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassResourcesWidgetBase* UFortBattlePassResourcesWidgetBase::GetDefaultObj()
{
	static class UFortBattlePassResourcesWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassResourcesWidgetBase*>(UFortBattlePassResourcesWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassResourcesWidgetBase.ShowResourcesInfoModal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortBattlePassResourcesWidgetBase::ShowResourcesInfoModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetBase", "ShowResourcesInfoModal");

	Params::UFortBattlePassResourcesWidgetBase_ShowResourcesInfoModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassBase.FortBattlePassResourcesWidgetBase.OnShowMoreInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldShowMoreInfo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassResourcesWidgetBase::OnShowMoreInfo(bool bShouldShowMoreInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetBase", "OnShowMoreInfo");

	Params::UFortBattlePassResourcesWidgetBase_OnShowMoreInfo_Params Parms{};

	Parms.bShouldShowMoreInfo = bShouldShowMoreInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassBase.FortBattlePassCurrencyPanel
// (None)

class UClass* UFortBattlePassCurrencyPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassCurrencyPanel");

	return Clss;
}


// FortBattlePassCurrencyPanel BattlePassBase.Default__FortBattlePassCurrencyPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassCurrencyPanel* UFortBattlePassCurrencyPanel::GetDefaultObj()
{
	static class UFortBattlePassCurrencyPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassCurrencyPanel*>(UFortBattlePassCurrencyPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassBase.FortBattlePassDynamicIcon
// (None)

class UClass* UFortBattlePassDynamicIcon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassDynamicIcon");

	return Clss;
}


// FortBattlePassDynamicIcon BattlePassBase.Default__FortBattlePassDynamicIcon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassDynamicIcon* UFortBattlePassDynamicIcon::GetDefaultObj()
{
	static class UFortBattlePassDynamicIcon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassDynamicIcon*>(UFortBattlePassDynamicIcon::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassDynamicIcon.OnBattlePassInfoUpdated
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                               bOwnsBattlePass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassDynamicIcon::OnBattlePassInfoUpdated(bool bOwnsBattlePass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassDynamicIcon", "OnBattlePassInfoUpdated");

	Params::UFortBattlePassDynamicIcon_OnBattlePassInfoUpdated_Params Parms{};

	Parms.bOwnsBattlePass = bOwnsBattlePass;

	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassBase.FortBattlePassLevelCount
// (None)

class UClass* UFortBattlePassLevelCount::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassLevelCount");

	return Clss;
}


// FortBattlePassLevelCount BattlePassBase.Default__FortBattlePassLevelCount
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassLevelCount* UFortBattlePassLevelCount::GetDefaultObj()
{
	static class UFortBattlePassLevelCount* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassLevelCount*>(UFortBattlePassLevelCount::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassBase.FortBattlePassPrerequisiteHeader
// (None)

class UClass* UFortBattlePassPrerequisiteHeader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassPrerequisiteHeader");

	return Clss;
}


// FortBattlePassPrerequisiteHeader BattlePassBase.Default__FortBattlePassPrerequisiteHeader
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassPrerequisiteHeader* UFortBattlePassPrerequisiteHeader::GetDefaultObj()
{
	static class UFortBattlePassPrerequisiteHeader* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassPrerequisiteHeader*>(UFortBattlePassPrerequisiteHeader::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
// (None)

class UClass* UFortBattlePassPurchaseResourcesWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassPurchaseResourcesWidget");

	return Clss;
}


// FortBattlePassPurchaseResourcesWidget BattlePassBase.Default__FortBattlePassPurchaseResourcesWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassPurchaseResourcesWidget* UFortBattlePassPurchaseResourcesWidget::GetDefaultObj()
{
	static class UFortBattlePassPurchaseResourcesWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassPurchaseResourcesWidget*>(UFortBattlePassPurchaseResourcesWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnUpdatePageUnlockText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PageUnlockText                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBattlePassPurchaseResourcesWidget::OnUpdatePageUnlockText(class FText& PageUnlockText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnUpdatePageUnlockText");

	Params::UFortBattlePassPurchaseResourcesWidget_OnUpdatePageUnlockText_Params Parms{};

	Parms.PageUnlockText = PageUnlockText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewPrice                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassPurchaseResourcesWidget::OnTotalPriceChanged(int32 NewPrice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnTotalPriceChanged");

	Params::UFortBattlePassPurchaseResourcesWidget_OnTotalPriceChanged_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnPurchaseAmountChanged");

	Params::UFortBattlePassPurchaseResourcesWidget_OnPurchaseAmountChanged_Params Parms{};

	Parms.NewAmount = NewAmount;
	Parms.LevelsLeft = LevelsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassPurchaseResourcesWidget::OnOfferUnavailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnOfferUnavailable");

	Params::UFortBattlePassPurchaseResourcesWidget_OnOfferUnavailable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassPurchaseResourcesWidget::OnAmountChangeButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnAmountChangeButtonClicked");

	Params::UFortBattlePassPurchaseResourcesWidget_OnAmountChangeButtonClicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassPurchaseResourcesWidget::IsReloadMtxEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "IsReloadMtxEnabled");

	Params::UFortBattlePassPurchaseResourcesWidget_IsReloadMtxEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "HandlePurchaseMultiComplete");

	Params::UFortBattlePassPurchaseResourcesWidget_HandlePurchaseMultiComplete_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;
	Parms.OfferIdList = OfferIdList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete
// (Final, Native, Private, HasOutParams)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPurchasedItemInfo>  PurchasedItems                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      OfferId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassPurchaseResourcesWidget::HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "HandlePurchaseComplete");

	Params::UFortBattlePassPurchaseResourcesWidget_HandlePurchaseComplete_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = PurchasedItems;
	Parms.OfferId = OfferId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class BattlePassBase.FortBattlePassResourceCounter
// (None)

class UClass* UFortBattlePassResourceCounter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassResourceCounter");

	return Clss;
}


// FortBattlePassResourceCounter BattlePassBase.Default__FortBattlePassResourceCounter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassResourceCounter* UFortBattlePassResourceCounter::GetDefaultObj()
{
	static class UFortBattlePassResourceCounter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassResourceCounter*>(UFortBattlePassResourceCounter::StaticClass()->DefaultObject);

	return Default;
}


// Class BattlePassBase.FortBattlePassRewardGrid
// (None)

class UClass* UFortBattlePassRewardGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassRewardGrid");

	return Clss;
}


// FortBattlePassRewardGrid BattlePassBase.Default__FortBattlePassRewardGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassRewardGrid* UFortBattlePassRewardGrid::GetDefaultObj()
{
	static class UFortBattlePassRewardGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassRewardGrid*>(UFortBattlePassRewardGrid::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassRewardGrid::OnPageUnselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGrid", "OnPageUnselected");

	Params::UFortBattlePassRewardGrid_OnPageUnselected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGrid.OnPageSelected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassRewardGrid::OnPageSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGrid", "OnPageSelected");

	Params::UFortBattlePassRewardGrid_OnPageSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassBase.FortBattlePassRewardGridHeader
// (None)

class UClass* UFortBattlePassRewardGridHeader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassRewardGridHeader");

	return Clss;
}


// FortBattlePassRewardGridHeader BattlePassBase.Default__FortBattlePassRewardGridHeader
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassRewardGridHeader* UFortBattlePassRewardGridHeader::GetDefaultObj()
{
	static class UFortBattlePassRewardGridHeader* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassRewardGridHeader*>(UFortBattlePassRewardGridHeader::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ERewardPageType         PageType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassRewardGridHeader::OnSetPageType(enum class ERewardPageType PageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnSetPageType");

	Params::UFortBattlePassRewardGridHeader_OnSetPageType_Params Parms{};

	Parms.PageType = PageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageCustomName
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CustomName                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortBattlePassRewardGridHeader::OnSetPageCustomName(class FText& CustomName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnSetPageCustomName");

	Params::UFortBattlePassRewardGridHeader_OnSetPageCustomName_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageUnlocked");

	Params::UFortBattlePassRewardGridHeader_OnPageUnlocked_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageNumberSet");

	Params::UFortBattlePassRewardGridHeader_OnPageNumberSet_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageLocked");

	Params::UFortBattlePassRewardGridHeader_OnPageLocked_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnBattlePassLevelSet");

	Params::UFortBattlePassRewardGridHeader_OnBattlePassLevelSet_Params Parms{};

	Parms.BattlePassLevel = BattlePassLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortBattlePassRewardGridHeader::GetPageNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "GetPageNumber");

	Params::UFortBattlePassRewardGridHeader_GetPageNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BattlePassBase.FortBattlePassRewardTrack
// (None)

class UClass* UFortBattlePassRewardTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassRewardTrack");

	return Clss;
}


// FortBattlePassRewardTrack BattlePassBase.Default__FortBattlePassRewardTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassRewardTrack* UFortBattlePassRewardTrack::GetDefaultObj()
{
	static class UFortBattlePassRewardTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassRewardTrack*>(UFortBattlePassRewardTrack::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassRewardTrack.OnPageUnselected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassRewardTrack::OnPageUnselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardTrack", "OnPageUnselected");

	Params::UFortBattlePassRewardTrack_OnPageUnselected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassRewardTrack.OnPageSelected
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassRewardTrack::OnPageSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassRewardTrack", "OnPageSelected");

	Params::UFortBattlePassRewardTrack_OnPageSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassBase.FortBattlePassTileBase
// (None)

class UClass* UFortBattlePassTileBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassTileBase");

	return Clss;
}


// FortBattlePassTileBase BattlePassBase.Default__FortBattlePassTileBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassTileBase* UFortBattlePassTileBase::GetDefaultObj()
{
	static class UFortBattlePassTileBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassTileBase*>(UFortBattlePassTileBase::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassTileBase.SetState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EBattlePassTileAvailabilityStatesNewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::SetState(enum class EBattlePassTileAvailabilityStates NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "SetState");

	Params::UFortBattlePassTileBase_SetState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassBase.FortBattlePassTileBase.SetSize
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EPageItemTileSize       TileSize                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   CellSpacing                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::SetSize(enum class EPageItemTileSize TileSize, struct FVector2D& CellSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "SetSize");

	Params::UFortBattlePassTileBase_SetSize_Params Parms{};

	Parms.TileSize = TileSize;
	Parms.CellSpacing = CellSpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassBase.FortBattlePassTileBase.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassTileAvailabilityStatesNewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::OnStateChanged(enum class EBattlePassTileAvailabilityStates NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnStateChanged");

	Params::UFortBattlePassTileBase_OnStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnSizeChanged
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewSize                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::OnSizeChanged(struct FVector2D& NewSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnSizeChanged");

	Params::UFortBattlePassTileBase_OnSizeChanged_Params Parms{};

	Parms.NewSize = NewSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnSetTileColors
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTileBase::OnSetTileColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnSetTileColors");

	Params::UFortBattlePassTileBase_OnSetTileColors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bRequiresBP                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTileBase::OnSetRequiresBattlePass(bool bRequiresBP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnSetRequiresBattlePass");

	Params::UFortBattlePassTileBase_OnSetRequiresBattlePass_Params Parms{};

	Parms.bRequiresBP = bRequiresBP;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnRevealed
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassTileBase::OnRevealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnRevealed");

	Params::UFortBattlePassTileBase_OnRevealed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.OnPeeked
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassTileBase::OnPeeked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnPeeked");

	Params::UFortBattlePassTileBase_OnPeeked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTileBase.IsOwned
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTileBase::IsOwned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "IsOwned");

	Params::UFortBattlePassTileBase_IsOwned_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTileBase.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTileBase::IsLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "IsLocked");

	Params::UFortBattlePassTileBase_IsLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTileBase.IsAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTileBase::IsAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "IsAvailable");

	Params::UFortBattlePassTileBase_IsAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTileBase.GetState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EBattlePassTileAvailabilityStatesReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EBattlePassTileAvailabilityStates UFortBattlePassTileBase::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "GetState");

	Params::UFortBattlePassTileBase_GetState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTileBase.AreAnyGrantedItemsEquipped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTileBase::AreAnyGrantedItemsEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTileBase", "AreAnyGrantedItemsEquipped");

	Params::UFortBattlePassTileBase_AreAnyGrantedItemsEquipped_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BattlePassBase.FortBattlePassTile
// (None)

class UClass* UFortBattlePassTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassTile");

	return Clss;
}


// FortBattlePassTile BattlePassBase.Default__FortBattlePassTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassTile* UFortBattlePassTile::GetDefaultObj()
{
	static class UFortBattlePassTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassTile*>(UFortBattlePassTile::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassTile.OnUnpreviewed
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnUnpreviewed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnUnpreviewed");

	Params::UFortBattlePassTile_OnUnpreviewed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnUnhighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnUnhighlighted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnUnhighlighted");

	Params::UFortBattlePassTile_OnUnhighlighted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnTilePreviewCycled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnTilePreviewCycled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnTilePreviewCycled");

	Params::UFortBattlePassTile_OnTilePreviewCycled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnSetTrack
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsFreeTrack                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOwnsBattlePass                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTile::OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnSetTrack");

	Params::UFortBattlePassTile_OnSetTrack_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnSetCurrencyAndPrice");

	Params::UFortBattlePassTile_OnSetCurrencyAndPrice_Params Parms{};

	Parms.Currency = Currency;
	Parms.Price = Price;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnPreviewed
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBattlePassTile::OnPreviewed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnPreviewed");

	Params::UFortBattlePassTile_OnPreviewed_Params Parms{};


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnLockedStateUpdated");

	Params::UFortBattlePassTile_OnLockedStateUpdated_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnLockedProgressUpdated");

	Params::UFortBattlePassTile_OnLockedProgressUpdated_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnHighlighted");

	Params::UFortBattlePassTile_OnHighlighted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.OnAffordabilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasEnougCurrency                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTile::OnAffordabilityChanged(bool bHasEnougCurrency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "OnAffordabilityChanged");

	Params::UFortBattlePassTile_OnAffordabilityChanged_Params Parms{};

	Parms.bHasEnougCurrency = bHasEnougCurrency;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTile.IsAffordable
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTile::IsAffordable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "IsAffordable");

	Params::UFortBattlePassTile_IsAffordable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function BattlePassBase.FortBattlePassTile.HasPrerequisites
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBattlePassTile::HasPrerequisites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTile", "HasPrerequisites");

	Params::UFortBattlePassTile_HasPrerequisites_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BattlePassBase.FortBattlePassTutorialTooltip
// (None)

class UClass* UFortBattlePassTutorialTooltip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBattlePassTutorialTooltip");

	return Clss;
}


// FortBattlePassTutorialTooltip BattlePassBase.Default__FortBattlePassTutorialTooltip
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBattlePassTutorialTooltip* UFortBattlePassTutorialTooltip::GetDefaultObj()
{
	static class UFortBattlePassTutorialTooltip* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBattlePassTutorialTooltip*>(UFortBattlePassTutorialTooltip::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltip::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltip", "ShowTooltip");

	Params::UFortBattlePassTutorialTooltip_ShowTooltip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBattlePassTutorialTooltip::SetTooltipEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltip", "SetTooltipEnabled");

	Params::UFortBattlePassTutorialTooltip_SetTooltipEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassBase.FortBattlePassTutorialTooltip.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)

void UFortBattlePassTutorialTooltip::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltip", "SetText");

	Params::UFortBattlePassTutorialTooltip_SetText_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortBattlePassTutorialTooltip::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBattlePassTutorialTooltip", "HideTooltip");

	Params::UFortBattlePassTutorialTooltip_HideTooltip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class BattlePassBase.RebootRallyQuestPanel
// (None)

class UClass* URebootRallyQuestPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RebootRallyQuestPanel");

	return Clss;
}


// RebootRallyQuestPanel BattlePassBase.Default__RebootRallyQuestPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class URebootRallyQuestPanel* URebootRallyQuestPanel::GetDefaultObj()
{
	static class URebootRallyQuestPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<URebootRallyQuestPanel*>(URebootRallyQuestPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassBase.RebootRallyQuestPanel.OnRebootRallyEligibilityUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEligible                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URebootRallyQuestPanel::OnRebootRallyEligibilityUpdated(bool bEligible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RebootRallyQuestPanel", "OnRebootRallyEligibilityUpdated");

	Params::URebootRallyQuestPanel_OnRebootRallyEligibilityUpdated_Params Parms{};

	Parms.bEligible = bEligible;

	UObject::ProcessEvent(Func, &Parms);

}

}


