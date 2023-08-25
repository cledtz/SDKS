#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RandomPrefabSpawningRuntime.FortPrefabSpawner
// (Actor)

class UClass* UFortPrefabSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPrefabSpawner");

	return Clss;
}


// FortPrefabSpawner RandomPrefabSpawningRuntime.Default__FortPrefabSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPrefabSpawner* UFortPrefabSpawner::GetDefaultObj()
{
	static class UFortPrefabSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPrefabSpawner*>(UFortPrefabSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Class RandomPrefabSpawningRuntime.FortRandomPrefabSpawnHelper
// (None)

class UClass* UFortRandomPrefabSpawnHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRandomPrefabSpawnHelper");

	return Clss;
}


// FortRandomPrefabSpawnHelper RandomPrefabSpawningRuntime.Default__FortRandomPrefabSpawnHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRandomPrefabSpawnHelper* UFortRandomPrefabSpawnHelper::GetDefaultObj()
{
	static class UFortRandomPrefabSpawnHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRandomPrefabSpawnHelper*>(UFortRandomPrefabSpawnHelper::StaticClass()->DefaultObject);

	return Default;
}

}


