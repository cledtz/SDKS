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


// Function POLYGON.TraceProjectile.UpdateVelocity
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PreviousVelocity                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTraceProjectile::UpdateVelocity(struct FVector& Location, struct FVector& PreviousVelocity, float DeltaTime)
{
	static auto Func = Class->GetFunction("TraceProjectile", "UpdateVelocity");

	Params::UTraceProjectile_UpdateVelocity_Params Parms;

	Parms.Location = Location;
	Parms.PreviousVelocity = PreviousVelocity;
	Parms.DeltaTime = DeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.TraceProjectile.SpawnWithExactVelocity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TSubclassOf<class UTraceProjectile>bulletClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UItem_Gun_General*           Gun                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartVelocity                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              RandomSeed                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTraceProjectile::SpawnWithExactVelocity(TSubclassOf<class UTraceProjectile> bulletClass, class UItem_Gun_General* Gun, struct FVector& SpawnLocation, struct FVector& StartVelocity, uint8 RandomSeed)
{
	static auto Func = Class->GetFunction("TraceProjectile", "SpawnWithExactVelocity");

	Params::UTraceProjectile_SpawnWithExactVelocity_Params Parms;

	Parms.bulletClass = bulletClass;
	Parms.Gun = Gun;
	Parms.SpawnLocation = SpawnLocation;
	Parms.StartVelocity = StartVelocity;
	Parms.RandomSeed = RandomSeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.TraceProjectile.Spawn
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TSubclassOf<class UTraceProjectile>bulletClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UItem_Gun_General*           Gun                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartVelocity                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              RandomSeed                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTraceProjectile::Spawn(TSubclassOf<class UTraceProjectile> bulletClass, class UItem_Gun_General* Gun, struct FVector& SpawnLocation, struct FVector& StartVelocity, uint8 RandomSeed)
{
	static auto Func = Class->GetFunction("TraceProjectile", "Spawn");

	Params::UTraceProjectile_Spawn_Params Parms;

	Parms.bulletClass = bulletClass;
	Parms.Gun = Gun;
	Parms.SpawnLocation = SpawnLocation;
	Parms.StartVelocity = StartVelocity;
	Parms.RandomSeed = RandomSeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.TraceProjectile.OnTrajectoryUpdateReceived
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OldVelocity                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NewVelocity                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTraceProjectile::OnTrajectoryUpdateReceived(struct FVector& Location, struct FVector& OldVelocity, struct FVector& NewVelocity)
{
	static auto Func = Class->GetFunction("TraceProjectile", "OnTrajectoryUpdateReceived");

	Params::UTraceProjectile_OnTrajectoryUpdateReceived_Params Parms;

	Parms.Location = Location;
	Parms.OldVelocity = OldVelocity;
	Parms.NewVelocity = NewVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.TraceProjectile.OnTrace
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     StartLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTraceProjectile::OnTrace(struct FVector& StartLocation, struct FVector& EndLocation)
{
	static auto Func = Class->GetFunction("TraceProjectile", "OnTrace");

	Params::UTraceProjectile_OnTrace_Params Parms;

	Parms.StartLocation = StartLocation;
	Parms.EndLocation = EndLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.TraceProjectile.OnImpact
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// bool                               Ricochet                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               PassedThrough                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ExitVelocity                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Impulse                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PenetrationDepth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UTraceProjectile::OnImpact(bool Ricochet, bool PassedThrough, struct FVector& ExitVelocity, struct FVector& Impulse, float PenetrationDepth, struct FHitResult& HitResult)
{
	static auto Func = Class->GetFunction("TraceProjectile", "OnImpact");

	Params::UTraceProjectile_OnImpact_Params Parms;

	Parms.Ricochet = Ricochet;
	Parms.PassedThrough = PassedThrough;
	Parms.ExitVelocity = ExitVelocity;
	Parms.Impulse = Impulse;
	Parms.PenetrationDepth = PenetrationDepth;
	Parms.HitResult = HitResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.TraceProjectile.OnDeactivated
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UTraceProjectile::OnDeactivated()
{
	static auto Func = Class->GetFunction("TraceProjectile", "OnDeactivated");

	Params::UTraceProjectile_OnDeactivated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.TraceProjectile.Deactivate
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UTraceProjectile::Deactivate()
{
	static auto Func = Class->GetFunction("TraceProjectile", "Deactivate");

	Params::UTraceProjectile_Deactivate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.TraceProjectile.CollisionFilter
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceProjectile::CollisionFilter(struct FHitResult& HitResult)
{
	static auto Func = Class->GetFunction("TraceProjectile", "CollisionFilter");

	Params::UTraceProjectile_CollisionFilter_Params Parms;

	Parms.HitResult = HitResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ChatSystemComponent.SentMessage_Multicast
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// struct FGameChatMessage            Message                                                          (Parm, NativeAccessSpecifierPublic)

void UChatSystemComponent::SentMessage_Multicast(const struct FGameChatMessage& Message)
{
	static auto Func = Class->GetFunction("ChatSystemComponent", "SentMessage_Multicast");

	Params::UChatSystemComponent_SentMessage_Multicast_Params Parms;

	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ChatSystemComponent.SendMessage_Server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FGameChatMessage            Message                                                          (Parm, NativeAccessSpecifierPublic)

void UChatSystemComponent::SendMessage_Server(const struct FGameChatMessage& Message)
{
	static auto Func = Class->GetFunction("ChatSystemComponent", "SendMessage_Server");

	Params::UChatSystemComponent_SendMessage_Server_Params Parms;

	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientBackendComponent.SetPlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewPlayerMasterId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientBackendComponent::SetPlayerId(const class FString& NewPlayerMasterId)
{
	static auto Func = Class->GetFunction("ClientBackendComponent", "SetPlayerId");

	Params::UClientBackendComponent_SetPlayerId_Params Parms;

	Parms.NewPlayerMasterId = NewPlayerMasterId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientBackendComponent.SetPlayerCombinedInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*          NewPlayerCombinedInfo                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientBackendComponent::SetPlayerCombinedInfo(class UPlayFabJsonObject* NewPlayerCombinedInfo, TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static auto Func = Class->GetFunction("ClientBackendComponent", "SetPlayerCombinedInfo");

	Params::UClientBackendComponent_SetPlayerCombinedInfo_Params Parms;

	Parms.NewPlayerCombinedInfo = NewPlayerCombinedInfo;
	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientBackendComponent.SerPlayerExperiments
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*          Experiments                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientBackendComponent::SerPlayerExperiments(class UPlayFabJsonObject* Experiments)
{
	static auto Func = Class->GetFunction("ClientBackendComponent", "SerPlayerExperiments");

	Params::UClientBackendComponent_SerPlayerExperiments_Params Parms;

	Parms.Experiments = Experiments;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientBackendComponent.IsClientLoggedIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UClientBackendComponent::IsClientLoggedIn()
{
	static auto Func = Class->GetFunction("ClientBackendComponent", "IsClientLoggedIn");

	Params::UClientBackendComponent_IsClientLoggedIn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientBackendComponent.GiveVipLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientBackendComponent::GiveVipLocal(const class FString& ID)
{
	static auto Func = Class->GetFunction("ClientBackendComponent", "GiveVipLocal");

	Params::UClientBackendComponent_GiveVipLocal_Params Parms;

	Parms.ID = ID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientBackendComponent.GetPlayerExperiments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayFabJsonObject* UClientBackendComponent::GetPlayerExperiments()
{
	static auto Func = Class->GetFunction("ClientBackendComponent", "GetPlayerExperiments");

	Params::UClientBackendComponent_GetPlayerExperiments_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientBackendComponent.GetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayFabJsonObject* UClientBackendComponent::GetPlayerCombinedInfo()
{
	static auto Func = Class->GetFunction("ClientBackendComponent", "GetPlayerCombinedInfo");

	Params::UClientBackendComponent_GetPlayerCombinedInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientGameInstance.SetServerTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   ServerTime                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientGameInstance::SetServerTime(struct FDateTime& ServerTime)
{
	static auto Func = Class->GetFunction("ClientGameInstance", "SetServerTime");

	Params::UClientGameInstance_SetServerTime_Params Parms;

	Parms.ServerTime = ServerTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientGameInstance.SetPlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewPlayerMasterId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientGameInstance::SetPlayerId(const class FString& NewPlayerMasterId)
{
	static auto Func = Class->GetFunction("ClientGameInstance", "SetPlayerId");

	Params::UClientGameInstance_SetPlayerId_Params Parms;

	Parms.NewPlayerMasterId = NewPlayerMasterId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientGameInstance.SetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*          NewPlayerCombinedInfo                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientGameInstance::SetPlayerCombinedInfo(class UPlayFabJsonObject* NewPlayerCombinedInfo)
{
	static auto Func = Class->GetFunction("ClientGameInstance", "SetPlayerCombinedInfo");

	Params::UClientGameInstance_SetPlayerCombinedInfo_Params Parms;

	Parms.NewPlayerCombinedInfo = NewPlayerCombinedInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientGameInstance.HandleNetworkFailure
// (Final, Native, Private)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNetDriver*                  NetDriver                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ENetworkFailure         FailureType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ErrorString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientGameInstance::HandleNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, enum class ENetworkFailure FailureType, const class FString& ErrorString)
{
	static auto Func = Class->GetFunction("ClientGameInstance", "HandleNetworkFailure");

	Params::UClientGameInstance_HandleNetworkFailure_Params Parms;

	Parms.World = World;
	Parms.NetDriver = NetDriver;
	Parms.FailureType = FailureType;
	Parms.ErrorString = ErrorString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ClientGameInstance.GetServerTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UClientGameInstance::GetServerTime()
{
	static auto Func = Class->GetFunction("ClientGameInstance", "GetServerTime");

	Params::UClientGameInstance_GetServerTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientGameInstance.GetPlayerMasterId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UClientGameInstance::GetPlayerMasterId()
{
	static auto Func = Class->GetFunction("ClientGameInstance", "GetPlayerMasterId");

	Params::UClientGameInstance_GetPlayerMasterId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientGameInstance.GetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayFabJsonObject* UClientGameInstance::GetPlayerCombinedInfo()
{
	static auto Func = Class->GetFunction("ClientGameInstance", "GetPlayerCombinedInfo");

	Params::UClientGameInstance_GetPlayerCombinedInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ControlPoint.OnRep_IsCapture
// (Final, Native, Private)
// Parameters:

void UControlPoint::OnRep_IsCapture()
{
	static auto Func = Class->GetFunction("ControlPoint", "OnRep_IsCapture");

	Params::UControlPoint_OnRep_IsCapture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ControlPoint.OnRep_CapturePointsBravoTeam
// (Final, Native, Private, Const)
// Parameters:

void UControlPoint::OnRep_CapturePointsBravoTeam()
{
	static auto Func = Class->GetFunction("ControlPoint", "OnRep_CapturePointsBravoTeam");

	Params::UControlPoint_OnRep_CapturePointsBravoTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ControlPoint.OnRep_CapturePointsAlphaTeam
// (Final, Native, Private, Const)
// Parameters:

void UControlPoint::OnRep_CapturePointsAlphaTeam()
{
	static auto Func = Class->GetFunction("ControlPoint", "OnRep_CapturePointsAlphaTeam");

	Params::UControlPoint_OnRep_CapturePointsAlphaTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ControlPoint.OnRep_CapturedTeam
// (Final, Native, Private)
// Parameters:

void UControlPoint::OnRep_CapturedTeam()
{
	static auto Func = Class->GetFunction("ControlPoint", "OnRep_CapturedTeam");

	Params::UControlPoint_OnRep_CapturedTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ControlPoint.GetControlPointNameAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UControlPoint::GetControlPointNameAsString()
{
	static auto Func = Class->GetFunction("ControlPoint", "GetControlPointNameAsString");

	Params::UControlPoint_GetControlPointNameAsString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ControlPoint.GetControlPointNameAsOneLetter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UControlPoint::GetControlPointNameAsOneLetter()
{
	static auto Func = Class->GetFunction("ControlPoint", "GetControlPointNameAsOneLetter");

	Params::UControlPoint_GetControlPointNameAsOneLetter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.ControlPoint.ContainsCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlPoint::ContainsCharacter(class UCharacter* Character)
{
	static auto Func = Class->GetFunction("ControlPoint", "ContainsCharacter");

	Params::UControlPoint_ContainsCharacter_Params Parms;

	Parms.Character = Character;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.DataManagerLibrary.GetDataTableReferences
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDataContainerAsset*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataContainerAsset* UDataManagerLibrary::GetDataTableReferences()
{
	static auto Func = Class->GetFunction("DataManagerLibrary", "GetDataTableReferences");

	Params::UDataManagerLibrary_GetDataTableReferences_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.EOSPartyId.ToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEOSPartyId::ToString()
{
	static auto Func = Class->GetFunction("EOSPartyId", "ToString");

	Params::UEOSPartyId_ToString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.EOSPartyMemberId.ToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEOSPartyMemberId::ToString()
{
	static auto Func = Class->GetFunction("EOSPartyMemberId", "ToString");

	Params::UEOSPartyMemberId_ToString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.EOSSubsystemAvanced.StartLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnLoginComplete                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSSubsystemAvanced::StartLogin(FDelegateProperty_ OnLoginComplete)
{
	static auto Func = Class->GetFunction("EOSSubsystemAvanced", "StartLogin");

	Params::UEOSSubsystemAvanced_StartLogin_Params Parms;

	Parms.OnLoginComplete = OnLoginComplete;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.EOSSubsystemAvanced.StartCreateParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PartyTypeId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnDone                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSSubsystemAvanced::StartCreateParty(class UObject* WorldContextObject, int32 PartyTypeId, FDelegateProperty_ OnDone)
{
	static auto Func = Class->GetFunction("EOSSubsystemAvanced", "StartCreateParty");

	Params::UEOSSubsystemAvanced_StartCreateParty_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PartyTypeId = PartyTypeId;
	Parms.OnDone = OnDone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.EOSSubsystemAvanced.GetPartyMembers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEOSPartyId*                 PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UEOSPartyMemberId*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UEOSPartyMemberId*> UEOSSubsystemAvanced::GetPartyMembers(class UObject* WorldContextObject, class UEOSPartyId* PartyId)
{
	static auto Func = Class->GetFunction("EOSSubsystemAvanced", "GetPartyMembers");

	Params::UEOSSubsystemAvanced_GetPartyMembers_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PartyId = PartyId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.EOSSubsystemAvanced.GetJoinedParties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UEOSPartyId*>         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UEOSPartyId*> UEOSSubsystemAvanced::GetJoinedParties(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("EOSSubsystemAvanced", "GetJoinedParties");

	Params::UEOSSubsystemAvanced_GetJoinedParties_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.EventManagerComponent.OnAmmoBoxAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UEventManagerComponent::OnAmmoBoxAction()
{
	static auto Func = Class->GetFunction("EventManagerComponent", "OnAmmoBoxAction");

	Params::UEventManagerComponent_OnAmmoBoxAction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.EventManagerComponent.AmmoBoxAction
// (Net, Native, Event, Public, NetClient)
// Parameters:

void UEventManagerComponent::AmmoBoxAction()
{
	static auto Func = Class->GetFunction("EventManagerComponent", "AmmoBoxAction");

	Params::UEventManagerComponent_AmmoBoxAction_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.FOVManagerComponent.SetMeshFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewMeshFOV                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFOVManagerComponent::SetMeshFOV(float NewMeshFOV)
{
	static auto Func = Class->GetFunction("FOVManagerComponent", "SetMeshFOV");

	Params::UFOVManagerComponent_SetMeshFOV_Params Parms;

	Parms.NewMeshFOV = NewMeshFOV;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.FOVManagerComponent.SetDefaultCameraFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewDefaultCameraFOV                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFOVManagerComponent::SetDefaultCameraFOV(float NewDefaultCameraFOV)
{
	static auto Func = Class->GetFunction("FOVManagerComponent", "SetDefaultCameraFOV");

	Params::UFOVManagerComponent_SetDefaultCameraFOV_Params Parms;

	Parms.NewDefaultCameraFOV = NewDefaultCameraFOV;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.FOVManagerComponent.SetCameraFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCameraFOV                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFOVManagerComponent::SetCameraFOV(float NewCameraFOV)
{
	static auto Func = Class->GetFunction("FOVManagerComponent", "SetCameraFOV");

	Params::UFOVManagerComponent_SetCameraFOV_Params Parms;

	Parms.NewCameraFOV = NewCameraFOV;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.FOVManagerComponent.HardResetMeshFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFOVManagerComponent::HardResetMeshFOV()
{
	static auto Func = Class->GetFunction("FOVManagerComponent", "HardResetMeshFOV");

	Params::UFOVManagerComponent_HardResetMeshFOV_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.FOVManagerComponent.HardResetCameraFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFOVManagerComponent::HardResetCameraFOV()
{
	static auto Func = Class->GetFunction("FOVManagerComponent", "HardResetCameraFOV");

	Params::UFOVManagerComponent_HardResetCameraFOV_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.FOVManagerInterface.SetCorrectiveFovMaterial
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseFovMaterial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFOVManagerInterface::SetCorrectiveFovMaterial(bool UseFovMaterial)
{
	static auto Func = Class->GetFunction("FOVManagerInterface", "SetCorrectiveFovMaterial");

	Params::UFOVManagerInterface_SetCorrectiveFovMaterial_Params Parms;

	Parms.UseFovMaterial = UseFovMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.GunModulesInfo.FindModule
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FGunModuleInfo>      Array                                                            (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class UItem_Module_General>ModuleClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGunModuleInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGunModuleInfo UGunModulesInfo::FindModule(const TArray<struct FGunModuleInfo>& Array, TSubclassOf<class UItem_Module_General> ModuleClass)
{
	static auto Func = Class->GetFunction("GunModulesInfo", "FindModule");

	Params::UGunModulesInfo_FindModule_Params Parms;

	Parms.Array = Array;
	Parms.ModuleClass = ModuleClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.HealthStatsComponent.OnRep_HealthProtection
// (Final, Native, Private)
// Parameters:

void UHealthStatsComponent::OnRep_HealthProtection()
{
	static auto Func = Class->GetFunction("HealthStatsComponent", "OnRep_HealthProtection");

	Params::UHealthStatsComponent_OnRep_HealthProtection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.HealthStatsComponent.OnRep_Health
// (Final, Native, Private)
// Parameters:
// uint8                              PreviousHealth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHealthStatsComponent::OnRep_Health(uint8 PreviousHealth)
{
	static auto Func = Class->GetFunction("HealthStatsComponent", "OnRep_Health");

	Params::UHealthStatsComponent_OnRep_Health_Params Parms;

	Parms.PreviousHealth = PreviousHealth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.HealthStatsComponent.KillSelf_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:

void UHealthStatsComponent::KillSelf_server()
{
	static auto Func = Class->GetFunction("HealthStatsComponent", "KillSelf_server");

	Params::UHealthStatsComponent_KillSelf_server_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.HealthStatsComponent.GetStamina
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHealthStatsComponent::GetStamina()
{
	static auto Func = Class->GetFunction("HealthStatsComponent", "GetStamina");

	Params::UHealthStatsComponent_GetStamina_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.HealthStatsComponent.GetHealthProtection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHealthStatsComponent::GetHealthProtection()
{
	static auto Func = Class->GetFunction("HealthStatsComponent", "GetHealthProtection");

	Params::UHealthStatsComponent_GetHealthProtection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.HealthStatsComponent.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHealthStatsComponent::GetHealth()
{
	static auto Func = Class->GetFunction("HealthStatsComponent", "GetHealth");

	Params::UHealthStatsComponent_GetHealth_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.InspectManagerComponent.SetPivotOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Offset                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInspectManagerComponent::SetPivotOffset(const struct FVector2D& Offset)
{
	static auto Func = Class->GetFunction("InspectManagerComponent", "SetPivotOffset");

	Params::UInspectManagerComponent_SetPivotOffset_Params Parms;

	Parms.Offset = Offset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InspectManagerComponent.ResetRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInspectManagerComponent::ResetRotation()
{
	static auto Func = Class->GetFunction("InspectManagerComponent", "ResetRotation");

	Params::UInspectManagerComponent_ResetRotation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InspectManagerComponent.OnClicked
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInspectManagerComponent::OnClicked(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto Func = Class->GetFunction("InspectManagerComponent", "OnClicked");

	Params::UInspectManagerComponent_OnClicked_Params Parms;

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InspectManagerComponent.EnableInspect
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UInspectManagerComponent::EnableInspect()
{
	static auto Func = Class->GetFunction("InspectManagerComponent", "EnableInspect");

	Params::UInspectManagerComponent_EnableInspect_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InspectManagerComponent.DisableInspect
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UInspectManagerComponent::DisableInspect()
{
	static auto Func = Class->GetFunction("InspectManagerComponent", "DisableInspect");

	Params::UInspectManagerComponent_DisableInspect_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InteractInterface.StopInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInteractInterface::StopInteract(class UPG_Game_Character* Character)
{
	static auto Func = Class->GetFunction("InteractInterface", "StopInteract");

	Params::UInteractInterface_StopInteract_Params Parms;

	Parms.Character = Character;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InteractInterface.StartInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInteractInterface::StartInteract(class UPG_Game_Character* Character)
{
	static auto Func = Class->GetFunction("InteractInterface", "StartInteract");

	Params::UInteractInterface_StartInteract_Params Parms;

	Parms.Character = Character;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InteractInterface.SetPlayerLooks
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLooks                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInteractInterface::SetPlayerLooks(class UPG_Game_Character* Character, bool bIsLooks)
{
	static auto Func = Class->GetFunction("InteractInterface", "SetPlayerLooks");

	Params::UInteractInterface_SetPlayerLooks_Params Parms;

	Parms.Character = Character;
	Parms.bIsLooks = bIsLooks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InventoryComponent_Base.UpdatePlayerCombinedInfo
// (Native, Protected, HasOutParams)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent_Base::UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static auto Func = Class->GetFunction("InventoryComponent_Base", "UpdatePlayerCombinedInfo");

	Params::UInventoryComponent_Base_UpdatePlayerCombinedInfo_Params Parms;

	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InventoryComponent_Base.OnRep_SecondaryGun
// (Final, Native, Private)
// Parameters:

void UInventoryComponent_Base::OnRep_SecondaryGun()
{
	static auto Func = Class->GetFunction("InventoryComponent_Base", "OnRep_SecondaryGun");

	Params::UInventoryComponent_Base_OnRep_SecondaryGun_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InventoryComponent_Base.OnRep_PrimaryGun
// (Final, Native, Private)
// Parameters:

void UInventoryComponent_Base::OnRep_PrimaryGun()
{
	static auto Func = Class->GetFunction("InventoryComponent_Base", "OnRep_PrimaryGun");

	Params::UInventoryComponent_Base_OnRep_PrimaryGun_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InventoryComponent_Game.SetGunModules
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GunInstanceId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsInstanceId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UInventoryComponent_Game::SetGunModules(const class FString& GunInstanceId, TArray<class FString>& ItemsInstanceId)
{
	static auto Func = Class->GetFunction("InventoryComponent_Game", "SetGunModules");

	Params::UInventoryComponent_Game_SetGunModules_Params Parms;

	Parms.GunInstanceId = GunInstanceId;
	Parms.ItemsInstanceId = ItemsInstanceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.InventoryComponent_Game.RequestSetGunModules_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class FString                      GunInstanceId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsInstanceId                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInventoryComponent_Game::RequestSetGunModules_server(const class FString& GunInstanceId, TArray<class FString>& ItemsInstanceId)
{
	static auto Func = Class->GetFunction("InventoryComponent_Game", "RequestSetGunModules_server");

	Params::UInventoryComponent_Game_RequestSetGunModules_server_Params Parms;

	Parms.GunInstanceId = GunInstanceId;
	Parms.ItemsInstanceId = ItemsInstanceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InventoryComponent_Game.RequestEquipItems_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// TArray<class FString>              ItemsInstanceId                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInventoryComponent_Game::RequestEquipItems_server(TArray<class FString>& ItemsInstanceId)
{
	static auto Func = Class->GetFunction("InventoryComponent_Game", "RequestEquipItems_server");

	Params::UInventoryComponent_Game_RequestEquipItems_server_Params Parms;

	Parms.ItemsInstanceId = ItemsInstanceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InventoryComponent_Game.OnRep_GrenadesNumber
// (Final, Native, Private)
// Parameters:

void UInventoryComponent_Game::OnRep_GrenadesNumber()
{
	static auto Func = Class->GetFunction("InventoryComponent_Game", "OnRep_GrenadesNumber");

	Params::UInventoryComponent_Game_OnRep_GrenadesNumber_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InventoryComponent_Game.OnRep_CurrentGun
// (Final, Native, Private)
// Parameters:
// class UItem_Gun_General*           PreviousGun                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent_Game::OnRep_CurrentGun(class UItem_Gun_General* PreviousGun)
{
	static auto Func = Class->GetFunction("InventoryComponent_Game", "OnRep_CurrentGun");

	Params::UInventoryComponent_Game_OnRep_CurrentGun_Params Parms;

	Parms.PreviousGun = PreviousGun;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.InventoryComponent_Game.EquipItems
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              ItemsInstanceId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UInventoryComponent_Game::EquipItems(TArray<class FString>& ItemsInstanceId)
{
	static auto Func = Class->GetFunction("InventoryComponent_Game", "EquipItems");

	Params::UInventoryComponent_Game_EquipItems_Params Parms;

	Parms.ItemsInstanceId = ItemsInstanceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.InventoryComponent_Game.AddGrenate_server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// uint8                              Number                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent_Game::AddGrenate_server(uint8 Number)
{
	static auto Func = Class->GetFunction("InventoryComponent_Game", "AddGrenate_server");

	Params::UInventoryComponent_Game_AddGrenate_server_Params Parms;

	Parms.Number = Number;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Grenade_General.OnMeshHit
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UItem_Grenade_General::OnMeshHit(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("Item_Grenade_General", "OnMeshHit");

	Params::UItem_Grenade_General_OnMeshHit_Params Parms;

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Grenade_General.OnGrenadeThrow
// (Event, Public, BlueprintEvent)
// Parameters:

void UItem_Grenade_General::OnGrenadeThrow()
{
	static auto Func = Class->GetFunction("Item_Grenade_General", "OnGrenadeThrow");

	Params::UItem_Grenade_General_OnGrenadeThrow_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.Item_Grenade_General.NotifyThrow_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize         StartPosition                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize         Impulse                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Grenade_General::NotifyThrow_server(struct FVector_NetQuantize& StartPosition, struct FVector_NetQuantize& Impulse)
{
	static auto Func = Class->GetFunction("Item_Grenade_General", "NotifyThrow_server");

	Params::UItem_Grenade_General_NotifyThrow_server_Params Parms;

	Parms.StartPosition = StartPosition;
	Parms.Impulse = Impulse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.UpdatePlayerCombinedInfo
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "UpdatePlayerCombinedInfo");

	Params::UItem_Gun_General_UpdatePlayerCombinedInfo_Params Parms;

	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.UpdateAmmoCount_server
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// uint8                              CurrentNumberAmmo                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::UpdateAmmoCount_server(uint8 CurrentNumberAmmo)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "UpdateAmmoCount_server");

	Params::UItem_Gun_General_UpdateAmmoCount_server_Params Parms;

	Parms.CurrentNumberAmmo = CurrentNumberAmmo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.SetGunModules
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*          Modules                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::SetGunModules(class UPlayFabJsonObject* Modules)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "SetGunModules");

	Params::UItem_Gun_General_SetGunModules_Params Parms;

	Parms.Modules = Modules;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.RequestReload_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// uint8                              CurrentNumberAmmo                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::RequestReload_server(uint8 CurrentNumberAmmo)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "RequestReload_server");

	Params::UItem_Gun_General_RequestReload_server_Params Parms;

	Parms.CurrentNumberAmmo = CurrentNumberAmmo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.OnSetPlayerState
// (Final, Native, Private)
// Parameters:

void UItem_Gun_General::OnSetPlayerState()
{
	static auto Func = Class->GetFunction("Item_Gun_General", "OnSetPlayerState");

	Params::UItem_Gun_General_OnSetPlayerState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.OnRep_ReloadCaller
// (Final, Native, Private)
// Parameters:
// uint8                              PreviousValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::OnRep_ReloadCaller(uint8 PreviousValue)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "OnRep_ReloadCaller");

	Params::UItem_Gun_General_OnRep_ReloadCaller_Params Parms;

	Parms.PreviousValue = PreviousValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.OnRep_GunShot
// (Final, Native, Private)
// Parameters:
// struct FGunShot                    PreviousShot                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UItem_Gun_General::OnRep_GunShot(const struct FGunShot& PreviousShot)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "OnRep_GunShot");

	Params::UItem_Gun_General_OnRep_GunShot_Params Parms;

	Parms.PreviousShot = PreviousShot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.OnRep_GunHitOfShortShot
// (Final, Native, Private)
// Parameters:
// struct FVector_NetQuantize         PreviousValue                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::OnRep_GunHitOfShortShot(const struct FVector_NetQuantize& PreviousValue)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "OnRep_GunHitOfShortShot");

	Params::UItem_Gun_General_OnRep_GunHitOfShortShot_Params Parms;

	Parms.PreviousValue = PreviousValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.OnRep_CurrentStockAmmo
// (Final, Native, Private)
// Parameters:

void UItem_Gun_General::OnRep_CurrentStockAmmo()
{
	static auto Func = Class->GetFunction("Item_Gun_General", "OnRep_CurrentStockAmmo");

	Params::UItem_Gun_General_OnRep_CurrentStockAmmo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.OnRep_CurrentGunModuleClasses
// (Final, Native, Private)
// Parameters:

void UItem_Gun_General::OnRep_CurrentGunModuleClasses()
{
	static auto Func = Class->GetFunction("Item_Gun_General", "OnRep_CurrentGunModuleClasses");

	Params::UItem_Gun_General_OnRep_CurrentGunModuleClasses_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.OnRep_CallHardReset
// (Final, Native, Private)
// Parameters:
// uint8                              PreviousValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::OnRep_CallHardReset(uint8 PreviousValue)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "OnRep_CallHardReset");

	Params::UItem_Gun_General_OnRep_CallHardReset_Params Parms;

	Parms.PreviousValue = PreviousValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.NotifyServerTraceHit
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGunHitOnCharacter          HitOnCharacter                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyServerTraceHit(struct FGunHitOnCharacter& HitOnCharacter)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "NotifyServerTraceHit");

	Params::UItem_Gun_General_NotifyServerTraceHit_Params Parms;

	Parms.HitOnCharacter = HitOnCharacter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.NotifyServerOfShot
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGunShot                    GunShot                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyServerOfShot(struct FGunShot& GunShot)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "NotifyServerOfShot");

	Params::UItem_Gun_General_NotifyServerOfShot_Params Parms;

	Parms.GunShot = GunShot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.NotifyServerHitWithEnergy
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGunHitOnCharacter          HitOnCharacter                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// uint8                              Energy                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyServerHitWithEnergy(struct FGunHitOnCharacter& HitOnCharacter, uint8 Energy)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "NotifyServerHitWithEnergy");

	Params::UItem_Gun_General_NotifyServerHitWithEnergy_Params Parms;

	Parms.HitOnCharacter = HitOnCharacter;
	Parms.Energy = Energy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.NotifyServerHit
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGunHitOnCharacter          HitOnCharacter                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyServerHit(struct FGunHitOnCharacter& HitOnCharacter)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "NotifyServerHit");

	Params::UItem_Gun_General_NotifyServerHit_Params Parms;

	Parms.HitOnCharacter = HitOnCharacter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.NotifyGrantedProgressDataContainer_client
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// class FString                      ItemInstanceId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyGrantedProgressDataContainer_client(const class FString& ItemInstanceId)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "NotifyGrantedProgressDataContainer_client");

	Params::UItem_Gun_General_NotifyGrantedProgressDataContainer_client_Params Parms;

	Parms.ItemInstanceId = ItemInstanceId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.GetItemReference
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayFabJsonObject* UItem_Gun_General::GetItemReference()
{
	static auto Func = Class->GetFunction("Item_Gun_General", "GetItemReference");

	Params::UItem_Gun_General_GetItemReference_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.Item_Gun_General.GetForwardShot
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UItem_Gun_General::GetForwardShot()
{
	static auto Func = Class->GetFunction("Item_Gun_General", "GetForwardShot");

	Params::UItem_Gun_General_GetForwardShot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.Item_Gun_General.GetCurrentStockAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UItem_Gun_General::GetCurrentStockAmmo()
{
	static auto Func = Class->GetFunction("Item_Gun_General", "GetCurrentStockAmmo");

	Params::UItem_Gun_General_GetCurrentStockAmmo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.Item_Gun_General.CockBolt_server
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UItem_Gun_General::CockBolt_server()
{
	static auto Func = Class->GetFunction("Item_Gun_General", "CockBolt_server");

	Params::UItem_Gun_General_CockBolt_server_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.CockBolt_multicast
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:

void UItem_Gun_General::CockBolt_multicast()
{
	static auto Func = Class->GetFunction("Item_Gun_General", "CockBolt_multicast");

	Params::UItem_Gun_General_CockBolt_multicast_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Gun_General.AddStockAmmo_server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int8                               AddAmmo                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::AddStockAmmo_server(int8 AddAmmo)
{
	static auto Func = Class->GetFunction("Item_Gun_General", "AddStockAmmo_server");

	Params::UItem_Gun_General_AddStockAmmo_server_Params Parms;

	Parms.AddAmmo = AddAmmo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Module_Flashlight.SetFlashlightEnable_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                               IsEnable                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::SetFlashlightEnable_server(bool IsEnable)
{
	static auto Func = Class->GetFunction("Item_Module_Flashlight", "SetFlashlightEnable_server");

	Params::UItem_Module_Flashlight_SetFlashlightEnable_server_Params Parms;

	Parms.IsEnable = IsEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Module_Flashlight.SetFlashlightEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnable                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCallOnServer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::SetFlashlightEnable(bool IsEnable, bool bCallOnServer)
{
	static auto Func = Class->GetFunction("Item_Module_Flashlight", "SetFlashlightEnable");

	Params::UItem_Module_Flashlight_SetFlashlightEnable_Params Parms;

	Parms.IsEnable = IsEnable;
	Parms.bCallOnServer = bCallOnServer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Module_Flashlight.OnSetCurrentGun
// (Final, Native, Private)
// Parameters:
// class UItem_Gun_General*           PreviousGun                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::OnSetCurrentGun(class UItem_Gun_General* PreviousGun)
{
	static auto Func = Class->GetFunction("Item_Module_Flashlight", "OnSetCurrentGun");

	Params::UItem_Module_Flashlight_OnSetCurrentGun_Params Parms;

	Parms.PreviousGun = PreviousGun;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Module_Flashlight.OnRep_IsEnable
// (Final, Native, Protected)
// Parameters:
// bool                               OldState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::OnRep_IsEnable(bool OldState)
{
	static auto Func = Class->GetFunction("Item_Module_Flashlight", "OnRep_IsEnable");

	Params::UItem_Module_Flashlight_OnRep_IsEnable_Params Parms;

	Parms.OldState = OldState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.Item_Module_Flashlight.OnChangeEnableState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPlaySound                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::OnChangeEnableState(bool bPlaySound)
{
	static auto Func = Class->GetFunction("Item_Module_Flashlight", "OnChangeEnableState");

	Params::UItem_Module_Flashlight_OnChangeEnableState_Params Parms;

	Parms.bPlaySound = bPlaySound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.Item_Module_Optic.ToggleAiming
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAiming                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Optic::ToggleAiming(bool IsAiming)
{
	static auto Func = Class->GetFunction("Item_Module_Optic", "ToggleAiming");

	Params::UItem_Module_Optic_ToggleAiming_Params Parms;

	Parms.IsAiming = IsAiming;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_FunctionLibraryKit.ParseOption
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Options                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Separator                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPG_FunctionLibraryKit::ParseOption(const class FString& Options, const class FString& Key, const class FString& Separator)
{
	static auto Func = Class->GetFunction("PG_FunctionLibraryKit", "ParseOption");

	Params::UPG_FunctionLibraryKit_ParseOption_Params Parms;

	Parms.Options = Options;
	Parms.Key = Key;
	Parms.Separator = Separator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.GetRegionEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      RegionName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAzureRegion            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAzureRegion UPG_FunctionLibraryKit::GetRegionEnum(const class FString& RegionName)
{
	static auto Func = Class->GetFunction("PG_FunctionLibraryKit", "GetRegionEnum");

	Params::UPG_FunctionLibraryKit_GetRegionEnum_Params Parms;

	Parms.RegionName = RegionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.GetRateScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimSequenceBase*           AnimationSequenceBase                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPG_FunctionLibraryKit::GetRateScale(class UAnimSequenceBase* AnimationSequenceBase)
{
	static auto Func = Class->GetFunction("PG_FunctionLibraryKit", "GetRateScale");

	Params::UPG_FunctionLibraryKit_GetRateScale_Params Parms;

	Parms.AnimationSequenceBase = AnimationSequenceBase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.GetProjectVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPG_FunctionLibraryKit::GetProjectVersion()
{
	static auto Func = Class->GetFunction("PG_FunctionLibraryKit", "GetProjectVersion");

	Params::UPG_FunctionLibraryKit_GetProjectVersion_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.GetBuildNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_FunctionLibraryKit::GetBuildNumber()
{
	static auto Func = Class->GetFunction("PG_FunctionLibraryKit", "GetBuildNumber");

	Params::UPG_FunctionLibraryKit_GetBuildNumber_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.ExitGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UPG_FunctionLibraryKit::ExitGame()
{
	static auto Func = Class->GetFunction("PG_FunctionLibraryKit", "ExitGame");

	Params::UPG_FunctionLibraryKit_ExitGame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameInstance.GetServerGameInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UServerGameInstance*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UServerGameInstance* UPG_GameInstance::GetServerGameInstance()
{
	static auto Func = Class->GetFunction("PG_GameInstance", "GetServerGameInstance");

	Params::UPG_GameInstance_GetServerGameInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameInstance.GetClientGameInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClientGameInstance*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClientGameInstance* UPG_GameInstance::GetClientGameInstance()
{
	static auto Func = Class->GetFunction("PG_GameInstance", "GetClientGameInstance");

	Params::UPG_GameInstance_GetClientGameInstance_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameMode_Game.LoginPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPG_PlayerController_Game*   PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerMasterId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_GameMode_Game::LoginPlayer(class UPG_PlayerController_Game* PlayerController, const class FString& PlayerMasterId)
{
	static auto Func = Class->GetFunction("PG_GameMode_Game", "LoginPlayer");

	Params::UPG_GameMode_Game_LoginPlayer_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.PlayerMasterId = PlayerMasterId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.SetCanMovePlayers
// (Final, Native, Public)
// Parameters:
// bool                               NewMoveState                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_GameState_Game::SetCanMovePlayers(bool NewMoveState)
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "SetCanMovePlayers");

	Params::UPG_GameState_Game_SetCanMovePlayers_Params Parms;

	Parms.NewMoveState = NewMoveState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_WinningTeam
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_WinningTeam()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_WinningTeam");

	Params::UPG_GameState_Game_OnRep_WinningTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_TeamBravo
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_TeamBravo()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_TeamBravo");

	Params::UPG_GameState_Game_OnRep_TeamBravo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_TeamAlpha
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_TeamAlpha()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_TeamAlpha");

	Params::UPG_GameState_Game_OnRep_TeamAlpha_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_ServerFps
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_ServerFps()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_ServerFps");

	Params::UPG_GameState_Game_OnRep_ServerFps_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_ScoreBravoTeam
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_ScoreBravoTeam()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_ScoreBravoTeam");

	Params::UPG_GameState_Game_OnRep_ScoreBravoTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_ScoreAlphaTeam
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_ScoreAlphaTeam()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_ScoreAlphaTeam");

	Params::UPG_GameState_Game_OnRep_ScoreAlphaTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_Players
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_Players()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_Players");

	Params::UPG_GameState_Game_OnRep_Players_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_GameTimer
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_GameTimer()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_GameTimer");

	Params::UPG_GameState_Game_OnRep_GameTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_GameState
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_GameState()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_GameState");

	Params::UPG_GameState_Game_OnRep_GameState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.OnRep_CanMovePlayers
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_CanMovePlayers()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "OnRep_CanMovePlayers");

	Params::UPG_GameState_Game_OnRep_CanMovePlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.NotifyPlayerWasKicked
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class FString                      badGuyName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNameWasOptimized                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_GameState_Game::NotifyPlayerWasKicked(const class FString& badGuyName, bool bNameWasOptimized)
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "NotifyPlayerWasKicked");

	Params::UPG_GameState_Game_NotifyPlayerWasKicked_Params Parms;

	Parms.badGuyName = badGuyName;
	Parms.bNameWasOptimized = bNameWasOptimized;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_GameState_Game.GetScoreBravoTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_GameState_Game::GetScoreBravoTeam()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "GetScoreBravoTeam");

	Params::UPG_GameState_Game_GetScoreBravoTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameState_Game.GetScoreAlphaTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_GameState_Game::GetScoreAlphaTeam()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "GetScoreAlphaTeam");

	Params::UPG_GameState_Game_GetScoreAlphaTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameState_Game.GetMaxScoreForWin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_GameState_Game::GetMaxScoreForWin()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "GetMaxScoreForWin");

	Params::UPG_GameState_Game_GetMaxScoreForWin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameState_Game.GetGameTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_GameState_Game::GetGameTimer()
{
	static auto Func = Class->GetFunction("PG_GameState_Game", "GetGameTimer");

	Params::UPG_GameState_Game_GetGameTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.StopInteractWithObject_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UPG_Game_Character::StopInteractWithObject_server()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "StopInteractWithObject_server");

	Params::UPG_Game_Character_StopInteractWithObject_server_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.StopInteractWithObject
// (Final, Native, Protected)
// Parameters:

void UPG_Game_Character::StopInteractWithObject()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "StopInteractWithObject");

	Params::UPG_Game_Character_StopInteractWithObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.StartShooting
// (Event, Public, BlueprintEvent)
// Parameters:

void UPG_Game_Character::StartShooting()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "StartShooting");

	Params::UPG_Game_Character_StartShooting_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.StartInteractWithObject_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UActor*                      InteractActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::StartInteractWithObject_server(class UActor* InteractActor)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "StartInteractWithObject_server");

	Params::UPG_Game_Character_StartInteractWithObject_server_Params Parms;

	Parms.InteractActor = InteractActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.StartInteractWithObject
// (Final, Native, Protected)
// Parameters:

void UPG_Game_Character::StartInteractWithObject()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "StartInteractWithObject");

	Params::UPG_Game_Character_StartInteractWithObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.SetNeutralizationVignetteImpact
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewNeutralizationVignetteImpact                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::SetNeutralizationVignetteImpact(float NewNeutralizationVignetteImpact)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "SetNeutralizationVignetteImpact");

	Params::UPG_Game_Character_SetNeutralizationVignetteImpact_Params Parms;

	Parms.NewNeutralizationVignetteImpact = NewNeutralizationVignetteImpact;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.SetIsSprinting_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                               NewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::SetIsSprinting_server(bool NewState)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "SetIsSprinting_server");

	Params::UPG_Game_Character_SetIsSprinting_server_Params Parms;

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.Respawn_client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FVector_NetQuantize         NewLocation                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal   NewRotator                                                       (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::Respawn_client(struct FVector_NetQuantize& NewLocation, struct FVector_NetQuantizeNormal& NewRotator)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "Respawn_client");

	Params::UPG_Game_Character_Respawn_client_Params Parms;

	Parms.NewLocation = NewLocation;
	Parms.NewRotator = NewRotator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.Respawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPG_Game_Character::Respawn()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "Respawn");

	Params::UPG_Game_Character_Respawn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.PlayerLooks
// (Final, BlueprintAuthorityOnly, Native, Private)
// Parameters:

void UPG_Game_Character::PlayerLooks()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "PlayerLooks");

	Params::UPG_Game_Character_PlayerLooks_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.OnRep_RespawnCounter
// (Final, Native, Private)
// Parameters:
// uint8                              PreviousValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::OnRep_RespawnCounter(uint8 PreviousValue)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "OnRep_RespawnCounter");

	Params::UPG_Game_Character_OnRep_RespawnCounter_Params Parms;

	Parms.PreviousValue = PreviousValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.OnRep_PlayerAction
// (Final, Native, Private)
// Parameters:
// enum class EPlayerAction           PreviousAction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::OnRep_PlayerAction(enum class EPlayerAction PreviousAction)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "OnRep_PlayerAction");

	Params::UPG_Game_Character_OnRep_PlayerAction_Params Parms;

	Parms.PreviousAction = PreviousAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.NotifyDeathWithImpulse_multicast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class UPG_PlayerState_Game*        Killer                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlayerDeathType        DeathType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize         Impulse                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              BoneIndex                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::NotifyDeathWithImpulse_multicast(class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType, struct FVector_NetQuantize& Impulse, uint8& BoneIndex)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "NotifyDeathWithImpulse_multicast");

	Params::UPG_Game_Character_NotifyDeathWithImpulse_multicast_Params Parms;

	Parms.Killer = Killer;
	Parms.DeathType = DeathType;
	Parms.Impulse = Impulse;
	Parms.BoneIndex = BoneIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.NotifyDeath_multicast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class UPG_PlayerState_Game*        Killer                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlayerDeathType        DeathType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::NotifyDeath_multicast(class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "NotifyDeath_multicast");

	Params::UPG_Game_Character_NotifyDeath_multicast_Params Parms;

	Parms.Killer = Killer;
	Parms.DeathType = DeathType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.LeanBody_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int8                               LeanBodyAlpha                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::LeanBody_server(int8 LeanBodyAlpha)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "LeanBody_server");

	Params::UPG_Game_Character_LeanBody_server_Params Parms;

	Parms.LeanBodyAlpha = LeanBodyAlpha;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.HitAtProtectedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:

void UPG_Game_Character::HitAtProtectedCharacter()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "HitAtProtectedCharacter");

	Params::UPG_Game_Character_HitAtProtectedCharacter_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETeam                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETeam UPG_Game_Character::GetTeam()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "GetTeam");

	Params::UPG_Game_Character_GetTeam_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.GetPlayerAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPlayerAction           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPlayerAction UPG_Game_Character::GetPlayerAction()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "GetPlayerAction");

	Params::UPG_Game_Character_GetPlayerAction_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.GetNeutralizationVignetteImpact
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPG_Game_Character::GetNeutralizationVignetteImpact()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "GetNeutralizationVignetteImpact");

	Params::UPG_Game_Character_GetNeutralizationVignetteImpact_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.GetIsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPG_Game_Character::GetIsSprinting()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "GetIsSprinting");

	Params::UPG_Game_Character_GetIsSprinting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.GetActiveCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraComponent* UPG_Game_Character::GetActiveCamera()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "GetActiveCamera");

	Params::UPG_Game_Character_GetActiveCamera_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.EventTakeDamage
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::EventTakeDamage(struct FVector& Origin)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "EventTakeDamage");

	Params::UPG_Game_Character_EventTakeDamage_Params Parms;

	Parms.Origin = Origin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.DeathEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPG_PlayerState_Game*        Killer                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlayerDeathType        DeathType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::DeathEvent(class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "DeathEvent");

	Params::UPG_Game_Character_DeathEvent_Params Parms;

	Parms.Killer = Killer;
	Parms.DeathType = DeathType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.ChangeIsAlive
// (Final, Native, Public)
// Parameters:

void UPG_Game_Character::ChangeIsAlive()
{
	static auto Func = Class->GetFunction("PG_Game_Character", "ChangeIsAlive");

	Params::UPG_Game_Character_ChangeIsAlive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.CameraNeutralizationEffectEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::CameraNeutralizationEffectEvent(float Damage)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "CameraNeutralizationEffectEvent");

	Params::UPG_Game_Character_CameraNeutralizationEffectEvent_Params Parms;

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.ActionWhenTakeDamage_client
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::ActionWhenTakeDamage_client(class UActor* DamageCauser)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "ActionWhenTakeDamage_client");

	Params::UPG_Game_Character_ActionWhenTakeDamage_client_Params Parms;

	Parms.DamageCauser = DamageCauser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_Game_Character.ActionWhenGunHit_client
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// class UPG_Game_Character*          CharacterInstigator                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              HitBoneIndex                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::ActionWhenGunHit_client(class UPG_Game_Character* CharacterInstigator, uint8 HitBoneIndex)
{
	static auto Func = Class->GetFunction("PG_Game_Character", "ActionWhenGunHit_client");

	Params::UPG_Game_Character_ActionWhenGunHit_client_Params Parms;

	Parms.CharacterInstigator = CharacterInstigator;
	Parms.HitBoneIndex = HitBoneIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_BeaconClient.SendNumberInQueue_client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint8                              Number                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_BeaconClient::SendNumberInQueue_client(uint8 Number)
{
	static auto Func = Class->GetFunction("PG_BeaconClient", "SendNumberInQueue_client");

	Params::UPG_BeaconClient_SendNumberInQueue_client_Params Parms;

	Parms.Number = Number;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_BeaconClient.ResponseReserveSlot_client
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// uint8                              Payload                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_BeaconClient::ResponseReserveSlot_client(uint8 Payload)
{
	static auto Func = Class->GetFunction("PG_BeaconClient", "ResponseReserveSlot_client");

	Params::UPG_BeaconClient_ResponseReserveSlot_client_Params Parms;

	Parms.Payload = Payload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_BeaconClient.RequestReserveSlot_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<struct FUniqueNetIdRepl>    UnequeIds                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               IsUsedMatchmaker                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_BeaconClient::RequestReserveSlot_server(TArray<struct FUniqueNetIdRepl>& UnequeIds, bool IsUsedMatchmaker)
{
	static auto Func = Class->GetFunction("PG_BeaconClient", "RequestReserveSlot_server");

	Params::UPG_BeaconClient_RequestReserveSlot_server_Params Parms;

	Parms.UnequeIds = UnequeIds;
	Parms.IsUsedMatchmaker = IsUsedMatchmaker;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_BeaconClient.RequestReserveSlot
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FUniqueNetIdRepl>    UnequeIds                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               IsUsedMatchmaker                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnResponseReserveSlot                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnPutInQueue                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_BeaconClient::RequestReserveSlot(TArray<struct FUniqueNetIdRepl>& UnequeIds, bool IsUsedMatchmaker, FDelegateProperty_ OnResponseReserveSlot, FDelegateProperty_ OnPutInQueue)
{
	static auto Func = Class->GetFunction("PG_BeaconClient", "RequestReserveSlot");

	Params::UPG_BeaconClient_RequestReserveSlot_Params Parms;

	Parms.UnequeIds = UnequeIds;
	Parms.IsUsedMatchmaker = IsUsedMatchmaker;
	Parms.OnResponseReserveSlot = OnResponseReserveSlot;
	Parms.OnPutInQueue = OnPutInQueue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_BeaconClient.LeaveQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPG_BeaconClient::LeaveQueue()
{
	static auto Func = Class->GetFunction("PG_BeaconClient", "LeaveQueue");

	Params::UPG_BeaconClient_LeaveQueue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_BeaconClient.ConnectToServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BeaconPort                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnConnectedStateChange                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPG_BeaconClient::ConnectToServer(const class FString& IP, int32 BeaconPort, FDelegateProperty_ OnConnectedStateChange)
{
	static auto Func = Class->GetFunction("PG_BeaconClient", "ConnectToServer");

	Params::UPG_BeaconClient_ConnectToServer_Params Parms;

	Parms.IP = IP;
	Parms.BeaconPort = BeaconPort;
	Parms.OnConnectedStateChange = OnConnectedStateChange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_PlayerController_Base.ShowError
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorMessage                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ErrorDetails                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPG_PlayerController_Base::ShowError(class FText& ErrorMessage, class FText& ErrorDetails)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Base", "ShowError");

	Params::UPG_PlayerController_Base_ShowError_Params Parms;

	Parms.ErrorMessage = ErrorMessage;
	Parms.ErrorDetails = ErrorDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_PlayerController_Base.IsInvertMouse
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPG_PlayerController_Base::IsInvertMouse()
{
	static auto Func = Class->GetFunction("PG_PlayerController_Base", "IsInvertMouse");

	Params::UPG_PlayerController_Base_IsInvertMouse_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_PlayerController_Base.GetMouseSensitivityValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPG_PlayerController_Base::GetMouseSensitivityValue()
{
	static auto Func = Class->GetFunction("PG_PlayerController_Base", "GetMouseSensitivityValue");

	Params::UPG_PlayerController_Base_GetMouseSensitivityValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_PlayerController_Base.GetMouseSensitivityAimingValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPG_PlayerController_Base::GetMouseSensitivityAimingValue()
{
	static auto Func = Class->GetFunction("PG_PlayerController_Base", "GetMouseSensitivityAimingValue");

	Params::UPG_PlayerController_Base_GetMouseSensitivityAimingValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_PlayerController_Game.VoteKick
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UPG_PlayerState_Game*        badGuy                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::VoteKick(class UPG_PlayerState_Game* badGuy)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "VoteKick");

	Params::UPG_PlayerController_Game_VoteKick_Params Parms;

	Parms.badGuy = badGuy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerController_Game.StopInteractionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPG_PlayerController_Game::StopInteractionEvent()
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "StopInteractionEvent");

	Params::UPG_PlayerController_Game_StopInteractionEvent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_PlayerController_Game.StopInteraction_Client
// (Net, Native, Event, Public, NetClient)
// Parameters:

void UPG_PlayerController_Game::StopInteraction_Client()
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "StopInteraction_Client");

	Params::UPG_PlayerController_Game_StopInteraction_Client_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerController_Game.StartInteractionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InteractionTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::StartInteractionEvent(float InteractionTime)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "StartInteractionEvent");

	Params::UPG_PlayerController_Game_StartInteractionEvent_Params Parms;

	Parms.InteractionTime = InteractionTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_PlayerController_Game.StartInteraction_Client
// (Net, Native, Event, Public, NetClient)
// Parameters:
// float                              InteractionTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::StartInteraction_Client(float InteractionTime)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "StartInteraction_Client");

	Params::UPG_PlayerController_Game_StartInteraction_Client_Params Parms;

	Parms.InteractionTime = InteractionTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerController_Game.SetVisibleLoadingScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::SetVisibleLoadingScreen(bool IsVisible)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "SetVisibleLoadingScreen");

	Params::UPG_PlayerController_Game_SetVisibleLoadingScreen_Params Parms;

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnSquadMember_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UPG_PlayerState_Game*        SquadMember                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::RequestSpawnOnSquadMember_server(class UPG_PlayerState_Game* SquadMember)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "RequestSpawnOnSquadMember_server");

	Params::UPG_PlayerController_Game_RequestSpawnOnSquadMember_server_Params Parms;

	Parms.SquadMember = SquadMember;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnControlPoint_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// enum class EControlPoint           SpawnToControlPoint                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::RequestSpawnOnControlPoint_server(enum class EControlPoint SpawnToControlPoint)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "RequestSpawnOnControlPoint_server");

	Params::UPG_PlayerController_Game_RequestSpawnOnControlPoint_server_Params Parms;

	Parms.SpawnToControlPoint = SpawnToControlPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnBase_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:

void UPG_PlayerController_Game::RequestSpawnOnBase_server()
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "RequestSpawnOnBase_server");

	Params::UPG_PlayerController_Game_RequestSpawnOnBase_server_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerController_Game.OnRep_DeployIsAvailable
// (Final, Native, Private)
// Parameters:

void UPG_PlayerController_Game::OnRep_DeployIsAvailable()
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "OnRep_DeployIsAvailable");

	Params::UPG_PlayerController_Game_OnRep_DeployIsAvailable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerController_Game.LoginPlayer_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class FString                      PlayerMasterId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::LoginPlayer_server(const class FString& PlayerMasterId)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "LoginPlayer_server");

	Params::UPG_PlayerController_Game_LoginPlayer_server_Params Parms;

	Parms.PlayerMasterId = PlayerMasterId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerController_Game.DisplayMessageToChatEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameChatMessage            Message                                                          (Parm, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::DisplayMessageToChatEvent(const struct FGameChatMessage& Message)
{
	static auto Func = Class->GetFunction("PG_PlayerController_Game", "DisplayMessageToChatEvent");

	Params::UPG_PlayerController_Game_DisplayMessageToChatEvent_Params Parms;

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_PlayerState_Base.UpdatePlayerCombinedInfo
// (Native, Protected, HasOutParams)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerState_Base::UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static auto Func = Class->GetFunction("PG_PlayerState_Base", "UpdatePlayerCombinedInfo");

	Params::UPG_PlayerState_Base_UpdatePlayerCombinedInfo_Params Parms;

	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerState_Base.SetPlayerName
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerState_Base::SetPlayerName(const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("PG_PlayerState_Base", "SetPlayerName");

	Params::UPG_PlayerState_Base_SetPlayerName_Params Parms;

	Parms.PlayerName = PlayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerState_Base.GetUniqueNetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UPG_PlayerState_Base::GetUniqueNetId()
{
	static auto Func = Class->GetFunction("PG_PlayerState_Base", "GetUniqueNetId");

	Params::UPG_PlayerState_Base_GetUniqueNetId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_PlayerState_Game.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETeam                   NewTeam                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerState_Game::SetTeam(enum class ETeam NewTeam)
{
	static auto Func = Class->GetFunction("PG_PlayerState_Game", "SetTeam");

	Params::UPG_PlayerState_Game_SetTeam_Params Parms;

	Parms.NewTeam = NewTeam;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_VoteKickPlayers
// (Final, Native, Private)
// Parameters:

void UPG_PlayerState_Game::OnRep_VoteKickPlayers()
{
	static auto Func = Class->GetFunction("PG_PlayerState_Game", "OnRep_VoteKickPlayers");

	Params::UPG_PlayerState_Game_OnRep_VoteKickPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_Team
// (Final, Native, Private)
// Parameters:

void UPG_PlayerState_Game::OnRep_Team()
{
	static auto Func = Class->GetFunction("PG_PlayerState_Game", "OnRep_Team");

	Params::UPG_PlayerState_Game_OnRep_Team_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_NumberKills
// (Final, Native, Private)
// Parameters:

void UPG_PlayerState_Game::OnRep_NumberKills()
{
	static auto Func = Class->GetFunction("PG_PlayerState_Game", "OnRep_NumberKills");

	Params::UPG_PlayerState_Game_OnRep_NumberKills_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_NumberDeaths
// (Final, Native, Private)
// Parameters:

void UPG_PlayerState_Game::OnRep_NumberDeaths()
{
	static auto Func = Class->GetFunction("PG_PlayerState_Game", "OnRep_NumberDeaths");

	Params::UPG_PlayerState_Game_OnRep_NumberDeaths_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PG_PlayerState_Game.CustomIsInactive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPG_PlayerState_Game::CustomIsInactive()
{
	static auto Func = Class->GetFunction("PG_PlayerState_Game", "CustomIsInactive");

	Params::UPG_PlayerState_Game_CustomIsInactive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.UpdatePlayerCombinedInfo
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerCoreComponent::UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "UpdatePlayerCombinedInfo");

	Params::UPlayerCoreComponent_UpdatePlayerCombinedInfo_Params Parms;

	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PlayerCoreComponent.Reset
// (Final, Native, Public)
// Parameters:

void UPlayerCoreComponent::Reset()
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "Reset");

	Params::UPlayerCoreComponent_Reset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PlayerCoreComponent.OnRep_TotalProgress
// (Final, Native, Private)
// Parameters:

void UPlayerCoreComponent::OnRep_TotalProgress()
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "OnRep_TotalProgress");

	Params::UPlayerCoreComponent_OnRep_TotalProgress_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PlayerCoreComponent.NotifyAddedGameScore_client
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// TArray<struct FScoreInfo>          ScoreInfos                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UPlayerCoreComponent::NotifyAddedGameScore_client(TArray<struct FScoreInfo>& ScoreInfos)
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "NotifyAddedGameScore_client");

	Params::UPlayerCoreComponent_NotifyAddedGameScore_client_Params Parms;

	Parms.ScoreInfos = ScoreInfos;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.PlayerCoreComponent.GetNextLevelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLevelInfo                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLevelInfo UPlayerCoreComponent::GetNextLevelInfo()
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "GetNextLevelInfo");

	Params::UPlayerCoreComponent_GetNextLevelInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.GetNextLevelByLevelID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        LevelID                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelInfo                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLevelInfo UPlayerCoreComponent::GetNextLevelByLevelID(class FName LevelID)
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "GetNextLevelByLevelID");

	Params::UPlayerCoreComponent_GetNextLevelByLevelID_Params Parms;

	Parms.LevelID = LevelID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.GetLevelByProgress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Progress                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelInfo                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLevelInfo UPlayerCoreComponent::GetLevelByProgress(int32 Progress)
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "GetLevelByProgress");

	Params::UPlayerCoreComponent_GetLevelByProgress_Params Parms;

	Parms.Progress = Progress;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.GetCurrentLevelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLevelInfo                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLevelInfo UPlayerCoreComponent::GetCurrentLevelInfo()
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "GetCurrentLevelInfo");

	Params::UPlayerCoreComponent_GetCurrentLevelInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.AddCredits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              AddCredits                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerCoreComponent::AddCredits(int32 AddCredits)
{
	static auto Func = Class->GetFunction("PlayerCoreComponent", "AddCredits");

	Params::UPlayerCoreComponent_AddCredits_Params Parms;

	Parms.AddCredits = AddCredits;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ServerGameInstance.OnGSDKShutdown
// (Final, Native, Protected)
// Parameters:

void UServerGameInstance::OnGSDKShutdown()
{
	static auto Func = Class->GetFunction("ServerGameInstance", "OnGSDKShutdown");

	Params::UServerGameInstance_OnGSDKShutdown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ServerGameInstance.OnGSDKServerActive
// (Final, Native, Protected)
// Parameters:

void UServerGameInstance::OnGSDKServerActive()
{
	static auto Func = Class->GetFunction("ServerGameInstance", "OnGSDKServerActive");

	Params::UServerGameInstance_OnGSDKServerActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ServerGameInstance.OnGSDKReadyForPlayers
// (Final, Native, Protected)
// Parameters:

void UServerGameInstance::OnGSDKReadyForPlayers()
{
	static auto Func = Class->GetFunction("ServerGameInstance", "OnGSDKReadyForPlayers");

	Params::UServerGameInstance_OnGSDKReadyForPlayers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.ServerGameInstance.OnGSDKHealthCheck
// (Final, Native, Protected)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UServerGameInstance::OnGSDKHealthCheck()
{
	static auto Func = Class->GetFunction("ServerGameInstance", "OnGSDKHealthCheck");

	Params::UServerGameInstance_OnGSDKHealthCheck_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.SquadComponent.OnRep_Members
// (Final, Native, Private)
// Parameters:

void USquadComponent::OnRep_Members()
{
	static auto Func = Class->GetFunction("SquadComponent", "OnRep_Members");

	Params::USquadComponent_OnRep_Members_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.SquadComponent.OnRep_CooldownCounter
// (Final, Native, Private)
// Parameters:

void USquadComponent::OnRep_CooldownCounter()
{
	static auto Func = Class->GetFunction("SquadComponent", "OnRep_CooldownCounter");

	Params::USquadComponent_OnRep_CooldownCounter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.SupportBox.OnCoverageEndOverlap
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USupportBox::OnCoverageEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("SupportBox", "OnCoverageEndOverlap");

	Params::USupportBox_OnCoverageEndOverlap_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.SupportBox.OnCoverageBeginOverlap
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Other                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               FromSweep                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USupportBox::OnCoverageBeginOverlap(class UPrimitiveComponent* OverlappedComp, class UActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("SupportBox", "OnCoverageBeginOverlap");

	Params::USupportBox_OnCoverageBeginOverlap_Params Parms;

	Parms.OverlappedComp = OverlappedComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.FromSweep = FromSweep;
	Parms.SweepResult = SweepResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.ToggleAiming_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UWeaponComponent::ToggleAiming_server()
{
	static auto Func = Class->GetFunction("WeaponComponent", "ToggleAiming_server");

	Params::UWeaponComponent_ToggleAiming_server_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.SetWantsToAiming_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                               NewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SetWantsToAiming_server(bool NewState)
{
	static auto Func = Class->GetFunction("WeaponComponent", "SetWantsToAiming_server");

	Params::UWeaponComponent_SetWantsToAiming_server_Params Parms;

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.SetStrivingGunRecoilAlpha_Pitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewStrivingPitchRecoil                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SetStrivingGunRecoilAlpha_Pitch(float NewStrivingPitchRecoil)
{
	static auto Func = Class->GetFunction("WeaponComponent", "SetStrivingGunRecoilAlpha_Pitch");

	Params::UWeaponComponent_SetStrivingGunRecoilAlpha_Pitch_Params Parms;

	Parms.NewStrivingPitchRecoil = NewStrivingPitchRecoil;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.SetGunRecoilIsActive_Backward
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWeaponComponent::SetGunRecoilIsActive_Backward()
{
	static auto Func = Class->GetFunction("WeaponComponent", "SetGunRecoilIsActive_Backward");

	Params::UWeaponComponent_SetGunRecoilIsActive_Backward_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.SetGunRecoilAlpha_Yaw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewYawRecoil                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SetGunRecoilAlpha_Yaw(float NewYawRecoil)
{
	static auto Func = Class->GetFunction("WeaponComponent", "SetGunRecoilAlpha_Yaw");

	Params::UWeaponComponent_SetGunRecoilAlpha_Yaw_Params Parms;

	Parms.NewYawRecoil = NewYawRecoil;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.SetGunRecoilAlpha_Roll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRollRecoil                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SetGunRecoilAlpha_Roll(float NewRollRecoil)
{
	static auto Func = Class->GetFunction("WeaponComponent", "SetGunRecoilAlpha_Roll");

	Params::UWeaponComponent_SetGunRecoilAlpha_Roll_Params Parms;

	Parms.NewRollRecoil = NewRollRecoil;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.SelectGunSlot_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// uint8                              Slot                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SelectGunSlot_server(uint8 Slot)
{
	static auto Func = Class->GetFunction("WeaponComponent", "SelectGunSlot_server");

	Params::UWeaponComponent_SelectGunSlot_server_Params Parms;

	Parms.Slot = Slot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.OnSetSecondaryGun
// (Final, Native, Private)
// Parameters:

void UWeaponComponent::OnSetSecondaryGun()
{
	static auto Func = Class->GetFunction("WeaponComponent", "OnSetSecondaryGun");

	Params::UWeaponComponent_OnSetSecondaryGun_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.OnSetPrimaryGun
// (Final, Native, Private)
// Parameters:

void UWeaponComponent::OnSetPrimaryGun()
{
	static auto Func = Class->GetFunction("WeaponComponent", "OnSetPrimaryGun");

	Params::UWeaponComponent_OnSetPrimaryGun_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.OnSetPlayerState
// (Final, Native, Private)
// Parameters:

void UWeaponComponent::OnSetPlayerState()
{
	static auto Func = Class->GetFunction("WeaponComponent", "OnSetPlayerState");

	Params::UWeaponComponent_OnSetPlayerState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.OnSetCurrentGun
// (Final, Native, Private)
// Parameters:
// class UItem_Gun_General*           OldCurrentGun                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::OnSetCurrentGun(class UItem_Gun_General* OldCurrentGun)
{
	static auto Func = Class->GetFunction("WeaponComponent", "OnSetCurrentGun");

	Params::UWeaponComponent_OnSetCurrentGun_Params Parms;

	Parms.OldCurrentGun = OldCurrentGun;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.OnRep_IsAiming
// (Final, Native, Private)
// Parameters:

void UWeaponComponent::OnRep_IsAiming()
{
	static auto Func = Class->GetFunction("WeaponComponent", "OnRep_IsAiming");

	Params::UWeaponComponent_OnRep_IsAiming_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.NotifyServerThrowGrenade
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UWeaponComponent::NotifyServerThrowGrenade()
{
	static auto Func = Class->GetFunction("WeaponComponent", "NotifyServerThrowGrenade");

	Params::UWeaponComponent_NotifyServerThrowGrenade_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POLYGON.WeaponComponent.IsWantsToAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponComponent::IsWantsToAiming()
{
	static auto Func = Class->GetFunction("WeaponComponent", "IsWantsToAiming");

	Params::UWeaponComponent_IsWantsToAiming_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.IsAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponComponent::IsAiming()
{
	static auto Func = Class->GetFunction("WeaponComponent", "IsAiming");

	Params::UWeaponComponent_IsAiming_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetIsShooting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponComponent::GetIsShooting()
{
	static auto Func = Class->GetFunction("WeaponComponent", "GetIsShooting");

	Params::UWeaponComponent_GetIsShooting_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Yaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponComponent::GetGunRecoilAlpha_Yaw()
{
	static auto Func = Class->GetFunction("WeaponComponent", "GetGunRecoilAlpha_Yaw");

	Params::UWeaponComponent_GetGunRecoilAlpha_Yaw_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Roll
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponComponent::GetGunRecoilAlpha_Roll()
{
	static auto Func = Class->GetFunction("WeaponComponent", "GetGunRecoilAlpha_Roll");

	Params::UWeaponComponent_GetGunRecoilAlpha_Roll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Pitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponComponent::GetGunRecoilAlpha_Pitch()
{
	static auto Func = Class->GetFunction("WeaponComponent", "GetGunRecoilAlpha_Pitch");

	Params::UWeaponComponent_GetGunRecoilAlpha_Pitch_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Backward
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponComponent::GetGunRecoilAlpha_Backward()
{
	static auto Func = Class->GetFunction("WeaponComponent", "GetGunRecoilAlpha_Backward");

	Params::UWeaponComponent_GetGunRecoilAlpha_Backward_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetCurrentGun
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UItem_Gun_General*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UItem_Gun_General* UWeaponComponent::GetCurrentGun()
{
	static auto Func = Class->GetFunction("WeaponComponent", "GetCurrentGun");

	Params::UWeaponComponent_GetCurrentGun_Params Parms;


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
