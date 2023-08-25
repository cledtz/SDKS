#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicMediaCDNHostnames.EpicMediaCDNHostnames
// (None)

class UClass* UEpicMediaCDNHostnames::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicMediaCDNHostnames");

	return Clss;
}


// EpicMediaCDNHostnames EpicMediaCDNHostnames.Default__EpicMediaCDNHostnames
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicMediaCDNHostnames* UEpicMediaCDNHostnames::GetDefaultObj()
{
	static class UEpicMediaCDNHostnames* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicMediaCDNHostnames*>(UEpicMediaCDNHostnames::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicMediaCDNHostnames.EpicMediaCDNHostnames.GetSelectedHostName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEpicMediaCDNHostnames::GetSelectedHostName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicMediaCDNHostnames", "GetSelectedHostName");

	Params::UEpicMediaCDNHostnames_GetSelectedHostName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


