#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SR_Rock.SR_Rock_C
// (None)

class UClass* USR_Rock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SR_Rock_C");

	return Clss;
}


// SR_Rock_C SR_Rock.Default__SR_Rock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USR_Rock_C* USR_Rock_C::GetDefaultObj()
{
	static class USR_Rock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USR_Rock_C*>(USR_Rock_C::StaticClass()->DefaultObject);

	return Default;
}

}


