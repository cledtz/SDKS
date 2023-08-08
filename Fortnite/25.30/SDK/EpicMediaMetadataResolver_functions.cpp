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


// Function EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UID                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLive                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEpicMediaOptions           InMediaOptions                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEpicMediaMetadataResolver::GetData(const class FString& UID, bool bLive, const struct FEpicMediaOptions& InMediaOptions)
{
	static auto Func = Class->GetFunction("EpicMediaMetadataResolver", "GetData");

	Params::UEpicMediaMetadataResolver_GetData_Params Parms;

	Parms.UID = UID;
	Parms.bLive = bLive;
	Parms.InMediaOptions = InMediaOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("EpicMediaMetadataResolver", "GetBlurl");

	Params::UEpicMediaMetadataResolver_GetBlurl_Params Parms;

	Parms.InVUID = InVUID;
	Parms.bInBlurlLive = bInBlurlLive;
	Parms.InMediaOptions = InMediaOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
