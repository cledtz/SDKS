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


// Function WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C.ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mobile_Augment_Selection_Proxy_C::ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("WBP_Mobile_Augment_Selection_Proxy_C", "ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy");

	Params::UWBP_Mobile_Augment_Selection_Proxy_C_ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
