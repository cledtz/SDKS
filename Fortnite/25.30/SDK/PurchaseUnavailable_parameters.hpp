#pragma once

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

// 0x18 (0x18 - 0x0)
// Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle
struct UPurchaseUnavailable_C_OnUpdateTextStyle_Params
{
public:
	class FText                                  OfferDisplayName;                                  // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x98 (0x98 - 0x0)
// Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable
struct UPurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7DBE[0x4];                                     // Fixing Size After Last Property
	class FText                                  K2Node_Event_OfferDisplayName;                     // 0x8(0x18)(ConstParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
