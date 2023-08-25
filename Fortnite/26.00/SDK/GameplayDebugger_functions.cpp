#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
// (Actor)

class UClass* UGameplayDebuggerCategoryReplicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerCategoryReplicator");

	return Clss;
}


// GameplayDebuggerCategoryReplicator GameplayDebugger.Default__GameplayDebuggerCategoryReplicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerCategoryReplicator* UGameplayDebuggerCategoryReplicator::GetDefaultObj()
{
	static class UGameplayDebuggerCategoryReplicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerCategoryReplicator*>(UGameplayDebuggerCategoryReplicator::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                     InViewLocation                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InViewDirection                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayDebuggerCategoryReplicator::ServerSetViewPoint(struct FVector& InViewLocation, struct FVector& InViewDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetViewPoint");

	Params::UGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params Parms{};

	Parms.InViewLocation = InViewLocation;
	Parms.InViewDirection = InViewDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetEnabled");

	Params::UGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelectInEditor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayDebuggerCategoryReplicator::ServerSetDebugActor(class UActor* Actor, bool bSelectInEditor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetDebugActor");

	Params::UGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.bSelectInEditor = bSelectInEditor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32 CategoryId, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSetCategoryEnabled");

	Params::UGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params Parms{};

	Parms.CategoryId = CategoryId;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              ExtensionId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HandlerId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendExtensionInputEvent");

	Params::UGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params Parms{};

	Parms.ExtensionId = ExtensionId;
	Parms.HandlerId = HandlerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int32                              CategoryId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HandlerId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerSendCategoryInputEvent");

	Params::UGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params Parms{};

	Parms.CategoryId = CategoryId;
	Parms.HandlerId = HandlerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UGameplayDebuggerCategoryReplicator::ServerResetViewPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ServerResetViewPoint");

	Params::UGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
// (Final, RequiredAPI, Native, Protected)
// Parameters:

void UGameplayDebuggerCategoryReplicator::OnRep_ReplicatedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "OnRep_ReplicatedData");

	Params::UGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
// (RequiredAPI, Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayDebuggerDataPackRPCParamsParams                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UGameplayDebuggerCategoryReplicator::ClientDataPackPacket(struct FGameplayDebuggerDataPackRPCParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayDebuggerCategoryReplicator", "ClientDataPackPacket");

	Params::UGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayDebugger.GameplayDebuggerConfig
// (None)

class UClass* UGameplayDebuggerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerConfig");

	return Clss;
}


// GameplayDebuggerConfig GameplayDebugger.Default__GameplayDebuggerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerConfig* UGameplayDebuggerConfig::GetDefaultObj()
{
	static class UGameplayDebuggerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerConfig*>(UGameplayDebuggerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerUserSettings
// (None)

class UClass* UGameplayDebuggerUserSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerUserSettings");

	return Clss;
}


// GameplayDebuggerUserSettings GameplayDebugger.Default__GameplayDebuggerUserSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerUserSettings* UGameplayDebuggerUserSettings::GetDefaultObj()
{
	static class UGameplayDebuggerUserSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerUserSettings*>(UGameplayDebuggerUserSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerLocalController
// (None)

class UClass* UGameplayDebuggerLocalController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerLocalController");

	return Clss;
}


// GameplayDebuggerLocalController GameplayDebugger.Default__GameplayDebuggerLocalController
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerLocalController* UGameplayDebuggerLocalController::GetDefaultObj()
{
	static class UGameplayDebuggerLocalController* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerLocalController*>(UGameplayDebuggerLocalController::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerPlayerManager
// (Actor)

class UClass* UGameplayDebuggerPlayerManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerPlayerManager");

	return Clss;
}


// GameplayDebuggerPlayerManager GameplayDebugger.Default__GameplayDebuggerPlayerManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerPlayerManager* UGameplayDebuggerPlayerManager::GetDefaultObj()
{
	static class UGameplayDebuggerPlayerManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerPlayerManager*>(UGameplayDebuggerPlayerManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayDebugger.GameplayDebuggerRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGameplayDebuggerRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayDebuggerRenderingComponent");

	return Clss;
}


// GameplayDebuggerRenderingComponent GameplayDebugger.Default__GameplayDebuggerRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayDebuggerRenderingComponent* UGameplayDebuggerRenderingComponent::GetDefaultObj()
{
	static class UGameplayDebuggerRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayDebuggerRenderingComponent*>(UGameplayDebuggerRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}

}


