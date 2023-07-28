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


// Function STW_LagerRuntime.FortQuestLivingWorldVolume.HandlePIEQuestsUpdated
// (Final, Native, Protected)
// Parameters:

void UFortQuestLivingWorldVolume::HandlePIEQuestsUpdated()
{
	static auto Func = Class->GetFunction("FortQuestLivingWorldVolume", "HandlePIEQuestsUpdated");

	Params::UFortQuestLivingWorldVolume_HandlePIEQuestsUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
