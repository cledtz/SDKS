#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitNotifySoundLibraryComponent.BP_HitNotifySoundLibraryComponent_C
// (None)

class UClass* UBP_HitNotifySoundLibraryComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitNotifySoundLibraryComponent_C");

	return Clss;
}


// BP_HitNotifySoundLibraryComponent_C BP_HitNotifySoundLibraryComponent.Default__BP_HitNotifySoundLibraryComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitNotifySoundLibraryComponent_C* UBP_HitNotifySoundLibraryComponent_C::GetDefaultObj()
{
	static class UBP_HitNotifySoundLibraryComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitNotifySoundLibraryComponent_C*>(UBP_HitNotifySoundLibraryComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


