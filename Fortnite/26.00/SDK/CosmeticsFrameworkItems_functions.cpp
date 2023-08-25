#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CosmeticsFrameworkItems.CosmeticDataComponent
// (None)

class UClass* UCosmeticDataComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticDataComponent");

	return Clss;
}


// CosmeticDataComponent CosmeticsFrameworkItems.Default__CosmeticDataComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticDataComponent* UCosmeticDataComponent::GetDefaultObj()
{
	static class UCosmeticDataComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticDataComponent*>(UCosmeticDataComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CosmeticsFrameworkItems.CosmeticDataComponent.ResetProperties
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UCosmeticDataComponent::ResetProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticDataComponent", "ResetProperties");

	Params::UCosmeticDataComponent_ResetProperties_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticDataComponent", "BP_FindProperty");

	Params::UCosmeticDataComponent_BP_FindProperty_Params Parms{};

	Parms.SlotTag = SlotTag;
	Parms.PropertyTag = PropertyTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticDataComponent", "BP_AddOrOverrideProperty");

	Params::UCosmeticDataComponent_BP_AddOrOverrideProperty_Params Parms{};

	Parms.SlotTag = SlotTag;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


