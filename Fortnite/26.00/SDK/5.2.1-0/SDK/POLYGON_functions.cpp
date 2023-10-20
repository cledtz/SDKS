#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class POLYGON.AnimNotify_PlaySoundLocal
// (None)

class UClass* UAnimNotify_PlaySoundLocal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlaySoundLocal");

	return Clss;
}


// AnimNotify_PlaySoundLocal POLYGON.Default__AnimNotify_PlaySoundLocal
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlaySoundLocal* UAnimNotify_PlaySoundLocal::GetDefaultObj()
{
	static class UAnimNotify_PlaySoundLocal* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlaySoundLocal*>(UAnimNotify_PlaySoundLocal::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.BallisticMaterialResponseMap
// (None)

class UClass* UBallisticMaterialResponseMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BallisticMaterialResponseMap");

	return Clss;
}


// BallisticMaterialResponseMap POLYGON.Default__BallisticMaterialResponseMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UBallisticMaterialResponseMap* UBallisticMaterialResponseMap::GetDefaultObj()
{
	static class UBallisticMaterialResponseMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UBallisticMaterialResponseMap*>(UBallisticMaterialResponseMap::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.TraceProjectile
// (Actor)

class UClass* UTraceProjectile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TraceProjectile");

	return Clss;
}


// TraceProjectile POLYGON.Default__TraceProjectile
// (Public, ClassDefaultObject, ArchetypeObject)

class UTraceProjectile* UTraceProjectile::GetDefaultObj()
{
	static class UTraceProjectile* Default = nullptr;

	if (!Default)
		Default = static_cast<UTraceProjectile*>(UTraceProjectile::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.TraceProjectile.UpdateVelocity
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PreviousVelocity                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTraceProjectile::UpdateVelocity(struct FVector& Location, struct FVector& PreviousVelocity, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "UpdateVelocity");

	Params::UTraceProjectile_UpdateVelocity_Params Parms{};

	Parms.Location = Location;
	Parms.PreviousVelocity = PreviousVelocity;
	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "SpawnWithExactVelocity");

	Params::UTraceProjectile_SpawnWithExactVelocity_Params Parms{};

	Parms.bulletClass = bulletClass;
	Parms.Gun = Gun;
	Parms.SpawnLocation = SpawnLocation;
	Parms.StartVelocity = StartVelocity;
	Parms.RandomSeed = RandomSeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "Spawn");

	Params::UTraceProjectile_Spawn_Params Parms{};

	Parms.bulletClass = bulletClass;
	Parms.Gun = Gun;
	Parms.SpawnLocation = SpawnLocation;
	Parms.StartVelocity = StartVelocity;
	Parms.RandomSeed = RandomSeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.TraceProjectile.OnTrajectoryUpdateReceived
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OldVelocity                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NewVelocity                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTraceProjectile::OnTrajectoryUpdateReceived(struct FVector& Location, struct FVector& OldVelocity, struct FVector& NewVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "OnTrajectoryUpdateReceived");

	Params::UTraceProjectile_OnTrajectoryUpdateReceived_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "OnTrace");

	Params::UTraceProjectile_OnTrace_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "OnImpact");

	Params::UTraceProjectile_OnImpact_Params Parms{};

	Parms.Ricochet = Ricochet;
	Parms.PassedThrough = PassedThrough;
	Parms.ExitVelocity = ExitVelocity;
	Parms.Impulse = Impulse;
	Parms.PenetrationDepth = PenetrationDepth;
	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.TraceProjectile.OnDeactivated
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UTraceProjectile::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "OnDeactivated");

	Params::UTraceProjectile_OnDeactivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.TraceProjectile.Deactivate
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UTraceProjectile::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "Deactivate");

	Params::UTraceProjectile_Deactivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.TraceProjectile.CollisionFilter
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceProjectile::CollisionFilter(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceProjectile", "CollisionFilter");

	Params::UTraceProjectile_CollisionFilter_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.Bullet_Casing_General
// (Actor)

class UClass* UBullet_Casing_General::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullet_Casing_General");

	return Clss;
}


// Bullet_Casing_General POLYGON.Default__Bullet_Casing_General
// (Public, ClassDefaultObject, ArchetypeObject)

class UBullet_Casing_General* UBullet_Casing_General::GetDefaultObj()
{
	static class UBullet_Casing_General* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullet_Casing_General*>(UBullet_Casing_General::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.ChatSystemComponent
// (None)

class UClass* UChatSystemComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatSystemComponent");

	return Clss;
}


// ChatSystemComponent POLYGON.Default__ChatSystemComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatSystemComponent* UChatSystemComponent::GetDefaultObj()
{
	static class UChatSystemComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatSystemComponent*>(UChatSystemComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.ChatSystemComponent.SentMessage_Multicast
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
// struct FGameChatMessage            Message                                                          (Parm, NativeAccessSpecifierPublic)

void UChatSystemComponent::SentMessage_Multicast(const struct FGameChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatSystemComponent", "SentMessage_Multicast");

	Params::UChatSystemComponent_SentMessage_Multicast_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ChatSystemComponent.SendMessage_Server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FGameChatMessage            Message                                                          (Parm, NativeAccessSpecifierPublic)

void UChatSystemComponent::SendMessage_Server(const struct FGameChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatSystemComponent", "SendMessage_Server");

	Params::UChatSystemComponent_SendMessage_Server_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.GeneralBackendComponent
// (None)

class UClass* UGeneralBackendComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeneralBackendComponent");

	return Clss;
}


// GeneralBackendComponent POLYGON.Default__GeneralBackendComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeneralBackendComponent* UGeneralBackendComponent::GetDefaultObj()
{
	static class UGeneralBackendComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneralBackendComponent*>(UGeneralBackendComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.ClientBackendComponent
// (None)

class UClass* UClientBackendComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClientBackendComponent");

	return Clss;
}


// ClientBackendComponent POLYGON.Default__ClientBackendComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UClientBackendComponent* UClientBackendComponent::GetDefaultObj()
{
	static class UClientBackendComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UClientBackendComponent*>(UClientBackendComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.ClientBackendComponent.SetPlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewPlayerMasterId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientBackendComponent::SetPlayerId(const class FString& NewPlayerMasterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientBackendComponent", "SetPlayerId");

	Params::UClientBackendComponent_SetPlayerId_Params Parms{};

	Parms.NewPlayerMasterId = NewPlayerMasterId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ClientBackendComponent.SetPlayerCombinedInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*          NewPlayerCombinedInfo                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientBackendComponent::SetPlayerCombinedInfo(class UPlayFabJsonObject* NewPlayerCombinedInfo, TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientBackendComponent", "SetPlayerCombinedInfo");

	Params::UClientBackendComponent_SetPlayerCombinedInfo_Params Parms{};

	Parms.NewPlayerCombinedInfo = NewPlayerCombinedInfo;
	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ClientBackendComponent.SerPlayerExperiments
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*          Experiments                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientBackendComponent::SerPlayerExperiments(class UPlayFabJsonObject* Experiments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientBackendComponent", "SerPlayerExperiments");

	Params::UClientBackendComponent_SerPlayerExperiments_Params Parms{};

	Parms.Experiments = Experiments;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ClientBackendComponent.IsClientLoggedIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UClientBackendComponent::IsClientLoggedIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientBackendComponent", "IsClientLoggedIn");

	Params::UClientBackendComponent_IsClientLoggedIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientBackendComponent.GiveVipLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientBackendComponent::GiveVipLocal(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientBackendComponent", "GiveVipLocal");

	Params::UClientBackendComponent_GiveVipLocal_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ClientBackendComponent.GetPlayerExperiments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayFabJsonObject* UClientBackendComponent::GetPlayerExperiments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientBackendComponent", "GetPlayerExperiments");

	Params::UClientBackendComponent_GetPlayerExperiments_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientBackendComponent.GetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayFabJsonObject* UClientBackendComponent::GetPlayerCombinedInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientBackendComponent", "GetPlayerCombinedInfo");

	Params::UClientBackendComponent_GetPlayerCombinedInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.ClientGameInstance
// (None)

class UClass* UClientGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClientGameInstance");

	return Clss;
}


// ClientGameInstance POLYGON.Default__ClientGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UClientGameInstance* UClientGameInstance::GetDefaultObj()
{
	static class UClientGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UClientGameInstance*>(UClientGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.ClientGameInstance.SetServerTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   ServerTime                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientGameInstance::SetServerTime(struct FDateTime& ServerTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientGameInstance", "SetServerTime");

	Params::UClientGameInstance_SetServerTime_Params Parms{};

	Parms.ServerTime = ServerTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ClientGameInstance.SetPlayerId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewPlayerMasterId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientGameInstance::SetPlayerId(const class FString& NewPlayerMasterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientGameInstance", "SetPlayerId");

	Params::UClientGameInstance_SetPlayerId_Params Parms{};

	Parms.NewPlayerMasterId = NewPlayerMasterId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ClientGameInstance.SetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*          NewPlayerCombinedInfo                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClientGameInstance::SetPlayerCombinedInfo(class UPlayFabJsonObject* NewPlayerCombinedInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientGameInstance", "SetPlayerCombinedInfo");

	Params::UClientGameInstance_SetPlayerCombinedInfo_Params Parms{};

	Parms.NewPlayerCombinedInfo = NewPlayerCombinedInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientGameInstance", "HandleNetworkFailure");

	Params::UClientGameInstance_HandleNetworkFailure_Params Parms{};

	Parms.World = World;
	Parms.NetDriver = NetDriver;
	Parms.FailureType = FailureType;
	Parms.ErrorString = ErrorString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ClientGameInstance.GetServerTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UClientGameInstance::GetServerTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientGameInstance", "GetServerTime");

	Params::UClientGameInstance_GetServerTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientGameInstance.GetPlayerMasterId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UClientGameInstance::GetPlayerMasterId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientGameInstance", "GetPlayerMasterId");

	Params::UClientGameInstance_GetPlayerMasterId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.ClientGameInstance.GetPlayerCombinedInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayFabJsonObject* UClientGameInstance::GetPlayerCombinedInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientGameInstance", "GetPlayerCombinedInfo");

	Params::UClientGameInstance_GetPlayerCombinedInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.ControlPoint
// (Actor)

class UClass* UControlPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlPoint");

	return Clss;
}


// ControlPoint POLYGON.Default__ControlPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlPoint* UControlPoint::GetDefaultObj()
{
	static class UControlPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlPoint*>(UControlPoint::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.ControlPoint.OnRep_IsCapture
// (Final, Native, Private)
// Parameters:

void UControlPoint::OnRep_IsCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlPoint", "OnRep_IsCapture");

	Params::UControlPoint_OnRep_IsCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ControlPoint.OnRep_CapturePointsBravoTeam
// (Final, Native, Private, Const)
// Parameters:

void UControlPoint::OnRep_CapturePointsBravoTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlPoint", "OnRep_CapturePointsBravoTeam");

	Params::UControlPoint_OnRep_CapturePointsBravoTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ControlPoint.OnRep_CapturePointsAlphaTeam
// (Final, Native, Private, Const)
// Parameters:

void UControlPoint::OnRep_CapturePointsAlphaTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlPoint", "OnRep_CapturePointsAlphaTeam");

	Params::UControlPoint_OnRep_CapturePointsAlphaTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ControlPoint.OnRep_CapturedTeam
// (Final, Native, Private)
// Parameters:

void UControlPoint::OnRep_CapturedTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlPoint", "OnRep_CapturedTeam");

	Params::UControlPoint_OnRep_CapturedTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ControlPoint.GetControlPointNameAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UControlPoint::GetControlPointNameAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlPoint", "GetControlPointNameAsString");

	Params::UControlPoint_GetControlPointNameAsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.ControlPoint.GetControlPointNameAsOneLetter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UControlPoint::GetControlPointNameAsOneLetter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlPoint", "GetControlPointNameAsOneLetter");

	Params::UControlPoint_GetControlPointNameAsOneLetter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.ControlPoint.ContainsCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UControlPoint::ContainsCharacter(class UCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlPoint", "ContainsCharacter");

	Params::UControlPoint_ContainsCharacter_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.DataManagerLibrary
// (None)

class UClass* UDataManagerLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataManagerLibrary");

	return Clss;
}


// DataManagerLibrary POLYGON.Default__DataManagerLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataManagerLibrary* UDataManagerLibrary::GetDefaultObj()
{
	static class UDataManagerLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataManagerLibrary*>(UDataManagerLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.DataManagerLibrary.GetDataTableReferences
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDataContainerAsset*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataContainerAsset* UDataManagerLibrary::GetDataTableReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataManagerLibrary", "GetDataTableReferences");

	Params::UDataManagerLibrary_GetDataTableReferences_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.EOSPartyId
// (None)

class UClass* UEOSPartyId::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSPartyId");

	return Clss;
}


// EOSPartyId POLYGON.Default__EOSPartyId
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSPartyId* UEOSPartyId::GetDefaultObj()
{
	static class UEOSPartyId* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSPartyId*>(UEOSPartyId::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.EOSPartyId.ToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEOSPartyId::ToString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSPartyId", "ToString");

	Params::UEOSPartyId_ToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.EOSPartyMemberId
// (None)

class UClass* UEOSPartyMemberId::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSPartyMemberId");

	return Clss;
}


// EOSPartyMemberId POLYGON.Default__EOSPartyMemberId
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSPartyMemberId* UEOSPartyMemberId::GetDefaultObj()
{
	static class UEOSPartyMemberId* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSPartyMemberId*>(UEOSPartyMemberId::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.EOSPartyMemberId.ToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEOSPartyMemberId::ToString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSPartyMemberId", "ToString");

	Params::UEOSPartyMemberId_ToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.EOSSubsystemAvanced
// (None)

class UClass* UEOSSubsystemAvanced::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSSubsystemAvanced");

	return Clss;
}


// EOSSubsystemAvanced POLYGON.Default__EOSSubsystemAvanced
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSSubsystemAvanced* UEOSSubsystemAvanced::GetDefaultObj()
{
	static class UEOSSubsystemAvanced* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSSubsystemAvanced*>(UEOSSubsystemAvanced::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.EOSSubsystemAvanced.StartLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnLoginComplete                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSSubsystemAvanced::StartLogin(FDelegateProperty_ OnLoginComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSSubsystemAvanced", "StartLogin");

	Params::UEOSSubsystemAvanced_StartLogin_Params Parms{};

	Parms.OnLoginComplete = OnLoginComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.EOSSubsystemAvanced.StartCreateParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PartyTypeId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnDone                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSSubsystemAvanced::StartCreateParty(class UObject* WorldContextObject, int32 PartyTypeId, FDelegateProperty_ OnDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSSubsystemAvanced", "StartCreateParty");

	Params::UEOSSubsystemAvanced_StartCreateParty_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PartyTypeId = PartyTypeId;
	Parms.OnDone = OnDone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.EOSSubsystemAvanced.GetPartyMembers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEOSPartyId*                 PartyId                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UEOSPartyMemberId*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UEOSPartyMemberId*> UEOSSubsystemAvanced::GetPartyMembers(class UObject* WorldContextObject, class UEOSPartyId* PartyId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSSubsystemAvanced", "GetPartyMembers");

	Params::UEOSSubsystemAvanced_GetPartyMembers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PartyId = PartyId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.EOSSubsystemAvanced.GetJoinedParties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UEOSPartyId*>         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UEOSPartyId*> UEOSSubsystemAvanced::GetJoinedParties(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSSubsystemAvanced", "GetJoinedParties");

	Params::UEOSSubsystemAvanced_GetJoinedParties_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.EventManagerComponent
// (None)

class UClass* UEventManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventManagerComponent");

	return Clss;
}


// EventManagerComponent POLYGON.Default__EventManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEventManagerComponent* UEventManagerComponent::GetDefaultObj()
{
	static class UEventManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventManagerComponent*>(UEventManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.EventManagerComponent.OnAmmoBoxAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UEventManagerComponent::OnAmmoBoxAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventManagerComponent", "OnAmmoBoxAction");

	Params::UEventManagerComponent_OnAmmoBoxAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.EventManagerComponent.AmmoBoxAction
// (Net, Native, Event, Public, NetClient)
// Parameters:

void UEventManagerComponent::AmmoBoxAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventManagerComponent", "AmmoBoxAction");

	Params::UEventManagerComponent_AmmoBoxAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.FOVManagerComponent
// (None)

class UClass* UFOVManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FOVManagerComponent");

	return Clss;
}


// FOVManagerComponent POLYGON.Default__FOVManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFOVManagerComponent* UFOVManagerComponent::GetDefaultObj()
{
	static class UFOVManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFOVManagerComponent*>(UFOVManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.FOVManagerComponent.SetMeshFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewMeshFOV                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFOVManagerComponent::SetMeshFOV(float NewMeshFOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FOVManagerComponent", "SetMeshFOV");

	Params::UFOVManagerComponent_SetMeshFOV_Params Parms{};

	Parms.NewMeshFOV = NewMeshFOV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.FOVManagerComponent.SetDefaultCameraFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewDefaultCameraFOV                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFOVManagerComponent::SetDefaultCameraFOV(float NewDefaultCameraFOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FOVManagerComponent", "SetDefaultCameraFOV");

	Params::UFOVManagerComponent_SetDefaultCameraFOV_Params Parms{};

	Parms.NewDefaultCameraFOV = NewDefaultCameraFOV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.FOVManagerComponent.SetCameraFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCameraFOV                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFOVManagerComponent::SetCameraFOV(float NewCameraFOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FOVManagerComponent", "SetCameraFOV");

	Params::UFOVManagerComponent_SetCameraFOV_Params Parms{};

	Parms.NewCameraFOV = NewCameraFOV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.FOVManagerComponent.HardResetMeshFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFOVManagerComponent::HardResetMeshFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FOVManagerComponent", "HardResetMeshFOV");

	Params::UFOVManagerComponent_HardResetMeshFOV_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.FOVManagerComponent.HardResetCameraFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFOVManagerComponent::HardResetCameraFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FOVManagerComponent", "HardResetCameraFOV");

	Params::UFOVManagerComponent_HardResetCameraFOV_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.FOVManagerInterface
// (None)

class UClass* UFOVManagerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FOVManagerInterface");

	return Clss;
}


// FOVManagerInterface POLYGON.Default__FOVManagerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFOVManagerInterface* UFOVManagerInterface::GetDefaultObj()
{
	static class UFOVManagerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFOVManagerInterface*>(UFOVManagerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.FOVManagerInterface.SetCorrectiveFovMaterial
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseFovMaterial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFOVManagerInterface::SetCorrectiveFovMaterial(bool UseFovMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FOVManagerInterface", "SetCorrectiveFovMaterial");

	Params::UFOVManagerInterface_SetCorrectiveFovMaterial_Params Parms{};

	Parms.UseFovMaterial = UseFovMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.GameSettings
// (None)

class UClass* UGameSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettings");

	return Clss;
}


// GameSettings POLYGON.Default__GameSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettings* UGameSettings::GetDefaultObj()
{
	static class UGameSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettings*>(UGameSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.GunModulesInfo
// (None)

class UClass* UGunModulesInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GunModulesInfo");

	return Clss;
}


// GunModulesInfo POLYGON.Default__GunModulesInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UGunModulesInfo* UGunModulesInfo::GetDefaultObj()
{
	static class UGunModulesInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UGunModulesInfo*>(UGunModulesInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.GunModulesInfo.FindModule
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FGunModuleInfo>      Array                                                            (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class UItem_Module_General>ModuleClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGunModuleInfo              ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGunModuleInfo UGunModulesInfo::FindModule(const TArray<struct FGunModuleInfo>& Array, TSubclassOf<class UItem_Module_General> ModuleClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GunModulesInfo", "FindModule");

	Params::UGunModulesInfo_FindModule_Params Parms{};

	Parms.Array = Array;
	Parms.ModuleClass = ModuleClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.HealthStatsComponent
// (None)

class UClass* UHealthStatsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealthStatsComponent");

	return Clss;
}


// HealthStatsComponent POLYGON.Default__HealthStatsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UHealthStatsComponent* UHealthStatsComponent::GetDefaultObj()
{
	static class UHealthStatsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UHealthStatsComponent*>(UHealthStatsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.HealthStatsComponent.OnRep_HealthProtection
// (Final, Native, Private)
// Parameters:

void UHealthStatsComponent::OnRep_HealthProtection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthStatsComponent", "OnRep_HealthProtection");

	Params::UHealthStatsComponent_OnRep_HealthProtection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.HealthStatsComponent.OnRep_Health
// (Final, Native, Private)
// Parameters:
// uint8                              PreviousHealth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHealthStatsComponent::OnRep_Health(uint8 PreviousHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthStatsComponent", "OnRep_Health");

	Params::UHealthStatsComponent_OnRep_Health_Params Parms{};

	Parms.PreviousHealth = PreviousHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.HealthStatsComponent.KillSelf_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:

void UHealthStatsComponent::KillSelf_server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthStatsComponent", "KillSelf_server");

	Params::UHealthStatsComponent_KillSelf_server_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.HealthStatsComponent.GetStamina
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHealthStatsComponent::GetStamina()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthStatsComponent", "GetStamina");

	Params::UHealthStatsComponent_GetStamina_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.HealthStatsComponent.GetHealthProtection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHealthStatsComponent::GetHealthProtection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthStatsComponent", "GetHealthProtection");

	Params::UHealthStatsComponent_GetHealthProtection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.HealthStatsComponent.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHealthStatsComponent::GetHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthStatsComponent", "GetHealth");

	Params::UHealthStatsComponent_GetHealth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.InspectManagerComponent
// (None)

class UClass* UInspectManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InspectManagerComponent");

	return Clss;
}


// InspectManagerComponent POLYGON.Default__InspectManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInspectManagerComponent* UInspectManagerComponent::GetDefaultObj()
{
	static class UInspectManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInspectManagerComponent*>(UInspectManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.InspectManagerComponent.SetPivotOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Offset                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInspectManagerComponent::SetPivotOffset(const struct FVector2D& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectManagerComponent", "SetPivotOffset");

	Params::UInspectManagerComponent_SetPivotOffset_Params Parms{};

	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InspectManagerComponent.ResetRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInspectManagerComponent::ResetRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectManagerComponent", "ResetRotation");

	Params::UInspectManagerComponent_ResetRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InspectManagerComponent.OnClicked
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInspectManagerComponent::OnClicked(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectManagerComponent", "OnClicked");

	Params::UInspectManagerComponent_OnClicked_Params Parms{};

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InspectManagerComponent.EnableInspect
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UInspectManagerComponent::EnableInspect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectManagerComponent", "EnableInspect");

	Params::UInspectManagerComponent_EnableInspect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InspectManagerComponent.DisableInspect
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UInspectManagerComponent::DisableInspect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectManagerComponent", "DisableInspect");

	Params::UInspectManagerComponent_DisableInspect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.InteractInterface
// (None)

class UClass* UInteractInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractInterface");

	return Clss;
}


// InteractInterface POLYGON.Default__InteractInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractInterface* UInteractInterface::GetDefaultObj()
{
	static class UInteractInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractInterface*>(UInteractInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.InteractInterface.StopInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInteractInterface::StopInteract(class UPG_Game_Character* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractInterface", "StopInteract");

	Params::UInteractInterface_StopInteract_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InteractInterface.StartInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInteractInterface::StartInteract(class UPG_Game_Character* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractInterface", "StartInteract");

	Params::UInteractInterface_StartInteract_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InteractInterface.SetPlayerLooks
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLooks                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInteractInterface::SetPlayerLooks(class UPG_Game_Character* Character, bool bIsLooks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractInterface", "SetPlayerLooks");

	Params::UInteractInterface_SetPlayerLooks_Params Parms{};

	Parms.Character = Character;
	Parms.bIsLooks = bIsLooks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.InventoryComponent_Base
// (None)

class UClass* UInventoryComponent_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryComponent_Base");

	return Clss;
}


// InventoryComponent_Base POLYGON.Default__InventoryComponent_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryComponent_Base* UInventoryComponent_Base::GetDefaultObj()
{
	static class UInventoryComponent_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryComponent_Base*>(UInventoryComponent_Base::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.InventoryComponent_Base.UpdatePlayerCombinedInfo
// (Native, Protected, HasOutParams)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent_Base::UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Base", "UpdatePlayerCombinedInfo");

	Params::UInventoryComponent_Base_UpdatePlayerCombinedInfo_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InventoryComponent_Base.OnRep_SecondaryGun
// (Final, Native, Private)
// Parameters:

void UInventoryComponent_Base::OnRep_SecondaryGun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Base", "OnRep_SecondaryGun");

	Params::UInventoryComponent_Base_OnRep_SecondaryGun_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InventoryComponent_Base.OnRep_PrimaryGun
// (Final, Native, Private)
// Parameters:

void UInventoryComponent_Base::OnRep_PrimaryGun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Base", "OnRep_PrimaryGun");

	Params::UInventoryComponent_Base_OnRep_PrimaryGun_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.InventoryComponent_Game
// (None)

class UClass* UInventoryComponent_Game::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryComponent_Game");

	return Clss;
}


// InventoryComponent_Game POLYGON.Default__InventoryComponent_Game
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryComponent_Game* UInventoryComponent_Game::GetDefaultObj()
{
	static class UInventoryComponent_Game* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryComponent_Game*>(UInventoryComponent_Game::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.InventoryComponent_Game.SetGunModules
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      GunInstanceId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsInstanceId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UInventoryComponent_Game::SetGunModules(const class FString& GunInstanceId, TArray<class FString>& ItemsInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Game", "SetGunModules");

	Params::UInventoryComponent_Game_SetGunModules_Params Parms{};

	Parms.GunInstanceId = GunInstanceId;
	Parms.ItemsInstanceId = ItemsInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.InventoryComponent_Game.RequestSetGunModules_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class FString                      GunInstanceId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ItemsInstanceId                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInventoryComponent_Game::RequestSetGunModules_server(const class FString& GunInstanceId, TArray<class FString>& ItemsInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Game", "RequestSetGunModules_server");

	Params::UInventoryComponent_Game_RequestSetGunModules_server_Params Parms{};

	Parms.GunInstanceId = GunInstanceId;
	Parms.ItemsInstanceId = ItemsInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InventoryComponent_Game.RequestEquipItems_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// TArray<class FString>              ItemsInstanceId                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInventoryComponent_Game::RequestEquipItems_server(TArray<class FString>& ItemsInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Game", "RequestEquipItems_server");

	Params::UInventoryComponent_Game_RequestEquipItems_server_Params Parms{};

	Parms.ItemsInstanceId = ItemsInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InventoryComponent_Game.OnRep_GrenadesNumber
// (Final, Native, Private)
// Parameters:

void UInventoryComponent_Game::OnRep_GrenadesNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Game", "OnRep_GrenadesNumber");

	Params::UInventoryComponent_Game_OnRep_GrenadesNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InventoryComponent_Game.OnRep_CurrentGun
// (Final, Native, Private)
// Parameters:
// class UItem_Gun_General*           PreviousGun                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent_Game::OnRep_CurrentGun(class UItem_Gun_General* PreviousGun)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Game", "OnRep_CurrentGun");

	Params::UInventoryComponent_Game_OnRep_CurrentGun_Params Parms{};

	Parms.PreviousGun = PreviousGun;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.InventoryComponent_Game.EquipItems
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              ItemsInstanceId                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UInventoryComponent_Game::EquipItems(TArray<class FString>& ItemsInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Game", "EquipItems");

	Params::UInventoryComponent_Game_EquipItems_Params Parms{};

	Parms.ItemsInstanceId = ItemsInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.InventoryComponent_Game.AddGrenate_server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// uint8                              Number                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent_Game::AddGrenate_server(uint8 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent_Game", "AddGrenate_server");

	Params::UInventoryComponent_Game_AddGrenate_server_Params Parms{};

	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.InventoryComponent_Menu
// (None)

class UClass* UInventoryComponent_Menu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryComponent_Menu");

	return Clss;
}


// InventoryComponent_Menu POLYGON.Default__InventoryComponent_Menu
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryComponent_Menu* UInventoryComponent_Menu::GetDefaultObj()
{
	static class UInventoryComponent_Menu* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryComponent_Menu*>(UInventoryComponent_Menu::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_General
// (Actor)

class UClass* UItem_General::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_General");

	return Clss;
}


// Item_General POLYGON.Default__Item_General
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_General* UItem_General::GetDefaultObj()
{
	static class UItem_General* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_General*>(UItem_General::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Grenade_General
// (Actor)

class UClass* UItem_Grenade_General::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Grenade_General");

	return Clss;
}


// Item_Grenade_General POLYGON.Default__Item_Grenade_General
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Grenade_General* UItem_Grenade_General::GetDefaultObj()
{
	static class UItem_Grenade_General* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Grenade_General*>(UItem_Grenade_General::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.Item_Grenade_General.OnRep_ReplicatedPosition
// (Final, Native, Private)
// Parameters:

void UItem_Grenade_General::OnRep_ReplicatedPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Grenade_General", "OnRep_ReplicatedPosition");

	Params::UItem_Grenade_General_OnRep_ReplicatedPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Grenade_General", "OnMeshHit");

	Params::UItem_Grenade_General_OnMeshHit_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Grenade_General.OnGrenadeThrow
// (Event, Public, BlueprintEvent)
// Parameters:

void UItem_Grenade_General::OnGrenadeThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Grenade_General", "OnGrenadeThrow");

	Params::UItem_Grenade_General_OnGrenadeThrow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.Item_Grenade_General.NotifyThrow_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FVector_NetQuantize         StartPosition                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize         Impulse                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Grenade_General::NotifyThrow_server(struct FVector_NetQuantize& StartPosition, struct FVector_NetQuantize& Impulse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Grenade_General", "NotifyThrow_server");

	Params::UItem_Grenade_General_NotifyThrow_server_Params Parms{};

	Parms.StartPosition = StartPosition;
	Parms.Impulse = Impulse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.Item_Gun_General
// (Actor)

class UClass* UItem_Gun_General::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Gun_General");

	return Clss;
}


// Item_Gun_General POLYGON.Default__Item_Gun_General
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Gun_General* UItem_Gun_General::GetDefaultObj()
{
	static class UItem_Gun_General* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Gun_General*>(UItem_Gun_General::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.Item_Gun_General.UpdatePlayerCombinedInfo
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "UpdatePlayerCombinedInfo");

	Params::UItem_Gun_General_UpdatePlayerCombinedInfo_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.UpdateAmmoCount_server
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// uint8                              CurrentNumberAmmo                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::UpdateAmmoCount_server(uint8 CurrentNumberAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "UpdateAmmoCount_server");

	Params::UItem_Gun_General_UpdateAmmoCount_server_Params Parms{};

	Parms.CurrentNumberAmmo = CurrentNumberAmmo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.SetGunModules
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UPlayFabJsonObject*          Modules                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::SetGunModules(class UPlayFabJsonObject* Modules)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "SetGunModules");

	Params::UItem_Gun_General_SetGunModules_Params Parms{};

	Parms.Modules = Modules;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.RequestReload_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// uint8                              CurrentNumberAmmo                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::RequestReload_server(uint8 CurrentNumberAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "RequestReload_server");

	Params::UItem_Gun_General_RequestReload_server_Params Parms{};

	Parms.CurrentNumberAmmo = CurrentNumberAmmo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.OnSetPlayerState
// (Final, Native, Private)
// Parameters:

void UItem_Gun_General::OnSetPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "OnSetPlayerState");

	Params::UItem_Gun_General_OnSetPlayerState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.OnRep_ReloadCaller
// (Final, Native, Private)
// Parameters:
// uint8                              PreviousValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::OnRep_ReloadCaller(uint8 PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "OnRep_ReloadCaller");

	Params::UItem_Gun_General_OnRep_ReloadCaller_Params Parms{};

	Parms.PreviousValue = PreviousValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.OnRep_GunShot
// (Final, Native, Private)
// Parameters:
// struct FGunShot                    PreviousShot                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UItem_Gun_General::OnRep_GunShot(const struct FGunShot& PreviousShot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "OnRep_GunShot");

	Params::UItem_Gun_General_OnRep_GunShot_Params Parms{};

	Parms.PreviousShot = PreviousShot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.OnRep_GunHitOfShortShot
// (Final, Native, Private)
// Parameters:
// struct FVector_NetQuantize         PreviousValue                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::OnRep_GunHitOfShortShot(const struct FVector_NetQuantize& PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "OnRep_GunHitOfShortShot");

	Params::UItem_Gun_General_OnRep_GunHitOfShortShot_Params Parms{};

	Parms.PreviousValue = PreviousValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.OnRep_CurrentStockAmmo
// (Final, Native, Private)
// Parameters:

void UItem_Gun_General::OnRep_CurrentStockAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "OnRep_CurrentStockAmmo");

	Params::UItem_Gun_General_OnRep_CurrentStockAmmo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.OnRep_CurrentGunModuleClasses
// (Final, Native, Private)
// Parameters:

void UItem_Gun_General::OnRep_CurrentGunModuleClasses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "OnRep_CurrentGunModuleClasses");

	Params::UItem_Gun_General_OnRep_CurrentGunModuleClasses_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.OnRep_CallHardReset
// (Final, Native, Private)
// Parameters:
// uint8                              PreviousValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::OnRep_CallHardReset(uint8 PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "OnRep_CallHardReset");

	Params::UItem_Gun_General_OnRep_CallHardReset_Params Parms{};

	Parms.PreviousValue = PreviousValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.NotifyServerTraceHit
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGunHitOnCharacter          HitOnCharacter                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyServerTraceHit(struct FGunHitOnCharacter& HitOnCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "NotifyServerTraceHit");

	Params::UItem_Gun_General_NotifyServerTraceHit_Params Parms{};

	Parms.HitOnCharacter = HitOnCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.NotifyServerOfShot
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGunShot                    GunShot                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyServerOfShot(struct FGunShot& GunShot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "NotifyServerOfShot");

	Params::UItem_Gun_General_NotifyServerOfShot_Params Parms{};

	Parms.GunShot = GunShot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.NotifyServerHitWithEnergy
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGunHitOnCharacter          HitOnCharacter                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// uint8                              Energy                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyServerHitWithEnergy(struct FGunHitOnCharacter& HitOnCharacter, uint8 Energy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "NotifyServerHitWithEnergy");

	Params::UItem_Gun_General_NotifyServerHitWithEnergy_Params Parms{};

	Parms.HitOnCharacter = HitOnCharacter;
	Parms.Energy = Energy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.NotifyServerHit
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FGunHitOnCharacter          HitOnCharacter                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyServerHit(struct FGunHitOnCharacter& HitOnCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "NotifyServerHit");

	Params::UItem_Gun_General_NotifyServerHit_Params Parms{};

	Parms.HitOnCharacter = HitOnCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.NotifyGrantedProgressDataContainer_client
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// class FString                      ItemInstanceId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::NotifyGrantedProgressDataContainer_client(const class FString& ItemInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "NotifyGrantedProgressDataContainer_client");

	Params::UItem_Gun_General_NotifyGrantedProgressDataContainer_client_Params Parms{};

	Parms.ItemInstanceId = ItemInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.GetItemReference
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayFabJsonObject*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayFabJsonObject* UItem_Gun_General::GetItemReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "GetItemReference");

	Params::UItem_Gun_General_GetItemReference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.Item_Gun_General.GetForwardShot
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UItem_Gun_General::GetForwardShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "GetForwardShot");

	Params::UItem_Gun_General_GetForwardShot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.Item_Gun_General.GetCurrentStockAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UItem_Gun_General::GetCurrentStockAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "GetCurrentStockAmmo");

	Params::UItem_Gun_General_GetCurrentStockAmmo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.Item_Gun_General.CockBolt_server
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UItem_Gun_General::CockBolt_server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "CockBolt_server");

	Params::UItem_Gun_General_CockBolt_server_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.CockBolt_multicast
// (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:

void UItem_Gun_General::CockBolt_multicast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "CockBolt_multicast");

	Params::UItem_Gun_General_CockBolt_multicast_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Gun_General.AddStockAmmo_server
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int8                               AddAmmo                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Gun_General::AddStockAmmo_server(int8 AddAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Gun_General", "AddStockAmmo_server");

	Params::UItem_Gun_General_AddStockAmmo_server_Params Parms{};

	Parms.AddAmmo = AddAmmo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.Item_Gun_Pistol
// (Actor)

class UClass* UItem_Gun_Pistol::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Gun_Pistol");

	return Clss;
}


// Item_Gun_Pistol POLYGON.Default__Item_Gun_Pistol
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Gun_Pistol* UItem_Gun_Pistol::GetDefaultObj()
{
	static class UItem_Gun_Pistol* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Gun_Pistol*>(UItem_Gun_Pistol::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Gun_Rifle
// (Actor)

class UClass* UItem_Gun_Rifle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Gun_Rifle");

	return Clss;
}


// Item_Gun_Rifle POLYGON.Default__Item_Gun_Rifle
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Gun_Rifle* UItem_Gun_Rifle::GetDefaultObj()
{
	static class UItem_Gun_Rifle* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Gun_Rifle*>(UItem_Gun_Rifle::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Gun_Sniper
// (Actor)

class UClass* UItem_Gun_Sniper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Gun_Sniper");

	return Clss;
}


// Item_Gun_Sniper POLYGON.Default__Item_Gun_Sniper
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Gun_Sniper* UItem_Gun_Sniper::GetDefaultObj()
{
	static class UItem_Gun_Sniper* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Gun_Sniper*>(UItem_Gun_Sniper::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Module_General
// (Actor)

class UClass* UItem_Module_General::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_General");

	return Clss;
}


// Item_Module_General POLYGON.Default__Item_Module_General
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_General* UItem_Module_General::GetDefaultObj()
{
	static class UItem_Module_General* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_General*>(UItem_Module_General::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Module_Accessory
// (Actor)

class UClass* UItem_Module_Accessory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_Accessory");

	return Clss;
}


// Item_Module_Accessory POLYGON.Default__Item_Module_Accessory
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_Accessory* UItem_Module_Accessory::GetDefaultObj()
{
	static class UItem_Module_Accessory* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_Accessory*>(UItem_Module_Accessory::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Module_Barrel
// (Actor)

class UClass* UItem_Module_Barrel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_Barrel");

	return Clss;
}


// Item_Module_Barrel POLYGON.Default__Item_Module_Barrel
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_Barrel* UItem_Module_Barrel::GetDefaultObj()
{
	static class UItem_Module_Barrel* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_Barrel*>(UItem_Module_Barrel::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Module_Flashlight
// (Actor)

class UClass* UItem_Module_Flashlight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_Flashlight");

	return Clss;
}


// Item_Module_Flashlight POLYGON.Default__Item_Module_Flashlight
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_Flashlight* UItem_Module_Flashlight::GetDefaultObj()
{
	static class UItem_Module_Flashlight* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_Flashlight*>(UItem_Module_Flashlight::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.Item_Module_Flashlight.SetFlashlightEnable_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                               IsEnable                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::SetFlashlightEnable_server(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Module_Flashlight", "SetFlashlightEnable_server");

	Params::UItem_Module_Flashlight_SetFlashlightEnable_server_Params Parms{};

	Parms.IsEnable = IsEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Module_Flashlight.SetFlashlightEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsEnable                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCallOnServer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::SetFlashlightEnable(bool IsEnable, bool bCallOnServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Module_Flashlight", "SetFlashlightEnable");

	Params::UItem_Module_Flashlight_SetFlashlightEnable_Params Parms{};

	Parms.IsEnable = IsEnable;
	Parms.bCallOnServer = bCallOnServer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Module_Flashlight.OnSetCurrentGun
// (Final, Native, Private)
// Parameters:
// class UItem_Gun_General*           PreviousGun                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::OnSetCurrentGun(class UItem_Gun_General* PreviousGun)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Module_Flashlight", "OnSetCurrentGun");

	Params::UItem_Module_Flashlight_OnSetCurrentGun_Params Parms{};

	Parms.PreviousGun = PreviousGun;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Module_Flashlight.OnRep_IsEnable
// (Final, Native, Protected)
// Parameters:
// bool                               OldState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::OnRep_IsEnable(bool OldState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Module_Flashlight", "OnRep_IsEnable");

	Params::UItem_Module_Flashlight_OnRep_IsEnable_Params Parms{};

	Parms.OldState = OldState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.Item_Module_Flashlight.OnChangeEnableState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPlaySound                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Flashlight::OnChangeEnableState(bool bPlaySound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Module_Flashlight", "OnChangeEnableState");

	Params::UItem_Module_Flashlight_OnChangeEnableState_Params Parms{};

	Parms.bPlaySound = bPlaySound;

	UObject::ProcessEvent(Func, &Parms);

}


// Class POLYGON.Item_Module_Optic
// (Actor)

class UClass* UItem_Module_Optic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_Optic");

	return Clss;
}


// Item_Module_Optic POLYGON.Default__Item_Module_Optic
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_Optic* UItem_Module_Optic::GetDefaultObj()
{
	static class UItem_Module_Optic* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_Optic*>(UItem_Module_Optic::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.Item_Module_Optic.ToggleAiming
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAiming                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItem_Module_Optic::ToggleAiming(bool IsAiming)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Item_Module_Optic", "ToggleAiming");

	Params::UItem_Module_Optic_ToggleAiming_Params Parms{};

	Parms.IsAiming = IsAiming;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.Item_Module_Skin
// (Actor)

class UClass* UItem_Module_Skin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_Skin");

	return Clss;
}


// Item_Module_Skin POLYGON.Default__Item_Module_Skin
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_Skin* UItem_Module_Skin::GetDefaultObj()
{
	static class UItem_Module_Skin* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_Skin*>(UItem_Module_Skin::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Module_Strap
// (Actor)

class UClass* UItem_Module_Strap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_Strap");

	return Clss;
}


// Item_Module_Strap POLYGON.Default__Item_Module_Strap
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_Strap* UItem_Module_Strap::GetDefaultObj()
{
	static class UItem_Module_Strap* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_Strap*>(UItem_Module_Strap::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Module_Underbarrel
// (Actor)

class UClass* UItem_Module_Underbarrel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_Underbarrel");

	return Clss;
}


// Item_Module_Underbarrel POLYGON.Default__Item_Module_Underbarrel
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_Underbarrel* UItem_Module_Underbarrel::GetDefaultObj()
{
	static class UItem_Module_Underbarrel* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_Underbarrel*>(UItem_Module_Underbarrel::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Module_Underbarrel_Grip
// (Actor)

class UClass* UItem_Module_Underbarrel_Grip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Module_Underbarrel_Grip");

	return Clss;
}


// Item_Module_Underbarrel_Grip POLYGON.Default__Item_Module_Underbarrel_Grip
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Module_Underbarrel_Grip* UItem_Module_Underbarrel_Grip::GetDefaultObj()
{
	static class UItem_Module_Underbarrel_Grip* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Module_Underbarrel_Grip*>(UItem_Module_Underbarrel_Grip::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.Item_Watch_General
// (Actor)

class UClass* UItem_Watch_General::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Watch_General");

	return Clss;
}


// Item_Watch_General POLYGON.Default__Item_Watch_General
// (Public, ClassDefaultObject, ArchetypeObject)

class UItem_Watch_General* UItem_Watch_General::GetDefaultObj()
{
	static class UItem_Watch_General* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Watch_General*>(UItem_Watch_General::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_AnimInstance
// (None)

class UClass* UPG_AnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_AnimInstance");

	return Clss;
}


// PG_AnimInstance POLYGON.Default__PG_AnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_AnimInstance* UPG_AnimInstance::GetDefaultObj()
{
	static class UPG_AnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_AnimInstance*>(UPG_AnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_CharacterMovementComponent
// (None)

class UClass* UPG_CharacterMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_CharacterMovementComponent");

	return Clss;
}


// PG_CharacterMovementComponent POLYGON.Default__PG_CharacterMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_CharacterMovementComponent* UPG_CharacterMovementComponent::GetDefaultObj()
{
	static class UPG_CharacterMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_CharacterMovementComponent*>(UPG_CharacterMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_FunctionLibraryKit
// (None)

class UClass* UPG_FunctionLibraryKit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_FunctionLibraryKit");

	return Clss;
}


// PG_FunctionLibraryKit POLYGON.Default__PG_FunctionLibraryKit
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_FunctionLibraryKit* UPG_FunctionLibraryKit::GetDefaultObj()
{
	static class UPG_FunctionLibraryKit* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_FunctionLibraryKit*>(UPG_FunctionLibraryKit::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_FunctionLibraryKit", "ParseOption");

	Params::UPG_FunctionLibraryKit_ParseOption_Params Parms{};

	Parms.Options = Options;
	Parms.Key = Key;
	Parms.Separator = Separator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.GetRegionEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      RegionName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAzureRegion            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAzureRegion UPG_FunctionLibraryKit::GetRegionEnum(const class FString& RegionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_FunctionLibraryKit", "GetRegionEnum");

	Params::UPG_FunctionLibraryKit_GetRegionEnum_Params Parms{};

	Parms.RegionName = RegionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.GetRateScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimSequenceBase*           AnimationSequenceBase                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPG_FunctionLibraryKit::GetRateScale(class UAnimSequenceBase* AnimationSequenceBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_FunctionLibraryKit", "GetRateScale");

	Params::UPG_FunctionLibraryKit_GetRateScale_Params Parms{};

	Parms.AnimationSequenceBase = AnimationSequenceBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.GetProjectVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPG_FunctionLibraryKit::GetProjectVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_FunctionLibraryKit", "GetProjectVersion");

	Params::UPG_FunctionLibraryKit_GetProjectVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.GetBuildNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_FunctionLibraryKit::GetBuildNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_FunctionLibraryKit", "GetBuildNumber");

	Params::UPG_FunctionLibraryKit_GetBuildNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_FunctionLibraryKit.ExitGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UPG_FunctionLibraryKit::ExitGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_FunctionLibraryKit", "ExitGame");

	Params::UPG_FunctionLibraryKit_ExitGame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.PG_GameInstance
// (None)

class UClass* UPG_GameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_GameInstance");

	return Clss;
}


// PG_GameInstance POLYGON.Default__PG_GameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_GameInstance* UPG_GameInstance::GetDefaultObj()
{
	static class UPG_GameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_GameInstance*>(UPG_GameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_GameInstance.GetServerGameInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UServerGameInstance*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UServerGameInstance* UPG_GameInstance::GetServerGameInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameInstance", "GetServerGameInstance");

	Params::UPG_GameInstance_GetServerGameInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameInstance.GetClientGameInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClientGameInstance*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClientGameInstance* UPG_GameInstance::GetClientGameInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameInstance", "GetClientGameInstance");

	Params::UPG_GameInstance_GetClientGameInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.PG_GameMode_Base
// (Actor)

class UClass* UPG_GameMode_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_GameMode_Base");

	return Clss;
}


// PG_GameMode_Base POLYGON.Default__PG_GameMode_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_GameMode_Base* UPG_GameMode_Base::GetDefaultObj()
{
	static class UPG_GameMode_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_GameMode_Base*>(UPG_GameMode_Base::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_GameMode_Game
// (Actor)

class UClass* UPG_GameMode_Game::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_GameMode_Game");

	return Clss;
}


// PG_GameMode_Game POLYGON.Default__PG_GameMode_Game
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_GameMode_Game* UPG_GameMode_Game::GetDefaultObj()
{
	static class UPG_GameMode_Game* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_GameMode_Game*>(UPG_GameMode_Game::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_GameMode_Game.LoginPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPG_PlayerController_Game*   PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerMasterId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_GameMode_Game::LoginPlayer(class UPG_PlayerController_Game* PlayerController, const class FString& PlayerMasterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameMode_Game", "LoginPlayer");

	Params::UPG_GameMode_Game_LoginPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.PlayerMasterId = PlayerMasterId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.PG_GameMode_Game_StandBy
// (Actor)

class UClass* UPG_GameMode_Game_StandBy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_GameMode_Game_StandBy");

	return Clss;
}


// PG_GameMode_Game_StandBy POLYGON.Default__PG_GameMode_Game_StandBy
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_GameMode_Game_StandBy* UPG_GameMode_Game_StandBy::GetDefaultObj()
{
	static class UPG_GameMode_Game_StandBy* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_GameMode_Game_StandBy*>(UPG_GameMode_Game_StandBy::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_GameMode_Menu
// (Actor)

class UClass* UPG_GameMode_Menu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_GameMode_Menu");

	return Clss;
}


// PG_GameMode_Menu POLYGON.Default__PG_GameMode_Menu
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_GameMode_Menu* UPG_GameMode_Menu::GetDefaultObj()
{
	static class UPG_GameMode_Menu* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_GameMode_Menu*>(UPG_GameMode_Menu::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_GameState_Game
// (Actor)

class UClass* UPG_GameState_Game::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_GameState_Game");

	return Clss;
}


// PG_GameState_Game POLYGON.Default__PG_GameState_Game
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_GameState_Game* UPG_GameState_Game::GetDefaultObj()
{
	static class UPG_GameState_Game* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_GameState_Game*>(UPG_GameState_Game::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_GameState_Game.SetCanMovePlayers
// (Final, Native, Public)
// Parameters:
// bool                               NewMoveState                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_GameState_Game::SetCanMovePlayers(bool NewMoveState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "SetCanMovePlayers");

	Params::UPG_GameState_Game_SetCanMovePlayers_Params Parms{};

	Parms.NewMoveState = NewMoveState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_WinningTeam
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_WinningTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_WinningTeam");

	Params::UPG_GameState_Game_OnRep_WinningTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_TeamBravo
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_TeamBravo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_TeamBravo");

	Params::UPG_GameState_Game_OnRep_TeamBravo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_TeamAlpha
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_TeamAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_TeamAlpha");

	Params::UPG_GameState_Game_OnRep_TeamAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_ServerFps
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_ServerFps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_ServerFps");

	Params::UPG_GameState_Game_OnRep_ServerFps_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_ScoreBravoTeam
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_ScoreBravoTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_ScoreBravoTeam");

	Params::UPG_GameState_Game_OnRep_ScoreBravoTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_ScoreAlphaTeam
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_ScoreAlphaTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_ScoreAlphaTeam");

	Params::UPG_GameState_Game_OnRep_ScoreAlphaTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_Players
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_Players()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_Players");

	Params::UPG_GameState_Game_OnRep_Players_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_GameTimer
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_GameTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_GameTimer");

	Params::UPG_GameState_Game_OnRep_GameTimer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_GameState
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_GameState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_GameState");

	Params::UPG_GameState_Game_OnRep_GameState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.OnRep_CanMovePlayers
// (Final, Native, Private, Const)
// Parameters:

void UPG_GameState_Game::OnRep_CanMovePlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "OnRep_CanMovePlayers");

	Params::UPG_GameState_Game_OnRep_CanMovePlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.NotifyPlayerWasKicked
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class FString                      badGuyName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNameWasOptimized                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_GameState_Game::NotifyPlayerWasKicked(const class FString& badGuyName, bool bNameWasOptimized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "NotifyPlayerWasKicked");

	Params::UPG_GameState_Game_NotifyPlayerWasKicked_Params Parms{};

	Parms.badGuyName = badGuyName;
	Parms.bNameWasOptimized = bNameWasOptimized;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_GameState_Game.GetScoreBravoTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_GameState_Game::GetScoreBravoTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "GetScoreBravoTeam");

	Params::UPG_GameState_Game_GetScoreBravoTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameState_Game.GetScoreAlphaTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_GameState_Game::GetScoreAlphaTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "GetScoreAlphaTeam");

	Params::UPG_GameState_Game_GetScoreAlphaTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameState_Game.GetMaxScoreForWin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_GameState_Game::GetMaxScoreForWin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "GetMaxScoreForWin");

	Params::UPG_GameState_Game_GetMaxScoreForWin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_GameState_Game.GetGameTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPG_GameState_Game::GetGameTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_GameState_Game", "GetGameTimer");

	Params::UPG_GameState_Game_GetGameTimer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.PG_Game_Character
// (Actor, Pawn)

class UClass* UPG_Game_Character::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_Game_Character");

	return Clss;
}


// PG_Game_Character POLYGON.Default__PG_Game_Character
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_Game_Character* UPG_Game_Character::GetDefaultObj()
{
	static class UPG_Game_Character* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_Game_Character*>(UPG_Game_Character::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_Game_Character.StopInteractWithObject_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UPG_Game_Character::StopInteractWithObject_server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "StopInteractWithObject_server");

	Params::UPG_Game_Character_StopInteractWithObject_server_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.StopInteractWithObject
// (Final, Native, Protected)
// Parameters:

void UPG_Game_Character::StopInteractWithObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "StopInteractWithObject");

	Params::UPG_Game_Character_StopInteractWithObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.StartShooting
// (Event, Public, BlueprintEvent)
// Parameters:

void UPG_Game_Character::StartShooting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "StartShooting");

	Params::UPG_Game_Character_StartShooting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.StartInteractWithObject_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UActor*                      InteractActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::StartInteractWithObject_server(class UActor* InteractActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "StartInteractWithObject_server");

	Params::UPG_Game_Character_StartInteractWithObject_server_Params Parms{};

	Parms.InteractActor = InteractActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.StartInteractWithObject
// (Final, Native, Protected)
// Parameters:

void UPG_Game_Character::StartInteractWithObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "StartInteractWithObject");

	Params::UPG_Game_Character_StartInteractWithObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.SetNeutralizationVignetteImpact
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewNeutralizationVignetteImpact                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::SetNeutralizationVignetteImpact(float NewNeutralizationVignetteImpact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "SetNeutralizationVignetteImpact");

	Params::UPG_Game_Character_SetNeutralizationVignetteImpact_Params Parms{};

	Parms.NewNeutralizationVignetteImpact = NewNeutralizationVignetteImpact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.SetIsSprinting_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                               NewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::SetIsSprinting_server(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "SetIsSprinting_server");

	Params::UPG_Game_Character_SetIsSprinting_server_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.Respawn_client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FVector_NetQuantize         NewLocation                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantizeNormal   NewRotator                                                       (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::Respawn_client(struct FVector_NetQuantize& NewLocation, struct FVector_NetQuantizeNormal& NewRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "Respawn_client");

	Params::UPG_Game_Character_Respawn_client_Params Parms{};

	Parms.NewLocation = NewLocation;
	Parms.NewRotator = NewRotator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.Respawn
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPG_Game_Character::Respawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "Respawn");

	Params::UPG_Game_Character_Respawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.PlayerLooks
// (Final, BlueprintAuthorityOnly, Native, Private)
// Parameters:

void UPG_Game_Character::PlayerLooks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "PlayerLooks");

	Params::UPG_Game_Character_PlayerLooks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.OnRep_RespawnCounter
// (Final, Native, Private)
// Parameters:
// uint8                              PreviousValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::OnRep_RespawnCounter(uint8 PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "OnRep_RespawnCounter");

	Params::UPG_Game_Character_OnRep_RespawnCounter_Params Parms{};

	Parms.PreviousValue = PreviousValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.OnRep_PlayerAction
// (Final, Native, Private)
// Parameters:
// enum class EPlayerAction           PreviousAction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::OnRep_PlayerAction(enum class EPlayerAction PreviousAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "OnRep_PlayerAction");

	Params::UPG_Game_Character_OnRep_PlayerAction_Params Parms{};

	Parms.PreviousAction = PreviousAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "NotifyDeathWithImpulse_multicast");

	Params::UPG_Game_Character_NotifyDeathWithImpulse_multicast_Params Parms{};

	Parms.Killer = Killer;
	Parms.DeathType = DeathType;
	Parms.Impulse = Impulse;
	Parms.BoneIndex = BoneIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.NotifyDeath_multicast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class UPG_PlayerState_Game*        Killer                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlayerDeathType        DeathType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::NotifyDeath_multicast(class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "NotifyDeath_multicast");

	Params::UPG_Game_Character_NotifyDeath_multicast_Params Parms{};

	Parms.Killer = Killer;
	Parms.DeathType = DeathType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.LeanBody_server
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int8                               LeanBodyAlpha                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::LeanBody_server(int8 LeanBodyAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "LeanBody_server");

	Params::UPG_Game_Character_LeanBody_server_Params Parms{};

	Parms.LeanBodyAlpha = LeanBodyAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.HitAtProtectedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:

void UPG_Game_Character::HitAtProtectedCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "HitAtProtectedCharacter");

	Params::UPG_Game_Character_HitAtProtectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETeam                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETeam UPG_Game_Character::GetTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "GetTeam");

	Params::UPG_Game_Character_GetTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.GetPlayerAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPlayerAction           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPlayerAction UPG_Game_Character::GetPlayerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "GetPlayerAction");

	Params::UPG_Game_Character_GetPlayerAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.GetNeutralizationVignetteImpact
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPG_Game_Character::GetNeutralizationVignetteImpact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "GetNeutralizationVignetteImpact");

	Params::UPG_Game_Character_GetNeutralizationVignetteImpact_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.GetIsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPG_Game_Character::GetIsSprinting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "GetIsSprinting");

	Params::UPG_Game_Character_GetIsSprinting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.GetActiveCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraComponent* UPG_Game_Character::GetActiveCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "GetActiveCamera");

	Params::UPG_Game_Character_GetActiveCamera_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_Game_Character.EventTakeDamage
// (Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::EventTakeDamage(struct FVector& Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "EventTakeDamage");

	Params::UPG_Game_Character_EventTakeDamage_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "DeathEvent");

	Params::UPG_Game_Character_DeathEvent_Params Parms{};

	Parms.Killer = Killer;
	Parms.DeathType = DeathType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.ChangeIsAlive
// (Final, Native, Public)
// Parameters:

void UPG_Game_Character::ChangeIsAlive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "ChangeIsAlive");

	Params::UPG_Game_Character_ChangeIsAlive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.CameraNeutralizationEffectEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::CameraNeutralizationEffectEvent(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "CameraNeutralizationEffectEvent");

	Params::UPG_Game_Character_CameraNeutralizationEffectEvent_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_Game_Character.ActionWhenTakeDamage_client
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::ActionWhenTakeDamage_client(class UActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "ActionWhenTakeDamage_client");

	Params::UPG_Game_Character_ActionWhenTakeDamage_client_Params Parms{};

	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_Game_Character.ActionWhenGunHit_client
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// class UPG_Game_Character*          CharacterInstigator                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              HitBoneIndex                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_Game_Character::ActionWhenGunHit_client(class UPG_Game_Character* CharacterInstigator, uint8 HitBoneIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_Game_Character", "ActionWhenGunHit_client");

	Params::UPG_Game_Character_ActionWhenGunHit_client_Params Parms{};

	Parms.CharacterInstigator = CharacterInstigator;
	Parms.HitBoneIndex = HitBoneIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.PG_Menu_Character
// (Actor)

class UClass* UPG_Menu_Character::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_Menu_Character");

	return Clss;
}


// PG_Menu_Character POLYGON.Default__PG_Menu_Character
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_Menu_Character* UPG_Menu_Character::GetDefaultObj()
{
	static class UPG_Menu_Character* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_Menu_Character*>(UPG_Menu_Character::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_BeaconHostObject
// (Actor)

class UClass* UPG_BeaconHostObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_BeaconHostObject");

	return Clss;
}


// PG_BeaconHostObject POLYGON.Default__PG_BeaconHostObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_BeaconHostObject* UPG_BeaconHostObject::GetDefaultObj()
{
	static class UPG_BeaconHostObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_BeaconHostObject*>(UPG_BeaconHostObject::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_BeaconClient
// (Actor)

class UClass* UPG_BeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_BeaconClient");

	return Clss;
}


// PG_BeaconClient POLYGON.Default__PG_BeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_BeaconClient* UPG_BeaconClient::GetDefaultObj()
{
	static class UPG_BeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_BeaconClient*>(UPG_BeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_BeaconClient.SendNumberInQueue_client
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint8                              Number                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_BeaconClient::SendNumberInQueue_client(uint8 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_BeaconClient", "SendNumberInQueue_client");

	Params::UPG_BeaconClient_SendNumberInQueue_client_Params Parms{};

	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_BeaconClient.ResponseReserveSlot_client
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// uint8                              Payload                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_BeaconClient::ResponseReserveSlot_client(uint8 Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_BeaconClient", "ResponseReserveSlot_client");

	Params::UPG_BeaconClient_ResponseReserveSlot_client_Params Parms{};

	Parms.Payload = Payload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_BeaconClient.RequestReserveSlot_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<struct FUniqueNetIdRepl>    UnequeIds                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               IsUsedMatchmaker                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_BeaconClient::RequestReserveSlot_server(TArray<struct FUniqueNetIdRepl>& UnequeIds, bool IsUsedMatchmaker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_BeaconClient", "RequestReserveSlot_server");

	Params::UPG_BeaconClient_RequestReserveSlot_server_Params Parms{};

	Parms.UnequeIds = UnequeIds;
	Parms.IsUsedMatchmaker = IsUsedMatchmaker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_BeaconClient", "RequestReserveSlot");

	Params::UPG_BeaconClient_RequestReserveSlot_Params Parms{};

	Parms.UnequeIds = UnequeIds;
	Parms.IsUsedMatchmaker = IsUsedMatchmaker;
	Parms.OnResponseReserveSlot = OnResponseReserveSlot;
	Parms.OnPutInQueue = OnPutInQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_BeaconClient.LeaveQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPG_BeaconClient::LeaveQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_BeaconClient", "LeaveQueue");

	Params::UPG_BeaconClient_LeaveQueue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_BeaconClient", "ConnectToServer");

	Params::UPG_BeaconClient_ConnectToServer_Params Parms{};

	Parms.IP = IP;
	Parms.BeaconPort = BeaconPort;
	Parms.OnConnectedStateChange = OnConnectedStateChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.PG_PlayerController_Base
// (Actor, PlayerController)

class UClass* UPG_PlayerController_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_PlayerController_Base");

	return Clss;
}


// PG_PlayerController_Base POLYGON.Default__PG_PlayerController_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_PlayerController_Base* UPG_PlayerController_Base::GetDefaultObj()
{
	static class UPG_PlayerController_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_PlayerController_Base*>(UPG_PlayerController_Base::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_PlayerController_Base.ShowError
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorMessage                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ErrorDetails                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPG_PlayerController_Base::ShowError(class FText& ErrorMessage, class FText& ErrorDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Base", "ShowError");

	Params::UPG_PlayerController_Base_ShowError_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Base", "IsInvertMouse");

	Params::UPG_PlayerController_Base_IsInvertMouse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_PlayerController_Base.GetMouseSensitivityValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPG_PlayerController_Base::GetMouseSensitivityValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Base", "GetMouseSensitivityValue");

	Params::UPG_PlayerController_Base_GetMouseSensitivityValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PG_PlayerController_Base.GetMouseSensitivityAimingValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPG_PlayerController_Base::GetMouseSensitivityAimingValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Base", "GetMouseSensitivityAimingValue");

	Params::UPG_PlayerController_Base_GetMouseSensitivityAimingValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.PG_PlayerController_Game
// (Actor, PlayerController)

class UClass* UPG_PlayerController_Game::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_PlayerController_Game");

	return Clss;
}


// PG_PlayerController_Game POLYGON.Default__PG_PlayerController_Game
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_PlayerController_Game* UPG_PlayerController_Game::GetDefaultObj()
{
	static class UPG_PlayerController_Game* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_PlayerController_Game*>(UPG_PlayerController_Game::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_PlayerController_Game.VoteKick
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UPG_PlayerState_Game*        badGuy                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::VoteKick(class UPG_PlayerState_Game* badGuy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "VoteKick");

	Params::UPG_PlayerController_Game_VoteKick_Params Parms{};

	Parms.badGuy = badGuy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerController_Game.StopInteractionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPG_PlayerController_Game::StopInteractionEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "StopInteractionEvent");

	Params::UPG_PlayerController_Game_StopInteractionEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_PlayerController_Game.StopInteraction_Client
// (Net, Native, Event, Public, NetClient)
// Parameters:

void UPG_PlayerController_Game::StopInteraction_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "StopInteraction_Client");

	Params::UPG_PlayerController_Game_StopInteraction_Client_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerController_Game.StartInteractionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InteractionTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::StartInteractionEvent(float InteractionTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "StartInteractionEvent");

	Params::UPG_PlayerController_Game_StartInteractionEvent_Params Parms{};

	Parms.InteractionTime = InteractionTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_PlayerController_Game.StartInteraction_Client
// (Net, Native, Event, Public, NetClient)
// Parameters:
// float                              InteractionTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::StartInteraction_Client(float InteractionTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "StartInteraction_Client");

	Params::UPG_PlayerController_Game_StartInteraction_Client_Params Parms{};

	Parms.InteractionTime = InteractionTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerController_Game.SetVisibleLoadingScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::SetVisibleLoadingScreen(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "SetVisibleLoadingScreen");

	Params::UPG_PlayerController_Game_SetVisibleLoadingScreen_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnSquadMember_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UPG_PlayerState_Game*        SquadMember                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::RequestSpawnOnSquadMember_server(class UPG_PlayerState_Game* SquadMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "RequestSpawnOnSquadMember_server");

	Params::UPG_PlayerController_Game_RequestSpawnOnSquadMember_server_Params Parms{};

	Parms.SquadMember = SquadMember;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnControlPoint_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// enum class EControlPoint           SpawnToControlPoint                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::RequestSpawnOnControlPoint_server(enum class EControlPoint SpawnToControlPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "RequestSpawnOnControlPoint_server");

	Params::UPG_PlayerController_Game_RequestSpawnOnControlPoint_server_Params Parms{};

	Parms.SpawnToControlPoint = SpawnToControlPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnBase_server
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:

void UPG_PlayerController_Game::RequestSpawnOnBase_server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "RequestSpawnOnBase_server");

	Params::UPG_PlayerController_Game_RequestSpawnOnBase_server_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerController_Game.OnRep_DeployIsAvailable
// (Final, Native, Private)
// Parameters:

void UPG_PlayerController_Game::OnRep_DeployIsAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "OnRep_DeployIsAvailable");

	Params::UPG_PlayerController_Game_OnRep_DeployIsAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerController_Game.LoginPlayer_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class FString                      PlayerMasterId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::LoginPlayer_server(const class FString& PlayerMasterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "LoginPlayer_server");

	Params::UPG_PlayerController_Game_LoginPlayer_server_Params Parms{};

	Parms.PlayerMasterId = PlayerMasterId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerController_Game.DisplayMessageToChatEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameChatMessage            Message                                                          (Parm, NativeAccessSpecifierPublic)

void UPG_PlayerController_Game::DisplayMessageToChatEvent(const struct FGameChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerController_Game", "DisplayMessageToChatEvent");

	Params::UPG_PlayerController_Game_DisplayMessageToChatEvent_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Class POLYGON.PG_PlayerController_Menu
// (Actor, PlayerController)

class UClass* UPG_PlayerController_Menu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_PlayerController_Menu");

	return Clss;
}


// PG_PlayerController_Menu POLYGON.Default__PG_PlayerController_Menu
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_PlayerController_Menu* UPG_PlayerController_Menu::GetDefaultObj()
{
	static class UPG_PlayerController_Menu* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_PlayerController_Menu*>(UPG_PlayerController_Menu::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PG_PlayerState_Base
// (Actor)

class UClass* UPG_PlayerState_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_PlayerState_Base");

	return Clss;
}


// PG_PlayerState_Base POLYGON.Default__PG_PlayerState_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_PlayerState_Base* UPG_PlayerState_Base::GetDefaultObj()
{
	static class UPG_PlayerState_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_PlayerState_Base*>(UPG_PlayerState_Base::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_PlayerState_Base.UpdatePlayerCombinedInfo
// (Native, Protected, HasOutParams)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerState_Base::UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Base", "UpdatePlayerCombinedInfo");

	Params::UPG_PlayerState_Base_UpdatePlayerCombinedInfo_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerState_Base.SetPlayerName
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerState_Base::SetPlayerName(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Base", "SetPlayerName");

	Params::UPG_PlayerState_Base_SetPlayerName_Params Parms{};

	Parms.PlayerName = PlayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerState_Base.GetUniqueNetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUniqueNetIdRepl            ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FUniqueNetIdRepl UPG_PlayerState_Base::GetUniqueNetId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Base", "GetUniqueNetId");

	Params::UPG_PlayerState_Base_GetUniqueNetId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.PG_PlayerState_Game
// (Actor)

class UClass* UPG_PlayerState_Game::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_PlayerState_Game");

	return Clss;
}


// PG_PlayerState_Game POLYGON.Default__PG_PlayerState_Game
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_PlayerState_Game* UPG_PlayerState_Game::GetDefaultObj()
{
	static class UPG_PlayerState_Game* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_PlayerState_Game*>(UPG_PlayerState_Game::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PG_PlayerState_Game.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETeam                   NewTeam                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPG_PlayerState_Game::SetTeam(enum class ETeam NewTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Game", "SetTeam");

	Params::UPG_PlayerState_Game_SetTeam_Params Parms{};

	Parms.NewTeam = NewTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_VoteKickPlayers
// (Final, Native, Private)
// Parameters:

void UPG_PlayerState_Game::OnRep_VoteKickPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Game", "OnRep_VoteKickPlayers");

	Params::UPG_PlayerState_Game_OnRep_VoteKickPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_Team
// (Final, Native, Private)
// Parameters:

void UPG_PlayerState_Game::OnRep_Team()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Game", "OnRep_Team");

	Params::UPG_PlayerState_Game_OnRep_Team_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_NumberKills
// (Final, Native, Private)
// Parameters:

void UPG_PlayerState_Game::OnRep_NumberKills()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Game", "OnRep_NumberKills");

	Params::UPG_PlayerState_Game_OnRep_NumberKills_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerState_Game.OnRep_NumberDeaths
// (Final, Native, Private)
// Parameters:

void UPG_PlayerState_Game::OnRep_NumberDeaths()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Game", "OnRep_NumberDeaths");

	Params::UPG_PlayerState_Game_OnRep_NumberDeaths_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PG_PlayerState_Game.CustomIsInactive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPG_PlayerState_Game::CustomIsInactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PG_PlayerState_Game", "CustomIsInactive");

	Params::UPG_PlayerState_Game_CustomIsInactive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.PG_PlayerState_Menu
// (Actor)

class UClass* UPG_PlayerState_Menu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PG_PlayerState_Menu");

	return Clss;
}


// PG_PlayerState_Menu POLYGON.Default__PG_PlayerState_Menu
// (Public, ClassDefaultObject, ArchetypeObject)

class UPG_PlayerState_Menu* UPG_PlayerState_Menu::GetDefaultObj()
{
	static class UPG_PlayerState_Menu* Default = nullptr;

	if (!Default)
		Default = static_cast<UPG_PlayerState_Menu*>(UPG_PlayerState_Menu::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.PlayerCoreComponent
// (None)

class UClass* UPlayerCoreComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCoreComponent");

	return Clss;
}


// PlayerCoreComponent POLYGON.Default__PlayerCoreComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerCoreComponent* UPlayerCoreComponent::GetDefaultObj()
{
	static class UPlayerCoreComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerCoreComponent*>(UPlayerCoreComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.PlayerCoreComponent.UpdatePlayerCombinedInfo
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CustomDelegateString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerCoreComponent::UpdatePlayerCombinedInfo(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomDelegateString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "UpdatePlayerCombinedInfo");

	Params::UPlayerCoreComponent_UpdatePlayerCombinedInfo_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomDelegateString = CustomDelegateString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PlayerCoreComponent.Reset
// (Final, Native, Public)
// Parameters:

void UPlayerCoreComponent::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "Reset");

	Params::UPlayerCoreComponent_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PlayerCoreComponent.OnRep_TotalProgress
// (Final, Native, Private)
// Parameters:

void UPlayerCoreComponent::OnRep_TotalProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "OnRep_TotalProgress");

	Params::UPlayerCoreComponent_OnRep_TotalProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PlayerCoreComponent.NotifyAddedGameScore_client
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// TArray<struct FScoreInfo>          ScoreInfos                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UPlayerCoreComponent::NotifyAddedGameScore_client(TArray<struct FScoreInfo>& ScoreInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "NotifyAddedGameScore_client");

	Params::UPlayerCoreComponent_NotifyAddedGameScore_client_Params Parms{};

	Parms.ScoreInfos = ScoreInfos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.PlayerCoreComponent.GetNextLevelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLevelInfo                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLevelInfo UPlayerCoreComponent::GetNextLevelInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "GetNextLevelInfo");

	Params::UPlayerCoreComponent_GetNextLevelInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.GetNextLevelByLevelID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        LevelID                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelInfo                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLevelInfo UPlayerCoreComponent::GetNextLevelByLevelID(class FName LevelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "GetNextLevelByLevelID");

	Params::UPlayerCoreComponent_GetNextLevelByLevelID_Params Parms{};

	Parms.LevelID = LevelID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.GetLevelByProgress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Progress                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelInfo                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLevelInfo UPlayerCoreComponent::GetLevelByProgress(int32 Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "GetLevelByProgress");

	Params::UPlayerCoreComponent_GetLevelByProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.GetCurrentLevelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLevelInfo                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLevelInfo UPlayerCoreComponent::GetCurrentLevelInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "GetCurrentLevelInfo");

	Params::UPlayerCoreComponent_GetCurrentLevelInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.PlayerCoreComponent.AddCredits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              AddCredits                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayerCoreComponent::AddCredits(int32 AddCredits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCoreComponent", "AddCredits");

	Params::UPlayerCoreComponent_AddCredits_Params Parms{};

	Parms.AddCredits = AddCredits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.ReservedSlot
// (None)

class UClass* UReservedSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReservedSlot");

	return Clss;
}


// ReservedSlot POLYGON.Default__ReservedSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UReservedSlot* UReservedSlot::GetDefaultObj()
{
	static class UReservedSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UReservedSlot*>(UReservedSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.ServerBackendComponent
// (None)

class UClass* UServerBackendComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServerBackendComponent");

	return Clss;
}


// ServerBackendComponent POLYGON.Default__ServerBackendComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UServerBackendComponent* UServerBackendComponent::GetDefaultObj()
{
	static class UServerBackendComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerBackendComponent*>(UServerBackendComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.ServerGameInstance
// (None)

class UClass* UServerGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ServerGameInstance");

	return Clss;
}


// ServerGameInstance POLYGON.Default__ServerGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UServerGameInstance* UServerGameInstance::GetDefaultObj()
{
	static class UServerGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerGameInstance*>(UServerGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.ServerGameInstance.OnGSDKShutdown
// (Final, Native, Protected)
// Parameters:

void UServerGameInstance::OnGSDKShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerGameInstance", "OnGSDKShutdown");

	Params::UServerGameInstance_OnGSDKShutdown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ServerGameInstance.OnGSDKServerActive
// (Final, Native, Protected)
// Parameters:

void UServerGameInstance::OnGSDKServerActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerGameInstance", "OnGSDKServerActive");

	Params::UServerGameInstance_OnGSDKServerActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ServerGameInstance.OnGSDKReadyForPlayers
// (Final, Native, Protected)
// Parameters:

void UServerGameInstance::OnGSDKReadyForPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerGameInstance", "OnGSDKReadyForPlayers");

	Params::UServerGameInstance_OnGSDKReadyForPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.ServerGameInstance.OnGSDKHealthCheck
// (Final, Native, Protected)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UServerGameInstance::OnGSDKHealthCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ServerGameInstance", "OnGSDKHealthCheck");

	Params::UServerGameInstance_OnGSDKHealthCheck_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class POLYGON.SquadComponent
// (None)

class UClass* USquadComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SquadComponent");

	return Clss;
}


// SquadComponent POLYGON.Default__SquadComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USquadComponent* USquadComponent::GetDefaultObj()
{
	static class USquadComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USquadComponent*>(USquadComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.SquadComponent.OnRep_Members
// (Final, Native, Private)
// Parameters:

void USquadComponent::OnRep_Members()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SquadComponent", "OnRep_Members");

	Params::USquadComponent_OnRep_Members_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.SquadComponent.OnRep_CooldownCounter
// (Final, Native, Private)
// Parameters:

void USquadComponent::OnRep_CooldownCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SquadComponent", "OnRep_CooldownCounter");

	Params::USquadComponent_OnRep_CooldownCounter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.SupportBox
// (Actor)

class UClass* USupportBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SupportBox");

	return Clss;
}


// SupportBox POLYGON.Default__SupportBox
// (Public, ClassDefaultObject, ArchetypeObject)

class USupportBox* USupportBox::GetDefaultObj()
{
	static class USupportBox* Default = nullptr;

	if (!Default)
		Default = static_cast<USupportBox*>(USupportBox::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SupportBox", "OnCoverageEndOverlap");

	Params::USupportBox_OnCoverageEndOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SupportBox", "OnCoverageBeginOverlap");

	Params::USupportBox_OnCoverageBeginOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.FromSweep = FromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POLYGON.SupportBox_Ammo
// (Actor)

class UClass* USupportBox_Ammo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SupportBox_Ammo");

	return Clss;
}


// SupportBox_Ammo POLYGON.Default__SupportBox_Ammo
// (Public, ClassDefaultObject, ArchetypeObject)

class USupportBox_Ammo* USupportBox_Ammo::GetDefaultObj()
{
	static class USupportBox_Ammo* Default = nullptr;

	if (!Default)
		Default = static_cast<USupportBox_Ammo*>(USupportBox_Ammo::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.SupportBox_Health
// (Actor)

class UClass* USupportBox_Health::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SupportBox_Health");

	return Clss;
}


// SupportBox_Health POLYGON.Default__SupportBox_Health
// (Public, ClassDefaultObject, ArchetypeObject)

class USupportBox_Health* USupportBox_Health::GetDefaultObj()
{
	static class USupportBox_Health* Default = nullptr;

	if (!Default)
		Default = static_cast<USupportBox_Health*>(USupportBox_Health::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.TeamBase
// (Actor)

class UClass* UTeamBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamBase");

	return Clss;
}


// TeamBase POLYGON.Default__TeamBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UTeamBase* UTeamBase::GetDefaultObj()
{
	static class UTeamBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamBase*>(UTeamBase::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.UserEntry
// (None)

class UClass* UUserEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserEntry");

	return Clss;
}


// UserEntry POLYGON.Default__UserEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserEntry* UUserEntry::GetDefaultObj()
{
	static class UUserEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserEntry*>(UUserEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class POLYGON.WeaponComponent
// (None)

class UClass* UWeaponComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponComponent");

	return Clss;
}


// WeaponComponent POLYGON.Default__WeaponComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeaponComponent* UWeaponComponent::GetDefaultObj()
{
	static class UWeaponComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponComponent*>(UWeaponComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function POLYGON.WeaponComponent.ToggleAiming_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UWeaponComponent::ToggleAiming_server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "ToggleAiming_server");

	Params::UWeaponComponent_ToggleAiming_server_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.SetWantsToAiming_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// bool                               NewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SetWantsToAiming_server(bool NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "SetWantsToAiming_server");

	Params::UWeaponComponent_SetWantsToAiming_server_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.SetStrivingGunRecoilAlpha_Pitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewStrivingPitchRecoil                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SetStrivingGunRecoilAlpha_Pitch(float NewStrivingPitchRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "SetStrivingGunRecoilAlpha_Pitch");

	Params::UWeaponComponent_SetStrivingGunRecoilAlpha_Pitch_Params Parms{};

	Parms.NewStrivingPitchRecoil = NewStrivingPitchRecoil;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.SetGunRecoilIsActive_Backward
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWeaponComponent::SetGunRecoilIsActive_Backward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "SetGunRecoilIsActive_Backward");

	Params::UWeaponComponent_SetGunRecoilIsActive_Backward_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.SetGunRecoilAlpha_Yaw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewYawRecoil                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SetGunRecoilAlpha_Yaw(float NewYawRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "SetGunRecoilAlpha_Yaw");

	Params::UWeaponComponent_SetGunRecoilAlpha_Yaw_Params Parms{};

	Parms.NewYawRecoil = NewYawRecoil;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.SetGunRecoilAlpha_Roll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRollRecoil                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SetGunRecoilAlpha_Roll(float NewRollRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "SetGunRecoilAlpha_Roll");

	Params::UWeaponComponent_SetGunRecoilAlpha_Roll_Params Parms{};

	Parms.NewRollRecoil = NewRollRecoil;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.SelectGunSlot_server
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// uint8                              Slot                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::SelectGunSlot_server(uint8 Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "SelectGunSlot_server");

	Params::UWeaponComponent_SelectGunSlot_server_Params Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.OnSetSecondaryGun
// (Final, Native, Private)
// Parameters:

void UWeaponComponent::OnSetSecondaryGun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "OnSetSecondaryGun");

	Params::UWeaponComponent_OnSetSecondaryGun_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.OnSetPrimaryGun
// (Final, Native, Private)
// Parameters:

void UWeaponComponent::OnSetPrimaryGun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "OnSetPrimaryGun");

	Params::UWeaponComponent_OnSetPrimaryGun_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.OnSetPlayerState
// (Final, Native, Private)
// Parameters:

void UWeaponComponent::OnSetPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "OnSetPlayerState");

	Params::UWeaponComponent_OnSetPlayerState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.OnSetCurrentGun
// (Final, Native, Private)
// Parameters:
// class UItem_Gun_General*           OldCurrentGun                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWeaponComponent::OnSetCurrentGun(class UItem_Gun_General* OldCurrentGun)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "OnSetCurrentGun");

	Params::UWeaponComponent_OnSetCurrentGun_Params Parms{};

	Parms.OldCurrentGun = OldCurrentGun;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.OnRep_IsAiming
// (Final, Native, Private)
// Parameters:

void UWeaponComponent::OnRep_IsAiming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "OnRep_IsAiming");

	Params::UWeaponComponent_OnRep_IsAiming_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.NotifyServerThrowGrenade
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:

void UWeaponComponent::NotifyServerThrowGrenade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "NotifyServerThrowGrenade");

	Params::UWeaponComponent_NotifyServerThrowGrenade_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POLYGON.WeaponComponent.IsWantsToAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponComponent::IsWantsToAiming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "IsWantsToAiming");

	Params::UWeaponComponent_IsWantsToAiming_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.IsAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponComponent::IsAiming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "IsAiming");

	Params::UWeaponComponent_IsAiming_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetIsShooting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWeaponComponent::GetIsShooting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "GetIsShooting");

	Params::UWeaponComponent_GetIsShooting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Yaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponComponent::GetGunRecoilAlpha_Yaw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "GetGunRecoilAlpha_Yaw");

	Params::UWeaponComponent_GetGunRecoilAlpha_Yaw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Roll
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponComponent::GetGunRecoilAlpha_Roll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "GetGunRecoilAlpha_Roll");

	Params::UWeaponComponent_GetGunRecoilAlpha_Roll_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Pitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponComponent::GetGunRecoilAlpha_Pitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "GetGunRecoilAlpha_Pitch");

	Params::UWeaponComponent_GetGunRecoilAlpha_Pitch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Backward
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWeaponComponent::GetGunRecoilAlpha_Backward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "GetGunRecoilAlpha_Backward");

	Params::UWeaponComponent_GetGunRecoilAlpha_Backward_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function POLYGON.WeaponComponent.GetCurrentGun
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UItem_Gun_General*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UItem_Gun_General* UWeaponComponent::GetCurrentGun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponComponent", "GetCurrentGun");

	Params::UWeaponComponent_GetCurrentGun_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


