#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CosmeticsFrameworkEvents.CosmeticsEventRegistrar
// (None)

class UClass* UCosmeticsEventRegistrar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticsEventRegistrar");

	return Clss;
}


// CosmeticsEventRegistrar CosmeticsFrameworkEvents.Default__CosmeticsEventRegistrar
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticsEventRegistrar* UCosmeticsEventRegistrar::GetDefaultObj()
{
	static class UCosmeticsEventRegistrar* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticsEventRegistrar*>(UCosmeticsEventRegistrar::StaticClass()->DefaultObject);

	return Default;
}


// Function CosmeticsFrameworkEvents.CosmeticsEventRegistrar.RegisterOnCosmeticApplicationCompleted_BP
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCosmeticsEventHandle       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FCosmeticsEventHandle UCosmeticsEventRegistrar::RegisterOnCosmeticApplicationCompleted_BP(FDelegateProperty_& Delegate, int32 Flags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CosmeticsEventRegistrar", "RegisterOnCosmeticApplicationCompleted_BP");

	Params::UCosmeticsEventRegistrar_RegisterOnCosmeticApplicationCompleted_BP_Params Parms{};

	Parms.Delegate = Delegate;
	Parms.Flags = Flags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CosmeticsFrameworkEvents.CosmeticsFinishable
// (None)

class UClass* UCosmeticsFinishable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticsFinishable");

	return Clss;
}


// CosmeticsFinishable CosmeticsFrameworkEvents.Default__CosmeticsFinishable
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticsFinishable* UCosmeticsFinishable::GetDefaultObj()
{
	static class UCosmeticsFinishable* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticsFinishable*>(UCosmeticsFinishable::StaticClass()->DefaultObject);

	return Default;
}


// Class CosmeticsFrameworkEvents.CosmeticsMeshTarget
// (None)

class UClass* UCosmeticsMeshTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticsMeshTarget");

	return Clss;
}


// CosmeticsMeshTarget CosmeticsFrameworkEvents.Default__CosmeticsMeshTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticsMeshTarget* UCosmeticsMeshTarget::GetDefaultObj()
{
	static class UCosmeticsMeshTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticsMeshTarget*>(UCosmeticsMeshTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class CosmeticsFrameworkEvents.CosmeticsStreaming
// (None)

class UClass* UCosmeticsStreaming::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CosmeticsStreaming");

	return Clss;
}


// CosmeticsStreaming CosmeticsFrameworkEvents.Default__CosmeticsStreaming
// (Public, ClassDefaultObject, ArchetypeObject)

class UCosmeticsStreaming* UCosmeticsStreaming::GetDefaultObj()
{
	static class UCosmeticsStreaming* Default = nullptr;

	if (!Default)
		Default = static_cast<UCosmeticsStreaming*>(UCosmeticsStreaming::StaticClass()->DefaultObject);

	return Default;
}

}


