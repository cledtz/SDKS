#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x14A0 - 0x1498)
// Class DiscoveryBrowserUI.FortActivityBrowserTabButton
class UFortActivityBrowserTabButton : public UFortTabButton
{
public:
	uint8                                        Pad_117E[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserTabButton* GetDefaultObj();

	void OnFavoriteChanged(bool bIsFavorite);
};

// 0x260 (0x648 - 0x3E8)
// Class DiscoveryBrowserUI.FortActivityBrowser
class UFortActivityBrowser : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_11B9[0x8];                                     // Fixing Size After Last Property 
	class UCommonActivatableWidgetSwitcher*      Switcher_TabActivityBrowserViews;                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ShowCustomMatchmakingModal;                 // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_BackToTop;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileShowGameDetails;                      // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileAccept;                               // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_JoinAsSpectator;                            // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ShowSpectateMatchModal;                     // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTabListWidgetBase_Legacy*         TabList_BrowserTabs;                               // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPrimaryContentSetup                  PrimaryContentSetup;                               // 0x440(0x3)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11BA[0x5];                                     // Fixing Size After Last Property 
	TSubclassOf<class UFortTabButton>            TabButtonClass;                                    // 0x448(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityDetailsModal> ActivityDetailsModalClass;                         // 0x450(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityModeSetSelectionModal> ActivityModeSetSelectionModalClass;                // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonActivatableWidget>  ActivityModeSetFirstTimeNotificationModalClass;    // 0x460(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityBrowserAttributionsModal> AttributionsModalClass;                            // 0x468(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityCreatorPageView> CreatorPageViewClass;                              // 0x470(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityCategoryPageView> CategoryPageViewClass;                             // 0x478(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> SoftCustomMatchmakingModalClass;                   // 0x480(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> SoftSpectateMatchModalClass;                       // 0x4A0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortCampaignPurchaseScreen> CampaignPurchaseScreenClass;                       // 0x4C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonActivatableWidget>  CCUModalClass;                                     // 0x4C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, class UFortActivityBrowserColorSchemeAsset*> ColorSchemes;                                      // 0x4D0(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FText                                  MobileAcceptButtonBaseText;                        // 0x520(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UFortCreativeDiscoverySurfaceManager*  Manager;                                           // 0x538(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortActivityBrowserPlayWithFriendsTile> LastSelectedPlayWithFriendsTile;                   // 0x540(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11C2[0x10];                                    // Fixing Size After Last Property 
	class UFortGameActivity*                     SelectedGameActivity;                              // 0x558(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11C3[0xB0];                                    // Fixing Size After Last Property 
	class UFortActivityBrowserColorSchemeAsset*  CurrentColorScheme;                                // 0x610(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11C5[0x8];                                     // Fixing Size After Last Property 
	class UFortActivityCategoryPageView*         CachedCategoryPageView;                            // 0x620(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityCreatorPageView*          CachedCreatorPageView;                             // 0x628(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCCUModalEnabled;                                  // 0x630(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11C6[0x17];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowser* GetDefaultObj();

	void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);
	void OnPlayerQueueTypeChanged(enum class EPlayerQueueType PlayerQueueType);
	void OnEnableColorScheme(bool bIsColorSchemeActive);
	void OnActivitySelected();
	void HandleTabChanged(class FName TabId);
};

// 0x50 (0x80 - 0x30)
// Class DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
class UFortActivityBrowserColorSchemeAsset : public UDataAsset
{
public:
	TMap<class UMaterialParameterCollection*, struct FColorSchemeParamaterValues> MaterialCollectionOverrides;                       // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortActivityBrowserColorSchemeAsset* GetDefaultObj();

};

// 0x230 (0x4C0 - 0x290)
// Class DiscoveryBrowserUI.FortActivityBrowserListView
class UFortActivityBrowserListView : public UListViewBase
{
public:
	uint8                                        Pad_11D0[0xE8];                                    // Fixing Size After Last Property 
	float                                        DirectionalNavigationTimeThreshold;                // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockPositionForController;                        // 0x37C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D1[0x3];                                     // Fixing Size After Last Property 
	int32                                        LockedPositionAt;                                  // 0x380(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D3[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UFortActivityBrowserRow>   PromotedActivityClass;                             // 0x388(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityBrowserRow>   DiscoverItemRowClass;                              // 0x390(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UFortActivityBrowserRow>> RowTypes;                                          // 0x398(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D6[0xD8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserListView* GetDefaultObj();

};

// 0x60 (0x14D0 - 0x1470)
// Class DiscoveryBrowserUI.FortActivityBrowserTileBase
class UFortActivityBrowserTileBase : public UCommonButtonBase
{
public:
	uint8                                        Pad_11DA[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserTileBase* GetDefaultObj();

};

// 0xD0 (0x15A0 - 0x14D0)
// Class DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase
{
public:
	int32                                        MaxNamesToDisplay;                                 // 0x14D0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxPortraitsToDisplay;                             // 0x14D4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1210[0x10];                                    // Fixing Size After Last Property 
	class UFortJoinablePartyPortraitsDisplay*    PartyMembersAvatarsDisplay;                        // 0x14E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCTAButton*                        WBP_CTA_ButtonPrimary;                             // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsActiveInvite;                                   // 0x14F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1215[0x3];                                     // Fixing Size After Last Property 
	int32                                        CurrentPartySize;                                  // 0x14FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsPartyPrivate;                                   // 0x1500(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1217[0x7];                                     // Fixing Size After Last Property 
	class UFortGameActivity*                     CachedGameActivity;                                // 0x1508(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1218[0x10];                                    // Fixing Size After Last Property 
	TWeakObjectPtr<class USocialUser>            CachedTargetSocialUser;                            // 0x1520(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  CurrentCTAButtonText;                              // 0x1528(0x18)(Transient, NativeAccessSpecifierPrivate)
	class FText                                  JoinPartyText;                                     // 0x1540(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FText                                  RequestToJoinText;                                 // 0x1558(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1219[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserPlayWithFriendsTile* GetDefaultObj();

	void UpdateSingleFriendName(class FText& SingleFriendName);
	void UpdateRichPresence(class FText& RichPresence);
	void UpdatePartyMemberNames(class FText& Names);
	void UpdateOtherPlayersSubText(class FText& OtherPlayersSubText);
	void UpdateLastInteraction(class FText& LastInteraction);
	void UpdateIslandThumbnail(class UTexture* ThumbnailTexture);
	void OnTileActiveChanged(bool bIsTileActive);
	void OnTextureLoadingComplete(class UTexture* ThumbnailTexture);
	void OnTextureBeginLoading();
	void HandleCTAButtonClicked();
	int32 GetMaxPartySize();
	class FText GetCTAButtonText();
	void BP_PartyInformationUpdated(bool bInIsTileSelected);
};

// 0xC0 (0x390 - 0x2D0)
// Class DiscoveryBrowserUI.FortActivityBrowserRow
class UFortActivityBrowserRow : public UCommonUserWidget
{
public:
	uint8                                        Pad_125D[0xB0];                                    // Fixing Size After Last Property 
	class UCommonTextBlock*                      Text_CategoryName;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinimumVisibilityPercentageForRowActivation;       // 0x388(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1260[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserRow* GetDefaultObj();

	void OnRowPeekStateChanged(bool bIsInPeekState);
	void OnRowMoveUp(bool bMovingOffscreen);
	void OnRowMoveDown(bool bMovingOffscreen);
	void OnRowIsSelectedChanged(bool bIsSelected);
	void OnRowIsActiveChanged(bool bIsActive);
	void OnCategoryItemChanged(bool bPlayAnimation);
	bool GetIsSelected();
	bool GetIsInPeekState();
	bool GetIsActive();
};

// 0x80 (0x410 - 0x390)
// Class DiscoveryBrowserUI.FortActivityBrowserRowHero
class UFortActivityBrowserRowHero : public UFortActivityBrowserRow
{
public:
	class UFortActivityListView*                 ListView_Activities;                               // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSwipePanel*                       SwipePanel_Navigation;                             // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12B9[0x3];                                     // Fixing Size After Last Property 
	bool                                         bPlayDetailsAnimationOnScreenOpen;                 // 0x3A3(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DetailsDisplayUpdateDelay;                         // 0x3A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_SelectedActivity;                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityVideoCycle*               ActivityVideoCycleWidget;                          // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12BA[0x20];                                    // Fixing Size After Last Property 
	class UWidgetAnimation*                      BoundKeyArtOutroAnimation;                         // 0x3D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12BB[0x2];                                     // Fixing Size After Last Property 
	bool                                         bShouldAutoCycle;                                  // 0x3E2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12BC[0x2D];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserRowHero* GetDefaultObj();

	void OnVideoStarted();
	void OnVideoEndReached();
	void OnUpdateDetailsDisplay();
	void OnTileClicked();
	void OnRowHeroFocusChanged(bool bHasFocus);
	void OnQueryStatusChanged(bool bIsActive);
	void OnQueryActivitiesFinished();
	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnPlayKeyArtOutro();
	void OnPlayKeyArtIntro();
	void OnListViewFinishedAddingEntries(int32 ActivityCount);
	void OnActivityUpdated();
	bool IsShowingSeasonalContent();
	bool IsInOutroState();
	bool IsImageLoading();
	void HandleActivityVideoCycleStarted();
	void HandleActivityVideoCycleEndReached();
	class UWidgetAnimation* GetKeyArtOutroAnimation();
	float GetCyclingPauseDelay();
	float GetCyclingDelay();
	class UTexture* GetCurrentTexture();
	void CycleNextActivity();
	void CheckUpdateDetailsDelay();
};

// 0x20 (0x3B0 - 0x390)
// Class DiscoveryBrowserUI.FortActivityBrowserRowList
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{
public:
	class UFortActivityListView*                 ListView_Activities;                               // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PageLeft;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PageRight;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12CB[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserRowList* GetDefaultObj();

	void OnQueryStatusChanged(bool bIsActive);
};

// 0x8 (0x398 - 0x390)
// Class DiscoveryBrowserUI.FortActivityBrowserRowPromoted
class UFortActivityBrowserRowPromoted : public UFortActivityBrowserRow
{
public:
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActivityBrowserRowPromoted* GetDefaultObj();

	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
};

// 0xA8 (0x4E0 - 0x438)
// Class DiscoveryBrowserUI.FortActivityBrowserView
class UFortActivityBrowserView : public UFortActivityView
{
public:
	uint8                                        Pad_12F4[0x8];                                     // Fixing Size After Last Property 
	bool                                         bShowCustomMatchmakingModalButton;                 // 0x440(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowSpectateMatchModalButton;                     // 0x441(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowMobileGameDetailsButton;                      // 0x442(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowMobileAcceptButton;                           // 0x443(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowBackToTopButton;                              // 0x444(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12F5[0x3];                                     // Fixing Size After Last Property 
	class FName                                  DiscoverySurfaceName;                              // 0x448(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12F6[0x94];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserView* GetDefaultObj();

	void OnSurfaceDataDirty();
	enum class EFortInvalidActivityReason GetInvalidActivityReason();
};

// 0x190 (0x670 - 0x4E0)
// Class DiscoveryBrowserUI.FortActivityBrowserRowView
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_1306[0x8];                                     // Fixing Size After Last Property 
	float                                        MouseWheelScrollTimeThreshold;                     // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1307[0x4];                                     // Fixing Size After Last Property 
	class UFortActivityBrowserListView*          BrowserList_Activities;                            // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1309[0x60];                                    // Fixing Size After Last Property 
	class FName                                  TabNameID;                                         // 0x558(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_130A[0x4];                                     // Fixing Size After Last Property 
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x560(0xF0)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPrivate)
	class UFortSwipePanel*                       SwipePanel_Navigation;                             // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_130B[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserRowView* GetDefaultObj();

	void OnRowChanged(int32 NewCategoryIndex);
	void OnQueryActivitiesFinished();
	void OnActivityUpdated();
};

// 0x40 (0x1510 - 0x14D0)
// Class DiscoveryBrowserUI.FortActivityBrowserTile
class UFortActivityBrowserTile : public UFortActivityBrowserTileBase
{
public:
	class UFortActivityTileDetailsDisplay*       Display_TileDetails;                               // 0x14D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1314[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserTile* GetDefaultObj();

	void HandleActivitySelected();
};

// 0x130 (0x610 - 0x4E0)
// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_131D[0x8];                                     // Fixing Size After Last Property 
	class UFortGameActivityProvider*             ActivityProvider;                                  // 0x4E8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortActivityTileView*                 TileView_PlayerActivities;                         // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TabNameID;                                         // 0x4F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1320[0x4];                                     // Fixing Size After Last Property 
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x500(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	enum class EFortCreativeDiscoveryPlayHistoryType PlayHistoryProviderType;                           // 0x5F0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1323[0x1F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityPlayerBrowserView* GetDefaultObj();

	void PlayViewIntro();
	void OnQueryActivitiesStarted();
	void OnQueryActivitiesComplete();
	void OnPlayViewIntro();
	void BP_OnTileViewUpdated();
};

// 0x40 (0x650 - 0x610)
// Class DiscoveryBrowserUI.FortActivityCategoryPageView
class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{
public:
	uint8                                        Pad_1326[0x8];                                     // Fixing Size After Last Property 
	class UCommonRichTextBlock*                  Text_CategoryTitle;                                // 0x618(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BackToTop;                                  // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x628(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_MobileAccept;                               // 0x630(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x638(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_MobileShowGameDetails;                      // 0x640(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_132B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityCategoryPageView* GetDefaultObj();

};

// 0x90 (0x1500 - 0x1470)
// Class DiscoveryBrowserUI.FortActivityTileViewTileBase
class UFortActivityTileViewTileBase : public UCommonButtonBase
{
public:
	uint8                                        Pad_1331[0x90];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityTileViewTileBase* GetDefaultObj();

};

// 0x10 (0x1510 - 0x1500)
// Class DiscoveryBrowserUI.FortActivityCategoryTile
class UFortActivityCategoryTile : public UFortActivityTileViewTileBase
{
public:
	class UCommonTextBlock*                      Text_CategoryTitle;                                // 0x1500(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1337[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityCategoryTile* GetDefaultObj();

	void OnTileActiveSet(bool bIsTileActive);
};

// 0x70 (0x340 - 0x2D0)
// Class DiscoveryBrowserUI.FortActivityCategoryTilePanel
class UFortActivityCategoryTilePanel : public UCommonUserWidget
{
public:
	class UFortActivityTileView*                 TileView_Categories;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileViewQueryThreshold;                            // 0x2E0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1340[0x4];                                     // Fixing Size After Last Property 
	class UFortCreativeDiscoveryActivityProvider* CachedActivityProvider;                            // 0x2E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1341[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityCategoryTilePanel* GetDefaultObj();

};

// 0x120 (0x600 - 0x4E0)
// Class DiscoveryBrowserUI.FortActivityCategoryView
class UFortActivityCategoryView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_134C[0x8];                                     // Fixing Size After Last Property 
	class FName                                  TabNameID;                                         // 0x4E8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_134D[0x4];                                     // Fixing Size After Last Property 
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x4F0(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UFortActivityCategoryTilePanel*        TilePanel_Featured;                                // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityCategoryTilePanel*        TilePanel_All;                                     // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityCategoryTilePanel*        CurrentSelectedPanel;                              // 0x5F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_134E[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityCategoryView* GetDefaultObj();

	void OnSurfaceDataReady();
	void OnCategoryTilePanelSelected(class UFortActivityCategoryTilePanel* SelectedPanel);
	class UFortActivityCategoryTilePanel* NavigateFromPanel(enum class EUINavigation Direction, class UFortActivityCategoryTilePanel* NavigatingPanel);
	class UFortActivityCategoryTilePanel* GetTopMostVisiblePanel();
	class UFortActivityCategoryTilePanel* GetCurrentSelectedPanel();
};

// 0x120 (0x600 - 0x4E0)
// Class DiscoveryBrowserUI.FortActivityCreateView
class UFortActivityCreateView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_1351[0x8];                                     // Fixing Size After Last Property 
	class FName                                  TabNameID;                                         // 0x4E8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1352[0x4];                                     // Fixing Size After Last Property 
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x4F0(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Create;                                     // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1353[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityCreateView* GetDefaultObj();

	void OnCreativeActivityUpdated();
	enum class EFortInvalidActivityReason GetInvalidCreativeActivityReason();
};

// 0x90 (0x6E0 - 0x650)
// Class DiscoveryBrowserUI.FortActivityCreatorPageView
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{
public:
	uint8                                        Pad_1357[0x8];                                     // Fixing Size After Last Property 
	class UFortGameActivity*                     ActivityDetailsSelectedGameActivity;               // 0x658(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1359[0x20];                                    // Fixing Size After Last Property 
	int32                                        AmountOfCreatorLinkEntriesQueried;                 // 0x680(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ProcessedCreatorLinkEntries;                       // 0x684(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AmountOfEntriesQueried;                            // 0x688(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_135A[0x54];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityCreatorPageView* GetDefaultObj();

	void OnNoContentFoundForCreator();
	void OnCreatorActivitiesQueryFinished();
};

// 0xA0 (0x710 - 0x670)
// Class DiscoveryBrowserUI.FortActivityDiscoverView
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{
public:
	bool                                         bPlayDetailsAnimationOnScreenOpen;                 // 0x670(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_137E[0x3];                                     // Fixing Size After Last Property 
	float                                        DetailsDisplayUpdateDelay;                         // 0x674(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivatableMovieWidget> MovieWidgetClass;                                  // 0x678(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_SelectedActivity;                   // 0x680(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_PromotedActivity;                   // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          Panel_VideoSlot;                                   // 0x690(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          Panel_PromotedVideoSlot;                           // 0x698(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivatableMovieWidget*           ActivityMovieWidget;                               // 0x6A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivatableMovieWidget*           PromotedActivityMovieWidget;                       // 0x6A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_137F[0x48];                                    // Fixing Size After Last Property 
	class UWidgetAnimation*                      BoundKeyArtOutroAnimation;                         // 0x6F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1381[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityDiscoverView* GetDefaultObj();

	void OnUpdateDetailsDisplay();
	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnPlayKeyArtOutro();
	void OnPlayKeyArtIntro();
	void OnMoviePreEndEvent();
	void OnMoviePlayingChanged(bool bIsPlaying);
	bool IsShowingSeasonalContent();
	bool IsShowingPromotedContent();
	bool IsInOutroState();
	bool IsImageLoading();
	void HandleMovieWidgetMediaStarted();
	void HandleMovieWidgetMediaPreEndEvent();
	class UFortActivatableMovieWidget* GetPromotedMovieWidget();
	class UFortActivatableMovieWidget* GetMovieWidget();
	class UWidgetAnimation* GetKeyArtOutroAnimation();
	class UTexture* GetCurrentTexture();
	void CheckUpdateDetailsDelay();
};

// 0x50 (0x6C0 - 0x670)
// Class DiscoveryBrowserUI.FortActivityDiscoverViewV2
class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView
{
public:
	uint8                                        Pad_1384[0x30];                                    // Fixing Size After Last Property 
	class UFortActivitySelector*                 ActivitySelector;                                  // 0x6A0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityDetailsModal> ActivityDetailsModalClass;                         // 0x6A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityCreatorPageView> ActivityCreatorPageViewClass;                      // 0x6B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1387[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityDiscoverViewV2* GetDefaultObj();

	bool IsShowingSeasonalContent();
	bool IsShowingPromotedContent();
};

// 0x0 (0x610 - 0x610)
// Class DiscoveryBrowserUI.FortActivityFavoriteBrowserView
class UFortActivityFavoriteBrowserView : public UFortActivityPlayerBrowserView
{
public:

	static class UClass* StaticClass();
	static class UFortActivityFavoriteBrowserView* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class DiscoveryBrowserUI.FortActivityListItemWrapper
class UFortActivityListItemWrapper : public UObject
{
public:
	uint8                                        Pad_1389[0x10];                                    // Fixing Size After Last Property 
	class UFortGameActivity*                     GameActivity;                                      // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActivityListItemWrapper* GetDefaultObj();

};

// 0x188 (0x418 - 0x290)
// Class DiscoveryBrowserUI.FortActivityListView
class UFortActivityListView : public UListViewBase
{
public:
	uint8                                        Pad_138D[0xE8];                                    // Fixing Size After Last Property 
	float                                        DirectionalNavigationTimeThreshold;                // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x37C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_138E[0x3];                                     // Fixing Size After Last Property 
	float                                        EntrySpacing;                                      // 0x380(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCircularNavigationEnabled;                        // 0x384(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_138F[0x3];                                     // Fixing Size After Last Property 
	TMap<enum class EActivityBrowserTileStyle, TSubclassOf<class UFortActivityBrowserTileBase>> TileTypes;                                         // 0x388(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1390[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityListView* GetDefaultObj();

	int32 GetInViewCount();
};

// 0x70 (0x1530 - 0x14C0)
// Class DiscoveryBrowserUI.FortActivityLobbyTile
class UFortActivityLobbyTile : public UCommonButtonLegacy
{
public:
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x14C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityBrowserTag*               ActivityBrowserTag_EpicOriginal;                   // 0x14C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityModeSetSelectionModal> ActivityModeSetSelectionModalClass;                // 0x14D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGameActivityProvider*             ActivityProvider;                                  // 0x14D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortGameActivity*>             CachedQueriedActivities;                           // 0x14E0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13A0[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityLobbyTile* GetDefaultObj();

	void TrySendFirstTimeNotification();
	void ShowModeSetSelectionModal();
	void OnShowChildActivityFirstTimeNotification();
	void OnShowChildActivityChangedNotification(class FText& DisplayName);
	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnHideChildActivityFirstTimeNotification();
	void OnDetailsUpdated();
	bool IsModeSetActivity();
	bool IsActivityEpicCreated();
	class FText GetChildActivityDisplayName();
};

// 0x80 (0x468 - 0x3E8)
// Class DiscoveryBrowserUI.FortActivityModeSetSelectionModal
class UFortActivityModeSetSelectionModal : public UCommonActivatableWidget
{
public:
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13AA[0x40];                                    // Fixing Size After Last Property 
	class UCommonButtonBase*                     Button_Back;                                       // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_BackBoard;                                  // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityModeSetSelection*         List_SubModeList;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivitySquadFillButton*          Button_ActivitySquadFill;                          // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityPrivacyButton*            Button_ActivityPrivacy;                            // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityHabaneroButton*           Button_Activity_Habanero;                          // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13AB[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityModeSetSelectionModal* GetDefaultObj();

	void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable);
	void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists);
	void SaveSelectionAndClose();
	void OnSubModeSelectionChanged();
	void OnSubModeSelected();
	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnActivityChanged(class UFortGameActivity* GameActivity, const class FString& StartingSelectedMnemonic);
};

// 0x50 (0x1550 - 0x1500)
// Class DiscoveryBrowserUI.FortActivityPlayerBrowserTile
class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase
{
public:
	class UFortActivityTileDetailsDisplay*       Display_TileDetails;                               // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_LastPlayedDate;                               // 0x1508(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B1[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityPlayerBrowserTile* GetDefaultObj();

	void HandleActivitySelected();
};

// 0x140 (0x620 - 0x4E0)
// Class DiscoveryBrowserUI.FortActivityPlayerView
class UFortActivityPlayerView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_13B3[0x8];                                     // Fixing Size After Last Property 
	class FName                                  TabNameID;                                         // 0x4E8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13B5[0x4];                                     // Fixing Size After Last Property 
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x4F0(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonButtonBase>         TabButtonClass;                                    // 0x5E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTabListWidgetBase_Legacy*         TabList_PlayerViewTabs;                            // 0x5E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidgetSwitcher*      Switcher_PlayerBrowserViews;                       // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityPlayerBrowserView*        BrowserView_Favorites;                             // 0x5F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityPlayerBrowserView*        BrowserView_History;                               // 0x600(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13BA[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityPlayerView* GetDefaultObj();

};

// 0x8 (0x14A0 - 0x1498)
// Class DiscoveryBrowserUI.FortActivityPlayerViewTabButton
class UFortActivityPlayerViewTabButton : public UFortTabButton
{
public:
	class UCommonTextBlock*                      Text_Count;                                        // 0x1498(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActivityPlayerViewTabButton* GetDefaultObj();

};

// 0x160 (0x640 - 0x4E0)
// Class DiscoveryBrowserUI.FortActivitySearchView
class UFortActivitySearchView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_13CA[0x8];                                     // Fixing Size After Last Property 
	class FName                                  TabNameID;                                         // 0x4E8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13CB[0x4];                                     // Fixing Size After Last Property 
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x4F0(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditableText_IslandLink;                           // 0x5E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13CC[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivitySearchView* GetDefaultObj();

	void OnActivityValidated(enum class EFortActivityValidationResult ValidateResult);
	void OnActivityClear();
	void HandleTextCommitted(class FText& InText, enum class ETextCommit CommitInfo);
	void HandleTextChanged(class FText& Text);
};

// 0x0 (0x610 - 0x610)
// Class DiscoveryBrowserUI.FortActivitySeasonalBrowserView
class UFortActivitySeasonalBrowserView : public UFortActivityPlayerBrowserView
{
public:

	static class UClass* StaticClass();
	static class UFortActivitySeasonalBrowserView* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class DiscoveryBrowserUI.FortActivitySelector
class UFortActivitySelector : public UObject
{
public:
	uint8                                        Pad_13D9[0x18];                                    // Fixing Size After Last Property 
	class UFortGameActivity*                     SelectedGameActivity;                              // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13DA[0x8];                                     // Fixing Size After Last Property 
	TMap<class FName, class UFortActivityBrowserColorSchemeAsset*> ColorSchemes;                                      // 0x50(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortActivityBrowserColorSchemeAsset*  CurrentColorScheme;                                // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13DE[0x20];                                    // Fixing Size After Last Property 
	class UFortActivityCreatorPageView*          CachedCreatorPageView;                             // 0xC8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActivitySelector* GetDefaultObj();

	void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);
	void OnEnableColorScheme(bool bIsColorSchemeActive);
};

// 0x140 (0x15B0 - 0x1470)
// Class DiscoveryBrowserUI.FortActivityTileDetailsDisplay
class UFortActivityTileDetailsDisplay : public UCommonButtonBase
{
public:
	FMulticastInlineDelegateProperty_            OnActivitySelectedDelegate;                        // 0x1470(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnActivityUnSelectedDelegate;                      // 0x1480(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	bool                                         bShowDetailsButton;                                // 0x1490(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1418[0x3];                                     // Fixing Size After Last Property 
	int32                                        DefaultColumnSize;                                 // 0x1494(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x1498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_PlayerCount;                                  // 0x14A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Favorite;                                   // 0x14A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Details;                                    // 0x14B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityBrowserTag*               ActivityBrowserTag_EpicOriginal;                   // 0x14B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_DebugId;                                      // 0x14C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSqueegeeWidgetInjectionSlot*      SqueegeeInjectionSlot;                             // 0x14C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityVideoCycle*               ActivityVideoCycleWidget;                          // 0x14D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<uint32, enum class ECreativeLinkPreviewSize> MinColumnSizeToImageSize;                          // 0x14D8(0x50)(Config, NativeAccessSpecifierPrivate)
	uint8                                        MaxMobileColumnSize;                               // 0x1528(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        MinMobileColumnSize;                               // 0x1529(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsVideoEnabledForDynamicTileSizingV2;             // 0x152A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_141C[0x85];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityTileDetailsDisplay* GetDefaultObj();

	void UpdateCCU(int32 CCUCount);
	void StopTileVideo();
	void StartTileVideo();
	void ShouldPlayTileVideo(bool* bOutResult);
	void OnUpdateColumnSize(int32 NewColumnSize);
	void OnTileActiveSet(bool bIsTileActive);
	void OnRequiresPurchaseChanged(bool bRequiresPurchase);
	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnPartySizeChanged(int32 PartySize);
	void OnLogoImageChanged(bool bIsLoading, class UTexture* Texture);
	void OnLocalPlayerPromotedToLeader();
	void OnLocalPlayerDemoted();
	void OnIsFavoriteChanged(bool bIsFavorite);
	void OnFriendsPlayingChanged(int32 NumPlaying);
	void OnDetailsUpdated();
	void OnActivityUnSelected__DelegateSignature();
	void OnActivitySelected__DelegateSignature();
	bool IsModeSetActivity();
	bool IsActivityLocked();
	bool IsActivityFavorited();
	enum class EFortInvalidActivityReason GetInvalidActivityReason();
	class FString GetActivityCreatorDisplayText();
	bool DoesActivityRequirePurchase();
};

// 0x8 (0xC00 - 0xBF8)
// Class DiscoveryBrowserUI.FortActivityTileView
class UFortActivityTileView : public UCommonTileView
{
public:
	uint8                                        Pad_142B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityTileView* GetDefaultObj();

	void SetListenForMouseWheelInput(bool bListenForInput);
};

// 0x50 (0x3E0 - 0x390)
// Class DiscoveryBrowserUI.FortDiscoverItemBrowserRow
class UFortDiscoverItemBrowserRow : public UFortActivityBrowserRow
{
public:
	class UFortDiscoverItemListView*             ListView_Tiles;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PageLeft;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PageRight;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_142F[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortDiscoverItemBrowserRow* GetDefaultObj();

};

// 0x140 (0x3D0 - 0x290)
// Class DiscoveryBrowserUI.FortDiscoverItemListView
class UFortDiscoverItemListView : public UListViewBase
{
public:
	uint8                                        Pad_1433[0xE8];                                    // Fixing Size After Last Property 
	float                                        DirectionalNavigationTimeThreshold;                // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1435[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UFortActivityBrowserPlayWithFriendsTile> PlayWithFriendsEntryWidgetClass;                   // 0x380(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EOrientation                      Orientation;                                       // 0x388(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1436[0x3];                                     // Fixing Size After Last Property 
	float                                        EntrySpacing;                                      // 0x38C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCircularNavigationEnabled;                        // 0x390(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1437[0x3F];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortDiscoverItemListView* GetDefaultObj();

	int32 GetInViewCount();
};

// 0x10 (0xB0 - 0xA0)
// Class DiscoveryBrowserUI.ActivityLibraryComponent
class UActivityLibraryComponent : public UActorComponent
{
public:
	uint8                                        Pad_143A[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UActivityLibraryComponent* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class DiscoveryBrowserUI.FortActivityBrowserContext
class UFortActivityBrowserContext : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_143C[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortActivityBrowserContext* GetDefaultObj();

};

// 0x60 (0x100 - 0xA0)
// Class DiscoveryBrowserUI.OverrideMatchmakingUIComponent
class UOverrideMatchmakingUIComponent : public UActorComponent
{
public:
	struct FMatchmakingUIOverride                MatchmakingUIOverride;                             // 0xA0(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOverrideMatchmakingUIComponent* GetDefaultObj();

};

}


