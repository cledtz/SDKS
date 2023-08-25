#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseMovement.NetPhysicsMoveConfig
// (None)

class UClass* UNetPhysicsMoveConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetPhysicsMoveConfig");

	return Clss;
}


// NetPhysicsMoveConfig VerseMovement.Default__NetPhysicsMoveConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetPhysicsMoveConfig* UNetPhysicsMoveConfig::GetDefaultObj()
{
	static class UNetPhysicsMoveConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetPhysicsMoveConfig*>(UNetPhysicsMoveConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseMovement.NetPhysicsMoveComponent
// (None)

class UClass* UNetPhysicsMoveComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetPhysicsMoveComponent");

	return Clss;
}


// NetPhysicsMoveComponent VerseMovement.Default__NetPhysicsMoveComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetPhysicsMoveComponent* UNetPhysicsMoveComponent::GetDefaultObj()
{
	static class UNetPhysicsMoveComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetPhysicsMoveComponent*>(UNetPhysicsMoveComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseMovement.VerseMovementComponentBase
// (None)

class UClass* UVerseMovementComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseMovementComponentBase");

	return Clss;
}


// VerseMovementComponentBase VerseMovement.Default__VerseMovementComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseMovementComponentBase* UVerseMovementComponentBase::GetDefaultObj()
{
	static class UVerseMovementComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseMovementComponentBase*>(UVerseMovementComponentBase::StaticClass()->DefaultObject);

	return Default;
}

}


