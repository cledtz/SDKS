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


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UReplicationGraphDebugActor::ServerStopDebugging()
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStopDebugging");

	Params::UReplicationGraphDebugActor_ServerStopDebugging_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UReplicationGraphDebugActor::ServerStartDebugging()
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStartDebugging");

	Params::UReplicationGraphDebugActor_ServerStartDebugging_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PeriodFrame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* Class, int32 PeriodFrame)
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetPeriodFrameForClass");

	Params::UReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params Parms;

	Parms.Class = Class;
	Parms.PeriodFrame = PeriodFrame;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CullDistance                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetCullDistanceForClass");

	Params::UReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params Parms;

	Parms.Class = Class;
	Parms.CullDistance = CullDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class UActor* Actor)
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetConditionalActorBreakpoint");

	Params::UReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UReplicationGraphDebugActor::ServerPrintCullDistances()
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintCullDistances");

	Params::UReplicationGraphDebugActor_ServerPrintCullDistances_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class FString                      Str                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReplicationGraphDebugActor::ServerPrintAllActorInfo(const class FString& Str)
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintAllActorInfo");

	Params::UReplicationGraphDebugActor_ServerPrintAllActorInfo_Params Parms;

	Parms.Str = Str;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void UReplicationGraphDebugActor::ServerCellInfo()
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerCellInfo");

	Params::UReplicationGraphDebugActor_ServerCellInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                     CellLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CellExtent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              Actors                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class UActor*>& Actors)
{
	static auto Func = Class->GetFunction("ReplicationGraphDebugActor", "ClientCellInfo");

	Params::UReplicationGraphDebugActor_ClientCellInfo_Params Parms;

	Parms.CellLocation = CellLocation;
	Parms.CellExtent = CellExtent;
	Parms.Actors = Actors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
