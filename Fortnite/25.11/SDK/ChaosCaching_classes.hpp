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

// 0x10 (0x38 - 0x28)
// Class ChaosCaching.ChaosCacheCollection
class UChaosCacheCollection : public UObject
{
public:
	TArray<class UChaosCache*>                   Caches;                                            // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosCacheCollection");
		return Clss;
	}

};

// 0xA8 (0x330 - 0x288)
// Class ChaosCaching.ChaosCacheManager
class AChaosCacheManager : public AActor
{
public:
	class UChaosCacheCollection*                 CacheCollection;                                   // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECacheMode                        CacheMode;                                         // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStartMode                        StartMode;                                         // 0x291(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3838[0x2];                                     // Fixing Size After Last Property..
	float                                        StartTime;                                         // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3839[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FObservedComponent>            ObservedComponents;                                // 0x2A0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_383A[0x80];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosCacheManager");
		return Clss;
	}

	void TriggerComponentByCache(class FName InCacheName);
	void TriggerComponent(class UPrimitiveComponent* InComponent);
	void TriggerAll();
	void SetStartTime(float InStartTime);
	void ResetSingleTransform(int32 InIndex);
	void ResetAllComponentTransforms();
};

// 0x0 (0x330 - 0x330)
// Class ChaosCaching.ChaosCachePlayer
class AChaosCachePlayer : public AChaosCacheManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosCachePlayer");
		return Clss;
	}

};

// 0x228 (0x250 - 0x28)
// Class ChaosCaching.ChaosCache
class UChaosCache : public UObject
{
public:
	float                                        RecordedDuration;                                  // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumRecordedFrames;                                 // 0x2C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                TrackToParticle;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPerParticleCacheData>         ParticleTracks;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FRichCurves>        ChannelsTracks;                                    // 0x50(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FRichCurve>         CurveData;                                         // 0xA0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FCacheEventTrack>   EventTracks;                                       // 0xF0(0x50)(NativeAccessSpecifierPrivate)
	struct FCacheSpawnableTemplate               Spawnable;                                         // 0x140(0xD0)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGuid                                 AdapterGuid;                                       // 0x210(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Version;                                           // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_383B[0x2C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChaosCache");
		return Clss;
	}

};

// 0x28 (0x120 - 0xF8)
// Class ChaosCaching.MovieSceneChaosCacheSection
class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection
{
public:
	struct FMovieSceneChaosCacheParams           Params;                                            // 0xF8(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneChaosCacheSection");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class ChaosCaching.MovieSceneChaosCacheTrack
class UMovieSceneChaosCacheTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_383C[0x8];                                     // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneChaosCacheTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
