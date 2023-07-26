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

// 0x8 (0x2B0 - 0x2A8)
// Class AnnualRefundTokenUI.FortAnnualRefundTicket
class UFortAnnualRefundTicket : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_AvailableDate;                                // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAnnualRefundTicket");
		return Clss;
	}

	void OnUpdatePendingState(bool bIsPending);
	void OnUpdateAvailableState(bool bIsAvailable);
	void OnPlayLockingAnimation();
};

// 0x28 (0x548 - 0x520)
// Class AnnualRefundTokenUI.FortAnnualRefundTokenData
class UFortAnnualRefundTokenData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UFortPurchaseHistoryScreen> PurchaseHistoryScreenClass;                        // 0x520(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAnnualRefundTokenData");
		return Clss;
	}

};

// 0x38 (0x1540 - 0x1508)
// Class AnnualRefundTokenUI.FortPurchaseHistoryEntry
class UFortPurchaseHistoryEntry : public UFortHoldableButton
{
public:
	uint8                                        Pad_7BFB[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortCosmeticItemCard>     ItemCardClass;                                     // 0x1510(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CardWidthOverride;                                 // 0x1518(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BFC[0x4];                                     // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_Name;                                         // 0x1520(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        LootEntryItemTypesToExclude;                       // 0x1528(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7BFD[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPurchaseHistoryEntry");
		return Clss;
	}

	void UpdateItemList(TArray<class UFortCosmeticItemCard*>& ItemCards);
	void SetupItemCard(class UFortCosmeticItemCard* ItemCard, class UFortItem* Item);
	void SetPurchaseText(class FText& PurchaseDateText, class FText& RefundDateText, bool bHasBeenRefunded, enum class EFortPurchaseHistoryRefundType RefundType);
	void OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable);
};

// 0x120 (0x3B0 - 0x290)
// Class AnnualRefundTokenUI.FortPurchaseHistoryListView
class UFortPurchaseHistoryListView : public UListViewBase
{
public:
	uint8                                        Pad_7BFE[0x120];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPurchaseHistoryListView");
		return Clss;
	}

};

// 0xF8 (0x660 - 0x568)
// Class AnnualRefundTokenUI.FortPurchaseHistoryScreen
class UFortPurchaseHistoryScreen : public UFortActivatablePanel
{
public:
	struct FDataTableRowHandle                   BackAction;                                        // 0x568(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BFF[0x18];                                    // Fixing Size After Last Property..
	TSoftClassPtr<class UFortRefundConfirmation> RefundConfirmationClass;                           // 0x590(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> DirectPurchaseInfoModalClass;                      // 0x5B8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonAnimatedSwitcher*               Switcher_MainContent;                              // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPurchaseHistoryListView*          ListView_Purchases;                                // 0x5E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x5F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PostApproval;                               // 0x5F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Desc;                                         // 0x600(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundCount;                                  // 0x608(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultHeader;                                 // 0x610(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultTitle;                                  // 0x618(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultDesc;                                   // 0x620(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Left;                                 // 0x628(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Center;                               // 0x630(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Right;                                // 0x638(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_CancelPurchaseInfo;                         // 0x640(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_ReturnTicketInfo;                           // 0x648(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_TokenlessRefundInfo;                        // 0x650(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_NonRefundableInfo;                          // 0x658(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPurchaseHistoryScreen");
		return Clss;
	}

	void OnPopulateView();
	void OnNoPurchasesAvailable();
	void OnEndRefundSubmission();
	void OnBeginRefundSubmission();
	bool BP_IsShowingPurchases();
};

// 0x58 (0x5C0 - 0x568)
// Class AnnualRefundTokenUI.FortRefundConfirmation
class UFortRefundConfirmation : public UFortActivatablePanel
{
public:
	uint8                                        Pad_7C01[0x10];                                    // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_RefundsRemaining;                             // 0x578(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundCount;                                  // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_AreYouSure;                                   // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Yes;                                        // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_No;                                         // 0x598(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x5A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Left;                                 // 0x5A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Center;                               // 0x5B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Right;                                // 0x5B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRefundConfirmation");
		return Clss;
	}

	void BP_UpdateRefundType(enum class EFortPurchaseHistoryRefundType RefundType);
	void BP_UpdateItemsList(TArray<class UFortItemDefinition*>& SelectedItemDefs, int32 TotalMtxPaid);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
