#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
// (None)

class UClass* UItemReceivedHeaderSubWidgetBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemReceivedHeaderSubWidgetBase_C");

	return Clss;
}


// ItemReceivedHeaderSubWidgetBase_C ItemReceivedHeaderSubWidgetBase.Default__ItemReceivedHeaderSubWidgetBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemReceivedHeaderSubWidgetBase_C* UItemReceivedHeaderSubWidgetBase_C::GetDefaultObj()
{
	static class UItemReceivedHeaderSubWidgetBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemReceivedHeaderSubWidgetBase_C*>(UItemReceivedHeaderSubWidgetBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.SetBlueprintGiftBoxItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGiftBoxItem*            GiftBox                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      FromUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFortReceivedItemLootInfo>ItemDefs                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bSelfGift                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedHeaderSubWidgetBase_C::SetBlueprintGiftBoxItem(class UFortGiftBoxItem* GiftBox, const class FString& FromUser, TArray<struct FFortReceivedItemLootInfo>& ItemDefs, bool bSelfGift)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "SetBlueprintGiftBoxItem");

	Params::UItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedHeaderSubWidgetBase_C_InitFromGiftBoxItem_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedHeaderSubWidgetBase_C::ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase");

	Params::UItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


