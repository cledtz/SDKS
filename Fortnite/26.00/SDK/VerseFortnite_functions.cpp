#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseFortnite.VerseActorPayloadWrapper
// (Actor)

class UClass* UVerseActorPayloadWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseActorPayloadWrapper");

	return Clss;
}


// VerseActorPayloadWrapper VerseFortnite.Default__VerseActorPayloadWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseActorPayloadWrapper* UVerseActorPayloadWrapper::GetDefaultObj()
{
	static class UVerseActorPayloadWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseActorPayloadWrapper*>(UVerseActorPayloadWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortnite.VerseFortniteBRTeamCollection
// (None)

class UClass* UVerseFortniteBRTeamCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteBRTeamCollection");

	return Clss;
}


// VerseFortniteBRTeamCollection VerseFortnite.Default__VerseFortniteBRTeamCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteBRTeamCollection* UVerseFortniteBRTeamCollection::GetDefaultObj()
{
	static class UVerseFortniteBRTeamCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteBRTeamCollection*>(UVerseFortniteBRTeamCollection::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.VerseFortniteBRTeamCollection.OnActiveTeamArrayBuilt
// (Final, Native, Private)
// Parameters:

void UVerseFortniteBRTeamCollection::OnActiveTeamArrayBuilt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteBRTeamCollection", "OnActiveTeamArrayBuilt");

	Params::UVerseFortniteBRTeamCollection_OnActiveTeamArrayBuilt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortnite.VerseFortniteMinigameTeamCollection
// (None)

class UClass* UVerseFortniteMinigameTeamCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteMinigameTeamCollection");

	return Clss;
}


// VerseFortniteMinigameTeamCollection VerseFortnite.Default__VerseFortniteMinigameTeamCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteMinigameTeamCollection* UVerseFortniteMinigameTeamCollection::GetDefaultObj()
{
	static class UVerseFortniteMinigameTeamCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteMinigameTeamCollection*>(UVerseFortniteMinigameTeamCollection::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameSetUp
// (Final, Native, Private)
// Parameters:
// class UFortMinigame*               InMinigame                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteMinigameTeamCollection::OnMinigameSetUp(class UFortMinigame* InMinigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteMinigameTeamCollection", "OnMinigameSetUp");

	Params::UVerseFortniteMinigameTeamCollection_OnMinigameSetUp_Params Parms{};

	Parms.InMinigame = InMinigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      DestroyedMinigame                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteMinigameTeamCollection::OnMinigameDestroyed(class UActor* DestroyedMinigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteMinigameTeamCollection", "OnMinigameDestroyed");

	Params::UVerseFortniteMinigameTeamCollection_OnMinigameDestroyed_Params Parms{};

	Parms.DestroyedMinigame = DestroyedMinigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortnite.AIComponent
// (None)

class UClass* UAIComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIComponent");

	return Clss;
}


// AIComponent VerseFortnite.Default__AIComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIComponent* UAIComponent::GetDefaultObj()
{
	static class UAIComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIComponent*>(UAIComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortnite.AIBehaviorScript
// (None)

class UClass* UAIBehaviorScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIBehaviorScript");

	return Clss;
}


// AIBehaviorScript VerseFortnite.Default__AIBehaviorScript
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIBehaviorScript* UAIBehaviorScript::GetDefaultObj()
{
	static class UAIBehaviorScript* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIBehaviorScript*>(UAIBehaviorScript::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortnite.VerseFortniteActorWrapper
// (None)

class UClass* UVerseFortniteActorWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteActorWrapper");

	return Clss;
}


// VerseFortniteActorWrapper VerseFortnite.Default__VerseFortniteActorWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteActorWrapper* UVerseFortniteActorWrapper::GetDefaultObj()
{
	static class UVerseFortniteActorWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteActorWrapper*>(UVerseFortniteActorWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.VerseFortniteActorWrapper.OnActorDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteActorWrapper::OnActorDestroyed(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteActorWrapper", "OnActorDestroyed");

	Params::UVerseFortniteActorWrapper_OnActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortnite.VerseFortniteCharacter
// (None)

class UClass* UVerseFortniteCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteCharacter");

	return Clss;
}


// VerseFortniteCharacter VerseFortnite.Default__VerseFortniteCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteCharacter* UVerseFortniteCharacter::GetDefaultObj()
{
	static class UVerseFortniteCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteCharacter*>(UVerseFortniteCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.VerseFortniteCharacter.HandlePossessedPawnChanged
// (Final, Native, Private)
// Parameters:
// class UPawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteCharacter::HandlePossessedPawnChanged(class UPawn* OldPawn, class UPawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteCharacter", "HandlePossessedPawnChanged");

	Params::UVerseFortniteCharacter_HandlePossessedPawnChanged_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.VerseFortniteCharacter.HandlePawnEliminated
// (Native, Protected)
// Parameters:
// class UFortPlayerPawnAthena*       EliminatedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortniteCharacter::HandlePawnEliminated(class UFortPlayerPawnAthena* EliminatedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortniteCharacter", "HandlePawnEliminated");

	Params::UVerseFortniteCharacter_HandlePawnEliminated_Params Parms{};

	Parms.EliminatedPawn = EliminatedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortnite.TaggedObjectQueryWorldSubsystem
// (None)

class UClass* UTaggedObjectQueryWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TaggedObjectQueryWorldSubsystem");

	return Clss;
}


// TaggedObjectQueryWorldSubsystem VerseFortnite.Default__TaggedObjectQueryWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UTaggedObjectQueryWorldSubsystem* UTaggedObjectQueryWorldSubsystem::GetDefaultObj()
{
	static class UTaggedObjectQueryWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UTaggedObjectQueryWorldSubsystem*>(UTaggedObjectQueryWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortnite.VerseFortnitePlayspace
// (None)

class UClass* UVerseFortnitePlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortnitePlayspace");

	return Clss;
}


// VerseFortnitePlayspace VerseFortnite.Default__VerseFortnitePlayspace
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortnitePlayspace* UVerseFortnitePlayspace::GetDefaultObj()
{
	static class UVerseFortnitePlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortnitePlayspace*>(UVerseFortnitePlayspace::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.VerseFortnitePlayspace.OnMinigameSetUp
// (Final, Native, Private)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortnitePlayspace::OnMinigameSetUp(class UFortMinigame* Minigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortnitePlayspace", "OnMinigameSetUp");

	Params::UVerseFortnitePlayspace_OnMinigameSetUp_Params Parms{};

	Parms.Minigame = Minigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.VerseFortnitePlayspace.OnMinigamePlayerAdded
// (Final, Native, Private)
// Parameters:
// struct FUniqueNetIdRepl            UniqueNetId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseFortnitePlayspace::OnMinigamePlayerAdded(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseFortnitePlayspace", "OnMinigamePlayerAdded");

	Params::UVerseFortnitePlayspace_OnMinigamePlayerAdded_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortnite.VerseFortnitePlayspaceExtensionBase
// (None)

class UClass* UVerseFortnitePlayspaceExtensionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortnitePlayspaceExtensionBase");

	return Clss;
}


// VerseFortnitePlayspaceExtensionBase VerseFortnite.Default__VerseFortnitePlayspaceExtensionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortnitePlayspaceExtensionBase* UVerseFortnitePlayspaceExtensionBase::GetDefaultObj()
{
	static class UVerseFortnitePlayspaceExtensionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortnitePlayspaceExtensionBase*>(UVerseFortnitePlayspaceExtensionBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortnite.VerseFortniteSubsystem
// (None)

class UClass* UVerseFortniteSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteSubsystem");

	return Clss;
}


// VerseFortniteSubsystem VerseFortnite.Default__VerseFortniteSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteSubsystem* UVerseFortniteSubsystem::GetDefaultObj()
{
	static class UVerseFortniteSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteSubsystem*>(UVerseFortniteSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


