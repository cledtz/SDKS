#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VkRuntime.ValkyrieExternalContentLoader
// (None)

class UClass* UValkyrieExternalContentLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValkyrieExternalContentLoader");

	return Clss;
}


// ValkyrieExternalContentLoader VkRuntime.Default__ValkyrieExternalContentLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class UValkyrieExternalContentLoader* UValkyrieExternalContentLoader::GetDefaultObj()
{
	static class UValkyrieExternalContentLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<UValkyrieExternalContentLoader*>(UValkyrieExternalContentLoader::StaticClass()->DefaultObject);

	return Default;
}

}


