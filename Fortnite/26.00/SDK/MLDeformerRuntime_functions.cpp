#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MLDeformerRuntime.FortMLDeformerComponent
// (None)

class UClass* UFortMLDeformerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMLDeformerComponent");

	return Clss;
}


// FortMLDeformerComponent MLDeformerRuntime.Default__FortMLDeformerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMLDeformerComponent* UFortMLDeformerComponent::GetDefaultObj()
{
	static class UFortMLDeformerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMLDeformerComponent*>(UFortMLDeformerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerRuntime.MLDeformerGameFeatureData
// (None)

class UClass* UMLDeformerGameFeatureData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerGameFeatureData");

	return Clss;
}


// MLDeformerGameFeatureData MLDeformerRuntime.Default__MLDeformerGameFeatureData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerGameFeatureData* UMLDeformerGameFeatureData::GetDefaultObj()
{
	static class UMLDeformerGameFeatureData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerGameFeatureData*>(UMLDeformerGameFeatureData::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerRuntime.MLDeformerAssetMapping
// (None)

class UClass* UMLDeformerAssetMapping::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerAssetMapping");

	return Clss;
}


// MLDeformerAssetMapping MLDeformerRuntime.Default__MLDeformerAssetMapping
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerAssetMapping* UMLDeformerAssetMapping::GetDefaultObj()
{
	static class UMLDeformerAssetMapping* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerAssetMapping*>(UMLDeformerAssetMapping::StaticClass()->DefaultObject);

	return Default;
}


// Class MLDeformerRuntime.MLDeformerComponentManager
// (None)

class UClass* UMLDeformerComponentManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MLDeformerComponentManager");

	return Clss;
}


// MLDeformerComponentManager MLDeformerRuntime.Default__MLDeformerComponentManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UMLDeformerComponentManager* UMLDeformerComponentManager::GetDefaultObj()
{
	static class UMLDeformerComponentManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UMLDeformerComponentManager*>(UMLDeformerComponentManager::StaticClass()->DefaultObject);

	return Default;
}

}


