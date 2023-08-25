#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NaniteDisplacedMesh.NaniteDisplacedMesh
// (None)

class UClass* UNaniteDisplacedMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NaniteDisplacedMesh");

	return Clss;
}


// NaniteDisplacedMesh NaniteDisplacedMesh.Default__NaniteDisplacedMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UNaniteDisplacedMesh* UNaniteDisplacedMesh::GetDefaultObj()
{
	static class UNaniteDisplacedMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UNaniteDisplacedMesh*>(UNaniteDisplacedMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class NaniteDisplacedMesh.NaniteDisplacedMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UNaniteDisplacedMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NaniteDisplacedMeshComponent");

	return Clss;
}


// NaniteDisplacedMeshComponent NaniteDisplacedMesh.Default__NaniteDisplacedMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNaniteDisplacedMeshComponent* UNaniteDisplacedMeshComponent::GetDefaultObj()
{
	static class UNaniteDisplacedMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNaniteDisplacedMeshComponent*>(UNaniteDisplacedMeshComponent::StaticClass()->DefaultObject);

	return Default;
}

}


