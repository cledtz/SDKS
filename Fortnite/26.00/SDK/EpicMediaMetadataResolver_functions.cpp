#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicMediaMetadataResolver.EpicMediaMetadataResolver
// (None)

class UClass* UEpicMediaMetadataResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EpicMediaMetadataResolver");

	return Clss;
}


// EpicMediaMetadataResolver EpicMediaMetadataResolver.Default__EpicMediaMetadataResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UEpicMediaMetadataResolver* UEpicMediaMetadataResolver::GetDefaultObj()
{
	static class UEpicMediaMetadataResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UEpicMediaMetadataResolver*>(UEpicMediaMetadataResolver::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UID                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLive                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEpicMediaOptions           InMediaOptions                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicMediaMetadataResolver::GetData(const class FString& UID, bool bLive, const struct FEpicMediaOptions& InMediaOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicMediaMetadataResolver", "GetData");

	Params::UEpicMediaMetadataResolver_GetData_Params Parms{};

	Parms.UID = UID;
	Parms.bLive = bLive;
	Parms.InMediaOptions = InMediaOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetBlurl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVUID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInBlurlLive                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEpicMediaOptions           InMediaOptions                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicMediaMetadataResolver::GetBlurl(const class FString& InVUID, bool bInBlurlLive, const struct FEpicMediaOptions& InMediaOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EpicMediaMetadataResolver", "GetBlurl");

	Params::UEpicMediaMetadataResolver_GetBlurl_Params Parms{};

	Parms.InVUID = InVUID;
	Parms.bInBlurlLive = bInBlurlLive;
	Parms.InMediaOptions = InMediaOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


