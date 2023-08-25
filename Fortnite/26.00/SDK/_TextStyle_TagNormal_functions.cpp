#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _TextStyle_TagNormal._TextStyle_TagNormal_C
// (None)

class UClass* U_TextStyle_TagNormal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_TextStyle_TagNormal_C");

	return Clss;
}


// _TextStyle_TagNormal_C _TextStyle_TagNormal.Default___TextStyle_TagNormal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_TextStyle_TagNormal_C* U_TextStyle_TagNormal_C::GetDefaultObj()
{
	static class U_TextStyle_TagNormal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_TextStyle_TagNormal_C*>(U_TextStyle_TagNormal_C::StaticClass()->DefaultObject);

	return Default;
}

}


