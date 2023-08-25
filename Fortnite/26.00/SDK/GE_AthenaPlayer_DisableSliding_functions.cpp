#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AthenaPlayer_DisableSliding.GE_AthenaPlayer_DisableSliding_C
// (None)

class UClass* UGE_AthenaPlayer_DisableSliding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AthenaPlayer_DisableSliding_C");

	return Clss;
}


// GE_AthenaPlayer_DisableSliding_C GE_AthenaPlayer_DisableSliding.Default__GE_AthenaPlayer_DisableSliding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AthenaPlayer_DisableSliding_C* UGE_AthenaPlayer_DisableSliding_C::GetDefaultObj()
{
	static class UGE_AthenaPlayer_DisableSliding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AthenaPlayer_DisableSliding_C*>(UGE_AthenaPlayer_DisableSliding_C::StaticClass()->DefaultObject);

	return Default;
}

}


