#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xF0 - 0x68)
// Class TemplateSequence.TemplateSequence
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UActor>                  BoundActorClass;                                   // 0x70(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, class FName>              BoundActorComponents;                              // 0xA0(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TemplateSequence");
		return Clss;
	}

};

// 0x0 (0xF0 - 0xF0)
// Class TemplateSequence.CameraAnimationSequence
class UCameraAnimationSequence : public UTemplateSequence
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraAnimationSequence");
		return Clss;
	}

};

// 0x818 (0x840 - 0x28)
// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
class UCameraAnimationSequenceCameraStandIn : public UObject
{
public:
	float                                        FieldOfView;                                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8F : 7;                                     // Fixing Bit-Field Size
	uint8                                        Pad_181D[0x3];                                     // Fixing Size After Last Property
	float                                        AspectRatio;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181F[0xC];                                     // Fixing Size After Last Property
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x40(0x6E0)(NativeAccessSpecifierPublic)
	float                                        PostProcessBlendWeight;                            // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings               Filmback;                                          // 0x724(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                   LensSettings;                                      // 0x730(0x1C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1822[0x4];                                     // Fixing Size After Last Property
	struct FCameraFocusSettings                  FocusSettings;                                     // 0x750(0x68)(NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0x7BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFocusDistance;                              // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1825[0x7C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraAnimationSequenceCameraStandIn");
		return Clss;
	}

};

// 0x368 (0x390 - 0x28)
// Class TemplateSequence.CameraAnimationSequencePlayer
class UCameraAnimationSequencePlayer : public UObject
{
public:
	uint8                                        Pad_1829[0x270];                                   // Fixing Size After Last Property
	class UObject*                               BoundObjectOverride;                               // 0x298(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                   Sequence;                                          // 0x2A0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2A8(0x88)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_182A[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraAnimationSequencePlayer");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class TemplateSequence.CameraAnimationSpawnableSystem
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraAnimationSpawnableSystem");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraAnimationBoundObjectInstantiator");
		return Clss;
	}

};

// 0x0 (0x6F8 - 0x6F8)
// Class TemplateSequence.CameraAnimationEntitySystemLinker
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraAnimationEntitySystemLinker");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class TemplateSequence.CameraAnimationSequenceSubsystem
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_182F[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraAnimationSequenceSubsystem");
		return Clss;
	}

};

// 0x10 (0x148 - 0x138)
// Class TemplateSequence.TemplateSequenceSection
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:
	TArray<struct FTemplateSectionPropertyScale> PropertyScales;                                    // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TemplateSequenceSection");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class TemplateSequence.SequenceCameraShakePattern
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSegmentDuration;                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomSegment;                                    // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1835[0x3];                                     // Fixing Size After Last Property
	class UCameraAnimationSequencePlayer*        Player;                                            // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                                     // 0x50(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SequenceCameraShakePattern");
		return Clss;
	}

};

// 0x70 (0xB0 - 0x40)
// Class TemplateSequence.TemplateSequenceSystem
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1839[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TemplateSequenceSystem");
		return Clss;
	}

};

// 0x58 (0x98 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_183B[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TemplateSequencePropertyScalingInstantiatorSystem");
		return Clss;
	}

};

// 0x50 (0x90 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_183E[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TemplateSequencePropertyScalingEvaluatorSystem");
		return Clss;
	}

};

// 0x60 (0x2F0 - 0x290)
// Class TemplateSequence.TemplateSequenceActor
class UTemplateSequenceActor : public UActor
{
public:
	uint8                                        Pad_1853[0x8];                                     // Fixing Size After Last Property
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x298(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UTemplateSequencePlayer*               SequencePlayer;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       TemplateSequence;                                  // 0x2C0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTemplateSequenceBindingOverrideData  BindingOverride;                                   // 0x2E0(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1856[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TemplateSequenceActor");
		return Clss;
	}

	void SetSequence(class UTemplateSequence* InSequence);
	void SetBinding(class UActor* Actor, bool bOverridesDefault);
	class UTemplateSequence* LoadSequence();
	class UTemplateSequencePlayer* GetSequencePlayer();
	class UTemplateSequence* GetSequence();
};

// 0x8 (0x4C0 - 0x4B8)
// Class TemplateSequence.TemplateSequencePlayer
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	uint8                                        Pad_1864[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TemplateSequencePlayer");
		return Clss;
	}

	class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class UTemplateSequenceActor** OutActor);
};

// 0x0 (0x28 - 0x28)
// Class TemplateSequence.SequenceCameraShakeTestUtil
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SequenceCameraShakeTestUtil");
		return Clss;
	}

	bool GetPostProcessBlendCache(class UPlayerController* PlayerController, int32 PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight);
	struct FMinimalViewInfo GetLastFrameCameraCachePOV(class UPlayerController* PlayerController);
	struct FMinimalViewInfo GetCameraCachePOV(class UPlayerController* PlayerController);
};

// 0x0 (0xA8 - 0xA8)
// Class TemplateSequence.TemplateSequenceTrack
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TemplateSequenceTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
