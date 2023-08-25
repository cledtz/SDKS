#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VKPlayRuntime.FortVKPlayGameFeatureAction_RegisterContentErrorHandler
// (None)

class UClass* UFortVKPlayGameFeatureAction_RegisterContentErrorHandler::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVKPlayGameFeatureAction_RegisterContentErrorHandler");

	return Clss;
}


// FortVKPlayGameFeatureAction_RegisterContentErrorHandler VKPlayRuntime.Default__FortVKPlayGameFeatureAction_RegisterContentErrorHandler
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVKPlayGameFeatureAction_RegisterContentErrorHandler* UFortVKPlayGameFeatureAction_RegisterContentErrorHandler::GetDefaultObj()
{
	static class UFortVKPlayGameFeatureAction_RegisterContentErrorHandler* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVKPlayGameFeatureAction_RegisterContentErrorHandler*>(UFortVKPlayGameFeatureAction_RegisterContentErrorHandler::StaticClass()->DefaultObject);

	return Default;
}

}


