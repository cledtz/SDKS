#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrindRail_TipComponent.GrindRail_TipComponent_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UGrindRail_TipComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrindRail_TipComponent_C");

	return Clss;
}


// GrindRail_TipComponent_C GrindRail_TipComponent.Default__GrindRail_TipComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrindRail_TipComponent_C* UGrindRail_TipComponent_C::GetDefaultObj()
{
	static class UGrindRail_TipComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrindRail_TipComponent_C*>(UGrindRail_TipComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


