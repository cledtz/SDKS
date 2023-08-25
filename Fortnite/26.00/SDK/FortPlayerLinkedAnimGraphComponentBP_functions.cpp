#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortPlayerLinkedAnimGraphComponentBP.FortPlayerLinkedAnimGraphComponentBP_C
// (None)

class UClass* UFortPlayerLinkedAnimGraphComponentBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerLinkedAnimGraphComponentBP_C");

	return Clss;
}


// FortPlayerLinkedAnimGraphComponentBP_C FortPlayerLinkedAnimGraphComponentBP.Default__FortPlayerLinkedAnimGraphComponentBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortPlayerLinkedAnimGraphComponentBP_C* UFortPlayerLinkedAnimGraphComponentBP_C::GetDefaultObj()
{
	static class UFortPlayerLinkedAnimGraphComponentBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerLinkedAnimGraphComponentBP_C*>(UFortPlayerLinkedAnimGraphComponentBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


