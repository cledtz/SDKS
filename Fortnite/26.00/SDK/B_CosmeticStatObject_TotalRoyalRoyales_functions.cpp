#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CosmeticStatObject_TotalRoyalRoyales.B_CosmeticStatObject_TotalRoyalRoyales_C
// (None)

class UClass* UB_CosmeticStatObject_TotalRoyalRoyales_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CosmeticStatObject_TotalRoyalRoyales_C");

	return Clss;
}


// B_CosmeticStatObject_TotalRoyalRoyales_C B_CosmeticStatObject_TotalRoyalRoyales.Default__B_CosmeticStatObject_TotalRoyalRoyales_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_CosmeticStatObject_TotalRoyalRoyales_C* UB_CosmeticStatObject_TotalRoyalRoyales_C::GetDefaultObj()
{
	static class UB_CosmeticStatObject_TotalRoyalRoyales_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_CosmeticStatObject_TotalRoyalRoyales_C*>(UB_CosmeticStatObject_TotalRoyalRoyales_C::StaticClass()->DefaultObject);

	return Default;
}

}


