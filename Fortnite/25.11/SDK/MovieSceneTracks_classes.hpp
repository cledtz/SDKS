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
// Class MovieSceneTracks.MovieSceneTransformOrigin
class UMovieSceneTransformOrigin : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTransformOrigin");
		return Clss;
	}

	struct FTransform BP_GetTransformOrigin();
};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneConsoleVariableTrackInterface
class UMovieSceneConsoleVariableTrackInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneConsoleVariableTrackInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class MovieSceneTracks.MovieSceneDecomposerTestObject
class UMovieSceneDecomposerTestObject : public UObject
{
public:
	float                                        FloatProperty;                                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98[0x4];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDecomposerTestObject");
		return Clss;
	}

};

// 0x28 (0x90 - 0x68)
// Class MovieSceneTracks.MovieSceneTestSequence
class UMovieSceneTestSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       BoundObjects;                                      // 0x70(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         BindingGuids;                                      // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTestSequence");
		return Clss;
	}

};

// 0x68 (0xC0 - 0x58)
// Class MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{
public:
	struct FMovieSceneDoublePerlinNoiseChannel   PerlinNoiseChannel;                                // 0x58(0x68)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDoublePerlinNoiseChannelContainer");
		return Clss;
	}

};

// 0x68 (0xC0 - 0x58)
// Class MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
class UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{
public:
	struct FMovieSceneFloatPerlinNoiseChannel    PerlinNoiseChannel;                                // 0x58(0x68)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatPerlinNoiseChannelContainer");
		return Clss;
	}

};

// 0x1B0 (0x1F0 - 0x40)
// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_99[0x1B0];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneInterrogatedPropertyInstantiatorSystem");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
class UMovieSceneCameraShakeEvaluator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeEvaluator");
		return Clss;
	}

};

// 0x28 (0x118 - 0xF0)
// Class MovieSceneTracks.MovieScene3DConstraintSection
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                 ConstraintId;                                      // 0xF0(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMovieSceneObjectBindingID            ConstraintBindingID;                               // 0x100(0x18)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DConstraintSection");
		return Clss;
	}

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID);
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
};

// 0x18 (0x130 - 0x118)
// Class MovieSceneTracks.MovieScene3DAttachSection
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	uint8                                        Pad_9A[0x8];                                       // Fixing Size After Last Property..
	class FName                                  AttachSocketName;                                  // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachComponentName;                               // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentLocationRule;                            // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentRotationRule;                            // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentScaleRule;                               // 0x12A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentLocationRule;                            // 0x12B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentRotationRule;                            // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentScaleRule;                               // 0x12D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B[0x2];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DAttachSection");
		return Clss;
	}

};

// 0x118 (0x230 - 0x118)
// Class MovieSceneTracks.MovieScene3DPathSection
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FMovieSceneFloatChannel               TimingCurve;                                       // 0x118(0x110)(NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x229(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C[0x2];                                       // Fixing Size After Last Property..
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x22C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x22C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x22C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D[0x3];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DPathSection");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MovieSceneTracks.MovieScene3DTransformSectionConstraints
class UMovieScene3DTransformSectionConstraints : public UObject
{
public:
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformSectionConstraints");
		return Clss;
	}

};

// 0xB48 (0xC38 - 0xF0)
// Class MovieSceneTracks.MovieScene3DTransformSection
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_9E[0x40];                                      // Fixing Size After Last Property..
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x130(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9F[0x4];                                       // Fixing Size After Last Property..
	struct FMovieSceneDoubleChannel              Translation[0x3];                                  // 0x138(0x348)(NativeAccessSpecifierPrivate)
	struct FMovieSceneDoubleChannel              Rotation[0x3];                                     // 0x480(0x348)(NativeAccessSpecifierPrivate)
	struct FMovieSceneDoubleChannel              Scale[0x3];                                        // 0x7C8(0x348)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               ManualWeight;                                      // 0xB10(0x110)(NativeAccessSpecifierPrivate)
	class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;                                  // 0xC20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieScene3DTransformSectionConstraints* Constraints;                                       // 0xC28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseQuaternionInterpolation;                       // 0xC30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0[0x7];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformSection");
		return Clss;
	}

};

// 0x1A8 (0x298 - 0xF0)
// Class MovieSceneTracks.MovieSceneActorReferenceSection
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FMovieSceneActorReferenceData         ActorReferenceData;                                // 0xF0(0x118)(NativeAccessSpecifierPrivate)
	struct FIntegralCurve                        ActorGuidIndexCurve;                               // 0x208(0x80)(Deprecated, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ActorGuidStrings;                                  // 0x288(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneActorReferenceSection");
		return Clss;
	}

};

// 0x528 (0x618 - 0xF0)
// Class MovieSceneTracks.MovieSceneAudioSection
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                            Sound;                                             // 0xF0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xF8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0xFC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioStartTime;                                    // 0x100(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioDilationFactor;                               // 0x104(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioVolume;                                       // 0x108(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A1[0x4];                                       // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               SoundVolume;                                       // 0x110(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               PitchMultiplier;                                   // 0x220(0x110)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMovieSceneFloatChannel> Inputs_Float;                                      // 0x330(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMovieSceneStringChannel> Inputs_String;                                     // 0x380(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMovieSceneBoolChannel> Inputs_Bool;                                       // 0x3D0(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMovieSceneIntegerChannel> Inputs_Int;                                        // 0x420(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMovieSceneAudioTriggerChannel> Inputs_Trigger;                                    // 0x470(0x50)(NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceData         AttachActorData;                                   // 0x4C0(0x118)(NativeAccessSpecifierPrivate)
	bool                                         bLooping;                                          // 0x5D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSuppressSubtitles;                                // 0x5D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAttenuation;                              // 0x5DA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A2[0x5];                                       // Fixing Size After Last Property..
	class USoundAttenuation*                     AttenuationSettings;                               // 0x5E0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           OnQueueSubtitles;                                  // 0x5E8(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A3[0x4];                                       // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnAudioFinished;                                   // 0x5F8(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnAudioPlaybackPercent;                            // 0x608(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAudioSection");
		return Clss;
	}

	void SetSuppressSubtitles(bool bInSuppressSubtitles);
	void SetStartOffset(const struct FFrameNumber& InStartOffset);
	void SetSound(class USoundBase* InSound);
	void SetOverrideAttenuation(bool bInOverrideAttenuation);
	void SetLooping(bool bInLooping);
	void SetAttenuationSettings(class USoundAttenuation* InAttenuationSettings);
	bool GetSuppressSubtitles();
	struct FFrameNumber GetStartOffset();
	class USoundBase* GetSound();
	bool GetOverrideAttenuation();
	bool GetLooping();
	class USoundAttenuation* GetAttenuationSettings();
};

// 0x8 (0xF8 - 0xF0)
// Class MovieSceneTracks.MovieSceneBaseCacheSection
class UMovieSceneBaseCacheSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_A4[0x8];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBaseCacheSection");
		return Clss;
	}

};

// 0x110 (0x200 - 0xF0)
// Class MovieSceneTracks.MovieSceneByteSection
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_A5[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneByteChannel                ByteCurve;                                         // 0xF8(0x108)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneByteSection");
		return Clss;
	}

};

// 0xB0 (0x1A0 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraCutSection
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_A6[0x8];                                       // Fixing Size After Last Property..
	bool                                         bLockPreviousCamera;                               // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7[0x3];                                       // Fixing Size After Last Property..
	struct FGuid                                 CameraGuid;                                        // 0xFC(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectBindingID            CameraBindingID;                                   // 0x10C(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A8[0xC];                                       // Fixing Size After Last Property..
	struct FTransform                            InitialCameraCutTransform;                         // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasInitialCameraCutTransform;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A9[0xF];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutSection");
		return Clss;
	}

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID);
	struct FMovieSceneObjectBindingID GetCameraBindingID();
};

// 0x50 (0x140 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraShakeSection
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData     ShakeData;                                         // 0xF0(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          ShakeClass;                                        // 0x118(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x120(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakePlaySpace             Playspace;                                         // 0x124(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA[0x3];                                       // Fixing Size After Last Property..
	struct FRotator                              UserDefinedPlaySpace;                              // 0x128(0x18)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeSection");
		return Clss;
	}

};

// 0x28 (0x118 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData     ShakeData;                                         // 0xF0(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeSourceShakeSection");
		return Clss;
	}

};

// 0xF8 (0x1E8 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel;                                           // 0xF0(0xF8)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeSourceTriggerSection");
		return Clss;
	}

};

// 0x28 (0x160 - 0x138)
// Class MovieSceneTracks.MovieSceneCinematicShotSection
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	class FString                                ShotDisplayName;                                   // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  DisplayName;                                       // 0x148(0x18)(Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCinematicShotSection");
		return Clss;
	}

	void SetShotDisplayName(const class FString& InShotDisplayName);
	class FString GetShotDisplayName();
};

// 0x448 (0x538 - 0xF0)
// Class MovieSceneTracks.MovieSceneColorSection
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_AB[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               RedCurve;                                          // 0xF8(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               GreenCurve;                                        // 0x208(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               BlueCurve;                                         // 0x318(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               AlphaCurve;                                        // 0x428(0x110)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorSection");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneConstrainedSection
class UMovieSceneConstrainedSection : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneConstrainedSection");
		return Clss;
	}

};

// 0x68 (0x158 - 0xF0)
// Class MovieSceneTracks.MovieSceneCVarSection
class UMovieSceneCVarSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_AC[0x8];                                       // Fixing Size After Last Property..
	TArray<struct FMovieSceneConsoleVariableCollection> ConsoleVariableCollections;                        // 0xF8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMovieSceneCVarOverrides              ConsoleVariables;                                  // 0x108(0x50)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCVarSection");
		return Clss;
	}

	void SetFromString(const class FString& InString);
	class FString GetString();
};

// 0x30 (0x120 - 0xF0)
// Class MovieSceneTracks.MovieSceneDataLayerSection
class UMovieSceneDataLayerSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_AD[0x8];                                       // Fixing Size After Last Property..
	TArray<struct FActorDataLayer>               DataLayers;                                        // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UDataLayerAsset*>               DataLayerAssets;                                   // 0x108(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class EDataLayerRuntimeState            DesiredState;                                      // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EDataLayerRuntimeState            PrerollState;                                      // 0x119(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFlushOnUnload;                                    // 0x11A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AE[0x5];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDataLayerSection");
		return Clss;
	}

	void SetPrerollState(enum class EDataLayerRuntimeState InPrerollState);
	void SetFlushOnUnload(bool bFlushOnUnload);
	void SetDesiredState(enum class EDataLayerRuntimeState InDesiredState);
	void SetDataLayers(TArray<struct FActorDataLayer>& InDataLayers);
	void SetDataLayerAssets(TArray<class UDataLayerAsset*>& InDataLayerAssets);
	enum class EDataLayerRuntimeState GetPrerollState();
	bool GetFlushOnUnload();
	enum class EDataLayerRuntimeState GetDesiredState();
	TArray<struct FActorDataLayer> GetDataLayers();
	TArray<class UDataLayerAsset*> GetDataLayerAssets();
};

// 0x120 (0x210 - 0xF0)
// Class MovieSceneTracks.MovieSceneDoubleSection
class UMovieSceneDoubleSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_AF[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneDoubleChannel              DoubleCurve;                                       // 0xF8(0x118)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDoubleSection");
		return Clss;
	}

};

// 0x110 (0x200 - 0xF0)
// Class MovieSceneTracks.MovieSceneEnumSection
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_B0[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneByteChannel                EnumCurve;                                         // 0xF8(0x108)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumSection");
		return Clss;
	}

};

// 0x0 (0xF0 - 0xF0)
// Class MovieSceneTracks.MovieSceneEventSectionBase
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventSectionBase");
		return Clss;
	}

};

// 0x30 (0x120 - 0xF0)
// Class MovieSceneTracks.MovieSceneEventRepeaterSection
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:
	uint8                                        Pad_B1[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneEvent                      Event;                                             // 0xF8(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventRepeaterSection");
		return Clss;
	}

};

// 0x170 (0x260 - 0xF0)
// Class MovieSceneTracks.MovieSceneEventSection
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                            Events;                                            // 0xF0(0x78)(Deprecated, NativeAccessSpecifierPrivate)
	struct FMovieSceneEventSectionData           EventData;                                         // 0x168(0xF8)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventSection");
		return Clss;
	}

};

// 0x100 (0x1F0 - 0xF0)
// Class MovieSceneTracks.MovieSceneEventTriggerSection
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:
	uint8                                        Pad_B2[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneEventChannel               EventChannel;                                      // 0xF8(0xF8)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventTriggerSection");
		return Clss;
	}

};

// 0x130 (0x220 - 0xF0)
// Class MovieSceneTracks.MovieSceneFadeSection
class UMovieSceneFadeSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_B3[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0xF8(0x110)(NativeAccessSpecifierPublic)
	struct FLinearColor                          FadeColor;                                         // 0x208(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFadeAudio : 1;                                    // Mask: 0x1, PropSize: 0x10x218(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B4[0x7];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeSection");
		return Clss;
	}

};

// 0x128 (0x218 - 0xF0)
// Class MovieSceneTracks.MovieSceneFloatSection
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_B5[0x10];                                      // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0x100(0x110)(Protected, NativeAccessSpecifierProtected)
	class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;                                  // 0x210(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatSection");
		return Clss;
	}

};

// 0x108 (0x1F8 - 0xF0)
// Class MovieSceneTracks.MovieSceneIntegerSection
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_B6[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneIntegerChannel             IntegerCurve;                                      // 0xF8(0x100)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerSection");
		return Clss;
	}

};

// 0x20 (0x110 - 0xF0)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	uint8                                        Pad_B7[0x8];                                       // Fixing Size After Last Property..
	enum class ELevelVisibility                  Visibility;                                        // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B8[0x7];                                       // Fixing Size After Last Property..
	TArray<class FName>                          LevelNames;                                        // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilitySection");
		return Clss;
	}

	void SetVisibility(enum class ELevelVisibility InVisibility);
	void SetLevelNames(TArray<class FName>& InLevelNames);
	enum class ELevelVisibility GetVisibility();
	TArray<class FName> GetLevelNames();
};

// 0x130 (0x220 - 0xF0)
// Class MovieSceneTracks.MovieSceneObjectPropertySection
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel          ObjectChannel;                                     // 0xF0(0x130)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneObjectPropertySection");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneParameterSectionExtender
class UMovieSceneParameterSectionExtender : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParameterSectionExtender");
		return Clss;
	}

};

// 0x68 (0x158 - 0xF0)
// Class MovieSceneTracks.MovieSceneParameterSection
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_C1[0x8];                                       // Fixing Size After Last Property..
	TArray<struct FBoolParameterNameAndCurve>    BoolParameterNamesAndCurves;                       // 0xF8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FScalarParameterNameAndCurve>  ScalarParameterNamesAndCurves;                     // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;                   // 0x118(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;                     // 0x128(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FColorParameterNameAndCurves>  ColorParameterNamesAndCurves;                      // 0x138(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;                  // 0x148(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParameterSection");
		return Clss;
	}

	bool RemoveVectorParameter(class FName InParameterName);
	bool RemoveVector2DParameter(class FName InParameterName);
	bool RemoveTransformParameter(class FName InParameterName);
	bool RemoveScalarParameter(class FName InParameterName);
	bool RemoveColorParameter(class FName InParameterName);
	bool RemoveBoolParameter(class FName InParameterName);
	void GetParameterNames(TSet<class FName>* ParameterNames);
	void AddVectorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue);
	void AddVector2DParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue);
	void AddTransformParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, struct FTransform& InValue);
	void AddScalarParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, float InValue);
	void AddColorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue);
	void AddBoolParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, bool InValue);
};

// 0x108 (0x1F8 - 0xF0)
// Class MovieSceneTracks.MovieSceneParticleSection
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FMovieSceneParticleChannel            ParticleKeys;                                      // 0xF0(0x108)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleSection");
		return Clss;
	}

};

// 0x138 (0x228 - 0xF0)
// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_C2[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneObjectPathChannel          MaterialChannel;                                   // 0xF8(0x130)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialSection");
		return Clss;
	}

};

// 0x260 (0x350 - 0xF0)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_C3[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneSkeletalAnimationParams    Params;                                            // 0xF8(0x148)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x240(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     Animation;                                         // 0x248(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0x250(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndOffset;                                         // 0x254(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x258(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x25C(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_3 : 7;                                      // Fixing Bit-Field Size..
	uint8                                        Pad_C4[0x3];                                       // Fixing Size After Last Property..
	class FName                                  SlotName;                                          // 0x260(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C5[0x4];                                       // Fixing Size After Last Property..
	struct FVector                               StartLocationOffset;                               // 0x268(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StartRotationOffset;                               // 0x280(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMatchWithPrevious;                                // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6[0x3];                                       // Fixing Size After Last Property..
	class FName                                  MatchedBoneName;                                   // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MatchedLocationOffset;                             // 0x2A0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              MatchedRotationOffset;                             // 0x2B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMatchTranslation;                                 // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchIncludeZHeight;                              // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchRotationYaw;                                 // 0x2D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchRotationPitch;                               // 0x2D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchRotationRoll;                                // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C7[0x7B];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationSection");
		return Clss;
	}

};

// 0x110 (0x200 - 0xF0)
// Class MovieSceneTracks.MovieSceneSlomoSection
class UMovieSceneSlomoSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0xF0(0x110)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSlomoSection");
		return Clss;
	}

};

// 0x110 (0x200 - 0xF0)
// Class MovieSceneTracks.MovieSceneStringSection
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FMovieSceneStringChannel              StringCurve;                                       // 0xF0(0x110)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneStringSection");
		return Clss;
	}

};

// 0x450 (0x540 - 0xF0)
// Class MovieSceneTracks.MovieSceneFloatVectorSection
class UMovieSceneFloatVectorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_C8[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               Curves[0x4];                                       // 0xF8(0x440)(NativeAccessSpecifierPrivate)
	int32                                        ChannelsUsed;                                      // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C9[0x4];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatVectorSection");
		return Clss;
	}

};

// 0x470 (0x560 - 0xF0)
// Class MovieSceneTracks.MovieSceneDoubleVectorSection
class UMovieSceneDoubleVectorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_CA[0x8];                                       // Fixing Size After Last Property..
	struct FMovieSceneDoubleChannel              Curves[0x4];                                       // 0xF8(0x460)(NativeAccessSpecifierPrivate)
	int32                                        ChannelsUsed;                                      // 0x558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CB[0x4];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDoubleVectorSection");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.BoolChannelEvaluatorSystem
class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BoolChannelEvaluatorSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.ByteChannelEvaluatorSystem
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ByteChannelEvaluatorSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.DoubleChannelEvaluatorSystem
class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DoubleChannelEvaluatorSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
class UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DoublePerlinNoiseChannelEvaluatorSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.FloatChannelEvaluatorSystem
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FloatChannelEvaluatorSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
class UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FloatPerlinNoiseChannelEvaluatorSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IntegerChannelEvaluatorSystem");
		return Clss;
	}

};

// 0x18 (0x58 - 0x40)
// Class MovieSceneTracks.MovieScenePropertySystem
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_CC[0x8];                                       // Fixing Size After Last Property..
	class UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;                                // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CD[0x8];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePropertySystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformPropertySystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBaseValueEvaluatorSystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneBoolPropertySystem
class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolPropertySystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneBytePropertySystem
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBytePropertySystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneColorPropertySystem
class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorPropertySystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentAttachmentInvalidatorSystem");
		return Clss;
	}

};

// 0x190 (0x1D0 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_CE[0x190];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentAttachmentSystem");
		return Clss;
	}

};

// 0x160 (0x1A0 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentMaterialSystem
class UMovieSceneComponentMaterialSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_CF[0x160];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentMaterialSystem");
		return Clss;
	}

};

// 0x1F0 (0x230 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_D0[0x1F0];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentMobilitySystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneComponentTransformSystem
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentTransformSystem");
		return Clss;
	}

};

// 0x10 (0x50 - 0x40)
// Class MovieSceneTracks.MovieSceneConstraintSystem
class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D1[0x10];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneConstraintSystem");
		return Clss;
	}

};

// 0x90 (0xD0 - 0x40)
// Class MovieSceneTracks.MovieSceneDataLayerSystem
class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D2[0x90];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDataLayerSystem");
		return Clss;
	}

};

// 0x18 (0x58 - 0x40)
// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D3[0x18];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDeferredComponentMovementSystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneDoublePropertySystem
class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDoublePropertySystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneEnumPropertySystem
class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumPropertySystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEulerTransformPropertySystem");
		return Clss;
	}

};

// 0x50 (0x90 - 0x40)
// Class MovieSceneTracks.MovieSceneEventSystem
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D4[0x50];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventSystem");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePreSpawnEventSystem");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePostSpawnEventSystem");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePostEvalEventSystem
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePostEvalEventSystem");
		return Clss;
	}

};

// 0x10 (0x50 - 0x40)
// Class MovieSceneTracks.MovieSceneFadeSystem
class UMovieSceneFadeSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D5[0x10];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeSystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneFloatPropertySystem
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatPropertySystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneHierarchicalBiasSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneInitialValueSystem
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneInitialValueSystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerPropertySystem");
		return Clss;
	}

};

// 0x148 (0x188 - 0x40)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D6[0x148];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilitySystem");
		return Clss;
	}

};

// 0x20 (0x60 - 0x40)
// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
class UMovieSceneMaterialParameterCollectionSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D7[0x20];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialParameterCollectionSystem");
		return Clss;
	}

};

// 0x308 (0x348 - 0x40)
// Class MovieSceneTracks.MovieSceneMaterialParameterSystem
class UMovieSceneMaterialParameterSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D8[0x300];                                     // Fixing Size After Last Property..
	class UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem;                               // 0x340(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialParameterSystem");
		return Clss;
	}

};

// 0x58 (0x98 - 0x40)
// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_D9[0x58];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMotionVectorSimulationSystem");
		return Clss;
	}

};

// 0x28 (0x90 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_DA[0x28];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePiecewiseBoolBlenderSystem");
		return Clss;
	}

};

// 0x28 (0x90 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_DB[0x28];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePiecewiseByteBlenderSystem");
		return Clss;
	}

};

// 0xC8 (0x130 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_DC[0xC8];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePiecewiseDoubleBlenderSystem");
		return Clss;
	}

};

// 0x28 (0x90 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_DD[0x28];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePiecewiseEnumBlenderSystem");
		return Clss;
	}

};

// 0x48 (0xB0 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_DE[0x48];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePiecewiseIntegerBlenderSystem");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Result;                                            // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Failure;                                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1[0x10];                                      // Fixing Size After Last Property..
	class UMovieSceneSequencePlayer*             SequencePlayer;                                    // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       SceneComponent;                                    // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E2[0x10];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAsyncAction_SequencePrediction");
		return Clss;
	}

	class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);
	class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime);
	class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);
	class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime);
};

// 0xB0 (0xF0 - 0x40)
// Class MovieSceneTracks.MovieScenePredictionSystem
class UMovieScenePredictionSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_E3[0x90];                                      // Fixing Size After Last Property..
	TArray<class UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;                                // 0xD0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;                             // 0xE0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePredictionSystem");
		return Clss;
	}

};

// 0x208 (0x248 - 0x40)
// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_E4[0x208];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePropertyInstantiatorSystem");
		return Clss;
	}

};

// 0x70 (0xD8 - 0x68)
// Class MovieSceneTracks.MovieSceneQuaternionBlenderSystem
class UMovieSceneQuaternionBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_E5[0x70];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneQuaternionBlenderSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneQuaternionInterpolationRotationSystem");
		return Clss;
	}

};

// 0xA0 (0xE0 - 0x40)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSystem
class UMovieSceneSkeletalAnimationSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_E6[0xA0];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem
class UMovieSceneTransformOriginInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTransformOriginInstantiatorSystem");
		return Clss;
	}

};

// 0x38 (0x78 - 0x40)
// Class MovieSceneTracks.MovieSceneTransformOriginSystem
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_E7[0x38];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTransformOriginSystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem
class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatVectorPropertySystem");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDoubleVectorPropertySystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.ObjectPathChannelEvaluatorSystem
class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ObjectPathChannelEvaluatorSystem");
		return Clss;
	}

};

// 0x98 (0xD8 - 0x40)
// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_E8[0x88];                                      // Fixing Size After Last Property..
	class UWeightAndEasingEvaluatorSystem*       EvaluatorSystem;                                   // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E9[0x8];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneHierarchicalEasingInstantiatorSystem");
		return Clss;
	}

};

// 0x8 (0x48 - 0x40)
// Class MovieSceneTracks.MovieSceneHierarchicalEasingFinalizationSystem
class UMovieSceneHierarchicalEasingFinalizationSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	class UMovieSceneHierarchicalEasingInstantiatorSystem* InstantiatorSystem;                                // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneHierarchicalEasingFinalizationSystem");
		return Clss;
	}

};

// 0x18 (0x58 - 0x40)
// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_EA[0x18];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeightAndEasingEvaluatorSystem");
		return Clss;
	}

};

// 0x78 (0xC8 - 0x50)
// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
public:
	uint8                                        Pad_EB[0x78];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutTrackInstance");
		return Clss;
	}

};

// 0x50 (0xA0 - 0x50)
// Class MovieSceneTracks.MovieSceneCVarTrackInstance
class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance
{
public:
	uint8                                        Pad_EC[0x50];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCVarTrackInstance");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieScene3DConstraintTrack
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            ConstraintSections;                                // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DConstraintTrack");
		return Clss;
	}

};

// 0x0 (0xA8 - 0xA8)
// Class MovieSceneTracks.MovieScene3DAttachTrack
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DAttachTrack");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class MovieSceneTracks.MovieScene3DPathTrack
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:
	uint8                                        Pad_ED[0x8];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DPathTrack");
		return Clss;
	}

};

// 0x28 (0xC0 - 0x98)
// Class MovieSceneTracks.MovieScenePropertyTrack
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class UMovieSceneSection*                    SectionToKey;                                      // 0x98(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieScenePropertyBinding            PropertyBinding;                                   // 0xA0(0xC)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_EE[0x4];                                       // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePropertyTrack");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieScene3DTransformTrack
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_EF[0x8];                                       // Fixing Size After Last Property..
	TSubclassOf<class UMovieSceneBlenderSystem>  BlenderSystemClass;                                // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneActorReferenceTrack
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_F0[0x8];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneActorReferenceTrack");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneAudioTrack
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_F1[0x8];                                       // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            AudioSections;                                     // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAudioTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneBoolTrack
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_F2[0x8];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneByteTrack
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneByteTrack");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraCutTrack
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	bool                                         bCanBlend;                                         // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3[0x7];                                       // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutTrack");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_F4[0x8];                                       // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            CameraShakeSections;                               // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeSourceShakeTrack");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_F5[0x8];                                       // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeSourceTriggerTrack");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraShakeTrack
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_F6[0x8];                                       // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            CameraShakeSections;                               // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeTrack");
		return Clss;
	}

};

// 0x0 (0xA8 - 0xA8)
// Class MovieSceneTracks.MovieSceneCinematicShotTrack
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCinematicShotTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneColorTrack
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                         bIsSlateColor;                                     // 0xC0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F7[0x7];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorTrack");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieSceneCVarTrack
class UMovieSceneCVarTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCVarTrack");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieSceneDataLayerTrack
class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDataLayerTrack");
		return Clss;
	}

};

// 0x0 (0xC0 - 0xC0)
// Class MovieSceneTracks.MovieSceneDoubleTrack
class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDoubleTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneEnumTrack
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumTrack");
		return Clss;
	}

};

// 0x0 (0xC0 - 0xC0)
// Class MovieSceneTracks.MovieSceneEulerTransformTrack
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEulerTransformTrack");
		return Clss;
	}

};

// 0x28 (0xC0 - 0x98)
// Class MovieSceneTracks.MovieSceneEventTrack
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_F8[0x10];                                      // Fixing Size After Last Property..
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10xA8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10xA8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4 : 6;                                      // Fixing Bit-Field Size..
	uint8                                        Pad_F9[0x3];                                       // Fixing Size After Last Property..
	enum class EFireEventsAtPosition             EventPosition;                                     // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA[0x3];                                       // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventTrack");
		return Clss;
	}

};

// 0x0 (0xC0 - 0xC0)
// Class MovieSceneTracks.MovieSceneFloatTrack
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatTrack");
		return Clss;
	}

};

// 0x0 (0xC0 - 0xC0)
// Class MovieSceneTracks.MovieSceneFadeTrack
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeTrack");
		return Clss;
	}

};

// 0x0 (0xC0 - 0xC0)
// Class MovieSceneTracks.MovieSceneIntegerTrack
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerTrack");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilityTrack");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieSceneMaterialTrack
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialTrack");
		return Clss;
	}

};

// 0x18 (0xC0 - 0xA8)
// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_FB[0x10];                                      // Fixing Size After Last Property..
	class UMaterialParameterCollection*          MPC;                                               // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialParameterCollectionTrack");
		return Clss;
	}

};

// 0x18 (0xC0 - 0xA8)
// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_FC[0x10];                                      // Fixing Size After Last Property..
	int32                                        MaterialIndex;                                     // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FD[0x4];                                       // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentMaterialTrack");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_FE[0x8];                                       // Fixing Size After Last Property..
	TSubclassOf<class UObject>                   PropertyClass;                                     // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneObjectPropertyTrack");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneParticleParameterTrack
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_FF[0x8];                                       // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleParameterTrack");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneParticleTrack
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_100[0x8];                                      // Fixing Size After Last Property..
	TArray<class UMovieSceneSection*>            ParticleSections;                                  // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        MaterialIndex;                                     // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_101[0x4];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialTrack");
		return Clss;
	}

};

// 0xA8 (0x140 - 0x98)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bUseLegacySectionIndexBlend;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102[0x7];                                      // Fixing Size After Last Property..
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;                                  // 0xB0(0x80)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBlendFirstChildOfRoot;                            // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103[0xF];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneSlomoTrack
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:
	uint8                                        Pad_104[0x8];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSlomoTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneStringTrack
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_105[0x8];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneStringTrack");
		return Clss;
	}

};

// 0x0 (0xC0 - 0xC0)
// Class MovieSceneTracks.MovieSceneTransformTrack
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTransformTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneFloatVectorTrack
class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        NumChannelsUsed;                                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_106[0x4];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatVectorTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class MovieSceneTracks.MovieSceneDoubleVectorTrack
class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        NumChannelsUsed;                                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_107[0x4];                                      // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDoubleVectorTrack");
		return Clss;
	}

};

// 0x0 (0xC8 - 0xC8)
// Class MovieSceneTracks.MovieSceneVisibilityTrack
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVisibilityTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
