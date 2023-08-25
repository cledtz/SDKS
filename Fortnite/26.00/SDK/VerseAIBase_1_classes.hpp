#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xE0 - 0xA0)
// Class VerseAIBase.AIActionsHandlerComponent
class UAIActionsHandlerComponent : public UActorComponent
{
public:
	uint8                                        Pad_2D6D[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIActionsHandlerComponent* GetDefaultObj();

};

// 0x20 (0xB0 - 0x90)
// Class VerseAIBase.AIActionsComponent
class UAIActionsComponent : public UAIComponent
{
public:
	uint8                                        Pad_2D72[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAIActionsComponent* GetDefaultObj();

};

// 0x8 (0x118 - 0x110)
// Class VerseAIBase.AIBehaviorScriptComponent
class UAIBehaviorScriptComponent : public UFortUserOptionContainerComponent
{
public:
	class UAIBehaviorScript*                     AIBehaviorScript;                                  // 0x110(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, SaveGame, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAIBehaviorScriptComponent* GetDefaultObj();

	class UAIBehaviorScript* GetBehaviorScript();
};

// 0x18 (0x48 - 0x30)
// Class VerseAIBase.FortAthenaAISpawnerDataComponent_Verse
class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase
{
public:
	TArray<TSubclassOf<class UEntityComponent>>  EntityComponents;                                  // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UAIBehaviorScript>      AIBehaviorScript;                                  // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaAISpawnerDataComponent_Verse* GetDefaultObj();

	void SetAIBehaviorScript(class UAIBehaviorScript* InAIBehaviorScript);
	void AddUniqueEntityComponent(TSubclassOf<class UEntityComponent> EntityComponent);
};

// 0x80 (0xC48 - 0xBC8)
// Class VerseAIBase.VerseAISpawner
class UVerseAISpawner : public UFortCreativeDeviceProp
{
public:
	TArray<TSubclassOf<class UEntityScriptComponent>> VerseScriptComponents;                             // 0xBC8(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAthenaAISpawnerData>  AISpawnerData;                                     // 0xBD8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortPawn*>                     SpawnedList;                                       // 0xBE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortMinigameProgressComponent*        MinigameProgress;                                  // 0xBF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAISpawnerUtilityComponent*        AISpawnerUtilityComponent;                         // 0xBF8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortActorOptionsComponent*            OptionsComponent;                                  // 0xC00(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UEnvQuery>              SpawnEQSQuery;                                     // 0xC08(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DCA[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseAISpawner* GetDefaultObj();

	void RequestSpawn();
	void OnSpawned(class UFortPawn* Pawn);
	void OnPropertiesLoaded();
	void OnPreSpawn(class UFortAthenaAISpawnerDataComponentList* ComponentList);
	void OnEQSFinished(TArray<struct FVector>& QueryResultLocations);
	void KillAllBots(bool bForceDoNotDropLoot);
	void InternalOnSpawned(class UPawn* Pawn, int32 RequestID);
	void InternalOnAIDied(class UController* KilledController, bool bIsABot, class UFortPawn* KilledAIPawn, class UFortPlayerPawn* KilledPlayerPawn, class UController* KillerController);
};

}


