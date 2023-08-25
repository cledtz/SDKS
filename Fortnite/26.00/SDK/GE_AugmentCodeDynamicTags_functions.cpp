#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AugmentCodeDynamicTags.GE_AugmentCodeDynamicTags_C
// (None)

class UClass* UGE_AugmentCodeDynamicTags_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AugmentCodeDynamicTags_C");

	return Clss;
}


// GE_AugmentCodeDynamicTags_C GE_AugmentCodeDynamicTags.Default__GE_AugmentCodeDynamicTags_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AugmentCodeDynamicTags_C* UGE_AugmentCodeDynamicTags_C::GetDefaultObj()
{
	static class UGE_AugmentCodeDynamicTags_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AugmentCodeDynamicTags_C*>(UGE_AugmentCodeDynamicTags_C::StaticClass()->DefaultObject);

	return Default;
}

}


