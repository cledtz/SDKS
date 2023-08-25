#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamShake_Athena_Player_PreSlide.CamShake_Athena_Player_PreSlide_C
// (None)

class UClass* UCamShake_Athena_Player_PreSlide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamShake_Athena_Player_PreSlide_C");

	return Clss;
}


// CamShake_Athena_Player_PreSlide_C CamShake_Athena_Player_PreSlide.Default__CamShake_Athena_Player_PreSlide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamShake_Athena_Player_PreSlide_C* UCamShake_Athena_Player_PreSlide_C::GetDefaultObj()
{
	static class UCamShake_Athena_Player_PreSlide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamShake_Athena_Player_PreSlide_C*>(UCamShake_Athena_Player_PreSlide_C::StaticClass()->DefaultObject);

	return Default;
}

}


