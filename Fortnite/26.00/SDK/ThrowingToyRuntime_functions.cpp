#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ThrowingToyRuntime.ThrowingToyTrackerComponent
// (None)

class UClass* UThrowingToyTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThrowingToyTrackerComponent");

	return Clss;
}


// ThrowingToyTrackerComponent ThrowingToyRuntime.Default__ThrowingToyTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UThrowingToyTrackerComponent* UThrowingToyTrackerComponent::GetDefaultObj()
{
	static class UThrowingToyTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrowingToyTrackerComponent*>(UThrowingToyTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.SetRecentThrowingToyItemRemovedReason
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EThrowingToyItemRemovedReasonRemovedReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrowingToyTrackerComponent::SetRecentThrowingToyItemRemovedReason(enum class EThrowingToyItemRemovedReason RemovedReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "SetRecentThrowingToyItemRemovedReason");

	Params::UThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason_Params Parms{};

	Parms.RemovedReason = RemovedReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetThrowingToy
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       WorldItemGuid                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UThrowingToyTrackerComponent::GetThrowingToy(struct FGuid& WorldItemGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetThrowingToy");

	Params::UThrowingToyTrackerComponent_GetThrowingToy_Params Parms{};

	Parms.WorldItemGuid = WorldItemGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetRecentThrowingToyItemRemovedReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EThrowingToyItemRemovedReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EThrowingToyItemRemovedReason UThrowingToyTrackerComponent::GetRecentThrowingToyItemRemovedReason()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetRecentThrowingToyItemRemovedReason");

	Params::UThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetAndReleaseThrowingToy
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       WorldItemGuid                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UThrowingToyTrackerComponent::GetAndReleaseThrowingToy(struct FGuid& WorldItemGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetAndReleaseThrowingToy");

	Params::UThrowingToyTrackerComponent_GetAndReleaseThrowingToy_Params Parms{};

	Parms.WorldItemGuid = WorldItemGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.AddThrowingToy
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      ThrowingToyActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       WorldItemGuid                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrowingToyTrackerComponent::AddThrowingToy(class UActor* ThrowingToyActor, struct FGuid& WorldItemGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "AddThrowingToy");

	Params::UThrowingToyTrackerComponent_AddThrowingToy_Params Parms{};

	Parms.ThrowingToyActor = ThrowingToyActor;
	Parms.WorldItemGuid = WorldItemGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


