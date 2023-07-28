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


// Function VerseAssets.VerseAssetPtr.OnRep_AssetPathName
// (Final, Native, Protected)
// Parameters:

void UVerseAssetPtr::OnRep_AssetPathName()
{
	static auto Func = Class->GetFunction("VerseAssetPtr", "OnRep_AssetPathName");

	Params::UVerseAssetPtr_OnRep_AssetPathName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
