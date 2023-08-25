#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameHubRuntime.GameHubBaseMutator
// (Actor)

class UClass* UGameHubBaseMutator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameHubBaseMutator");

	return Clss;
}


// GameHubBaseMutator GameHubRuntime.Default__GameHubBaseMutator
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameHubBaseMutator* UGameHubBaseMutator::GetDefaultObj()
{
	static class UGameHubBaseMutator* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameHubBaseMutator*>(UGameHubBaseMutator::StaticClass()->DefaultObject);

	return Default;
}


// Class GameHubRuntime.GameHubPlayerSpawningComponent
// (None)

class UClass* UGameHubPlayerSpawningComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameHubPlayerSpawningComponent");

	return Clss;
}


// GameHubPlayerSpawningComponent GameHubRuntime.Default__GameHubPlayerSpawningComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameHubPlayerSpawningComponent* UGameHubPlayerSpawningComponent::GetDefaultObj()
{
	static class UGameHubPlayerSpawningComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameHubPlayerSpawningComponent*>(UGameHubPlayerSpawningComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GameHubRuntime.GameHubPlayspace
// (Actor)

class UClass* UGameHubPlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameHubPlayspace");

	return Clss;
}


// GameHubPlayspace GameHubRuntime.Default__GameHubPlayspace
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameHubPlayspace* UGameHubPlayspace::GetDefaultObj()
{
	static class UGameHubPlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameHubPlayspace*>(UGameHubPlayspace::StaticClass()->DefaultObject);

	return Default;
}

}


