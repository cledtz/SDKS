#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortTimeDilationComponent.FortTimeDilationComponent_C
// (None)

class UClass* UFortTimeDilationComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTimeDilationComponent_C");

	return Clss;
}


// FortTimeDilationComponent_C FortTimeDilationComponent.Default__FortTimeDilationComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortTimeDilationComponent_C* UFortTimeDilationComponent_C::GetDefaultObj()
{
	static class UFortTimeDilationComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTimeDilationComponent_C*>(UFortTimeDilationComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


