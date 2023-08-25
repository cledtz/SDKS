#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NeuralMorphModel.NeuralMorphInputInfo
// (None)

class UClass* UNeuralMorphInputInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeuralMorphInputInfo");

	return Clss;
}


// NeuralMorphInputInfo NeuralMorphModel.Default__NeuralMorphInputInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UNeuralMorphInputInfo* UNeuralMorphInputInfo::GetDefaultObj()
{
	static class UNeuralMorphInputInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeuralMorphInputInfo*>(UNeuralMorphInputInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class NeuralMorphModel.NeuralMorphModelInstance
// (None)

class UClass* UNeuralMorphModelInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeuralMorphModelInstance");

	return Clss;
}


// NeuralMorphModelInstance NeuralMorphModel.Default__NeuralMorphModelInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UNeuralMorphModelInstance* UNeuralMorphModelInstance::GetDefaultObj()
{
	static class UNeuralMorphModelInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeuralMorphModelInstance*>(UNeuralMorphModelInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class NeuralMorphModel.NeuralMorphModelVizSettings
// (None)

class UClass* UNeuralMorphModelVizSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeuralMorphModelVizSettings");

	return Clss;
}


// NeuralMorphModelVizSettings NeuralMorphModel.Default__NeuralMorphModelVizSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNeuralMorphModelVizSettings* UNeuralMorphModelVizSettings::GetDefaultObj()
{
	static class UNeuralMorphModelVizSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeuralMorphModelVizSettings*>(UNeuralMorphModelVizSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class NeuralMorphModel.NeuralMorphMLPLayer
// (None)

class UClass* UNeuralMorphMLPLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeuralMorphMLPLayer");

	return Clss;
}


// NeuralMorphMLPLayer NeuralMorphModel.Default__NeuralMorphMLPLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UNeuralMorphMLPLayer* UNeuralMorphMLPLayer::GetDefaultObj()
{
	static class UNeuralMorphMLPLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeuralMorphMLPLayer*>(UNeuralMorphMLPLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class NeuralMorphModel.NeuralMorphMLP
// (None)

class UClass* UNeuralMorphMLP::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeuralMorphMLP");

	return Clss;
}


// NeuralMorphMLP NeuralMorphModel.Default__NeuralMorphMLP
// (Public, ClassDefaultObject, ArchetypeObject)

class UNeuralMorphMLP* UNeuralMorphMLP::GetDefaultObj()
{
	static class UNeuralMorphMLP* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeuralMorphMLP*>(UNeuralMorphMLP::StaticClass()->DefaultObject);

	return Default;
}


// Class NeuralMorphModel.NeuralMorphNetwork
// (None)

class UClass* UNeuralMorphNetwork::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeuralMorphNetwork");

	return Clss;
}


// NeuralMorphNetwork NeuralMorphModel.Default__NeuralMorphNetwork
// (Public, ClassDefaultObject, ArchetypeObject)

class UNeuralMorphNetwork* UNeuralMorphNetwork::GetDefaultObj()
{
	static class UNeuralMorphNetwork* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeuralMorphNetwork*>(UNeuralMorphNetwork::StaticClass()->DefaultObject);

	return Default;
}


// Class NeuralMorphModel.NeuralMorphNetworkInstance
// (None)

class UClass* UNeuralMorphNetworkInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeuralMorphNetworkInstance");

	return Clss;
}


// NeuralMorphNetworkInstance NeuralMorphModel.Default__NeuralMorphNetworkInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UNeuralMorphNetworkInstance* UNeuralMorphNetworkInstance::GetDefaultObj()
{
	static class UNeuralMorphNetworkInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeuralMorphNetworkInstance*>(UNeuralMorphNetworkInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class NeuralMorphModel.NeuralMorphModel
// (None)

class UClass* UNeuralMorphModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeuralMorphModel");

	return Clss;
}


// NeuralMorphModel NeuralMorphModel.Default__NeuralMorphModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UNeuralMorphModel* UNeuralMorphModel::GetDefaultObj()
{
	static class UNeuralMorphModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeuralMorphModel*>(UNeuralMorphModel::StaticClass()->DefaultObject);

	return Default;
}

}


