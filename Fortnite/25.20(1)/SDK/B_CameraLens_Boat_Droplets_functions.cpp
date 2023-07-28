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


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UB_CameraLens_Boat_Droplets_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "Timeline_0__FinishedFunc");

	Params::UB_CameraLens_Boat_Droplets_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UB_CameraLens_Boat_Droplets_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "Timeline_0__UpdateFunc");

	Params::UB_CameraLens_Boat_Droplets_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UB_CameraLens_Boat_Droplets_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "ReceiveBeginPlay");

	Params::UB_CameraLens_Boat_Droplets_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_CameraLens_Boat_Droplets_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "ReceiveDestroyed");

	Params::UB_CameraLens_Boat_Droplets_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ExecuteUbergraph_B_CameraLens_Boat_Droplets
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_CameraLens_Boat_Droplets_C::ExecuteUbergraph_B_CameraLens_Boat_Droplets(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "ExecuteUbergraph_B_CameraLens_Boat_Droplets");

	Params::UB_CameraLens_Boat_Droplets_C_ExecuteUbergraph_B_CameraLens_Boat_Droplets_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
