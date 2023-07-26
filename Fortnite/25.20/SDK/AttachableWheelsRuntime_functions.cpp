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


// Function AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FAttachableWheelAttachData  AttachDataPrev                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AAttachableWheel::OnRep_AttachData(struct FAttachableWheelAttachData& AttachDataPrev)
{
	static auto Func = Class->GetFunction("AttachableWheel", "OnRep_AttachData");

	Params::AAttachableWheel_OnRep_AttachData_Params Parms;

	Parms.AttachDataPrev = AttachDataPrev;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*         PrimitiveComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComponentPhysicsStateChangeStateChange                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAttachableWheel::OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, enum class EComponentPhysicsStateChange StateChange)
{
	static auto Func = Class->GetFunction("AttachableWheel", "OnPhysicsStateChanged");

	Params::AAttachableWheel_OnPhysicsStateChanged_Params Parms;

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.StateChange = StateChange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AttachableWheelsRuntime.AttachableWheel.OnDetached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         DetachedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAttachableWheel::OnDetached(class UPrimitiveComponent* DetachedComponent)
{
	static auto Func = Class->GetFunction("AttachableWheel", "OnDetached");

	Params::AAttachableWheel_OnDetached_Params Parms;

	Parms.DetachedComponent = DetachedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttachableWheelsRuntime.AttachableWheel.OnAttached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         AttachedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAttachableWheel::OnAttached(class UPrimitiveComponent* AttachedComponent)
{
	static auto Func = Class->GetFunction("AttachableWheel", "OnAttached");

	Params::AAttachableWheel_OnAttached_Params Parms;

	Parms.AttachedComponent = AttachedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAttachableWheelAttachData  OutAttachData                                                    (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         PrimitiveComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BodyName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAttachableWheel::GetWorldSpaceAttachData(struct FAttachableWheelAttachData* OutAttachData, class UPrimitiveComponent* PrimitiveComponent, class FName BodyName)
{
	static auto Func = Class->GetFunction("AttachableWheel", "GetWorldSpaceAttachData");

	Params::AAttachableWheel_GetWorldSpaceAttachData_Params Parms;

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.BodyName = BodyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutAttachData != nullptr)
		*OutAttachData = Parms.OutAttachData;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* AAttachableWheel::GetAttachedComponent()
{
	static auto Func = Class->GetFunction("AttachableWheel", "GetAttachedComponent");

	Params::AAttachableWheel_GetAttachedComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheel.DrawDebug
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void AAttachableWheel::DrawDebug()
{
	static auto Func = Class->GetFunction("AttachableWheel", "DrawDebug");

	Params::AAttachableWheel_DrawDebug_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AttachableWheelsRuntime.AttachableWheel.DetachFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAttachableWheel::DetachFrom(class UPrimitiveComponent* InComponent)
{
	static auto Func = Class->GetFunction("AttachableWheel", "DetachFrom");

	Params::AAttachableWheel_DetachFrom_Params Parms;

	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheel.Detach
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAttachableWheel::Detach()
{
	static auto Func = Class->GetFunction("AttachableWheel", "Detach");

	Params::AAttachableWheel_Detach_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AttachableWheelsRuntime.AttachableWheel.AttachTo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AxleDirection                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAttachableWheel::AttachTo(class UPrimitiveComponent* InComponent, struct FVector& WorldLocation, struct FVector& AxleDirection)
{
	static auto Func = Class->GetFunction("AttachableWheel", "AttachTo");

	Params::AAttachableWheel_AttachTo_Params Parms;

	Parms.InComponent = InComponent;
	Parms.WorldLocation = WorldLocation;
	Parms.AxleDirection = AxleDirection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheel.AttachInPlace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAttachableWheel::AttachInPlace(class UPrimitiveComponent* InComponent)
{
	static auto Func = Class->GetFunction("AttachableWheel", "AttachInPlace");

	Params::AAttachableWheel_AttachInPlace_Params Parms;

	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// class AAttachableWheel*            AttachedWheel                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttachableWheelsComponent::OnWheelDetached(class AAttachableWheel* AttachedWheel)
{
	static auto Func = Class->GetFunction("AttachableWheelsComponent", "OnWheelDetached");

	Params::UAttachableWheelsComponent_OnWheelDetached_Params Parms;

	Parms.AttachedWheel = AttachedWheel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// class AAttachableWheel*            AttachedWheel                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttachableWheelsComponent::OnWheelAttached(class AAttachableWheel* AttachedWheel)
{
	static auto Func = Class->GetFunction("AttachableWheelsComponent", "OnWheelAttached");

	Params::UAttachableWheelsComponent_OnWheelAttached_Params Parms;

	Parms.AttachedWheel = AttachedWheel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal
// (Final, Native, Protected)
// Parameters:
// class AAttachableWheel*            AttachedWheel                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAttachableWheelsComponent::HandleWheelDetached_Internal(class AAttachableWheel* AttachedWheel)
{
	static auto Func = Class->GetFunction("AttachableWheelsComponent", "HandleWheelDetached_Internal");

	Params::UAttachableWheelsComponent_HandleWheelDetached_Internal_Params Parms;

	Parms.AttachedWheel = AttachedWheel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal
// (Final, Native, Protected)
// Parameters:
// class AAttachableWheel*            AttachedWheel                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAttachableWheelsComponent::HandleWheelAttached_Internal(class AAttachableWheel* AttachedWheel)
{
	static auto Func = Class->GetFunction("AttachableWheelsComponent", "HandleWheelAttached_Internal");

	Params::UAttachableWheelsComponent_HandleWheelAttached_Internal_Params Parms;

	Parms.AttachedWheel = AttachedWheel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AAttachableWheel*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AAttachableWheel*> UAttachableWheelsComponent::GetAttachedWheels()
{
	static auto Func = Class->GetFunction("AttachableWheelsComponent", "GetAttachedWheels");

	Params::UAttachableWheelsComponent_GetAttachedWheels_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutClosetDistanceToAxis                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutClosestPointOnAxis                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutClosestAxis                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAttachableWheel*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AAttachableWheel* UAttachableWheelsComponent::GetAttachedWheelClosestOnAxis(struct FVector& Point, float* OutClosetDistanceToAxis, struct FVector* OutClosestPointOnAxis, struct FVector* OutClosestAxis)
{
	static auto Func = Class->GetFunction("AttachableWheelsComponent", "GetAttachedWheelClosestOnAxis");

	Params::UAttachableWheelsComponent_GetAttachedWheelClosestOnAxis_Params Parms;

	Parms.Point = Point;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutClosetDistanceToAxis != nullptr)
		*OutClosetDistanceToAxis = Parms.OutClosetDistanceToAxis;

	if (OutClosestPointOnAxis != nullptr)
		*OutClosestPointOnAxis = Parms.OutClosestPointOnAxis;

	if (OutClosestAxis != nullptr)
		*OutClosestAxis = Parms.OutClosestAxis;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.DrawDebug
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:

void UAttachableWheelsComponent::DrawDebug()
{
	static auto Func = Class->GetFunction("AttachableWheelsComponent", "DrawDebug");

	Params::UAttachableWheelsComponent_DrawDebug_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAttachableWheelsComponent::DetachAllWheels()
{
	static auto Func = Class->GetFunction("AttachableWheelsComponent", "DetachAllWheels");

	Params::UAttachableWheelsComponent_DetachAllWheels_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
