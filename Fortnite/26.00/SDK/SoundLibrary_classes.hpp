#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class SoundLibrary.SoundLibraryContext
class USoundLibraryContext : public UObject
{
public:
	TWeakObjectPtr<class UActor>                 Actor;                                             // 0x28(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          BaseEventName;                                     // 0x30(0x4)(BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForwardToActorOwner;                              // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForwardToAttachedActors;                          // 0x35(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoResetContext;                                 // 0x36(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AD[0x1];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 PlaybackTags;                                      // 0x38(0x20)(Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundLibraryContext* GetDefaultObj();

	bool Play(struct FSoundLibraryContextEventInput& InEventData, TArray<class UAudioComponent*>* OutComponents);
	void OnRemovedFromActor(class UActor* InActor);
	void OnAddedToActor(class UActor* InActor);
	bool GatherActorTargets(TArray<class UActor*>& OutActors);
	bool CreateEventName(struct FGameplayTag& OutEventName);
};

// 0x40 (0x98 - 0x58)
// Class SoundLibrary.SoundLibraryAnimContext
class USoundLibraryAnimContext : public USoundLibraryContext
{
public:
	struct FSoundLibraryAnimContextSettings      AnimSettings;                                      // 0x58(0x24)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x7C(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent> MeshComponent;                                     // 0x84(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportsNotifyEnd;                                // 0x8C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B3[0x3];                                     // Fixing Size After Last Property 
	float                                        AnimRate;                                          // 0x90(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B4[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USoundLibraryAnimContext* GetDefaultObj();

	void ConfigureContext(class UActor* OwningActor, class UAnimSequenceBase* InAnimation, struct FSoundLibraryAnimContextSettings& InSettings);
};

// 0x10 (0x38 - 0x28)
// Class SoundLibrary.SoundLibraryAnimNotifyHelper
class USoundLibraryAnimNotifyHelper : public UObject
{
public:
	TArray<TWeakObjectPtr<class UAudioComponent>> PlayingComps;                                      // 0x28(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundLibraryAnimNotifyHelper* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class SoundLibrary.AnimNotify_SoundLibrary
class UAnimNotify_SoundLibrary : public UAnimNotify
{
public:
	class USoundLibraryContext*                  SoundContext;                                      // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibraryAnimNotifyHelper*         NotifyHelper;                                      // 0x40(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotify_SoundLibrary* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class SoundLibrary.AnimNotifyState_SoundLibrary
class UAnimNotifyState_SoundLibrary : public UAnimNotifyState
{
public:
	class USoundLibraryContext*                  SoundContext;                                      // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibraryAnimNotifyHelper*         NotifyHelper;                                      // 0x38(0x8)(BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotifyState_SoundLibrary* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class SoundLibrary.GameFeatureAction_AddSoundLibraryCollection
class UGameFeatureAction_AddSoundLibraryCollection : public UGameFeatureAction
{
public:
	TArray<TSoftObjectPtr<class USoundLibraryCollection>> CollectionList;                                    // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class USoundLibrarySubsystem>> TrackedSubsystems;                                 // 0x38(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B9[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameFeatureAction_AddSoundLibraryCollection* GetDefaultObj();

};

// 0x148 (0x170 - 0x28)
// Class SoundLibrary.SoundLibrary
class USoundLibrary : public UObject
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class USoundBase>> Sounds;                                            // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FAudioGameplayRequirements            LibraryRequirements;                               // 0x78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Channel;                                           // 0xC8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 MetaData;                                          // 0xD0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class USoundBase>> FullLibrary;                                       // 0xF0(0x50)(Edit, DisableEditOnInstance, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class USoundBase*>                    LoadedSoundObjects;                                // 0x140(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class USoundBase>>     Assets;                                            // 0x150(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_14D8[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USoundLibrary* GetDefaultObj();

	void SetPriority(int32 InPriority);
	void SetChannel(const struct FGameplayTag& InTag);
	class USoundBase* FindSound(const struct FGameplayTag& InTag);
	void AddSound(const struct FGameplayTag& InTag, class USoundBase* InSound);
};

// 0x90 (0x138 - 0xA8)
// Class SoundLibrary.SoundLibraryComponent
class USoundLibraryComponent : public UAudioGameplayComponent
{
public:
	uint8                                        Pad_151B[0x8];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          ComponentTag;                                      // 0xB0(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151C[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class USoundLibraryContext>      ContextClass;                                      // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundLibrary*>                 Libraries;                                         // 0xC0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSoundLibraryPlayEvent;                           // 0xD0(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_151D[0x50];                                    // Fixing Size After Last Property 
	class USoundLibraryContext*                  Context;                                           // 0x130(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USoundLibraryComponent* GetDefaultObj();

	bool StopEvent(const struct FGameplayTag& InEventName);
	void RemoveLibrary(class USoundLibrary* InLibrary);
	void RemoveLibraries(TArray<class USoundLibrary*>* InLibraries);
	struct FSoundLibraryPlayResult PlayEvent(const struct FGameplayTag& InEventName);
	void OnSoundStoppedBP(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, bool* bHandledInBlueprint);
	void OnSoundStopped(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, bool* bStopped);
	void OnSoundPlayedBP(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent);
	void OnSoundPlayed(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent);
	bool IsEventActive(const struct FGameplayTag& InEventName);
	class USoundLibraryContext* GetContext();
	void AddLibrary(class USoundLibrary* InLibrary);
	void AddLibraries(TArray<class USoundLibrary*>* InLibraries);
};

// 0x0 (0x28 - 0x28)
// Class SoundLibrary.SoundLibraryProviderInterface
class USoundLibraryProviderInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class USoundLibraryProviderInterface* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class SoundLibrary.SoundLibraryCollection
class USoundLibraryCollection : public UDataAsset
{
public:
	TMap<struct FGameplayTag, struct FSoundLibrarySet> Libraries;                                         // 0x30(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundLibraryCollection* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class SoundLibrary.SoundLibrarySettings
class USoundLibrarySettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class USoundLibraryCollection> CommonLibraries;                                   // 0x30(0x20)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundLibrarySettings* GetDefaultObj();

};

// 0x58 (0xB0 - 0x58)
// Class SoundLibrary.SoundLibrarySimpleContext
class USoundLibrarySimpleContext : public USoundLibraryContext
{
public:
	struct FSoundLibrarySimpleContextSettings    Settings;                                          // 0x58(0x58)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundLibrarySimpleContext* GetDefaultObj();

	void ConfigureContext(class UActor* OwningActor, struct FSoundLibrarySimpleContextSettings& InSettings);
};

// 0x68 (0x98 - 0x30)
// Class SoundLibrary.SoundLibrarySubsystem
class USoundLibrarySubsystem : public UWorldSubsystem
{
public:
	TArray<class USoundLibraryCollection*>       LibraryCollections;                                // 0x30(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class USoundLibrarySimpleContext*            SimpleContext;                                     // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<uint32, struct FSoundLibraryActorData>  ActorDataMap;                                      // 0x48(0x50)(Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USoundLibrarySubsystem* GetDefaultObj();

	void RemoveLibrary(class UActor* Actor, class USoundLibrary* Library);
	void RemoveLibrariesFromCollections(class UActor* Actor, struct FGameplayTagContainer& CollectionTags);
	void RemoveLibraries(class UActor* Actor, const TArray<class USoundLibrary*>& Libraries);
	bool RemoveContext(class UActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
	struct FSoundLibraryPlayResult PlaySoundSimple(class UActor* OwningActor, struct FSoundLibrarySimpleContextSettings& InSettings);
	void PlaySound(class USoundLibraryContext* Context, struct FSoundLibraryPlayResult* OutResults);
	class USoundLibraryContext* GetContext(class UActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
	void EnableEventsForActor(class UActor* Actor);
	void DisableEventsForActor(class UActor* Actor);
	void AddLibrary(class UActor* Actor, class USoundLibrary* Library);
	void AddLibrariesFromCollections(class UActor* Actor, struct FGameplayTagContainer& CollectionTags);
	void AddLibraries(class UActor* Actor, const TArray<class USoundLibrary*>& Libraries);
	class USoundLibraryContext* AddContext(class UActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
};

// 0x0 (0x28 - 0x28)
// Class SoundLibrary.SoundLibraryTagHelperFunctions
class USoundLibraryTagHelperFunctions : public UObject
{
public:

	static class UClass* StaticClass();
	static class USoundLibraryTagHelperFunctions* GetDefaultObj();

	struct FSoundLibraryTag MakeSoundLibraryTag(struct FGameplayTag& Tag);
};

}


