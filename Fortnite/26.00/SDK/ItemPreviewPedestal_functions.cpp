#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C
// (Actor)

class UClass* UItemPreviewPedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPreviewPedestal_C");

	return Clss;
}


// ItemPreviewPedestal_C ItemPreviewPedestal.Default__ItemPreviewPedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemPreviewPedestal_C* UItemPreviewPedestal_C::GetDefaultObj()
{
	static class UItemPreviewPedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPreviewPedestal_C*>(UItemPreviewPedestal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemPreviewActor*       Preview                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWrapPreview_C*              K2Node_DynamicCast_AsWrap_Preview                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemOnPawnPreview_C*        K2Node_DynamicCast_AsItem_on_Pawn_Preview                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewPedestal_C::Remove_Floor(class UFortItemPreviewActor* Preview, class UWrapPreview_C* K2Node_DynamicCast_AsWrap_Preview, bool K2Node_DynamicCast_bSuccess, class UItemOnPawnPreview_C* K2Node_DynamicCast_AsItem_on_Pawn_Preview, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "Remove Floor");

	Params::UItemPreviewPedestal_C_Remove_Floor_Params Parms{};

	Parms.Preview = Preview;
	Parms.K2Node_DynamicCast_AsWrap_Preview = K2Node_DynamicCast_AsWrap_Preview;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_on_Pawn_Preview = K2Node_DynamicCast_AsItem_on_Pawn_Preview;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortItemType           ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewPedestal_C::OnItemDisplayed(enum class EFortItemType ItemType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "OnItemDisplayed");

	Params::UItemPreviewPedestal_C_OnItemDisplayed_Params Parms{};

	Parms.ItemType = ItemType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           K2Node_Event_ItemType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewPedestal_C::ExecuteUbergraph_ItemPreviewPedestal(int32 EntryPoint, enum class EFortItemType K2Node_Event_ItemType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "ExecuteUbergraph_ItemPreviewPedestal");

	Params::UItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemType = K2Node_Event_ItemType;

	UObject::ProcessEvent(Func, &Parms);

}

}


