#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
