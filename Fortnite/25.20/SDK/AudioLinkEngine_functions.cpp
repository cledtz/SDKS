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


// Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioLinkBlueprintInterface::StopLink()
{
	static auto Func = Class->GetFunction("AudioLinkBlueprintInterface", "StopLink");

	Params::UAudioLinkBlueprintInterface_StopLink_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
// (Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  NewSound                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioLinkBlueprintInterface::SetLinkSound(class USoundBase* NewSound)
{
	static auto Func = Class->GetFunction("AudioLinkBlueprintInterface", "SetLinkSound");

	Params::UAudioLinkBlueprintInterface_SetLinkSound_Params Parms;

	Parms.NewSound = NewSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioLinkBlueprintInterface::PlayLink(float StartTime)
{
	static auto Func = Class->GetFunction("AudioLinkBlueprintInterface", "PlayLink");

	Params::UAudioLinkBlueprintInterface_PlayLink_Params Parms;

	Parms.StartTime = StartTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioLinkBlueprintInterface::IsLinkPlaying()
{
	static auto Func = Class->GetFunction("AudioLinkBlueprintInterface", "IsLinkPlaying");

	Params::UAudioLinkBlueprintInterface_IsLinkPlaying_Params Parms;


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
