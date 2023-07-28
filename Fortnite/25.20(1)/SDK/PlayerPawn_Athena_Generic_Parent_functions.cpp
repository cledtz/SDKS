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


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerPawn_Athena_Generic_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "ReceiveBeginPlay");

	Params::UPlayerPawn_Athena_Generic_Parent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerPawn_Athena_Generic_Parent_C::OnEnteredVehicle()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnEnteredVehicle");

	Params::UPlayerPawn_Athena_Generic_Parent_C_OnEnteredVehicle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerPawn_Athena_Generic_Parent_C::OnExitedVehicle()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnExitedVehicle");

	Params::UPlayerPawn_Athena_Generic_Parent_C_OnExitedVehicle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerPawn_Athena_Generic_Parent_C::OnJumped()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnJumped");

	Params::UPlayerPawn_Athena_Generic_Parent_C_OnJumped_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              HalfHeightAdjust                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaledHalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPawn_Athena_Generic_Parent_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "K2_OnStartCrouch");

	Params::UPlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch_Params Parms;

	Parms.HalfHeightAdjust = HalfHeightAdjust;
	Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              HalfHeightAdjust                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaledHalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPawn_Athena_Generic_Parent_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "K2_OnEndCrouch");

	Params::UPlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch_Params Parms;

	Parms.HalfHeightAdjust = HalfHeightAdjust;
	Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HalfHeightAdjust_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ScaledHalfHeightAdjust_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HalfHeightAdjust                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ScaledHalfHeightAdjust                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerPawn_Athena_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_HalfHeightAdjust_1, float K2Node_Event_ScaledHalfHeightAdjust_1, float K2Node_Event_HalfHeightAdjust, float K2Node_Event_ScaledHalfHeightAdjust)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent");

	Params::UPlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_HalfHeightAdjust_1 = K2Node_Event_HalfHeightAdjust_1;
	Parms.K2Node_Event_ScaledHalfHeightAdjust_1 = K2Node_Event_ScaledHalfHeightAdjust_1;
	Parms.K2Node_Event_HalfHeightAdjust = K2Node_Event_HalfHeightAdjust;
	Parms.K2Node_Event_ScaledHalfHeightAdjust = K2Node_Event_ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicleDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerPawn_Athena_Generic_Parent_C::OnExitedVehicleDispatcher__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnExitedVehicleDispatcher__DelegateSignature");

	Params::UPlayerPawn_Athena_Generic_Parent_C_OnExitedVehicleDispatcher__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicleDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerPawn_Athena_Generic_Parent_C::OnEnteredVehicleDispatcher__DelegateSignature()
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnEnteredVehicleDispatcher__DelegateSignature");

	Params::UPlayerPawn_Athena_Generic_Parent_C_OnEnteredVehicleDispatcher__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnPlayHit__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UPlayerPawn_Athena_Generic_Parent_C::OnPlayHit__DelegateSignature(class UActor* SelfActor, class UActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnPlayHit__DelegateSignature");

	Params::UPlayerPawn_Athena_Generic_Parent_C_OnPlayHit__DelegateSignature_Params Parms;

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawnAthena*       JumpingPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPlayerPawn_Athena_Generic_Parent_C::ShootingTargetReactToJump__DelegateSignature(class UFortPlayerPawnAthena* JumpingPlayer)
{
	static auto Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "ShootingTargetReactToJump__DelegateSignature");

	Params::UPlayerPawn_Athena_Generic_Parent_C_ShootingTargetReactToJump__DelegateSignature_Params Parms;

	Parms.JumpingPlayer = JumpingPlayer;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
