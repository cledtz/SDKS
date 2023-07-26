#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x298 - 0x290)
// Class VerseFortnite.VerseActorPayloadWrapper
class AVerseActorPayloadWrapper : public AActor
{
public:
	uint8                                        Pad_79D3[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseActorPayloadWrapper");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class VerseFortnite.VerseFortniteBRTeamCollection
class UVerseFortniteBRTeamCollection : public UObject
{
public:
	uint8                                        Pad_79D4[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteBRTeamCollection");
		return Clss;
	}

	void OnActiveTeamArrayBuilt();
};

// 0x20 (0x48 - 0x28)
// Class VerseFortnite.VerseFortniteMinigameTeamCollection
class UVerseFortniteMinigameTeamCollection : public UObject
{
public:
	uint8                                        Pad_79D5[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteMinigameTeamCollection");
		return Clss;
	}

	void OnMinigameSetUp(class AFortMinigame* InMinigame);
	void OnMinigameDestroyed(class AActor* DestroyedMinigame);
};

// 0x20 (0x48 - 0x28)
// Class VerseFortnite.VerseFortniteActorWrapper
class UVerseFortniteActorWrapper : public UObject
{
public:
	uint8                                        Pad_79D6[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteActorWrapper");
		return Clss;
	}

	void OnActorDestroyed(class AActor* DestroyedActor);
};

// 0x8 (0x50 - 0x48)
// Class VerseFortnite.VerseFortniteCharacter
class UVerseFortniteCharacter : public UVerseFortniteActorWrapper
{
public:
	uint8                                        Pad_79D7[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteCharacter");
		return Clss;
	}

	void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);
	void HandlePawnEliminated(class AFortPlayerPawnAthena* EliminatedPawn);
};

// 0x50 (0x80 - 0x30)
// Class VerseFortnite.TaggedObjectQueryWorldSubsystem
class UTaggedObjectQueryWorldSubsystem : public UTaggedObjectQueryWorldSubsystemBase
{
public:
	uint8                                        Pad_79D8[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TaggedObjectQueryWorldSubsystem");
		return Clss;
	}

};

// 0x70 (0xB8 - 0x48)
// Class VerseFortnite.VerseFortnitePlayspace
class UVerseFortnitePlayspace : public UVerseFortniteActorWrapper
{
public:
	uint8                                        Pad_79DA[0x60];                                    // Fixing Size After Last Property..
	TArray<class UVerseFortnitePlayspaceExtensionBase*> Extensions;                                        // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortnitePlayspace");
		return Clss;
	}

	void OnMinigameSetUp(class AFortMinigame* Minigame);
	void OnMinigamePlayerAdded(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer);
};

// 0x0 (0x28 - 0x28)
// Class VerseFortnite.VerseFortnitePlayspaceExtensionBase
class UVerseFortnitePlayspaceExtensionBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortnitePlayspaceExtensionBase");
		return Clss;
	}

};

// 0xA0 (0xD0 - 0x30)
// Class VerseFortnite.VerseFortniteSubsystem
class UVerseFortniteSubsystem : public UWorldSubsystem
{
public:
	TMap<TWeakObjectPtr<class AActor>, class UVerseFortniteActorWrapper*> ActorToWrapperMap;                                 // 0x30(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_79DB[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteSubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
