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


// Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo)
{
	static auto Func = Class->GetFunction("RigHierarchy", "UnsetCurveValueByIndex");

	Params::URigHierarchy_UnsetCurveValueByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.UnsetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::UnsetCurveValue(const struct FRigElementKey& InKey, bool bSetupUndo)
{
	static auto Func = Class->GetFunction("RigHierarchy", "UnsetCurveValue");

	Params::URigHierarchy_UnsetCurveValue_Params Parms;

	Parms.InKey = InKey;
	Parms.bSetupUndo = bSetupUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SwitchToWorldSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SwitchToWorldSpace");

	Params::URigHierarchy_SwitchToWorldSpace_Params Parms;

	Parms.InChild = InChild;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SwitchToParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SwitchToParent");

	Params::URigHierarchy_SwitchToParent_Params Parms;

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SwitchToDefaultParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SwitchToDefaultParent");

	Params::URigHierarchy_SwitchToDefaultParent_Params Parms;

	Parms.InChild = InChild;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SortKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::SortKeys(TArray<struct FRigElementKey>& InKeys)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SortKeys");

	Params::URigHierarchy_SortKeys_Params Parms;

	Parms.InKeys = InKeys;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetVectorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetVectorMetadata");

	Params::URigHierarchy_SetVectorMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetVectorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FVector>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetVectorArrayMetadata");

	Params::URigHierarchy_SetVectorArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTransformMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InValue                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetTransformMetadata");

	Params::URigHierarchy_SetTransformMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTransformArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FTransform>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetTransformArrayMetadata");

	Params::URigHierarchy_SetTransformArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetTag(const struct FRigElementKey& InItem, class FName InTag)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetTag");

	Params::URigHierarchy_SetTag_Params Parms;

	Parms.InItem = InItem;
	Parms.InTag = InTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRotatorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetRotatorMetadata");

	Params::URigHierarchy_SetRotatorMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRotator>            InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRotator>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetRotatorArrayMetadata");

	Params::URigHierarchy_SetRotatorArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InValue                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyMetadata");

	Params::URigHierarchy_SetRigElementKeyMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRigElementKey>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyArrayMetadata");

	Params::URigHierarchy_SetRigElementKeyArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetQuatMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetQuatMetadata");

	Params::URigHierarchy_SetQuatMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetQuatArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>               InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FQuat>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetQuatArrayMetadata");

	Params::URigHierarchy_SetQuatArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigPose                    InPose                                                           (Parm, NativeAccessSpecifierPublic)

void URigHierarchy::SetPose_ForBlueprint(const struct FRigPose& InPose)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetPose_ForBlueprint");

	Params::URigHierarchy_SetPose_ForBlueprint_Params Parms;

	Parms.InPose = InPose;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetParentWeightArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementWeight>   InWeights                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool bInitial, bool bAffectChildren)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetParentWeightArray");

	Params::URigHierarchy_SetParentWeightArray_Params Parms;

	Parms.InChild = InChild;
	Parms.InWeights = InWeights;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetParentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementWeight           InWeight                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetParentWeight");

	Params::URigHierarchy_SetParentWeight_Params Parms;

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.InWeight = InWeight;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetNameMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetNameMetadata");

	Params::URigHierarchy_SetNameMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetNameArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetNameArrayMetadata");

	Params::URigHierarchy_SetNameArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetLocalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetLocalTransformByIndex");

	Params::URigHierarchy_SetLocalTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetLocalTransform");

	Params::URigHierarchy_SetLocalTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetLinearColorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetLinearColorMetadata");

	Params::URigHierarchy_SetLinearColorMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FLinearColor>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetLinearColorArrayMetadata");

	Params::URigHierarchy_SetLinearColorArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetInt32Metadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetInt32Metadata");

	Params::URigHierarchy_SetInt32Metadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<int32>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetInt32ArrayMetadata");

	Params::URigHierarchy_SetInt32ArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetGlobalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetGlobalTransformByIndex");

	Params::URigHierarchy_SetGlobalTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetGlobalTransform");

	Params::URigHierarchy_SetGlobalTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetFloatMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetFloatMetadata");

	Params::URigHierarchy_SetFloatMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetFloatArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<float>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetFloatArrayMetadata");

	Params::URigHierarchy_SetFloatArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetCurveValueByIndex");

	Params::URigHierarchy_SetCurveValueByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetCurveValue");

	Params::URigHierarchy_SetCurveValue_Params Parms;

	Parms.InKey = InKey;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisibility                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlVisibilityByIndex");

	Params::URigHierarchy_SetControlVisibilityByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bVisibility = bVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisibility                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlVisibility");

	Params::URigHierarchy_SetControlVisibility_Params Parms;

	Parms.InKey = InKey;
	Parms.bVisibility = bVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ERigControlValueType    InValueType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlValueByIndex(int32 InElementIndex, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlValueByIndex");

	Params::URigHierarchy_SetControlValueByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = InValue;
	Parms.InValueType = InValueType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ERigControlValueType    InValueType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlValue");

	Params::URigHierarchy_SetControlValue_Params Parms;

	Parms.InKey = InKey;
	Parms.InValue = InValue;
	Parms.InValueType = InValueType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlShapeTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransformByIndex");

	Params::URigHierarchy_SetControlShapeTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bSetupUndo = bSetupUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransform");

	Params::URigHierarchy_SetControlShapeTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bSetupUndo = bSetupUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlSettings         InSettings                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlSettingsByIndex");

	Params::URigHierarchy_SetControlSettingsByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bForce = bForce;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlSettings         InSettings                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlSettings");

	Params::URigHierarchy_SetControlSettings_Params Parms;

	Parms.InKey = InKey;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bForce = bForce;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFixEulerFlips                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlPreferredRotatorByIndex(int32 InElementIndex, struct FRotator& InValue, bool bInitial, bool bFixEulerFlips)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotatorByIndex");

	Params::URigHierarchy_SetControlPreferredRotatorByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = InValue;
	Parms.bInitial = bInitial;
	Parms.bFixEulerFlips = bFixEulerFlips;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlPreferredRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFixEulerFlips                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlPreferredRotator(const struct FRigElementKey& InKey, struct FRotator& InValue, bool bInitial, bool bFixEulerFlips)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotator");

	Params::URigHierarchy_SetControlPreferredRotator_Params Parms;

	Parms.InKey = InKey;
	Parms.InValue = InValue;
	Parms.bInitial = bInitial;
	Parms.bFixEulerFlips = bFixEulerFlips;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlOffsetTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransformByIndex");

	Params::URigHierarchy_SetControlOffsetTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAffectChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransform");

	Params::URigHierarchy_SetControlOffsetTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.SetBoolMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetBoolMetadata");

	Params::URigHierarchy_SetBoolMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SetBoolArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       InValue                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::SetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<bool>& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SetBoolArrayMetadata");

	Params::URigHierarchy_SetBoolArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.SendAutoKeyEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InOffsetInSeconds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAsynchronous                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous)
{
	static auto Func = Class->GetFunction("RigHierarchy", "SendAutoKeyEvent");

	Params::URigHierarchy_SendAutoKeyEvent_Params Parms;

	Parms.InElement = InElement;
	Parms.InOffsetInSeconds = InOffsetInSeconds;
	Parms.bAsynchronous = bAsynchronous;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::ResetToDefault()
{
	static auto Func = Class->GetFunction("RigHierarchy", "ResetToDefault");

	Params::URigHierarchy_ResetToDefault_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.ResetPoseToInitial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERigElementType         InTypeFilter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::ResetPoseToInitial(enum class ERigElementType InTypeFilter)
{
	static auto Func = Class->GetFunction("RigHierarchy", "ResetPoseToInitial");

	Params::URigHierarchy_ResetPoseToInitial_Params Parms;

	Parms.InTypeFilter = InTypeFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.ResetCurveValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::ResetCurveValues()
{
	static auto Func = Class->GetFunction("RigHierarchy", "ResetCurveValues");

	Params::URigHierarchy_ResetCurveValues_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::Reset()
{
	static auto Func = Class->GetFunction("RigHierarchy", "Reset");

	Params::URigHierarchy_Reset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.RemoveMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::RemoveMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "RemoveMetadata");

	Params::URigHierarchy_RemoveMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.RemoveAllMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::RemoveAllMetadata(const struct FRigElementKey& InItem)
{
	static auto Func = Class->GetFunction("RigHierarchy", "RemoveAllMetadata");

	Params::URigHierarchy_RemoveAllMetadata_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigHierarchy::Num()
{
	static auto Func = Class->GetFunction("RigHierarchy", "Num");

	Params::URigHierarchy_Num_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromVector2D(const struct FVector2D& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromVector2D");

	Params::URigHierarchy_MakeControlValueFromVector2D_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromVector(const struct FVector& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromVector");

	Params::URigHierarchy_MakeControlValueFromVector_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTransformNoScale           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromTransformNoScale");

	Params::URigHierarchy_MakeControlValueFromTransformNoScale_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InValue                                                          (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromTransform(const struct FTransform& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromTransform");

	Params::URigHierarchy_MakeControlValueFromTransform_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromRotator(const struct FRotator& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromRotator");

	Params::URigHierarchy_MakeControlValueFromRotator_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromInt(int32 InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromInt");

	Params::URigHierarchy_MakeControlValueFromInt_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromFloat(float InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromFloat");

	Params::URigHierarchy_MakeControlValueFromFloat_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FEulerTransform             InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromEulerTransform");

	Params::URigHierarchy_MakeControlValueFromEulerTransform_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::MakeControlValueFromBool(bool InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromBool");

	Params::URigHierarchy_MakeControlValueFromBool_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsValidIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::IsValidIndex(int32 InElementIndex)
{
	static auto Func = Class->GetFunction("RigHierarchy", "IsValidIndex");

	Params::URigHierarchy_IsValidIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsSelectedByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::IsSelectedByIndex(int32 InIndex)
{
	static auto Func = Class->GetFunction("RigHierarchy", "IsSelectedByIndex");

	Params::URigHierarchy_IsSelectedByIndex_Params Parms;

	Parms.InIndex = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::IsSelected(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "IsSelected");

	Params::URigHierarchy_IsSelected_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsProcedural
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::IsProcedural(struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "IsProcedural");

	Params::URigHierarchy_IsProcedural_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsParentedTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent)
{
	static auto Func = Class->GetFunction("RigHierarchy", "IsParentedTo");

	Params::URigHierarchy_IsParentedTo_Params Parms;

	Parms.InChild = InChild;
	Parms.InParent = InParent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::IsCurveValueSetByIndex(int32 InElementIndex)
{
	static auto Func = Class->GetFunction("RigHierarchy", "IsCurveValueSetByIndex");

	Params::URigHierarchy_IsCurveValueSetByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsCurveValueSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::IsCurveValueSet(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "IsCurveValueSet");

	Params::URigHierarchy_IsCurveValueSet_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.IsControllerAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::IsControllerAvailable()
{
	static auto Func = Class->GetFunction("RigHierarchy", "IsControllerAvailable");

	Params::URigHierarchy_IsControllerAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.HasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::HasTag(const struct FRigElementKey& InItem, class FName InTag)
{
	static auto Func = Class->GetFunction("RigHierarchy", "HasTag");

	Params::URigHierarchy_HasTag_Params Parms;

	Parms.InItem = InItem;
	Parms.InTag = InTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVectorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector URigHierarchy::GetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetVectorMetadata");

	Params::URigHierarchy_GetVectorMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVectorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector URigHierarchy::GetVectorFromControlValue(const struct FRigControlValue& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetVectorFromControlValue");

	Params::URigHierarchy_GetVectorFromControlValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVectorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> URigHierarchy::GetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetVectorArrayMetadata");

	Params::URigHierarchy_GetVectorArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D URigHierarchy::GetVector2DFromControlValue(const struct FRigControlValue& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetVector2DFromControlValue");

	Params::URigHierarchy_GetVector2DFromControlValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransformNoScale           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTransformNoScale URigHierarchy::GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetTransformNoScaleFromControlValue");

	Params::URigHierarchy_GetTransformNoScaleFromControlValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  DefaultValue                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetTransformMetadata");

	Params::URigHierarchy_GetTransformMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetTransformFromControlValue(const struct FRigControlValue& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetTransformFromControlValue");

	Params::URigHierarchy_GetTransformFromControlValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTransformArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTransform> URigHierarchy::GetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetTransformArrayMetadata");

	Params::URigHierarchy_GetTransformArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> URigHierarchy::GetTags(const struct FRigElementKey& InItem)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetTags");

	Params::URigHierarchy_GetTags_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetSelectedKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERigElementType         InTypeFilter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetSelectedKeys(enum class ERigElementType InTypeFilter)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetSelectedKeys");

	Params::URigHierarchy_GetSelectedKeys_Params Parms;

	Parms.InTypeFilter = InTypeFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRotatorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator URigHierarchy::GetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetRotatorMetadata");

	Params::URigHierarchy_GetRotatorMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator URigHierarchy::GetRotatorFromControlValue(const struct FRigControlValue& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetRotatorFromControlValue");

	Params::URigHierarchy_GetRotatorFromControlValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRotator>            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRotator> URigHierarchy::GetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetRotatorArrayMetadata");

	Params::URigHierarchy_GetRotatorArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRootElementKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetRootElementKeys()
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetRootElementKeys");

	Params::URigHierarchy_GetRootElementKeys_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRigidBodyKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetRigidBodyKeys(bool bTraverse)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetRigidBodyKeys");

	Params::URigHierarchy_GetRigidBodyKeys_Params Parms;

	Parms.bTraverse = bTraverse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              DefaultValue                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchy::GetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyMetadata");

	Params::URigHierarchy_GetRigElementKeyMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyArrayMetadata");

	Params::URigHierarchy_GetRigElementKeyArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetReferenceKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetReferenceKeys(bool bTraverse)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetReferenceKeys");

	Params::URigHierarchy_GetReferenceKeys_Params Parms;

	Parms.bTraverse = bTraverse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetQuatMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       DefaultValue                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQuat URigHierarchy::GetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetQuatMetadata");

	Params::URigHierarchy_GetQuatMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetQuatArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FQuat> URigHierarchy::GetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetQuatArrayMetadata");

	Params::URigHierarchy_GetQuatArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetPreviousParent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchy::GetPreviousParent(struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetPreviousParent");

	Params::URigHierarchy_GetPreviousParent_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetPreviousName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URigHierarchy::GetPreviousName(struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetPreviousName");

	Params::URigHierarchy_GetPreviousName_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetPose
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigPose                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FRigPose URigHierarchy::GetPose(bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetPose");

	Params::URigHierarchy_GetPose_Params Parms;

	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentWeightArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementWeight>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementWeight> URigHierarchy::GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetParentWeightArray");

	Params::URigHierarchy_GetParentWeightArray_Params Parms;

	Parms.InChild = InChild;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementWeight           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigElementWeight URigHierarchy::GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetParentWeight");

	Params::URigHierarchy_GetParentWeight_Params Parms;

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetParentTransformByIndex(int32 InElementIndex, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetParentTransformByIndex");

	Params::URigHierarchy_GetParentTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParentTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetParentTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetParentTransform");

	Params::URigHierarchy_GetParentTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRecursive                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetParents(const struct FRigElementKey& InKey, bool bRecursive)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetParents");

	Params::URigHierarchy_GetParents_Params Parms;

	Parms.InKey = InKey;
	Parms.bRecursive = bRecursive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetNumberOfParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigHierarchy::GetNumberOfParents(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetNumberOfParents");

	Params::URigHierarchy_GetNumberOfParents_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetNullKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetNullKeys(bool bTraverse)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetNullKeys");

	Params::URigHierarchy_GetNullKeys_Params Parms;

	Parms.bTraverse = bTraverse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetNameMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URigHierarchy::GetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetNameMetadata");

	Params::URigHierarchy_GetNameMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetNameArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> URigHierarchy::GetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetNameArrayMetadata");

	Params::URigHierarchy_GetNameArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetMetadataType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERigMetadataType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERigMetadataType URigHierarchy::GetMetadataType(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetMetadataType");

	Params::URigHierarchy_GetMetadataType_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetMetadataNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> URigHierarchy::GetMetadataNames(const struct FRigElementKey& InItem)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetMetadataNames");

	Params::URigHierarchy_GetMetadataNames_Params Parms;

	Parms.InItem = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetLocalTransformByIndex(int32 InElementIndex, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetLocalTransformByIndex");

	Params::URigHierarchy_GetLocalTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetLocalTransform");

	Params::URigHierarchy_GetLocalTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigHierarchy::GetLocalIndex_ForBlueprint(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetLocalIndex_ForBlueprint");

	Params::URigHierarchy_GetLocalIndex_ForBlueprint_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransformByIndex");

	Params::URigHierarchy_GetLocalControlShapeTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetLocalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransform");

	Params::URigHierarchy_GetLocalControlShapeTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLinearColorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor URigHierarchy::GetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetLinearColorMetadata");

	Params::URigHierarchy_GetLinearColorMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLinearColor> URigHierarchy::GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetLinearColorArrayMetadata");

	Params::URigHierarchy_GetLinearColorArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      InElementIndices                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetKeys(const TArray<int32>& InElementIndices)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetKeys");

	Params::URigHierarchy_GetKeys_Params Parms;

	Parms.InElementIndices = InElementIndices;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchy::GetKey(int32 InElementIndex)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetKey");

	Params::URigHierarchy_GetKey_Params Parms;

	Parms.InElementIndex = InElementIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetIntFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigHierarchy::GetIntFromControlValue(const struct FRigControlValue& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetIntFromControlValue");

	Params::URigHierarchy_GetIntFromControlValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetInt32Metadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigHierarchy::GetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetInt32Metadata");

	Params::URigHierarchy_GetInt32Metadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> URigHierarchy::GetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetInt32ArrayMetadata");

	Params::URigHierarchy_GetInt32ArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigHierarchy::GetIndex_ForBlueprint(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetIndex_ForBlueprint");

	Params::URigHierarchy_GetIndex_ForBlueprint_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetGlobalTransformByIndex");

	Params::URigHierarchy_GetGlobalTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetGlobalTransform");

	Params::URigHierarchy_GetGlobalTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransformByIndex");

	Params::URigHierarchy_GetGlobalControlShapeTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransform");

	Params::URigHierarchy_GetGlobalControlShapeTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransformByIndex");

	Params::URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform URigHierarchy::GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransform");

	Params::URigHierarchy_GetGlobalControlOffsetTransform_Params Parms;

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFloatMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URigHierarchy::GetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetFloatMetadata");

	Params::URigHierarchy_GetFloatMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFloatFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URigHierarchy::GetFloatFromControlValue(const struct FRigControlValue& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetFloatFromControlValue");

	Params::URigHierarchy_GetFloatFromControlValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFloatArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> URigHierarchy::GetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetFloatArrayMetadata");

	Params::URigHierarchy_GetFloatArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetFirstParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchy::GetFirstParent(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetFirstParent");

	Params::URigHierarchy_GetFirstParent_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FEulerTransform             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FEulerTransform URigHierarchy::GetEulerTransformFromControlValue(const struct FRigControlValue& InValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetEulerTransformFromControlValue");

	Params::URigHierarchy_GetEulerTransformFromControlValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetDefaultParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchy::GetDefaultParent(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetDefaultParent");

	Params::URigHierarchy_GetDefaultParent_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URigHierarchy::GetCurveValueByIndex(int32 InElementIndex)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetCurveValueByIndex");

	Params::URigHierarchy_GetCurveValueByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URigHierarchy::GetCurveValue(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetCurveValue");

	Params::URigHierarchy_GetCurveValue_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetCurveKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetCurveKeys()
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetCurveKeys");

	Params::URigHierarchy_GetCurveKeys_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERigControlValueType    InValueType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::GetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetControlValueByIndex");

	Params::URigHierarchy_GetControlValueByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.InValueType = InValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERigControlValueType    InValueType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRigControlValue URigHierarchy::GetControlValue(const struct FRigElementKey& InKey, enum class ERigControlValueType InValueType)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetControlValue");

	Params::URigHierarchy_GetControlValue_Params Parms;

	Parms.InKey = InKey;
	Parms.InValueType = InValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator URigHierarchy::GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotatorByIndex");

	Params::URigHierarchy_GetControlPreferredRotatorByIndex_Params Parms;

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlPreferredRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator URigHierarchy::GetControlPreferredRotator(const struct FRigElementKey& InKey, bool bInitial)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotator");

	Params::URigHierarchy_GetControlPreferredRotator_Params Parms;

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCreateIfNeeded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URigHierarchyController*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URigHierarchyController* URigHierarchy::GetController(bool bCreateIfNeeded)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetController");

	Params::URigHierarchy_GetController_Params Parms;

	Parms.bCreateIfNeeded = bCreateIfNeeded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetControlKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetControlKeys(bool bTraverse)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetControlKeys");

	Params::URigHierarchy_GetControlKeys_Params Parms;

	Parms.bTraverse = bTraverse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRecursive                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetChildren(const struct FRigElementKey& InKey, bool bRecursive)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetChildren");

	Params::URigHierarchy_GetChildren_Params Parms;

	Parms.InKey = InKey;
	Parms.bRecursive = bRecursive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetBoolMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::GetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool DefaultValue)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetBoolMetadata");

	Params::URigHierarchy_GetBoolMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetBoolArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMetadataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<bool> URigHierarchy::GetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetBoolArrayMetadata");

	Params::URigHierarchy_GetBoolArrayMetadata_Params Parms;

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetBoneKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetBoneKeys(bool bTraverse)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetBoneKeys");

	Params::URigHierarchy_GetBoneKeys_Params Parms;

	Parms.bTraverse = bTraverse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse)
{
	static auto Func = Class->GetFunction("RigHierarchy", "GetAllKeys_ForBlueprint");

	Params::URigHierarchy_GetAllKeys_ForBlueprint_Params Parms;

	Parms.bTraverse = bTraverse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigNullElement             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FRigNullElement URigHierarchy::FindNull_ForBlueprintOnly(struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "FindNull_ForBlueprintOnly");

	Params::URigHierarchy_FindNull_ForBlueprintOnly_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlElement          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FRigControlElement URigHierarchy::FindControl_ForBlueprintOnly(struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "FindControl_ForBlueprintOnly");

	Params::URigHierarchy_FindControl_ForBlueprintOnly_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigBoneElement             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FRigBoneElement URigHierarchy::FindBone_ForBlueprintOnly(struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "FindBone_ForBlueprintOnly");

	Params::URigHierarchy_FindBone_ForBlueprintOnly_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchy.CopyPose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCurrent                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitial                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeights                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchPoseInGlobalIfNeeded                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded)
{
	static auto Func = Class->GetFunction("RigHierarchy", "CopyPose");

	Params::URigHierarchy_CopyPose_Params Parms;

	Parms.InHierarchy = InHierarchy;
	Parms.bCurrent = bCurrent;
	Parms.bInitial = bInitial;
	Parms.bWeights = bWeights;
	Parms.bMatchPoseInGlobalIfNeeded = bMatchPoseInGlobalIfNeeded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.CopyHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchy::CopyHierarchy(class URigHierarchy* InHierarchy)
{
	static auto Func = Class->GetFunction("RigHierarchy", "CopyHierarchy");

	Params::URigHierarchy_CopyHierarchy_Params Parms;

	Parms.InHierarchy = InHierarchy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchy.Contains_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchy::Contains_ForBlueprint(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchy", "Contains_ForBlueprint");

	Params::URigHierarchy_Contains_ForBlueprint_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.SetInteractionRigClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UControlRig>     InInteractionRigClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRig::SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass)
{
	static auto Func = Class->GetFunction("ControlRig", "SetInteractionRigClass");

	Params::UControlRig_SetInteractionRigClass_Params Parms;

	Parms.InInteractionRigClass = InInteractionRigClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRig.SetInteractionRig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InInteractionRig                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRig::SetInteractionRig(class UControlRig* InInteractionRig)
{
	static auto Func = Class->GetFunction("ControlRig", "SetInteractionRig");

	Params::UControlRig_SetInteractionRig_Params Parms;

	Parms.InInteractionRig = InInteractionRig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRig.SelectControl
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InControlName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelect                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRig::SelectControl(class FName& InControlName, bool bSelect)
{
	static auto Func = Class->GetFunction("ControlRig", "SelectControl");

	Params::UControlRig_SelectControl_Params Parms;

	Parms.InControlName = InControlName;
	Parms.bSelect = bSelect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRig.RequestConstruction
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRig::RequestConstruction()
{
	static auto Func = Class->GetFunction("ControlRig", "RequestConstruction");

	Params::UControlRig_RequestConstruction_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UControlRig*                 Rig                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlElement          Control                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRig::OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, struct FRigControlElement& Control, bool bSelected)
{
	static auto Func = Class->GetFunction("ControlRig", "OnControlSelectedBP__DelegateSignature");

	Params::UControlRig_OnControlSelectedBP__DelegateSignature_Params Parms;

	Parms.Rig = Rig;
	Parms.Control = Control;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRig.IsControlSelected
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InControlName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRig::IsControlSelected(class FName& InControlName)
{
	static auto Func = Class->GetFunction("ControlRig", "IsControlSelected");

	Params::UControlRig_IsControlSelected_Params Parms;

	Parms.InControlName = InControlName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetInteractionRigClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UControlRig>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UControlRig> UControlRig::GetInteractionRigClass()
{
	static auto Func = Class->GetFunction("ControlRig", "GetInteractionRigClass");

	Params::UControlRig_GetInteractionRigClass_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetInteractionRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UControlRig* UControlRig::GetInteractionRig()
{
	static auto Func = Class->GetFunction("ControlRig", "GetInteractionRig");

	Params::UControlRig_GetInteractionRig_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetHostingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UControlRig::GetHostingActor()
{
	static auto Func = Class->GetFunction("ControlRig", "GetHostingActor");

	Params::UControlRig_GetHostingActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigHierarchy*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URigHierarchy* UControlRig::GetHierarchy()
{
	static auto Func = Class->GetFunction("ControlRig", "GetHierarchy");

	Params::UControlRig_GetHierarchy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.FindControlRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UControlRig>     OptionalClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UControlRig*>         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UControlRig*> UControlRig::FindControlRigs(class UObject* Outer, TSubclassOf<class UControlRig> OptionalClass)
{
	static auto Func = Class->GetFunction("ControlRig", "FindControlRigs");

	Params::UControlRig_FindControlRigs_Params Parms;

	Parms.Outer = Outer;
	Parms.OptionalClass = OptionalClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.CurrentControlSelection
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UControlRig::CurrentControlSelection()
{
	static auto Func = Class->GetFunction("ControlRig", "CurrentControlSelection");

	Params::UControlRig_CurrentControlSelection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.CreateTransformableControlHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTransformableControlHandle* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTransformableControlHandle* UControlRig::CreateTransformableControlHandle(class UObject* Outer, class FName& ControlName)
{
	static auto Func = Class->GetFunction("ControlRig", "CreateTransformableControlHandle");

	Params::UControlRig_CreateTransformableControlHandle_Params Parms;

	Parms.Outer = Outer;
	Parms.ControlName = ControlName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.ClearControlSelection
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRig::ClearControlSelection()
{
	static auto Func = Class->GetFunction("ControlRig", "ClearControlSelection");

	Params::UControlRig_ClearControlSelection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::Update(float DeltaTime)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "Update");

	Params::UControlRigComponent_Update_Params Parms;

	Parms.DeltaTime = DeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetObjectBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InObjectToBind                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetObjectBinding(class UObject* InObjectToBind)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetObjectBinding");

	Params::UControlRigComponent_SetObjectBinding_Params Parms;

	Parms.InObjectToBind = InObjectToBind;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement>NewMappedElements                                                (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UControlRigComponent::SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetMappedElements");

	Params::UControlRigComponent_SetMappedElements_Params Parms;

	Parms.NewMappedElements = NewMappedElements;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        SpaceName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InitialTransform                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetInitialSpaceTransform(class FName SpaceName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetInitialSpaceTransform");

	Params::UControlRigComponent_SetInitialSpaceTransform_Params Parms;

	Parms.SpaceName = SpaceName;
	Parms.InitialTransform = InitialTransform;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InitialTransform                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPropagateToChildren                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetInitialBoneTransform(class FName BoneName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetInitialBoneTransform");

	Params::UControlRigComponent_SetInitialBoneTransform_Params Parms;

	Parms.BoneName = BoneName;
	Parms.InitialTransform = InitialTransform;
	Parms.Space = Space;
	Parms.bPropagateToChildren = bPropagateToChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlVector2D(class FName ControlName, const struct FVector2D& Value)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlVector2D");

	Params::UControlRigComponent_SetControlVector2D_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Value                                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlTransform(class FName ControlName, const struct FTransform& Value, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlTransform");

	Params::UControlRigComponent_SetControlTransform_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Value = Value;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlScale(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlScale");

	Params::UControlRigComponent_SetControlScale_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Value = Value;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlRotator(class FName ControlName, const struct FRotator& Value, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlRotator");

	Params::UControlRigComponent_SetControlRotator_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Value = Value;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlRigClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UControlRig>     InControlRigClass                                                (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlRigClass(TSubclassOf<class UControlRig> InControlRigClass)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlRigClass");

	Params::UControlRigComponent_SetControlRigClass_Params Parms;

	Parms.InControlRigClass = InControlRigClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlPosition(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlPosition");

	Params::UControlRigComponent_SetControlPosition_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Value = Value;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  OffsetTransform                                                  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlOffset(class FName ControlName, const struct FTransform& OffsetTransform, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlOffset");

	Params::UControlRigComponent_SetControlOffset_Params Parms;

	Parms.ControlName = ControlName;
	Parms.OffsetTransform = OffsetTransform;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlInt(class FName ControlName, int32 Value)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlInt");

	Params::UControlRigComponent_SetControlInt_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlFloat(class FName ControlName, float Value)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlFloat");

	Params::UControlRigComponent_SetControlFloat_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetControlBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlBool(class FName ControlName, bool Value)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetControlBool");

	Params::UControlRigComponent_SetControlBool_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Weight                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPropagateToChildren                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetBoneTransform(class FName BoneName, const struct FTransform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetBoneTransform");

	Params::UControlRigComponent_SetBoneTransform_Params Parms;

	Parms.BoneName = BoneName;
	Parms.Transform = Transform;
	Parms.Space = Space;
	Parms.Weight = Weight;
	Parms.bPropagateToChildren = bPropagateToChildren;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               InSkeletalMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "SetBoneInitialTransformsFromSkeletalMesh");

	Params::UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params Parms;

	Parms.InSkeletalMesh = InSkeletalMesh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPreInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::OnPreInitialize(class UControlRigComponent* Component)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPreInitialize");

	Params::UControlRigComponent_OnPreInitialize_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::OnPreForwardsSolve(class UControlRigComponent* Component)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPreForwardsSolve");

	Params::UControlRigComponent_OnPreForwardsSolve_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPreConstruction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::OnPreConstruction(class UControlRigComponent* Component)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPreConstruction");

	Params::UControlRigComponent_OnPreConstruction_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::OnPostInitialize(class UControlRigComponent* Component)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPostInitialize");

	Params::UControlRigComponent_OnPostInitialize_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::OnPostForwardsSolve(class UControlRigComponent* Component)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPostForwardsSolve");

	Params::UControlRigComponent_OnPostForwardsSolve_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPostConstruction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::OnPostConstruction(class UControlRigComponent* Component)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPostConstruction");

	Params::UControlRigComponent_OnPostConstruction_Params Parms;

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigComponent::Initialize()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "Initialize");

	Params::UControlRigComponent_Initialize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.GetSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SpaceName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetSpaceTransform");

	Params::UControlRigComponent_GetSpaceTransform_Params Parms;

	Parms.SpaceName = SpaceName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SpaceName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetInitialSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetInitialSpaceTransform");

	Params::UControlRigComponent_GetInitialSpaceTransform_Params Parms;

	Parms.SpaceName = SpaceName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetInitialBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetInitialBoneTransform");

	Params::UControlRigComponent_GetInitialBoneTransform_Params Parms;

	Parms.BoneName = BoneName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetElementNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ERigElementType         ElementType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UControlRigComponent::GetElementNames(enum class ERigElementType ElementType)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetElementNames");

	Params::UControlRigComponent_GetElementNames_Params Parms;

	Parms.ElementType = ElementType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UControlRigComponent::GetControlVector2D(class FName ControlName)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlVector2D");

	Params::UControlRigComponent_GetControlVector2D_Params Parms;

	Parms.ControlName = ControlName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetControlTransform(class FName ControlName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlTransform");

	Params::UControlRigComponent_GetControlTransform_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UControlRigComponent::GetControlScale(class FName ControlName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlScale");

	Params::UControlRigComponent_GetControlScale_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UControlRigComponent::GetControlRotator(class FName ControlName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlRotator");

	Params::UControlRigComponent_GetControlRotator_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UControlRig* UControlRigComponent::GetControlRig()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlRig");

	Params::UControlRigComponent_GetControlRig_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UControlRigComponent::GetControlPosition(class FName ControlName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlPosition");

	Params::UControlRigComponent_GetControlPosition_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetControlOffset(class FName ControlName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlOffset");

	Params::UControlRigComponent_GetControlOffset_Params Parms;

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UControlRigComponent::GetControlInt(class FName ControlName)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlInt");

	Params::UControlRigComponent_GetControlInt_Params Parms;

	Parms.ControlName = ControlName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UControlRigComponent::GetControlFloat(class FName ControlName)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlFloat");

	Params::UControlRigComponent_GetControlFloat_Params Parms;

	Parms.ControlName = ControlName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetControlBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigComponent::GetControlBool(class FName ControlName)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetControlBool");

	Params::UControlRigComponent_GetControlBool_Params Parms;

	Parms.ControlName = ControlName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControlRigComponentSpaceSpace                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetBoneTransform");

	Params::UControlRigComponent_GetBoneTransform_Params Parms;

	Parms.BoneName = BoneName;
	Parms.Space = Space;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UControlRigComponent::GetAbsoluteTime()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "GetAbsoluteTime");

	Params::UControlRigComponent_GetAbsoluteTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.DoesElementExist
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERigElementType         ElementType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigComponent::DoesElementExist(class FName Name, enum class ERigElementType ElementType)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "DoesElementExist");

	Params::UControlRigComponent_DoesElementExist_Params Parms;

	Parms.Name = Name;
	Parms.ElementType = ElementType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.ClearMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigComponent::ClearMappedElements()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "ClearMappedElements");

	Params::UControlRigComponent_ClearMappedElements_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.CanExecute
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigComponent::CanExecute()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "CanExecute");

	Params::UControlRigComponent_CanExecute_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FControlRigComponentMappedBone>Bones                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FControlRigComponentMappedCurve>Curves                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UControlRigComponent::AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "AddMappedSkeletalMesh");

	Params::UControlRigComponent_AddMappedSkeletalMesh_Params Parms;

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Bones = Bones;
	Parms.Curves = Curves;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.AddMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement>NewMappedElements                                                (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UControlRigComponent::AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "AddMappedElements");

	Params::UControlRigComponent_AddMappedElements_Params Parms;

	Parms.NewMappedElements = NewMappedElements;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.AddMappedComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedComponent>Components                                                       (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UControlRigComponent::AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "AddMappedComponents");

	Params::UControlRigComponent_AddMappedComponents_Params Parms;

	Parms.Components = Components;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigComponent::AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto Func = Class->GetFunction("ControlRigComponent", "AddMappedCompleteSkeletalMesh");

	Params::UControlRigComponent_AddMappedCompleteSkeletalMesh_Params Parms;

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigControlActor.ResetControlActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigControlActor::ResetControlActor()
{
	static auto Func = Class->GetFunction("ControlRigControlActor", "ResetControlActor");

	Params::UControlRigControlActor_ResetControlActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigControlActor.Refresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigControlActor::Refresh()
{
	static auto Func = Class->GetFunction("ControlRigControlActor", "Refresh");

	Params::UControlRigControlActor_Refresh_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigControlActor.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigControlActor::Clear()
{
	static auto Func = Class->GetFunction("ControlRigControlActor", "Clear");

	Params::UControlRigControlActor_Clear_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigShapeActor.SetSelected
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::SetSelected(bool bInSelected)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "SetSelected");

	Params::UControlRigShapeActor_SetSelected_Params Parms;

	Parms.bInSelected = bInSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigShapeActor.SetSelectable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSelectable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::SetSelectable(bool bInSelectable)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "SetSelectable");

	Params::UControlRigShapeActor_SetSelectable_Params Parms;

	Parms.bInSelectable = bInSelectable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigShapeActor.SetHovered
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInHovered                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::SetHovered(bool bInHovered)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "SetHovered");

	Params::UControlRigShapeActor_SetHovered_Params Parms;

	Parms.bInHovered = bInHovered;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InTransform                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::SetGlobalTransform(struct FTransform& InTransform)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "SetGlobalTransform");

	Params::UControlRigShapeActor_SetGlobalTransform_Params Parms;

	Parms.InTransform = InTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigShapeActor.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::SetEnabled(bool bInEnabled)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "SetEnabled");

	Params::UControlRigShapeActor_SetEnabled_Params Parms;

	Parms.bInEnabled = bInEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigShapeActor.OnTransformChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::OnTransformChanged(struct FTransform& NewTransform)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "OnTransformChanged");

	Params::UControlRigShapeActor_OnTransformChanged_Params Parms;

	Parms.NewTransform = NewTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::OnSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "OnSelectionChanged");

	Params::UControlRigShapeActor_OnSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsManipulating                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "OnManipulatingChanged");

	Params::UControlRigShapeActor_OnManipulatingChanged_Params Parms;

	Parms.bIsManipulating = bIsManipulating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::OnHoveredChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "OnHoveredChanged");

	Params::UControlRigShapeActor_OnHoveredChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigShapeActor::OnEnabledChanged(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "OnEnabledChanged");

	Params::UControlRigShapeActor_OnEnabledChanged_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigShapeActor::IsSelectedInEditor()
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "IsSelectedInEditor");

	Params::UControlRigShapeActor_IsSelectedInEditor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigShapeActor::IsHovered()
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "IsHovered");

	Params::UControlRigShapeActor_IsHovered_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigShapeActor::IsEnabled()
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "IsEnabled");

	Params::UControlRigShapeActor_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UControlRigShapeActor::GetGlobalTransform()
{
	static auto Func = Class->GetFunction("ControlRigShapeActor", "GetGlobalTransform");

	Params::UControlRigShapeActor_GetGlobalTransform_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.SetupReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGroundTruth                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigTestData::SetupReplay(class UControlRig* InControlRig, bool bGroundTruth)
{
	static auto Func = Class->GetFunction("ControlRigTestData", "SetupReplay");

	Params::UControlRigTestData_SetupReplay_Params Parms;

	Parms.InControlRig = InControlRig;
	Parms.bGroundTruth = bGroundTruth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.ReleaseReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigTestData::ReleaseReplay()
{
	static auto Func = Class->GetFunction("ControlRigTestData", "ReleaseReplay");

	Params::UControlRigTestData_ReleaseReplay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigTestData.Record
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             InRecordingDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigTestData::Record(class UControlRig* InControlRig, double InRecordingDuration)
{
	static auto Func = Class->GetFunction("ControlRigTestData", "Record");

	Params::UControlRigTestData_Record_Params Parms;

	Parms.InControlRig = InControlRig;
	Parms.InRecordingDuration = InRecordingDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.IsReplaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigTestData::IsReplaying()
{
	static auto Func = Class->GetFunction("ControlRigTestData", "IsReplaying");

	Params::UControlRigTestData_IsReplaying_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigTestData::IsRecording()
{
	static auto Func = Class->GetFunction("ControlRigTestData", "IsRecording");

	Params::UControlRigTestData_IsRecording_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.GetTimeRange
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInput                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UControlRigTestData::GetTimeRange(bool bInput)
{
	static auto Func = Class->GetFunction("ControlRigTestData", "GetTimeRange");

	Params::UControlRigTestData_GetTimeRange_Params Parms;

	Parms.bInput = bInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.GetPlaybackMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EControlRigTestDataPlaybackModeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EControlRigTestDataPlaybackMode UControlRigTestData::GetPlaybackMode()
{
	static auto Func = Class->GetFunction("ControlRigTestData", "GetPlaybackMode");

	Params::UControlRigTestData_GetPlaybackMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.GetFrameIndexForTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             InSeconds                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInput                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UControlRigTestData::GetFrameIndexForTime(double InSeconds, bool bInput)
{
	static auto Func = Class->GetFunction("ControlRigTestData", "GetFrameIndexForTime");

	Params::UControlRigTestData_GetFrameIndexForTime_Params Parms;

	Parms.InSeconds = InSeconds;
	Parms.bInput = bInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTestData.CreateNewAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDesiredPackagePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InBlueprintPathName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UControlRigTestData*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UControlRigTestData* UControlRigTestData::CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName)
{
	static auto Func = Class->GetFunction("ControlRigTestData", "CreateNewAsset");

	Params::UControlRigTestData_CreateNewAsset_Params Parms;

	Parms.InDesiredPackagePath = InDesiredPackagePath;
	Parms.InBlueprintPathName = InBlueprintPathName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetSelection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::SetSelection(TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "SetSelection");

	Params::URigHierarchyController_SetSelection_Params Parms;

	Parms.InKeys = InKeys;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMaintainGlobalTransform                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "SetParent");

	Params::URigHierarchyController_SetParent_Params Parms;

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigHierarchyController::SetHierarchy(class URigHierarchy* InHierarchy)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "SetHierarchy");

	Params::URigHierarchyController_SetHierarchy_Params Parms;

	Parms.InHierarchy = InHierarchy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.RigHierarchyController.SetDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InControl                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InDisplayName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRenameElement                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URigHierarchyController::SetDisplayName(const struct FRigElementKey& InControl, class FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "SetDisplayName");

	Params::URigHierarchyController_SetDisplayName_Params Parms;

	Parms.InControl = InControl;
	Parms.InDisplayName = InDisplayName;
	Parms.bRenameElement = bRenameElement;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlSettings         InSettings                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "SetControlSettings");

	Params::URigHierarchyController_SetControlSettings_Params Parms;

	Parms.InKey = InKey;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.SelectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelect                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClearSelection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "SelectElement");

	Params::URigHierarchyController_SelectElement_Params Parms;

	Parms.InKey = InKey;
	Parms.bSelect = bSelect;
	Parms.bClearSelection = bClearSelection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ReorderElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::ReorderElement(const struct FRigElementKey& InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "ReorderElement");

	Params::URigHierarchyController_ReorderElement_Params Parms;

	Parms.InElement = InElement;
	Parms.InIndex = InIndex;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RenameElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClearSelection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchyController::RenameElement(const struct FRigElementKey& InElement, class FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "RenameElement");

	Params::URigHierarchyController_RenameElement_Params Parms;

	Parms.InElement = InElement;
	Parms.InName = InName;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.bClearSelection = bClearSelection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMaintainGlobalTransform                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "RemoveParent");

	Params::URigHierarchyController_RemoveParent_Params Parms;

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "RemoveElement");

	Params::URigHierarchyController_RemoveElement_Params Parms;

	Parms.InElement = InElement;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.RemoveAllParents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMaintainGlobalTransform                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "RemoveAllParents");

	Params::URigHierarchyController_RemoveAllParents_Params Parms;

	Parms.InChild = InChild;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.MirrorElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FRigVMMirrorSettings        InSettings                                                       (Parm, NativeAccessSpecifierPublic)
// bool                               bSelectNewElements                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchyController::MirrorElements(const TArray<struct FRigElementKey>& InKeys, const struct FRigVMMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "MirrorElements");

	Params::URigHierarchyController_MirrorElements_Params Parms;

	Parms.InKeys = InKeys;
	Parms.InSettings = InSettings;
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportFromText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InContent                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplaceExistingElements                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelectNewElements                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchyController::ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "ImportFromText");

	Params::URigHierarchyController_ImportFromText_Params Parms;

	Parms.InContent = InContent;
	Parms.bReplaceExistingElements = bReplaceExistingElements;
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportCurves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*                   InSkeleton                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InNameSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelectCurves                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchyController::ImportCurves(class USkeleton* InSkeleton, class FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "ImportCurves");

	Params::URigHierarchyController_ImportCurves_Params Parms;

	Parms.InSkeleton = InSkeleton;
	Parms.InNameSpace = InNameSpace;
	Parms.bSelectCurves = bSelectCurves;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ImportBones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*                   InSkeleton                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InNameSpace                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplaceExistingBones                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRemoveObsoleteBones                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelectBones                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchyController::ImportBones(class USkeleton* InSkeleton, class FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "ImportBones");

	Params::URigHierarchyController_ImportBones_Params Parms;

	Parms.InSkeleton = InSkeleton;
	Parms.InNameSpace = InNameSpace;
	Parms.bReplaceExistingBones = bReplaceExistingBones;
	Parms.bRemoveObsoleteBones = bRemoveObsoleteBones;
	Parms.bSelectBones = bSelectBones;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URigHierarchy*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URigHierarchy* URigHierarchyController::GetHierarchy()
{
	static auto Func = Class->GetFunction("RigHierarchyController", "GetHierarchy");

	Params::URigHierarchyController_GetHierarchy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.GetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlSettings         ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigControlSettings URigHierarchyController::GetControlSettings(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "GetControlSettings");

	Params::URigHierarchyController_GetControlSettings_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ExportToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URigHierarchyController::ExportToText(const TArray<struct FRigElementKey>& InKeys)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "ExportToText");

	Params::URigHierarchyController_ExportToText_Params Parms;

	Parms.InKeys = InKeys;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ExportSelectionToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URigHierarchyController::ExportSelectionToText()
{
	static auto Func = Class->GetFunction("RigHierarchyController", "ExportSelectionToText");

	Params::URigHierarchyController_ExportSelectionToText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.DuplicateElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bSelectNewElements                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommands                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigElementKey>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRigElementKey> URigHierarchyController::DuplicateElements(const TArray<struct FRigElementKey>& InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "DuplicateElements");

	Params::URigHierarchyController_DuplicateElements_Params Parms;

	Parms.InKeys = InKeys;
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.DeselectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::DeselectElement(const struct FRigElementKey& InKey)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "DeselectElement");

	Params::URigHierarchyController_DeselectElement_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::ClearSelection()
{
	static auto Func = Class->GetFunction("RigHierarchyController", "ClearSelection");

	Params::URigHierarchyController_ClearSelection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddRigidBody
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigRigidBodySettings       InSettings                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  InLocalTransform                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchyController::AddRigidBody(class FName InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "AddRigidBody");

	Params::URigHierarchyController_AddRigidBody_Params Parms;

	Parms.InName = InName;
	Parms.InParent = InParent;
	Parms.InSettings = InSettings;
	Parms.InLocalTransform = InLocalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InWeight                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMaintainGlobalTransform                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigHierarchyController::AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "AddParent");

	Params::URigHierarchyController_AddParent_Params Parms;

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.InWeight = InWeight;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddNull
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTransformInGlobal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchyController::AddNull(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "AddNull");

	Params::URigHierarchyController_AddNull_Params Parms;

	Parms.InName = InName;
	Parms.InParent = InParent;
	Parms.InTransform = InTransform;
	Parms.bTransformInGlobal = bTransformInGlobal;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchyController::AddCurve(class FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "AddCurve");

	Params::URigHierarchyController_AddCurve_Params Parms;

	Parms.InName = InName;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlSettings         InSettings                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlValue            InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchyController::AddControl_ForBlueprint(class FName InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "AddControl_ForBlueprint");

	Params::URigHierarchyController_AddControl_ForBlueprint_Params Parms;

	Parms.InName = InName;
	Parms.InParent = InParent;
	Parms.InSettings = InSettings;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddBone
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParent                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTransformInGlobal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERigBoneType            InBoneType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchyController::AddBone(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "AddBone");

	Params::URigHierarchyController_AddBone_Params Parms;

	Parms.InName = InName;
	Parms.InParent = InParent;
	Parms.InTransform = InTransform;
	Parms.bTransformInGlobal = bTransformInGlobal;
	Parms.InBoneType = InBoneType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              InParentControl                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigControlSettings         InSettings                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetupUndo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPrintPythonCommand                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRigElementKey              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FRigElementKey URigHierarchyController::AddAnimationChannel_ForBlueprint(class FName InName, const struct FRigElementKey& InParentControl, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand)
{
	static auto Func = Class->GetFunction("RigHierarchyController", "AddAnimationChannel_ForBlueprint");

	Params::URigHierarchyController_AddAnimationChannel_ForBlueprint_Params Parms;

	Parms.InName = InName;
	Parms.InParentControl = InParentControl;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigPoseAsset.SelectControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDoMirror                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigPoseAsset::SelectControls(class UControlRig* InControlRig, bool bDoMirror)
{
	static auto Func = Class->GetFunction("ControlRigPoseAsset", "SelectControls");

	Params::UControlRigPoseAsset_SelectControls_Params Parms;

	Parms.InControlRig = InControlRig;
	Parms.bDoMirror = bDoMirror;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigPoseAsset.SavePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseAll                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigPoseAsset::SavePose(class UControlRig* InControlRig, bool bUseAll)
{
	static auto Func = Class->GetFunction("ControlRigPoseAsset", "SavePose");

	Params::UControlRigPoseAsset_SavePose_Params Parms;

	Parms.InControlRig = InControlRig;
	Parms.bUseAll = bUseAll;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        CurrentName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NewName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigPoseAsset::ReplaceControlName(class FName& CurrentName, class FName& NewName)
{
	static auto Func = Class->GetFunction("ControlRigPoseAsset", "ReplaceControlName");

	Params::UControlRigPoseAsset_ReplaceControlName_Params Parms;

	Parms.CurrentName = CurrentName;
	Parms.NewName = NewName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigPoseAsset.PastePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDoKey                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDoMirror                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControlRigPoseAsset::PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror)
{
	static auto Func = Class->GetFunction("ControlRigPoseAsset", "PastePose");

	Params::UControlRigPoseAsset_PastePose_Params Parms;

	Parms.InControlRig = InControlRig;
	Parms.bDoKey = bDoKey;
	Parms.bDoMirror = bDoMirror;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FControlRigControlPose      OutPose                                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UControlRigPoseAsset::GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose)
{
	static auto Func = Class->GetFunction("ControlRigPoseAsset", "GetCurrentPose");

	Params::UControlRigPoseAsset_GetCurrentPose_Params Parms;

	Parms.InControlRig = InControlRig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPose != nullptr)
		*OutPose = Parms.OutPose;

}


// Function ControlRig.ControlRigPoseAsset.GetControlNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UControlRigPoseAsset::GetControlNames()
{
	static auto Func = Class->GetFunction("ControlRigPoseAsset", "GetControlNames");

	Params::UControlRigPoseAsset_GetControlNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ControlRig                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ControlName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigPoseAsset::DoesMirrorMatch(class UControlRig* ControlRig, class FName& ControlName)
{
	static auto Func = Class->GetFunction("ControlRigPoseAsset", "DoesMirrorMatch");

	Params::UControlRigPoseAsset_DoesMirrorMatch_Params Parms;

	Parms.ControlRig = ControlRig;
	Parms.ControlName = ControlName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected()
{
	static auto Func = Class->GetFunction("ControlRigWorkflowOptions", "EnsureAtLeastOneRigElementSelected");

	Params::UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
// (Final, Native, Public)
// Parameters:
// class UObject*                     InSubject                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRigVMUserWorkflow>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FRigVMUserWorkflow> UControlRigTransformWorkflowOptions::ProvideWorkflows(class UObject* InSubject)
{
	static auto Func = Class->GetFunction("ControlRigTransformWorkflowOptions", "ProvideWorkflows");

	Params::UControlRigTransformWorkflowOptions_ProvideWorkflows_Params Parms;

	Parms.InSubject = InSubject;

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
