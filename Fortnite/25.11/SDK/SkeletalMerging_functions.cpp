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


// Function SkeletalMerging.SkeletalMergingLibrary.MergeSkeletons
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSkeletonMergeParams        Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USkeleton*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeleton* USkeletalMergingLibrary::MergeSkeletons(struct FSkeletonMergeParams& Params)
{
	static auto Func = Class->GetFunction("SkeletalMergingLibrary", "MergeSkeletons");

	Params::USkeletalMergingLibrary_MergeSkeletons_Params Parms;

	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SkeletalMerging.SkeletalMergingLibrary.MergeMeshes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSkeletalMeshMergeParams    Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* USkeletalMergingLibrary::MergeMeshes(struct FSkeletalMeshMergeParams& Params)
{
	static auto Func = Class->GetFunction("SkeletalMergingLibrary", "MergeMeshes");

	Params::USkeletalMergingLibrary_MergeMeshes_Params Parms;

	Parms.Params = Params;

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
