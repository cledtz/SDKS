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


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.SetRecentThrowingToyItemRemovedReason
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EThrowingToyItemRemovedReasonRemovedReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrowingToyTrackerComponent::SetRecentThrowingToyItemRemovedReason(enum class EThrowingToyItemRemovedReason RemovedReason)
{
	static auto Func = Class->GetFunction("ThrowingToyTrackerComponent", "SetRecentThrowingToyItemRemovedReason");

	Params::UThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason_Params Parms;

	Parms.RemovedReason = RemovedReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetThrowingToy
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       WorldItemGuid                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UThrowingToyTrackerComponent::GetThrowingToy(struct FGuid& WorldItemGuid)
{
	static auto Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetThrowingToy");

	Params::UThrowingToyTrackerComponent_GetThrowingToy_Params Parms;

	Parms.WorldItemGuid = WorldItemGuid;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetRecentThrowingToyItemRemovedReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EThrowingToyItemRemovedReasonReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EThrowingToyItemRemovedReason UThrowingToyTrackerComponent::GetRecentThrowingToyItemRemovedReason()
{
	static auto Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetRecentThrowingToyItemRemovedReason");

	Params::UThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetAndReleaseThrowingToy
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       WorldItemGuid                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UThrowingToyTrackerComponent::GetAndReleaseThrowingToy(struct FGuid& WorldItemGuid)
{
	static auto Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetAndReleaseThrowingToy");

	Params::UThrowingToyTrackerComponent_GetAndReleaseThrowingToy_Params Parms;

	Parms.WorldItemGuid = WorldItemGuid;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.AddThrowingToy
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      ThrowingToyActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       WorldItemGuid                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrowingToyTrackerComponent::AddThrowingToy(class AActor* ThrowingToyActor, struct FGuid& WorldItemGuid)
{
	static auto Func = Class->GetFunction("ThrowingToyTrackerComponent", "AddThrowingToy");

	Params::UThrowingToyTrackerComponent_AddThrowingToy_Params Parms;

	Parms.ThrowingToyActor = ThrowingToyActor;
	Parms.WorldItemGuid = WorldItemGuid;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
