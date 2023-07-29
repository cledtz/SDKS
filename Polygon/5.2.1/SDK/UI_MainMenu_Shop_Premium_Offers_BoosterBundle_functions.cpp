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


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.RemoveOfferFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::RemoveOfferFunc(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "RemoveOfferFunc");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_RemoveOfferFunc_Params Parms;

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.CreateOfferOnHomeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_AddOffer_CreatedOfferWidget                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_HomeScreen_Menu_Offers_BoosterBundle_C*K2Node_DynamicCast_AsUI_Home_Screen_Menu_Offers_Booster_Bundle   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::CreateOfferOnHomeMenu(class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_AddOffer_CreatedOfferWidget, class UUI_HomeScreen_Menu_Offers_BoosterBundle_C* K2Node_DynamicCast_AsUI_Home_Screen_Menu_Offers_Booster_Bundle, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "CreateOfferOnHomeMenu");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_CreateOfferOnHomeMenu_Params Parms;

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddOffer_CreatedOfferWidget = CallFunc_AddOffer_CreatedOfferWidget;
	Parms.K2Node_DynamicCast_AsUI_Home_Screen_Menu_Offers_Booster_Bundle = K2Node_DynamicCast_AsUI_Home_Screen_Menu_Offers_Booster_Bundle;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_BndEvt__UI_MainMenu_Shop_Premium_Offers_StarterPack_Button_Buy_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::Construct()
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "Construct");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.TickTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::TickTimer()
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "TickTimer");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_TickTimer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.RemoveOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::RemoveOffer()
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "RemoveOffer");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_RemoveOffer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu_Shop_Premium_Offers_BoosterBundle.UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C.ExecuteUbergraph_UI_MainMenu_Shop_Premium_Offers_BoosterBundle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_BuyPage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        K2Node_LowEntry_LocalVariable_Value__Object                      ()

void UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C::ExecuteUbergraph_UI_MainMenu_Shop_Premium_Offers_BoosterBundle(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_BuyPage_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue_3, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_LowEntry_LocalVariable_Value__Object)
{
	static auto Func = Class->GetFunction("UI_MainMenu_Shop_Premium_Offers_BoosterBundle_C", "ExecuteUbergraph_UI_MainMenu_Shop_Premium_Offers_BoosterBundle");

	Params::UUI_MainMenu_Shop_Premium_Offers_BoosterBundle_C_ExecuteUbergraph_UI_MainMenu_Shop_Premium_Offers_BoosterBundle_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
