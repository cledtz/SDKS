#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileTrajectorySplineMesh.BP_ProjectileTrajectorySplineMesh_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_ProjectileTrajectorySplineMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileTrajectorySplineMesh_C");

	return Clss;
}


// BP_ProjectileTrajectorySplineMesh_C BP_ProjectileTrajectorySplineMesh.Default__BP_ProjectileTrajectorySplineMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ProjectileTrajectorySplineMesh_C* UBP_ProjectileTrajectorySplineMesh_C::GetDefaultObj()
{
	static class UBP_ProjectileTrajectorySplineMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ProjectileTrajectorySplineMesh_C*>(UBP_ProjectileTrajectorySplineMesh_C::StaticClass()->DefaultObject);

	return Default;
}

}


