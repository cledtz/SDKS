#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.SetBlueprintGiftBoxItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGiftBoxItem*            GiftBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      FromUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFortReceivedItemLootInfo>ItemDefs                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bSelfGift                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedHeaderSubWidgetBase_C::SetBlueprintGiftBoxItem(class UFortGiftBoxItem* GiftBox, const class FString& FromUser, TArray<struct FFortReceivedItemLootInfo>& ItemDefs, bool bSelfGift)
{
	static auto Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "SetBlueprintGiftBoxItem");

	Params::UItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem_Params Parms;

	Parms.GiftBox = GiftBox;
	Parms.FromUser = FromUser;
	Parms.ItemDefs = ItemDefs;
	Parms.bSelfGift = bSelfGift;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.InitFromGiftBoxItem_BP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedHeaderSubWidgetBase_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedHeaderSubWidgetBase_C_InitFromGiftBoxItem_BP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedHeaderSubWidgetBase_C::ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase");

	Params::UItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
