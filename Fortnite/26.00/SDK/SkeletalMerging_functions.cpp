#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SkeletalMerging.SkeletalMergingLibrary
// (None)

class UClass* USkeletalMergingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkeletalMergingLibrary");

	return Clss;
}


// SkeletalMergingLibrary SkeletalMerging.Default__SkeletalMergingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USkeletalMergingLibrary* USkeletalMergingLibrary::GetDefaultObj()
{
	static class USkeletalMergingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USkeletalMergingLibrary*>(USkeletalMergingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SkeletalMerging.SkeletalMergingLibrary.MergeSkeletons
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSkeletonMergeParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USkeleton*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeleton* USkeletalMergingLibrary::MergeSkeletons(struct FSkeletonMergeParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalMergingLibrary", "MergeSkeletons");

	Params::USkeletalMergingLibrary_MergeSkeletons_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SkeletalMerging.SkeletalMergingLibrary.MergeMeshes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSkeletalMeshMergeParams    Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* USkeletalMergingLibrary::MergeMeshes(struct FSkeletalMeshMergeParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalMergingLibrary", "MergeMeshes");

	Params::USkeletalMergingLibrary_MergeMeshes_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


