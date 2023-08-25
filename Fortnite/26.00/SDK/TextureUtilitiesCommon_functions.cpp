#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TextureUtilitiesCommon.TextureImportSettings
// (None)

class UClass* UTextureImportSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextureImportSettings");

	return Clss;
}


// TextureImportSettings TextureUtilitiesCommon.Default__TextureImportSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextureImportSettings* UTextureImportSettings::GetDefaultObj()
{
	static class UTextureImportSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextureImportSettings*>(UTextureImportSettings::StaticClass()->DefaultObject);

	return Default;
}

}


