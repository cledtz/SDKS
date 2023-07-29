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


// Function BI_OfferInteract.BI_OfferInteract_C.RemoveOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBI_OfferInteract_C::RemoveOffer()
{
	static auto Func = Class->GetFunction("BI_OfferInteract_C", "RemoveOffer");

	Params::UBI_OfferInteract_C_RemoveOffer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
