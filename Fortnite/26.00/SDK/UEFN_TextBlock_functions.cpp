#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UEFN_TextBlock.UEFN_TextBlock_C
// (None)

class UClass* UUEFN_TextBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UEFN_TextBlock_C");

	return Clss;
}


// UEFN_TextBlock_C UEFN_TextBlock.Default__UEFN_TextBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUEFN_TextBlock_C* UUEFN_TextBlock_C::GetDefaultObj()
{
	static class UUEFN_TextBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUEFN_TextBlock_C*>(UUEFN_TextBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


