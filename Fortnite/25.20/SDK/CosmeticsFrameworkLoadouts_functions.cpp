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


// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetSlotTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UCosmeticLoadoutSlotTemplate::GetSlotTag()
{
	static auto Func = Class->GetFunction("CosmeticLoadoutSlotTemplate", "GetSlotTag");

	Params::UCosmeticLoadoutSlotTemplate_GetSlotTag_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetRequirements
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCosmeticLoadoutSlotRequirementsReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FCosmeticLoadoutSlotRequirements UCosmeticLoadoutSlotTemplate::GetRequirements()
{
	static auto Func = Class->GetFunction("CosmeticLoadoutSlotTemplate", "GetRequirements");

	Params::UCosmeticLoadoutSlotTemplate_GetRequirements_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetMetaTags
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UCosmeticLoadoutSlotTemplate::GetMetaTags()
{
	static auto Func = Class->GetFunction("CosmeticLoadoutSlotTemplate", "GetMetaTags");

	Params::UCosmeticLoadoutSlotTemplate_GetMetaTags_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetDefaultCosmeticItemId
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPrimaryAssetId             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPrimaryAssetId UCosmeticLoadoutSlotTemplate::GetDefaultCosmeticItemId()
{
	static auto Func = Class->GetFunction("CosmeticLoadoutSlotTemplate", "GetDefaultCosmeticItemId");

	Params::UCosmeticLoadoutSlotTemplate_GetDefaultCosmeticItemId_Params Parms;


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
