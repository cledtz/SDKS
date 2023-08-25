#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CosmeticStatObject_HasCrown.B_CosmeticStatObject_HasCrown_C
// (None)

class UClass* UB_CosmeticStatObject_HasCrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CosmeticStatObject_HasCrown_C");

	return Clss;
}


// B_CosmeticStatObject_HasCrown_C B_CosmeticStatObject_HasCrown.Default__B_CosmeticStatObject_HasCrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_CosmeticStatObject_HasCrown_C* UB_CosmeticStatObject_HasCrown_C::GetDefaultObj()
{
	static class UB_CosmeticStatObject_HasCrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_CosmeticStatObject_HasCrown_C*>(UB_CosmeticStatObject_HasCrown_C::StaticClass()->DefaultObject);

	return Default;
}

}


