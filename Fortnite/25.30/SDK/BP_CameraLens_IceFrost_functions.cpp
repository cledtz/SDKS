#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BP_CameraLens_IceFrost.BP_CameraLens_IceFrost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CameraLens_IceFrost_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_CameraLens_IceFrost_C", "UserConstructionScript");

	Params::UBP_CameraLens_IceFrost_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
