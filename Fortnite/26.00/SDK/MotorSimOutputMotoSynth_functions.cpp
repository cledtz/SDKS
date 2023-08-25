#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotorSimOutputMotoSynth.MotorSimOutputMotoSynth
// (SceneComponent)

class UClass* UMotorSimOutputMotoSynth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotorSimOutputMotoSynth");

	return Clss;
}


// MotorSimOutputMotoSynth MotorSimOutputMotoSynth.Default__MotorSimOutputMotoSynth
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotorSimOutputMotoSynth* UMotorSimOutputMotoSynth::GetDefaultObj()
{
	static class UMotorSimOutputMotoSynth* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotorSimOutputMotoSynth*>(UMotorSimOutputMotoSynth::StaticClass()->DefaultObject);

	return Default;
}

}


