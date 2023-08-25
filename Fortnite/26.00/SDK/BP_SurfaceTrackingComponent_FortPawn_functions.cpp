#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SurfaceTrackingComponent_FortPawn.BP_SurfaceTrackingComponent_FortPawn_C
// (None)

class UClass* UBP_SurfaceTrackingComponent_FortPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SurfaceTrackingComponent_FortPawn_C");

	return Clss;
}


// BP_SurfaceTrackingComponent_FortPawn_C BP_SurfaceTrackingComponent_FortPawn.Default__BP_SurfaceTrackingComponent_FortPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SurfaceTrackingComponent_FortPawn_C* UBP_SurfaceTrackingComponent_FortPawn_C::GetDefaultObj()
{
	static class UBP_SurfaceTrackingComponent_FortPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SurfaceTrackingComponent_FortPawn_C*>(UBP_SurfaceTrackingComponent_FortPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


