#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings
// (None)

class UClass* UCreativeLowMemoryFallbackSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeLowMemoryFallbackSettings");

	return Clss;
}


// CreativeLowMemoryFallbackSettings CreativeLowMemoryFallbackRuntime.Default__CreativeLowMemoryFallbackSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeLowMemoryFallbackSettings* UCreativeLowMemoryFallbackSettings::GetDefaultObj()
{
	static class UCreativeLowMemoryFallbackSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeLowMemoryFallbackSettings*>(UCreativeLowMemoryFallbackSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem
// (None)

class UClass* UCreativeLowMemoryFallbackWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeLowMemoryFallbackWorldSubsystem");

	return Clss;
}


// CreativeLowMemoryFallbackWorldSubsystem CreativeLowMemoryFallbackRuntime.Default__CreativeLowMemoryFallbackWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeLowMemoryFallbackWorldSubsystem* UCreativeLowMemoryFallbackWorldSubsystem::GetDefaultObj()
{
	static class UCreativeLowMemoryFallbackWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeLowMemoryFallbackWorldSubsystem*>(UCreativeLowMemoryFallbackWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem.OnPlaylistDataChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCreativeLowMemoryFallbackWorldSubsystem::OnPlaylistDataChanged(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeLowMemoryFallbackWorldSubsystem", "OnPlaylistDataChanged");

	Params::UCreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


