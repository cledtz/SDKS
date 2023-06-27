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

// 0x170 (0x210 - 0xA0)
// Class CRD_AudioPlayerRuntime.CreativeAudioComponent
class UCreativeAudioComponent : public UActorComponent
{
public:
	float                                        StereoSpreadScaleFactor;                           // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDuration;                                    // 0xA4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        FadeOutDuration;                                   // 0xA8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSyncPlayerAudio;                                  // 0xAC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRestartAudioOnPlay;                               // 0xAD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECreativeAudioPlayerTargetListener CanBeHeardBy;                                      // 0xAE(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECreativeAudioPlayerTargetLocation PlayLocation;                                      // 0xAF(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAutoplayOptions                  AutoplayOptions;                                   // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_815D[0x7];                                     // Fixing Size After Last Property..
	class UFortMinigameProgressComponent*        FortMinigameProgressComponent;                     // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCreativeProxyManagerComponent*        CreativeProxyManager;                              // 0xC0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCreativeRegisteredPlayersManagerComponent* CreativeRegisteredPlayersManagerComponent;         // 0xC8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       AudioComponent;                                    // 0xD0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FUniqueNetIdRepl, class UAudioComponent*> PlayerAudioComponents;                             // 0xD8(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class ACreativeAudioPlayerReplicationProxy*  ClientCachedProxy;                                 // 0x128(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            LastSoundPlayed;                                   // 0x130(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCreativeAudioPlayerData              ServerInstigatorData;                              // 0x138(0x40)(Net, Transient, RepNotify, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x178(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_815E[0x27];                                    // Fixing Size After Last Property..
	bool                                         bAudioLoaded;                                      // 0x1A0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_815F[0x7];                                     // Fixing Size After Last Property..
	struct FCreativeAudioPlayerData              CachedInstigatorData;                              // 0x1A8(0x40)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FUniqueNetIdRepl>              RegisteredPlayerIds;                               // 0x1E8(0x10)(Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate)
	TArray<struct FUniqueNetIdRepl>              NonRegisteredPlayerIds;                            // 0x1F8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	enum class EAutoplayOptions                  CurrentAutoplayState;                              // 0x208(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8160[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeAudioComponent");
		return Clss;
	}

	void StopAudio(class AController* Player);
	void SetProperties(TSoftObjectPtr<class USoundBase>& Audio, float Volume, float PlaybackSpeed, float NewFadeInDuration, float NewFadeOutDuration, bool bEnableVolumeAttenuation, bool bEnableSpatialization, float StereoSpread, enum class EAttenuationDistanceModel DistanceModel, float AttenuationMinDistance, float AttenuationFalloffDistance, bool bNewSyncPlayerAudio, bool bNewRestartAudioOnPlay, int32 NewCanBeHeardBy, int32 NewPlayLocation, int32 NewAutoplayOptions);
	void RetryUpdateAutoplayStatusOnMinigameAdd(class AFortMinigame* Minigame);
	void RetryClientPlayAudio(struct FCreativeAudioPlayerData& InstigatorData);
	void ResetDevice();
	void PlayAudio(class AController* Player);
	void OnRep_ServerInstigatorData();
	void OnRep_RegisteredPlayerIds();
	void OnProxyDataChanged(class ACreativePlayerReplicationProxy* ProxyData);
	void OnPlayerUnregistered(class AFortPlayerState* PlayerState);
	void OnPlayerRemoved(const struct FUniqueNetIdRepl& NetId, bool bIsLocalPlayer);
	void OnPlayerRegistered(class AFortPlayerState* PlayerState);
	void OnPlayerAdded(const struct FUniqueNetIdRepl& NetId, bool bIsLocalPlayer);
	void OnMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
	void OnMinigameStarted();
	void OnMinigameEnded();
	void OnEnabledStateChanged(bool bIsEnabled);
	void OnAudioLoadComplete(const struct FSoftObjectPath& Audio);
	void OnAllPlayersUnregistered();
};

// 0x40 (0x2D0 - 0x290)
// Class CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy
class ACreativeAudioPlayerReplicationProxy : public ACreativePlayerReplicationProxy
{
public:
	struct FCreativeAudioPlayerData              InstigatorData;                                    // 0x290(0x40)(Net, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeAudioPlayerReplicationProxy");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
