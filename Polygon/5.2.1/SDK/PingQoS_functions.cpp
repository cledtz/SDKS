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


// Function PingQoS.PingQoSSubsystem.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPingQoSSubsystem::Update()
{
	static auto Func = Class->GetFunction("PingQoSSubsystem", "Update");

	Params::UPingQoSSubsystem_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PingQoS.PingQoSSubsystem.Recv
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FPingQoSInfo>        ResultInfos                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPingQoSSubsystem::Recv(TArray<struct FPingQoSInfo>* ResultInfos)
{
	static auto Func = Class->GetFunction("PingQoSSubsystem", "Recv");

	Params::UPingQoSSubsystem_Recv_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ResultInfos != nullptr)
		*ResultInfos = Parms.ResultInfos;

}


// Function PingQoS.PingQoSSubsystem.Init
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPingQoSInfo>        SetInfo                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UPingQoSSubsystem::Init(const TArray<struct FPingQoSInfo>& SetInfo)
{
	static auto Func = Class->GetFunction("PingQoSSubsystem", "Init");

	Params::UPingQoSSubsystem_Init_Params Parms;

	Parms.SetInfo = SetInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
