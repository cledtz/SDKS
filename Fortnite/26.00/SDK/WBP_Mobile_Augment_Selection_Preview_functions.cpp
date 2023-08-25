#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Mobile_Augment_Selection_Preview.WBP_Mobile_Augment_Selection_Preview_C
// (None)

class UClass* UWBP_Mobile_Augment_Selection_Preview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Mobile_Augment_Selection_Preview_C");

	return Clss;
}


// WBP_Mobile_Augment_Selection_Preview_C WBP_Mobile_Augment_Selection_Preview.Default__WBP_Mobile_Augment_Selection_Preview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Mobile_Augment_Selection_Preview_C* UWBP_Mobile_Augment_Selection_Preview_C::GetDefaultObj()
{
	static class UWBP_Mobile_Augment_Selection_Preview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Mobile_Augment_Selection_Preview_C*>(UWBP_Mobile_Augment_Selection_Preview_C::StaticClass()->DefaultObject);

	return Default;
}

}


