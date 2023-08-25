#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseCreature.CreaturePerceptionComponentBase
// (None)

class UClass* UCreaturePerceptionComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreaturePerceptionComponentBase");

	return Clss;
}


// CreaturePerceptionComponentBase VerseCreature.Default__CreaturePerceptionComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreaturePerceptionComponentBase* UCreaturePerceptionComponentBase::GetDefaultObj()
{
	static class UCreaturePerceptionComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreaturePerceptionComponentBase*>(UCreaturePerceptionComponentBase::StaticClass()->DefaultObject);

	return Default;
}

}


