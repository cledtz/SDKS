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


// Function DiscoveryBrowserUI.FortActivityBrowserTabButton.OnFavoriteChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsFavorite                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserTabButton::OnFavoriteChanged(bool bIsFavorite)
{
	static auto Func = Class->GetFunction("FortActivityBrowserTabButton", "OnFavoriteChanged");

	Params::UFortActivityBrowserTabButton_OnFavoriteChanged_Params Parms;

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsUsingAlternateColorScheme                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::OnSwapColorScheme(bool bInIsUsingAlternateColorScheme)
{
	static auto Func = Class->GetFunction("FortActivityBrowser", "OnSwapColorScheme");

	Params::UFortActivityBrowser_OnSwapColorScheme_Params Parms;

	Parms.bInIsUsingAlternateColorScheme = bInIsUsingAlternateColorScheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EPlayerQueueType        PlayerQueueType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::OnPlayerQueueTypeChanged(enum class EPlayerQueueType PlayerQueueType)
{
	static auto Func = Class->GetFunction("FortActivityBrowser", "OnPlayerQueueTypeChanged");

	Params::UFortActivityBrowser_OnPlayerQueueTypeChanged_Params Parms;

	Parms.PlayerQueueType = PlayerQueueType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsColorSchemeActive                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::OnEnableColorScheme(bool bIsColorSchemeActive)
{
	static auto Func = Class->GetFunction("FortActivityBrowser", "OnEnableColorScheme");

	Params::UFortActivityBrowser_OnEnableColorScheme_Params Parms;

	Parms.bIsColorSchemeActive = bIsColorSchemeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowser::OnActivitySelected()
{
	static auto Func = Class->GetFunction("FortActivityBrowser", "OnActivitySelected");

	Params::UFortActivityBrowser_OnActivitySelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged
// (Final, Native, Private)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowser::HandleTabChanged(class FName TabId)
{
	static auto Func = Class->GetFunction("FortActivityBrowser", "HandleTabChanged");

	Params::UFortActivityBrowser_HandleTabChanged_Params Parms;

	Parms.TabId = TabId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateSingleFriendName
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        SingleFriendName                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateSingleFriendName(class FText& SingleFriendName)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateSingleFriendName");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateSingleFriendName_Params Parms;

	Parms.SingleFriendName = SingleFriendName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateRichPresence
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        RichPresence                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateRichPresence(class FText& RichPresence)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateRichPresence");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateRichPresence_Params Parms;

	Parms.RichPresence = RichPresence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdatePartyMemberNames
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Names                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdatePartyMemberNames(class FText& Names)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdatePartyMemberNames");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames_Params Parms;

	Parms.Names = Names;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateOtherPlayersSubText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OtherPlayersSubText                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateOtherPlayersSubText(class FText& OtherPlayersSubText)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateOtherPlayersSubText");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateOtherPlayersSubText_Params Parms;

	Parms.OtherPlayersSubText = OtherPlayersSubText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateLastInteraction
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LastInteraction                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateLastInteraction(class FText& LastInteraction)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateLastInteraction");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateLastInteraction_Params Parms;

	Parms.LastInteraction = LastInteraction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateIslandThumbnail
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                    ThumbnailTexture                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::UpdateIslandThumbnail(class UTexture* ThumbnailTexture)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateIslandThumbnail");

	Params::UFortActivityBrowserPlayWithFriendsTile_UpdateIslandThumbnail_Params Parms;

	Parms.ThumbnailTexture = ThumbnailTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTileActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTileActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::OnTileActiveChanged(bool bIsTileActive)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTileActiveChanged");

	Params::UFortActivityBrowserPlayWithFriendsTile_OnTileActiveChanged_Params Parms;

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureLoadingComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture*                    ThumbnailTexture                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::OnTextureLoadingComplete(class UTexture* ThumbnailTexture)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTextureLoadingComplete");

	Params::UFortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete_Params Parms;

	Parms.ThumbnailTexture = ThumbnailTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureBeginLoading
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserPlayWithFriendsTile::OnTextureBeginLoading()
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTextureBeginLoading");

	Params::UFortActivityBrowserPlayWithFriendsTile_OnTextureBeginLoading_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.HandleCTAButtonClicked
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortActivityBrowserPlayWithFriendsTile::HandleCTAButtonClicked()
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "HandleCTAButtonClicked");

	Params::UFortActivityBrowserPlayWithFriendsTile_HandleCTAButtonClicked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetMaxPartySize
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortActivityBrowserPlayWithFriendsTile::GetMaxPartySize()
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "GetMaxPartySize");

	Params::UFortActivityBrowserPlayWithFriendsTile_GetMaxPartySize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetCTAButtonText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortActivityBrowserPlayWithFriendsTile::GetCTAButtonText()
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "GetCTAButtonText");

	Params::UFortActivityBrowserPlayWithFriendsTile_GetCTAButtonText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.BP_PartyInformationUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInIsTileSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserPlayWithFriendsTile::BP_PartyInformationUpdated(bool bInIsTileSelected)
{
	static auto Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "BP_PartyInformationUpdated");

	Params::UFortActivityBrowserPlayWithFriendsTile_BP_PartyInformationUpdated_Params Parms;

	Parms.bInIsTileSelected = bInIsTileSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInPeekState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowPeekStateChanged(bool bIsInPeekState)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "OnRowPeekStateChanged");

	Params::UFortActivityBrowserRow_OnRowPeekStateChanged_Params Parms;

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bMovingOffscreen                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowMoveUp(bool bMovingOffscreen)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "OnRowMoveUp");

	Params::UFortActivityBrowserRow_OnRowMoveUp_Params Parms;

	Parms.bMovingOffscreen = bMovingOffscreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bMovingOffscreen                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowMoveDown(bool bMovingOffscreen)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "OnRowMoveDown");

	Params::UFortActivityBrowserRow_OnRowMoveDown_Params Parms;

	Parms.bMovingOffscreen = bMovingOffscreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowIsSelectedChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "OnRowIsSelectedChanged");

	Params::UFortActivityBrowserRow_OnRowIsSelectedChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnRowIsActiveChanged(bool bIsActive)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "OnRowIsActiveChanged");

	Params::UFortActivityBrowserRow_OnRowIsActiveChanged_Params Parms;

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayAnimation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRow::OnCategoryItemChanged(bool bPlayAnimation)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "OnCategoryItemChanged");

	Params::UFortActivityBrowserRow_OnCategoryItemChanged_Params Parms;

	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRow::GetIsSelected()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "GetIsSelected");

	Params::UFortActivityBrowserRow_GetIsSelected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRow::GetIsInPeekState()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "GetIsInPeekState");

	Params::UFortActivityBrowserRow_GetIsInPeekState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRow::GetIsActive()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRow", "GetIsActive");

	Params::UFortActivityBrowserRow_GetIsActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnVideoStarted()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnVideoStarted");

	Params::UFortActivityBrowserRowHero_OnVideoStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoEndReached
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnVideoEndReached()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnVideoEndReached");

	Params::UFortActivityBrowserRowHero_OnVideoEndReached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnUpdateDetailsDisplay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnUpdateDetailsDisplay()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnUpdateDetailsDisplay");

	Params::UFortActivityBrowserRowHero_OnUpdateDetailsDisplay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnTileClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnTileClicked()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnTileClicked");

	Params::UFortActivityBrowserRowHero_OnTileClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnRowHeroFocusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bHasFocus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowHero::OnRowHeroFocusChanged(bool bHasFocus)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnRowHeroFocusChanged");

	Params::UFortActivityBrowserRowHero_OnRowHeroFocusChanged_Params Parms;

	Parms.bHasFocus = bHasFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowHero::OnQueryStatusChanged(bool bIsActive)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnQueryStatusChanged");

	Params::UFortActivityBrowserRowHero_OnQueryStatusChanged_Params Parms;

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryActivitiesFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnQueryActivitiesFinished()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnQueryActivitiesFinished");

	Params::UFortActivityBrowserRowHero_OnQueryActivitiesFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPreviewImageChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowHero::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPreviewImageChanged");

	Params::UFortActivityBrowserRowHero_OnPreviewImageChanged_Params Parms;

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnPlayKeyArtOutro()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPlayKeyArtOutro");

	Params::UFortActivityBrowserRowHero_OnPlayKeyArtOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnPlayKeyArtIntro()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPlayKeyArtIntro");

	Params::UFortActivityBrowserRowHero_OnPlayKeyArtIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnListViewFinishedAddingEntries
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              ActivityCount                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowHero::OnListViewFinishedAddingEntries(int32 ActivityCount)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnListViewFinishedAddingEntries");

	Params::UFortActivityBrowserRowHero_OnListViewFinishedAddingEntries_Params Parms;

	Parms.ActivityCount = ActivityCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnActivityUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowHero::OnActivityUpdated()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "OnActivityUpdated");

	Params::UFortActivityBrowserRowHero_OnActivityUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsShowingSeasonalContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRowHero::IsShowingSeasonalContent()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "IsShowingSeasonalContent");

	Params::UFortActivityBrowserRowHero_IsShowingSeasonalContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsInOutroState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRowHero::IsInOutroState()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "IsInOutroState");

	Params::UFortActivityBrowserRowHero_IsInOutroState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsImageLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityBrowserRowHero::IsImageLoading()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "IsImageLoading");

	Params::UFortActivityBrowserRowHero_IsImageLoading_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleStarted
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserRowHero::HandleActivityVideoCycleStarted()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "HandleActivityVideoCycleStarted");

	Params::UFortActivityBrowserRowHero_HandleActivityVideoCycleStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleEndReached
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserRowHero::HandleActivityVideoCycleEndReached()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "HandleActivityVideoCycleEndReached");

	Params::UFortActivityBrowserRowHero_HandleActivityVideoCycleEndReached_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetKeyArtOutroAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetAnimation* UFortActivityBrowserRowHero::GetKeyArtOutroAnimation()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "GetKeyArtOutroAnimation");

	Params::UFortActivityBrowserRowHero_GetKeyArtOutroAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingPauseDelay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortActivityBrowserRowHero::GetCyclingPauseDelay()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "GetCyclingPauseDelay");

	Params::UFortActivityBrowserRowHero_GetCyclingPauseDelay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingDelay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortActivityBrowserRowHero::GetCyclingDelay()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "GetCyclingDelay");

	Params::UFortActivityBrowserRowHero_GetCyclingDelay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCurrentTexture
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UFortActivityBrowserRowHero::GetCurrentTexture()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "GetCurrentTexture");

	Params::UFortActivityBrowserRowHero_GetCurrentTexture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.CycleNextActivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityBrowserRowHero::CycleNextActivity()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "CycleNextActivity");

	Params::UFortActivityBrowserRowHero_CycleNextActivity_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.CheckUpdateDetailsDelay
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserRowHero::CheckUpdateDetailsDelay()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowHero", "CheckUpdateDetailsDelay");

	Params::UFortActivityBrowserRowHero_CheckUpdateDetailsDelay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowList::OnQueryStatusChanged(bool bIsActive)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowList", "OnQueryStatusChanged");

	Params::UFortActivityBrowserRowList_OnQueryStatusChanged_Params Parms;

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowPromoted::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowPromoted", "OnPreviewImageChanged");

	Params::UFortActivityBrowserRowPromoted_OnPreviewImageChanged_Params Parms;

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityBrowserView::OnSurfaceDataDirty()
{
	static auto Func = Class->GetFunction("FortActivityBrowserView", "OnSurfaceDataDirty");

	Params::UFortActivityBrowserView_OnSurfaceDataDirty_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityBrowserView::GetInvalidActivityReason()
{
	static auto Func = Class->GetFunction("FortActivityBrowserView", "GetInvalidActivityReason");

	Params::UFortActivityBrowserView_GetInvalidActivityReason_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCategoryIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityBrowserRowView::OnRowChanged(int32 NewCategoryIndex)
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowView", "OnRowChanged");

	Params::UFortActivityBrowserRowView_OnRowChanged_Params Parms;

	Parms.NewCategoryIndex = NewCategoryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowView::OnQueryActivitiesFinished()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowView", "OnQueryActivitiesFinished");

	Params::UFortActivityBrowserRowView_OnQueryActivitiesFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityBrowserRowView::OnActivityUpdated()
{
	static auto Func = Class->GetFunction("FortActivityBrowserRowView", "OnActivityUpdated");

	Params::UFortActivityBrowserRowView_OnActivityUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
// (Final, Native, Private)
// Parameters:

void UFortActivityBrowserTile::HandleActivitySelected()
{
	static auto Func = Class->GetFunction("FortActivityBrowserTile", "HandleActivitySelected");

	Params::UFortActivityBrowserTile_HandleActivitySelected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityPlayerBrowserView::PlayViewIntro()
{
	static auto Func = Class->GetFunction("FortActivityPlayerBrowserView", "PlayViewIntro");

	Params::UFortActivityPlayerBrowserView_PlayViewIntro_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::OnQueryActivitiesStarted()
{
	static auto Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnQueryActivitiesStarted");

	Params::UFortActivityPlayerBrowserView_OnQueryActivitiesStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::OnQueryActivitiesComplete()
{
	static auto Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnQueryActivitiesComplete");

	Params::UFortActivityPlayerBrowserView_OnQueryActivitiesComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::OnPlayViewIntro()
{
	static auto Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnPlayViewIntro");

	Params::UFortActivityPlayerBrowserView_OnPlayViewIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityPlayerBrowserView::BP_OnTileViewUpdated()
{
	static auto Func = Class->GetFunction("FortActivityPlayerBrowserView", "BP_OnTileViewUpdated");

	Params::UFortActivityPlayerBrowserView_BP_OnTileViewUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTileActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityCategoryTile::OnTileActiveSet(bool bIsTileActive)
{
	static auto Func = Class->GetFunction("FortActivityCategoryTile", "OnTileActiveSet");

	Params::UFortActivityCategoryTile_OnTileActiveSet_Params Parms;

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityCategoryView::OnSurfaceDataReady()
{
	static auto Func = Class->GetFunction("FortActivityCategoryView", "OnSurfaceDataReady");

	Params::UFortActivityCategoryView_OnSurfaceDataReady_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortActivityCategoryTilePanel*SelectedPanel                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityCategoryView::OnCategoryTilePanelSelected(class UFortActivityCategoryTilePanel* SelectedPanel)
{
	static auto Func = Class->GetFunction("FortActivityCategoryView", "OnCategoryTilePanelSelected");

	Params::UFortActivityCategoryView_OnCategoryTilePanelSelected_Params Parms;

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
	static auto Func = Class->GetFunction("FortActivityCategoryView", "NavigateFromPanel");

	Params::UFortActivityCategoryView_NavigateFromPanel_Params Parms;

	Parms.Direction = Direction;
	Parms.NavigatingPanel = NavigatingPanel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UFortActivityCategoryTilePanel*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivityCategoryTilePanel* UFortActivityCategoryView::GetTopMostVisiblePanel()
{
	static auto Func = Class->GetFunction("FortActivityCategoryView", "GetTopMostVisiblePanel");

	Params::UFortActivityCategoryView_GetTopMostVisiblePanel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortActivityCategoryTilePanel*ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivityCategoryTilePanel* UFortActivityCategoryView::GetCurrentSelectedPanel()
{
	static auto Func = Class->GetFunction("FortActivityCategoryView", "GetCurrentSelectedPanel");

	Params::UFortActivityCategoryView_GetCurrentSelectedPanel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityCreateView::OnCreativeActivityUpdated()
{
	static auto Func = Class->GetFunction("FortActivityCreateView", "OnCreativeActivityUpdated");

	Params::UFortActivityCreateView_OnCreativeActivityUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityCreateView::GetInvalidCreativeActivityReason()
{
	static auto Func = Class->GetFunction("FortActivityCreateView", "GetInvalidCreativeActivityReason");

	Params::UFortActivityCreateView_GetInvalidCreativeActivityReason_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityCreatorPageView::OnNoContentFoundForCreator()
{
	static auto Func = Class->GetFunction("FortActivityCreatorPageView", "OnNoContentFoundForCreator");

	Params::UFortActivityCreatorPageView_OnNoContentFoundForCreator_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityCreatorPageView::OnCreatorActivitiesQueryFinished()
{
	static auto Func = Class->GetFunction("FortActivityCreatorPageView", "OnCreatorActivitiesQueryFinished");

	Params::UFortActivityCreatorPageView_OnCreatorActivitiesQueryFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityDiscoverView::OnUpdateDetailsDisplay()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "OnUpdateDetailsDisplay");

	Params::UFortActivityDiscoverView_OnUpdateDetailsDisplay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDiscoverView::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "OnPreviewImageChanged");

	Params::UFortActivityDiscoverView_OnPreviewImageChanged_Params Parms;

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityDiscoverView::OnPlayKeyArtOutro()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "OnPlayKeyArtOutro");

	Params::UFortActivityDiscoverView_OnPlayKeyArtOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityDiscoverView::OnPlayKeyArtIntro()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "OnPlayKeyArtIntro");

	Params::UFortActivityDiscoverView_OnPlayKeyArtIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortActivityDiscoverView::OnMoviePreEndEvent()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "OnMoviePreEndEvent");

	Params::UFortActivityDiscoverView_OnMoviePreEndEvent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsPlaying                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityDiscoverView::OnMoviePlayingChanged(bool bIsPlaying)
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "OnMoviePlayingChanged");

	Params::UFortActivityDiscoverView_OnMoviePlayingChanged_Params Parms;

	Parms.bIsPlaying = bIsPlaying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsShowingSeasonalContent()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "IsShowingSeasonalContent");

	Params::UFortActivityDiscoverView_IsShowingSeasonalContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsShowingPromotedContent()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "IsShowingPromotedContent");

	Params::UFortActivityDiscoverView_IsShowingPromotedContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsInOutroState()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "IsInOutroState");

	Params::UFortActivityDiscoverView_IsInOutroState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverView::IsImageLoading()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "IsImageLoading");

	Params::UFortActivityDiscoverView_IsImageLoading_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
// (Final, Native, Private)
// Parameters:

void UFortActivityDiscoverView::HandleMovieWidgetMediaStarted()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "HandleMovieWidgetMediaStarted");

	Params::UFortActivityDiscoverView_HandleMovieWidgetMediaStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent
// (Final, Native, Private)
// Parameters:

void UFortActivityDiscoverView::HandleMovieWidgetMediaPreEndEvent()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "HandleMovieWidgetMediaPreEndEvent");

	Params::UFortActivityDiscoverView_HandleMovieWidgetMediaPreEndEvent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortActivatableMovieWidget* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivatableMovieWidget* UFortActivityDiscoverView::GetPromotedMovieWidget()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "GetPromotedMovieWidget");

	Params::UFortActivityDiscoverView_GetPromotedMovieWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortActivatableMovieWidget* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortActivatableMovieWidget* UFortActivityDiscoverView::GetMovieWidget()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "GetMovieWidget");

	Params::UFortActivityDiscoverView_GetMovieWidget_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetAnimation* UFortActivityDiscoverView::GetKeyArtOutroAnimation()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "GetKeyArtOutroAnimation");

	Params::UFortActivityDiscoverView_GetKeyArtOutroAnimation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UFortActivityDiscoverView::GetCurrentTexture()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "GetCurrentTexture");

	Params::UFortActivityDiscoverView_GetCurrentTexture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay
// (Final, Native, Private)
// Parameters:

void UFortActivityDiscoverView::CheckUpdateDetailsDelay()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverView", "CheckUpdateDetailsDelay");

	Params::UFortActivityDiscoverView_CheckUpdateDetailsDelay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverViewV2::IsShowingSeasonalContent()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverViewV2", "IsShowingSeasonalContent");

	Params::UFortActivityDiscoverViewV2_IsShowingSeasonalContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityDiscoverViewV2::IsShowingPromotedContent()
{
	static auto Func = Class->GetFunction("FortActivityDiscoverViewV2", "IsShowingPromotedContent");

	Params::UFortActivityDiscoverViewV2_IsShowingPromotedContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityListView.GetInViewCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortActivityListView::GetInViewCount()
{
	static auto Func = Class->GetFunction("FortActivityListView", "GetInViewCount");

	Params::UFortActivityListView_GetInViewCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityLobbyTile::TrySendFirstTimeNotification()
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "TrySendFirstTimeNotification");

	Params::UFortActivityLobbyTile_TrySendFirstTimeNotification_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortActivityLobbyTile::ShowModeSetSelectionModal()
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "ShowModeSetSelectionModal");

	Params::UFortActivityLobbyTile_ShowModeSetSelectionModal_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityLobbyTile::OnShowChildActivityFirstTimeNotification()
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "OnShowChildActivityFirstTimeNotification");

	Params::UFortActivityLobbyTile_OnShowChildActivityFirstTimeNotification_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivityLobbyTile::OnShowChildActivityChangedNotification(class FText& DisplayName)
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "OnShowChildActivityChangedNotification");

	Params::UFortActivityLobbyTile_OnShowChildActivityChangedNotification_Params Parms;

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
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "OnPreviewImageChanged");

	Params::UFortActivityLobbyTile_OnPreviewImageChanged_Params Parms;

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityLobbyTile::OnHideChildActivityFirstTimeNotification()
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "OnHideChildActivityFirstTimeNotification");

	Params::UFortActivityLobbyTile_OnHideChildActivityFirstTimeNotification_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityLobbyTile::OnDetailsUpdated()
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "OnDetailsUpdated");

	Params::UFortActivityLobbyTile_OnDetailsUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.IsModeSetActivity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityLobbyTile::IsModeSetActivity()
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "IsModeSetActivity");

	Params::UFortActivityLobbyTile_IsModeSetActivity_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityLobbyTile::IsActivityEpicCreated()
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "IsActivityEpicCreated");

	Params::UFortActivityLobbyTile_IsActivityEpicCreated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UFortActivityLobbyTile::GetChildActivityDisplayName()
{
	static auto Func = Class->GetFunction("FortActivityLobbyTile", "GetChildActivityDisplayName");

	Params::UFortActivityLobbyTile_GetChildActivityDisplayName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetIsRankedSwitchAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsRankedSwitchAvailable                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityModeSetSelectionModal::SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable)
{
	static auto Func = Class->GetFunction("FortActivityModeSetSelectionModal", "SetIsRankedSwitchAvailable");

	Params::UFortActivityModeSetSelectionModal_SetIsRankedSwitchAvailable_Params Parms;

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
	static auto Func = Class->GetFunction("FortActivityModeSetSelectionModal", "SetHabaneroValues");

	Params::UFortActivityModeSetSelectionModal_SetHabaneroValues_Params Parms;

	Parms.bHabaneroEnabled = bHabaneroEnabled;
	Parms.bHabaneroExists = bHabaneroExists;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortActivityModeSetSelectionModal::SaveSelectionAndClose()
{
	static auto Func = Class->GetFunction("FortActivityModeSetSelectionModal", "SaveSelectionAndClose");

	Params::UFortActivityModeSetSelectionModal_SaveSelectionAndClose_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityModeSetSelectionModal::OnSubModeSelectionChanged()
{
	static auto Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnSubModeSelectionChanged");

	Params::UFortActivityModeSetSelectionModal_OnSubModeSelectionChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityModeSetSelectionModal::OnSubModeSelected()
{
	static auto Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnSubModeSelected");

	Params::UFortActivityModeSetSelectionModal_OnSubModeSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLoading                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityModeSetSelectionModal::OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture)
{
	static auto Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnPreviewImageChanged");

	Params::UFortActivityModeSetSelectionModal_OnPreviewImageChanged_Params Parms;

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
	static auto Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnActivityChanged");

	Params::UFortActivityModeSetSelectionModal_OnActivityChanged_Params Parms;

	Parms.GameActivity = GameActivity;
	Parms.StartingSelectedMnemonic = StartingSelectedMnemonic;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
// (Final, Native, Private)
// Parameters:

void UFortActivityPlayerBrowserTile::HandleActivitySelected()
{
	static auto Func = Class->GetFunction("FortActivityPlayerBrowserTile", "HandleActivitySelected");

	Params::UFortActivityPlayerBrowserTile_HandleActivitySelected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortActivityValidationResultValidateResult                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivitySearchView::OnActivityValidated(enum class EFortActivityValidationResult ValidateResult)
{
	static auto Func = Class->GetFunction("FortActivitySearchView", "OnActivityValidated");

	Params::UFortActivitySearchView_OnActivityValidated_Params Parms;

	Parms.ValidateResult = ValidateResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivitySearchView::OnActivityClear()
{
	static auto Func = Class->GetFunction("FortActivitySearchView", "OnActivityClear");

	Params::UFortActivitySearchView_OnActivityClear_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitInfo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivitySearchView::HandleTextCommitted(class FText& InText, enum class ETextCommit CommitInfo)
{
	static auto Func = Class->GetFunction("FortActivitySearchView", "HandleTextCommitted");

	Params::UFortActivitySearchView_HandleTextCommitted_Params Parms;

	Parms.InText = InText;
	Parms.CommitInfo = CommitInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortActivitySearchView::HandleTextChanged(class FText& Text)
{
	static auto Func = Class->GetFunction("FortActivitySearchView", "HandleTextChanged");

	Params::UFortActivitySearchView_HandleTextChanged_Params Parms;

	Parms.Text = Text;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateCCU
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CCUCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::UpdateCCU(int32 CCUCount)
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "UpdateCCU");

	Params::UFortActivityTileDetailsDisplay_UpdateCCU_Params Parms;

	Parms.CCUCount = CCUCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortActivityTileDetailsDisplay::StopTileVideo()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "StopTileVideo");

	Params::UFortActivityTileDetailsDisplay_StopTileVideo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortActivityTileDetailsDisplay::StartTileVideo()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "StartTileVideo");

	Params::UFortActivityTileDetailsDisplay_StartTileVideo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.ShouldPlayTileVideo
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bOutResult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::ShouldPlayTileVideo(bool* bOutResult)
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "ShouldPlayTileVideo");

	Params::UFortActivityTileDetailsDisplay_ShouldPlayTileVideo_Params Parms;


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
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnUpdateColumnSize");

	Params::UFortActivityTileDetailsDisplay_OnUpdateColumnSize_Params Parms;

	Parms.NewColumnSize = NewColumnSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTileActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnTileActiveSet(bool bIsTileActive)
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnTileActiveSet");

	Params::UFortActivityTileDetailsDisplay_OnTileActiveSet_Params Parms;

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bRequiresPurchase                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnRequiresPurchaseChanged(bool bRequiresPurchase)
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnRequiresPurchaseChanged");

	Params::UFortActivityTileDetailsDisplay_OnRequiresPurchaseChanged_Params Parms;

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
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnPreviewImageChanged");

	Params::UFortActivityTileDetailsDisplay_OnPreviewImageChanged_Params Parms;

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
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnPartySizeChanged");

	Params::UFortActivityTileDetailsDisplay_OnPartySizeChanged_Params Parms;

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
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLogoImageChanged");

	Params::UFortActivityTileDetailsDisplay_OnLogoImageChanged_Params Parms;

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnLocalPlayerPromotedToLeader()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLocalPlayerPromotedToLeader");

	Params::UFortActivityTileDetailsDisplay_OnLocalPlayerPromotedToLeader_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnLocalPlayerDemoted()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLocalPlayerDemoted");

	Params::UFortActivityTileDetailsDisplay_OnLocalPlayerDemoted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsFavorite                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnIsFavoriteChanged(bool bIsFavorite)
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnIsFavoriteChanged");

	Params::UFortActivityTileDetailsDisplay_OnIsFavoriteChanged_Params Parms;

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnFriendsPlayingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumPlaying                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileDetailsDisplay::OnFriendsPlayingChanged(int32 NumPlaying)
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnFriendsPlayingChanged");

	Params::UFortActivityTileDetailsDisplay_OnFriendsPlayingChanged_Params Parms;

	Parms.NumPlaying = NumPlaying;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortActivityTileDetailsDisplay::OnDetailsUpdated()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnDetailsUpdated");

	Params::UFortActivityTileDetailsDisplay_OnDetailsUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortActivityTileDetailsDisplay::OnActivityUnSelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnActivityUnSelected__DelegateSignature");

	Params::UFortActivityTileDetailsDisplay_OnActivityUnSelected__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UFortActivityTileDetailsDisplay::OnActivitySelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnActivitySelected__DelegateSignature");

	Params::UFortActivityTileDetailsDisplay_OnActivitySelected__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::IsModeSetActivity()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsModeSetActivity");

	Params::UFortActivityTileDetailsDisplay_IsModeSetActivity_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::IsActivityFavorited()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsActivityFavorited");

	Params::UFortActivityTileDetailsDisplay_IsActivityFavorited_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityEpicCreated
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::IsActivityEpicCreated()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsActivityEpicCreated");

	Params::UFortActivityTileDetailsDisplay_IsActivityEpicCreated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortInvalidActivityReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortInvalidActivityReason UFortActivityTileDetailsDisplay::GetInvalidActivityReason()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "GetInvalidActivityReason");

	Params::UFortActivityTileDetailsDisplay_GetInvalidActivityReason_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortActivityTileDetailsDisplay::DoesActivityRequirePurchase()
{
	static auto Func = Class->GetFunction("FortActivityTileDetailsDisplay", "DoesActivityRequirePurchase");

	Params::UFortActivityTileDetailsDisplay_DoesActivityRequirePurchase_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DiscoveryBrowserUI.FortActivityTileView.SetListenForMouseWheelInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bListenForInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortActivityTileView::SetListenForMouseWheelInput(bool bListenForInput)
{
	static auto Func = Class->GetFunction("FortActivityTileView", "SetListenForMouseWheelInput");

	Params::UFortActivityTileView_SetListenForMouseWheelInput_Params Parms;

	Parms.bListenForInput = bListenForInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DiscoveryBrowserUI.FortDiscoverItemListView.GetInViewCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortDiscoverItemListView::GetInViewCount()
{
	static auto Func = Class->GetFunction("FortDiscoverItemListView", "GetInViewCount");

	Params::UFortDiscoverItemListView_GetInViewCount_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
