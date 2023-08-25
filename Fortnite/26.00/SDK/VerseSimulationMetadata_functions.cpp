#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseSimulationMetadata.VerseSimulationAttribConfig
// (None)

class UClass* UVerseSimulationAttribConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseSimulationAttribConfig");

	return Clss;
}


// VerseSimulationAttribConfig VerseSimulationMetadata.Default__VerseSimulationAttribConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseSimulationAttribConfig* UVerseSimulationAttribConfig::GetDefaultObj()
{
	static class UVerseSimulationAttribConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseSimulationAttribConfig*>(UVerseSimulationAttribConfig::StaticClass()->DefaultObject);

	return Default;
}

}


