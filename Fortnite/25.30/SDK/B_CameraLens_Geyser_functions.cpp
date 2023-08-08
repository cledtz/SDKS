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


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UB_CameraLens_Geyser_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_CameraLens_Geyser_C", "Timeline_0__FinishedFunc");

	Params::UB_CameraLens_Geyser_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UB_CameraLens_Geyser_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_CameraLens_Geyser_C", "Timeline_0__UpdateFunc");

	Params::UB_CameraLens_Geyser_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UB_CameraLens_Geyser_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraLens_Geyser_C", "ReceiveBeginPlay");

	Params::UB_CameraLens_Geyser_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_CameraLens_Geyser_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("B_CameraLens_Geyser_C", "ReceiveDestroyed");

	Params::UB_CameraLens_Geyser_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_CameraLens_Geyser_C::ExecuteUbergraph_B_CameraLens_Geyser(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_CameraLens_Geyser_C", "ExecuteUbergraph_B_CameraLens_Geyser");

	Params::UB_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
