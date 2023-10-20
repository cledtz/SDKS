#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x220 - 0x68)
// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence
{
public:
	uint8                                        Pad_142E[0x8];                                     // Fixing Size After Last Property 
	class UMovieScene*                           MovieScene;                                        // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x78(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0xC8(0xF0)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x1B8(0x50)(Deprecated, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UObject>                   DirectorClass;                                     // 0x208(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x210(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULevelSequence* GetDefaultObj();

	void RemoveMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* FindMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};

// 0x78 (0xA0 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_1434[0x8];                                     // Fixing Size After Last Property 
	class UActor*                                TransformOriginActor;                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1436[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            TransformOrigin;                                   // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDefaultLevelSequenceInstanceData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceMetaData
class ULevelSequenceMetaData : public UInterface
{
public:

	static class UClass* StaticClass();
	static class ULevelSequenceMetaData* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LevelSequence.AnimSequenceLevelSequenceLink
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x28(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       PathToLevelSequence;                               // 0x38(0x20)(BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimSequenceLevelSequenceLink* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceBurnInInitSettings
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInInitSettings* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1443[0x7];                                     // Fixing Size After Last Property 
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x20)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInOptions* GetDefaultObj();

	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
};

// 0x78 (0x308 - 0x290)
// Class LevelSequence.LevelSequenceActor
class ULevelSequenceActor : public UActor
{
public:
	uint8                                        Pad_147B[0x10];                                    // Fixing Size After Last Property 
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x2A0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequenceAsset;                                // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceCameraSettings          CameraSettings;                                    // 0x2D0(0x2)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_147E[0x6];                                     // Fixing Size After Last Property 
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x2E8(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x2E8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x2E8(0x1)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8B : 5;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_1481[0x7];                                     // Fixing Size After Last Property 
	class UObject*                               DefaultInstanceData;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowBurnin;                                       // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1482[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULevelSequenceActor* GetDefaultObj();

	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetBindingByTag(class FName BindingTag, TArray<class UActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class UActor*>& Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBindingByTag(class FName Tag, class UActor* Actor);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class UActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(class FName Tag);
	struct FMovieSceneObjectBindingID FindNamedBinding(class FName Tag);
	void AddBindingByTag(class FName BindingTag, class UActor* Actor, bool bAllowBindingsFromAsset);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class UActor* Actor, bool bAllowBindingsFromAsset);
};

// 0x0 (0x308 - 0x308)
// Class LevelSequence.ReplicatedLevelSequenceActor
class UReplicatedLevelSequenceActor : public ULevelSequenceActor
{
public:

	static class UClass* StaticClass();
	static class UReplicatedLevelSequenceActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceAnimSequenceLink
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj();

};

// 0xD8 (0x358 - 0x280)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x280(0xD0)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ULevelSequenceActor*                   LevelSequenceActor;                                // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnIn* GetDefaultObj();

	void SetSettings(class UObject* InSettings);
	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubSequenceID;                                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MovieScenePlayerIndex;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceDirector* GetDefaultObj();

	void OnCreated();
	class UMovieSceneSequence* GetSequence();
	struct FQualifiedFrameTime GetRootSequenceTime();
	struct FQualifiedFrameTime GetMasterSequenceTime();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UObject* GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class UActor*> GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UActor* GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding);
};

// 0x0 (0xA8 - 0xA8)
// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class ULegacyLevelSequenceDirectorBlueprint* GetDefaultObj();

};

// 0x130 (0x5E8 - 0x4B8)
// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	FMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x4B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B3[0x120];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULevelSequencePlayer* GetDefaultObj();

	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ULevelSequenceActor** OutActor);
};

// 0x30 (0x68 - 0x38)
// Class LevelSequence.LevelSequenceProjectSettings
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                         bDefaultLockEngineToDisplayRate;                   // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B8[0x7];                                     // Fixing Size After Last Property 
	class FString                                DefaultDisplayRate;                                // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultTickResolution;                             // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdateClockSource                DefaultClockSource;                                // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BA[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULevelSequenceProjectSettings* GetDefaultObj();

};

// 0x28 (0x2B8 - 0x290)
// Class LevelSequence.LevelSequenceMediaController
class ULevelSequenceMediaController : public UActor
{
public:
	uint8                                        Pad_14C8[0x8];                                     // Fixing Size After Last Property 
	class ULevelSequenceActor*                   Sequence;                                          // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaComponent*                       MediaComponent;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ServerStartTimeSeconds;                            // 0x2A8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14C9[0xC];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULevelSequenceMediaController* GetDefaultObj();

	void SynchronizeToServer(float DesyncThresholdSeconds);
	void Play();
	void OnRep_ServerStartTimeSeconds();
	class ULevelSequenceActor* GetSequence();
	class UMediaComponent* GetMediaComponent();
};

}


