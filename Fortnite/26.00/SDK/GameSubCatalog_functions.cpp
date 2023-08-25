#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameSubCatalog.McpVerifierModeSelector
// (None)

class UClass* UMcpVerifierModeSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("McpVerifierModeSelector");

	return Clss;
}


// McpVerifierModeSelector GameSubCatalog.Default__McpVerifierModeSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UMcpVerifierModeSelector* UMcpVerifierModeSelector::GetDefaultObj()
{
	static class UMcpVerifierModeSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UMcpVerifierModeSelector*>(UMcpVerifierModeSelector::StaticClass()->DefaultObject);

	return Default;
}

}


