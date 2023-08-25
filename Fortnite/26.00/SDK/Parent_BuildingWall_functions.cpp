#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
// (Actor)

class UClass* UParent_BuildingWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Parent_BuildingWall_C");

	return Clss;
}


// Parent_BuildingWall_C Parent_BuildingWall.Default__Parent_BuildingWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParent_BuildingWall_C* UParent_BuildingWall_C::GetDefaultObj()
{
	static class UParent_BuildingWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParent_BuildingWall_C*>(UParent_BuildingWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


