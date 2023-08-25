#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AttachableWheelsRuntime.AttachableWheel
// (Actor)

class UClass* UAttachableWheel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttachableWheel");

	return Clss;
}


// AttachableWheel AttachableWheelsRuntime.Default__AttachableWheel
// (Public, ClassDefaultObject, ArchetypeObject)

class UAttachableWheel* UAttachableWheel::GetDefaultObj()
{
	static class UAttachableWheel* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttachableWheel*>(UAttachableWheel::StaticClass()->DefaultObject);

	return Default;
}


// Function AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FAttachableWheelAttachData  AttachDataPrev                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAttachableWheel::OnRep_AttachData(struct FAttachableWheelAttachData& AttachDataPrev)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "OnRep_AttachData");

	Params::UAttachableWheel_OnRep_AttachData_Params Parms{};

	Parms.AttachDataPrev = AttachDataPrev;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*         PrimitiveComponent                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EComponentPhysicsStateChangeStateChange                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttachableWheel::OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, enum class EComponentPhysicsStateChange StateChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "OnPhysicsStateChanged");

	Params::UAttachableWheel_OnPhysicsStateChanged_Params Parms{};

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.StateChange = StateChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AttachableWheelsRuntime.AttachableWheel.OnDetached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         DetachedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttachableWheel::OnDetached(class UPrimitiveComponent* DetachedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "OnDetached");

	Params::UAttachableWheel_OnDetached_Params Parms{};

	Parms.DetachedComponent = DetachedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttachableWheelsRuntime.AttachableWheel.OnAttached
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         AttachedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttachableWheel::OnAttached(class UPrimitiveComponent* AttachedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "OnAttached");

	Params::UAttachableWheel_OnAttached_Params Parms{};

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

bool UAttachableWheel::GetWorldSpaceAttachData(struct FAttachableWheelAttachData* OutAttachData, class UPrimitiveComponent* PrimitiveComponent, class FName BodyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "GetWorldSpaceAttachData");

	Params::UAttachableWheel_GetWorldSpaceAttachData_Params Parms{};

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.BodyName = BodyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAttachData != nullptr)
		*OutAttachData = Parms.OutAttachData;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UAttachableWheel::GetAttachedComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "GetAttachedComponent");

	Params::UAttachableWheel_GetAttachedComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheel.DrawDebug
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UAttachableWheel::DrawDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "DrawDebug");

	Params::UAttachableWheel_DrawDebug_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AttachableWheelsRuntime.AttachableWheel.DetachFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAttachableWheel::DetachFrom(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "DetachFrom");

	Params::UAttachableWheel_DetachFrom_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheel.Detach
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAttachableWheel::Detach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "Detach");

	Params::UAttachableWheel_Detach_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AttachableWheelsRuntime.AttachableWheel.AttachTo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AxleDirection                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAttachableWheel::AttachTo(class UPrimitiveComponent* InComponent, struct FVector& WorldLocation, struct FVector& AxleDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "AttachTo");

	Params::UAttachableWheel_AttachTo_Params Parms{};

	Parms.InComponent = InComponent;
	Parms.WorldLocation = WorldLocation;
	Parms.AxleDirection = AxleDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheel.AttachInPlace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAttachableWheel::AttachInPlace(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheel", "AttachInPlace");

	Params::UAttachableWheel_AttachInPlace_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AttachableWheelsRuntime.AttachableWheelsComponent
// (None)

class UClass* UAttachableWheelsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttachableWheelsComponent");

	return Clss;
}


// AttachableWheelsComponent AttachableWheelsRuntime.Default__AttachableWheelsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAttachableWheelsComponent* UAttachableWheelsComponent::GetDefaultObj()
{
	static class UAttachableWheelsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttachableWheelsComponent*>(UAttachableWheelsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// class UAttachableWheel*            AttachedWheel                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttachableWheelsComponent::OnWheelDetached(class UAttachableWheel* AttachedWheel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheelsComponent", "OnWheelDetached");

	Params::UAttachableWheelsComponent_OnWheelDetached_Params Parms{};

	Parms.AttachedWheel = AttachedWheel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// class UAttachableWheel*            AttachedWheel                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAttachableWheelsComponent::OnWheelAttached(class UAttachableWheel* AttachedWheel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheelsComponent", "OnWheelAttached");

	Params::UAttachableWheelsComponent_OnWheelAttached_Params Parms{};

	Parms.AttachedWheel = AttachedWheel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal
// (Final, Native, Protected)
// Parameters:
// class UAttachableWheel*            AttachedWheel                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAttachableWheelsComponent::HandleWheelDetached_Internal(class UAttachableWheel* AttachedWheel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheelsComponent", "HandleWheelDetached_Internal");

	Params::UAttachableWheelsComponent_HandleWheelDetached_Internal_Params Parms{};

	Parms.AttachedWheel = AttachedWheel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal
// (Final, Native, Protected)
// Parameters:
// class UAttachableWheel*            AttachedWheel                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAttachableWheelsComponent::HandleWheelAttached_Internal(class UAttachableWheel* AttachedWheel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheelsComponent", "HandleWheelAttached_Internal");

	Params::UAttachableWheelsComponent_HandleWheelAttached_Internal_Params Parms{};

	Parms.AttachedWheel = AttachedWheel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAttachableWheel*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UAttachableWheel*> UAttachableWheelsComponent::GetAttachedWheels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheelsComponent", "GetAttachedWheels");

	Params::UAttachableWheelsComponent_GetAttachedWheels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutClosetDistanceToAxis                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutClosestPointOnAxis                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutClosestAxis                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAttachableWheel*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAttachableWheel* UAttachableWheelsComponent::GetAttachedWheelClosestOnAxis(struct FVector& Point, float* OutClosetDistanceToAxis, struct FVector* OutClosestPointOnAxis, struct FVector* OutClosestAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheelsComponent", "GetAttachedWheelClosestOnAxis");

	Params::UAttachableWheelsComponent_GetAttachedWheelClosestOnAxis_Params Parms{};

	Parms.Point = Point;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheelsComponent", "DrawDebug");

	Params::UAttachableWheelsComponent_DrawDebug_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAttachableWheelsComponent::DetachAllWheels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttachableWheelsComponent", "DetachAllWheels");

	Params::UAttachableWheelsComponent_DetachAllWheels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


