#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Delete.Delete_C
// (None)

class UClass* UDelete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Delete_C");

	return Clss;
}


// Delete_C Delete.Default__Delete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDelete_C* UDelete_C::GetDefaultObj()
{
	static class UDelete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDelete_C*>(UDelete_C::StaticClass()->DefaultObject);

	return Default;
}

}


