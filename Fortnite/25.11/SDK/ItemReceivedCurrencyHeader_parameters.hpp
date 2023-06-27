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

// 0x10 (0x10 - 0x0)
// Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActiveFromPresentation
struct UItemReceivedCurrencyHeader_C_ActiveFromPresentation_Params
{
public:
	struct FCurrencyDataWithGiftBox              CurrencyDataArray;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA0 (0xA0 - 0x0)
// Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ExecuteUbergraph_ItemReceivedCurrencyHeader
struct UItemReceivedCurrencyHeader_C_ExecuteUbergraph_ItemReceivedCurrencyHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B9A[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B9B[0x4];                                     // Fixing Size After Last Property..
	struct FCurrencyDataWithGiftBox              K2Node_CustomEvent_CurrencyDataArray;              // 0x18(0x10)()
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCurrencyData                         CallFunc_Array_Get_Item;                           // 0x30(0x50)()
	class UFortMcpProfileAthena*                 CallFunc_GetAthenaProfile_ReturnValue;             // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasPurchasedSeasonBook_ReturnValue;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B9C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B9D[0x7];                                     // Fixing Size After Last Property..
	class UImage*                                K2Node_Select_Default;                             // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActivateWidgetFromPresentationScreen__DelegateSignature
struct UItemReceivedCurrencyHeader_C_ActivateWidgetFromPresentationScreen__DelegateSignature_Params
{
public:
	class UFortGiftBoxItem*                      GiftBox;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCurrencyData>                 CurrencyArray;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
