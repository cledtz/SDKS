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

// 0x48 (0x70 - 0x28)
// Class GeometryCache.GeometryCache
class UGeometryCache : public UObject
{
public:
	uint8                                        Pad_8271[0x8];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            Materials;                                         // 0x30(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>           Tracks;                                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_8272[0x10];                                    // Fixing Size After Last Property..
	int32                                        StartFrame;                                        // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EndFrame;                                          // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint64                                       Hash;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCache");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class GeometryCache.GeometryCacheActor
class UGeometryCacheActor : public UActor
{
public:
	class UGeometryCacheComponent*               GeometryCacheComponent;                            // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheActor");
		return Clss;
	}

	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// 0x10 (0x38 - 0x28)
// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                TopologyRanges;                                    // 0x28(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheCodecBase");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int32                                        DummyProperty;                                     // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8273[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheCodecRaw");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecV1
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	uint8                                        Pad_8274[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheCodecV1");
		return Clss;
	}

};

// 0x90 (0x630 - 0x5A0)
// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x5A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunning;                                          // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLooping;                                          // 0x5A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExtrapolateFrames;                                // 0x5AA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8277[0x1];                                     // Fixing Size After Last Property..
	float                                        StartTimeOffset;                                   // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlaybackSpeed;                                     // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MotionVectorScale;                                 // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTracks;                                         // 0x5B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ElapsedTime;                                       // 0x5BC(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8278[0x4C];                                    // Fixing Size After Last Property..
	float                                        Duration;                                          // 0x60C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bManualTick;                                       // 0x610(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideWireframeColor;                           // 0x611(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8279[0x2];                                     // Fixing Size After Last Property..
	struct FLinearColor                          WireframeOverrideColor;                            // 0x614(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_827A[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheComponent");
		return Clss;
	}

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetWireframeOverrideColor(const struct FLinearColor& Color);
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetOverrideWireframeColor(bool bOverride);
	void SetMotionVectorScale(float NewMotionVectorScale);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void SetExtrapolateFrames(bool bNewExtrapolating);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	bool IsExtrapolatingFrames();
	struct FLinearColor GetWireframeOverrideColor();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
	float GetPlaybackDirection();
	bool GetOverrideWireframeColor();
	int32 GetNumberOfFrames();
	float GetMotionVectorScale();
	float GetDuration();
	float GetAnimationTime();
};

// 0x30 (0x58 - 0x28)
// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public UObject
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_827B[0x2C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrack");
		return Clss;
	}

};

// 0x28 (0x80 - 0x58)
// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32                                       NumMeshSamples;                                    // 0x58(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_827D[0x24];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrack_FlipbookAnimation");
		return Clss;
	}

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// 0x80 (0xD8 - 0x58)
// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*               Codec;                                             // 0x58(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_827E[0x68];                                    // Fixing Size After Last Property..
	float                                        StartSampleTime;                                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_827F[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrackStreamable");
		return Clss;
	}

};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformAnimation
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_8280[0xC8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrack_TransformAnimation");
		return Clss;
	}

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData);
};

// 0xC8 (0x120 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_8281[0xC8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryCacheTrack_TransformGroupAnimation");
		return Clss;
	}

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData);
};

// 0x1B8 (0x268 - 0xB0)
// Class GeometryCache.NiagaraGeometryCacheRendererProperties
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraGeometryCacheReference> GeometryCaches;                                    // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLooping;                                        // 0xC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8282[0x2];                                     // Fixing Size After Last Property..
	uint32                                       ComponentCountLimit;                               // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xC8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RotationBinding;                                   // 0xF0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x118(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ElapsedTimeBinding;                                // 0x140(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x168(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ArrayIndexBinding;                                 // 0x190(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x1B8(0x28)(Edit, NativeAccessSpecifierPublic)
	int32                                        RendererVisibility;                                // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAssignComponentsOnParticleID;                     // 0x1E4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8283[0x3];                                     // Fixing Size After Last Property..
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x1E8(0x50)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_8284[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraGeometryCacheRendererProperties");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
