#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_ButtonStyle_CollectionTab.Athena_ButtonStyle_CollectionTab_C
// (None)

class UClass* UAthena_ButtonStyle_CollectionTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ButtonStyle_CollectionTab_C");

	return Clss;
}


// Athena_ButtonStyle_CollectionTab_C Athena_ButtonStyle_CollectionTab.Default__Athena_ButtonStyle_CollectionTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ButtonStyle_CollectionTab_C* UAthena_ButtonStyle_CollectionTab_C::GetDefaultObj()
{
	static class UAthena_ButtonStyle_CollectionTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ButtonStyle_CollectionTab_C*>(UAthena_ButtonStyle_CollectionTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


