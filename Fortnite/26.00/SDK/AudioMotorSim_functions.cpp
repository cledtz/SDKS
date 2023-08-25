#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioMotorSim.AudioMotorModelComponent
// (None)

class UClass* UAudioMotorModelComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioMotorModelComponent");

	return Clss;
}


// AudioMotorModelComponent AudioMotorSim.Default__AudioMotorModelComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioMotorModelComponent* UAudioMotorModelComponent::GetDefaultObj()
{
	static class UAudioMotorModelComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioMotorModelComponent*>(UAudioMotorModelComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMotorSim.AudioMotorModelComponent.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FAudioMotorSimInputContext  Input                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::Update(const struct FAudioMotorSimInputContext& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "Update");

	Params::UAudioMotorModelComponent_Update_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMotorSim.AudioMotorModelComponent.StopOutput
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioMotorModelComponent::StopOutput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "StopOutput");

	Params::UAudioMotorModelComponent_StopOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMotorSim.AudioMotorModelComponent.StartOutput
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioMotorModelComponent::StartOutput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "StartOutput");

	Params::UAudioMotorModelComponent_StartOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMotorSim.AudioMotorModelComponent.Reset
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioMotorModelComponent::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "Reset");

	Params::UAudioMotorModelComponent_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UAudioMotorSim>InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::RemoveMotorSimComponent(TScriptInterface<class UAudioMotorSim> InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "RemoveMotorSimComponent");

	Params::UAudioMotorModelComponent_RemoveMotorSimComponent_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UAudioMotorSimOutput>InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::RemoveMotorAudioComponent(TScriptInterface<class UAudioMotorSimOutput> InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "RemoveMotorAudioComponent");

	Params::UAudioMotorModelComponent_RemoveMotorAudioComponent_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAudioMotorSimRuntimeContextReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAudioMotorSimRuntimeContext UAudioMotorModelComponent::GetRuntimeInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "GetRuntimeInfo");

	Params::UAudioMotorModelComponent_GetRuntimeInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorModelComponent.GetRpm
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioMotorModelComponent::GetRpm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "GetRpm");

	Params::UAudioMotorModelComponent_GetRpm_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorModelComponent.GetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAudioMotorModelComponent::GetGear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "GetGear");

	Params::UAudioMotorModelComponent_GetGear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorModelComponent.GetCachedInputData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAudioMotorSimInputContext  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAudioMotorSimInputContext UAudioMotorModelComponent::GetCachedInputData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "GetCachedInputData");

	Params::UAudioMotorModelComponent_GetCachedInputData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UAudioMotorSim>InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SortOrder                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::AddMotorSimComponent(TScriptInterface<class UAudioMotorSim> InComponent, int32 SortOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "AddMotorSimComponent");

	Params::UAudioMotorModelComponent_AddMotorSimComponent_Params Parms{};

	Parms.InComponent = InComponent;
	Parms.SortOrder = SortOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UAudioMotorSimOutput>InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::AddMotorAudioComponent(TScriptInterface<class UAudioMotorSimOutput> InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorModelComponent", "AddMotorAudioComponent");

	Params::UAudioMotorModelComponent_AddMotorAudioComponent_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioMotorSim.AudioMotorSim
// (None)

class UClass* UAudioMotorSim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioMotorSim");

	return Clss;
}


// AudioMotorSim AudioMotorSim.Default__AudioMotorSim
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioMotorSim* UAudioMotorSim::GetDefaultObj()
{
	static class UAudioMotorSim* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioMotorSim*>(UAudioMotorSim::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMotorSim.AudioMotorSim.Reset
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioMotorSim::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorSim", "Reset");

	Params::UAudioMotorSim_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioMotorSim.AudioMotorSimComponent
// (None)

class UClass* UAudioMotorSimComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioMotorSimComponent");

	return Clss;
}


// AudioMotorSimComponent AudioMotorSim.Default__AudioMotorSimComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioMotorSimComponent* UAudioMotorSimComponent::GetDefaultObj()
{
	static class UAudioMotorSimComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioMotorSimComponent*>(UAudioMotorSimComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMotorSim.AudioMotorSimComponent.BP_Update
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAudioMotorSimInputContext  Input                                                            (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAudioMotorSimRuntimeContextRuntimeInfo                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioMotorSimComponent::BP_Update(struct FAudioMotorSimInputContext& Input, struct FAudioMotorSimRuntimeContext& RuntimeInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorSimComponent", "BP_Update");

	Params::UAudioMotorSimComponent_BP_Update_Params Parms{};

	Parms.Input = Input;
	Parms.RuntimeInfo = RuntimeInfo;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorSimComponent.BP_Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAudioMotorSimComponent::BP_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMotorSimComponent", "BP_Reset");

	Params::UAudioMotorSimComponent_BP_Reset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class AudioMotorSim.AudioMotorSimOutput
// (None)

class UClass* UAudioMotorSimOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioMotorSimOutput");

	return Clss;
}


// AudioMotorSimOutput AudioMotorSim.Default__AudioMotorSimOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioMotorSimOutput* UAudioMotorSimOutput::GetDefaultObj()
{
	static class UAudioMotorSimOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioMotorSimOutput*>(UAudioMotorSimOutput::StaticClass()->DefaultObject);

	return Default;
}

}


