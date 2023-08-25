#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EliminationBotVFXInterface.EliminationBotVFXInterface_C
// (None)

class UClass* UEliminationBotVFXInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EliminationBotVFXInterface_C");

	return Clss;
}


// EliminationBotVFXInterface_C EliminationBotVFXInterface.Default__EliminationBotVFXInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEliminationBotVFXInterface_C* UEliminationBotVFXInterface_C::GetDefaultObj()
{
	static class UEliminationBotVFXInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEliminationBotVFXInterface_C*>(UEliminationBotVFXInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EliminationBotVFXInterface.EliminationBotVFXInterface_C.EndVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEliminationBotVFXInterface_C::EndVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EliminationBotVFXInterface_C", "EndVFX");

	Params::UEliminationBotVFXInterface_C_EndVFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function EliminationBotVFXInterface.EliminationBotVFXInterface_C.TriggerVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEliminationBotVFXInterface_C::TriggerVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EliminationBotVFXInterface_C", "TriggerVFX");

	Params::UEliminationBotVFXInterface_C_TriggerVFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


