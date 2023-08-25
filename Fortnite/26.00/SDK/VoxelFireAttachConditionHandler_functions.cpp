#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VoxelFireAttachConditionHandler.VoxelFireAttachConditionHandler_C
// (None)

class UClass* UVoxelFireAttachConditionHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelFireAttachConditionHandler_C");

	return Clss;
}


// VoxelFireAttachConditionHandler_C VoxelFireAttachConditionHandler.Default__VoxelFireAttachConditionHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVoxelFireAttachConditionHandler_C* UVoxelFireAttachConditionHandler_C::GetDefaultObj()
{
	static class UVoxelFireAttachConditionHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelFireAttachConditionHandler_C*>(UVoxelFireAttachConditionHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


