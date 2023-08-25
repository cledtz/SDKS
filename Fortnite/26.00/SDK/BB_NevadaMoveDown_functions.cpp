#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_NevadaMoveDown.BB_NevadaMoveDown_C
// (None)

class UClass* UBB_NevadaMoveDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_NevadaMoveDown_C");

	return Clss;
}


// BB_NevadaMoveDown_C BB_NevadaMoveDown.Default__BB_NevadaMoveDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_NevadaMoveDown_C* UBB_NevadaMoveDown_C::GetDefaultObj()
{
	static class UBB_NevadaMoveDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_NevadaMoveDown_C*>(UBB_NevadaMoveDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


