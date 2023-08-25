#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseAIBase.AIActionsHandlerComponent
// (None)

class UClass* UAIActionsHandlerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionsHandlerComponent");

	return Clss;
}


// AIActionsHandlerComponent VerseAIBase.Default__AIActionsHandlerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIActionsHandlerComponent* UAIActionsHandlerComponent::GetDefaultObj()
{
	static class UAIActionsHandlerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionsHandlerComponent*>(UAIActionsHandlerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseAIBase.AIActionsComponent
// (None)

class UClass* UAIActionsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionsComponent");

	return Clss;
}


// AIActionsComponent VerseAIBase.Default__AIActionsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIActionsComponent* UAIActionsComponent::GetDefaultObj()
{
	static class UAIActionsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionsComponent*>(UAIActionsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseAIBase.AIBehaviorScriptComponent
// (None)

class UClass* UAIBehaviorScriptComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIBehaviorScriptComponent");

	return Clss;
}


// AIBehaviorScriptComponent VerseAIBase.Default__AIBehaviorScriptComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIBehaviorScriptComponent* UAIBehaviorScriptComponent::GetDefaultObj()
{
	static class UAIBehaviorScriptComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIBehaviorScriptComponent*>(UAIBehaviorScriptComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.AIBehaviorScriptComponent.GetBehaviorScript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIBehaviorScript*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIBehaviorScript* UAIBehaviorScriptComponent::GetBehaviorScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBehaviorScriptComponent", "GetBehaviorScript");

	Params::UAIBehaviorScriptComponent_GetBehaviorScript_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VerseAIBase.FortAthenaAISpawnerDataComponent_Verse
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_Verse::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_Verse");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_Verse VerseAIBase.Default__FortAthenaAISpawnerDataComponent_Verse
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_Verse* UFortAthenaAISpawnerDataComponent_Verse::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_Verse* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_Verse*>(UFortAthenaAISpawnerDataComponent_Verse::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.SetAIBehaviorScript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIBehaviorScript*           InAIBehaviorScript                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_Verse::SetAIBehaviorScript(class UAIBehaviorScript* InAIBehaviorScript)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_Verse", "SetAIBehaviorScript");

	Params::UFortAthenaAISpawnerDataComponent_Verse_SetAIBehaviorScript_Params Parms{};

	Parms.InAIBehaviorScript = InAIBehaviorScript;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UEntityComponent>EntityComponent                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_Verse::AddUniqueEntityComponent(TSubclassOf<class UEntityComponent> EntityComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_Verse", "AddUniqueEntityComponent");

	Params::UFortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent_Params Parms{};

	Parms.EntityComponent = EntityComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseAIBase.VerseAISpawner
// (Actor)

class UClass* UVerseAISpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAISpawner");

	return Clss;
}


// VerseAISpawner VerseAIBase.Default__VerseAISpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseAISpawner* UVerseAISpawner::GetDefaultObj()
{
	static class UVerseAISpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAISpawner*>(UVerseAISpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAISpawner.RequestSpawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVerseAISpawner::RequestSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAISpawner", "RequestSpawn");

	Params::UVerseAISpawner_RequestSpawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseAIBase.VerseAISpawner.OnSpawned
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::OnSpawned(class UFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAISpawner", "OnSpawned");

	Params::UVerseAISpawner_OnSpawned_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseAIBase.VerseAISpawner.OnPropertiesLoaded
// (Final, Native, Private)
// Parameters:

void UVerseAISpawner::OnPropertiesLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAISpawner", "OnPropertiesLoaded");

	Params::UVerseAISpawner_OnPropertiesLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseAIBase.VerseAISpawner.OnPreSpawn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UFortAthenaAISpawnerDataComponentList*ComponentList                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::OnPreSpawn(class UFortAthenaAISpawnerDataComponentList* ComponentList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAISpawner", "OnPreSpawn");

	Params::UVerseAISpawner_OnPreSpawn_Params Parms{};

	Parms.ComponentList = ComponentList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseAIBase.VerseAISpawner.OnEQSFinished
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<struct FVector>             QueryResultLocations                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVerseAISpawner::OnEQSFinished(TArray<struct FVector>& QueryResultLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAISpawner", "OnEQSFinished");

	Params::UVerseAISpawner_OnEQSFinished_Params Parms{};

	Parms.QueryResultLocations = QueryResultLocations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseAIBase.VerseAISpawner.KillAllBots
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bForceDoNotDropLoot                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::KillAllBots(bool bForceDoNotDropLoot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAISpawner", "KillAllBots");

	Params::UVerseAISpawner_KillAllBots_Params Parms{};

	Parms.bForceDoNotDropLoot = bForceDoNotDropLoot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseAIBase.VerseAISpawner.InternalOnSpawned
// (Final, Native, Private)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseAISpawner::InternalOnSpawned(class UPawn* Pawn, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAISpawner", "InternalOnSpawned");

	Params::UVerseAISpawner_InternalOnSpawned_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAISpawner", "InternalOnAIDied");

	Params::UVerseAISpawner_InternalOnAIDied_Params Parms{};

	Parms.KilledController = KilledController;
	Parms.bIsABot = bIsABot;
	Parms.KilledAIPawn = KilledAIPawn;
	Parms.KilledPlayerPawn = KilledPlayerPawn;
	Parms.KillerController = KillerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


