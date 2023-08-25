#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EmporiumRuntime.EmporiumAssetsPaths
// (None)

class UClass* UEmporiumAssetsPaths::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmporiumAssetsPaths");

	return Clss;
}


// EmporiumAssetsPaths EmporiumRuntime.Default__EmporiumAssetsPaths
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmporiumAssetsPaths* UEmporiumAssetsPaths::GetDefaultObj()
{
	static class UEmporiumAssetsPaths* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmporiumAssetsPaths*>(UEmporiumAssetsPaths::StaticClass()->DefaultObject);

	return Default;
}

}


