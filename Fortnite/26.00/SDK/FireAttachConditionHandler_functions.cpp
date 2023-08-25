#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireAttachConditionHandler.FireAttachConditionHandler_C
// (None)

class UClass* UFireAttachConditionHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireAttachConditionHandler_C");

	return Clss;
}


// FireAttachConditionHandler_C FireAttachConditionHandler.Default__FireAttachConditionHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireAttachConditionHandler_C* UFireAttachConditionHandler_C::GetDefaultObj()
{
	static class UFireAttachConditionHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireAttachConditionHandler_C*>(UFireAttachConditionHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


