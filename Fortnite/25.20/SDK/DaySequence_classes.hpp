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

// 0x148 (0x6F0 - 0x5A8)
// Class DaySequence.DaySequenceModifierComponent
class UDaySequenceModifierComponent : public UBoxComponent
{
public:
	uint8                                        Pad_463B[0x8];                                     // Fixing Size After Last Property..
	class ADaySequenceActor*                     TargetActor;                                       // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FComponentReference                   VolumeShapeComponent;                              // 0x5B8(0x28)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 ExternalVolumeBlendTarget;                         // 0x5E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDaySequence*                          UserDaySequence;                                   // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDaySequence*                          ProceduralDaySequence;                             // 0x5F0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FDaySequenceModifierNamedSequence> AdditionalNamedDaySequences;                       // 0x5F8(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_463C[0x8];                                     // Fixing Size After Last Property..
	int32                                        Bias;                                              // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DayNightCycleTime;                                 // 0x654(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendAmount;                                       // 0x658(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_463D[0x4];                                     // Fixing Size After Last Property..
	enum class EDayNightCycleMode                DayNightCycle;                                     // 0x660(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EDaySequenceModifierBlendMode     BlendMode;                                         // 0x661(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_463E[0x6];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnPostReinitializeSubSequences;                    // 0x668(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPostEnableModifier;                              // 0x678(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        bIgnoreBias : 1;                                   // Mask: 0x1, PropSize: 0x10x688(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bUseVolume : 1;                                    // Mask: 0x2, PropSize: 0x10x688(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x4, PropSize: 0x10x688(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, DuplicateTransient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPreview : 1;                                      // Mask: 0x8, PropSize: 0x10x688(0x1)(Edit, BlueprintVisible, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_463F[0x67];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequenceModifierComponent");
		return Clss;
	}

	void UnbindFromDaySequenceActor();
	void SetUserDaySequence(class UDaySequence* InDaySequence);
	void ResetOverrides();
	void MuteNamedSequence(class FName SequenceKey, bool bState);
	class UShapeComponent* GetShapeVolumeComponent();
	void EnableModifier();
	void EnableDistanceVolumeBlends(class AActor* InActor);
	void DisableModifier();
	void BindToDaySequenceActor(class ADaySequenceActor* DaySequenceActor);
	void AddVisibilityOverride(class UObject* Object, bool bValue);
	void AddVectorOverride(class UObject* Object, class FName PropertyName, const struct FVector& Value);
	void AddTransformOverride(class UObject* Object, const struct FTransform& Value);
	void AddStaticTimeOfDayOverride(class ADaySequenceActor* Actor, float Hours);
	void AddScalarOverride(class UObject* Object, class FName PropertyName, double Value);
	void AddScalarMaterialParameterOverride(class UObject* Object, int32 MaterialIndex, class FName ParameterName, float Value);
	void AddMaterialOverride(class UObject* Object, int32 MaterialIndex, class UMaterialInterface* Value);
	void AddColorOverride(class UObject* Object, class FName PropertyName, const struct FLinearColor& Value);
	void AddColorMaterialParameterOverride(class UObject* Object, int32 MaterialIndex, class FName ParameterName, const struct FLinearColor& Value);
	void AddBoolOverride(class UObject* Object, class FName PropertyName, bool bValue);
};

// 0xC8 (0x130 - 0x68)
// Class DaySequence.DaySequence
class UDaySequence : public UMovieSceneSequence
{
public:
	uint8                                        Pad_4640[0x8];                                     // Fixing Size After Last Property..
	class UMovieScene*                           MovieScene;                                        // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDaySequenceBindingReferences         BindingReferences;                                 // 0x78(0xA0)(Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UObject>                   DirectorClass;                                     // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x120(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequence");
		return Clss;
	}

};

// 0x140 (0x3D0 - 0x290)
// Class DaySequence.DaySequenceActor
class ADaySequenceActor : public AInfo
{
public:
	uint8                                        Pad_4647[0x10];                                    // Fixing Size After Last Property..
	class UDaySequencePlayer*                    SequencePlayer;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DayInterpCurve;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FDaySequenceAssetData> DaySequences;                                      // 0x2B0(0x50)(Edit, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x1, PropSize: 0x10x308(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_293 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_4648[0x7];                                     // Fixing Size After Last Property..
	class UDaySequence*                          RootSequence;                                      // 0x310(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRunDayCycle;                                      // 0x318(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseInterpCurve;                                   // 0x319(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4649[0x2];                                     // Fixing Size After Last Property..
	struct FTimecode                             DayLength;                                         // 0x31C(0x14)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimecode                             TimePerCycle;                                      // 0x330(0x14)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimecode                             InitialTimeOfDay;                                  // 0x344(0x14)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_464A[0x78];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequenceActor");
		return Clss;
	}

	bool SetTimeOfDay(float InHours);
	void SetStaticTimeOfDay(float InHours);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetDaySequence(class FName SequenceName, class UDaySequence* InDaySequence);
	void SetBias(class FName SequenceKey, int32 Bias);
	void RemoveStaticTimeOfDay(bool bResumeFromStaticTime);
	void Play();
	void Pause();
	void MuteSequence(class FName SequenceKey, bool bState);
	void Multicast_SetTimePerCycle(float InHours);
	bool IsPlaying();
	bool IsPaused();
	bool IsMuteSequence(class FName SequenceKey);
	bool HasStaticTimeOfDay();
	float GetTimePerCycle();
	float GetTimeOfDay();
	float GetStaticTimeOfDay();
	class UDaySequencePlayer* GetSequencePlayer();
	float GetInitialTimeOfDay();
	class UDaySequence* GetFirstDaySequence();
	class UDaySequence* GetDaySequence(class FName SequenceName);
	float GetDayLength();
	int32 GetBias(class FName SequenceKey);
	bool ContainsDaySequence(class UDaySequence* InDaySequence);
};

// 0x10 (0x38 - 0x28)
// Class DaySequence.DaySequenceDirector
class UDaySequenceDirector : public UObject
{
public:
	class UDaySequencePlayer*                    Player;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubSequenceID;                                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MovieScenePlayerIndex;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequenceDirector");
		return Clss;
	}

	void OnCreated();
	class UMovieSceneSequence* GetSequence();
	struct FQualifiedFrameTime GetRootSequenceTime();
	struct FQualifiedFrameTime GetMasterSequenceTime();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class UObject* GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding);
	TArray<class AActor*> GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding);
	class AActor* GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding);
};

// 0x8 (0x4C0 - 0x4B8)
// Class DaySequence.DaySequencePlayer
class UDaySequencePlayer : public UMovieSceneSequencePlayer
{
public:
	uint8                                        Pad_464B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequencePlayer");
		return Clss;
	}

};

// 0x30 (0x60 - 0x30)
// Class DaySequence.DaySequenceProjectSettings
class UDaySequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                         bDefaultLockEngineToDisplayRate;                   // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_464C[0x7];                                     // Fixing Size After Last Property..
	class FString                                DefaultDisplayRate;                                // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultTickResolution;                             // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdateClockSource                DefaultClockSource;                                // 0x58(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_464D[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequenceProjectSettings");
		return Clss;
	}

};

// 0x10 (0x2A0 - 0x290)
// Class DaySequence.DaySequenceProvider
class ADaySequenceProvider : public AActor
{
public:
	TArray<class UDaySequence*>                  DaySequenceAssets;                                 // 0x290(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequenceProvider");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class DaySequence.DaySequenceSubsystem
class UDaySequenceSubsystem : public UWorldSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequenceSubsystem");
		return Clss;
	}

	class ADaySequenceActor* GetDaySequenceActor();
};

// 0x0 (0xA8 - 0xA8)
// Class DaySequence.DaySequenceTrack
class UDaySequenceTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DaySequenceTrack");
		return Clss;
	}

};

// 0x30 (0x2D0 - 0x2A0)
// Class DaySequence.EnvironmentLightingActor
class AEnvironmentLightingActor : public ADaySequenceProvider
{
public:
	class USkyAtmosphereComponent*               SkyAtmosphereComponent;                            // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkyLightComponent*                    SkyLightComponent;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       SunRootComponent;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDirectionalLightComponent*            SunComponent;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExponentialHeightFogComponent*        ExponentialHeightFogComponent;                     // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVolumetricCloudComponent*             VolumetricCloudComponent;                          // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvironmentLightingActor");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
