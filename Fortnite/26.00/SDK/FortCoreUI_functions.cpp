#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortCoreUI.FortCTAButtonViewModel
// (None)

class UClass* UFortCTAButtonViewModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCTAButtonViewModel");

	return Clss;
}


// FortCTAButtonViewModel FortCoreUI.Default__FortCTAButtonViewModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCTAButtonViewModel* UFortCTAButtonViewModel::GetDefaultObj()
{
	static class UFortCTAButtonViewModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCTAButtonViewModel*>(UFortCTAButtonViewModel::StaticClass()->DefaultObject);

	return Default;
}

}


