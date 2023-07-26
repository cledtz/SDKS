#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_817E[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserTabButton");
		return Clss;
	}

	void OnFavoriteChanged(bool bIsFavorite);
};

// 0x278 (0x670 - 0x3F8)
// Class DiscoveryBrowserUI.FortActivityBrowser
class UFortActivityBrowser : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_817F[0x8];                                     // Fixing Size After Last Property..
	class UCommonActivatableWidgetSwitcher*      Switcher_TabActivityBrowserViews;                  // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ShowCustomMatchmakingModal;                 // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_BackToTop;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileShowGameDetails;                      // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileAccept;                               // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_JoinAsSpectator;                            // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ShowSpectateMatchModal;                     // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTabListWidgetBase_Legacy*         TabList_BrowserTabs;                               // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPrimaryContentSetup                  PrimaryContentSetup;                               // 0x450(0x3)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8180[0x5];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortTabButton>            TabButtonClass;                                    // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityDetailsModal> ActivityDetailsModalClass;                         // 0x460(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityModeSetSelectionModal> ActivityModeSetSelectionModalClass;                // 0x468(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonActivatableWidget>  ActivityModeSetFirstTimeNotificationModalClass;    // 0x470(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityBrowserAttributionsModal> AttributionsModalClass;                            // 0x478(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityCreatorPageView> CreatorPageViewClass;                              // 0x480(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityCategoryPageView> CategoryPageViewClass;                             // 0x488(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> SoftCustomMatchmakingModalClass;                   // 0x490(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> SoftSpectateMatchModalClass;                       // 0x4B8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortCampaignPurchaseScreen> CampaignPurchaseScreenClass;                       // 0x4E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonActivatableWidget>  CCUModalClass;                                     // 0x4E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, class UFortActivityBrowserColorSchemeAsset*> ColorSchemes;                                      // 0x4F0(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FText                                  MobileAcceptButtonBaseText;                        // 0x540(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UFortCreativeDiscoverySurfaceManager*  Manager;                                           // 0x558(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortActivityBrowserPlayWithFriendsTile> LastSelectedPlayWithFriendsTile;                   // 0x560(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FCachedSurfaceData>            CachedSurfacesData;                                // 0x568(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8181[0x10];                                    // Fixing Size After Last Property..
	class UFortGameActivity*                     SelectedGameActivity;                              // 0x588(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8182[0xA0];                                    // Fixing Size After Last Property..
	class UFortGameActivityProvider*             CachedWinterfestActivityProvider;                  // 0x630(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8183[0x10];                                    // Fixing Size After Last Property..
	class UFortActivityBrowserColorSchemeAsset*  CurrentColorScheme;                                // 0x648(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8184[0x8];                                     // Fixing Size After Last Property..
	class UFortActivityCategoryPageView*         CachedCategoryPageView;                            // 0x658(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityCreatorPageView*          CachedCreatorPageView;                             // 0x660(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCCUModalEnabled;                                  // 0x668(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8185[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowser");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserColorSchemeAsset");
		return Clss;
	}

};

// 0x230 (0x4C0 - 0x290)
// Class DiscoveryBrowserUI.FortActivityBrowserListView
class UFortActivityBrowserListView : public UListViewBase
{
public:
	uint8                                        Pad_8186[0xE8];                                    // Fixing Size After Last Property..
	float                                        DirectionalNavigationTimeThreshold;                // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockPositionForController;                        // 0x37C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8187[0x3];                                     // Fixing Size After Last Property..
	int32                                        LockedPositionAt;                                  // 0x380(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8188[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortActivityBrowserRow>   PromotedActivityClass;                             // 0x388(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivityBrowserRow>   DiscoverItemRowClass;                              // 0x390(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UFortActivityBrowserRow>> RowTypes;                                          // 0x398(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8189[0xD8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserListView");
		return Clss;
	}

};

// 0x60 (0x14D0 - 0x1470)
// Class DiscoveryBrowserUI.FortActivityBrowserTileBase
class UFortActivityBrowserTileBase : public UCommonButtonBase
{
public:
	uint8                                        Pad_818A[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserTileBase");
		return Clss;
	}

};

// 0xD0 (0x15A0 - 0x14D0)
// Class DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase
{
public:
	int32                                        MaxNamesToDisplay;                                 // 0x14D0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxPortraitsToDisplay;                             // 0x14D4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_818B[0x10];                                    // Fixing Size After Last Property..
	class UFortJoinablePartyPortraitsDisplay*    PartyMembersAvatarsDisplay;                        // 0x14E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCTAButton*                        WBP_CTA_ButtonPrimary;                             // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsActiveInvite;                                   // 0x14F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_818C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CurrentPartySize;                                  // 0x14FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsPartyPrivate;                                   // 0x1500(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_818D[0x7];                                     // Fixing Size After Last Property..
	class UFortGameActivity*                     CachedGameActivity;                                // 0x1508(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_818E[0x10];                                    // Fixing Size After Last Property..
	TWeakObjectPtr<class USocialUser>            CachedTargetSocialUser;                            // 0x1520(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  CurrentCTAButtonText;                              // 0x1528(0x18)(Transient, NativeAccessSpecifierPrivate)
	class FText                                  JoinPartyText;                                     // 0x1540(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FText                                  RequestToJoinText;                                 // 0x1558(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_818F[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserPlayWithFriendsTile");
		return Clss;
	}

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
	uint8                                        Pad_8190[0xB0];                                    // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_CategoryName;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinimumVisibilityPercentageForRowActivation;       // 0x388(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8191[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserRow");
		return Clss;
	}

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
	uint8                                        Pad_8193[0x3];                                     // Fixing Size After Last Property..
	bool                                         bPlayDetailsAnimationOnScreenOpen;                 // 0x3A3(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DetailsDisplayUpdateDelay;                         // 0x3A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_SelectedActivity;                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityVideoCycle*               ActivityVideoCycleWidget;                          // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8194[0x20];                                    // Fixing Size After Last Property..
	class UWidgetAnimation*                      BoundKeyArtOutroAnimation;                         // 0x3D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8195[0x2];                                     // Fixing Size After Last Property..
	bool                                         bShouldAutoCycle;                                  // 0x3E2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8196[0x2D];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserRowHero");
		return Clss;
	}

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
	uint8                                        Pad_8197[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserRowList");
		return Clss;
	}

	void OnQueryStatusChanged(bool bIsActive);
};

// 0x8 (0x398 - 0x390)
// Class DiscoveryBrowserUI.FortActivityBrowserRowPromoted
class UFortActivityBrowserRowPromoted : public UFortActivityBrowserRow
{
public:
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserRowPromoted");
		return Clss;
	}

	void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);
};

// 0xA8 (0x4F0 - 0x448)
// Class DiscoveryBrowserUI.FortActivityBrowserView
class UFortActivityBrowserView : public UFortActivityView
{
public:
	uint8                                        Pad_8199[0x8];                                     // Fixing Size After Last Property..
	bool                                         bShowCustomMatchmakingModalButton;                 // 0x450(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowSpectateMatchModalButton;                     // 0x451(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowMobileGameDetailsButton;                      // 0x452(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowMobileAcceptButton;                           // 0x453(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowBackToTopButton;                              // 0x454(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_819A[0x3];                                     // Fixing Size After Last Property..
	class FName                                  DiscoverySurfaceName;                              // 0x458(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_819B[0x94];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserView");
		return Clss;
	}

	void OnSurfaceDataDirty();
	enum class EFortInvalidActivityReason GetInvalidActivityReason();
};

// 0x190 (0x680 - 0x4F0)
// Class DiscoveryBrowserUI.FortActivityBrowserRowView
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_819C[0x8];                                     // Fixing Size After Last Property..
	float                                        MouseWheelScrollTimeThreshold;                     // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_819D[0x4];                                     // Fixing Size After Last Property..
	class UFortActivityBrowserListView*          BrowserList_Activities;                            // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_819E[0x60];                                    // Fixing Size After Last Property..
	class FName                                  TabNameID;                                         // 0x568(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_819F[0x4];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x570(0xF0)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPrivate)
	class UFortSwipePanel*                       SwipePanel_Navigation;                             // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81A0[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserRowView");
		return Clss;
	}

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
	uint8                                        Pad_81A1[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserTile");
		return Clss;
	}

	void HandleActivitySelected();
};

// 0x130 (0x620 - 0x4F0)
// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_81A2[0x8];                                     // Fixing Size After Last Property..
	class UFortGameActivityProvider*             ActivityProvider;                                  // 0x4F8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortActivityTileView*                 TileView_PlayerActivities;                         // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TabNameID;                                         // 0x508(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81A3[0x4];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x510(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	enum class EFortCreativeDiscoveryPlayHistoryType PlayHistoryProviderType;                           // 0x600(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81A4[0x1F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityPlayerBrowserView");
		return Clss;
	}

	void PlayViewIntro();
	void OnQueryActivitiesStarted();
	void OnQueryActivitiesComplete();
	void OnPlayViewIntro();
	void BP_OnTileViewUpdated();
};

// 0x40 (0x660 - 0x620)
// Class DiscoveryBrowserUI.FortActivityCategoryPageView
class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{
public:
	uint8                                        Pad_81A5[0x8];                                     // Fixing Size After Last Property..
	class UCommonRichTextBlock*                  Text_CategoryTitle;                                // 0x628(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_BackToTop;                                  // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x638(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_MobileAccept;                               // 0x640(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x648(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_MobileShowGameDetails;                      // 0x650(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_81A6[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityCategoryPageView");
		return Clss;
	}

};

// 0x90 (0x1500 - 0x1470)
// Class DiscoveryBrowserUI.FortActivityTileViewTileBase
class UFortActivityTileViewTileBase : public UCommonButtonBase
{
public:
	uint8                                        Pad_81A7[0x90];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityTileViewTileBase");
		return Clss;
	}

};

// 0x10 (0x1510 - 0x1500)
// Class DiscoveryBrowserUI.FortActivityCategoryTile
class UFortActivityCategoryTile : public UFortActivityTileViewTileBase
{
public:
	class UCommonTextBlock*                      Text_CategoryTitle;                                // 0x1500(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81A8[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityCategoryTile");
		return Clss;
	}

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
	uint8                                        Pad_81A9[0x4];                                     // Fixing Size After Last Property..
	class UFortCreativeDiscoveryActivityProvider* CachedActivityProvider;                            // 0x2E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81AA[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityCategoryTilePanel");
		return Clss;
	}

};

// 0x120 (0x610 - 0x4F0)
// Class DiscoveryBrowserUI.FortActivityCategoryView
class UFortActivityCategoryView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_81AC[0x8];                                     // Fixing Size After Last Property..
	class FName                                  TabNameID;                                         // 0x4F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81AD[0x4];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x500(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UFortActivityCategoryTilePanel*        TilePanel_Featured;                                // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityCategoryTilePanel*        TilePanel_All;                                     // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityCategoryTilePanel*        CurrentSelectedPanel;                              // 0x600(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81AE[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityCategoryView");
		return Clss;
	}

	void OnSurfaceDataReady();
	void OnCategoryTilePanelSelected(class UFortActivityCategoryTilePanel* SelectedPanel);
	class UFortActivityCategoryTilePanel* NavigateFromPanel(enum class EUINavigation Direction, class UFortActivityCategoryTilePanel* NavigatingPanel);
	class UFortActivityCategoryTilePanel* GetTopMostVisiblePanel();
	class UFortActivityCategoryTilePanel* GetCurrentSelectedPanel();
};

// 0x120 (0x610 - 0x4F0)
// Class DiscoveryBrowserUI.FortActivityCreateView
class UFortActivityCreateView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_81AF[0x8];                                     // Fixing Size After Last Property..
	class FName                                  TabNameID;                                         // 0x4F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81B0[0x4];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x500(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Create;                                     // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81B1[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityCreateView");
		return Clss;
	}

	void OnCreativeActivityUpdated();
	enum class EFortInvalidActivityReason GetInvalidCreativeActivityReason();
};

// 0x90 (0x6F0 - 0x660)
// Class DiscoveryBrowserUI.FortActivityCreatorPageView
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{
public:
	uint8                                        Pad_81B2[0x8];                                     // Fixing Size After Last Property..
	class UFortGameActivity*                     ActivityDetailsSelectedGameActivity;               // 0x668(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81B3[0x20];                                    // Fixing Size After Last Property..
	int32                                        AmountOfCreatorLinkEntriesQueried;                 // 0x690(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ProcessedCreatorLinkEntries;                       // 0x694(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AmountOfEntriesQueried;                            // 0x698(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81B4[0x54];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityCreatorPageView");
		return Clss;
	}

	void OnNoContentFoundForCreator();
	void OnCreatorActivitiesQueryFinished();
};

// 0xA0 (0x720 - 0x680)
// Class DiscoveryBrowserUI.FortActivityDiscoverView
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{
public:
	bool                                         bPlayDetailsAnimationOnScreenOpen;                 // 0x680(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81B6[0x3];                                     // Fixing Size After Last Property..
	float                                        DetailsDisplayUpdateDelay;                         // 0x684(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortActivatableMovieWidget> MovieWidgetClass;                                  // 0x688(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_SelectedActivity;                   // 0x690(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityDetailsDisplay*           DetailsDisplay_PromotedActivity;                   // 0x698(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          Panel_VideoSlot;                                   // 0x6A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          Panel_PromotedVideoSlot;                           // 0x6A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivatableMovieWidget*           ActivityMovieWidget;                               // 0x6B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivatableMovieWidget*           PromotedActivityMovieWidget;                       // 0x6B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81B7[0x48];                                    // Fixing Size After Last Property..
	class UWidgetAnimation*                      BoundKeyArtOutroAnimation;                         // 0x708(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81B8[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityDiscoverView");
		return Clss;
	}

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

// 0x30 (0x6B0 - 0x680)
// Class DiscoveryBrowserUI.FortActivityDiscoverViewV2
class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView
{
public:
	uint8                                        Pad_81B9[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityDiscoverViewV2");
		return Clss;
	}

	bool IsShowingSeasonalContent();
	bool IsShowingPromotedContent();
};

// 0x0 (0x620 - 0x620)
// Class DiscoveryBrowserUI.FortActivityFavoriteBrowserView
class UFortActivityFavoriteBrowserView : public UFortActivityPlayerBrowserView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityFavoriteBrowserView");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class DiscoveryBrowserUI.FortActivityListItemWrapper
class UFortActivityListItemWrapper : public UObject
{
public:
	uint8                                        Pad_81BA[0x10];                                    // Fixing Size After Last Property..
	class UFortGameActivity*                     GameActivity;                                      // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityListItemWrapper");
		return Clss;
	}

};

// 0x188 (0x418 - 0x290)
// Class DiscoveryBrowserUI.FortActivityListView
class UFortActivityListView : public UListViewBase
{
public:
	uint8                                        Pad_81BB[0xE8];                                    // Fixing Size After Last Property..
	float                                        DirectionalNavigationTimeThreshold;                // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x37C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_81BC[0x3];                                     // Fixing Size After Last Property..
	float                                        EntrySpacing;                                      // 0x380(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCircularNavigationEnabled;                        // 0x384(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81BD[0x3];                                     // Fixing Size After Last Property..
	TMap<enum class EActivityBrowserTileStyle, TSubclassOf<class UFortActivityBrowserTileBase>> TileTypes;                                         // 0x388(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81BE[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityListView");
		return Clss;
	}

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
	uint8                                        Pad_81C0[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityLobbyTile");
		return Clss;
	}

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

// 0x80 (0x478 - 0x3F8)
// Class DiscoveryBrowserUI.FortActivityModeSetSelectionModal
class UFortActivityModeSetSelectionModal : public UCommonActivatableWidget
{
public:
	class UCommonTextBlock*                      Text_ActivityName;                                 // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81C2[0x40];                                    // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_Back;                                       // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_BackBoard;                                  // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityModeSetSelection*         List_SubModeList;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivitySquadFillButton*          Button_ActivitySquadFill;                          // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityPrivacyButton*            Button_ActivityPrivacy;                            // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityHabaneroButton*           Button_Activity_Habanero;                          // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81C3[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityModeSetSelectionModal");
		return Clss;
	}

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
	uint8                                        Pad_81C4[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityPlayerBrowserTile");
		return Clss;
	}

	void HandleActivitySelected();
};

// 0x140 (0x630 - 0x4F0)
// Class DiscoveryBrowserUI.FortActivityPlayerView
class UFortActivityPlayerView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_81C5[0x8];                                     // Fixing Size After Last Property..
	class FName                                  TabNameID;                                         // 0x4F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81C6[0x4];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x500(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonButtonBase>         TabButtonClass;                                    // 0x5F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTabListWidgetBase_Legacy*         TabList_PlayerViewTabs;                            // 0x5F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidgetSwitcher*      Switcher_PlayerBrowserViews;                       // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityPlayerBrowserView*        BrowserView_Favorites;                             // 0x608(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortActivityPlayerBrowserView*        BrowserView_History;                               // 0x610(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81C7[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityPlayerView");
		return Clss;
	}

};

// 0x8 (0x14A0 - 0x1498)
// Class DiscoveryBrowserUI.FortActivityPlayerViewTabButton
class UFortActivityPlayerViewTabButton : public UFortTabButton
{
public:
	class UCommonTextBlock*                      Text_Count;                                        // 0x1498(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityPlayerViewTabButton");
		return Clss;
	}

};

// 0x160 (0x650 - 0x4F0)
// Class DiscoveryBrowserUI.FortActivitySearchView
class UFortActivitySearchView : public UFortActivityBrowserView
{
public:
	uint8                                        Pad_81C9[0x8];                                     // Fixing Size After Last Property..
	class FName                                  TabNameID;                                         // 0x4F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81CA[0x4];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x500(0xF0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditableText_IslandLink;                           // 0x5F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81CB[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivitySearchView");
		return Clss;
	}

	void OnActivityValidated(enum class EFortActivityValidationResult ValidateResult);
	void OnActivityClear();
	void HandleTextCommitted(class FText& InText, enum class ETextCommit CommitInfo);
	void HandleTextChanged(class FText& Text);
};

// 0x0 (0x620 - 0x620)
// Class DiscoveryBrowserUI.FortActivitySeasonalBrowserView
class UFortActivitySeasonalBrowserView : public UFortActivityPlayerBrowserView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivitySeasonalBrowserView");
		return Clss;
	}

};

// 0x140 (0x15B0 - 0x1470)
// Class DiscoveryBrowserUI.FortActivityTileDetailsDisplay
class UFortActivityTileDetailsDisplay : public UCommonButtonBase
{
public:
	FMulticastInlineDelegateProperty_            OnActivitySelectedDelegate;                        // 0x1470(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnActivityUnSelectedDelegate;                      // 0x1480(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	bool                                         bShowDetailsButton;                                // 0x1490(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_81CE[0x3];                                     // Fixing Size After Last Property..
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
	uint8                                        Pad_81CF[0x85];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityTileDetailsDisplay");
		return Clss;
	}

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

// 0x0 (0xC00 - 0xC00)
// Class DiscoveryBrowserUI.FortActivityTileView
class UFortActivityTileView : public UCommonTileView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityTileView");
		return Clss;
	}

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
	uint8                                        Pad_81D0[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDiscoverItemBrowserRow");
		return Clss;
	}

};

// 0x140 (0x3D0 - 0x290)
// Class DiscoveryBrowserUI.FortDiscoverItemListView
class UFortDiscoverItemListView : public UListViewBase
{
public:
	uint8                                        Pad_81D1[0xE8];                                    // Fixing Size After Last Property..
	float                                        DirectionalNavigationTimeThreshold;                // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D2[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortActivityBrowserPlayWithFriendsTile> PlayWithFriendsEntryWidgetClass;                   // 0x380(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EOrientation                      Orientation;                                       // 0x388(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_81D3[0x3];                                     // Fixing Size After Last Property..
	float                                        EntrySpacing;                                      // 0x38C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCircularNavigationEnabled;                        // 0x390(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81D4[0x3F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortDiscoverItemListView");
		return Clss;
	}

	int32 GetInViewCount();
};

// 0x10 (0xB0 - 0xA0)
// Class DiscoveryBrowserUI.ActivityLibraryComponent
class UActivityLibraryComponent : public UActorComponent
{
public:
	uint8                                        Pad_81D5[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActivityLibraryComponent");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class DiscoveryBrowserUI.FortActivityBrowserContext
class UFortActivityBrowserContext : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_81D6[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortActivityBrowserContext");
		return Clss;
	}

};

// 0x78 (0x118 - 0xA0)
// Class DiscoveryBrowserUI.OverrideMatchmakingUIComponent
class UOverrideMatchmakingUIComponent : public UActorComponent
{
public:
	struct FMatchmakingUIOverride                MatchmakingUIOverride;                             // 0xA0(0x78)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OverrideMatchmakingUIComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
