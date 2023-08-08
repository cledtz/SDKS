#pragma once

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
class UVerseActorPayloadWrapper : public UActor
{
public:
	uint8                                        Pad_3693[0x8];                                     // Fixing Size Of Struct

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
	uint8                                        Pad_3696[0x68];                                    // Fixing Size Of Struct

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
	uint8                                        Pad_36A0[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteMinigameTeamCollection");
		return Clss;
	}

	void OnMinigameSetUp(class UFortMinigame* InMinigame);
	void OnMinigameDestroyed(class UActor* DestroyedMinigame);
};

// 0x20 (0x48 - 0x28)
// Class VerseFortnite.VerseFortniteActorWrapper
class UVerseFortniteActorWrapper : public UObject
{
public:
	uint8                                        Pad_36A7[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteActorWrapper");
		return Clss;
	}

	void OnActorDestroyed(class UActor* DestroyedActor);
};

// 0x8 (0x50 - 0x48)
// Class VerseFortnite.VerseFortniteCharacter
class UVerseFortniteCharacter : public UVerseFortniteActorWrapper
{
public:
	uint8                                        Pad_36AC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortniteCharacter");
		return Clss;
	}

	void HandlePossessedPawnChanged(class UPawn* OldPawn, class UPawn* NewPawn);
	void HandlePawnEliminated(class UFortPlayerPawnAthena* EliminatedPawn);
};

// 0x50 (0x80 - 0x30)
// Class VerseFortnite.TaggedObjectQueryWorldSubsystem
class UTaggedObjectQueryWorldSubsystem : public UTaggedObjectQueryWorldSubsystemBase
{
public:
	uint8                                        Pad_36AF[0x50];                                    // Fixing Size Of Struct

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
	uint8                                        Pad_36B4[0x60];                                    // Fixing Size After Last Property
	TArray<class UVerseFortnitePlayspaceExtensionBase*> Extensions;                                        // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseFortnitePlayspace");
		return Clss;
	}

	void OnMinigameSetUp(class UFortMinigame* Minigame);
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
	TMap<TWeakObjectPtr<class UActor>, class UVerseFortniteActorWrapper*> ActorToWrapperMap;                                 // 0x30(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_36B5[0x50];                                    // Fixing Size Of Struct

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
