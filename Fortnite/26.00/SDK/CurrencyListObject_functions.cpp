#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurrencyListObject.CurrencyListObject_C
// (None)

class UClass* UCurrencyListObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurrencyListObject_C");

	return Clss;
}


// CurrencyListObject_C CurrencyListObject.Default__CurrencyListObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurrencyListObject_C* UCurrencyListObject_C::GetDefaultObj()
{
	static class UCurrencyListObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurrencyListObject_C*>(UCurrencyListObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


