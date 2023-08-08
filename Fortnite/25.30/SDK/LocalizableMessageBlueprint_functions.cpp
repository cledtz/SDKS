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


// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Reset_LocalizableMessage
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLocalizableMessage         Message                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULocalizableMessageLibrary::Reset_LocalizableMessage(struct FLocalizableMessage& Message)
{
	static auto Func = Class->GetFunction("LocalizableMessageLibrary", "Reset_LocalizableMessage");

	Params::ULocalizableMessageLibrary_Reset_LocalizableMessage_Params Parms;

	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.IsEmpty_LocalizableMessage
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLocalizableMessage         Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULocalizableMessageLibrary::IsEmpty_LocalizableMessage(struct FLocalizableMessage& Message)
{
	static auto Func = Class->GetFunction("LocalizableMessageLibrary", "IsEmpty_LocalizableMessage");

	Params::ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Params Parms;

	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Conv_LocalizableMessageToText
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLocalizableMessage         Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText ULocalizableMessageLibrary::Conv_LocalizableMessageToText(class UObject* WorldContextObject, struct FLocalizableMessage& Message)
{
	static auto Func = Class->GetFunction("LocalizableMessageLibrary", "Conv_LocalizableMessageToText");

	Params::ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Message = Message;

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
