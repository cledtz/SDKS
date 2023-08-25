#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PhaseCommits.PhaseCommitFlow_Coordinator
// (None)

class UClass* UPhaseCommitFlow_Coordinator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhaseCommitFlow_Coordinator");

	return Clss;
}


// PhaseCommitFlow_Coordinator PhaseCommits.Default__PhaseCommitFlow_Coordinator
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhaseCommitFlow_Coordinator* UPhaseCommitFlow_Coordinator::GetDefaultObj()
{
	static class UPhaseCommitFlow_Coordinator* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhaseCommitFlow_Coordinator*>(UPhaseCommitFlow_Coordinator::StaticClass()->DefaultObject);

	return Default;
}


// Class PhaseCommits.PhaseCommitFlow_Participant
// (None)

class UClass* UPhaseCommitFlow_Participant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhaseCommitFlow_Participant");

	return Clss;
}


// PhaseCommitFlow_Participant PhaseCommits.Default__PhaseCommitFlow_Participant
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhaseCommitFlow_Participant* UPhaseCommitFlow_Participant::GetDefaultObj()
{
	static class UPhaseCommitFlow_Participant* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhaseCommitFlow_Participant*>(UPhaseCommitFlow_Participant::StaticClass()->DefaultObject);

	return Default;
}

}


