#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function EliminationBotVFXInterface.EliminationBotVFXInterface_C.EndVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEliminationBotVFXInterface_C::EndVFX()
{
	static auto Func = Class->GetFunction("EliminationBotVFXInterface_C", "EndVFX");

	Params::UEliminationBotVFXInterface_C_EndVFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EliminationBotVFXInterface.EliminationBotVFXInterface_C.TriggerVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEliminationBotVFXInterface_C::TriggerVFX()
{
	static auto Func = Class->GetFunction("EliminationBotVFXInterface_C", "TriggerVFX");

	Params::UEliminationBotVFXInterface_C_TriggerVFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
