#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C
// (None)

class UClass* UUI_MainMenu_Shop_Premium_SpecialOffers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MainMenu_Shop_Premium_SpecialOffers_C");

	return Clss;
}


// UI_MainMenu_Shop_Premium_SpecialOffers_C UI_MainMenu_Shop_Premium_SpecialOffers.Default__UI_MainMenu_Shop_Premium_SpecialOffers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MainMenu_Shop_Premium_SpecialOffers_C* UUI_MainMenu_Shop_Premium_SpecialOffers_C::GetDefaultObj()
{
	static class UUI_MainMenu_Shop_Premium_SpecialOffers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MainMenu_Shop_Premium_SpecialOffers_C*>(UUI_MainMenu_Shop_Premium_SpecialOffers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.RemoveOfferByClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      OfferClass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_OfferClass                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UBI_OfferInteract_C>K2Node_DynamicCast_AsBI_Offer_Interact                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Shop_Premium_SpecialOffers_C::RemoveOfferByClass(class UClass* OfferClass, class UClass* L_OfferClass, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class UBI_OfferInteract_C> K2Node_DynamicCast_AsBI_Offer_Interact, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Shop_Premium_SpecialOffers_C", "RemoveOfferByClass");

	Params::UUI_MainMenu_Shop_Premium_SpecialOffers_C_RemoveOfferByClass_Params Parms{};

	Parms.OfferClass = OfferClass;
	Parms.L_OfferClass = L_OfferClass;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBI_Offer_Interact = K2Node_DynamicCast_AsBI_Offer_Interact;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Shop_Premium_SpecialOffers_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Shop_Premium_SpecialOffers_C", "Construct");

	Params::UUI_MainMenu_Shop_Premium_SpecialOffers_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CustomString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_Shop_Premium_SpecialOffers_C::OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Shop_Premium_SpecialOffers_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UUI_MainMenu_Shop_Premium_SpecialOffers_C_OnUpdatePlayerCombinedInfo_Event_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomString = CustomString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_SpecialOffers.UI_MainMenu_Shop_Premium_SpecialOffers_C.ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTask_MainMenu_Shop_Premium_Offers_GenerateStarterPack_C*CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_CustomEvent_ModifiedData                                  (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CustomString                                  (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Menu*        K2Node_DynamicCast_AsPG_Player_State_Menu                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Shop_Premium_SpecialOffers_C::ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers(int32 EntryPoint, class UTask_MainMenu_Shop_Premium_Offers_GenerateStarterPack_C* CallFunc_CreateAction_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, int32 CallFunc_Array_Length_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_Shop_Premium_SpecialOffers_C", "ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers");

	Params::UUI_MainMenu_Shop_Premium_SpecialOffers_C_ExecuteUbergraph_UI_MainMenu_Shop_Premium_SpecialOffers_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_ModifiedData = K2Node_CustomEvent_ModifiedData;
	Parms.K2Node_CustomEvent_CustomString = K2Node_CustomEvent_CustomString;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Menu = K2Node_DynamicCast_AsPG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


