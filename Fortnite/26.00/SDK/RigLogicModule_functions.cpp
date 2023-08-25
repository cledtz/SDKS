#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RigLogicModule.DNAIndexMapping
// (None)

class UClass* UDNAIndexMapping::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DNAIndexMapping");

	return Clss;
}


// DNAIndexMapping RigLogicModule.Default__DNAIndexMapping
// (Public, ClassDefaultObject, ArchetypeObject)

class UDNAIndexMapping* UDNAIndexMapping::GetDefaultObj()
{
	static class UDNAIndexMapping* Default = nullptr;

	if (!Default)
		Default = static_cast<UDNAIndexMapping*>(UDNAIndexMapping::StaticClass()->DefaultObject);

	return Default;
}


// Class RigLogicModule.DNAAsset
// (None)

class UClass* UDNAAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DNAAsset");

	return Clss;
}


// DNAAsset RigLogicModule.Default__DNAAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UDNAAsset* UDNAAsset::GetDefaultObj()
{
	static class UDNAAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UDNAAsset*>(UDNAAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class RigLogicModule.SkelMeshDNAUtils
// (None)

class UClass* USkelMeshDNAUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkelMeshDNAUtils");

	return Clss;
}


// SkelMeshDNAUtils RigLogicModule.Default__SkelMeshDNAUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class USkelMeshDNAUtils* USkelMeshDNAUtils::GetDefaultObj()
{
	static class USkelMeshDNAUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<USkelMeshDNAUtils*>(USkelMeshDNAUtils::StaticClass()->DefaultObject);

	return Default;
}

}


