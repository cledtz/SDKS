#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MediaMovieStreamer.MediaMovieAssets
// (None)

class UClass* UMediaMovieAssets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediaMovieAssets");

	return Clss;
}


// MediaMovieAssets MediaMovieStreamer.Default__MediaMovieAssets
// (Public, ClassDefaultObject, ArchetypeObject)

class UMediaMovieAssets* UMediaMovieAssets::GetDefaultObj()
{
	static class UMediaMovieAssets* Default = nullptr;

	if (!Default)
		Default = static_cast<UMediaMovieAssets*>(UMediaMovieAssets::StaticClass()->DefaultObject);

	return Default;
}


// Function MediaMovieStreamer.MediaMovieAssets.OnMediaEnd
// (Final, Native, Private)
// Parameters:

void UMediaMovieAssets::OnMediaEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MediaMovieAssets", "OnMediaEnd");

	Params::UMediaMovieAssets_OnMediaEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


