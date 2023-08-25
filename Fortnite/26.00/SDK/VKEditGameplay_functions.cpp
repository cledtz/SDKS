#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VKEditGameplay.VKEditGameplayAssetsToCook
// (None)

class UClass* UVKEditGameplayAssetsToCook::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VKEditGameplayAssetsToCook");

	return Clss;
}


// VKEditGameplayAssetsToCook VKEditGameplay.Default__VKEditGameplayAssetsToCook
// (Public, ClassDefaultObject, ArchetypeObject)

class UVKEditGameplayAssetsToCook* UVKEditGameplayAssetsToCook::GetDefaultObj()
{
	static class UVKEditGameplayAssetsToCook* Default = nullptr;

	if (!Default)
		Default = static_cast<UVKEditGameplayAssetsToCook*>(UVKEditGameplayAssetsToCook::StaticClass()->DefaultObject);

	return Default;
}


// Class VKEditGameplay.PlayspaceComponent_PlaysetRootSpawner
// (None)

class UClass* UPlayspaceComponent_PlaysetRootSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_PlaysetRootSpawner");

	return Clss;
}


// PlayspaceComponent_PlaysetRootSpawner VKEditGameplay.Default__PlayspaceComponent_PlaysetRootSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_PlaysetRootSpawner* UPlayspaceComponent_PlaysetRootSpawner::GetDefaultObj()
{
	static class UPlayspaceComponent_PlaysetRootSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_PlaysetRootSpawner*>(UPlayspaceComponent_PlaysetRootSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Class VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission
// (None)

class UClass* UPlayspaceComponent_VKEditCreativeToolsPermission::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_VKEditCreativeToolsPermission");

	return Clss;
}


// PlayspaceComponent_VKEditCreativeToolsPermission VKEditGameplay.Default__PlayspaceComponent_VKEditCreativeToolsPermission
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_VKEditCreativeToolsPermission* UPlayspaceComponent_VKEditCreativeToolsPermission::GetDefaultObj()
{
	static class UPlayspaceComponent_VKEditCreativeToolsPermission* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_VKEditCreativeToolsPermission*>(UPlayspaceComponent_VKEditCreativeToolsPermission::StaticClass()->DefaultObject);

	return Default;
}


// Class VKEditGameplay.VKEditPlayspace
// (Actor)

class UClass* UVKEditPlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VKEditPlayspace");

	return Clss;
}


// VKEditPlayspace VKEditGameplay.Default__VKEditPlayspace
// (Public, ClassDefaultObject, ArchetypeObject)

class UVKEditPlayspace* UVKEditPlayspace::GetDefaultObj()
{
	static class UVKEditPlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<UVKEditPlayspace*>(UVKEditPlayspace::StaticClass()->DefaultObject);

	return Default;
}


// Function VKEditGameplay.VKEditPlayspace.OnClientActivatedContent
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// struct FUniqueNetIdRepl            ClientNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVKEditPlayspace::OnClientActivatedContent(struct FUniqueNetIdRepl& ClientNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VKEditPlayspace", "OnClientActivatedContent");

	Params::UVKEditPlayspace_OnClientActivatedContent_Params Parms{};

	Parms.ClientNetId = ClientNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VKEditGameplay.PlayspaceComponent_EditConnectionManager
// (None)

class UClass* UPlayspaceComponent_EditConnectionManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_EditConnectionManager");

	return Clss;
}


// PlayspaceComponent_EditConnectionManager VKEditGameplay.Default__PlayspaceComponent_EditConnectionManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_EditConnectionManager* UPlayspaceComponent_EditConnectionManager::GetDefaultObj()
{
	static class UPlayspaceComponent_EditConnectionManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_EditConnectionManager*>(UPlayspaceComponent_EditConnectionManager::StaticClass()->DefaultObject);

	return Default;
}


// Function VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus
// (Final, Native, Protected, Const)
// Parameters:

void UPlayspaceComponent_EditConnectionManager::OnRep_VkEditStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceComponent_EditConnectionManager", "OnRep_VkEditStatus");

	Params::UPlayspaceComponent_EditConnectionManager_OnRep_VkEditStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections
// (Final, Native, Protected, Const)
// Parameters:

void UPlayspaceComponent_EditConnectionManager::OnRep_EditConnections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayspaceComponent_EditConnectionManager", "OnRep_EditConnections");

	Params::UPlayspaceComponent_EditConnectionManager_OnRep_EditConnections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


