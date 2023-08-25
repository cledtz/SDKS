#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamShake_Athena_Player_Slide.CamShake_Athena_Player_Slide_C
// (None)

class UClass* UCamShake_Athena_Player_Slide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamShake_Athena_Player_Slide_C");

	return Clss;
}


// CamShake_Athena_Player_Slide_C CamShake_Athena_Player_Slide.Default__CamShake_Athena_Player_Slide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamShake_Athena_Player_Slide_C* UCamShake_Athena_Player_Slide_C::GetDefaultObj()
{
	static class UCamShake_Athena_Player_Slide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamShake_Athena_Player_Slide_C*>(UCamShake_Athena_Player_Slide_C::StaticClass()->DefaultObject);

	return Default;
}

}


