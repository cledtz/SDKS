#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VkPersistence.VkPersistence
// (None)

class UClass* UVkPersistence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VkPersistence");

	return Clss;
}


// VkPersistence VkPersistence.Default__VkPersistence
// (Public, ClassDefaultObject, ArchetypeObject)

class UVkPersistence* UVkPersistence::GetDefaultObj()
{
	static class UVkPersistence* Default = nullptr;

	if (!Default)
		Default = static_cast<UVkPersistence*>(UVkPersistence::StaticClass()->DefaultObject);

	return Default;
}


// Class VkPersistence.VkPersistenceManager
// (None)

class UClass* UVkPersistenceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VkPersistenceManager");

	return Clss;
}


// VkPersistenceManager VkPersistence.Default__VkPersistenceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UVkPersistenceManager* UVkPersistenceManager::GetDefaultObj()
{
	static class UVkPersistenceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UVkPersistenceManager*>(UVkPersistenceManager::StaticClass()->DefaultObject);

	return Default;
}

}


