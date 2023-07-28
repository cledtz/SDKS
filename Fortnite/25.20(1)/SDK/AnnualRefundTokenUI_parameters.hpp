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
// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState
struct UFortAnnualRefundTicket_OnUpdatePendingState_Params
{
public:
	bool                                         bIsPending;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState
struct UFortAnnualRefundTicket_OnUpdateAvailableState_Params
{
public:
	bool                                         bIsAvailable;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AnnualRefundTokenUI.FortAnnualRefundTicket.OnPlayLockingAnimation
struct UFortAnnualRefundTicket_OnPlayLockingAnimation_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.UpdateItemList
struct UFortPurchaseHistoryEntry_UpdateItemList_Params
{
public:
	TArray<class UFortCosmeticItemCard*>         ItemCards;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard
struct UFortPurchaseHistoryEntry_SetupItemCard_Params
{
public:
	class UFortCosmeticItemCard*                 ItemCard;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             Item;                                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText
struct UFortPurchaseHistoryEntry_SetPurchaseText_Params
{
public:
	class FText                                  PurchaseDateText;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  RefundDateText;                                    // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bHasBeenRefunded;                                  // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPurchaseHistoryRefundType    RefundType;                                        // 0x31(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BE7[0x6];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory
struct UFortPurchaseHistoryEntry_OnSetHistory_Params
{
public:
	bool                                         bHasBeenRefunded;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTokenlessRefund;                                // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerHasTokens;                                  // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNonRefundable;                                    // 0x3(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView
struct UFortPurchaseHistoryScreen_OnPopulateView_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable
struct UFortPurchaseHistoryScreen_OnNoPurchasesAvailable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission
struct UFortPurchaseHistoryScreen_OnEndRefundSubmission_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission
struct UFortPurchaseHistoryScreen_OnBeginRefundSubmission_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortPurchaseHistoryScreen.BP_IsShowingPurchases
struct UFortPurchaseHistoryScreen_BP_IsShowingPurchases_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateRefundType
struct UFortRefundConfirmation_BP_UpdateRefundType_Params
{
public:
	enum class EFortPurchaseHistoryRefundType    RefundType;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateItemsList
struct UFortRefundConfirmation_BP_UpdateItemsList_Params
{
public:
	TArray<class UFortItemDefinition*>           SelectedItemDefs;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        TotalMtxPaid;                                      // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BED[0x4];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
