#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RebootRallyIcon.WBP_RebootRallyIcon_C
// (None)

class UClass* UWBP_RebootRallyIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RebootRallyIcon_C");

	return Clss;
}


// WBP_RebootRallyIcon_C WBP_RebootRallyIcon.Default__WBP_RebootRallyIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RebootRallyIcon_C* UWBP_RebootRallyIcon_C::GetDefaultObj()
{
	static class UWBP_RebootRallyIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RebootRallyIcon_C*>(UWBP_RebootRallyIcon_C::StaticClass()->DefaultObject);

	return Default;
}

}


