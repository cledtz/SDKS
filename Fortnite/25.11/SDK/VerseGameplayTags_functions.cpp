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


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasMatchingGameplayTag
// (Native, Public, Const)
// Parameters:
// struct FVerseGameplayTag           TagToCheck                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVerseGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FVerseGameplayTag& TagToCheck)
{
	static auto Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasMatchingGameplayTag");

	Params::UVerseGameplayTagAssetInterface_HasMatchingGameplayTag_Params Parms;

	Parms.TagToCheck = TagToCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// struct FVerseGameplayTagContainer  TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVerseGameplayTagAssetInterface::HasAnyMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer)
{
	static auto Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasAnyMatchingGameplayTags");

	Params::UVerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params Parms;

	Parms.TagContainer = TagContainer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasAllMatchingGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// struct FVerseGameplayTagContainer  TagContainer                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVerseGameplayTagAssetInterface::HasAllMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer)
{
	static auto Func = Class->GetFunction("VerseGameplayTagAssetInterface", "HasAllMatchingGameplayTags");

	Params::UVerseGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params Parms;

	Parms.TagContainer = TagContainer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// struct FVerseGameplayTagContainer  TagContainer                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UVerseGameplayTagAssetInterface::GetOwnedGameplayTags(struct FVerseGameplayTagContainer* TagContainer)
{
	static auto Func = Class->GetFunction("VerseGameplayTagAssetInterface", "GetOwnedGameplayTags");

	Params::UVerseGameplayTagAssetInterface_GetOwnedGameplayTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TagContainer != nullptr)
		*TagContainer = Parms.TagContainer;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
