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


// Function Fauna_Jump_AnimInterface.Fauna_Jump_AnimInterface_C.Fauna Jump
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   Fauna_Jump                                                       (Parm, OutParm, NoDestructor)

void UFauna_Jump_AnimInterface_C::Fauna_Jump(struct FPoseLink* Fauna_Jump)
{
	static auto Func = Class->GetFunction("Fauna_Jump_AnimInterface_C", "Fauna Jump");

	Params::UFauna_Jump_AnimInterface_C_Fauna_Jump_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Jump != nullptr)
		*Fauna_Jump = Parms.Fauna_Jump;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
