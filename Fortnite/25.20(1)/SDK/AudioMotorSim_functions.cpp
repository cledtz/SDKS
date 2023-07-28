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


// Function AudioMotorSim.AudioMotorModelComponent.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FAudioMotorSimInputContext  Input                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::Update(const struct FAudioMotorSimInputContext& Input)
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "Update");

	Params::UAudioMotorModelComponent_Update_Params Parms;

	Parms.Input = Input;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorModelComponent.StopOutput
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioMotorModelComponent::StopOutput()
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "StopOutput");

	Params::UAudioMotorModelComponent_StopOutput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorModelComponent.StartOutput
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioMotorModelComponent::StartOutput()
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "StartOutput");

	Params::UAudioMotorModelComponent_StartOutput_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorModelComponent.Reset
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioMotorModelComponent::Reset()
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "Reset");

	Params::UAudioMotorModelComponent_Reset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::RemoveMotorSimComponent(FInterfaceProperty_ InComponent)
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "RemoveMotorSimComponent");

	Params::UAudioMotorModelComponent_RemoveMotorSimComponent_Params Parms;

	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::RemoveMotorAudioComponent(FInterfaceProperty_ InComponent)
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "RemoveMotorAudioComponent");

	Params::UAudioMotorModelComponent_RemoveMotorAudioComponent_Params Parms;

	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAudioMotorSimRuntimeContextReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAudioMotorSimRuntimeContext UAudioMotorModelComponent::GetRuntimeInfo()
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "GetRuntimeInfo");

	Params::UAudioMotorModelComponent_GetRuntimeInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorModelComponent.GetRpm
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioMotorModelComponent::GetRpm()
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "GetRpm");

	Params::UAudioMotorModelComponent_GetRpm_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorModelComponent.GetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAudioMotorModelComponent::GetGear()
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "GetGear");

	Params::UAudioMotorModelComponent_GetGear_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorModelComponent.GetCachedInputData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAudioMotorSimInputContext  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAudioMotorSimInputContext UAudioMotorModelComponent::GetCachedInputData()
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "GetCachedInputData");

	Params::UAudioMotorModelComponent_GetCachedInputData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SortOrder                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::AddMotorSimComponent(FInterfaceProperty_ InComponent, int32 SortOrder)
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "AddMotorSimComponent");

	Params::UAudioMotorModelComponent_AddMotorSimComponent_Params Parms;

	Parms.InComponent = InComponent;
	Parms.SortOrder = SortOrder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FInterfaceProperty_                InComponent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMotorModelComponent::AddMotorAudioComponent(FInterfaceProperty_ InComponent)
{
	static auto Func = Class->GetFunction("AudioMotorModelComponent", "AddMotorAudioComponent");

	Params::UAudioMotorModelComponent_AddMotorAudioComponent_Params Parms;

	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorSim.Reset
// (Native, Public, BlueprintCallable)
// Parameters:

void UAudioMotorSim::Reset()
{
	static auto Func = Class->GetFunction("AudioMotorSim", "Reset");

	Params::UAudioMotorSim_Reset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioMotorSim.AudioMotorSimComponent.BP_Update
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAudioMotorSimInputContext  Input                                                            (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAudioMotorSimRuntimeContextRuntimeInfo                                                      (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioMotorSimComponent::BP_Update(struct FAudioMotorSimInputContext& Input, struct FAudioMotorSimRuntimeContext& RuntimeInfo)
{
	static auto Func = Class->GetFunction("AudioMotorSimComponent", "BP_Update");

	Params::UAudioMotorSimComponent_BP_Update_Params Parms;

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
	static auto Func = Class->GetFunction("AudioMotorSimComponent", "BP_Reset");

	Params::UAudioMotorSimComponent_BP_Reset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
