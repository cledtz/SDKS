#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PapayaPickupManagement.PapayaPickupManagement_C
// (None)

class UClass* UPapayaPickupManagement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PapayaPickupManagement_C");

	return Clss;
}


// PapayaPickupManagement_C PapayaPickupManagement.Default__PapayaPickupManagement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPapayaPickupManagement_C* UPapayaPickupManagement_C::GetDefaultObj()
{
	static class UPapayaPickupManagement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPapayaPickupManagement_C*>(UPapayaPickupManagement_C::StaticClass()->DefaultObject);

	return Default;
}

}


