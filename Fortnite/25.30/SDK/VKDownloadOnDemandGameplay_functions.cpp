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


// Function VKDownloadOnDemandGameplay.DownloadOnDemandComponent.HandleMnemonicsFromValkyriePaletteProviderReceived
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class FString>              Mnemonics                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UDownloadOnDemandComponent::HandleMnemonicsFromValkyriePaletteProviderReceived(TArray<class FString>& Mnemonics)
{
	static auto Func = Class->GetFunction("DownloadOnDemandComponent", "HandleMnemonicsFromValkyriePaletteProviderReceived");

	Params::UDownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived_Params Parms;

	Parms.Mnemonics = Mnemonics;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
