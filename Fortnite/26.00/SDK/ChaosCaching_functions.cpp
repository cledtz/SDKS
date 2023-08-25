#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosCaching.ChaosCacheCollection
// (None)

class UClass* UChaosCacheCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosCacheCollection");

	return Clss;
}


// ChaosCacheCollection ChaosCaching.Default__ChaosCacheCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosCacheCollection* UChaosCacheCollection::GetDefaultObj()
{
	static class UChaosCacheCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosCacheCollection*>(UChaosCacheCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCaching.ChaosCacheManager
// (Actor)

class UClass* UChaosCacheManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosCacheManager");

	return Clss;
}


// ChaosCacheManager ChaosCaching.Default__ChaosCacheManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosCacheManager* UChaosCacheManager::GetDefaultObj()
{
	static class UChaosCacheManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosCacheManager*>(UChaosCacheManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
// (Final, RequiredAPI, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InCacheName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::TriggerComponentByCache(class FName InCacheName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerComponentByCache");

	Params::UChaosCacheManager_TriggerComponentByCache_Params Parms{};

	Parms.InCacheName = InCacheName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.TriggerComponent
// (Final, RequiredAPI, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::TriggerComponent(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerComponent");

	Params::UChaosCacheManager_TriggerComponent_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.TriggerAll
// (Final, RequiredAPI, Native, Protected, BlueprintCallable)
// Parameters:

void UChaosCacheManager::TriggerAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerAll");

	Params::UChaosCacheManager_TriggerAll_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.SetStartTime
// (Final, RequiredAPI, Native, Public)
// Parameters:
// float                              InStartTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::SetStartTime(float InStartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "SetStartTime");

	Params::UChaosCacheManager_SetStartTime_Params Parms{};

	Parms.InStartTime = InStartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.SetCacheCollection
// (Final, RequiredAPI, Native, Protected, BlueprintCallable)
// Parameters:
// class UChaosCacheCollection*       InCacheCollection                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::SetCacheCollection(class UChaosCacheCollection* InCacheCollection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "SetCacheCollection");

	Params::UChaosCacheManager_SetCacheCollection_Params Parms{};

	Parms.InCacheCollection = InCacheCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::ResetSingleTransform(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "ResetSingleTransform");

	Params::UChaosCacheManager_ResetSingleTransform_Params Parms{};

	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UChaosCacheManager::ResetAllComponentTransforms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "ResetAllComponentTransforms");

	Params::UChaosCacheManager_ResetAllComponentTransforms_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.EnablePlaybackByCache
// (Final, RequiredAPI, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InCacheName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::EnablePlaybackByCache(class FName InCacheName, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "EnablePlaybackByCache");

	Params::UChaosCacheManager_EnablePlaybackByCache_Params Parms{};

	Parms.InCacheName = InCacheName;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosCaching.ChaosCacheManager.EnablePlayback
// (Final, RequiredAPI, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosCacheManager::EnablePlayback(int32 Index, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosCacheManager", "EnablePlayback");

	Params::UChaosCacheManager_EnablePlayback_Params Parms{};

	Parms.Index = Index;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ChaosCaching.ChaosCachePlayer
// (Actor)

class UClass* UChaosCachePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosCachePlayer");

	return Clss;
}


// ChaosCachePlayer ChaosCaching.Default__ChaosCachePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosCachePlayer* UChaosCachePlayer::GetDefaultObj()
{
	static class UChaosCachePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosCachePlayer*>(UChaosCachePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCaching.ChaosCache
// (None)

class UClass* UChaosCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosCache");

	return Clss;
}


// ChaosCache ChaosCaching.Default__ChaosCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosCache* UChaosCache::GetDefaultObj()
{
	static class UChaosCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosCache*>(UChaosCache::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCaching.MovieSceneChaosCacheSection
// (None)

class UClass* UMovieSceneChaosCacheSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneChaosCacheSection");

	return Clss;
}


// MovieSceneChaosCacheSection ChaosCaching.Default__MovieSceneChaosCacheSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneChaosCacheSection* UMovieSceneChaosCacheSection::GetDefaultObj()
{
	static class UMovieSceneChaosCacheSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneChaosCacheSection*>(UMovieSceneChaosCacheSection::StaticClass()->DefaultObject);

	return Default;
}


// Class ChaosCaching.MovieSceneChaosCacheTrack
// (None)

class UClass* UMovieSceneChaosCacheTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneChaosCacheTrack");

	return Clss;
}


// MovieSceneChaosCacheTrack ChaosCaching.Default__MovieSceneChaosCacheTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneChaosCacheTrack* UMovieSceneChaosCacheTrack::GetDefaultObj()
{
	static class UMovieSceneChaosCacheTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneChaosCacheTrack*>(UMovieSceneChaosCacheTrack::StaticClass()->DefaultObject);

	return Default;
}

}


