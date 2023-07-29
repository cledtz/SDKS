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


// Function DefaultKeyLabel.DefaultKeyLabel_C.UpdateKeyLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDefaultKeyLabel_C::UpdateKeyLabel()
{
	static auto Func = Class->GetFunction("DefaultKeyLabel_C", "UpdateKeyLabel");

	Params::UDefaultKeyLabel_C_UpdateKeyLabel_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultKeyLabel.DefaultKeyLabel_C.ExecuteUbergraph_DefaultKeyLabel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               CallFunc_HasIcon_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetIconBrush_ReturnValue                                ()
// enum class ESlateVisibility        CallFunc_GetIconVisibility_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetDisplayNameVisibility_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultKeyLabel_C::ExecuteUbergraph_DefaultKeyLabel(int32 EntryPoint, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_HasIcon_ReturnValue, const struct FSlateBrush& CallFunc_GetIconBrush_ReturnValue, enum class ESlateVisibility CallFunc_GetIconVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetDisplayNameVisibility_ReturnValue)
{
	static auto Func = Class->GetFunction("DefaultKeyLabel_C", "ExecuteUbergraph_DefaultKeyLabel");

	Params::UDefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_HasIcon_ReturnValue = CallFunc_HasIcon_ReturnValue;
	Parms.CallFunc_GetIconBrush_ReturnValue = CallFunc_GetIconBrush_ReturnValue;
	Parms.CallFunc_GetIconVisibility_ReturnValue = CallFunc_GetIconVisibility_ReturnValue;
	Parms.CallFunc_GetDisplayNameVisibility_ReturnValue = CallFunc_GetDisplayNameVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
