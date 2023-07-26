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

// 0x29 (0x29 - 0x0)
// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.SetBlueprintGiftBoxItem
struct UItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem_Params
{
public:
	class UFortGiftBoxItem*                      GiftBox;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                FromUser;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFortReceivedItemLootInfo>     ItemDefs;                                          // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bSelfGift;                                         // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.InitFromGiftBoxItem_BP
struct UItemReceivedHeaderSubWidgetBase_C_InitFromGiftBoxItem_BP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase
struct UItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
