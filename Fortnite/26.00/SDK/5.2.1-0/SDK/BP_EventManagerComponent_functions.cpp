#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EventManagerComponent.BP_EventManagerComponent_C
// (None)

class UClass* UBP_EventManagerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EventManagerComponent_C");

	return Clss;
}


// BP_EventManagerComponent_C BP_EventManagerComponent.Default__BP_EventManagerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EventManagerComponent_C* UBP_EventManagerComponent_C::GetDefaultObj()
{
	static class UBP_EventManagerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EventManagerComponent_C*>(UBP_EventManagerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EventManagerComponent.BP_EventManagerComponent_C.OnAmmoBoxAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_EventManagerComponent_C::OnAmmoBoxAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EventManagerComponent_C", "OnAmmoBoxAction");

	Params::UBP_EventManagerComponent_C_OnAmmoBoxAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EventManagerComponent.BP_EventManagerComponent_C.ExecuteUbergraph_BP_EventManagerComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventManagerComponent_C::ExecuteUbergraph_BP_EventManagerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EventManagerComponent_C", "ExecuteUbergraph_BP_EventManagerComponent");

	Params::UBP_EventManagerComponent_C_ExecuteUbergraph_BP_EventManagerComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


