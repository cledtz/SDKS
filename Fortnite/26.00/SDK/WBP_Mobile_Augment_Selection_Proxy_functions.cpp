#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C
// (None)

class UClass* UWBP_Mobile_Augment_Selection_Proxy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Mobile_Augment_Selection_Proxy_C");

	return Clss;
}


// WBP_Mobile_Augment_Selection_Proxy_C WBP_Mobile_Augment_Selection_Proxy.Default__WBP_Mobile_Augment_Selection_Proxy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Mobile_Augment_Selection_Proxy_C* UWBP_Mobile_Augment_Selection_Proxy_C::GetDefaultObj()
{
	static class UWBP_Mobile_Augment_Selection_Proxy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Mobile_Augment_Selection_Proxy_C*>(UWBP_Mobile_Augment_Selection_Proxy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Mobile_Augment_Selection_Proxy.WBP_Mobile_Augment_Selection_Proxy_C.ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mobile_Augment_Selection_Proxy_C::ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Mobile_Augment_Selection_Proxy_C", "ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy");

	Params::UWBP_Mobile_Augment_Selection_Proxy_C_ExecuteUbergraph_WBP_Mobile_Augment_Selection_Proxy_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


