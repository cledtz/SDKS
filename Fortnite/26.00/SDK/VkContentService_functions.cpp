#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VkContentService.VkInstallBundleRegistrar
// (None)

class UClass* UVkInstallBundleRegistrar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VkInstallBundleRegistrar");

	return Clss;
}


// VkInstallBundleRegistrar VkContentService.Default__VkInstallBundleRegistrar
// (Public, ClassDefaultObject, ArchetypeObject)

class UVkInstallBundleRegistrar* UVkInstallBundleRegistrar::GetDefaultObj()
{
	static class UVkInstallBundleRegistrar* Default = nullptr;

	if (!Default)
		Default = static_cast<UVkInstallBundleRegistrar*>(UVkInstallBundleRegistrar::StaticClass()->DefaultObject);

	return Default;
}

}


