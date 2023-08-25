#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BB_NevadaMoveUp.BB_NevadaMoveUp_C
// (None)

class UClass* UBB_NevadaMoveUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BB_NevadaMoveUp_C");

	return Clss;
}


// BB_NevadaMoveUp_C BB_NevadaMoveUp.Default__BB_NevadaMoveUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBB_NevadaMoveUp_C* UBB_NevadaMoveUp_C::GetDefaultObj()
{
	static class UBB_NevadaMoveUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBB_NevadaMoveUp_C*>(UBB_NevadaMoveUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


