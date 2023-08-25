#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CosmeticStatObject_HabaneroProgression.B_CosmeticStatObject_HabaneroProgression_C
// (None)

class UClass* UB_CosmeticStatObject_HabaneroProgression_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CosmeticStatObject_HabaneroProgression_C");

	return Clss;
}


// B_CosmeticStatObject_HabaneroProgression_C B_CosmeticStatObject_HabaneroProgression.Default__B_CosmeticStatObject_HabaneroProgression_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_CosmeticStatObject_HabaneroProgression_C* UB_CosmeticStatObject_HabaneroProgression_C::GetDefaultObj()
{
	static class UB_CosmeticStatObject_HabaneroProgression_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_CosmeticStatObject_HabaneroProgression_C*>(UB_CosmeticStatObject_HabaneroProgression_C::StaticClass()->DefaultObject);

	return Default;
}

}


