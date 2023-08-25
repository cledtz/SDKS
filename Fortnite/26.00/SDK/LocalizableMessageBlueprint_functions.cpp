#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LocalizableMessageBlueprint.LocalizableMessageLibrary
// (None)

class UClass* ULocalizableMessageLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalizableMessageLibrary");

	return Clss;
}


// LocalizableMessageLibrary LocalizableMessageBlueprint.Default__LocalizableMessageLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULocalizableMessageLibrary* ULocalizableMessageLibrary::GetDefaultObj()
{
	static class ULocalizableMessageLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULocalizableMessageLibrary*>(ULocalizableMessageLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Reset_LocalizableMessage
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLocalizableMessage         Message                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULocalizableMessageLibrary::Reset_LocalizableMessage(struct FLocalizableMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalizableMessageLibrary", "Reset_LocalizableMessage");

	Params::ULocalizableMessageLibrary_Reset_LocalizableMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.IsEmpty_LocalizableMessage
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLocalizableMessage         Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULocalizableMessageLibrary::IsEmpty_LocalizableMessage(struct FLocalizableMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalizableMessageLibrary", "IsEmpty_LocalizableMessage");

	Params::ULocalizableMessageLibrary_IsEmpty_LocalizableMessage_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocalizableMessageLibrary", "Conv_LocalizableMessageToText");

	Params::ULocalizableMessageLibrary_Conv_LocalizableMessageToText_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


