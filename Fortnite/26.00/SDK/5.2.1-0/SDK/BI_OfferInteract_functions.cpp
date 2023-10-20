#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_OfferInteract.BI_OfferInteract_C
// (None)

class UClass* UBI_OfferInteract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_OfferInteract_C");

	return Clss;
}


// BI_OfferInteract_C BI_OfferInteract.Default__BI_OfferInteract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBI_OfferInteract_C* UBI_OfferInteract_C::GetDefaultObj()
{
	static class UBI_OfferInteract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBI_OfferInteract_C*>(UBI_OfferInteract_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_OfferInteract.BI_OfferInteract_C.RemoveOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBI_OfferInteract_C::RemoveOffer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_OfferInteract_C", "RemoveOffer");

	Params::UBI_OfferInteract_C_RemoveOffer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


