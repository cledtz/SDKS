#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DecoTool.DecoTool_C
// (Actor)

class UClass* UDecoTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecoTool_C");

	return Clss;
}


// DecoTool_C DecoTool.Default__DecoTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecoTool_C* UDecoTool_C::GetDefaultObj()
{
	static class UDecoTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecoTool_C*>(UDecoTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


