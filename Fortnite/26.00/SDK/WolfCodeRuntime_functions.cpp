#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WolfCodeRuntime.FortCheatManager_Wolf
// (None)

class UClass* UFortCheatManager_Wolf::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCheatManager_Wolf");

	return Clss;
}


// FortCheatManager_Wolf WolfCodeRuntime.Default__FortCheatManager_Wolf
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCheatManager_Wolf* UFortCheatManager_Wolf::GetDefaultObj()
{
	static class UFortCheatManager_Wolf* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCheatManager_Wolf*>(UFortCheatManager_Wolf::StaticClass()->DefaultObject);

	return Default;
}


// Function WolfCodeRuntime.FortCheatManager_Wolf.WolfEnable
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCheatManager_Wolf::WolfEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCheatManager_Wolf", "WolfEnable");

	Params::UFortCheatManager_Wolf_WolfEnable_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


