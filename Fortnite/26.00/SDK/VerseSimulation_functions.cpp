#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseSimulation.VerseAgent
// (None)

class UClass* UVerseAgent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAgent");

	return Clss;
}


// VerseAgent VerseSimulation.Default__VerseAgent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseAgent* UVerseAgent::GetDefaultObj()
{
	static class UVerseAgent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAgent*>(UVerseAgent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseSimulation.VerseTeam
// (None)

class UClass* UVerseTeam::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseTeam");

	return Clss;
}


// VerseTeam VerseSimulation.Default__VerseTeam
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseTeam* UVerseTeam::GetDefaultObj()
{
	static class UVerseTeam* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseTeam*>(UVerseTeam::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseSimulation.VerseSimulationSubsystem
// (None)

class UClass* UVerseSimulationSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseSimulationSubsystem");

	return Clss;
}


// VerseSimulationSubsystem VerseSimulation.Default__VerseSimulationSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseSimulationSubsystem* UVerseSimulationSubsystem::GetDefaultObj()
{
	static class UVerseSimulationSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseSimulationSubsystem*>(UVerseSimulationSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


