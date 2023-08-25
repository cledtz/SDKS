#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CloakGameplay.FortGameCueNotifyLoop_Cloak
// (Actor)

class UClass* UFortGameCueNotifyLoop_Cloak::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameCueNotifyLoop_Cloak");

	return Clss;
}


// FortGameCueNotifyLoop_Cloak CloakGameplay.Default__FortGameCueNotifyLoop_Cloak
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameCueNotifyLoop_Cloak* UFortGameCueNotifyLoop_Cloak::GetDefaultObj()
{
	static class UFortGameCueNotifyLoop_Cloak* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameCueNotifyLoop_Cloak*>(UFortGameCueNotifyLoop_Cloak::StaticClass()->DefaultObject);

	return Default;
}


// Function CloakGameplay.FortGameCueNotifyLoop_Cloak.TickVisibilityLevel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortGameCueNotifyLoop_Cloak::TickVisibilityLevel(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameCueNotifyLoop_Cloak", "TickVisibilityLevel");

	Params::UFortGameCueNotifyLoop_Cloak_TickVisibilityLevel_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierEnabled
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ModifierName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewEnabled                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameCueNotifyLoop_Cloak::SetModifierEnabled(class FName& ModifierName, bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameCueNotifyLoop_Cloak", "SetModifierEnabled");

	Params::UFortGameCueNotifyLoop_Cloak_SetModifierEnabled_Params Parms{};

	Parms.ModifierName = ModifierName;
	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierCanBeEnabled
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ModifierName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewCanBeEnabled                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameCueNotifyLoop_Cloak::SetModifierCanBeEnabled(class FName& ModifierName, bool bNewCanBeEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameCueNotifyLoop_Cloak", "SetModifierCanBeEnabled");

	Params::UFortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled_Params Parms{};

	Parms.ModifierName = ModifierName;
	Parms.bNewCanBeEnabled = bNewCanBeEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CloakGameplay.FortGameCueNotifyLoop_Cloak.GetCurrentModifierValues
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              OutVisibilityMultiplier                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutVisibilityAddition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ModifierName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameCueNotifyLoop_Cloak::GetCurrentModifierValues(float* OutVisibilityMultiplier, float* OutVisibilityAddition, class FName& ModifierName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameCueNotifyLoop_Cloak", "GetCurrentModifierValues");

	Params::UFortGameCueNotifyLoop_Cloak_GetCurrentModifierValues_Params Parms{};

	Parms.ModifierName = ModifierName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutVisibilityMultiplier != nullptr)
		*OutVisibilityMultiplier = Parms.OutVisibilityMultiplier;

	if (OutVisibilityAddition != nullptr)
		*OutVisibilityAddition = Parms.OutVisibilityAddition;

	return Parms.ReturnValue;

}

}


