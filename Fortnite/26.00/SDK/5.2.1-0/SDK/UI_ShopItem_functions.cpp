#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ShopItem.UI_ShopItem_C
// (None)

class UClass* UUI_ShopItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ShopItem_C");

	return Clss;
}


// UI_ShopItem_C UI_ShopItem.Default__UI_ShopItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ShopItem_C* UUI_ShopItem_C::GetDefaultObj()
{
	static class UUI_ShopItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ShopItem_C*>(UUI_ShopItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ShopItem.UI_ShopItem_C.SetEnableLoupe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::SetEnableLoupe(bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "SetEnableLoupe");

	Params::UUI_ShopItem_C_SetEnableLoupe_Params Parms{};

	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.Set Is Purchased
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPurchased                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::Set_Is_Purchased(bool IsPurchased, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "Set Is Purchased");

	Params::UUI_ShopItem_C_Set_Is_Purchased_Params Parms{};

	Parms.IsPurchased = IsPurchased;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.GetCatalogVersionByItemType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Catalog                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Module_Skin                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::GetCatalogVersionByItemType(class FString* Catalog, class UClass* K2Node_ClassDynamicCast_AsItem_Module_Skin, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "GetCatalogVersionByItemType");

	Params::UUI_ShopItem_C_GetCatalogVersionByItemType_Params Parms{};

	Parms.K2Node_ClassDynamicCast_AsItem_Module_Skin = K2Node_ClassDynamicCast_AsItem_Module_Skin;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Catalog != nullptr)
		*Catalog = Parms.Catalog;

}


// Function UI_ShopItem.UI_ShopItem_C.SetItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    CallFunc_FindDataContainerValue_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_DataObject*K2Node_DynamicCast_AsData_Object                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    CallFunc_FindDataContainerValue_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_DataObject*K2Node_DynamicCast_AsData_Object_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class UDataContainerValue_Base*    CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    K2Node_LowEntry_LocalVariable_Value__1_Object                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Int32*   K2Node_DynamicCast_AsInt32                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Int32*   K2Node_DynamicCast_AsInt32_1                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::SetItemInfo(class FName Temp_name_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue, class UDataContainerValue_DataObject* K2Node_DynamicCast_AsData_Object, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable_1, bool CallFunc_Map_Contains_ReturnValue, class FName Temp_name_Variable_2, bool CallFunc_IsValid_ReturnValue_1, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue_1, class UDataContainerValue_DataObject* K2Node_DynamicCast_AsData_Object_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, class UDataContainerValue_Base* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UDataContainerValue_Base* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__Object, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__1_Object, class UDataContainerValue_Int32* K2Node_DynamicCast_AsInt32, bool K2Node_DynamicCast_bSuccess_2, class UDataContainerValue_Int32* K2Node_DynamicCast_AsInt32_1, bool K2Node_DynamicCast_bSuccess_3, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "SetItemInfo");

	Params::UUI_ShopItem_C_SetItemInfo_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindDataContainerValue_ReturnValue = CallFunc_FindDataContainerValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsData_Object = K2Node_DynamicCast_AsData_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FindDataContainerValue_ReturnValue_1 = CallFunc_FindDataContainerValue_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsData_Object_1 = K2Node_DynamicCast_AsData_Object_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.K2Node_LowEntry_LocalVariable_Value__1_Object = K2Node_LowEntry_LocalVariable_Value__1_Object;
	Parms.K2Node_DynamicCast_AsInt32 = K2Node_DynamicCast_AsInt32;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInt32_1 = K2Node_DynamicCast_AsInt32_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.OnPlayFabResponse_09710F9A4237AB46170B1D960A630947
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel           Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Successful                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::OnPlayFabResponse_09710F9A4237AB46170B1D960A630947(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "OnPlayFabResponse_09710F9A4237AB46170B1D960A630947");

	Params::UUI_ShopItem_C_OnPlayFabResponse_09710F9A4237AB46170B1D960A630947_Params Parms{};

	Parms.Response = Response;
	Parms.CustomData = CustomData;
	Parms.Successful = Successful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.OnLoaded_2C5F359C4097A5010239688BB380D317
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::OnLoaded_2C5F359C4097A5010239688BB380D317(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "OnLoaded_2C5F359C4097A5010239688BB380D317");

	Params::UUI_ShopItem_C_OnLoaded_2C5F359C4097A5010239688BB380D317_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "PreConstruct");

	Params::UUI_ShopItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ShopItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "OnMouseEnter");

	Params::UUI_ShopItem_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ShopItem_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "OnMouseLeave");

	Params::UUI_ShopItem_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.PurchaseItemSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientExecuteCloudScriptResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::PurchaseItemSuccess(const struct FClientExecuteCloudScriptResult& Result, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "PurchaseItemSuccess");

	Params::UUI_ShopItem_C_PurchaseItemSuccess_Params Parms{};

	Parms.Result = Result;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.PurchaseItemFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::PurchaseItemFailure(const struct FPlayFabError& Error, class UObject* CustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "PurchaseItemFailure");

	Params::UUI_ShopItem_C_PurchaseItemFailure_Params Parms{};

	Parms.Error = Error;
	Parms.CustomData = CustomData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShopItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_ShopItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CustomString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_ShopItem_C::OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UUI_ShopItem_C_OnUpdatePlayerCombinedInfo_Event_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomString = CustomString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.OnClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShopItem_C::OnClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "OnClicked_Event");

	Params::UUI_ShopItem_C_OnClicked_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ShopItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "Construct");

	Params::UUI_ShopItem_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.BndEvt__UI_ShopItem_Button_Loupe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShopItem_C::BndEvt__UI_ShopItem_Button_Loupe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "BndEvt__UI_ShopItem_Button_Loupe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_ShopItem_C_BndEvt__UI_ShopItem_Button_Loupe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.BndEvt__UI_ShopItem_Button_Loupe_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ShopItem_C::BndEvt__UI_ShopItem_Button_Loupe_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "BndEvt__UI_ShopItem_Button_Loupe_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_ShopItem_C_BndEvt__UI_ShopItem_Button_Loupe_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.AsyncLoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   ItemIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_ShopItem_C::AsyncLoadIcon(TSoftObjectPtr<class UTexture2D> ItemIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "AsyncLoadIcon");

	Params::UUI_ShopItem_C_AsyncLoadIcon_Params Parms{};

	Parms.ItemIcon = ItemIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.ExecuteUbergraph_UI_ShopItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByID_Color                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByID_Found                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Subtract_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// struct FLinearColor                CallFunc_GetColorByID_Color_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByID_Found_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByID_Color_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByID_Found_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByID_Color_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByID_Found_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByID_Color_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByID_Found_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Subtract_LinearColorLinearColor_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Subtract_LinearColorLinearColor_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByID_Color_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByID_Found_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Subtract_LinearColorLinearColor_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByID_Color_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByID_Found_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FString                      CallFunc_GetCatalogVersionByItemType_Catalog                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientExecuteCloudScriptResultK2Node_CustomEvent_result                                        (None)
// class UObject*                     K2Node_CustomEvent_customData_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FClientExecuteCloudScriptRequestK2Node_MakeStruct_ClientExecuteCloudScriptRequest                (None)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UPlayFabJsonObject*>  CallFunc_GetObjectArrayField_ReturnValue                         (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// TArray<class UPlayFabJsonObject*>  K2Node_LowEntry_LocalVariable_Value__1_Object                    (ReferenceParm)
// bool                               CallFunc_GetBoolField_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabError               K2Node_CustomEvent_error                                         (None)
// class UObject*                     K2Node_CustomEvent_customData                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByID_Color_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByID_Found_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Menu*        K2Node_DynamicCast_AsPG_Player_State_Menu                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabClientAPI*           CallFunc_ExecuteCloudScript_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayFabJsonObject*>  CallFunc_GetObjectArrayField_ReturnValue_1                       (ReferenceParm)
// struct FPlayFabBaseModel           Temp_struct_Variable_2                                           (None)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Shop_WarningNoPC_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_CustomEvent_ModifiedData                                  (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CustomString                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Menu_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Menu                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Shop_ConfirmPurchase_C*  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_LowEntry_LocalVariable_Value__2_Object                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Shop_ConfirmPurchase_C*  K2Node_LowEntry_LocalVariable_Value__3_Object                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayFabBaseModel           K2Node_CustomEvent_response                                      (None)
// class UObject*                     K2Node_CustomEvent_customData_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_successful                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_ItemIcon                                      (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Menu_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Menu_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_3                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNumberField_Number_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::ExecuteUbergraph_UI_ShopItem(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_2, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_GetColorByID_Color, bool CallFunc_GetColorByID_Found, const struct FLinearColor& CallFunc_Subtract_LinearColorLinearColor_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FLinearColor& CallFunc_GetColorByID_Color_1, bool CallFunc_GetColorByID_Found_1, const struct FLinearColor& CallFunc_GetColorByID_Color_2, bool CallFunc_GetColorByID_Found_2, const struct FLinearColor& CallFunc_GetColorByID_Color_3, bool CallFunc_GetColorByID_Found_3, const struct FLinearColor& CallFunc_GetColorByID_Color_4, bool CallFunc_GetColorByID_Found_4, const struct FLinearColor& CallFunc_Subtract_LinearColorLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Subtract_LinearColorLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_GetColorByID_Color_5, bool CallFunc_GetColorByID_Found_5, const struct FLinearColor& CallFunc_Subtract_LinearColorLinearColor_ReturnValue_3, const struct FLinearColor& CallFunc_GetColorByID_Color_6, bool CallFunc_GetColorByID_Found_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_GetCatalogVersionByItemType_Catalog, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, const struct FClientExecuteCloudScriptResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FClientExecuteCloudScriptRequest& K2Node_MakeStruct_ClientExecuteCloudScriptRequest, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<class UPlayFabJsonObject*>& K2Node_LowEntry_LocalVariable_Value__1_Object, bool CallFunc_GetBoolField_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FLinearColor& CallFunc_GetColorByID_Color_7, bool CallFunc_GetColorByID_Found_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable_3, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, class UPlayFabClientAPI* CallFunc_ExecuteCloudScript_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue_1, const struct FPlayFabBaseModel& Temp_struct_Variable_2, class UObject* Temp_object_Variable_1, const class FString& K2Node_Select_Default, float CallFunc_GetNumberField_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UUI_Shop_WarningNoPC_C* CallFunc_Create_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess_2, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, const class FString& K2Node_Select_Default_1, const class FString& K2Node_Select_Default_2, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, float CallFunc_GetNumberField_ReturnValue_1, int32 CallFunc_Round_ReturnValue, class UUI_Shop_ConfirmPurchase_C* CallFunc_Create_ReturnValue_1, int32 K2Node_LowEntry_LocalVariable_Value__2_Object, class UUI_Shop_ConfirmPurchase_C* K2Node_LowEntry_LocalVariable_Value__3_Object, bool Temp_bool_Variable_4, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_ItemIcon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu_1, bool K2Node_DynamicCast_bSuccess_4, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue_2, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_3, float CallFunc_GetNumberField_ReturnValue_2, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast, float CallFunc_SetNumberField_Number_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "ExecuteUbergraph_UI_ShopItem");

	Params::UUI_ShopItem_C_ExecuteUbergraph_UI_ShopItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetColorByID_Color = CallFunc_GetColorByID_Color;
	Parms.CallFunc_GetColorByID_Found = CallFunc_GetColorByID_Found;
	Parms.CallFunc_Subtract_LinearColorLinearColor_ReturnValue = CallFunc_Subtract_LinearColorLinearColor_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_GetColorByID_Color_1 = CallFunc_GetColorByID_Color_1;
	Parms.CallFunc_GetColorByID_Found_1 = CallFunc_GetColorByID_Found_1;
	Parms.CallFunc_GetColorByID_Color_2 = CallFunc_GetColorByID_Color_2;
	Parms.CallFunc_GetColorByID_Found_2 = CallFunc_GetColorByID_Found_2;
	Parms.CallFunc_GetColorByID_Color_3 = CallFunc_GetColorByID_Color_3;
	Parms.CallFunc_GetColorByID_Found_3 = CallFunc_GetColorByID_Found_3;
	Parms.CallFunc_GetColorByID_Color_4 = CallFunc_GetColorByID_Color_4;
	Parms.CallFunc_GetColorByID_Found_4 = CallFunc_GetColorByID_Found_4;
	Parms.CallFunc_Subtract_LinearColorLinearColor_ReturnValue_1 = CallFunc_Subtract_LinearColorLinearColor_ReturnValue_1;
	Parms.CallFunc_Subtract_LinearColorLinearColor_ReturnValue_2 = CallFunc_Subtract_LinearColorLinearColor_ReturnValue_2;
	Parms.CallFunc_GetColorByID_Color_5 = CallFunc_GetColorByID_Color_5;
	Parms.CallFunc_GetColorByID_Found_5 = CallFunc_GetColorByID_Found_5;
	Parms.CallFunc_Subtract_LinearColorLinearColor_ReturnValue_3 = CallFunc_Subtract_LinearColorLinearColor_ReturnValue_3;
	Parms.CallFunc_GetColorByID_Color_6 = CallFunc_GetColorByID_Color_6;
	Parms.CallFunc_GetColorByID_Found_6 = CallFunc_GetColorByID_Found_6;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetCatalogVersionByItemType_Catalog = CallFunc_GetCatalogVersionByItemType_Catalog;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.K2Node_CustomEvent_result = K2Node_CustomEvent_result;
	Parms.K2Node_CustomEvent_customData_1 = K2Node_CustomEvent_customData_1;
	Parms.K2Node_MakeStruct_ClientExecuteCloudScriptRequest = K2Node_MakeStruct_ClientExecuteCloudScriptRequest;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_GetObjectArrayField_ReturnValue = CallFunc_GetObjectArrayField_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__1_Object = K2Node_LowEntry_LocalVariable_Value__1_Object;
	Parms.CallFunc_GetBoolField_ReturnValue = CallFunc_GetBoolField_ReturnValue;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.K2Node_CustomEvent_customData = K2Node_CustomEvent_customData;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetColorByID_Color_7 = CallFunc_GetColorByID_Color_7;
	Parms.CallFunc_GetColorByID_Found_7 = CallFunc_GetColorByID_Found_7;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Menu = K2Node_DynamicCast_AsPG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_ExecuteCloudScript_ReturnValue = CallFunc_ExecuteCloudScript_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectArrayField_ReturnValue_1 = CallFunc_GetObjectArrayField_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNumberField_ReturnValue = CallFunc_GetNumberField_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_ModifiedData = K2Node_CustomEvent_ModifiedData;
	Parms.K2Node_CustomEvent_CustomString = K2Node_CustomEvent_CustomString;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Menu = K2Node_DynamicCast_AsBP_PG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue_1 = CallFunc_GetPlayerCombinedInfo_ReturnValue_1;
	Parms.CallFunc_GetObjectField_ReturnValue_2 = CallFunc_GetObjectField_ReturnValue_2;
	Parms.CallFunc_GetNumberField_ReturnValue_1 = CallFunc_GetNumberField_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_LowEntry_LocalVariable_Value__2_Object = K2Node_LowEntry_LocalVariable_Value__2_Object;
	Parms.K2Node_LowEntry_LocalVariable_Value__3_Object = K2Node_LowEntry_LocalVariable_Value__3_Object;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_CustomEvent_response = K2Node_CustomEvent_response;
	Parms.K2Node_CustomEvent_customData_2 = K2Node_CustomEvent_customData_2;
	Parms.K2Node_CustomEvent_successful = K2Node_CustomEvent_successful;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_ItemIcon = K2Node_CustomEvent_ItemIcon;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Menu_1 = K2Node_DynamicCast_AsBP_PG_Player_State_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue_2 = CallFunc_GetPlayerCombinedInfo_ReturnValue_2;
	Parms.CallFunc_GetObjectField_ReturnValue_3 = CallFunc_GetObjectField_ReturnValue_3;
	Parms.CallFunc_GetNumberField_ReturnValue_2 = CallFunc_GetNumberField_ReturnValue_2;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_SetNumberField_Number_ImplicitCast = CallFunc_SetNumberField_Number_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShopItem.UI_ShopItem_C.IsHoveredDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShopItem_C*              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShopItem_C::IsHoveredDelegate__DelegateSignature(class UUI_ShopItem_C* Item, bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShopItem_C", "IsHoveredDelegate__DelegateSignature");

	Params::UUI_ShopItem_C_IsHoveredDelegate__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}

}


