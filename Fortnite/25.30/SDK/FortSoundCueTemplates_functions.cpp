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


// Function FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings.GetSettingsForTemplateType
// (Final, Native, Public)
// Parameters:
// TSubclassOf<class UFortSoundCueTemplateBase>TemplateType                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortSoundCueTemplateDefaults*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortSoundCueTemplateDefaults* UFortSoundCueTemplateDefaultSettings::GetSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType)
{
	static auto Func = Class->GetFunction("FortSoundCueTemplateDefaultSettings", "GetSettingsForTemplateType");

	Params::UFortSoundCueTemplateDefaultSettings_GetSettingsForTemplateType_Params Parms;

	Parms.TemplateType = TemplateType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function FortSoundCueTemplates.FortSoundCueTemplateSettings.GetDefaultSettingsForTemplateType
// (Final, Native, Public, Const)
// Parameters:
// TSubclassOf<class UFortSoundCueTemplateBase>TemplateType                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortSoundCueTemplateDefaults*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortSoundCueTemplateDefaults* UFortSoundCueTemplateSettings::GetDefaultSettingsForTemplateType(TSubclassOf<class UFortSoundCueTemplateBase> TemplateType)
{
	static auto Func = Class->GetFunction("FortSoundCueTemplateSettings", "GetDefaultSettingsForTemplateType");

	Params::UFortSoundCueTemplateSettings_GetDefaultSettingsForTemplateType_Params Parms;

	Parms.TemplateType = TemplateType;

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
