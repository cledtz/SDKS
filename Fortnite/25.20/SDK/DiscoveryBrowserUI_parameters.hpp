#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserTabButton.OnFavoriteChanged
struct UFortActivityBrowserTabButton_OnFavoriteChanged_Params
{
public:
	bool                                         bIsFavorite;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme
struct UFortActivityBrowser_OnSwapColorScheme_Params
{
public:
	bool                                         bInIsUsingAlternateColorScheme;                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged
struct UFortActivityBrowser_OnPlayerQueueTypeChanged_Params
{
public:
	enum class EPlayerQueueType                  PlayerQueueType;                                   // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme
struct UFortActivityBrowser_OnEnableColorScheme_Params
{
public:
	bool                                         bIsColorSchemeActive;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected
struct UFortActivityBrowser_OnActivitySelected_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged
struct UFortActivityBrowser_HandleTabChanged_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateSingleFriendName
struct UFortActivityBrowserPlayWithFriendsTile_UpdateSingleFriendName_Params
{
public:
	class FText                                  SingleFriendName;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateRichPresence
struct UFortActivityBrowserPlayWithFriendsTile_UpdateRichPresence_Params
{
public:
	class FText                                  RichPresence;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdatePartyMemberNames
struct UFortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames_Params
{
public:
	class FText                                  Names;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateOtherPlayersSubText
struct UFortActivityBrowserPlayWithFriendsTile_UpdateOtherPlayersSubText_Params
{
public:
	class FText                                  OtherPlayersSubText;                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateLastInteraction
struct UFortActivityBrowserPlayWithFriendsTile_UpdateLastInteraction_Params
{
public:
	class FText                                  LastInteraction;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateIslandThumbnail
struct UFortActivityBrowserPlayWithFriendsTile_UpdateIslandThumbnail_Params
{
public:
	class UTexture*                              ThumbnailTexture;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTileActiveChanged
struct UFortActivityBrowserPlayWithFriendsTile_OnTileActiveChanged_Params
{
public:
	bool                                         bIsTileActive;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureLoadingComplete
struct UFortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete_Params
{
public:
	class UTexture*                              ThumbnailTexture;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureBeginLoading
struct UFortActivityBrowserPlayWithFriendsTile_OnTextureBeginLoading_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.HandleCTAButtonClicked
struct UFortActivityBrowserPlayWithFriendsTile_HandleCTAButtonClicked_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetMaxPartySize
struct UFortActivityBrowserPlayWithFriendsTile_GetMaxPartySize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetCTAButtonText
struct UFortActivityBrowserPlayWithFriendsTile_GetCTAButtonText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.BP_PartyInformationUpdated
struct UFortActivityBrowserPlayWithFriendsTile_BP_PartyInformationUpdated_Params
{
public:
	bool                                         bInIsTileSelected;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
struct UFortActivityBrowserRow_OnRowPeekStateChanged_Params
{
public:
	bool                                         bIsInPeekState;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
struct UFortActivityBrowserRow_OnRowMoveUp_Params
{
public:
	bool                                         bMovingOffscreen;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
struct UFortActivityBrowserRow_OnRowMoveDown_Params
{
public:
	bool                                         bMovingOffscreen;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged
struct UFortActivityBrowserRow_OnRowIsSelectedChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
struct UFortActivityBrowserRow_OnRowIsActiveChanged_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
struct UFortActivityBrowserRow_OnCategoryItemChanged_Params
{
public:
	bool                                         bPlayAnimation;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected
struct UFortActivityBrowserRow_GetIsSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
struct UFortActivityBrowserRow_GetIsInPeekState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
struct UFortActivityBrowserRow_GetIsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoStarted
struct UFortActivityBrowserRowHero_OnVideoStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoEndReached
struct UFortActivityBrowserRowHero_OnVideoEndReached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnUpdateDetailsDisplay
struct UFortActivityBrowserRowHero_OnUpdateDetailsDisplay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnTileClicked
struct UFortActivityBrowserRowHero_OnTileClicked_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnRowHeroFocusChanged
struct UFortActivityBrowserRowHero_OnRowHeroFocusChanged_Params
{
public:
	bool                                         bHasFocus;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryStatusChanged
struct UFortActivityBrowserRowHero_OnQueryStatusChanged_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryActivitiesFinished
struct UFortActivityBrowserRowHero_OnQueryActivitiesFinished_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPreviewImageChanged
struct UFortActivityBrowserRowHero_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8192[0x7];                                     // Fixing Size After Last Property..
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtOutro
struct UFortActivityBrowserRowHero_OnPlayKeyArtOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtIntro
struct UFortActivityBrowserRowHero_OnPlayKeyArtIntro_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnListViewFinishedAddingEntries
struct UFortActivityBrowserRowHero_OnListViewFinishedAddingEntries_Params
{
public:
	int32                                        ActivityCount;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.OnActivityUpdated
struct UFortActivityBrowserRowHero_OnActivityUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsShowingSeasonalContent
struct UFortActivityBrowserRowHero_IsShowingSeasonalContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsInOutroState
struct UFortActivityBrowserRowHero_IsInOutroState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.IsImageLoading
struct UFortActivityBrowserRowHero_IsImageLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleStarted
struct UFortActivityBrowserRowHero_HandleActivityVideoCycleStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleEndReached
struct UFortActivityBrowserRowHero_HandleActivityVideoCycleEndReached_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetKeyArtOutroAnimation
struct UFortActivityBrowserRowHero_GetKeyArtOutroAnimation_Params
{
public:
	class UWidgetAnimation*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingPauseDelay
struct UFortActivityBrowserRowHero_GetCyclingPauseDelay_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingDelay
struct UFortActivityBrowserRowHero_GetCyclingDelay_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCurrentTexture
struct UFortActivityBrowserRowHero_GetCurrentTexture_Params
{
public:
	class UTexture*                              ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.CycleNextActivity
struct UFortActivityBrowserRowHero_CycleNextActivity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowHero.CheckUpdateDetailsDelay
struct UFortActivityBrowserRowHero_CheckUpdateDetailsDelay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
struct UFortActivityBrowserRowList_OnQueryStatusChanged_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged
struct UFortActivityBrowserRowPromoted_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8198[0x7];                                     // Fixing Size After Last Property..
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty
struct UFortActivityBrowserView_OnSurfaceDataDirty_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason
struct UFortActivityBrowserView_GetInvalidActivityReason_Params
{
public:
	enum class EFortInvalidActivityReason        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged
struct UFortActivityBrowserRowView_OnRowChanged_Params
{
public:
	int32                                        NewCategoryIndex;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished
struct UFortActivityBrowserRowView_OnQueryActivitiesFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated
struct UFortActivityBrowserRowView_OnActivityUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
struct UFortActivityBrowserTile_HandleActivitySelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
struct UFortActivityPlayerBrowserView_PlayViewIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesStarted
struct UFortActivityPlayerBrowserView_OnQueryActivitiesStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesComplete
struct UFortActivityPlayerBrowserView_OnQueryActivitiesComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
struct UFortActivityPlayerBrowserView_OnPlayViewIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
struct UFortActivityPlayerBrowserView_BP_OnTileViewUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet
struct UFortActivityCategoryTile_OnTileActiveSet_Params
{
public:
	bool                                         bIsTileActive;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady
struct UFortActivityCategoryView_OnSurfaceDataReady_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected
struct UFortActivityCategoryView_OnCategoryTilePanelSelected_Params
{
public:
	class UFortActivityCategoryTilePanel*        SelectedPanel;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel
struct UFortActivityCategoryView_NavigateFromPanel_Params
{
public:
	enum class EUINavigation                     Direction;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81AB[0x7];                                     // Fixing Size After Last Property..
	class UFortActivityCategoryTilePanel*        NavigatingPanel;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortActivityCategoryTilePanel*        ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel
struct UFortActivityCategoryView_GetTopMostVisiblePanel_Params
{
public:
	class UFortActivityCategoryTilePanel*        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel
struct UFortActivityCategoryView_GetCurrentSelectedPanel_Params
{
public:
	class UFortActivityCategoryTilePanel*        ReturnValue;                                       // 0x0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated
struct UFortActivityCreateView_OnCreativeActivityUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason
struct UFortActivityCreateView_GetInvalidCreativeActivityReason_Params
{
public:
	enum class EFortInvalidActivityReason        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator
struct UFortActivityCreatorPageView_OnNoContentFoundForCreator_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished
struct UFortActivityCreatorPageView_OnCreatorActivitiesQueryFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay
struct UFortActivityDiscoverView_OnUpdateDetailsDisplay_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
struct UFortActivityDiscoverView_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81B5[0x7];                                     // Fixing Size After Last Property..
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro
struct UFortActivityDiscoverView_OnPlayKeyArtOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro
struct UFortActivityDiscoverView_OnPlayKeyArtIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent
struct UFortActivityDiscoverView_OnMoviePreEndEvent_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
struct UFortActivityDiscoverView_OnMoviePlayingChanged_Params
{
public:
	bool                                         bIsPlaying;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
struct UFortActivityDiscoverView_IsShowingSeasonalContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
struct UFortActivityDiscoverView_IsShowingPromotedContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState
struct UFortActivityDiscoverView_IsInOutroState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading
struct UFortActivityDiscoverView_IsImageLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
struct UFortActivityDiscoverView_HandleMovieWidgetMediaStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent
struct UFortActivityDiscoverView_HandleMovieWidgetMediaPreEndEvent_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget
struct UFortActivityDiscoverView_GetPromotedMovieWidget_Params
{
public:
	class UFortActivatableMovieWidget*           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget
struct UFortActivityDiscoverView_GetMovieWidget_Params
{
public:
	class UFortActivatableMovieWidget*           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation
struct UFortActivityDiscoverView_GetKeyArtOutroAnimation_Params
{
public:
	class UWidgetAnimation*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture
struct UFortActivityDiscoverView_GetCurrentTexture_Params
{
public:
	class UTexture*                              ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay
struct UFortActivityDiscoverView_CheckUpdateDetailsDelay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent
struct UFortActivityDiscoverViewV2_IsShowingSeasonalContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent
struct UFortActivityDiscoverViewV2_IsShowingPromotedContent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityListView.GetInViewCount
struct UFortActivityListView_GetInViewCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification
struct UFortActivityLobbyTile_TrySendFirstTimeNotification_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal
struct UFortActivityLobbyTile_ShowModeSetSelectionModal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification
struct UFortActivityLobbyTile_OnShowChildActivityFirstTimeNotification_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification
struct UFortActivityLobbyTile_OnShowChildActivityChangedNotification_Params
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
struct UFortActivityLobbyTile_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81BF[0x7];                                     // Fixing Size After Last Property..
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification
struct UFortActivityLobbyTile_OnHideChildActivityFirstTimeNotification_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
struct UFortActivityLobbyTile_OnDetailsUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.IsModeSetActivity
struct UFortActivityLobbyTile_IsModeSetActivity_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
struct UFortActivityLobbyTile_IsActivityEpicCreated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName
struct UFortActivityLobbyTile_GetChildActivityDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetIsRankedSwitchAvailable
struct UFortActivityModeSetSelectionModal_SetIsRankedSwitchAvailable_Params
{
public:
	bool                                         bIsRankedSwitchAvailable;                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetHabaneroValues
struct UFortActivityModeSetSelectionModal_SetHabaneroValues_Params
{
public:
	bool                                         bHabaneroEnabled;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHabaneroExists;                                   // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose
struct UFortActivityModeSetSelectionModal_SaveSelectionAndClose_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged
struct UFortActivityModeSetSelectionModal_OnSubModeSelectionChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected
struct UFortActivityModeSetSelectionModal_OnSubModeSelected_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged
struct UFortActivityModeSetSelectionModal_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C1[0x7];                                     // Fixing Size After Last Property..
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged
struct UFortActivityModeSetSelectionModal_OnActivityChanged_Params
{
public:
	class UFortGameActivity*                     GameActivity;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartingSelectedMnemonic;                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
struct UFortActivityPlayerBrowserTile_HandleActivitySelected_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated
struct UFortActivitySearchView_OnActivityValidated_Params
{
public:
	enum class EFortActivityValidationResult     ValidateResult;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear
struct UFortActivitySearchView_OnActivityClear_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted
struct UFortActivitySearchView_HandleTextCommitted_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitInfo;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C8[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged
struct UFortActivitySearchView_HandleTextChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateCCU
struct UFortActivityTileDetailsDisplay_UpdateCCU_Params
{
public:
	int32                                        CCUCount;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo
struct UFortActivityTileDetailsDisplay_StopTileVideo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo
struct UFortActivityTileDetailsDisplay_StartTileVideo_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.ShouldPlayTileVideo
struct UFortActivityTileDetailsDisplay_ShouldPlayTileVideo_Params
{
public:
	bool                                         bOutResult;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnUpdateColumnSize
struct UFortActivityTileDetailsDisplay_OnUpdateColumnSize_Params
{
public:
	int32                                        NewColumnSize;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
struct UFortActivityTileDetailsDisplay_OnTileActiveSet_Params
{
public:
	bool                                         bIsTileActive;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged
struct UFortActivityTileDetailsDisplay_OnRequiresPurchaseChanged_Params
{
public:
	bool                                         bRequiresPurchase;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
struct UFortActivityTileDetailsDisplay_OnPreviewImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81CC[0x7];                                     // Fixing Size After Last Property..
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
struct UFortActivityTileDetailsDisplay_OnPartySizeChanged_Params
{
public:
	int32                                        PartySize;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLogoImageChanged
struct UFortActivityTileDetailsDisplay_OnLogoImageChanged_Params
{
public:
	bool                                         bIsLoading;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81CD[0x7];                                     // Fixing Size After Last Property..
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
struct UFortActivityTileDetailsDisplay_OnLocalPlayerPromotedToLeader_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
struct UFortActivityTileDetailsDisplay_OnLocalPlayerDemoted_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
struct UFortActivityTileDetailsDisplay_OnIsFavoriteChanged_Params
{
public:
	bool                                         bIsFavorite;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnFriendsPlayingChanged
struct UFortActivityTileDetailsDisplay_OnFriendsPlayingChanged_Params
{
public:
	int32                                        NumPlaying;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
struct UFortActivityTileDetailsDisplay_OnDetailsUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
struct UFortActivityTileDetailsDisplay_OnActivityUnSelected__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
struct UFortActivityTileDetailsDisplay_OnActivitySelected__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity
struct UFortActivityTileDetailsDisplay_IsModeSetActivity_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityLocked
struct UFortActivityTileDetailsDisplay_IsActivityLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
struct UFortActivityTileDetailsDisplay_IsActivityFavorited_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
struct UFortActivityTileDetailsDisplay_GetInvalidActivityReason_Params
{
public:
	enum class EFortInvalidActivityReason        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivityCreatorDisplayText
struct UFortActivityTileDetailsDisplay_GetActivityCreatorDisplayText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase
struct UFortActivityTileDetailsDisplay_DoesActivityRequirePurchase_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DiscoveryBrowserUI.FortActivityTileView.SetListenForMouseWheelInput
struct UFortActivityTileView_SetListenForMouseWheelInput_Params
{
public:
	bool                                         bListenForInput;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DiscoveryBrowserUI.FortDiscoverItemListView.GetInViewCount
struct UFortDiscoverItemListView_GetInViewCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
