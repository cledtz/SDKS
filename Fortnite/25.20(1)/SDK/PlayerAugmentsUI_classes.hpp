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

// 0x10 (0x58 - 0x48)
// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker
class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker : public UFortMobileButtonBehaviorComponent_IconPicker
{
public:
	bool                                         bCachedIsInInventoryView;                          // 0x48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4699[0x7];                                     // Fixing Size After Last Property..
	class UPaperSprite*                          ListViewSprite;                                    // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileButtonBehaviorComponent_AugmentsListIconPicker");
		return Clss;
	}

	void OnAugmentToolViewSwap(bool bIsInInventoryView);
};

// 0x8 (0x50 - 0x48)
// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility : public UFortMobileButtonBehaviorComponent_Visibility
{
public:
	uint8                                        Pad_469A[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileButtonBehaviorComponent_AugmentsListVisibility");
		return Clss;
	}

	void HandleAugmentToolViewSwap(bool bInIsInventoryView);
	void HandleAugmentToolOpenedStatusChanged(bool bIsOpened, bool bInIsInventoryView);
};

// 0x8 (0x58 - 0x50)
// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap : public UFortMobileButtonBehaviorComponent_AugmentsListVisibility
{
public:
	uint8                                        Pad_469B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap");
		return Clss;
	}

};

// 0x0 (0x310 - 0x310)
// Class PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
class UFortPlayerAugmentHUDTimerWidget : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentHUDTimerWidget");
		return Clss;
	}

	void OnTimerUpdated(float TimeRemaining, float TimePercentage);
	void OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant);
	void OnMovementModeChanged();
	void OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer);
	void OnCanSelectAugmentChanged(bool bCanSelectAugment);
	void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened);
	void OnAugmentGrantingTimersResetForMatch();
	void OnAugmentGrantingTimersFinishedForMatch();
	void HandleTimerUpdated(float TimeRemaining, float TimePercentage);
	void HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant);
	void HandleHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer);
	void HandleCanSelectAugmentChanged(bool bCanSelectAugment);
	void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);
	void HandleAugmentGrantingTimersResetForMatch();
	void HandleAugmentGrantingTimersFinishedForMatch();
	int32 GetPendingAugmentsToGrant();
	class FText FormatTime(float TotalSeconds);
	bool CanSelectAugment();
	bool CanEquipSelectionTool();
};

// 0x58 (0x368 - 0x310)
// Class PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget
class UFortPlayerAugmentHUDSelectionTimerWidget : public UFortPlayerAugmentHUDTimerWidget
{
public:
	bool                                         bIsAugmentReadyVisible;                            // 0x310(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCountdownActive;                                // 0x311(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsOffline;                                        // 0x312(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_469D[0x5];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          HideTimerHandle;                                   // 0x318(0x8)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              TimerProgressDMI;                                  // 0x320(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CountdownStartTimeHF;                              // 0x328(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      NativeAugmentTimerText;                            // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      NativeAnimTimerTextCountdownUpdated;               // 0x358(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      NativeAnimProgressBarCountdownUpdated;             // 0x360(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentHUDSelectionTimerWidget");
		return Clss;
	}

	void UpdateCountdown(float TimeRemaining);
	void SetMobileProgressTimer(float TimePercentage);
	void OnCountdownActivated();
	bool IsCountdownVisible();
};

// 0x10 (0x90 - 0x80)
// Class PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
class UFortMobileActionBBE_AugmentShoot : public UFortMobileActionButtonBehaviorExtension
{
public:
	class UPaperSprite*                          IconOverrideSprite;                                // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          IconOverrideTag;                                   // 0x88(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_469E[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileActionBBE_AugmentShoot");
		return Clss;
	}

};

// 0x8 (0x128 - 0x120)
// Class PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments
class UFortMobileActionButtonBehavior_RerollAugments : public UFortMobileActionButtonBehavior
{
public:
	class UFortItemDefinition*                   RerollCurrency;                                    // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_RerollAugments");
		return Clss;
	}

};

// 0x10 (0x348 - 0x338)
// Class PlayerAugmentsUI.FortMobilePlayerAugmentTimer
class UFortMobilePlayerAugmentTimer : public UFortMobileHUDElement
{
public:
	TWeakObjectPtr<class UFortControllerComponent_AugmentGrantingSystem> AugmentControllerComponent;                        // 0x338(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PlayerAugmentTimer;                         // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMobilePlayerAugmentTimer");
		return Clss;
	}

	void HandleHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer);
	void BP_OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer, bool bForceCollapse);
};

// 0x0 (0xC0 - 0xC0)
// Class PlayerAugmentsUI.FortPickupInteractOverrideComponent_Augments
class UFortPickupInteractOverrideComponent_Augments : public UFortPickupInteractOverrideComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPickupInteractOverrideComponent_Augments");
		return Clss;
	}

};

// 0x10 (0x1560 - 0x1550)
// Class PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry
class UFortPlayerAugmentCollectionListEntry : public UAthenaCollectionListEntry
{
public:
	class UImage*                                Image_Background;                                  // 0x1550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ParamName_ItemIcon;                                // 0x1558(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ParamName_IsDiscovered;                            // 0x155C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentCollectionListEntry");
		return Clss;
	}

};

// 0x80 (0x6F8 - 0x678)
// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
class UFortPlayerAugmentCollectionScreen : public UAthenaCollectionScreenBase
{
public:
	struct FScalableFloat                        AugmentsEnabledViaHotfix;                          // 0x678(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UObject>> TagToImageMap;                                     // 0x6A0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_CategoryTitle;                                // 0x6F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentCollectionScreen");
		return Clss;
	}

};

// 0x0 (0x548 - 0x548)
// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer
class UFortPlayerAugmentCollectionScreenContainer : public UAthenaCollectionScreenContainer
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentCollectionScreenContainer");
		return Clss;
	}

};

// 0x20 (0x4E0 - 0x4C0)
// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay
class UFortPlayerAugmentCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{
public:
	class FName                                  ParamName_Progress;                                // 0x4C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46A0[0x4];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_ItemCategory;                                 // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemCategoryIndicator*            ItemCategoryIndicator;                             // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_UndiscoveredText;                          // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentCollectionScreenInfoOverlay");
		return Clss;
	}

};

// 0x18 (0x328 - 0x310)
// Class PlayerAugmentsUI.FortPlayerAugmentGranterWidget
class UFortPlayerAugmentGranterWidget : public UFortHUDElementWidget
{
public:
	TArray<class UFortPlayerAugmentItemDefinition*> AvailableAugmentItemDefinitions;                   // 0x310(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UWidget*                               Overlay_Reroll;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentGranterWidget");
		return Clss;
	}

	void OnTimerUpdated(float TimeRemaining, float TimePercentage);
	void OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* HighlightedAugment);
	void OnRerollAugments();
	void OnPopulateAvailableAugmentsHUD(TArray<class UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition);
	void OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant);
	void OnInputTypeChanged(enum class ECommonInputType NewInputType);
	void OnCanSelectAugmentChanged(bool bCanSelectAugment);
	void OnAugmentSelectorToolViewSwapped(bool bViewingAugmentInventory);
	void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);
	void OnAugmentSelectionStarted(int32 SelectedAugmentIndex);
	void OnAugmentScrollUpEvent();
	void OnAugmentScrollDownEvent();
	void OnAugmentHighlighted(int32 HighlightedAugmentIndex);
	void HandleTimerUpdated(float TimeRemaining, float TimePercentage);
	void HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* SelectedAugment);
	void HandleRerollAugments();
	void HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant);
	void HandleCanSelectAugmentChanged(bool bCanSelectAugment);
	void HandleAvailableAugmentsForGrantingUpdated(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent);
	void HandleAugmentSelectorToolViewSwapped(bool bViewingAugmentsInventory);
	void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);
	void HandleAugmentSelectionStarted(int32 SelectedAugmentIndex);
	void HandleAugmentHighlighted(int32 HighlightedAugmentIndex);
	int32 GetPendingAugmentsToGrant();
};

// 0x48 (0x318 - 0x2D0)
// Class PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
class UFortPlayerAugmentHUDQuickbarWidget : public UCommonUserWidget
{
public:
	struct FGameplayTagContainer                 HiddenAugmentGameplayTags;                         // 0x2D0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumAugmentGrantRoundsForPlaylist;                  // 0x2F0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentHUDQuickbarWidget");
		return Clss;
	}

	void OnAugmentsUpdated(TArray<class UFortPlayerAugmentItemDefinition*>& ActiveAugments);
};

// 0x30 (0x300 - 0x2D0)
// Class PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
class UFortPlayerAugmentHUDRerollWidget : public UCommonUserWidget
{
public:
	class UCommonLazyImage*                      Image_CurrencyIcon;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWorldItemDefinition*              RerollCurrency;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedNumFreeRerolls;                              // 0x2E0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  RerollHoldMaterialParamName;                       // 0x2E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46A1[0x8];                                     // Fixing Size After Last Property..
	class UImage*                                Image_ProgressBar;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46A2[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentHUDRerollWidget");
		return Clss;
	}

	void StartRerollHoldProgress(float Duration);
	void OnUpdateCurrency(int32 OwnedCurrency, int32 RerollCost);
	void OnRerollAugments();
	void OnFreeRerollsUpdated(int32 NewNumFreeRerolls);
	void HandleRerollAugments();
	void HandleFreeRerollsUpdated(int32 NewNumFreeRerolls);
	void EndRerollHoldProgress();
};

// 0x68 (0x338 - 0x2D0)
// Class PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget
{
public:
	class FText                                  RarityTextFormat;                                  // 0x2D0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_AugmentName;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_AugmentRarity;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_AugmentCategory;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemCategoryIndicator*            ItemCategoryIndicator;                             // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        Image_CategoryAsImage;                             // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_AugmentDescription;                           // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSocialAvatarIcon*                 Icon_LenderAvatarIcon;                             // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_LenderAvatarIcon;                          // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        Image_LenderSquadColor;                            // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_BorrowingText;                                // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentInfoEntryWidget");
		return Clss;
	}

	void UpdateAugment(class UFortPlayerAugmentItemDefinition* AugmentItemDefinition);
	void OnItemRaritySet(enum class EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData);
	void OnItemPinColorSet(const struct FLinearColor& PinColor);
	void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed);
};

// 0x0 (0x310 - 0x310)
// Class PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget
class UFortPlayerAugmentInGameCarriedWidget : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentInGameCarriedWidget");
		return Clss;
	}

	void OnShowInitialAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition);
	void HandleExitBus(class UFortPlayerControllerZone* FortPCZone);
};

// 0x0 (0x2F0 - 0x2F0)
// Class PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow
class UFortPlayerAugmentInventoryExtensionRow : public UAthenaInventoryGroupBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentInventoryExtensionRow");
		return Clss;
	}

};

// 0x60 (0x458 - 0x3F8)
// Class PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
class UFortPlayerAugmentInventoryInfoWidget : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_46A5[0x8];                                     // Fixing Size After Last Property..
	class FText                                  RarityTextFormat;                                  // 0x400(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemRarity;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemCategory;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemCategoryIndicator*            ItemCategoryIndicator;                             // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemDescription;                              // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSocialAvatarIcon*                 Icon_LenderAvatarIcon;                             // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortLazyImage*                        Image_LenderSquadColor;                            // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_BorrowingText;                                // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentInventoryInfoWidget");
		return Clss;
	}

	void OnItemRaritySet(enum class EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData);
	void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed);
};

// 0x10 (0x1480 - 0x1470)
// Class PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry
class UFortPlayerAugmentInventoryListEntry : public UCommonButtonBase
{
public:
	uint8                                        Pad_46A6[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentInventoryListEntry");
		return Clss;
	}

	void OnAugmentListItemSet(class UFortItemDefinition* ItemDefinition);
};

// 0x158 (0x550 - 0x3F8)
// Class PlayerAugmentsUI.FortPlayerAugmentInventoryTab
class UFortPlayerAugmentInventoryTab : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_46A7[0x8];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        AugmentsEnabledViaHotfix;                          // 0x400(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 HiddenAugmentGameplayTags;                         // 0x428(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  TabNameID;                                         // 0x448(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46A8[0x4];                                     // Fixing Size After Last Property..
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x450(0xF0)(Edit, NativeAccessSpecifierPrivate)
	class UFortPlayerAugmentInventoryInfoWidget* AugmentInfo;                                       // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Augments;                                 // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentInventoryTab");
		return Clss;
	}

	void RequestOpenSelector();
	void OnTimerUpdated(float TimeRemaining, float TimePercentage);
	void OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant);
	void OnAugmentListUpdated(int32 NumAugments);
	void OnAugmentGrantingTimersResetForMatch();
	void OnAugmentGrantingTimersFinishedForMatch();
	void HandleTimerUpdated(float TimeRemaining, float TimePercentage);
	void HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant);
	void HandleAugmentGrantingTimersResetForMatch();
	void HandleAugmentGrantingTimersFinishedForMatch();
	int32 GetPendingAugmentsToGrant();
};

// 0x0 (0x2D0 - 0x2D0)
// Class PlayerAugmentsUI.FortPlayerAugmentLobbyWidget
class UFortPlayerAugmentLobbyWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentLobbyWidget");
		return Clss;
	}

	void OnShowInitialAugment(class UFortPlayerAugmentItemDefinition* CarriedAugment);
};

// 0x28 (0x338 - 0x310)
// Class PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget
class UFortPlayerAugmentPostMatchUnlocksWidget : public UFortHUDElementWidget
{
public:
	struct FScalableFloat                        AugmentsEnabledViaHotfix;                          // 0x310(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentPostMatchUnlocksWidget");
		return Clss;
	}

	void OnShowUnlockedAugments(TArray<class UFortPlayerAugmentItemDefinition*>& UnlockedAugments);
};

// 0x90 (0x3A0 - 0x310)
// Class PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
class UFortPlayerAugmentSpecialAcquiredNotificationWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_46A9[0x60];                                    // Fixing Size After Last Property..
	struct FFortPrioritizedWidgetData            PrioritizationData;                                // 0x370(0x2)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46AA[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 TargetGameplayTags;                                // 0x378(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_46AB[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPlayerAugmentSpecialAcquiredNotificationWidget");
		return Clss;
	}

	void OpenWidget(class UFortPlayerAugmentItemDefinition* ItemDef);
	void OnStompedByOtherWidget();
	void OnEventAdded();
	bool HasMoreAugmentEvents();
	class FText ConstructEventDescription(class UFortPlayerAugmentItemDefinition* ItemDef);
	void CloseWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
