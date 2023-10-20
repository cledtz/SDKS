#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PingQoS.PingQoSSubsystem
// (None)

class UClass* UPingQoSSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PingQoSSubsystem");

	return Clss;
}


// PingQoSSubsystem PingQoS.Default__PingQoSSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UPingQoSSubsystem* UPingQoSSubsystem::GetDefaultObj()
{
	static class UPingQoSSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UPingQoSSubsystem*>(UPingQoSSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function PingQoS.PingQoSSubsystem.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPingQoSSubsystem::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingQoSSubsystem", "Update");

	Params::UPingQoSSubsystem_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function PingQoS.PingQoSSubsystem.Recv
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FPingQoSInfo>        ResultInfos                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPingQoSSubsystem::Recv(TArray<struct FPingQoSInfo>* ResultInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingQoSSubsystem", "Recv");

	Params::UPingQoSSubsystem_Recv_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResultInfos != nullptr)
		*ResultInfos = Parms.ResultInfos;

}


// Function PingQoS.PingQoSSubsystem.Init
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPingQoSInfo>        SetInfo                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPingQoSSubsystem::Init(const TArray<struct FPingQoSInfo>& SetInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingQoSSubsystem", "Init");

	Params::UPingQoSSubsystem_Init_Params Parms{};

	Parms.SetInfo = SetInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


