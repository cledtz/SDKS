#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DudeBro_Vent.GE_DudeBro_Vent_C
// (None)

class UClass* UGE_DudeBro_Vent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DudeBro_Vent_C");

	return Clss;
}


// GE_DudeBro_Vent_C GE_DudeBro_Vent.Default__GE_DudeBro_Vent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DudeBro_Vent_C* UGE_DudeBro_Vent_C::GetDefaultObj()
{
	static class UGE_DudeBro_Vent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DudeBro_Vent_C*>(UGE_DudeBro_Vent_C::StaticClass()->DefaultObject);

	return Default;
}

}


