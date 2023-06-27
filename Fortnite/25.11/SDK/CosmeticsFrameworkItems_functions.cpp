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


// Function CosmeticsFrameworkItems.CosmeticDataComponent.ResetProperties
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UCosmeticDataComponent::ResetProperties()
{
	static auto Func = Class->GetFunction("CosmeticDataComponent", "ResetProperties");

	Params::UCosmeticDataComponent_ResetProperties_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CosmeticsFrameworkItems.CosmeticDataComponent.BP_FindProperty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                SlotTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                PropertyTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCosmeticPropertyBase       OutProperty                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCosmeticDataComponent::BP_FindProperty(const struct FGameplayTag& SlotTag, const struct FGameplayTag& PropertyTag, struct FCosmeticPropertyBase* OutProperty)
{
	static auto Func = Class->GetFunction("CosmeticDataComponent", "BP_FindProperty");

	Params::UCosmeticDataComponent_BP_FindProperty_Params Parms;

	Parms.SlotTag = SlotTag;
	Parms.PropertyTag = PropertyTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutProperty != nullptr)
		*OutProperty = Parms.OutProperty;

	return Parms.ReturnValue;

}


// Function CosmeticsFrameworkItems.CosmeticDataComponent.BP_AddOrOverrideProperty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                SlotTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCosmeticPropertyBase       Property                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCosmeticDataComponent::BP_AddOrOverrideProperty(const struct FGameplayTag& SlotTag, struct FCosmeticPropertyBase& Property)
{
	static auto Func = Class->GetFunction("CosmeticDataComponent", "BP_AddOrOverrideProperty");

	Params::UCosmeticDataComponent_BP_AddOrOverrideProperty_Params Parms;

	Parms.SlotTag = SlotTag;
	Parms.Property = Property;

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
