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

// 0x0 (0x28 - 0x28)
// Class CrewUI.BattlePassCrewContentInterface
class UBattlePassCrewContentInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassCrewContentInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CrewUI.FortProgressiveContentInterface
class UFortProgressiveContentInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveContentInterface");
		return Clss;
	}

};

// 0x28 (0x1530 - 0x1508)
// Class CrewUI.BattlePassCrewPurchaseButton
class UBattlePassCrewPurchaseButton : public UFortHoldableButton
{
public:
	enum class EBattlePassPurchaseButtonCurrencyType CurrencyType;                                      // 0x1508(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_80AF[0x7];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_Label;                                        // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_SecondaryLabel;                               // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_FinalCost;                                    // 0x1520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Container_SecondaryLabel;                          // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassCrewPurchaseButton");
		return Clss;
	}

	void OnCurrencyUpdated();
};

// 0x80 (0x478 - 0x3F8)
// Class CrewUI.BattlePassCrewPurchaseContainer
class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_80B0[0x20];                                    // Fixing Size After Last Property..
	float                                        CrewUpsellTransitionDelayTime;                     // 0x418(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80B1[0xC];                                     // Fixing Size After Last Property..
	class UCommonActivatableWidgetSwitcher*      Switcher_ContentContainer;                         // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassPurchaseScreen*             BattlePassPurchaseScreen;                          // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      Intro;                                             // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      QuickIntro;                                        // 0x440(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      CrewBenefitsIntro;                                 // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCrewSubscriptionErrorModal> CrewSubscriptionErrorModalClass;                   // 0x450(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80B2[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassCrewPurchaseContainer");
		return Clss;
	}

	void OnTriggerIntroAnimation(bool bCanClaimRewards);
	void OnContentStateUpdated(enum class EBattlePassCrewContentState InState, bool bInScreenOpened);
};

// 0x8 (0x2D8 - 0x2D0)
// Class CrewUI.BattlePassSeasonHeading
class UBattlePassSeasonHeading : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Season;                                       // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassSeasonHeading");
		return Clss;
	}

};

// 0x128 (0x560 - 0x438)
// Class CrewUI.BattlePassPurchaseScreen
class UBattlePassPurchaseScreen : public UCMSBackgroundWidget
{
public:
	uint8                                        Pad_80B3[0x3C];                                    // Fixing Size After Last Property..
	float                                        CrewTransitionDelayTime;                           // 0x474(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80B4[0x70];                                    // Fixing Size After Last Property..
	TSubclassOf<class UCommonActivatableWidget>  PurchaseCompleteModal;                             // 0x4E8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ToCrew;                                     // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_Purchase;                                   // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MoreInfo;                                   // 0x500(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_GiftBattlePass;                             // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_ConfirmBase;                                // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_ConfirmBundle;                              // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassSeasonHeading*              Heading_Primary;                                   // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassSeasonHeading*              Heading_Secondary;                                 // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Disclaimer;                               // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonAnimatedSwitcher*               Switcher_PurchaseState;                            // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80B5[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassPurchaseScreen");
		return Clss;
	}

	void OnShowNavButtonNotification(bool bShowNotification);
	void OnSetScreenInteractable(bool bInteractable);
	void OnSetNavButtonNotificationText(class FText& NotificationText);
	void OnPurchaseStateChanged(enum class EBattlePassPurchaseState InCurrentState);
	void OnPurchaseConfirmed();
};

// 0xE0 (0x4D8 - 0x3F8)
// Class CrewUI.CrewMultiSubscriptionAlertModal
class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_80B6[0x8];                                     // Fixing Size After Last Property..
	class UDynamicEntryBox*                      EntryBox_BulletPoints;                             // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_OpenHowToURL;                               // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_TextURL;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_DoNotRemind;                                // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Close;                                      // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_TouchClose;                                 // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FText>                          BulletPoints;                                      // 0x430(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TMap<enum class EAppStore, class FText>      AppStorePlatformMapping;                           // 0x440(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FString                                HowToCancelURL;                                    // 0x490(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80B7[0x20];                                    // Fixing Size After Last Property..
	class FText                                  PlatformTextStyle;                                 // 0x4C0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewMultiSubscriptionAlertModal");
		return Clss;
	}

	void OnSetHowToCancelURL(const class FString& MoreInfoUrl);
};

// 0x1A0 (0x598 - 0x3F8)
// Class CrewUI.CrewPriceChangeAcknowledgeModal
class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_80B8[0x8];                                     // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_Accept;                                     // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_CancelSubscription;                         // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_MoreInfo;                                   // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_TextURL;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortSubscriptionCancellationModal> CancellationInfoModalClass;                        // 0x420(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_80B9[0x150];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewPriceChangeAcknowledgeModal");
		return Clss;
	}

	void OnSetPriceChangeAcknowledgeTitle(class FText& Title);
	void OnSetPriceChangeAcknowledgeMoreInfoUrl(class FText& MoreInfoUrl);
	void OnSetPriceChangeAcknowledgeMoreInfoText(class FText& ConfirmButtonText);
	void OnSetPriceChangeAcknowledgeConfirmButtonText(class FText& ConfirmButtonText);
	void OnSetPriceChangeAcknowledgeCheckboxText(class FText& CheckboxText);
	void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(class FText& CancelSubscriptionButtonText);
	void OnSetPriceChangeAcknowledgeBodyText(class FText& BodyText);
	void OnSetPriceChangeAcknowledgeBodyTable(TArray<struct FCrewTableRow>& PriceChangeByRegionRows);
	void OnModalBackout();
	void ExitModal();
};

// 0x198 (0x5D0 - 0x438)
// Class CrewUI.CrewPurchaseScreen
class UCrewPurchaseScreen : public UCMSBackgroundWidget
{
public:
	uint8                                        Pad_80BD[0x68];                                    // Fixing Size After Last Property..
	bool                                         bManagementModeEnabled;                            // 0x4A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_80BE[0x7];                                     // Fixing Size After Last Property..
	class UWidget*                               ContentPurchasedFocusWidget;                       // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               FocusWidget;                                       // 0x4B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                ButtonGroup_BenefitsTiles;                         // 0x4B8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionCancellationModal> CancellationInfoModalClass;                        // 0x4C0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> LegalInfoModalClass;                               // 0x4E8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> ResolveIssueModalClass;                            // 0x510(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> RejoinModalClass;                                  // 0x538(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ToBattlePass;                               // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_Purchase;                                   // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_Rejoin;                                     // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ResolvePayment;                             // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_WatchTrailer;                               // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Terms;                                      // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CancellationInfo;                           // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_RecurringRewards;                         // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_LimitedTimeRewards;                       // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCrewTileDetails*                      Details_CurrentCrewTile;                           // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_LimitedTime;                                  // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Overlay_UserInformation;                           // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_UserInformation;                              // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_CrewDisclaimer;                               // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewPurchaseScreen");
		return Clss;
	}

	void OnUserInformationTextsUpdated(class FText& UserInformationText1, class FText& UserInformationText2, enum class EMcpSubscriptionState SubscriptionState);
	void OnUpdateVBuckRefundVisibility(bool bVisible);
	void OnUpdatePurchaseButtonState(enum class ECrewPurchaseButtonState ButtonState);
	void OnShowNavButtonNotification(bool bShowNotification);
	void OnSetPaymentLegalText(class FText& LegalText);
	void OnSetNavButtonNotificationText(class FText& NotificationText);
	void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);
	void EndProgress();
	void BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText);
	void BeginProgress(class FText& ProgressLabel);
};

// 0x60 (0x14D0 - 0x1470)
// Class CrewUI.CrewRewardTile
class UCrewRewardTile : public UCommonButtonBase
{
public:
	uint8                                        Pad_80BF[0x40];                                    // Fixing Size After Last Property..
	float                                        TileImageStreamoutSeconds;                         // 0x14B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80C0[0x4];                                     // Fixing Size After Last Property..
	class UImage*                                Image_TileImage;                                   // 0x14B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_TileLabel;                                    // 0x14C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80C1[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewRewardTile");
		return Clss;
	}

	void OnUpdateOwnedState(bool bOwned);
	void OnStartingDownloadTileImage();
	void OnDownloadTileImageComplete(class UTexture2D* Texture);
	bool IsMonthlyBenefit();
};

// 0xF0 (0x528 - 0x438)
// Class CrewUI.CrewSeasonLaunchScreen
class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget
{
public:
	uint8                                        Pad_80C2[0x38];                                    // Fixing Size After Last Property..
	TSoftClassPtr<class UFortSubscriptionPlatformModal> ResolveIssueModalClass;                            // 0x470(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassSeasonHeading*              Heading_SeasonInfo;                                // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Claim;                                      // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ResolveIssue;                               // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_GiftBattlePass;                             // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Disclaimer;                               // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80C3[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewSeasonLaunchScreen");
		return Clss;
	}

};

// 0x8 (0x640 - 0x638)
// Class CrewUI.CrewStandaloneSubscriptionContentContainer
class UCrewStandaloneSubscriptionContentContainer : public UFortStandaloneFrontend
{
public:
	class UCrewSubscriptionContentContainer*     Widget_CrewContentContainer;                       // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewStandaloneSubscriptionContentContainer");
		return Clss;
	}

};

// 0xA0 (0x498 - 0x3F8)
// Class CrewUI.CrewSubscriptionContentContainer
class UCrewSubscriptionContentContainer : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_80C4[0x30];                                    // Fixing Size After Last Property..
	TArray<struct FCrewSubscriptionContentTabData> TabsData;                                          // 0x428(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   NextTabInputAction;                                // 0x438(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   PreviousTabInputAction;                            // 0x448(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_Tabs;                                     // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                ButtonGroup_Tabs;                                  // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidgetSwitcher*      Switcher_Tabs;                                     // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_TabsContainer;                              // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SpacingAdjustmentForTabs;                          // 0x478(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPrimaryContentSetup                  ContentSetup;                                      // 0x47C(0x3)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80C5[0x19];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewSubscriptionContentContainer");
		return Clss;
	}

	void OnTabSelected(int32 TabIndex);
};

// 0x10 (0x408 - 0x3F8)
// Class CrewUI.CrewSubscriptionErrorModal
class UCrewSubscriptionErrorModal : public UCommonActivatableWidget
{
public:
	class UCommonButtonBase*                     Button_Close;                                      // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_TouchClose;                                 // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewSubscriptionErrorModal");
		return Clss;
	}

};

// 0x48 (0x318 - 0x2D0)
// Class CrewUI.CrewTileDetails
class UCrewTileDetails : public UCommonUserWidget
{
public:
	uint8                                        Pad_80C6[0x28];                                    // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_Title;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Description;                              // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_Tags;                                     // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MobileMoreInfo;                             // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewTileDetails");
		return Clss;
	}

};

// 0x8 (0x2D8 - 0x2D0)
// Class CrewUI.CrewTileDetailsTag
class UCrewTileDetailsTag : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                  Text_Label;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewTileDetailsTag");
		return Clss;
	}

	void OnTagSetup(enum class ECrewDetailsTag RewardTag, bool bIsOwnedTag);
};

// 0x138 (0x160 - 0x28)
// Class CrewUI.CrewUIGameFeatureAction
class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UBattlePassCrewPurchaseContainer> BattlePassCrewContainerClass;                      // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCrewSubscriptionContentContainer> CrewContentContainerClass;                         // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCrewStandaloneSubscriptionContentContainer> CrewStandaloneContentContainerClass;               // 0x78(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCrewPurchaseScreen>     CrewPurchaseScreenClass;                           // 0xA0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortProgressiveContentContainer> ProgressionScreenClass;                            // 0xC8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCrewPriceChangeAcknowledgeModal> CrewPriceChangeAcknowledgeModalClass;              // 0xF0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCrewMultiSubscriptionAlertModal> MultiSubAlertModalClass;                           // 0x118(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortProgressiveSet>           ProgressiveCosmeticSets;                           // 0x140(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80C7[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrewUIGameFeatureAction");
		return Clss;
	}

};

// 0x50 (0x448 - 0x3F8)
// Class CrewUI.FortProgressiveContentContainer
class UFortProgressiveContentContainer : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_80C8[0x38];                                    // Fixing Size After Last Property..
	class UCommonActivatableWidgetSwitcher*      Switcher_PrimaryContent;                           // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveTableOfContentsScreen* Widget_ProgressiveTableOfContentsScreen;           // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveItemScreen*            Widget_ProgressiveItemScreen;                      // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveContentContainer");
		return Clss;
	}

};

// 0x28 (0x2D0 - 0x2A8)
// Class CrewUI.FortProgressiveItemDetailsWidget
class UFortProgressiveItemDetailsWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_CosmeticStage;                                // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_UnlockCriteria;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_UnlockCriteriaContainer;                    // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaRewardItemTypeRarityTag*        Widget_ItemTypeRarityTag;                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Tag_Owned;                                         // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveItemDetailsWidget");
		return Clss;
	}

};

// 0x68 (0x778 - 0x710)
// Class CrewUI.FortProgressiveScreenBase
class UFortProgressiveScreenBase : public UFortItemPreviewScreen
{
public:
	uint8                                        Pad_80CA[0x54];                                    // Fixing Size After Last Property..
	float                                        RewardPreviewTime;                                 // 0x764(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80CB[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveScreenBase");
		return Clss;
	}

	void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);
};

// 0x120 (0x898 - 0x778)
// Class CrewUI.FortProgressiveItemScreen
class UFortProgressiveItemScreen : public UFortProgressiveScreenBase
{
public:
	class UWidget*                               ContentPurchasedFocusWidget;                       // 0x778(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x780(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_TouchBack;                                  // 0x788(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MoreInfo;                                   // 0x790(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_Subscribe;                                  // 0x798(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PreviewStyles;                              // 0x7A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ExpirationFinePrint;                          // 0x7A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_NewStagesUnlockFinePrint;                     // 0x7B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_StagesPips;                               // 0x7B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                ButtonGroup_StagesPips;                            // 0x7C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveItemDetailsWidget*     Widget_ProgressiveItemDetails;                     // 0x7C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveStageList*             Widget_ProgressiveStageList;                       // 0x7D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveItemStateTitleWidget*  ProgressiveItemStateTitle;                         // 0x7D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> MoreInfoModalClass;                                // 0x7E0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SubscribedMaterialParameterName;                   // 0x808(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80CD[0x8C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveItemScreen");
		return Clss;
	}

	void OnUpdateSubscriptionState(bool bSubscribed);
	void OnSetIsSoloScreen(bool bInIsSoloScreen);
	void OnItemSelected();
	void OnErrorStateTextUpdated(class FText& ErrorStateText);
	void BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText);
};

// 0x0 (0x2A8 - 0x2A8)
// Class CrewUI.FortProgressiveItemStateTitleWidget
class UFortProgressiveItemStateTitleWidget : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveItemStateTitleWidget");
		return Clss;
	}

	void BP_OnSetHeaderInfo(class FText& Subheading, bool bSubscribed, int32 UnlockedStages, int32 MaxStages);
};

// 0x90 (0x1500 - 0x1470)
// Class CrewUI.FortProgressiveItemWidget
class UFortProgressiveItemWidget : public UCommonButtonBase
{
public:
	class UAthenaItemShopReactiveTileText*       TileText_ItemName;                                 // 0x1470(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FProgressiveStageItemInfo             StageItemInfo;                                     // 0x1478(0x70)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80D0[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveItemWidget");
		return Clss;
	}

	void OnUnhighlighted();
	void OnTileMaterialLoaded(bool bSubscribed);
	void OnStageItemChanged(struct FProgressiveStageItemInfo& InStageItemInfo);
	void OnPeekStateChanged(bool bIsInPeekState);
	void OnHighlighted();
};

// 0x30 (0x2D8 - 0x2A8)
// Class CrewUI.FortProgressiveSetDetailsWidget
class UFortProgressiveSetDetailsWidget : public UUserWidget
{
public:
	class UCommonButtonBase*                     Button_MoreInfo;                                   // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80D2[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveSetDetailsWidget");
		return Clss;
	}

	void BP_OnUpdateSetDetails(class FText& SetName, class FText& ExpiringText, bool bCompleted);
};

// 0x80 (0x478 - 0x3F8)
// Class CrewUI.FortProgressiveSetList
class UFortProgressiveSetList : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_80D3[0x8];                                     // Fixing Size After Last Property..
	class UAthenaScrollBox*                      ScrollBox_SetList;                                 // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSwipePanel*                       SwipePanel_Navigation;                             // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                ButtonGroup_SetTiles;                              // 0x410(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumTilesPerPage;                                   // 0x418(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80D4[0x4];                                     // Fixing Size After Last Property..
	TArray<class UFortProgressiveSetTile*>       SetTiles;                                          // 0x420(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80D5[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveSetList");
		return Clss;
	}

	void ClearSetTiles();
	class UFortProgressiveSetTile* AddSetTile();
};

// 0xB0 (0x1520 - 0x1470)
// Class CrewUI.FortProgressiveSetTile
class UFortProgressiveSetTile : public UCommonButtonBase
{
public:
	uint8                                        Pad_80D7[0xB0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveSetTile");
		return Clss;
	}

	void BP_OnTileMaterialLoaded(bool bSubscribed);
	void BP_OnInitializeSetInfo(struct FProgressiveSetInfo& InSetInfo, class FText& BottomText, class FText& BottomSubtext, bool bSubscribed);
};

// 0x50 (0x448 - 0x3F8)
// Class CrewUI.FortProgressiveStageList
class UFortProgressiveStageList : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_80D8[0x18];                                    // Fixing Size After Last Property..
	class UCommonButtonGroupBase*                ButtonGroup_StageItems;                            // 0x410(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaScrollBox*                      ScrollBox_StageList;                               // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSwipePanel*                       SwipePanel_Navigation;                             // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80D9[0x8];                                     // Fixing Size After Last Property..
	TArray<class UFortProgressiveStageWidget*>   Stages;                                            // 0x430(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80DA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveStageList");
		return Clss;
	}

	void SelectStageInDirection(int32 Direction);
	void ClearStageWidgets();
	class UFortProgressiveStageWidget* AddStageWidget();
};

// 0x20 (0x2F0 - 0x2D0)
// Class CrewUI.FortProgressiveStageWidget
class UFortProgressiveStageWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_Month;                                        // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80DB[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveStageWidget");
		return Clss;
	}

	void OnSetTooltipVisible(bool bVisible);
	void OnSetTooltipText(class FText& InToolTipText);
	void OnPeekStateChanged(bool bIsInPeekState);
	void ClearStageItemWidgets();
	class UFortProgressiveItemWidget* AddStageItemWidget();
};

// 0x90 (0x808 - 0x778)
// Class CrewUI.FortProgressiveTableOfContentsScreen
class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase
{
public:
	class UWidget*                               ContentPurchasedFocusWidget;                       // 0x778(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Back;                                       // 0x780(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_TouchBack;                                  // 0x788(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MoreInfo;                                   // 0x790(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBattlePassCrewPurchaseButton*         Button_Subscribe;                                  // 0x798(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveSetList*               Widget_SetList;                                    // 0x7A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveSetDetailsWidget*      Widget_SetDetails;                                 // 0x7A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortProgressiveItemStateTitleWidget*  Widget_ItemStateTitle;                             // 0x7B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_SetPagesPips;                             // 0x7B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                ButtonGroup_SetPagesPips;                          // 0x7C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UFortSubscriptionPlatformModal> MoreInfoModalClass;                                // 0x7C8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SubscribedMaterialParameterName;                   // 0x7F0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80DE[0x14];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortProgressiveTableOfContentsScreen");
		return Clss;
	}

	void BP_OnUpdateSubscriptionState(bool bSubscribed);
	void BP_OnUpdateNumTilesAvailable(int32 NumTiles);
	void BP_OnUpdateErrorStateText(class FText& ErrorStateText);
	void BP_OnUpdateBanner(class FText& BannerText, bool bAllSetsCompleted, bool bSubscribed);
	void BP_OnSetDescriptionText(class FText& ProductDescription);
	void BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
