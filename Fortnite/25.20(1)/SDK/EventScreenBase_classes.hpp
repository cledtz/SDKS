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

// 0x670 (0x6A0 - 0x30)
// Class EventScreenBase.FortEventScreenData
class UFortEventScreenData : public UDataAsset
{
public:
	class FString                                EventCMSId;                                        // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountResourceName;                               // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LevelOfferId;                                      // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PremiumTrackOfferId;                               // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTokenType*                        PremiumTrackPurchasedToken;                        // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VaultWorldTag;                                     // 0x78(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4475[0x4];                                     // Fixing Size After Last Property..
	struct FVaultWorldBackgroundData             PreviewScreenBackgroundData;                       // 0x80(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortChallengeBundleItemDefinition> QuestBundle;                                       // 0xE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortItemDefinition>    SpecialRewardItem;                                 // 0x108(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortItemDefinition>    SpecialPremiumRewardItem;                          // 0x130(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventItemOverride>            ItemOverrides;                                     // 0x158(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FEventScreenTrackData                 FreeTrackData;                                     // 0x168(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FEventScreenTrackData                 PremiumTrackData;                                  // 0x188(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          QuestCategoryTag;                                  // 0x1A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4476[0x4];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class URichTextBlockDecorator>> RichTextDecorators;                                // 0x1B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    EventBackgroundMaterial;                           // 0x1C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ProgressBarMaterial;                               // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CurrencyBrush;                                     // 0x1D0(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CompletionBannerBrush;                             // 0x290(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlowForeground;                                    // 0x350(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlowBackground;                                    // 0x410(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                          EventBackgroundColor1;                             // 0x4D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EventBackgroundColor2;                             // 0x4E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          RewardBackgroundColor1;                            // 0x4F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          RewardBackgroundColor2;                            // 0x500(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          RewardBackgroundColor3;                            // 0x510(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AccentColor;                                       // 0x520(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>       RewardTileBackgroundColors;                        // 0x530(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  TimeRemainingFormat;                               // 0x580(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  CurrencyFormat;                                    // 0x598(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class USoundBase*                            DefaultHoveredSound;                               // 0x5B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            DefaultPressedSound;                               // 0x5B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            BuyPressedSound;                                   // 0x5C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            BuyHoldStartedSound;                               // 0x5C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            BuyHoldCompletedSound;                             // 0x5D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            BuyHoldAbortedSound;                               // 0x5D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            BackPressedSound;                                  // 0x5E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            AddPressedSound;                                   // 0x5E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            SubtractPressedSound;                              // 0x5F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            ProgressStartedSound;                              // 0x5F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            ProgressEndedSound;                                // 0x600(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            ProgressInterruptedSound;                          // 0x608(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RewardPreviewZoomLevel;                            // 0x610(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWidgetCameraFraming;                           // 0x614(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4477[0x3];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortEventMoreInfoModal> MoreInfoModalClass;                                // 0x618(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortEventPurchaseLevelsModal> PurchaseLevelsModalClass;                          // 0x640(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortEventPurchasePremiumTrackModal> PurchasePremiumTrackModalClass;                    // 0x668(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        CalendarEvents;                                    // 0x690(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventScreenData");
		return Clss;
	}

};

// 0x8 (0x400 - 0x3F8)
// Class EventScreenBase.FortEventModalBase
class UFortEventModalBase : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_4478[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventModalBase");
		return Clss;
	}

	void CloseModal();
};

// 0x0 (0x2A8 - 0x2A8)
// Class EventScreenBase.FortEventMoreInfoGroup
class UFortEventMoreInfoGroup : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventMoreInfoGroup");
		return Clss;
	}

	void OnSetGroupText(class FText& Header, class FText& Body);
	void OnIconLoaded(class UTexture2D* Icon);
	void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);
};

// 0x28 (0x428 - 0x400)
// Class EventScreenBase.FortEventMoreInfoModal
class UFortEventMoreInfoModal : public UFortEventModalBase
{
public:
	class UDynamicEntryBox*                      DynamicEntryBox_Groups;                            // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CloseMobile;                                // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4479[0x8];                                     // Fixing Size After Last Property..
	class UScrollBox*                            SB_Vertical;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventMoreInfoModal");
		return Clss;
	}

	void SetModalText(class FText& Header, class FText& SubHeader, class FText& Legal);
	void OnModalBackout();
	void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);
	class UFortEventScreenData* GetEventScreenData();
};

// 0x70 (0x470 - 0x400)
// Class EventScreenBase.FortEventPurchaseLevelsModal
class UFortEventPurchaseLevelsModal : public UFortEventModalBase
{
public:
	class UCommonButtonBase*                     Button_Addition;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Subtraction;                                // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_Purchase;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_GetVBucks;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CloseMobile;                                // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEventScreenListView*                  ListView_RewardPreview;                            // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentResourceValue;                              // 0x438(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxResourceValue;                                  // 0x43C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentVBucks;                                     // 0x440(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OfferResourceQuantity;                             // 0x444(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAnimateListViewFromEmpty;                         // 0x448(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_447B[0x27];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventPurchaseLevelsModal");
		return Clss;
	}

	void OnTotalPriceChanged(int32 NewPrice);
	void OnPurchaseAmountChanged(int32 PurchaseQuantity, int32 ResourceQuantity);
	void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);
	void OnCMSTextApplied(class FText& LegalText);
	void OnAmountChangeButtonClicked();
	void HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& InOfferId);
	class UFortEventScreenData* GetEventScreenData();
};

// 0x0 (0x2A8 - 0x2A8)
// Class EventScreenBase.FortPurchasePremiumTrackBody
class UFortPurchasePremiumTrackBody : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPurchasePremiumTrackBody");
		return Clss;
	}

	void OnPopulate(int32 BodyIndex, class FText& BodyText);
};

// 0x70 (0x470 - 0x400)
// Class EventScreenBase.FortEventPurchasePremiumTrackModal
class UFortEventPurchasePremiumTrackModal : public UFortEventModalBase
{
public:
	class UDynamicEntryBox*                      DynamicEntryBox_Body;                              // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            ScrollBox_Body;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHoldableButton*                   Button_Purchase;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_GetVBucks;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CloseMobile;                                // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_PreviewReward;                              // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentVBucks;                                     // 0x438(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_447E[0x34];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventPurchasePremiumTrackModal");
		return Clss;
	}

	void OnPriceSet(int32 Price);
	void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);
	void OnCMSTextApplied(class FText& HeaderText, class FText& LegalText);
	void HandlePurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& InOfferId);
	class UFortEventScreenData* GetEventScreenData();
};

// 0x8 (0x2B0 - 0x2A8)
// Class EventScreenBase.FortEventListViewWidgetBase
class UFortEventListViewWidgetBase : public UUserWidget
{
public:
	uint8                                        Pad_447F[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventListViewWidgetBase");
		return Clss;
	}

};

// 0x50 (0x300 - 0x2B0)
// Class EventScreenBase.FortEventRewardTracksWidget
class UFortEventRewardTracksWidget : public UFortEventListViewWidgetBase
{
public:
	class UDynamicEntryBox*                      DynamicEntryBox_RewardTracks;                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPreviewMode;                                      // 0x2B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4481[0x47];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventRewardTracksWidget");
		return Clss;
	}

	void BPSetProgressPercent(float Percent);
	void BPSetAllRewardsCollected(bool bAllCollected);
	void BPOnSetRewardItem(int32 RequiredProgress, int32 RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode);
	void BPOnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);
};

// 0x0 (0x2B0 - 0x2B0)
// Class EventScreenBase.FortEventSpacerWidget
class UFortEventSpacerWidget : public UFortEventListViewWidgetBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventSpacerWidget");
		return Clss;
	}

};

// 0x90 (0x338 - 0x2A8)
// Class EventScreenBase.FortEventRewardWidget
class UFortEventRewardWidget : public UUserWidget
{
public:
	uint8                                        Pad_4484[0x8];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_RewardPreview;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCosmeticItemCard*                 UserWidget_ItemCard;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTrackOwned;                                     // 0x2C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPreviewMode;                                      // 0x2C1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInPreviewSelectedState;                           // 0x2C2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInPremiumUpgradeState;                            // 0x2C3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4485[0x74];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventRewardWidget");
		return Clss;
	}

	void SetTrackData(struct FEventScreenTrackData& TrackData, bool bIsOwned);
	void SetProgressPercent(float Percent);
	void SetIsBannerItem(bool bIsBanner);
	void SetInSelectedState(bool bSelected);
	void SetInPreviewSelectedState(bool bSelected);
	void SetInPreviewedState(bool bPreviewed);
	void SetInPremiumUpgradeState(bool bHighlighted);
	void SetDoubleWidth(bool bDoubleWidth);
	void SetCustomItemIcon(class UTexture2D* CustomItemIcon);
	void SetAllRewardsCollected(bool bAllCollected);
	void OnSetRewardItem(int32 RequiredProgress, int32 RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode);
	void OnRewardWidgetReset();
	void OnInputMethodChanged(enum class ECommonInputType NewInputType);
	void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);
	class UFortEventScreenData* GetEventScreenData();
};

// 0x440 (0xB50 - 0x710)
// Class EventScreenBase.FortEventScreenBase
class UFortEventScreenBase : public UFortItemPreviewScreen
{
public:
	uint8                                        Pad_448B[0x8];                                     // Fixing Size After Last Property..
	TArray<class UNamedSlot*>                    LayoutTemplateSlots;                               // 0x718(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortLazyImage*                        LazyImage_KeyArt;                                  // 0x728(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ViewQuests;                                 // 0x730(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_MoreInfo;                                   // 0x738(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_PurchaseLevels;                             // 0x740(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Preview;                                    // 0x748(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_ShowInItemShop;                             // 0x750(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Previous;                                   // 0x758(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Next;                                       // 0x760(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortEventTrackerModule_CustomText*    CustomText_InspectItem;                            // 0x768(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          Panel_LoadError;                                   // 0x770(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Close;                                      // 0x778(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_MobileClose;                                // 0x780(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_ItemDescription;                              // 0x788(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x790(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_SetDetails;                                   // 0x798(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaRewardItemTypeRarityTag*        ItemRewardTag;                                     // 0x7A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortEventScreenData*                  EventScreenData;                                   // 0x7A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEventScreenRewardPreviewType     ActiveRewardPreviewType;                           // 0x7B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_448C[0x7];                                     // Fixing Size After Last Property..
	class UFortChallengeBundleItemDefinition*    LoadedQuestBundle;                                 // 0x7B8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemPreviewWorld*                 CachedVaultWorld;                                  // 0x7C0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_448D[0x10];                                    // Fixing Size After Last Property..
	float                                        TimeBetweenVariantsRestart;                        // 0x7D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeBetweenVariants;                               // 0x7DC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortCosmeticVariantPreview>   CachedVariantPreviews;                             // 0x7E0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_448E[0x360];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventScreenBase");
		return Clss;
	}

	void UpdateVariantCounter(int32 CurrentVariantIndex, int32 TotalNumVariants);
	void SetRewardTrackLegal(class FText& LegalText);
	void SetItemShopOfferInfoVisibility(bool bIsVisible);
	void SetItemShopCallout(class FText& ItemShopCalloutText);
	void RegisterLayoutSlots();
	void OnScreenViewChanged(enum class EEventScreenView PrevScreenView, enum class EEventScreenView NewScreenView);
	void OnRewardPreviewItemChanged(class UFortAccountItemDefinition* Item, bool bFreeTrack);
	void OnFirstViewAfterCompletion();
	void OnCalendarEventStarted(const class FString& EventName);
	void OnCalendarEventEnded(const class FString& EventName);
	bool IsCalendarEventActive(const class FString& EventName);
	bool HasPurchasedPremiumTrack();
	class UWidget* HandleUpsellPromptNavigateUpEvent(enum class EUINavigation InNavigation);
	void HandleToggleFullscreenMap(bool bVisible);
	class UWidget* HandleRewardListNavigateUpEvent(enum class EUINavigation InNavigation);
	class UWidget* HandleRewardListNavigateRightEvent(enum class EUINavigation InNavigation);
	void HandleItemShown(class UFortAccountItemDefinition* AccountItemDef);
	void HandleGiftBoxClosed();
	void HandleActiveSeasonDataChanged(TArray<class FString>& ActiveEventFlags);
	class UMaterialInstanceDynamic* GetVaultWorldFloorMID();
	class UMaterialInstanceDynamic* GetVaultWorldBackgroundMID();
	class UFortEventModalBase* GetActiveModal();
};

// 0x1D0 (0x460 - 0x290)
// Class EventScreenBase.EventScreenListView
class UEventScreenListView : public UListViewBase
{
public:
	uint8                                        Pad_448F[0xE8];                                    // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnProgressBarAnimationStartedEvent;                // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnProgressBarAnimationCompletedEvent;              // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnProgressBarAnimationInterruptedEvent;            // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4490[0x20];                                    // Fixing Size After Last Property..
	TSubclassOf<class UFortEventRewardTracksWidget> RewardTrackWidgetClass;                            // 0x3C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortEventSpacerWidget>    SpacerWidgetClass;                                 // 0x3D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EntrySpacing;                                      // 0x3D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCenterSelection;                                  // 0x3DC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4491[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxItemsInView;                                    // 0x3E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPreviewMode;                                      // 0x3E4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4492[0x3];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           ProgressAnimationCurve;                            // 0x3E8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanAnimateOnceComplete;                           // 0x3F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4493[0x6F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EventScreenListView");
		return Clss;
	}

	void SetNativeTickAllowed(bool bAllowed);
	class UFortEventScreenData* GetEventScreenData();
};

// 0x70 (0x318 - 0x2A8)
// Class EventScreenBase.FortEventTokenCollectionWidget
class UFortEventTokenCollectionWidget : public UUserWidget
{
public:
	class UCommonLazyImage*                      LazyImage_GhostIcon;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLazyImage*                      LazyImage_CompletedIcon;                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_Glow;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             FallbackBrush;                                     // 0x2C0(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UFortTokenType>         TokenDefinition;                                   // 0x2E8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4494[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTokenCollectionWidget");
		return Clss;
	}

	void OnRefreshIcon(bool IsCollected, bool bIsFirstViewAfterCollection);
};

// 0x8 (0x2B0 - 0x2A8)
// Class EventScreenBase.FortEventTrackerModule
class UFortEventTrackerModule : public UUserWidget
{
public:
	uint8                                        Pad_4495[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule");
		return Clss;
	}

	void OnModuleInitialized(class UFortEventScreenData* InEventScreenData);
	class UFortEventScreenData* GetEventScreenData();
};

// 0x0 (0x2B0 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_EventDetails
class UFortEventTrackerModule_EventDetails : public UFortEventTrackerModule
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_EventDetails");
		return Clss;
	}

	void UpdateEventTimeRemaining(class FText& OutEventTimeRemaining);
	void OnPopulateEventDetailsText(class FText& OutEventName, class FText& OutEventDescription);
};

// 0x0 (0x2B0 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_Header
class UFortEventTrackerModule_Header : public UFortEventTrackerModule
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_Header");
		return Clss;
	}

	void OnPopulateEventResourceStarterHeader(class FText& Header);
	void OnPopulateEventResourceHeader(class FText& Header, int32 ResourceValue);
};

// 0x8 (0x2B8 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_RewardDetails
class UFortEventTrackerModule_RewardDetails : public UFortEventTrackerModule
{
public:
	uint8                                        Pad_4498[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_RewardDetails");
		return Clss;
	}

	void OnPopulateNextRewardDetails(TArray<class FText>& RewardNames, int32 ResourceNeeded);
	void OnPopulateCompletedReward(TArray<class FText>& RewardNames);
	bool IsPremiumTrackOwned();
};

// 0x20 (0x2D0 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_RewardRemaining
class UFortEventTrackerModule_RewardRemaining : public UFortEventTrackerModule
{
public:
	class UCommonButtonBase*                     Button_PurchasePremium;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_449A[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_RewardRemaining");
		return Clss;
	}

	void OnPopulateRemaining(int32 ResourceNeeded, int32 TotalResourceRequired, bool bRequiresPremiumTrackPurchase);
};

// 0x8 (0x2B8 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_ProgressiveRewards
class UFortEventTrackerModule_ProgressiveRewards : public UFortEventTrackerModule
{
public:
	class UEventScreenListView*                  ListView_Rewards;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_ProgressiveRewards");
		return Clss;
	}

	void OnPopulateCompletionMessage(bool bIsComplete, class FText& CompletionText);
};

// 0x0 (0x2B0 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_Collection
class UFortEventTrackerModule_Collection : public UFortEventTrackerModule
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_Collection");
		return Clss;
	}

	void OnGatherTokenCollectionWidgets(TArray<class UFortEventTokenCollectionWidget*>* OutCollectionWidgets);
};

// 0x8 (0x2B8 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_Banner
class UFortEventTrackerModule_Banner : public UFortEventTrackerModule
{
public:
	class UFortLazyImage*                        LazyImage_BannerArt;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_Banner");
		return Clss;
	}

	void OnPopulateHeaderCTAText(class FText& HeaderCTAText);
	void OnPopulateBannerText(class FText& BannerText);
	void OnCTACompleted(bool bIsComplete);
};

// 0x70 (0x320 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_PremiumUpsell
class UFortEventTrackerModule_PremiumUpsell : public UFortEventTrackerModule
{
public:
	class UFortCTAButton*                        Button_Prompt;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  PromptTextUnowned;                                 // 0x2B8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  PromptTextOwned;                                   // 0x2D0(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_449C[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_PremiumUpsell");
		return Clss;
	}

	void OnPopulateText(class FText& HeaderText, class FText& BodyText);
	void OnIconLoaded(class UTexture* LoadedTexture);
	bool IsPremiumTrackOwned();
};

// 0x0 (0x2B0 - 0x2B0)
// Class EventScreenBase.FortEventTrackerModule_CustomText
class UFortEventTrackerModule_CustomText : public UFortEventTrackerModule
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortEventTrackerModule_CustomText");
		return Clss;
	}

	void OnPopulateText(class FText& CustomText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
