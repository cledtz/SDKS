#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortPurchaseHistoryRefundType : uint8
{
	CancelPurchase                 = 0,
	ReturnTicket                   = 1,
	TokenlessRefund                = 2,
	NonRefundable                  = 3,
	EFortPurchaseHistoryRefundType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct AnnualRefundTokenUI.PurchaseHistoryBundleEntry
struct FPurchaseHistoryBundleEntry
{
public:
	uint8                                        Pad_2E52[0x10];                                    // Fixing Size After Last Property 
	class FString                                ID;                                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


