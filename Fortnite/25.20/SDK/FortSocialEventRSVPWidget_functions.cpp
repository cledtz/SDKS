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


// Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortSocialEventRSVPWidget_C::Construct()
{
	static auto Func = Class->GetFunction("FortSocialEventRSVPWidget_C", "Construct");

	Params::UFortSocialEventRSVPWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.OnRefreshDisplay
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        EventName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Date                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        AdditionalEvents                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFortSocialEventRSVPWidget_C::OnRefreshDisplay(class FText& EventName, class FText& Date, class FText& AdditionalEvents)
{
	static auto Func = Class->GetFunction("FortSocialEventRSVPWidget_C", "OnRefreshDisplay");

	Params::UFortSocialEventRSVPWidget_C_OnRefreshDisplay_Params Parms;

	Parms.EventName = EventName;
	Parms.Date = Date;
	Parms.AdditionalEvents = AdditionalEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.ExecuteUbergraph_FortSocialEventRSVPWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_EventName                                           (ConstParm)
// class FText                        K2Node_Event_Date                                                (ConstParm)
// class FText                        K2Node_Event_AdditionalEvents                                    (ConstParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortSocialEventRSVPWidget_C::ExecuteUbergraph_FortSocialEventRSVPWidget(int32 EntryPoint, class FText K2Node_Event_EventName, class FText K2Node_Event_Date, class FText K2Node_Event_AdditionalEvents, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1)
{
	static auto Func = Class->GetFunction("FortSocialEventRSVPWidget_C", "ExecuteUbergraph_FortSocialEventRSVPWidget");

	Params::UFortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventName = K2Node_Event_EventName;
	Parms.K2Node_Event_Date = K2Node_Event_Date;
	Parms.K2Node_Event_AdditionalEvents = K2Node_Event_AdditionalEvents;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
