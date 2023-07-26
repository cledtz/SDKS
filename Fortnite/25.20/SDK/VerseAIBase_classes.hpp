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

// 0x40 (0xE0 - 0xA0)
// Class VerseAIBase.AIActionsHandlerComponent
class UAIActionsHandlerComponent : public UActorComponent
{
public:
	uint8                                        Pad_372B[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIActionsHandlerComponent");
		return Clss;
	}

};

// 0x18 (0x98 - 0x80)
// Class VerseAIBase.AIComponent
class UAIComponent : public UEntityEnableableComponent
{
public:
	class AFortPawn*                             CachedPawn;                                        // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                         CachedAIController;                                // 0x88(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_372C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIComponent");
		return Clss;
	}

};

// 0x20 (0xB8 - 0x98)
// Class VerseAIBase.AIActionsComponent
class UAIActionsComponent : public UAIComponent
{
public:
	uint8                                        Pad_372D[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIActionsComponent");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class VerseAIBase.AIBehaviorScript
class UAIBehaviorScript : public UAIComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIBehaviorScript");
		return Clss;
	}

};

// 0x8 (0xA8 - 0xA0)
// Class VerseAIBase.AIBehaviorScriptComponent
class UAIBehaviorScriptComponent : public UActorComponent
{
public:
	class UAIBehaviorScript*                     AIBehaviorScript;                                  // 0xA0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AIBehaviorScriptComponent");
		return Clss;
	}

	class UAIBehaviorScript* GetBehaviorScript();
};

// 0x20 (0x50 - 0x30)
// Class VerseAIBase.FortAthenaAISpawnerDataComponent_Verse
class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase
{
public:
	TArray<TSubclassOf<class UEntityComponent>>  EntityComponents;                                  // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UEntityComponent>> EntityComponentInstances;                          // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_Verse");
		return Clss;
	}

	void AddUniqueEntityComponentInstance(class UEntityComponent* EntityComponent);
	void AddUniqueEntityComponent(TSubclassOf<class UEntityComponent> EntityComponent);
};

// 0x88 (0xC58 - 0xBD0)
// Class VerseAIBase.VerseAISpawner
class AVerseAISpawner : public AFortCreativeDeviceProp
{
public:
	TArray<TSubclassOf<class UEntityScriptComponent>> VerseScriptComponents;                             // 0xBD0(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAthenaAISpawnerData>  AISpawnerData;                                     // 0xBE0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AFortPawn*>                     SpawnedList;                                       // 0xBE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UFortMinigameProgressComponent*        MinigameProgress;                                  // 0xBF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAISpawnerUtilityComponent*        AISpawnerUtilityComponent;                         // 0xC00(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortActorOptionsComponent*            OptionsComponent;                                  // 0xC08(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UEnvQuery>              SpawnEQSQuery;                                     // 0xC10(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3730[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAISpawner");
		return Clss;
	}

	void RequestSpawn();
	void OnSpawned(class AFortPawn* Pawn);
	void OnPropertiesLoaded();
	void OnPreSpawn(class UFortAthenaAISpawnerDataComponentList* ComponentList);
	void OnEQSFinished(TArray<struct FVector>& QueryResultLocations);
	void KillAllBots(bool bForceDoNotDropLoot);
	void InternalOnSpawned(class APawn* Pawn, int32 RequestID);
	void InternalOnAIDied(class AController* KilledController, bool bIsABot, class AFortPawn* KilledAIPawn, class AFortPlayerPawn* KilledPlayerPawn, class AController* KillerController);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
