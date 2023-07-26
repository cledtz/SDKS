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

// 0x30 (0x428 - 0x3F8)
// Class GiftingUI.AthenaGiftConfirmedPanel
class UAthenaGiftConfirmedPanel : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_8216[0x18];                                    // Fixing Size After Last Property..
	class URichTextBlock*                        Text_RecipientInfo;                                // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGiftConfirmedPanel");
		return Clss;
	}

};

// 0x158 (0x550 - 0x3F8)
// Class GiftingUI.AthenaGiftingConfirmationScreen
class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_8219[0x30];                                    // Fixing Size After Last Property..
	class UFortStoreFrontOfferInfo*              PresentedGiftableOfferInfo;                        // 0x428(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortStoreFrontOfferInfo*              PresentedOptionalTokenOfferInfo;                   // 0x430(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_821A[0xBC];                                    // Fixing Size After Last Property..
	float                                        MinGiftSubmissionDelay;                            // 0x4F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxGiftSubmissionDelay;                            // 0x4F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_821B[0x14];                                    // Fixing Size After Last Property..
	class UCommonButtonBase*                     Button_WrapOptions;                                // 0x510(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x518(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x520(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_MtxWallet;                                  // 0x528(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingPurchasePanel*           Panel_GiftingPurchase;                             // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingWrapOptionsPanel*        Panel_WrapOptions;                                 // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftConfirmedPanel*             Panel_GiftConfirmed;                               // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingErrorsPanel*             Panel_GiftingErrors;                               // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGiftingConfirmationScreen");
		return Clss;
	}

	void OnPresentationModeChanged(enum class EGiftingPresentationMode NewMode);
	void HandleTokenOfferPurchaseComplete(bool bSuccess, TArray<struct FPurchasedItemInfo>& PurchasedItems);
	void HandleGiftSent(bool bSuccess, TArray<class FString>& IneligibleAccounts, TArray<class FString>& ErrorCodes);
	void Dismiss(bool bGiftConfirmed);
};

// 0x60 (0x458 - 0x3F8)
// Class GiftingUI.AthenaGiftingErrorsPanel
class UAthenaGiftingErrorsPanel : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_821C[0x30];                                    // Fixing Size After Last Property..
	class URichTextBlock*                        Text_RecipientInfo;                                // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_Title;                                        // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Continue;                                   // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTileView*                             TileView_Items;                                    // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGiftingErrorsPanel");
		return Clss;
	}

	void UpdateGiftEligibility(bool bStillGiftable);
};

// 0x20 (0x2F0 - 0x2D0)
// Class GiftingUI.AthenaGiftingPriceWidget
class UAthenaGiftingPriceWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_RealMoneyPrice;                               // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_FinalPrice;                                   // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RegularPrice;                                 // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Overlay_SalePrice;                                 // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGiftingPriceWidget");
		return Clss;
	}

	void SetPresentationMode(enum class EGiftingPricePresentationMode Mode);
};

// 0x18 (0x1520 - 0x1508)
// Class GiftingUI.AthenaGiftingPurchaseButton
class UAthenaGiftingPurchaseButton : public UFortHoldableButton
{
public:
	class UAthenaGiftingPriceWidget*             Widget_Price;                                      // 0x1508(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0x1510(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_821D[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGiftingPurchaseButton");
		return Clss;
	}

};

// 0x48 (0x440 - 0x3F8)
// Class GiftingUI.AthenaGiftingPurchasePanel
class UAthenaGiftingPurchasePanel : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_821E[0x18];                                    // Fixing Size After Last Property..
	class UAthenaGiftingPurchaseButton*          Button_PurchaseGift;                               // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSocialAvatarIcon*                 Avatar_MemberIcon;                                 // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_SocialNameInfo;                               // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemsCount;                                   // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_OfferName;                                    // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTileView*                             TileView_Items;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGiftingPurchasePanel");
		return Clss;
	}

	void PlayIntroAnimation();
};

// 0x1E0 (0x8F0 - 0x710)
// Class GiftingUI.AthenaGiftingScreen
class UAthenaGiftingScreen : public UFortItemPreviewScreen
{
public:
	uint8                                        Pad_8221[0x8];                                     // Fixing Size After Last Property..
	class UFortGiftingUserSearchWidget*          SearchWidget_SocialSearchWidget;                   // 0x718(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGiftingSocialUserListView*        ListView_Recipients;                               // 0x720(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTileView*                             TileView_Items;                                    // 0x728(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Back;                                       // 0x730(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x738(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_GiftingPolicy;                              // 0x740(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CameraControl;                              // 0x748(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_OfferName;                                    // 0x750(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_VBucksOffCount;                               // 0x758(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ShownItemIndex;                               // 0x760(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  Text_NoContent;                                    // 0x768(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_OfferItemOwnedCount;                      // 0x770(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOverlay*                              Container_VBucksOffViolator;                       // 0x778(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_GiftCount;                                // 0x780(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingPriceWidget*             Widget_Price;                                      // 0x788(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaLockerItemInfo*                 Widget_ItemInfo;                                   // 0x790(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_FilterTabs;                               // 0x798(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   ActionWidget_FilterTabsPrevious;                   // 0x7A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActionWidget*                   ActionWidget_FilterTabsNext;                       // 0x7A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingConfirmationScreen*      ActivatableWidget_GiftingConfirmation;             // 0x7B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ItemCyclingInterval;                               // 0x7B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8222[0x4];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   FilterTabsPreviousAction;                          // 0x7C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                   FilterTabsNextAction;                              // 0x7D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	class FText                                  RegularGiftingPolicy;                              // 0x7E0(0x18)(Edit, NativeAccessSpecifierPrivate)
	class FText                                  BattlePassGiftingPolicy;                           // 0x7F8(0x18)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8223[0x60];                                    // Fixing Size After Last Property..
	TMap<class UCommonButtonBase*, enum class EFilterType> FilterMap;                                         // 0x870(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupBase*                FilterGroup;                                       // 0x8C0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortItemDefinition*>           ItemDefinitions;                                   // 0x8C8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UFortItemDefinition*                   PresentedItemDefinition;                           // 0x8D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortStoreFrontOfferInfo*              GiftableOfferInfo;                                 // 0x8E0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortStoreFrontOfferInfo*              OptionalTokenOfferInfo;                            // 0x8E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGiftingScreen");
		return Clss;
	}

	void OnShowSearchWarningText(bool bShow);
	void OnShownItemChanged();
	void OnSetupFilterTabButton(class UCommonButtonBase* Button, enum class EFilterType FilterType);
	void OnPresentationModeChanged(enum class EGiftingScreenPresentationMode Mode);
	void OnPartyListUpdated(bool bEmpty);
	void OnFriendSelectionChanged();
	void OnFilterChanged(enum class EFilterType FilterType);
	void BlockScreenContent(bool bBlockScreen, class FText& ContentBlockedText);
};

// 0x68 (0x460 - 0x3F8)
// Class GiftingUI.AthenaGiftingWrapOptionsPanel
class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_8224[0x28];                                    // Fixing Size After Last Property..
	TArray<TSoftObjectPtr<class UFortGiftBoxItemDefinition>> GiftBoxes;                                         // 0x420(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortGiftBoxItemDefinition*>    GiftBoxItemDefs;                                   // 0x430(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8225[0x10];                                    // Fixing Size After Last Property..
	class UCommonButtonLegacy*                   Button_ConfirmWrap;                                // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTileView*                             TileView_WrapOptions;                              // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGiftingWrapOptionsPanel");
		return Clss;
	}

};

// 0xE0 (0x15C0 - 0x14E0)
// Class GiftingUI.FortGiftingSocialUserListEntry
class UFortGiftingSocialUserListEntry : public USocialListEntryBase
{
public:
	uint8                                        Pad_8226[0xB8];                                    // Fixing Size After Last Property..
	class UFortSocialAvatarIcon*                 Avatar_MemberIcon;                                 // 0x1598(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USocialNameTextBlock*                  Text_SocialName;                                   // 0x15A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_EligibilityStatus;                        // 0x15A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_OwnedItems;                               // 0x15B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaGiftingPriceWidget*             Widget_Price;                                      // 0x15B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftingSocialUserListEntry");
		return Clss;
	}

	void SetPresentationMode(enum class ERecipientPresentationMode Mode);
	void OnUserItemSet();
	void OnRecipientStatusUpdated();
	void BP_OnTouchSelectionConfirmed();
	void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation);
};

// 0xF8 (0x498 - 0x3A0)
// Class GiftingUI.FortGiftingSocialUserListView
class UFortGiftingSocialUserListView : public USocialUserListViewBase
{
public:
	float                                        RefreshRecipientStatusDelay;                       // 0x3A0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8227[0xF4];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftingSocialUserListView");
		return Clss;
	}

};

// 0x48 (0x318 - 0x2D0)
// Class GiftingUI.FortGiftingUserSearchWidget
class UFortGiftingUserSearchWidget : public UCommonUserWidget
{
public:
	class UEditableText*                         EditableText_SearchFriends;                        // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_ClearQuery;                                 // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_SubmitQuery;                                // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8229[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftingUserSearchWidget");
		return Clss;
	}

	void OnSearchCommit(bool bSearchStringShort);
	void HandleSearchFriendsTextEntered(class FText& Text, enum class ETextCommit CommitMethod);
	void HandleSearchFriendsTextChanged(class FText& Text);
	void FocusEditableText();
};

// 0x20 (0x14E0 - 0x14C0)
// Class GiftingUI.FortGiftingWrapOptionListEntry
class UFortGiftingWrapOptionListEntry : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_822A[0x8];                                     // Fixing Size After Last Property..
	class UFortGiftBoxItemDefinition*            GiftBoxDefinition;                                 // 0x14C8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      Image_Gift;                                        // 0x14D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_822B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftingWrapOptionListEntry");
		return Clss;
	}

};

// 0x28 (0x548 - 0x520)
// Class GiftingUI.FortGiftingData
class UFortGiftingData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UAthenaGiftingScreen>    GiftingScreenClass;                                // 0x520(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGiftingData");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
