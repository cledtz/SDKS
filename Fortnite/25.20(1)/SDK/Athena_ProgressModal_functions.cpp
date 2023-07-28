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


// Function Athena_ProgressModal.Athena_ProgressModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthena_ProgressModal_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("Athena_ProgressModal_C", "BP_OnActivated");

	Params::UAthena_ProgressModal_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_ProgressModal.Athena_ProgressModal_C.ExecuteUbergraph_Athena_ProgressModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAthena_ProgressModal_C::ExecuteUbergraph_Athena_ProgressModal(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_ProgressModal_C", "ExecuteUbergraph_Athena_ProgressModal");

	Params::UAthena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
