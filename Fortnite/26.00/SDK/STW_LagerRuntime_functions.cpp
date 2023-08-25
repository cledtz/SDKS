#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class STW_LagerRuntime.FortQuestLivingWorldVolume
// (Actor)

class UClass* UFortQuestLivingWorldVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQuestLivingWorldVolume");

	return Clss;
}


// FortQuestLivingWorldVolume STW_LagerRuntime.Default__FortQuestLivingWorldVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQuestLivingWorldVolume* UFortQuestLivingWorldVolume::GetDefaultObj()
{
	static class UFortQuestLivingWorldVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQuestLivingWorldVolume*>(UFortQuestLivingWorldVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function STW_LagerRuntime.FortQuestLivingWorldVolume.HandlePIEQuestsUpdated
// (Final, Native, Protected)
// Parameters:

void UFortQuestLivingWorldVolume::HandlePIEQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQuestLivingWorldVolume", "HandlePIEQuestsUpdated");

	Params::UFortQuestLivingWorldVolume_HandlePIEQuestsUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


