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


// Function MediaMovieStreamer.MediaMovieAssets.OnMediaEnd
// (Final, Native, Private)
// Parameters:

void UMediaMovieAssets::OnMediaEnd()
{
	static auto Func = Class->GetFunction("MediaMovieAssets", "OnMediaEnd");

	Params::UMediaMovieAssets_OnMediaEnd_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
