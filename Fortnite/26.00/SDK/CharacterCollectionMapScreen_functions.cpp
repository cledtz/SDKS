#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CharacterCollectionMapScreen.AthenaCollectionScreenMapCharacter
// (None)

class UClass* UAthenaCollectionScreenMapCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCollectionScreenMapCharacter");

	return Clss;
}


// AthenaCollectionScreenMapCharacter CharacterCollectionMapScreen.Default__AthenaCollectionScreenMapCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaCollectionScreenMapCharacter* UAthenaCollectionScreenMapCharacter::GetDefaultObj()
{
	static class UAthenaCollectionScreenMapCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCollectionScreenMapCharacter*>(UAthenaCollectionScreenMapCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class CharacterCollectionMapScreen.CollectionNPCServiceInfoOverlay
// (None)

class UClass* UCollectionNPCServiceInfoOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionNPCServiceInfoOverlay");

	return Clss;
}


// CollectionNPCServiceInfoOverlay CharacterCollectionMapScreen.Default__CollectionNPCServiceInfoOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UCollectionNPCServiceInfoOverlay* UCollectionNPCServiceInfoOverlay::GetDefaultObj()
{
	static class UCollectionNPCServiceInfoOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionNPCServiceInfoOverlay*>(UCollectionNPCServiceInfoOverlay::StaticClass()->DefaultObject);

	return Default;
}

}


