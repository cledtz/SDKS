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


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                     InViewLocation                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InViewDirection                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSetViewPoint(struct FVector& InViewLocation, struct FVector& InViewDirection)
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetViewPoint");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params Parms;

	Parms.InViewLocation = InViewLocation;
	Parms.InViewDirection = InViewDirection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetEnabled");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelectInEditor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor)
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetDebugActor");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params Parms;

	Parms.Actor = Actor;
	Parms.bSelectInEditor = bSelectInEditor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32 CategoryId, bool bEnable)
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetCategoryEnabled");

	Params::AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params Parms;

	Parms.CategoryId = CategoryId;
	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              ExtensionId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HandlerId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId)
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendExtensionInputEvent");

	Params::AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params Parms;

	Parms.ExtensionId = ExtensionId;
	Parms.HandlerId = HandlerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HandlerId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId)
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendCategoryInputEvent");

	Params::AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params Parms;

	Parms.CategoryId = CategoryId;
	Parms.HandlerId = HandlerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void AGameplayDebuggerCategoryReplicator::ServerResetViewPoint()
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerResetViewPoint");

	Params::AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
// (Final, Native, Protected)
// Parameters:

void AGameplayDebuggerCategoryReplicator::OnRep_ReplicatedData()
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "OnRep_ReplicatedData");

	Params::AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayDebuggerDataPackRPCParamsParams                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void AGameplayDebuggerCategoryReplicator::ClientDataPackPacket(struct FGameplayDebuggerDataPackRPCParams& Params)
{
	static auto Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ClientDataPackPacket");

	Params::AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params Parms;

	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
