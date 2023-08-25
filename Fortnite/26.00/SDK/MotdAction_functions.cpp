#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotdAction.MotdActionBase
// (None)

class UClass* UMotdActionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotdActionBase");

	return Clss;
}


// MotdActionBase MotdAction.Default__MotdActionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotdActionBase* UMotdActionBase::GetDefaultObj()
{
	static class UMotdActionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotdActionBase*>(UMotdActionBase::StaticClass()->DefaultObject);

	return Default;
}

}


