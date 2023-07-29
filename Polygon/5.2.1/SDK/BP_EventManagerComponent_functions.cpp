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


// Function BP_EventManagerComponent.BP_EventManagerComponent_C.OnAmmoBoxAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_EventManagerComponent_C::OnAmmoBoxAction()
{
	static auto Func = Class->GetFunction("BP_EventManagerComponent_C", "OnAmmoBoxAction");

	Params::UBP_EventManagerComponent_C_OnAmmoBoxAction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EventManagerComponent.BP_EventManagerComponent_C.ExecuteUbergraph_BP_EventManagerComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventManagerComponent_C::ExecuteUbergraph_BP_EventManagerComponent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_EventManagerComponent_C", "ExecuteUbergraph_BP_EventManagerComponent");

	Params::UBP_EventManagerComponent_C_ExecuteUbergraph_BP_EventManagerComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
