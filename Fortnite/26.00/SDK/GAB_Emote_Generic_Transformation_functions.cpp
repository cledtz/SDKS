#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_Emote_Generic_Transformation.GAB_Emote_Generic_Transformation_C
// (None)

class UClass* UGAB_Emote_Generic_Transformation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_Emote_Generic_Transformation_C");

	return Clss;
}


// GAB_Emote_Generic_Transformation_C GAB_Emote_Generic_Transformation.Default__GAB_Emote_Generic_Transformation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_Emote_Generic_Transformation_C* UGAB_Emote_Generic_Transformation_C::GetDefaultObj()
{
	static class UGAB_Emote_Generic_Transformation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_Emote_Generic_Transformation_C*>(UGAB_Emote_Generic_Transformation_C::StaticClass()->DefaultObject);

	return Default;
}

}


