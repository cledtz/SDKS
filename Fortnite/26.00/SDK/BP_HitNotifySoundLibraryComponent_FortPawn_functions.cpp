#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitNotifySoundLibraryComponent_FortPawn.BP_HitNotifySoundLibraryComponent_FortPawn_C
// (None)

class UClass* UBP_HitNotifySoundLibraryComponent_FortPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitNotifySoundLibraryComponent_FortPawn_C");

	return Clss;
}


// BP_HitNotifySoundLibraryComponent_FortPawn_C BP_HitNotifySoundLibraryComponent_FortPawn.Default__BP_HitNotifySoundLibraryComponent_FortPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitNotifySoundLibraryComponent_FortPawn_C* UBP_HitNotifySoundLibraryComponent_FortPawn_C::GetDefaultObj()
{
	static class UBP_HitNotifySoundLibraryComponent_FortPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitNotifySoundLibraryComponent_FortPawn_C*>(UBP_HitNotifySoundLibraryComponent_FortPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


