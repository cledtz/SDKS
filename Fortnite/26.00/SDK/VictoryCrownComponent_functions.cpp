#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VictoryCrownComponent.VictoryCrownComponent_C
// (None)

class UClass* UVictoryCrownComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VictoryCrownComponent_C");

	return Clss;
}


// VictoryCrownComponent_C VictoryCrownComponent.Default__VictoryCrownComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVictoryCrownComponent_C* UVictoryCrownComponent_C::GetDefaultObj()
{
	static class UVictoryCrownComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVictoryCrownComponent_C*>(UVictoryCrownComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VictoryCrownComponent.VictoryCrownComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UVictoryCrownComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownComponent_C", "ReceiveBeginPlay");

	Params::UVictoryCrownComponent_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownComponent.VictoryCrownComponent_C.ExecuteUbergraph_VictoryCrownComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVictoryCrownComponent_C::ExecuteUbergraph_VictoryCrownComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VictoryCrownComponent_C", "ExecuteUbergraph_VictoryCrownComponent");

	Params::UVictoryCrownComponent_C_ExecuteUbergraph_VictoryCrownComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


