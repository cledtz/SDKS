#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PG_GameInstance.BP_PG_GameInstance_C
// (None)

class UClass* UBP_PG_GameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PG_GameInstance_C");

	return Clss;
}


// BP_PG_GameInstance_C BP_PG_GameInstance.Default__BP_PG_GameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PG_GameInstance_C* UBP_PG_GameInstance_C::GetDefaultObj()
{
	static class UBP_PG_GameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PG_GameInstance_C*>(UBP_PG_GameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PG_GameInstance.BP_PG_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PG_GameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_GameInstance_C", "ReceiveInit");

	Params::UBP_PG_GameInstance_C_ReceiveInit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_GameInstance.BP_PG_GameInstance_C.ExecuteUbergraph_BP_PG_GameInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_GameInstance_C::ExecuteUbergraph_BP_PG_GameInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_GameInstance_C", "ExecuteUbergraph_BP_PG_GameInstance");

	Params::UBP_PG_GameInstance_C_ExecuteUbergraph_BP_PG_GameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


