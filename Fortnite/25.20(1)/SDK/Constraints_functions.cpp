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


// Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTickableConstraint*         InTickableConstraint                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConstraintsScriptingLibrary::RemoveThisConstraint(class UWorld* InWorld, class UTickableConstraint* InTickableConstraint)
{
	static auto Func = Class->GetFunction("ConstraintsScriptingLibrary", "RemoveThisConstraint");

	Params::UConstraintsScriptingLibrary_RemoveThisConstraint_Params Parms;

	Parms.InWorld = InWorld;
	Parms.InTickableConstraint = InTickableConstraint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConstraintsScriptingLibrary::RemoveConstraint(class UWorld* InWorld, int32 InIndex)
{
	static auto Func = Class->GetFunction("ConstraintsScriptingLibrary", "RemoveConstraint");

	Params::UConstraintsScriptingLibrary_RemoveConstraint_Params Parms;

	Parms.InWorld = InWorld;
	Parms.InIndex = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.GetManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConstraintsManager*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UConstraintsManager* UConstraintsScriptingLibrary::GetManager(class UWorld* InWorld)
{
	static auto Func = Class->GetFunction("ConstraintsScriptingLibrary", "GetManager");

	Params::UConstraintsScriptingLibrary_GetManager_Params Parms;

	Parms.InWorld = InWorld;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTickableConstraint*> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTickableConstraint*> UConstraintsScriptingLibrary::GetConstraintsArray(class UWorld* InWorld)
{
	static auto Func = Class->GetFunction("ConstraintsScriptingLibrary", "GetConstraintsArray");

	Params::UConstraintsScriptingLibrary_GetConstraintsArray_Params Parms;

	Parms.InWorld = InWorld;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InObject                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InAttachmentName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTransformableHandle*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTransformableHandle* UConstraintsScriptingLibrary::CreateTransformableHandle(class UWorld* InWorld, class UObject* InObject, class FName& InAttachmentName)
{
	static auto Func = Class->GetFunction("ConstraintsScriptingLibrary", "CreateTransformableHandle");

	Params::UConstraintsScriptingLibrary_CreateTransformableHandle_Params Parms;

	Parms.InWorld = InWorld;
	Parms.InObject = InObject;
	Parms.InAttachmentName = InAttachmentName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             InSceneComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InSocketName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTransformableComponentHandle*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTransformableComponentHandle* UConstraintsScriptingLibrary::CreateTransformableComponentHandle(class UWorld* InWorld, class USceneComponent* InSceneComponent, class FName& InSocketName)
{
	static auto Func = Class->GetFunction("ConstraintsScriptingLibrary", "CreateTransformableComponentHandle");

	Params::UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Params Parms;

	Parms.InWorld = InWorld;
	Parms.InSceneComponent = InSceneComponent;
	Parms.InSocketName = InSocketName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.CreateFromType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETransformConstraintTypeInType                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTickableTransformConstraint*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTickableTransformConstraint* UConstraintsScriptingLibrary::CreateFromType(class UWorld* InWorld, enum class ETransformConstraintType InType)
{
	static auto Func = Class->GetFunction("ConstraintsScriptingLibrary", "CreateFromType");

	Params::UConstraintsScriptingLibrary_CreateFromType_Params Parms;

	Parms.InWorld = InWorld;
	Parms.InType = InType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Constraints.ConstraintsScriptingLibrary.AddConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTransformableHandle*        InParentHandle                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTransformableHandle*        InChildHandle                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTickableTransformConstraint*InConstraint                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMaintainOffset                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConstraintsScriptingLibrary::AddConstraint(class UWorld* InWorld, class UTransformableHandle* InParentHandle, class UTransformableHandle* InChildHandle, class UTickableTransformConstraint* InConstraint, bool bMaintainOffset)
{
	static auto Func = Class->GetFunction("ConstraintsScriptingLibrary", "AddConstraint");

	Params::UConstraintsScriptingLibrary_AddConstraint_Params Parms;

	Parms.InWorld = InWorld;
	Parms.InParentHandle = InParentHandle;
	Parms.InChildHandle = InChildHandle;
	Parms.InConstraint = InConstraint;
	Parms.bMaintainOffset = bMaintainOffset;

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
