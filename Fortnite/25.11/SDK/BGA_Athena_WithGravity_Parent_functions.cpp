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


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BounceBGAAwayFromLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToBounceAwayFrom                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::BounceBGAAwayFromLocation(const struct FVector& LocationToBounceAwayFrom, double CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "BounceBGAAwayFromLocation");

	Params::ABGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation_Params Parms;

	Parms.LocationToBounceAwayFrom = LocationToBounceAwayFrom;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1 = CallFunc_Conv_DoubleToVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_StopSimServerLocation
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::OnRep_StopSimServerLocation(const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnRep_StopSimServerLocation");

	Params::ABGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation_Params Parms;

	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_StopLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_WithGravity_Parent_C::OnRep_StopLocation()
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnRep_StopLocation");

	Params::ABGA_Athena_WithGravity_Parent_C_OnRep_StopLocation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     GravHitNormal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::Init(const struct FVector& GravHitNormal)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "Init");

	Params::ABGA_Athena_WithGravity_Parent_C_Init_Params Parms;

	Parms.GravHitNormal = GravHitNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttachedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::OnAttach(class AActor* AttachedActor)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnAttach");

	Params::ABGA_Athena_WithGravity_Parent_C_OnAttach_Params Parms;

	Parms.AttachedActor = AttachedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.RestartSimulation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_WithGravity_Parent_C::RestartSimulation()
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "RestartSimulation");

	Params::ABGA_Athena_WithGravity_Parent_C_RestartSimulation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachToBindedActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         AttachComp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingWall*               K2Node_DynamicCast_AsBuilding_Wall                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanActorSimulatePhysics_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                K2Node_DynamicCast_AsFort_Vehicle_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::AttachToBindedActor(class UPrimitiveComponent* AttachComp, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class ABuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanActorSimulatePhysics_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_2)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "AttachToBindedActor");

	Params::ABGA_Athena_WithGravity_Parent_C_AttachToBindedActor_Params Parms;

	Parms.AttachComp = AttachComp;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBuilding_Wall = K2Node_DynamicCast_AsBuilding_Wall;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanActorSimulatePhysics_ReturnValue = CallFunc_CanActorSimulatePhysics_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Vehicle_Interface = K2Node_DynamicCast_AsFort_Vehicle_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BounceBGA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MirrorVectorByNormal_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::BounceBGA(int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "BounceBGA");

	Params::ABGA_Athena_WithGravity_Parent_C_BounceBGA_Params Parms;

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MirrorVectorByNormal_ReturnValue = CallFunc_MirrorVectorByNormal_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.CheckForSameClassToBounce
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HitSameClass                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::CheckForSameClassToBounce(class AActor* Hit, bool* HitSameClass, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "CheckForSameClassToBounce");

	Params::ABGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce_Params Parms;

	Parms.Hit = Hit;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HitSameClass != nullptr)
		*HitSameClass = Parms.HitSameClass;

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_RepCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_WithGravity_Parent_C::OnRep_RepCollision()
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnRep_RepCollision");

	Params::ABGA_Athena_WithGravity_Parent_C_OnRep_RepCollision_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ForceBounceBGA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MirrorVectorByNormal_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::ForceBounceBGA(int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "ForceBounceBGA");

	Params::ABGA_Athena_WithGravity_Parent_C_ForceBounceBGA_Params Parms;

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MirrorVectorByNormal_ReturnValue = CallFunc_MirrorVectorByNormal_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_bResumeSimulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_WithGravity_Parent_C::OnRep_bResumeSimulation()
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnRep_bResumeSimulation");

	Params::ABGA_Athena_WithGravity_Parent_C_OnRep_bResumeSimulation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::BaseDestroyed(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "BaseDestroyed");

	Params::ABGA_Athena_WithGravity_Parent_C_BaseDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "BaseDied");

	Params::ABGA_Athena_WithGravity_Parent_C_BaseDied_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.HandleBinding
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         HitComp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::HandleBinding(class AActor* Actor, class UPrimitiveComponent* HitComp)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "HandleBinding");

	Params::ABGA_Athena_WithGravity_Parent_C_HandleBinding_Params Parms;

	Parms.Actor = Actor;
	Parms.HitComp = HitComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_Athena_WithGravity_Parent_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "ReceiveHit");

	Params::ABGA_Athena_WithGravity_Parent_C_ReceiveHit_Params Parms;

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.StopSim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_Athena_WithGravity_Parent_C::StopSim(const struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "StopSim");

	Params::ABGA_Athena_WithGravity_Parent_C_StopSim_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_Athena_WithGravity_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "ReceiveBeginPlay");

	Params::ABGA_Athena_WithGravity_Parent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Impulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DelayBeforeImpulse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DelayBeforeCollision                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpulseOrigin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpulseAmount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SetCollisionAfterImpulse                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::Impulse(double DelayBeforeImpulse, double DelayBeforeCollision, const struct FVector& ImpulseOrigin, const struct FVector& ImpulseAmount, bool SetCollisionAfterImpulse)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "Impulse");

	Params::ABGA_Athena_WithGravity_Parent_C_Impulse_Params Parms;

	Parms.DelayBeforeImpulse = DelayBeforeImpulse;
	Parms.DelayBeforeCollision = DelayBeforeCollision;
	Parms.ImpulseOrigin = ImpulseOrigin;
	Parms.ImpulseAmount = ImpulseAmount;
	Parms.SetCollisionAfterImpulse = SetCollisionAfterImpulse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.PlayHitFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_Athena_WithGravity_Parent_C::PlayHitFX(const struct FHitResult& HitResult)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "PlayHitFX");

	Params::ABGA_Athena_WithGravity_Parent_C_PlayHitFX_Params Parms;

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SpawnFXSounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_WithGravity_Parent_C::SpawnFXSounds()
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "SpawnFXSounds");

	Params::ABGA_Athena_WithGravity_Parent_C_SpawnFXSounds_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachedWasDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_WithGravity_Parent_C::AttachedWasDestroyed()
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "AttachedWasDestroyed");

	Params::ABGA_Athena_WithGravity_Parent_C_AttachedWasDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SlidingDoorOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_WithGravity_Parent_C::SlidingDoorOpened()
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "SlidingDoorOpened");

	Params::ABGA_Athena_WithGravity_Parent_C_SlidingDoorOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnUnderneathPhysicsObjectAwakeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         SimulatingComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAwake                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::OnUnderneathPhysicsObjectAwakeChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "OnUnderneathPhysicsObjectAwakeChanged");

	Params::ABGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged_Params Parms;

	Parms.SimulatingComponent = SimulatingComponent;
	Parms.bIsAwake = bIsAwake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ExecuteUbergraph_BGA_Athena_WithGravity_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_HitResult                                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABGA_Athena_WithGravity_Parent_C*K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DelayBeforeImpulse                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DelayBeforeCollision                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ImpulseOrigin                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ImpulseAmount                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SetCollisionAfterImpulse                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAttachSocketName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DegAcos_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForSameClassToBounce_HitSameClass                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_Athena_WithGravity_Parent_C*K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         K2Node_DynamicCast_AsFort_Projectile_Base                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_HitComp                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPhysicsObjectComponent* CallFunc_GetPhysicsObjectComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanActorSimulatePhysics_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMilitaryBase_Door_01_C*     K2Node_DynamicCast_AsMilitary_Base_Door_01                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaWater*            K2Node_DynamicCast_AsFort_Athena_Water                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWaterBodyBP_C*          K2Node_DynamicCast_AsFort_Water_Body_BP                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_SimulatingComponent                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsAwake                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPhysicsObjectComponent* CallFunc_GetPhysicsObjectComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_WithGravity_Parent_C::ExecuteUbergraph_BGA_Athena_WithGravity_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& K2Node_CustomEvent_HitResult, class AActor* CallFunc_Array_Get_Item, class ABGA_Athena_WithGravity_Parent_C* K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent, bool K2Node_DynamicCast_bSuccess, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double K2Node_CustomEvent_DelayBeforeImpulse, double K2Node_CustomEvent_DelayBeforeCollision, const struct FVector& K2Node_CustomEvent_ImpulseOrigin, const struct FVector& K2Node_CustomEvent_ImpulseAmount, bool K2Node_CustomEvent_SetCollisionAfterImpulse, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FHitResult& K2Node_CustomEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, double CallFunc_Dot_VectorVector_ReturnValue, class FName CallFunc_GetAttachSocketName_ReturnValue, double CallFunc_DegAcos_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckForSameClassToBounce_HitSameClass, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Array_Contains_ReturnValue, class ABGA_Athena_WithGravity_Parent_C* K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanAND_ReturnValue_2, class AFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess_5, class AActor* K2Node_CustomEvent_Actor, class UPrimitiveComponent* K2Node_CustomEvent_HitComp, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor_1, bool K2Node_DynamicCast_bSuccess_6, class UFortPhysicsObjectComponent* CallFunc_GetPhysicsObjectComponent_ReturnValue, bool CallFunc_CanActorSimulatePhysics_ReturnValue, class AMilitaryBase_Door_01_C* K2Node_DynamicCast_AsMilitary_Base_Door_01, bool K2Node_DynamicCast_bSuccess_7, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class AFortAthenaWater* K2Node_DynamicCast_AsFort_Athena_Water, bool K2Node_DynamicCast_bSuccess_9, class AFortWaterBodyBP_C* K2Node_DynamicCast_AsFort_Water_Body_BP, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_BooleanOR_ReturnValue_1, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* K2Node_CustomEvent_DestroyedActor, class UPrimitiveComponent* K2Node_CustomEvent_SimulatingComponent, bool K2Node_CustomEvent_bIsAwake, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AActor* CallFunc_GetOwner_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor_2, bool K2Node_DynamicCast_bSuccess_11, class UFortPhysicsObjectComponent* CallFunc_GetPhysicsObjectComponent_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("BGA_Athena_WithGravity_Parent_C", "ExecuteUbergraph_BGA_Athena_WithGravity_Parent");

	Params::ABGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_HitResult = K2Node_CustomEvent_HitResult;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent = K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_DelayBeforeImpulse = K2Node_CustomEvent_DelayBeforeImpulse;
	Parms.K2Node_CustomEvent_DelayBeforeCollision = K2Node_CustomEvent_DelayBeforeCollision;
	Parms.K2Node_CustomEvent_ImpulseOrigin = K2Node_CustomEvent_ImpulseOrigin;
	Parms.K2Node_CustomEvent_ImpulseAmount = K2Node_CustomEvent_ImpulseAmount;
	Parms.K2Node_CustomEvent_SetCollisionAfterImpulse = K2Node_CustomEvent_SetCollisionAfterImpulse;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_GetAttachSocketName_ReturnValue = CallFunc_GetAttachSocketName_ReturnValue;
	Parms.CallFunc_DegAcos_ReturnValue = CallFunc_DegAcos_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CheckForSameClassToBounce_HitSameClass = CallFunc_CheckForSameClassToBounce_HitSameClass;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent_1 = K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Projectile_Base = K2Node_DynamicCast_AsFort_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_HitComp = K2Node_CustomEvent_HitComp;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBuilding_Actor_1 = K2Node_DynamicCast_AsBuilding_Actor_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetPhysicsObjectComponent_ReturnValue = CallFunc_GetPhysicsObjectComponent_ReturnValue;
	Parms.CallFunc_CanActorSimulatePhysics_ReturnValue = CallFunc_CanActorSimulatePhysics_ReturnValue;
	Parms.K2Node_DynamicCast_AsMilitary_Base_Door_01 = K2Node_DynamicCast_AsMilitary_Base_Door_01;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena_1 = K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Athena_Water = K2Node_DynamicCast_AsFort_Athena_Water;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsFort_Water_Body_BP = K2Node_DynamicCast_AsFort_Water_Body_BP;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.K2Node_CustomEvent_SimulatingComponent = K2Node_CustomEvent_SimulatingComponent;
	Parms.K2Node_CustomEvent_bIsAwake = K2Node_CustomEvent_bIsAwake;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Actor_2 = K2Node_DynamicCast_AsBuilding_Actor_2;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetPhysicsObjectComponent_ReturnValue_1 = CallFunc_GetPhysicsObjectComponent_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
