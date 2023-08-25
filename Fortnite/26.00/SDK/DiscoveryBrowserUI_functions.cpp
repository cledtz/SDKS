#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DiscoveryBrowserUI.FortActivityBrowserTabButton
// (None)

class UClass* UFortActivityBrowserTabButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserTabButton");

	return Clss;
}


// FortActivityBrowserTabButton DiscoveryBrowserUI.Default__FortActivityBrowserTabButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserTabButton* UFortActivityBrowserTabButton::GetDefaultObj()
{
	static class UFortActivityBrowserTabButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserTabButton*>(UFortActivityBrowserTabButton::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserTabButton.OnFavoriteChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFavorite                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserTabButton::OnFavoriteChanged(bool bIsFavorite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserTabButton", "OnFavoriteChanged");

	Params::UFortActivityBrowserTabButton_OnFavoriteChanged_Params Parms{};

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityBrowser
// (None)

class UClass* UFortActivityBrowser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowser");

	return Clss;
}


// FortActivityBrowser DiscoveryBrowserUI.Default__FortActivityBrowser
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowser* UFortActivityBrowser::GetDefaultObj()
{
	static class UFortActivityBrowser* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowser*>(UFortActivityBrowser::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsUsingAlternateColorScheme                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::OnSwapColorScheme(bool bInIsUsingAlternateColorScheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowser", "OnSwapColorScheme");

	Params::UFortActivityBrowser_OnSwapColorScheme_Params Parms{};

	Parms.bInIsUsingAlternateColorScheme = bInIsUsingAlternateColorScheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPlayerQueueType        PlayerQueueType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::OnPlayerQueueTypeChanged(enum class EPlayerQueueType PlayerQueueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowser", "OnPlayerQueueTypeChanged");

	Params::UFortActivityBrowser_OnPlayerQueueTypeChanged_Params Parms{};

	Parms.PlayerQueueType = PlayerQueueType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsColorSchemeActive                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::OnEnableColorScheme(bool bIsColorSchemeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowser", "OnEnableColorScheme");

	Params::UFortActivityBrowser_OnEnableColorScheme_Params Parms{};

	Parms.bIsColorSchemeActive = bIsColorSchemeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowser::OnActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowser", "OnActivitySelected");

	Params::UFortActivityBrowser_OnActivitySelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::HandleTabChanged(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowser", "HandleTabChanged");

	Params::UFortActivityBrowser_HandleTabChanged_Params Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
// (None)

class UClass* UFortActivityBrowserColorSchemeAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserColorSchemeAsset");

	return Clss;
}


// FortActivityBrowserColorSchemeAsset DiscoveryBrowserUI.Default__FortActivityBrowserColorSchemeAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserColorSchemeAsset* UFortActivityBrowserColorSchemeAsset::GetDefaultObj()
{
	static class UFortActivityBrowserColorSchemeAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserColorSchemeAsset*>(UFortActivityBrowserColorSchemeAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityBrowserListView
// (None)

class UClass* UFortActivityBrowserListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserListView");

	return Clss;
}


// FortActivityBrowserListView DiscoveryBrowserUI.Default__FortActivityBrowserListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserListView* UFortActivityBrowserListView::GetDefaultObj()
{
	static class UFortActivityBrowserListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserListView*>(UFortActivityBrowserListView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityBrowserTileBase
// (None)

class UClass* UFortActivityBrowserTileBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserTileBase");

	return Clss;
}


// FortActivityBrowserTileBase DiscoveryBrowserUI.Default__FortActivityBrowserTileBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserTileBase* UFortActivityBrowserTileBase::GetDefaultObj()
{
	static class UFortActivityBrowserTileBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserTileBase*>(UFortActivityBrowserTileBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
// (None)

class UClass* UFortActivityBrowserPlayWithFriendsTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserPlayWithFriendsTile");

	return Clss;
}


// FortActivityBrowserPlayWithFriendsTile DiscoveryBrowserUI.Default__FortActivityBrowserPlayWithFriendsTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserPlayWithFriendsTile* UFortActivityBrowserPlayWithFriendsTile::GetDefaultObj()
{
	static class UFortActivityBrowserPlayWithFriendsTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserPlayWithFriendsTile*>(UFortActivityBrowserPlayWithFriendsTile::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateSingleFriendName
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        SingleFriendName                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateSingleFriendName(class FText& SingleFriendName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateSingleFriendName");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateSingleFriendName_Params Parms{};

	Parms.SingleFriendName = SingleFriendName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateRichPresence
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        RichPresence                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateRichPresence(class FText& RichPresence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateRichPresence");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateRichPresence_Params Parms{};

	Parms.RichPresence = RichPresence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdatePartyMemberNames
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Names                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdatePartyMemberNames(class FText& Names)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdatePartyMemberNames");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames_Params Parms{};

	Parms.Names = Names;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateOtherPlayersSubText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OtherPlayersSubText                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateOtherPlayersSubText(class FText& OtherPlayersSubText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateOtherPlayersSubText");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateOtherPlayersSubText_Params Parms{};

	Parms.OtherPlayersSubText = OtherPlayersSubText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateLastInteraction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LastInteraction                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateLastInteraction(class FText& LastInteraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateLastInteraction");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateLastInteraction_Params Parms{};

	Parms.LastInteraction = LastInteraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateIslandThumbnail
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                    ThumbnailTexture                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateIslandThumbnail(class UTexture* ThumbnailTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateIslandThumbnail");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateIslandThumbnail_Params Parms{};

	Parms.ThumbnailTexture = ThumbnailTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTileActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTileActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::OnTileActiveChanged(bool bIsTileActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTileActiveChanged");

	Params::UFortActivityBrowserPlayWithFriendsTile_OnTileActiveChanged_Params Parms{};

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureLoadingComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                    ThumbnailTexture                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::OnTextureLoadingComplete(class UTexture* ThumbnailTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTextureLoadingComplete");

	Params::UFortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete_Params Parms{};

	Parms.ThumbnailTexture = ThumbnailTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureBeginLoading
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserPlayWithFriendsTile::OnTextureBeginLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTextureBeginLoading");

	Params::UFortActivityBrowserPlayWithFriendsTile_OnTextureBeginLoading_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.HandleCTAButtonClicked
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortActivityBrowserPlayWithFriendsTile::HandleCTAButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "HandleCTAButtonClicked");

	Params::UFortActivityBrowserPlayWithFriendsTile_HandleCTAButtonClicked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetMaxPartySize
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortActivityBrowserPlayWithFriendsTile::GetMaxPartySize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "GetMaxPartySize");

	Params::UFortActivityBrowserPlayWithFriendsTile_GetMaxPartySize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetCTAButtonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortActivityBrowserPlayWithFriendsTile::GetCTAButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "GetCTAButtonText");

	Params::UFortActivityBrowserPlayWithFriendsTile_GetCTAButtonText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.BP_PartyInformationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsTileSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::BP_PartyInformationUpdated(bool bInIsTileSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "BP_PartyInformationUpdated");

	Params::UFortActivityBrowserPlayWithFriendsTile_BP_PartyInformationUpdated_Params Parms{};

	Parms.bInIsTileSelected = bInIsTileSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityBrowserRow
// (None)

class UClass* UFortActivityBrowserRow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserRow");

	return Clss;
}


// FortActivityBrowserRow DiscoveryBrowserUI.Default__FortActivityBrowserRow
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserRow* UFortActivityBrowserRow::GetDefaultObj()
{
	static class UFortActivityBrowserRow* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserRow*>(UFortActivityBrowserRow::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowPeekStateChanged");

	Params::UFortActivityBrowserRow_OnRowPeekStateChanged_Params Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bMovingOffscreen                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowMoveUp(bool bMovingOffscreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowMoveUp");

	Params::UFortActivityBrowserRow_OnRowMoveUp_Params Parms{};

	Parms.bMovingOffscreen = bMovingOffscreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bMovingOffscreen                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowMoveDown(bool bMovingOffscreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowMoveDown");

	Params::UFortActivityBrowserRow_OnRowMoveDown_Params Parms{};

	Parms.bMovingOffscreen = bMovingOffscreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowIsSelectedChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowIsSelectedChanged");

	Params::UFortActivityBrowserRow_OnRowIsSelectedChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowIsActiveChanged(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowIsActiveChanged");

	Params::UFortActivityBrowserRow_OnRowIsActiveChanged_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayAnimation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnCategoryItemChanged(bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnCategoryItemChanged");

	Params::UFortActivityBrowserRow_OnCategoryItemChanged_Params Parms{};

	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRow::GetIsSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "GetIsSelected");

	Params::UFortActivityBrowserRow_GetIsSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRow::GetIsInPeekState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "GetIsInPeekState");

	Params::UFortActivityBrowserRow_GetIsInPeekState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRow::GetIsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRow", "GetIsActive");

	Params::UFortActivityBrowserRow_GetIsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityBrowserRowHero
// (None)

class UClass* UFortActivityBrowserRowHero::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserRowHero");

	return Clss;
}


// FortActivityBrowserRowHero DiscoveryBrowserUI.Default__FortActivityBrowserRowHero
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserRowHero* UFortActivityBrowserRowHero::GetDefaultObj()
{
	static class UFortActivityBrowserRowHero* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserRowHero*>(UFortActivityBrowserRowHero::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnVideoStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnVideoStarted");

	Params::UFortActivityBrowserRowHero_OnVideoStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoEndReached
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnVideoEndReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnVideoEndReached");

	Params::UFortActivityBrowserRowHero_OnVideoEndReached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnUpdateDetailsDisplay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnUpdateDetailsDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnUpdateDetailsDisplay");

	Params::UFortActivityBrowserRowHero_OnUpdateDetailsDisplay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnTileClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnTileClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnTileClicked");

	Params::UFortActivityBrowserRowHero_OnTileClicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnRowHeroFocusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bHasFocus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowHero::OnRowHeroFocusChanged(bool bHasFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnRowHeroFocusChanged");

	Params::UFortActivityBrowserRowHero_OnRowHeroFocusChanged_Params Parms{};

	Parms.bHasFocus = bHasFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowHero::OnQueryStatusChanged(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnQueryStatusChanged");

	Params::UFortActivityBrowserRowHero_OnQueryStatusChanged_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryActivitiesFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnQueryActivitiesFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnQueryActivitiesFinished");

	Params::UFortActivityBrowserRowHero_OnQueryActivitiesFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPreviewImageChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowHero::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPreviewImageChanged");

	Params::UFortActivityBrowserRowHero_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnPlayKeyArtOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPlayKeyArtOutro");

	Params::UFortActivityBrowserRowHero_OnPlayKeyArtOutro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnPlayKeyArtIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPlayKeyArtIntro");

	Params::UFortActivityBrowserRowHero_OnPlayKeyArtIntro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnListViewFinishedAddingEntries
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              ActivityCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowHero::OnListViewFinishedAddingEntries(int32 ActivityCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnListViewFinishedAddingEntries");

	Params::UFortActivityBrowserRowHero_OnListViewFinishedAddingEntries_Params Parms{};

	Parms.ActivityCount = ActivityCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnActivityUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnActivityUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnActivityUpdated");

	Params::UFortActivityBrowserRowHero_OnActivityUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsShowingSeasonalContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRowHero::IsShowingSeasonalContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "IsShowingSeasonalContent");

	Params::UFortActivityBrowserRowHero_IsShowingSeasonalContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsInOutroState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRowHero::IsInOutroState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "IsInOutroState");

	Params::UFortActivityBrowserRowHero_IsInOutroState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsImageLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRowHero::IsImageLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "IsImageLoading");

	Params::UFortActivityBrowserRowHero_IsImageLoading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleStarted
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserRowHero::HandleActivityVideoCycleStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "HandleActivityVideoCycleStarted");

	Params::UFortActivityBrowserRowHero_HandleActivityVideoCycleStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleEndReached
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserRowHero::HandleActivityVideoCycleEndReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "HandleActivityVideoCycleEndReached");

	Params::UFortActivityBrowserRowHero_HandleActivityVideoCycleEndReached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetKeyArtOutroAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetAnimation* UFortActivityBrowserRowHero::GetKeyArtOutroAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "GetKeyArtOutroAnimation");

	Params::UFortActivityBrowserRowHero_GetKeyArtOutroAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingPauseDelay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortActivityBrowserRowHero::GetCyclingPauseDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "GetCyclingPauseDelay");

	Params::UFortActivityBrowserRowHero_GetCyclingPauseDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingDelay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortActivityBrowserRowHero::GetCyclingDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "GetCyclingDelay");

	Params::UFortActivityBrowserRowHero_GetCyclingDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCurrentTexture
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UFortActivityBrowserRowHero::GetCurrentTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "GetCurrentTexture");

	Params::UFortActivityBrowserRowHero_GetCurrentTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.CycleNextActivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityBrowserRowHero::CycleNextActivity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "CycleNextActivity");

	Params::UFortActivityBrowserRowHero_CycleNextActivity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.CheckUpdateDetailsDelay
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserRowHero::CheckUpdateDetailsDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "CheckUpdateDetailsDelay");

	Params::UFortActivityBrowserRowHero_CheckUpdateDetailsDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityBrowserRowList
// (None)

class UClass* UFortActivityBrowserRowList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserRowList");

	return Clss;
}


// FortActivityBrowserRowList DiscoveryBrowserUI.Default__FortActivityBrowserRowList
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserRowList* UFortActivityBrowserRowList::GetDefaultObj()
{
	static class UFortActivityBrowserRowList* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserRowList*>(UFortActivityBrowserRowList::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowList::OnQueryStatusChanged(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowList", "OnQueryStatusChanged");

	Params::UFortActivityBrowserRowList_OnQueryStatusChanged_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityBrowserRowPromoted
// (None)

class UClass* UFortActivityBrowserRowPromoted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserRowPromoted");

	return Clss;
}


// FortActivityBrowserRowPromoted DiscoveryBrowserUI.Default__FortActivityBrowserRowPromoted
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserRowPromoted* UFortActivityBrowserRowPromoted::GetDefaultObj()
{
	static class UFortActivityBrowserRowPromoted* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserRowPromoted*>(UFortActivityBrowserRowPromoted::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowPromoted::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowPromoted", "OnPreviewImageChanged");

	Params::UFortActivityBrowserRowPromoted_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityBrowserView
// (None)

class UClass* UFortActivityBrowserView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserView");

	return Clss;
}


// FortActivityBrowserView DiscoveryBrowserUI.Default__FortActivityBrowserView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserView* UFortActivityBrowserView::GetDefaultObj()
{
	static class UFortActivityBrowserView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserView*>(UFortActivityBrowserView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserView::OnSurfaceDataDirty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserView", "OnSurfaceDataDirty");

	Params::UFortActivityBrowserView_OnSurfaceDataDirty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityBrowserView::GetInvalidActivityReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserView", "GetInvalidActivityReason");

	Params::UFortActivityBrowserView_GetInvalidActivityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityBrowserRowView
// (None)

class UClass* UFortActivityBrowserRowView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserRowView");

	return Clss;
}


// FortActivityBrowserRowView DiscoveryBrowserUI.Default__FortActivityBrowserRowView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserRowView* UFortActivityBrowserRowView::GetDefaultObj()
{
	static class UFortActivityBrowserRowView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserRowView*>(UFortActivityBrowserRowView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCategoryIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowView::OnRowChanged(int32 NewCategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowView", "OnRowChanged");

	Params::UFortActivityBrowserRowView_OnRowChanged_Params Parms{};

	Parms.NewCategoryIndex = NewCategoryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowView::OnQueryActivitiesFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowView", "OnQueryActivitiesFinished");

	Params::UFortActivityBrowserRowView_OnQueryActivitiesFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowView::OnActivityUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserRowView", "OnActivityUpdated");

	Params::UFortActivityBrowserRowView_OnActivityUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityBrowserTile
// (None)

class UClass* UFortActivityBrowserTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserTile");

	return Clss;
}


// FortActivityBrowserTile DiscoveryBrowserUI.Default__FortActivityBrowserTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserTile* UFortActivityBrowserTile::GetDefaultObj()
{
	static class UFortActivityBrowserTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserTile*>(UFortActivityBrowserTile::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserTile::HandleActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityBrowserTile", "HandleActivitySelected");

	Params::UFortActivityBrowserTile_HandleActivitySelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
// (None)

class UClass* UFortActivityPlayerBrowserView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityPlayerBrowserView");

	return Clss;
}


// FortActivityPlayerBrowserView DiscoveryBrowserUI.Default__FortActivityPlayerBrowserView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityPlayerBrowserView* UFortActivityPlayerBrowserView::GetDefaultObj()
{
	static class UFortActivityPlayerBrowserView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityPlayerBrowserView*>(UFortActivityPlayerBrowserView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityPlayerBrowserView::PlayViewIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "PlayViewIntro");

	Params::UFortActivityPlayerBrowserView_PlayViewIntro_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::OnQueryActivitiesStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnQueryActivitiesStarted");

	Params::UFortActivityPlayerBrowserView_OnQueryActivitiesStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::OnQueryActivitiesComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnQueryActivitiesComplete");

	Params::UFortActivityPlayerBrowserView_OnQueryActivitiesComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::OnPlayViewIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnPlayViewIntro");

	Params::UFortActivityPlayerBrowserView_OnPlayViewIntro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::BP_OnTileViewUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "BP_OnTileViewUpdated");

	Params::UFortActivityPlayerBrowserView_BP_OnTileViewUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityCategoryPageView
// (None)

class UClass* UFortActivityCategoryPageView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityCategoryPageView");

	return Clss;
}


// FortActivityCategoryPageView DiscoveryBrowserUI.Default__FortActivityCategoryPageView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityCategoryPageView* UFortActivityCategoryPageView::GetDefaultObj()
{
	static class UFortActivityCategoryPageView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityCategoryPageView*>(UFortActivityCategoryPageView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityTileViewTileBase
// (None)

class UClass* UFortActivityTileViewTileBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityTileViewTileBase");

	return Clss;
}


// FortActivityTileViewTileBase DiscoveryBrowserUI.Default__FortActivityTileViewTileBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityTileViewTileBase* UFortActivityTileViewTileBase::GetDefaultObj()
{
	static class UFortActivityTileViewTileBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityTileViewTileBase*>(UFortActivityTileViewTileBase::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityCategoryTile
// (None)

class UClass* UFortActivityCategoryTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityCategoryTile");

	return Clss;
}


// FortActivityCategoryTile DiscoveryBrowserUI.Default__FortActivityCategoryTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityCategoryTile* UFortActivityCategoryTile::GetDefaultObj()
{
	static class UFortActivityCategoryTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityCategoryTile*>(UFortActivityCategoryTile::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTileActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityCategoryTile::OnTileActiveSet(bool bIsTileActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCategoryTile", "OnTileActiveSet");

	Params::UFortActivityCategoryTile_OnTileActiveSet_Params Parms{};

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityCategoryTilePanel
// (None)

class UClass* UFortActivityCategoryTilePanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityCategoryTilePanel");

	return Clss;
}


// FortActivityCategoryTilePanel DiscoveryBrowserUI.Default__FortActivityCategoryTilePanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityCategoryTilePanel* UFortActivityCategoryTilePanel::GetDefaultObj()
{
	static class UFortActivityCategoryTilePanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityCategoryTilePanel*>(UFortActivityCategoryTilePanel::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityCategoryView
// (None)

class UClass* UFortActivityCategoryView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityCategoryView");

	return Clss;
}


// FortActivityCategoryView DiscoveryBrowserUI.Default__FortActivityCategoryView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityCategoryView* UFortActivityCategoryView::GetDefaultObj()
{
	static class UFortActivityCategoryView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityCategoryView*>(UFortActivityCategoryView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityCategoryView::OnSurfaceDataReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCategoryView", "OnSurfaceDataReady");

	Params::UFortActivityCategoryView_OnSurfaceDataReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortActivityCategoryTilePanel*SelectedPanel                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityCategoryView::OnCategoryTilePanelSelected(class UFortActivityCategoryTilePanel* SelectedPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCategoryView", "OnCategoryTilePanelSelected");

	Params::UFortActivityCategoryView_OnCategoryTilePanelSelected_Params Parms{};

	Parms.SelectedPanel = SelectedPanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortActivityCategoryTilePanel*NavigatingPanel                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortActivityCategoryTilePanel*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivityCategoryTilePanel* UFortActivityCategoryView::NavigateFromPanel(enum class EUINavigation Direction, class UFortActivityCategoryTilePanel* NavigatingPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCategoryView", "NavigateFromPanel");

	Params::UFortActivityCategoryView_NavigateFromPanel_Params Parms{};

	Parms.Direction = Direction;
	Parms.NavigatingPanel = NavigatingPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UFortActivityCategoryTilePanel*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivityCategoryTilePanel* UFortActivityCategoryView::GetTopMostVisiblePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCategoryView", "GetTopMostVisiblePanel");

	Params::UFortActivityCategoryView_GetTopMostVisiblePanel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortActivityCategoryTilePanel*ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivityCategoryTilePanel* UFortActivityCategoryView::GetCurrentSelectedPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCategoryView", "GetCurrentSelectedPanel");

	Params::UFortActivityCategoryView_GetCurrentSelectedPanel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityCreateView
// (None)

class UClass* UFortActivityCreateView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityCreateView");

	return Clss;
}


// FortActivityCreateView DiscoveryBrowserUI.Default__FortActivityCreateView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityCreateView* UFortActivityCreateView::GetDefaultObj()
{
	static class UFortActivityCreateView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityCreateView*>(UFortActivityCreateView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityCreateView::OnCreativeActivityUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCreateView", "OnCreativeActivityUpdated");

	Params::UFortActivityCreateView_OnCreativeActivityUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityCreateView::GetInvalidCreativeActivityReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCreateView", "GetInvalidCreativeActivityReason");

	Params::UFortActivityCreateView_GetInvalidCreativeActivityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityCreatorPageView
// (None)

class UClass* UFortActivityCreatorPageView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityCreatorPageView");

	return Clss;
}


// FortActivityCreatorPageView DiscoveryBrowserUI.Default__FortActivityCreatorPageView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityCreatorPageView* UFortActivityCreatorPageView::GetDefaultObj()
{
	static class UFortActivityCreatorPageView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityCreatorPageView*>(UFortActivityCreatorPageView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityCreatorPageView::OnNoContentFoundForCreator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCreatorPageView", "OnNoContentFoundForCreator");

	Params::UFortActivityCreatorPageView_OnNoContentFoundForCreator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityCreatorPageView::OnCreatorActivitiesQueryFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityCreatorPageView", "OnCreatorActivitiesQueryFinished");

	Params::UFortActivityCreatorPageView_OnCreatorActivitiesQueryFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityDiscoverView
// (None)

class UClass* UFortActivityDiscoverView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityDiscoverView");

	return Clss;
}


// FortActivityDiscoverView DiscoveryBrowserUI.Default__FortActivityDiscoverView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityDiscoverView* UFortActivityDiscoverView::GetDefaultObj()
{
	static class UFortActivityDiscoverView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityDiscoverView*>(UFortActivityDiscoverView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityDiscoverView::OnUpdateDetailsDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnUpdateDetailsDisplay");

	Params::UFortActivityDiscoverView_OnUpdateDetailsDisplay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDiscoverView::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnPreviewImageChanged");

	Params::UFortActivityDiscoverView_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityDiscoverView::OnPlayKeyArtOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnPlayKeyArtOutro");

	Params::UFortActivityDiscoverView_OnPlayKeyArtOutro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityDiscoverView::OnPlayKeyArtIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnPlayKeyArtIntro");

	Params::UFortActivityDiscoverView_OnPlayKeyArtIntro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityDiscoverView::OnMoviePreEndEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnMoviePreEndEvent");

	Params::UFortActivityDiscoverView_OnMoviePreEndEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsPlaying                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDiscoverView::OnMoviePlayingChanged(bool bIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnMoviePlayingChanged");

	Params::UFortActivityDiscoverView_OnMoviePlayingChanged_Params Parms{};

	Parms.bIsPlaying = bIsPlaying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsShowingSeasonalContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsShowingSeasonalContent");

	Params::UFortActivityDiscoverView_IsShowingSeasonalContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsShowingPromotedContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsShowingPromotedContent");

	Params::UFortActivityDiscoverView_IsShowingPromotedContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsInOutroState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsInOutroState");

	Params::UFortActivityDiscoverView_IsInOutroState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsImageLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsImageLoading");

	Params::UFortActivityDiscoverView_IsImageLoading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
// (Final, Native, Private)
// Parameters:

void UFortActivityDiscoverView::HandleMovieWidgetMediaStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "HandleMovieWidgetMediaStarted");

	Params::UFortActivityDiscoverView_HandleMovieWidgetMediaStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent
// (Final, Native, Private)
// Parameters:

void UFortActivityDiscoverView::HandleMovieWidgetMediaPreEndEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "HandleMovieWidgetMediaPreEndEvent");

	Params::UFortActivityDiscoverView_HandleMovieWidgetMediaPreEndEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortActivatableMovieWidget* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivatableMovieWidget* UFortActivityDiscoverView::GetPromotedMovieWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "GetPromotedMovieWidget");

	Params::UFortActivityDiscoverView_GetPromotedMovieWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortActivatableMovieWidget* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivatableMovieWidget* UFortActivityDiscoverView::GetMovieWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "GetMovieWidget");

	Params::UFortActivityDiscoverView_GetMovieWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetAnimation* UFortActivityDiscoverView::GetKeyArtOutroAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "GetKeyArtOutroAnimation");

	Params::UFortActivityDiscoverView_GetKeyArtOutroAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UFortActivityDiscoverView::GetCurrentTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "GetCurrentTexture");

	Params::UFortActivityDiscoverView_GetCurrentTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay
// (Final, Native, Private)
// Parameters:

void UFortActivityDiscoverView::CheckUpdateDetailsDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverView", "CheckUpdateDetailsDelay");

	Params::UFortActivityDiscoverView_CheckUpdateDetailsDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityDiscoverViewV2
// (None)

class UClass* UFortActivityDiscoverViewV2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityDiscoverViewV2");

	return Clss;
}


// FortActivityDiscoverViewV2 DiscoveryBrowserUI.Default__FortActivityDiscoverViewV2
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityDiscoverViewV2* UFortActivityDiscoverViewV2::GetDefaultObj()
{
	static class UFortActivityDiscoverViewV2* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityDiscoverViewV2*>(UFortActivityDiscoverViewV2::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverViewV2::IsShowingSeasonalContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverViewV2", "IsShowingSeasonalContent");

	Params::UFortActivityDiscoverViewV2_IsShowingSeasonalContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverViewV2::IsShowingPromotedContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityDiscoverViewV2", "IsShowingPromotedContent");

	Params::UFortActivityDiscoverViewV2_IsShowingPromotedContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityFavoriteBrowserView
// (None)

class UClass* UFortActivityFavoriteBrowserView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityFavoriteBrowserView");

	return Clss;
}


// FortActivityFavoriteBrowserView DiscoveryBrowserUI.Default__FortActivityFavoriteBrowserView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityFavoriteBrowserView* UFortActivityFavoriteBrowserView::GetDefaultObj()
{
	static class UFortActivityFavoriteBrowserView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityFavoriteBrowserView*>(UFortActivityFavoriteBrowserView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityListItemWrapper
// (None)

class UClass* UFortActivityListItemWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityListItemWrapper");

	return Clss;
}


// FortActivityListItemWrapper DiscoveryBrowserUI.Default__FortActivityListItemWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityListItemWrapper* UFortActivityListItemWrapper::GetDefaultObj()
{
	static class UFortActivityListItemWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityListItemWrapper*>(UFortActivityListItemWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityListView
// (None)

class UClass* UFortActivityListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityListView");

	return Clss;
}


// FortActivityListView DiscoveryBrowserUI.Default__FortActivityListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityListView* UFortActivityListView::GetDefaultObj()
{
	static class UFortActivityListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityListView*>(UFortActivityListView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityListView.GetInViewCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortActivityListView::GetInViewCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityListView", "GetInViewCount");

	Params::UFortActivityListView_GetInViewCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityLobbyTile
// (None)

class UClass* UFortActivityLobbyTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityLobbyTile");

	return Clss;
}


// FortActivityLobbyTile DiscoveryBrowserUI.Default__FortActivityLobbyTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityLobbyTile* UFortActivityLobbyTile::GetDefaultObj()
{
	static class UFortActivityLobbyTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityLobbyTile*>(UFortActivityLobbyTile::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityLobbyTile::TrySendFirstTimeNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "TrySendFirstTimeNotification");

	Params::UFortActivityLobbyTile_TrySendFirstTimeNotification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityLobbyTile::ShowModeSetSelectionModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "ShowModeSetSelectionModal");

	Params::UFortActivityLobbyTile_ShowModeSetSelectionModal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityLobbyTile::OnShowChildActivityFirstTimeNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnShowChildActivityFirstTimeNotification");

	Params::UFortActivityLobbyTile_OnShowChildActivityFirstTimeNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityLobbyTile::OnShowChildActivityChangedNotification(class FText& DisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnShowChildActivityChangedNotification");

	Params::UFortActivityLobbyTile_OnShowChildActivityChangedNotification_Params Parms{};

	Parms.DisplayName = DisplayName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityLobbyTile::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnPreviewImageChanged");

	Params::UFortActivityLobbyTile_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityLobbyTile::OnHideChildActivityFirstTimeNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnHideChildActivityFirstTimeNotification");

	Params::UFortActivityLobbyTile_OnHideChildActivityFirstTimeNotification_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityLobbyTile::OnDetailsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnDetailsUpdated");

	Params::UFortActivityLobbyTile_OnDetailsUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.IsModeSetActivity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityLobbyTile::IsModeSetActivity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "IsModeSetActivity");

	Params::UFortActivityLobbyTile_IsModeSetActivity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityLobbyTile::IsActivityEpicCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "IsActivityEpicCreated");

	Params::UFortActivityLobbyTile_IsActivityEpicCreated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortActivityLobbyTile::GetChildActivityDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityLobbyTile", "GetChildActivityDisplayName");

	Params::UFortActivityLobbyTile_GetChildActivityDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityModeSetSelectionModal
// (None)

class UClass* UFortActivityModeSetSelectionModal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityModeSetSelectionModal");

	return Clss;
}


// FortActivityModeSetSelectionModal DiscoveryBrowserUI.Default__FortActivityModeSetSelectionModal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityModeSetSelectionModal* UFortActivityModeSetSelectionModal::GetDefaultObj()
{
	static class UFortActivityModeSetSelectionModal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityModeSetSelectionModal*>(UFortActivityModeSetSelectionModal::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetIsRankedSwitchAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsRankedSwitchAvailable                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityModeSetSelectionModal::SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "SetIsRankedSwitchAvailable");

	Params::UFortActivityModeSetSelectionModal_SetIsRankedSwitchAvailable_Params Parms{};

	Parms.bIsRankedSwitchAvailable = bIsRankedSwitchAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetHabaneroValues
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHabaneroEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHabaneroExists                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityModeSetSelectionModal::SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "SetHabaneroValues");

	Params::UFortActivityModeSetSelectionModal_SetHabaneroValues_Params Parms{};

	Parms.bHabaneroEnabled = bHabaneroEnabled;
	Parms.bHabaneroExists = bHabaneroExists;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortActivityModeSetSelectionModal::SaveSelectionAndClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "SaveSelectionAndClose");

	Params::UFortActivityModeSetSelectionModal_SaveSelectionAndClose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityModeSetSelectionModal::OnSubModeSelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnSubModeSelectionChanged");

	Params::UFortActivityModeSetSelectionModal_OnSubModeSelectionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityModeSetSelectionModal::OnSubModeSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnSubModeSelected");

	Params::UFortActivityModeSetSelectionModal_OnSubModeSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityModeSetSelectionModal::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnPreviewImageChanged");

	Params::UFortActivityModeSetSelectionModal_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortGameActivity*           GameActivity                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StartingSelectedMnemonic                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityModeSetSelectionModal::OnActivityChanged(class UFortGameActivity* GameActivity, const class FString& StartingSelectedMnemonic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnActivityChanged");

	Params::UFortActivityModeSetSelectionModal_OnActivityChanged_Params Parms{};

	Parms.GameActivity = GameActivity;
	Parms.StartingSelectedMnemonic = StartingSelectedMnemonic;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityPlayerBrowserTile
// (None)

class UClass* UFortActivityPlayerBrowserTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityPlayerBrowserTile");

	return Clss;
}


// FortActivityPlayerBrowserTile DiscoveryBrowserUI.Default__FortActivityPlayerBrowserTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityPlayerBrowserTile* UFortActivityPlayerBrowserTile::GetDefaultObj()
{
	static class UFortActivityPlayerBrowserTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityPlayerBrowserTile*>(UFortActivityPlayerBrowserTile::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
// (Final, Native, Private)
// Parameters:

void UFortActivityPlayerBrowserTile::HandleActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityPlayerBrowserTile", "HandleActivitySelected");

	Params::UFortActivityPlayerBrowserTile_HandleActivitySelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivityPlayerView
// (None)

class UClass* UFortActivityPlayerView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityPlayerView");

	return Clss;
}


// FortActivityPlayerView DiscoveryBrowserUI.Default__FortActivityPlayerView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityPlayerView* UFortActivityPlayerView::GetDefaultObj()
{
	static class UFortActivityPlayerView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityPlayerView*>(UFortActivityPlayerView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityPlayerViewTabButton
// (None)

class UClass* UFortActivityPlayerViewTabButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityPlayerViewTabButton");

	return Clss;
}


// FortActivityPlayerViewTabButton DiscoveryBrowserUI.Default__FortActivityPlayerViewTabButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityPlayerViewTabButton* UFortActivityPlayerViewTabButton::GetDefaultObj()
{
	static class UFortActivityPlayerViewTabButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityPlayerViewTabButton*>(UFortActivityPlayerViewTabButton::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivitySearchView
// (None)

class UClass* UFortActivitySearchView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivitySearchView");

	return Clss;
}


// FortActivitySearchView DiscoveryBrowserUI.Default__FortActivitySearchView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivitySearchView* UFortActivitySearchView::GetDefaultObj()
{
	static class UFortActivitySearchView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivitySearchView*>(UFortActivitySearchView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortActivityValidationResultValidateResult                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivitySearchView::OnActivityValidated(enum class EFortActivityValidationResult ValidateResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySearchView", "OnActivityValidated");

	Params::UFortActivitySearchView_OnActivityValidated_Params Parms{};

	Parms.ValidateResult = ValidateResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivitySearchView::OnActivityClear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySearchView", "OnActivityClear");

	Params::UFortActivitySearchView_OnActivityClear_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitInfo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivitySearchView::HandleTextCommitted(class FText& InText, enum class ETextCommit CommitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySearchView", "HandleTextCommitted");

	Params::UFortActivitySearchView_HandleTextCommitted_Params Parms{};

	Parms.InText = InText;
	Parms.CommitInfo = CommitInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivitySearchView::HandleTextChanged(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySearchView", "HandleTextChanged");

	Params::UFortActivitySearchView_HandleTextChanged_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortActivitySeasonalBrowserView
// (None)

class UClass* UFortActivitySeasonalBrowserView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivitySeasonalBrowserView");

	return Clss;
}


// FortActivitySeasonalBrowserView DiscoveryBrowserUI.Default__FortActivitySeasonalBrowserView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivitySeasonalBrowserView* UFortActivitySeasonalBrowserView::GetDefaultObj()
{
	static class UFortActivitySeasonalBrowserView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivitySeasonalBrowserView*>(UFortActivitySeasonalBrowserView::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivitySelector
// (None)

class UClass* UFortActivitySelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivitySelector");

	return Clss;
}


// FortActivitySelector DiscoveryBrowserUI.Default__FortActivitySelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivitySelector* UFortActivitySelector::GetDefaultObj()
{
	static class UFortActivitySelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivitySelector*>(UFortActivitySelector::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivitySelector.OnSwapColorScheme
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsUsingAlternateColorScheme                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivitySelector::OnSwapColorScheme(bool bInIsUsingAlternateColorScheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySelector", "OnSwapColorScheme");

	Params::UFortActivitySelector_OnSwapColorScheme_Params Parms{};

	Parms.bInIsUsingAlternateColorScheme = bInIsUsingAlternateColorScheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivitySelector.OnEnableColorScheme
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsColorSchemeActive                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivitySelector::OnEnableColorScheme(bool bIsColorSchemeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivitySelector", "OnEnableColorScheme");

	Params::UFortActivitySelector_OnEnableColorScheme_Params Parms{};

	Parms.bIsColorSchemeActive = bIsColorSchemeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Class DiscoveryBrowserUI.FortActivityTileDetailsDisplay
// (None)

class UClass* UFortActivityTileDetailsDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityTileDetailsDisplay");

	return Clss;
}


// FortActivityTileDetailsDisplay DiscoveryBrowserUI.Default__FortActivityTileDetailsDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityTileDetailsDisplay* UFortActivityTileDetailsDisplay::GetDefaultObj()
{
	static class UFortActivityTileDetailsDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityTileDetailsDisplay*>(UFortActivityTileDetailsDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateCCU
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CCUCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::UpdateCCU(int32 CCUCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "UpdateCCU");

	Params::UFortActivityTileDetailsDisplay_UpdateCCU_Params Parms{};

	Parms.CCUCount = CCUCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortActivityTileDetailsDisplay::StopTileVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "StopTileVideo");

	Params::UFortActivityTileDetailsDisplay_StopTileVideo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortActivityTileDetailsDisplay::StartTileVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "StartTileVideo");

	Params::UFortActivityTileDetailsDisplay_StartTileVideo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.ShouldPlayTileVideo
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bOutResult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::ShouldPlayTileVideo(bool* bOutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "ShouldPlayTileVideo");

	Params::UFortActivityTileDetailsDisplay_ShouldPlayTileVideo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bOutResult != nullptr)
		*bOutResult = Parms.bOutResult;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnUpdateColumnSize
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewColumnSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnUpdateColumnSize(int32 NewColumnSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnUpdateColumnSize");

	Params::UFortActivityTileDetailsDisplay_OnUpdateColumnSize_Params Parms{};

	Parms.NewColumnSize = NewColumnSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTileActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnTileActiveSet(bool bIsTileActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnTileActiveSet");

	Params::UFortActivityTileDetailsDisplay_OnTileActiveSet_Params Parms{};

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bRequiresPurchase                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnRequiresPurchaseChanged(bool bRequiresPurchase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnRequiresPurchaseChanged");

	Params::UFortActivityTileDetailsDisplay_OnRequiresPurchaseChanged_Params Parms{};

	Parms.bRequiresPurchase = bRequiresPurchase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnPreviewImageChanged");

	Params::UFortActivityTileDetailsDisplay_OnPreviewImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PartySize                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnPartySizeChanged(int32 PartySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnPartySizeChanged");

	Params::UFortActivityTileDetailsDisplay_OnPartySizeChanged_Params Parms{};

	Parms.PartySize = PartySize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLogoImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnLogoImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLogoImageChanged");

	Params::UFortActivityTileDetailsDisplay_OnLogoImageChanged_Params Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnLocalPlayerPromotedToLeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLocalPlayerPromotedToLeader");

	Params::UFortActivityTileDetailsDisplay_OnLocalPlayerPromotedToLeader_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnLocalPlayerDemoted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLocalPlayerDemoted");

	Params::UFortActivityTileDetailsDisplay_OnLocalPlayerDemoted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsFavorite                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnIsFavoriteChanged(bool bIsFavorite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnIsFavoriteChanged");

	Params::UFortActivityTileDetailsDisplay_OnIsFavoriteChanged_Params Parms{};

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnFriendsPlayingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumPlaying                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnFriendsPlayingChanged(int32 NumPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnFriendsPlayingChanged");

	Params::UFortActivityTileDetailsDisplay_OnFriendsPlayingChanged_Params Parms{};

	Parms.NumPlaying = NumPlaying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnDetailsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnDetailsUpdated");

	Params::UFortActivityTileDetailsDisplay_OnDetailsUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortActivityTileDetailsDisplay::OnActivityUnSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnActivityUnSelected__DelegateSignature");

	Params::UFortActivityTileDetailsDisplay_OnActivityUnSelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortActivityTileDetailsDisplay::OnActivitySelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnActivitySelected__DelegateSignature");

	Params::UFortActivityTileDetailsDisplay_OnActivitySelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::IsModeSetActivity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsModeSetActivity");

	Params::UFortActivityTileDetailsDisplay_IsModeSetActivity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityLocked
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::IsActivityLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsActivityLocked");

	Params::UFortActivityTileDetailsDisplay_IsActivityLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::IsActivityFavorited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsActivityFavorited");

	Params::UFortActivityTileDetailsDisplay_IsActivityFavorited_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityTileDetailsDisplay::GetInvalidActivityReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "GetInvalidActivityReason");

	Params::UFortActivityTileDetailsDisplay_GetInvalidActivityReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivityCreatorDisplayText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFortActivityTileDetailsDisplay::GetActivityCreatorDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "GetActivityCreatorDisplayText");

	Params::UFortActivityTileDetailsDisplay_GetActivityCreatorDisplayText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::DoesActivityRequirePurchase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "DoesActivityRequirePurchase");

	Params::UFortActivityTileDetailsDisplay_DoesActivityRequirePurchase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.FortActivityTileView
// (None)

class UClass* UFortActivityTileView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityTileView");

	return Clss;
}


// FortActivityTileView DiscoveryBrowserUI.Default__FortActivityTileView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityTileView* UFortActivityTileView::GetDefaultObj()
{
	static class UFortActivityTileView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityTileView*>(UFortActivityTileView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortActivityTileView.SetListenForMouseWheelInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bListenForInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileView::SetListenForMouseWheelInput(bool bListenForInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortActivityTileView", "SetListenForMouseWheelInput");

	Params::UFortActivityTileView_SetListenForMouseWheelInput_Params Parms{};

	Parms.bListenForInput = bListenForInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class DiscoveryBrowserUI.FortDiscoverItemBrowserRow
// (None)

class UClass* UFortDiscoverItemBrowserRow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDiscoverItemBrowserRow");

	return Clss;
}


// FortDiscoverItemBrowserRow DiscoveryBrowserUI.Default__FortDiscoverItemBrowserRow
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDiscoverItemBrowserRow* UFortDiscoverItemBrowserRow::GetDefaultObj()
{
	static class UFortDiscoverItemBrowserRow* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDiscoverItemBrowserRow*>(UFortDiscoverItemBrowserRow::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortDiscoverItemListView
// (None)

class UClass* UFortDiscoverItemListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDiscoverItemListView");

	return Clss;
}


// FortDiscoverItemListView DiscoveryBrowserUI.Default__FortDiscoverItemListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDiscoverItemListView* UFortDiscoverItemListView::GetDefaultObj()
{
	static class UFortDiscoverItemListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDiscoverItemListView*>(UFortDiscoverItemListView::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscoveryBrowserUI.FortDiscoverItemListView.GetInViewCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortDiscoverItemListView::GetInViewCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortDiscoverItemListView", "GetInViewCount");

	Params::UFortDiscoverItemListView_GetInViewCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DiscoveryBrowserUI.ActivityLibraryComponent
// (None)

class UClass* UActivityLibraryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityLibraryComponent");

	return Clss;
}


// ActivityLibraryComponent DiscoveryBrowserUI.Default__ActivityLibraryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UActivityLibraryComponent* UActivityLibraryComponent::GetDefaultObj()
{
	static class UActivityLibraryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityLibraryComponent*>(UActivityLibraryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.FortActivityBrowserContext
// (None)

class UClass* UFortActivityBrowserContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortActivityBrowserContext");

	return Clss;
}


// FortActivityBrowserContext DiscoveryBrowserUI.Default__FortActivityBrowserContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortActivityBrowserContext* UFortActivityBrowserContext::GetDefaultObj()
{
	static class UFortActivityBrowserContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortActivityBrowserContext*>(UFortActivityBrowserContext::StaticClass()->DefaultObject);

	return Default;
}


// Class DiscoveryBrowserUI.OverrideMatchmakingUIComponent
// (None)

class UClass* UOverrideMatchmakingUIComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverrideMatchmakingUIComponent");

	return Clss;
}


// OverrideMatchmakingUIComponent DiscoveryBrowserUI.Default__OverrideMatchmakingUIComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverrideMatchmakingUIComponent* UOverrideMatchmakingUIComponent::GetDefaultObj()
{
	static class UOverrideMatchmakingUIComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverrideMatchmakingUIComponent*>(UOverrideMatchmakingUIComponent::StaticClass()->DefaultObject);

	return Default;
}

}


