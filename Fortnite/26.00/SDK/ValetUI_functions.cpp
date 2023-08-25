#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
// (None)

class UClass* UFortMobileActionButtonBehavior_ValetBoost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_ValetBoost");

	return Clss;
}


// FortMobileActionButtonBehavior_ValetBoost ValetUI.Default__FortMobileActionButtonBehavior_ValetBoost
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileActionButtonBehavior_ValetBoost* UFortMobileActionButtonBehavior_ValetBoost::GetDefaultObj()
{
	static class UFortMobileActionButtonBehavior_ValetBoost* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileActionButtonBehavior_ValetBoost*>(UFortMobileActionButtonBehavior_ValetBoost::StaticClass()->DefaultObject);

	return Default;
}

}


