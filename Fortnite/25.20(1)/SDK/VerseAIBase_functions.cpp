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


// Function VerseAIBase.AIBehaviorScriptComponent.GetBehaviorScript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIBehaviorScript*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIBehaviorScript* UAIBehaviorScriptComponent::GetBehaviorScript()
{
	static auto Func = Class->GetFunction("AIBehaviorScriptComponent", "GetBehaviorScript");

	Params::UAIBehaviorScriptComponent_GetBehaviorScript_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponentInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEntityComponent*            EntityComponent                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_Verse::AddUniqueEntityComponentInstance(class UEntityComponent* EntityComponent)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_Verse", "AddUniqueEntityComponentInstance");

	Params::UFortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance_Params Parms;

	Parms.EntityComponent = EntityComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UEntityComponent>EntityComponent                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_Verse::AddUniqueEntityComponent(TSubclassOf<class UEntityComponent> EntityComponent)
{
	static auto Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_Verse", "AddUniqueEntityComponent");

	Params::UFortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent_Params Parms;

	Parms.EntityComponent = EntityComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.VerseAISpawner.RequestSpawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVerseAISpawner::RequestSpawn()
{
	static auto Func = Class->GetFunction("VerseAISpawner", "RequestSpawn");

	Params::UVerseAISpawner_RequestSpawn_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.VerseAISpawner.OnSpawned
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::OnSpawned(class UFortPawn* Pawn)
{
	static auto Func = Class->GetFunction("VerseAISpawner", "OnSpawned");

	Params::UVerseAISpawner_OnSpawned_Params Parms;

	Parms.Pawn = Pawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.VerseAISpawner.OnPropertiesLoaded
// (Final, Native, Private)
// Parameters:

void UVerseAISpawner::OnPropertiesLoaded()
{
	static auto Func = Class->GetFunction("VerseAISpawner", "OnPropertiesLoaded");

	Params::UVerseAISpawner_OnPropertiesLoaded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.VerseAISpawner.OnPreSpawn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortAthenaAISpawnerDataComponentList*ComponentList                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::OnPreSpawn(class UFortAthenaAISpawnerDataComponentList* ComponentList)
{
	static auto Func = Class->GetFunction("VerseAISpawner", "OnPreSpawn");

	Params::UVerseAISpawner_OnPreSpawn_Params Parms;

	Parms.ComponentList = ComponentList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.VerseAISpawner.OnEQSFinished
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<struct FVector>             QueryResultLocations                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVerseAISpawner::OnEQSFinished(TArray<struct FVector>& QueryResultLocations)
{
	static auto Func = Class->GetFunction("VerseAISpawner", "OnEQSFinished");

	Params::UVerseAISpawner_OnEQSFinished_Params Parms;

	Parms.QueryResultLocations = QueryResultLocations;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.VerseAISpawner.KillAllBots
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bForceDoNotDropLoot                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::KillAllBots(bool bForceDoNotDropLoot)
{
	static auto Func = Class->GetFunction("VerseAISpawner", "KillAllBots");

	Params::UVerseAISpawner_KillAllBots_Params Parms;

	Parms.bForceDoNotDropLoot = bForceDoNotDropLoot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.VerseAISpawner.InternalOnSpawned
// (Final, Native, Private)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::InternalOnSpawned(class UPawn* Pawn, int32 RequestID)
{
	static auto Func = Class->GetFunction("VerseAISpawner", "InternalOnSpawned");

	Params::UVerseAISpawner_InternalOnSpawned_Params Parms;

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseAIBase.VerseAISpawner.InternalOnAIDied
// (Final, Native, Private)
// Parameters:
// class UController*                 KilledController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsABot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   KilledAIPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             KilledPlayerPawn                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 KillerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::InternalOnAIDied(class UController* KilledController, bool bIsABot, class UFortPawn* KilledAIPawn, class UFortPlayerPawn* KilledPlayerPawn, class UController* KillerController)
{
	static auto Func = Class->GetFunction("VerseAISpawner", "InternalOnAIDied");

	Params::UVerseAISpawner_InternalOnAIDied_Params Parms;

	Parms.KilledController = KilledController;
	Parms.bIsABot = bIsABot;
	Parms.KilledAIPawn = KilledAIPawn;
	Parms.KilledPlayerPawn = KilledPlayerPawn;
	Parms.KillerController = KillerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
