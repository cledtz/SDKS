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


// Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UAnimationCompressionLibraryDatabase*DatabaseAsset                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EACLVisualFidelityChangeResultResult                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EACLVisualFidelity      VisualFidelity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimationCompressionLibraryDatabase::SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class EACLVisualFidelityChangeResult* Result, enum class EACLVisualFidelity VisualFidelity)
{
	static auto Func = Class->GetFunction("AnimationCompressionLibraryDatabase", "SetVisualFidelity");

	Params::UAnimationCompressionLibraryDatabase_SetVisualFidelity_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.DatabaseAsset = DatabaseAsset;
	Parms.VisualFidelity = VisualFidelity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimationCompressionLibraryDatabase*DatabaseAsset                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EACLVisualFidelity      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EACLVisualFidelity UAnimationCompressionLibraryDatabase::GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset)
{
	static auto Func = Class->GetFunction("AnimationCompressionLibraryDatabase", "GetVisualFidelity");

	Params::UAnimationCompressionLibraryDatabase_GetVisualFidelity_Params Parms;

	Parms.DatabaseAsset = DatabaseAsset;

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
