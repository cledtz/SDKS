#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitNotifySoundLibraryContext.BP_HitNotifySoundLibraryContext_C
// (None)

class UClass* UBP_HitNotifySoundLibraryContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitNotifySoundLibraryContext_C");

	return Clss;
}


// BP_HitNotifySoundLibraryContext_C BP_HitNotifySoundLibraryContext.Default__BP_HitNotifySoundLibraryContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitNotifySoundLibraryContext_C* UBP_HitNotifySoundLibraryContext_C::GetDefaultObj()
{
	static class UBP_HitNotifySoundLibraryContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitNotifySoundLibraryContext_C*>(UBP_HitNotifySoundLibraryContext_C::StaticClass()->DefaultObject);

	return Default;
}

}


