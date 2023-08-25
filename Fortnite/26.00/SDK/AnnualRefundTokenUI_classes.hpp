#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x1550 - 0x1508)
// Class AnnualRefundTokenUI.FortPurchaseHistoryEntryBase
class UFortPurchaseHistoryEntryBase : public UFortHoldableButton
{
public:
	uint8                                        Pad_2D94[0x8];                                     // Fixing Size After Last Property 
	TSubclassOf<class UFortCosmeticItemCard>     ItemCardClass;                                     // 0x1510(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CardWidthOverride;                                 // 0x1518(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D97[0x4];                                     // Fixing Size After Last Property 
	class UCommonTextBlock*                      Text_Name;                                         // 0x1520(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        LootEntryItemTypesToExclude;                       // 0x1528(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<class FString>                        LootEntryItemTypesToCombine;                       // 0x1538(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2D9B[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryEntryBase* GetDefaultObj();

	void UpdateItemList(TArray<class UFortCosmeticItemCard*>& ItemCards);
};

// 0x0 (0x1550 - 0x1550)
// Class AnnualRefundTokenUI.FortPurchaseHistoryEntry
class UFortPurchaseHistoryEntry : public UFortPurchaseHistoryEntryBase
{
public:

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryEntry* GetDefaultObj();

	void SetupItemCard(class UFortCosmeticItemCard* ItemCard, class UFortItem* Item);
	void SetPurchaseText(class FText& PurchaseDateText, class FText& RefundDateText, bool bHasBeenRefunded, enum class EFortPurchaseHistoryRefundType RefundType);
	void OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable, bool IsPartOfABundle, bool IsNextRefundable, int32 IndexInBundle, int32 NumPurchasesInBundle);
};

// 0x0 (0x1550 - 0x1550)
// Class AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry
class UFortPurchaseHistoryBundleEntry : public UFortPurchaseHistoryEntryBase
{
public:

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryBundleEntry* GetDefaultObj();

	void SetExpandButtonText(int32 NumPurchases);
};

// 0x120 (0x3B0 - 0x290)
// Class AnnualRefundTokenUI.FortPurchaseHistoryListView
class UFortPurchaseHistoryListView : public UListViewBase
{
public:
	uint8                                        Pad_2DD7[0x120];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryListView* GetDefaultObj();

};

// 0x38 (0x3E8 - 0x3B0)
// Class AnnualRefundTokenUI.FortPurchaseHistoryTreeView
class UFortPurchaseHistoryTreeView : public UFortPurchaseHistoryListView
{
public:
	uint8                                        Pad_2DD8[0x10];                                    // Fixing Size After Last Property 
	TSubclassOf<class UFortPurchaseHistoryBundleEntry> HeaderEntryWidgetClass;                            // 0x3C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DD9[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryTreeView* GetDefaultObj();

};

// 0x8 (0x2B0 - 0x2A8)
// Class AnnualRefundTokenUI.FortAnnualRefundTicket
class UFortAnnualRefundTicket : public UUserWidget
{
public:
	class UCommonTextBlock*                      Text_AvailableDate;                                // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAnnualRefundTicket* GetDefaultObj();

	void OnUpdatePendingState(bool bIsPending);
	void OnUpdateAvailableState(bool bIsAvailable);
	void OnPlayLockingAnimation();
};

// 0x20 (0x4B8 - 0x498)
// Class AnnualRefundTokenUI.FortAnnualRefundTokenData
class UFortAnnualRefundTokenData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UFortPurchaseHistoryScreen> PurchaseHistoryScreenClass;                        // 0x498(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortAnnualRefundTokenData* GetDefaultObj();

};

// 0xF8 (0x650 - 0x558)
// Class AnnualRefundTokenUI.FortPurchaseHistoryScreen
class UFortPurchaseHistoryScreen : public UFortActivatablePanel
{
public:
	struct FDataTableRowHandle                   BackAction;                                        // 0x558(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2E15[0x18];                                    // Fixing Size After Last Property 
	TSoftClassPtr<class UFortRefundConfirmation> RefundConfirmationClass;                           // 0x580(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonActivatableWidget> DirectPurchaseInfoModalClass;                      // 0x5A0(0x20)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonAnimatedSwitcher*               Switcher_MainContent;                              // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortPurchaseHistoryTreeView*          TreeView_Purchases;                                // 0x5C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x5D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_PostApproval;                               // 0x5D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Desc;                                         // 0x5E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundCount;                                  // 0x5E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultHeader;                                 // 0x5F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultTitle;                                  // 0x5F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ResultDesc;                                   // 0x600(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Left;                                 // 0x608(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Center;                               // 0x610(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Right;                                // 0x618(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_CancelPurchaseInfo;                         // 0x620(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_ReturnTicketInfo;                           // 0x628(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_TokenlessRefundInfo;                        // 0x630(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_NonRefundableInfo;                          // 0x638(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_BundledPurchaseInfo;                        // 0x640(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               Widget_BundledPurchaseTokenlessRefundInfo;         // 0x648(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryScreen* GetDefaultObj();

	void OnPopulateView();
	void OnNoPurchasesAvailable();
	void OnEndRefundSubmission();
	void OnBeginRefundSubmission();
	bool BP_IsShowingPurchases();
};

// 0x58 (0x5B0 - 0x558)
// Class AnnualRefundTokenUI.FortRefundConfirmation
class UFortRefundConfirmation : public UFortActivatablePanel
{
public:
	uint8                                        Pad_2E4D[0x10];                                    // Fixing Size After Last Property 
	class UCommonTextBlock*                      Text_RefundsRemaining;                             // 0x568(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundCount;                                  // 0x570(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_AreYouSure;                                   // 0x578(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Yes;                                        // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_No;                                         // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_CloseTouch;                                 // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Left;                                 // 0x598(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Center;                               // 0x5A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortAnnualRefundTicket*               RefundTicket_Right;                                // 0x5A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortRefundConfirmation* GetDefaultObj();

	void BP_UpdateRefundType(enum class EFortPurchaseHistoryRefundType RefundType, bool bBundledRefund);
	void BP_UpdateItemsList(TArray<class UFortItemDefinition*>& SelectedItemDefs, int32 TotalMtxPaid);
};

}


