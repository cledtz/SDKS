#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InventoryRequestInterface.PersistenceInventoryRequestInterface
// (None)

class UClass* UPersistenceInventoryRequestInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistenceInventoryRequestInterface");

	return Clss;
}


// PersistenceInventoryRequestInterface InventoryRequestInterface.Default__PersistenceInventoryRequestInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UPersistenceInventoryRequestInterface* UPersistenceInventoryRequestInterface::GetDefaultObj()
{
	static class UPersistenceInventoryRequestInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UPersistenceInventoryRequestInterface*>(UPersistenceInventoryRequestInterface::StaticClass()->DefaultObject);

	return Default;
}

}


