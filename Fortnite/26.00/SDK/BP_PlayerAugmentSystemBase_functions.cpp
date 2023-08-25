#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerAugmentSystemBase.BP_PlayerAugmentSystemBase_C
// (None)

class UClass* UBP_PlayerAugmentSystemBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerAugmentSystemBase_C");

	return Clss;
}


// BP_PlayerAugmentSystemBase_C BP_PlayerAugmentSystemBase.Default__BP_PlayerAugmentSystemBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerAugmentSystemBase_C* UBP_PlayerAugmentSystemBase_C::GetDefaultObj()
{
	static class UBP_PlayerAugmentSystemBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerAugmentSystemBase_C*>(UBP_PlayerAugmentSystemBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


