#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InterchangeExport.InterchangeTextureWriter
// (None)

class UClass* UInterchangeTextureWriter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterchangeTextureWriter");

	return Clss;
}


// InterchangeTextureWriter InterchangeExport.Default__InterchangeTextureWriter
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterchangeTextureWriter* UInterchangeTextureWriter::GetDefaultObj()
{
	static class UInterchangeTextureWriter* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterchangeTextureWriter*>(UInterchangeTextureWriter::StaticClass()->DefaultObject);

	return Default;
}

}


