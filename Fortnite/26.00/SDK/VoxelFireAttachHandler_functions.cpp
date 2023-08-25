#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VoxelFireAttachHandler.VoxelFireAttachHandler_C
// (None)

class UClass* UVoxelFireAttachHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelFireAttachHandler_C");

	return Clss;
}


// VoxelFireAttachHandler_C VoxelFireAttachHandler.Default__VoxelFireAttachHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVoxelFireAttachHandler_C* UVoxelFireAttachHandler_C::GetDefaultObj()
{
	static class UVoxelFireAttachHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelFireAttachHandler_C*>(UVoxelFireAttachHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


