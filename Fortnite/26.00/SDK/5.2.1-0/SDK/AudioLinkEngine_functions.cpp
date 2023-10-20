#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioLinkEngine.AudioLinkBlueprintInterface
// (None)

class UClass* UAudioLinkBlueprintInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioLinkBlueprintInterface");

	return Clss;
}


// AudioLinkBlueprintInterface AudioLinkEngine.Default__AudioLinkBlueprintInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioLinkBlueprintInterface* UAudioLinkBlueprintInterface::GetDefaultObj()
{
	static class UAudioLinkBlueprintInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioLinkBlueprintInterface*>(UAudioLinkBlueprintInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioLinkBlueprintInterface::StopLink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "StopLink");

	Params::UAudioLinkBlueprintInterface_StopLink_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
// (Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  NewSound                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioLinkBlueprintInterface::SetLinkSound(class USoundBase* NewSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "SetLinkSound");

	Params::UAudioLinkBlueprintInterface_SetLinkSound_Params Parms{};

	Parms.NewSound = NewSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioLinkBlueprintInterface::PlayLink(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "PlayLink");

	Params::UAudioLinkBlueprintInterface_PlayLink_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioLinkBlueprintInterface::IsLinkPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "IsLinkPlaying");

	Params::UAudioLinkBlueprintInterface_IsLinkPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


