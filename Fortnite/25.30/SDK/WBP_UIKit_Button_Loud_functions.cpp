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


// Function WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Loud_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Button_Loud_C", "PreConstruct");

	Params::UWBP_UIKit_Button_Loud_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C.ExecuteUbergraph_WBP_UIKit_Button_Loud
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Loud_C::ExecuteUbergraph_WBP_UIKit_Button_Loud(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Button_Loud_C", "ExecuteUbergraph_WBP_UIKit_Button_Loud");

	Params::UWBP_UIKit_Button_Loud_C_ExecuteUbergraph_WBP_UIKit_Button_Loud_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
