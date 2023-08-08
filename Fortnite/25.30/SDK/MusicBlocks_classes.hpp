#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x1E0 - 0xA0)
// Class MusicBlocks.MusicSequencerHitComponent
class UMusicSequencerHitComponent : public UActorComponent
{
public:
	struct FMusicSequencerHitArray               MusicSequencerEventList;                           // 0xA0(0x120)(Net, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class USoundBase*>                    LoadedSoundsList;                                  // 0x1C0(0x10)(Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UActor>>            SoundPreloadClassList;                             // 0x1D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicSequencerHitComponent");
		return Clss;
	}

	bool ReplicateMusicSequencerHit(class UObject* WorldContextObject, TScriptInterface<class UFortMusicSequencerInterface> HitInterface, class UController* Instigator);
	bool RegisterMusicSequencerActor(class UObject* WorldContextObject, TScriptInterface<class UFortMusicSequencerInterface> Actor);
	bool ProcessSequenceHitEvent(struct FMusicSequencerHitEntry& Event);
	void OnSequenceHitEventExpired(const struct FMusicSequencerHitHandle& ExpiredHandle);
	bool AddSequenceHitEvent(TScriptInterface<class UFortMusicSequencerInterface> HitInterface, class UController* Instigator);
	bool AddMusicSequencerActor(TScriptInterface<class UFortMusicSequencerInterface> HitInterface);
};

// 0x8 (0x298 - 0x290)
// Class MusicBlocks.MusicSequencerHitActor
class UMusicSequencerHitActor : public UActor
{
public:
	class UMusicSequencerHitComponent*           MusicSequencerHitComponent;                        // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicSequencerHitActor");
		return Clss;
	}

	class UMusicSequencerHitComponent* GetMusicSequencerHitComponent();
};

// 0x10 (0xB0 - 0xA0)
// Class MusicBlocks.MusicSequencerHitAdderComponent
class UMusicSequencerHitAdderComponent : public UPlayspaceComponent
{
public:
	TSubclassOf<class UMusicSequencerHitActor>   MusicSequencerHitActorClass;                       // 0xA0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMusicSequencerHitActor> MusicSequencerHitActor;                            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicSequencerHitAdderComponent");
		return Clss;
	}

	class UMusicSequencerHitActor* GetMusicSequencerHitActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
