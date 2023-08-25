#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoreCardReveal_Parent.StoreCardReveal_Parent_C
// (Actor)

class UClass* UStoreCardReveal_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreCardReveal_Parent_C");

	return Clss;
}


// StoreCardReveal_Parent_C StoreCardReveal_Parent.Default__StoreCardReveal_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoreCardReveal_Parent_C* UStoreCardReveal_Parent_C::GetDefaultObj()
{
	static class UStoreCardReveal_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreCardReveal_Parent_C*>(UStoreCardReveal_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreCardReveal_Parent_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "InitiatePinata");

	Params::UStoreCardReveal_Parent_C_InitiatePinata_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreCardReveal_Parent_C::ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "ExecuteUbergraph_StoreCardReveal_Parent");

	Params::UStoreCardReveal_Parent_C_ExecuteUbergraph_StoreCardReveal_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


