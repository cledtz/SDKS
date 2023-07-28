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

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBlenderSystemSupport
class UMovieSceneBlenderSystemSupport : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBlenderSystemSupport");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneChannelOverrideProvider
class UMovieSceneChannelOverrideProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneChannelOverrideProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneDeterminismSource
class UMovieSceneDeterminismSource : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDeterminismSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEvaluationHook
class UMovieSceneEvaluationHook : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEvaluationHook");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneMetaDataInterface
class UMovieSceneMetaDataInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMetaDataInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePlaybackClient
class UMovieScenePlaybackClient : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePlaybackClient");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneSequencePlayerObserver
class UMovieSceneSequencePlayerObserver : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequencePlayerObserver");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOwnerInterface
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOwnerInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneCachedTrack
class UMovieSceneCachedTrack : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCachedTrack");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEasingFunction
class UMovieSceneEasingFunction : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEasingFunction");
		return Clss;
	}

	float OnEvaluate(float Interp);
};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneKeyProxy
class UMovieSceneKeyProxy : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneKeyProxy");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManagerClient
class UMovieSceneSequenceTickManagerClient : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequenceTickManagerClient");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public UObject
{
public:
	uint8                                        Pad_1F58[0x4];                                     // Fixing Size After Last Property..
	struct FGuid                                 Signature;                                         // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F59[0x1C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSignedObject");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieScene.MovieSceneChannelOverrideContainer
class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneChannelOverrideContainer");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
class UMovieSceneSectionChannelOverrideRegistry : public UObject
{
public:
	TMap<class FName, class UMovieSceneChannelOverrideContainer*> Overrides;                                         // 0x28(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSectionChannelOverrideRegistry");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneTrackTemplateProducer
class UMovieSceneTrackTemplateProducer : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrackTemplateProducer");
		return Clss;
	}

};

// 0x3D0 (0x3F8 - 0x28)
// Class MovieScene.MovieSceneCompiledData
class UMovieSceneCompiledData : public UObject
{
public:
	struct FMovieSceneEvaluationTemplate         EvaluationTemplate;                                // 0x28(0x160)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceHierarchy          Hierarchy;                                         // 0x188(0x118)(NativeAccessSpecifierPrivate)
	struct FMovieSceneEntityComponentField       EntityComponentField;                              // 0x2A0(0xF0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneEvaluationField            TrackTemplateField;                                // 0x390(0x30)(NativeAccessSpecifierPrivate)
	TArray<struct FFrameTime>                    DeterminismFences;                                 // 0x3C0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FGuid                                 CompiledSignature;                                 // 0x3D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 CompilerVersion;                                   // 0x3E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;                                   // 0x3F0(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask;                                     // 0x3F1(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	enum class EMovieSceneSequenceFlags          AccumulatedFlags;                                  // 0x3F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F5A[0x5];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCompiledData");
		return Clss;
	}

};

// 0x208 (0x230 - 0x28)
// Class MovieScene.MovieSceneCompiledDataManager
class UMovieSceneCompiledDataManager : public UObject
{
public:
	uint8                                        Pad_1F5B[0xB0];                                    // Fixing Size After Last Property..
	TMap<int32, struct FMovieSceneSequenceHierarchy> Hierarchies;                                       // 0xD8(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, struct FMovieSceneEvaluationTemplate> TrackTemplates;                                    // 0x128(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<int32, struct FMovieSceneEvaluationField> TrackTemplateFields;                               // 0x178(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, struct FMovieSceneEntityComponentField> EntityComponentFields;                             // 0x1C8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F5C[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCompiledDataManager");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEntityProvider
class UMovieSceneEntityProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEntityProvider");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class MovieScene.MovieSceneEntitySystem
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F5D[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEntitySystem");
		return Clss;
	}

};

// 0x28 (0x68 - 0x40)
// Class MovieScene.MovieSceneBlenderSystem
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1F5E[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBlenderSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneEntityInstantiatorSystem
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEntityInstantiatorSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneGenericBoundObjectInstantiator");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoundSceneComponentInstantiator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneValueDecomposer
class UMovieSceneValueDecomposer : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneValueDecomposer");
		return Clss;
	}

};

// 0x710 (0x738 - 0x28)
// Class MovieScene.MovieSceneEntitySystemLinker
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	uint8                                        Pad_1F5F[0x278];                                   // Fixing Size After Last Property..
	struct FMovieSceneEntitySystemGraph          SystemGraph;                                       // 0x2A0(0x190)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1F60[0x308];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEntitySystemLinker");
		return Clss;
	}

};

// 0x170 (0x1B0 - 0x40)
// Class MovieScene.MovieSceneEvalTimeSystem
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1F61[0x170];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEvalTimeSystem");
		return Clss;
	}

};

// 0x50 (0x90 - 0x40)
// Class MovieScene.MovieSceneEvaluationHookSystem
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
public:
	TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;                       // 0x40(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEvaluationHookSystem");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePreAnimatedStateSystemInterface");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCachePreAnimatedStateSystem");
		return Clss;
	}

};

// 0x10 (0x50 - 0x40)
// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_1F62[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneRestorePreAnimatedStateSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneRootInstantiatorSystem
class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneRootInstantiatorSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneSpawnablesSystem
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnablesSystem");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class MovieScene.MovieSceneTrackInstance
class UMovieSceneTrackInstance : public UObject
{
public:
	TWeakObjectPtr<class UObject>                WeakAnimatedObject;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsRootTrackInstance;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F63[0x7];                                     // Fixing Size After Last Property..
	class UMovieSceneEntitySystemLinker*         PrivateLinker;                                     // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneTrackInstanceInput> Inputs;                                            // 0x40(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrackInstance");
		return Clss;
	}

};

// 0xB0 (0xF0 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceInstantiator
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_1F64[0xB0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrackInstanceInstantiator");
		return Clss;
	}

};

// 0x8 (0x48 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceSystem
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*  Instantiator;                                      // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrackInstanceSystem");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneCustomClockSource
class UMovieSceneCustomClockSource : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCustomClockSource");
		return Clss;
	}

	void OnTick(float DeltaSeconds, float InPlayRate);
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime);
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime);
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate);
};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	uint8                                        Pad_1F65[0x8];                                     // Fixing Size After Last Property..
	enum class EMovieSceneBuiltInEasing          Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F66[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBuiltInEasingFunction");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	uint8                                        Pad_1F67[0x8];                                     // Fixing Size After Last Property..
	class UCurveFloat*                           Curve;                                             // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEasingExternalCurve");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.NodeAndChannelMappings
class UNodeAndChannelMappings : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NodeAndChannelMappings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneNodeGroup
class UMovieSceneNodeGroup : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNodeGroup");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneNodeGroupCollection
class UMovieSceneNodeGroupCollection : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNodeGroupCollection");
		return Clss;
	}

};

// 0x100 (0x158 - 0x58)
// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject
{
public:
	uint8                                        Pad_1F68[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FMovieSceneSpawnable>          Spawnables;                                        // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>        Possessables;                                      // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>            ObjectBindings;                                    // 0x80(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                     // 0x90(0x50)(NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0xE0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                 SelectionRange;                                    // 0xF8(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                 PlaybackRange;                                     // 0x108(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                            TickResolution;                                    // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameRate                            DisplayRate;                                       // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieSceneEvaluationType         EvaluationType;                                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EUpdateClockSource                ClockSource;                                       // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F69[0x6];                                     // Fixing Size After Last Property..
	struct FSoftObjectPath                       CustomClockSourcePath;                             // 0x130(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneMarkedFrame>        MarkedFrames;                                      // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F6A[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOverrides");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	uint8                                        Pad_1F6B[0x4];                                     // Fixing Size After Last Property..
	class FName                                  FolderName;                                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x30(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              ChildTracks;                                       // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F6C[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFolder");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class MovieScene.MovieSceneMetaData
class UMovieSceneMetaData : public UObject
{
public:
	uint8                                        Pad_1F6D[0x8];                                     // Fixing Size After Last Property..
	class FString                                Author;                                            // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                             Created;                                           // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Notes;                                             // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMetaData");
		return Clss;
	}

	void SetNotes(const class FString& InNotes);
	void SetCreated(const struct FDateTime& InCreated);
	void SetAuthor(const class FString& InAuthor);
	class FString GetNotes();
	struct FDateTime GetCreated();
	class FString GetAuthor();
};

// 0x40 (0x98 - 0x58)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions           EvalOptions;                                       // 0x58(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6E[0x1];                                     // Fixing Size After Last Property..
	bool                                         bIsEvalDisabled;                                   // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F6F[0x2];                                     // Fixing Size After Last Property..
	TArray<int32>                                RowsDisabled;                                      // 0x60(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F70[0x4];                                     // Fixing Size After Last Property..
	struct FGuid                                 EvaluationFieldGuid;                               // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F71[0x4];                                     // Fixing Size After Last Property..
	struct FMovieSceneTrackEvaluationField       EvaluationField;                                   // 0x88(0x10)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrack");
		return Clss;
	}

};

// 0x0 (0x98 - 0x98)
// Class MovieScene.MovieSceneNameableTrack
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNameableTrack");
		return Clss;
	}

};

// 0x98 (0xF0 - 0x58)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions         EvalOptions;                                       // 0x58(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F72[0x6];                                     // Fixing Size After Last Property..
	struct FMovieSceneEasingSettings             Easing;                                            // 0x60(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                 SectionRange;                                      // 0x98(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                          PreRollFrames;                                     // 0xA8(0x4)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          PostRollFrames;                                    // 0xAC(0x4)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RowIndex;                                          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        OverlapPriority;                                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1F0 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1F73[0x3];                                     // Fixing Size After Last Property..
	float                                        StartTime;                                         // 0xBC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndTime;                                           // 0xC0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PrerollTime;                                       // 0xC4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostrollTime;                                      // 0xC8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x1, PropSize: 0x10xCC(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1F1 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1F74[0x3];                                     // Fixing Size After Last Property..
	bool                                         bSupportsInfiniteRange;                            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType          BlendType;                                         // 0xD1(0x2)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F75[0x1D];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSection");
		return Clss;
	}

	void SetRowIndex(int32 NewRowIndex);
	void SetPreRollFrames(int32 InPreRollFrames);
	void SetPostRollFrames(int32 InPostRollFrames);
	void SetOverlapPriority(int32 NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode);
	void SetColorTint(struct FColor& InColorTint);
	void SetBlendType(enum class EMovieSceneBlendType InBlendType);
	bool IsLocked();
	bool IsActive();
	int32 GetRowIndex();
	int32 GetPreRollFrames();
	int32 GetPostRollFrames();
	int32 GetOverlapPriority();
	enum class EMovieSceneCompletionMode GetCompletionMode();
	struct FColor GetColorTint();
	struct FOptionalMovieSceneBlendType GetBlendType();
};

// 0x10 (0x68 - 0x58)
// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*               CompiledData;                                      // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieSceneCompletionMode         DefaultCompletionMode;                             // 0x60(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentContextsAreSignificant;                     // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPlayableDirectly;                                 // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovieSceneSequenceFlags          SequenceFlags;                                     // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F77[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequence");
		return Clss;
	}

	struct FMovieSceneTimecodeSource GetEarliestTimecodeSource();
	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(class FName InBindingName);
	struct FMovieSceneObjectBindingID FindBindingByTag(class FName InBindingName);
};

// 0x490 (0x4B8 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_1F7E[0x200];                                   // Fixing Size After Last Property..
	FInterfaceProperty_                          Observer;                                          // 0x228(0x10)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlay;                                            // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayReverse;                                     // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStop;                                            // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPause;                                           // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMovieScenePlayerStatus           Status;                                            // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F7F[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bReversePlayback : 1;                              // Mask: 0x1, PropSize: 0x10x28C(0x1)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1F2 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1F80[0x3];                                     // Fixing Size After Last Property..
	class UMovieSceneSequence*                   Sequence;                                          // 0x290(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFrameNumber                          StartTime;                                         // 0x298(0x4)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DurationFrames;                                    // 0x29C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurationSubFrames;                                 // 0x2A0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentNumLoops;                                   // 0x2A4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x2A8(0x20)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2C8(0x88)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F81[0x90];                                    // Fixing Size After Last Property..
	struct FMovieSceneSequenceReplProperties     NetSyncProps;                                      // 0x3E0(0x10)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	FInterfaceProperty_                          PlaybackClient;                                    // 0x3F0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMovieSceneSequenceTickManager*        TickManager;                                       // 0x400(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F82[0xB0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequencePlayer");
		return Clss;
	}

	void StopAtCurrentTime();
	void Stop();
	void SetWeight(double InWeight);
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const class FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_OnFinishPlaybackEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void RestoreState();
	void RemoveWeight();
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const class FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams, const struct FMovieSceneSequencePlayToParams& PlayToParams);
	void PlayReverse();
	void PlayLooping(int32 NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	bool JumpToMarkedFrame(const class FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	class FString GetSequenceName(bool bAddClientInfo);
	class UMovieSceneSequence* GetSequence();
	float GetPlayRate();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	struct FFrameRate GetFrameRate();
	int32 GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

// 0x70 (0x98 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManager
class UMovieSceneSequenceTickManager : public UObject
{
public:
	uint8                                        Pad_1F83[0x70];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequenceTickManager");
		return Clss;
	}

};

// 0x108 (0x1F8 - 0xF0)
// Class MovieScene.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                         DefaultValue;                                      // 0xF0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F84[0x7];                                     // Fixing Size After Last Property..
	struct FMovieSceneBoolChannel                BoolCurve;                                         // 0xF8(0x100)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolSection");
		return Clss;
	}

};

// 0x18 (0x108 - 0xF0)
// Class MovieScene.MovieSceneHookSection
class UMovieSceneHookSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1F85[0x10];                                    // Fixing Size After Last Property..
	uint8                                        bRequiresRangedHook : 1;                           // Mask: 0x1, PropSize: 0x10x100(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRequiresTriggerHooks : 1;                         // Mask: 0x2, PropSize: 0x10x100(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F86[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneHookSection");
		return Clss;
	}

};

// 0x8 (0x200 - 0x1F8)
// Class MovieScene.MovieSceneSpawnSection
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	uint8                                        Pad_1F87[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnSection");
		return Clss;
	}

};

// 0x48 (0x138 - 0xF0)
// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1F88[0x8];                                     // Fixing Size After Last Property..
	struct FMovieSceneSectionParameters          Parameters;                                        // 0xF8(0x28)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x120(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeScale;                                         // 0x124(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PrerollTime;                                       // 0x128(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        NetworkMask;                                       // 0x12C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F89[0x3];                                     // Fixing Size After Last Property..
	class UMovieSceneSequence*                   SubSequence;                                       // 0x130(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubSection");
		return Clss;
	}

	void SetSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* GetSequence();
};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.TestMovieSceneTrack
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_1F8A[0x8];                                     // Fixing Size After Last Property..
	bool                                         bHighPassFilter;                                   // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8B[0x7];                                     // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestMovieSceneTrack");
		return Clss;
	}

};

// 0x0 (0xF0 - 0xF0)
// Class MovieScene.TestMovieSceneSection
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestMovieSceneSection");
		return Clss;
	}

};

// 0x8 (0x70 - 0x68)
// Class MovieScene.TestMovieSceneSequence
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestMovieSceneSequence");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubTrack");
		return Clss;
	}

};

// 0x10 (0xB8 - 0xA8)
// Class MovieScene.TestMovieSceneSubTrack
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestMovieSceneSubTrack");
		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MovieScene.TestMovieSceneSubSection
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestMovieSceneSubSection");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.TestMovieSceneEvalHookTrack
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestMovieSceneEvalHookTrack");
		return Clss;
	}

};

// 0x18 (0x120 - 0x108)
// Class MovieScene.TestMovieSceneEvalHookSection
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:
	uint8                                        Pad_1F8C[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestMovieSceneEvalHookSection");
		return Clss;
	}

};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FGuid                                 ObjectGuid;                                        // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
