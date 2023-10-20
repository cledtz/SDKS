#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Jump_End.CameraShake_Jump_End_C
// (None)

class UClass* UCameraShake_Jump_End_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Jump_End_C");

	return Clss;
}


// CameraShake_Jump_End_C CameraShake_Jump_End.Default__CameraShake_Jump_End_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Jump_End_C* UCameraShake_Jump_End_C::GetDefaultObj()
{
	static class UCameraShake_Jump_End_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Jump_End_C*>(UCameraShake_Jump_End_C::StaticClass()->DefaultObject);

	return Default;
}

}


