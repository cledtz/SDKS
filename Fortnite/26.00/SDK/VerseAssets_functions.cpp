#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseAssets.VerseAssetPtr
// (None)

class UClass* UVerseAssetPtr::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAssetPtr");

	return Clss;
}


// VerseAssetPtr VerseAssets.Default__VerseAssetPtr
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseAssetPtr* UVerseAssetPtr::GetDefaultObj()
{
	static class UVerseAssetPtr* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAssetPtr*>(UVerseAssetPtr::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.VerseAssetPtr.OnRep_AssetPathName
// (Final, Native, Protected)
// Parameters:

void UVerseAssetPtr::OnRep_AssetPathName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAssetPtr", "OnRep_AssetPathName");

	Params::UVerseAssetPtr_OnRep_AssetPathName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


