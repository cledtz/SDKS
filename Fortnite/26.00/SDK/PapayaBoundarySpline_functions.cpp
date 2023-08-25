#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PapayaBoundarySpline.PapayaBoundarySpline_C
// (Actor)

class UClass* UPapayaBoundarySpline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PapayaBoundarySpline_C");

	return Clss;
}


// PapayaBoundarySpline_C PapayaBoundarySpline.Default__PapayaBoundarySpline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPapayaBoundarySpline_C* UPapayaBoundarySpline_C::GetDefaultObj()
{
	static class UPapayaBoundarySpline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPapayaBoundarySpline_C*>(UPapayaBoundarySpline_C::StaticClass()->DefaultObject);

	return Default;
}

}


