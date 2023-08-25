#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireAllocationHandler.FireAllocationHandler_C
// (None)

class UClass* UFireAllocationHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireAllocationHandler_C");

	return Clss;
}


// FireAllocationHandler_C FireAllocationHandler.Default__FireAllocationHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireAllocationHandler_C* UFireAllocationHandler_C::GetDefaultObj()
{
	static class UFireAllocationHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireAllocationHandler_C*>(UFireAllocationHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


