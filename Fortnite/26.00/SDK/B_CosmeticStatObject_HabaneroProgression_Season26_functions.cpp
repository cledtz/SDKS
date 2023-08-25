#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CosmeticStatObject_HabaneroProgression_Season26.B_CosmeticStatObject_HabaneroProgression_Season26_C
// (None)

class UClass* UB_CosmeticStatObject_HabaneroProgression_Season26_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CosmeticStatObject_HabaneroProgression_Season26_C");

	return Clss;
}


// B_CosmeticStatObject_HabaneroProgression_Season26_C B_CosmeticStatObject_HabaneroProgression_Season26.Default__B_CosmeticStatObject_HabaneroProgression_Season26_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_CosmeticStatObject_HabaneroProgression_Season26_C* UB_CosmeticStatObject_HabaneroProgression_Season26_C::GetDefaultObj()
{
	static class UB_CosmeticStatObject_HabaneroProgression_Season26_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_CosmeticStatObject_HabaneroProgression_Season26_C*>(UB_CosmeticStatObject_HabaneroProgression_Season26_C::StaticClass()->DefaultObject);

	return Default;
}

}


