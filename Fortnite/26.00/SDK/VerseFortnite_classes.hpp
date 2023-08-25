#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x298 - 0x290)
// Class VerseFortnite.VerseActorPayloadWrapper
class UVerseActorPayloadWrapper : public UActor
{
public:
	uint8                                        Pad_26D1[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseActorPayloadWrapper* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class VerseFortnite.VerseFortniteBRTeamCollection
class UVerseFortniteBRTeamCollection : public UObject
{
public:
	uint8                                        Pad_26D8[0x68];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteBRTeamCollection* GetDefaultObj();

	void OnActiveTeamArrayBuilt();
};

// 0x20 (0x48 - 0x28)
// Class VerseFortnite.VerseFortniteMinigameTeamCollection
class UVerseFortniteMinigameTeamCollection : public UObject
{
public:
	uint8                                        Pad_26E8[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteMinigameTeamCollection* GetDefaultObj();

	void OnMinigameSetUp(class UFortMinigame* InMinigame);
	void OnMinigameDestroyed(class UActor* DestroyedMinigame);
};

// 0x18 (0x90 - 0x78)
// Class VerseFortnite.AIComponent
class UAIComponent : public UEntityEnableableComponent
{
public:
	class UFortPawn*                             CachedPawn;                                        // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIController*                         CachedAIController;                                // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26EE[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIComponent* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class VerseFortnite.AIBehaviorScript
class UAIBehaviorScript : public UAIComponent
{
public:

	static class UClass* StaticClass();
	static class UAIBehaviorScript* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class VerseFortnite.VerseFortniteActorWrapper
class UVerseFortniteActorWrapper : public UObject
{
public:
	uint8                                        Pad_26F7[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteActorWrapper* GetDefaultObj();

	void OnActorDestroyed(class UActor* DestroyedActor);
};

// 0x8 (0x50 - 0x48)
// Class VerseFortnite.VerseFortniteCharacter
class UVerseFortniteCharacter : public UVerseFortniteActorWrapper
{
public:
	uint8                                        Pad_2705[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteCharacter* GetDefaultObj();

	void HandlePossessedPawnChanged(class UPawn* OldPawn, class UPawn* NewPawn);
	void HandlePawnEliminated(class UFortPlayerPawnAthena* EliminatedPawn);
};

// 0x50 (0x80 - 0x30)
// Class VerseFortnite.TaggedObjectQueryWorldSubsystem
class UTaggedObjectQueryWorldSubsystem : public UTaggedObjectQueryWorldSubsystemBase
{
public:
	uint8                                        Pad_2709[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UTaggedObjectQueryWorldSubsystem* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class VerseFortnite.VerseFortnitePlayspace
class UVerseFortnitePlayspace : public UVerseFortniteActorWrapper
{
public:
	uint8                                        Pad_2718[0x60];                                    // Fixing Size After Last Property 
	TArray<class UVerseFortnitePlayspaceExtensionBase*> Extensions;                                        // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVerseFortnitePlayspace* GetDefaultObj();

	void OnMinigameSetUp(class UFortMinigame* Minigame);
	void OnMinigamePlayerAdded(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer);
};

// 0x0 (0x28 - 0x28)
// Class VerseFortnite.VerseFortnitePlayspaceExtensionBase
class UVerseFortnitePlayspaceExtensionBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseFortnitePlayspaceExtensionBase* GetDefaultObj();

};

// 0xB8 (0xE8 - 0x30)
// Class VerseFortnite.VerseFortniteSubsystem
class UVerseFortniteSubsystem : public UWorldSubsystem
{
public:
	TMap<TWeakObjectPtr<class UActor>, class UVerseFortniteActorWrapper*> ActorToWrapperMap;                                 // 0x30(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_271D[0x68];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteSubsystem* GetDefaultObj();

};

}


