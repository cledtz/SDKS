#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsLocked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaFloatSliderVariantPicker_C::OnUpdateValue(float NormalizedValue, bool bIsLocked)
{
	static auto Func = Class->GetFunction("AthenaFloatSliderVariantPicker_C", "OnUpdateValue");

	Params::UAthenaFloatSliderVariantPicker_C_OnUpdateValue_Params Parms;

	Parms.NormalizedValue = NormalizedValue;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NormalizedValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsLocked                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaFloatSliderVariantPicker_C::ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32 EntryPoint, float K2Node_Event_NormalizedValue, bool K2Node_Event_bIsLocked, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaFloatSliderVariantPicker_C", "ExecuteUbergraph_AthenaFloatSliderVariantPicker");

	Params::UAthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NormalizedValue = K2Node_Event_NormalizedValue;
	Parms.K2Node_Event_bIsLocked = K2Node_Event_bIsLocked;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
