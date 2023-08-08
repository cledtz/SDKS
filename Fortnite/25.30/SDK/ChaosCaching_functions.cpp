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


// Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InCacheName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::TriggerComponentByCache(class FName InCacheName)
{
	static auto Func = Class->GetFunction("ChaosCacheManager", "TriggerComponentByCache");

	Params::UChaosCacheManager_TriggerComponentByCache_Params Parms;

	Parms.InCacheName = InCacheName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCaching.ChaosCacheManager.TriggerComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::TriggerComponent(class UPrimitiveComponent* InComponent)
{
	static auto Func = Class->GetFunction("ChaosCacheManager", "TriggerComponent");

	Params::UChaosCacheManager_TriggerComponent_Params Parms;

	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCaching.ChaosCacheManager.TriggerAll
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UChaosCacheManager::TriggerAll()
{
	static auto Func = Class->GetFunction("ChaosCacheManager", "TriggerAll");

	Params::UChaosCacheManager_TriggerAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCaching.ChaosCacheManager.SetStartTime
// (Final, Native, Public)
// Parameters:
// float                              InStartTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::SetStartTime(float InStartTime)
{
	static auto Func = Class->GetFunction("ChaosCacheManager", "SetStartTime");

	Params::UChaosCacheManager_SetStartTime_Params Parms;

	Parms.InStartTime = InStartTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::ResetSingleTransform(int32 InIndex)
{
	static auto Func = Class->GetFunction("ChaosCacheManager", "ResetSingleTransform");

	Params::UChaosCacheManager_ResetSingleTransform_Params Parms;

	Parms.InIndex = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChaosCacheManager::ResetAllComponentTransforms()
{
	static auto Func = Class->GetFunction("ChaosCacheManager", "ResetAllComponentTransforms");

	Params::UChaosCacheManager_ResetAllComponentTransforms_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
