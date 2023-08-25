#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Quest_Converted_Irwin.GE_Quest_Converted_Irwin_C
// (None)

class UClass* UGE_Quest_Converted_Irwin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Quest_Converted_Irwin_C");

	return Clss;
}


// GE_Quest_Converted_Irwin_C GE_Quest_Converted_Irwin.Default__GE_Quest_Converted_Irwin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Quest_Converted_Irwin_C* UGE_Quest_Converted_Irwin_C::GetDefaultObj()
{
	static class UGE_Quest_Converted_Irwin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Quest_Converted_Irwin_C*>(UGE_Quest_Converted_Irwin_C::StaticClass()->DefaultObject);

	return Default;
}

}


