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


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_FuelRegen_C", "FullBlinkTimeline__FinishedFunc");

	Params::UGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_FuelRegen_C", "FullBlinkTimeline__UpdateFunc");

	Params::UGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGCL_BoostJumpPack_FuelRegen_C::ResetBlink(class UFortPlayerPawn* PlayerPawn)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_FuelRegen_C", "ResetBlink");

	Params::UGCL_BoostJumpPack_FuelRegen_C_ResetBlink_Params Parms;

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_Event_PlayerPawn                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGCL_BoostJumpPack_FuelRegen_C::ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32 EntryPoint, class UFortPlayerPawn* K2Node_Event_PlayerPawn, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_FuelRegen_C", "ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen");

	Params::UGCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
