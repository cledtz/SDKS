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


// Function AudioShapes.AudioShapeComponent.UpdateAudioShape
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<class UPlayerController*>   InLocalControllers                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioShapeComponent::UpdateAudioShape(TArray<class UPlayerController*>& InLocalControllers)
{
	static auto Func = Class->GetFunction("AudioShapeComponent", "UpdateAudioShape");

	Params::UAudioShapeComponent_UpdateAudioShape_Params Parms;

	Parms.InLocalControllers = InLocalControllers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioShapes.AudioShapeComponent.Enable
// (Native, Protected, BlueprintCallable)
// Parameters:

void UAudioShapeComponent::Enable()
{
	static auto Func = Class->GetFunction("AudioShapeComponent", "Enable");

	Params::UAudioShapeComponent_Enable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioShapes.AudioShapeComponent.Disable
// (Native, Protected, BlueprintCallable)
// Parameters:

void UAudioShapeComponent::Disable()
{
	static auto Func = Class->GetFunction("AudioShapeComponent", "Disable");

	Params::UAudioShapeComponent_Disable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioShapePrimitiveComponent::GetIsPlayerInside()
{
	static auto Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetIsPlayerInside");

	Params::UAudioShapePrimitiveComponent_GetIsPlayerInside_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAudioComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioComponent* UAudioShapePrimitiveComponent::GetInsideAudioComponent()
{
	static auto Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetInsideAudioComponent");

	Params::UAudioShapePrimitiveComponent_GetInsideAudioComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAudioComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioComponent* UAudioShapePrimitiveComponent::GetEdgeAudioComponent()
{
	static auto Func = Class->GetFunction("AudioShapePrimitiveComponent", "GetEdgeAudioComponent");

	Params::UAudioShapePrimitiveComponent_GetEdgeAudioComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioShapes.AudioShapeBoxComponent.SetBoxTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InTransform                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeBoxComponent::SetBoxTransform(struct FTransform& InTransform)
{
	static auto Func = Class->GetFunction("AudioShapeBoxComponent", "SetBoxTransform");

	Params::UAudioShapeBoxComponent_SetBoxTransform_Params Parms;

	Parms.InTransform = InTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioShapes.AudioShapeCylinderComponent.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeCylinderComponent::SetRadius(float InRadius)
{
	static auto Func = Class->GetFunction("AudioShapeCylinderComponent", "SetRadius");

	Params::UAudioShapeCylinderComponent_SetRadius_Params Parms;

	Parms.InRadius = InRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHalfHeight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeCylinderComponent::SetHalfHeight(float InHalfHeight)
{
	static auto Func = Class->GetFunction("AudioShapeCylinderComponent", "SetHalfHeight");

	Params::UAudioShapeCylinderComponent_SetHalfHeight_Params Parms;

	Parms.InHalfHeight = InHalfHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioShapes.AudioShapeLineComponent.SetStartPoint
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InStartPoint                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeLineComponent::SetStartPoint(struct FVector& InStartPoint)
{
	static auto Func = Class->GetFunction("AudioShapeLineComponent", "SetStartPoint");

	Params::UAudioShapeLineComponent_SetStartPoint_Params Parms;

	Parms.InStartPoint = InStartPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioShapes.AudioShapeLineComponent.SetEndPoint
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InEndPoint                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeLineComponent::SetEndPoint(struct FVector& InEndPoint)
{
	static auto Func = Class->GetFunction("AudioShapeLineComponent", "SetEndPoint");

	Params::UAudioShapeLineComponent_SetEndPoint_Params Parms;

	Parms.InEndPoint = InEndPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioShapes.AudioShapeLineListComponent.UpdatePoint
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InPoint                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioShapeLineListComponent::UpdatePoint(int32 InIndex, struct FVector& InPoint)
{
	static auto Func = Class->GetFunction("AudioShapeLineListComponent", "UpdatePoint");

	Params::UAudioShapeLineListComponent_UpdatePoint_Params Parms;

	Parms.InIndex = InIndex;
	Parms.InPoint = InPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioShapes.AudioShapeLineListComponent.RemovePoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioShapeLineListComponent::RemovePoint(int32 InIndex)
{
	static auto Func = Class->GetFunction("AudioShapeLineListComponent", "RemovePoint");

	Params::UAudioShapeLineListComponent_RemovePoint_Params Parms;

	Parms.InIndex = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioShapes.AudioShapeLineListComponent.GetPoints
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutPoints                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAudioShapeLineListComponent::GetPoints(TArray<struct FVector>* OutPoints)
{
	static auto Func = Class->GetFunction("AudioShapeLineListComponent", "GetPoints");

	Params::UAudioShapeLineListComponent_GetPoints_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPoints != nullptr)
		*OutPoints = Parms.OutPoints;

}


// Function AudioShapes.AudioShapeLineListComponent.AddPoint
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InPoint                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAudioShapeLineListComponent::AddPoint(struct FVector& InPoint)
{
	static auto Func = Class->GetFunction("AudioShapeLineListComponent", "AddPoint");

	Params::UAudioShapeLineListComponent_AddPoint_Params Parms;

	Parms.InPoint = InPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioShapes.AudioShapeSphereComponent.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioShapeSphereComponent::SetRadius(float InRadius)
{
	static auto Func = Class->GetFunction("AudioShapeSphereComponent", "SetRadius");

	Params::UAudioShapeSphereComponent_SetRadius_Params Parms;

	Parms.InRadius = InRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
