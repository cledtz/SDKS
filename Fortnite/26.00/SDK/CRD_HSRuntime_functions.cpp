#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRD_HSRuntime.FortAthenaMutator_HenchmanSpawner
// (Actor)

class UClass* UFortAthenaMutator_HenchmanSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_HenchmanSpawner");

	return Clss;
}


// FortAthenaMutator_HenchmanSpawner CRD_HSRuntime.Default__FortAthenaMutator_HenchmanSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_HenchmanSpawner* UFortAthenaMutator_HenchmanSpawner::GetDefaultObj()
{
	static class UFortAthenaMutator_HenchmanSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_HenchmanSpawner*>(UFortAthenaMutator_HenchmanSpawner::StaticClass()->DefaultObject);

	return Default;
}

}


