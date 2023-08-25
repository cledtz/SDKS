#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _BorderStyle_ModalHeader._BorderStyle_ModalHeader_C
// (None)

class UClass* U_BorderStyle_ModalHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_BorderStyle_ModalHeader_C");

	return Clss;
}


// _BorderStyle_ModalHeader_C _BorderStyle_ModalHeader.Default___BorderStyle_ModalHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_BorderStyle_ModalHeader_C* U_BorderStyle_ModalHeader_C::GetDefaultObj()
{
	static class U_BorderStyle_ModalHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_BorderStyle_ModalHeader_C*>(U_BorderStyle_ModalHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


