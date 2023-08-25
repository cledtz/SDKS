#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireAttachHandler.FireAttachHandler_C
// (None)

class UClass* UFireAttachHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireAttachHandler_C");

	return Clss;
}


// FireAttachHandler_C FireAttachHandler.Default__FireAttachHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireAttachHandler_C* UFireAttachHandler_C::GetDefaultObj()
{
	static class UFireAttachHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireAttachHandler_C*>(UFireAttachHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


