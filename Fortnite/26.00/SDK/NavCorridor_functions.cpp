#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NavCorridor.NavCorridorTestingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNavCorridorTestingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavCorridorTestingComponent");

	return Clss;
}


// NavCorridorTestingComponent NavCorridor.Default__NavCorridorTestingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavCorridorTestingComponent* UNavCorridorTestingComponent::GetDefaultObj()
{
	static class UNavCorridorTestingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavCorridorTestingComponent*>(UNavCorridorTestingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NavCorridor.NavCorridorTestingActor
// (Actor)

class UClass* UNavCorridorTestingActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavCorridorTestingActor");

	return Clss;
}


// NavCorridorTestingActor NavCorridor.Default__NavCorridorTestingActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavCorridorTestingActor* UNavCorridorTestingActor::GetDefaultObj()
{
	static class UNavCorridorTestingActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavCorridorTestingActor*>(UNavCorridorTestingActor::StaticClass()->DefaultObject);

	return Default;
}

}


