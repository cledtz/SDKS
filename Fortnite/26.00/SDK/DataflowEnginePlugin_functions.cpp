#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataflowEnginePlugin.DataflowActor
// (Actor)

class UClass* UDataflowActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataflowActor");

	return Clss;
}


// DataflowActor DataflowEnginePlugin.Default__DataflowActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflowActor* UDataflowActor::GetDefaultObj()
{
	static class UDataflowActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflowActor*>(UDataflowActor::StaticClass()->DefaultObject);

	return Default;
}


// Class DataflowEnginePlugin.DataflowComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UDataflowComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataflowComponent");

	return Clss;
}


// DataflowComponent DataflowEnginePlugin.Default__DataflowComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflowComponent* UDataflowComponent::GetDefaultObj()
{
	static class UDataflowComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflowComponent*>(UDataflowComponent::StaticClass()->DefaultObject);

	return Default;
}

}


