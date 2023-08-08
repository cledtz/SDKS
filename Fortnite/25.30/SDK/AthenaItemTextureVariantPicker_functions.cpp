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


// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaItemTextureVariantPicker_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "Construct");

	Params::UAthenaItemTextureVariantPicker_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.OnToggleAllItemsArchivedMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bDisplay                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemTextureVariantPicker_C::OnToggleAllItemsArchivedMessage(bool bDisplay)
{
	static auto Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "OnToggleAllItemsArchivedMessage");

	Params::UAthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage_Params Parms;

	Parms.bDisplay = bDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C.ExecuteUbergraph_AthenaItemTextureVariantPicker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bDisplay                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaItemTextureVariantPicker_C::ExecuteUbergraph_AthenaItemTextureVariantPicker(int32 EntryPoint, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable, float Temp_real_Variable_2, float Temp_real_Variable_3, bool K2Node_Event_bDisplay, int32 CallFunc_SelectInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsMobileGame_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("AthenaItemTextureVariantPicker_C", "ExecuteUbergraph_AthenaItemTextureVariantPicker");

	Params::UAthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.K2Node_Event_bDisplay = K2Node_Event_bDisplay;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
