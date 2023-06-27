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


// Function InfernoRuntime.FortCurieVoxelFireNativeFXHandler.OnUserSettingsEffectQualityChanged
// (Final, Native, Private)
// Parameters:

void UFortCurieVoxelFireNativeFXHandler::OnUserSettingsEffectQualityChanged()
{
	static auto Func = Class->GetFunction("FortCurieVoxelFireNativeFXHandler", "OnUserSettingsEffectQualityChanged");

	Params::UFortCurieVoxelFireNativeFXHandler_OnUserSettingsEffectQualityChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
