#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutItemDefinition
// (None)

class UClass* UCosmeticLoadoutItemDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticLoadoutItemDefinition");

	return Clss;
}


// CosmeticLoadoutItemDefinition CosmeticsFrameworkLoadouts.Default__CosmeticLoadoutItemDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticLoadoutItemDefinition* UCosmeticLoadoutItemDefinition::GetDefaultObj()
{
	static class UCosmeticLoadoutItemDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticLoadoutItemDefinition*>(UCosmeticLoadoutItemDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema
// (None)

class UClass* UCosmeticLoadoutSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticLoadoutSchema");

	return Clss;
}


// CosmeticLoadoutSchema CosmeticsFrameworkLoadouts.Default__CosmeticLoadoutSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticLoadoutSchema* UCosmeticLoadoutSchema::GetDefaultObj()
{
	static class UCosmeticLoadoutSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticLoadoutSchema*>(UCosmeticLoadoutSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate
// (None)

class UClass* UCosmeticLoadoutSlotTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticLoadoutSlotTemplate");

	return Clss;
}


// CosmeticLoadoutSlotTemplate CosmeticsFrameworkLoadouts.Default__CosmeticLoadoutSlotTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticLoadoutSlotTemplate* UCosmeticLoadoutSlotTemplate::GetDefaultObj()
{
	static class UCosmeticLoadoutSlotTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticLoadoutSlotTemplate*>(UCosmeticLoadoutSlotTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetSlotTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UCosmeticLoadoutSlotTemplate::GetSlotTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticLoadoutSlotTemplate", "GetSlotTag");

	Params::UCosmeticLoadoutSlotTemplate_GetSlotTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetRequirements
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCosmeticLoadoutSlotRequirementsReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FCosmeticLoadoutSlotRequirements UCosmeticLoadoutSlotTemplate::GetRequirements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticLoadoutSlotTemplate", "GetRequirements");

	Params::UCosmeticLoadoutSlotTemplate_GetRequirements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetMetaTags
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UCosmeticLoadoutSlotTemplate::GetMetaTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticLoadoutSlotTemplate", "GetMetaTags");

	Params::UCosmeticLoadoutSlotTemplate_GetMetaTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetDefaultCosmeticItemId
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPrimaryAssetId             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPrimaryAssetId UCosmeticLoadoutSlotTemplate::GetDefaultCosmeticItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticLoadoutSlotTemplate", "GetDefaultCosmeticItemId");

	Params::UCosmeticLoadoutSlotTemplate_GetDefaultCosmeticItemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


