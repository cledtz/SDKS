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


// Function EntityCore.EntityEnableableComponent.OnRep_Enabled
// (Final, Native, Private)
// Parameters:

void UEntityEnableableComponent::OnRep_Enabled()
{
	static auto Func = Class->GetFunction("EntityEnableableComponent", "OnRep_Enabled");

	Params::UEntityEnableableComponent_OnRep_Enabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
