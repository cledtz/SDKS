#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortPlayerConversationComponent.FortPlayerConversationComponent_C
// (None)

class UClass* UFortPlayerConversationComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerConversationComponent_C");

	return Clss;
}


// FortPlayerConversationComponent_C FortPlayerConversationComponent.Default__FortPlayerConversationComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortPlayerConversationComponent_C* UFortPlayerConversationComponent_C::GetDefaultObj()
{
	static class UFortPlayerConversationComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerConversationComponent_C*>(UFortPlayerConversationComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


