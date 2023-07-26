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


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// (Final, Native, Public)
// Parameters:
// bool                               bWorldIn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static auto Func = Class->GetFunction("GizmoBaseComponent", "UpdateWorldLocalState");

	Params::UGizmoBaseComponent_UpdateWorldLocalState_Params Parms;

	Parms.bWorldIn = bWorldIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (Final, Native, Public)
// Parameters:
// bool                               bHoveringIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static auto Func = Class->GetFunction("GizmoBaseComponent", "UpdateHoverState");

	Params::UGizmoBaseComponent_UpdateHoverState_Params Parms;

	Parms.bHoveringIn = bHoveringIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoTransformSource::SetTransform(struct FTransform& NewTransform)
{
	static auto Func = Class->GetFunction("GizmoTransformSource", "SetTransform");

	Params::UGizmoTransformSource_SetTransform_Params Parms;

	Parms.NewTransform = NewTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UGizmoTransformSource::GetTransform()
{
	static auto Func = Class->GetFunction("GizmoTransformSource", "GetTransform");

	Params::UGizmoTransformSource_GetTransform_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGizmoAxisSource::HasTangentVectors()
{
	static auto Func = Class->GetFunction("GizmoAxisSource", "HasTangentVectors");

	Params::UGizmoAxisSource_HasTangentVectors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (Native, Public, HasOutParams, HasDefaults, Const)
// Parameters:
// struct FVector                     TangentXOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TangentYOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static auto Func = Class->GetFunction("GizmoAxisSource", "GetTangentVectors");

	Params::UGizmoAxisSource_GetTangentVectors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TangentXOut != nullptr)
		*TangentXOut = Parms.TangentXOut;

	if (TangentYOut != nullptr)
		*TangentYOut = Parms.TangentYOut;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UGizmoAxisSource::GetOrigin()
{
	static auto Func = Class->GetFunction("GizmoAxisSource", "GetOrigin");

	Params::UGizmoAxisSource_GetOrigin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UGizmoAxisSource::GetDirection()
{
	static auto Func = Class->GetFunction("GizmoAxisSource", "GetDirection");

	Params::UGizmoAxisSource_GetDirection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState
// (Native, Public)
// Parameters:
// bool                               bInteracting                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoClickTarget::UpdateInteractingState(bool bInteracting)
{
	static auto Func = Class->GetFunction("GizmoClickTarget", "UpdateInteractingState");

	Params::UGizmoClickTarget_UpdateInteractingState_Params Parms;

	Parms.bInteracting = bInteracting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (Native, Public)
// Parameters:
// bool                               bHovering                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static auto Func = Class->GetFunction("GizmoClickTarget", "UpdateHoverState");

	Params::UGizmoClickTarget_UpdateHoverState_Params Parms;

	Parms.bHovering = bHovering;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState
// (Native, Public)
// Parameters:
// bool                               bInteracting                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InPartIdentifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoClickMultiTarget::UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier)
{
	static auto Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateInteractingState");

	Params::UGizmoClickMultiTarget_UpdateInteractingState_Params Parms;

	Parms.bInteracting = bInteracting;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState
// (Native, Public)
// Parameters:
// bool                               bHovering                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InPartIdentifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoClickMultiTarget::UpdateHoverState(bool bHovering, uint32 InPartIdentifier)
{
	static auto Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateHoverState");

	Params::UGizmoClickMultiTarget_UpdateHoverState_Params Parms;

	Parms.bHovering = bHovering;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState
// (Native, Public)
// Parameters:
// bool                               bHittable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InPartIdentifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoClickMultiTarget::UpdateHittableState(bool bHittable, uint32 InPartIdentifier)
{
	static auto Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateHittableState");

	Params::UGizmoClickMultiTarget_UpdateHittableState_Params Parms;

	Parms.bHittable = bHittable;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState
// (Native, Public)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InPartIdentifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoRenderMultiTarget::UpdateVisibilityState(bool bVisible, uint32 InPartIdentifier)
{
	static auto Func = Class->GetFunction("GizmoRenderMultiTarget", "UpdateVisibilityState");

	Params::UGizmoRenderMultiTarget_UpdateVisibilityState_Params Parms;

	Parms.bVisible = bVisible;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (Native, Public)
// Parameters:

void UGizmoStateTarget::EndUpdate()
{
	static auto Func = Class->GetFunction("GizmoStateTarget", "EndUpdate");

	Params::UGizmoStateTarget_EndUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (Native, Public)
// Parameters:

void UGizmoStateTarget::BeginUpdate()
{
	static auto Func = Class->GetFunction("GizmoStateTarget", "BeginUpdate");

	Params::UGizmoStateTarget_BeginUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static auto Func = Class->GetFunction("GizmoFloatParameterSource", "SetParameter");

	Params::UGizmoFloatParameterSource_SetParameter_Params Parms;

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGizmoFloatParameterSource::GetParameter()
{
	static auto Func = Class->GetFunction("GizmoFloatParameterSource", "GetParameter");

	Params::UGizmoFloatParameterSource_GetParameter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (Native, Public)
// Parameters:

void UGizmoFloatParameterSource::EndModify()
{
	static auto Func = Class->GetFunction("GizmoFloatParameterSource", "EndModify");

	Params::UGizmoFloatParameterSource_EndModify_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (Native, Public)
// Parameters:

void UGizmoFloatParameterSource::BeginModify()
{
	static auto Func = Class->GetFunction("GizmoFloatParameterSource", "BeginModify");

	Params::UGizmoFloatParameterSource_BeginModify_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                   NewValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoVec2ParameterSource::SetParameter(struct FVector2D& NewValue)
{
	static auto Func = Class->GetFunction("GizmoVec2ParameterSource", "SetParameter");

	Params::UGizmoVec2ParameterSource_SetParameter_Params Parms;

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UGizmoVec2ParameterSource::GetParameter()
{
	static auto Func = Class->GetFunction("GizmoVec2ParameterSource", "GetParameter");

	Params::UGizmoVec2ParameterSource_GetParameter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (Native, Public)
// Parameters:

void UGizmoVec2ParameterSource::EndModify()
{
	static auto Func = Class->GetFunction("GizmoVec2ParameterSource", "EndModify");

	Params::UGizmoVec2ParameterSource_EndModify_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (Native, Public)
// Parameters:

void UGizmoVec2ParameterSource::BeginModify()
{
	static auto Func = Class->GetFunction("GizmoVec2ParameterSource", "BeginModify");

	Params::UGizmoVec2ParameterSource_BeginModify_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
