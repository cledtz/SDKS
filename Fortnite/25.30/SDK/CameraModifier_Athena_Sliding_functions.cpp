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


// Function CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.BlendOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCameraModifier_Athena_Sliding_C::BlendOut()
{
	static auto Func = Class->GetFunction("CameraModifier_Athena_Sliding_C", "BlendOut");

	Params::UCameraModifier_Athena_Sliding_C_BlendOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.ExecuteUbergraph_CameraModifier_Athena_Sliding
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_Athena_Sliding_C::ExecuteUbergraph_CameraModifier_Athena_Sliding(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("CameraModifier_Athena_Sliding_C", "ExecuteUbergraph_CameraModifier_Athena_Sliding");

	Params::UCameraModifier_Athena_Sliding_C_ExecuteUbergraph_CameraModifier_Athena_Sliding_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
