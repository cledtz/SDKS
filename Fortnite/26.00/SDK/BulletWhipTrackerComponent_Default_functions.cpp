#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_Default.BulletWhipTrackerComponent_Default_C
// (None)

class UClass* UBulletWhipTrackerComponent_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_Default_C");

	return Clss;
}


// BulletWhipTrackerComponent_Default_C BulletWhipTrackerComponent_Default.Default__BulletWhipTrackerComponent_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_Default_C* UBulletWhipTrackerComponent_Default_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_Default_C*>(UBulletWhipTrackerComponent_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


