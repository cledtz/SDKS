#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotdOverride.MotdWidgetBase
// (None)

class UClass* UMotdWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotdWidgetBase");

	return Clss;
}


// MotdWidgetBase MotdOverride.Default__MotdWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotdWidgetBase* UMotdWidgetBase::GetDefaultObj()
{
	static class UMotdWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotdWidgetBase*>(UMotdWidgetBase::StaticClass()->DefaultObject);

	return Default;
}

}


