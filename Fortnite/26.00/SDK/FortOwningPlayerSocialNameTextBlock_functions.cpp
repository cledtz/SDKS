#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortOwningPlayerSocialNameTextBlock.FortOwningPlayerSocialNameTextBlock_C
// (None)

class UClass* UFortOwningPlayerSocialNameTextBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortOwningPlayerSocialNameTextBlock_C");

	return Clss;
}


// FortOwningPlayerSocialNameTextBlock_C FortOwningPlayerSocialNameTextBlock.Default__FortOwningPlayerSocialNameTextBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortOwningPlayerSocialNameTextBlock_C* UFortOwningPlayerSocialNameTextBlock_C::GetDefaultObj()
{
	static class UFortOwningPlayerSocialNameTextBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortOwningPlayerSocialNameTextBlock_C*>(UFortOwningPlayerSocialNameTextBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


