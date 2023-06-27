#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieScene3DPathSection_Axis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6,
};

enum class ELevelVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2,
};

enum class EParticleKey : uint8
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};

enum class EFireEventsAtPosition : uint8
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
struct FMovieScenePreAnimatedMaterialParameters
{
public:
	class UMaterialInterface*                    PreviousMaterial;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     SoftPreviousMaterial;                              // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
struct FMovieSceneCameraShakeSourceTrigger
{
public:
	TSubclassOf<class UCameraShakeBase>          ShakeClass;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakePlaySpace             Playspace;                                         // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108[0x3];                                      // Fixing Size After Last Property..
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.PerlinNoiseParams
struct FPerlinNoiseParams
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_109[0x4];                                      // Fixing Size After Last Property..
	double                                       Amplitude;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A[0x4];                                      // Fixing Size Of Struct..
};

// 0x18 (0x68 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
struct FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel
{
public:
	struct FPerlinNoiseParams                    PerlinNoiseParams;                                 // 0x50(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
struct FMovieSceneEventPayloadVariable
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
struct FMovieSceneEventPtrs
{
public:
	class UFunction*                             Function;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          BoundObjectProperty;                               // 0x8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEvent
struct FMovieSceneEvent
{
public:
	struct FMovieSceneEventPtrs                  Ptrs;                                              // 0x0(0x28)(NativeAccessSpecifierPublic)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvent>              KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x18 (0x68 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
struct FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel
{
public:
	struct FPerlinNoiseParams                    PerlinNoiseParams;                                 // 0x50(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        Values;                                            // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                DefaultValue;                                      // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10B[0x7];                                      // Fixing Size After Last Property..
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x88(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x130 (0x150 - 0x20)
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            PathBindingID;                                     // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               TimingCurve;                                       // 0x38(0x110)(NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C[0x2];                                      // Fixing Size After Last Property..
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x14C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x14C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x14C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D[0x3];                                      // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct FMovieSceneActorReferenceKey
{
public:
	struct FMovieSceneObjectBindingID            Object;                                            // 0x0(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentName;                                     // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0x118 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceKey          DefaultValue;                                      // 0x60(0x20)(NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneActorReferenceKey>  KeyValues;                                         // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x90(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x130 (0x150 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x18)(NativeAccessSpecifierPrivate)
	struct FMovieSceneActorReferenceData         ActorReferenceData;                                // 0x38(0x118)(NativeAccessSpecifierPrivate)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneAudioSection*               AudioSection;                                      // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
struct FMovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData
{
public:
	TSubclassOf<class UCameraShakeBase>          ShakeClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakePlaySpace             Playspace;                                         // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E[0x3];                                      // Fixing Size After Last Property..
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x20(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FFrameNumber>                  TriggerTimes;                                      // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x20(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F[0x4];                                      // Fixing Size Of Struct..
};

// 0x448 (0x480 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel               Curves[0x4];                                       // 0x38(0x440)(NativeAccessSpecifierPublic)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110[0x7];                                      // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct FMovieSceneEventParameters
{
public:
	uint8                                        Pad_111[0x28];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload
{
public:
	class FName                                  EventName;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112[0x4];                                      // Fixing Size After Last Property..
	struct FMovieSceneEventParameters            Parameters;                                        // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FEventPayload>                 KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x100 (0x120 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneEventSectionData           EventData;                                         // 0x20(0xF8)(NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10x118(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10x118(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113[0x7];                                      // Fixing Size Of Struct..
};

// 0x130 (0x168 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneObjectPathChannel          ObjectChannel;                                     // 0x38(0x130)(NativeAccessSpecifierPrivate)
};

// 0x448 (0x448 - 0x0)
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114[0x4];                                      // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               RedCurve;                                          // 0x8(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               GreenCurve;                                        // 0x118(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               BlueCurve;                                         // 0x228(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               AlphaCurve;                                        // 0x338(0x110)(NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115[0x4];                                      // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               ParameterCurve;                                    // 0x8(0x110)(NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
struct FBoolParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116[0x4];                                      // Fixing Size After Last Property..
	struct FMovieSceneBoolChannel                ParameterCurve;                                    // 0x8(0x100)(NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
struct FVector2DParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117[0x4];                                      // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               XCurve;                                            // 0x8(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               YCurve;                                            // 0x118(0x110)(NativeAccessSpecifierPublic)
};

// 0x338 (0x338 - 0x0)
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118[0x4];                                      // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               XCurve;                                            // 0x8(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               YCurve;                                            // 0x118(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               ZCurve;                                            // 0x228(0x110)(NativeAccessSpecifierPublic)
};

// 0x998 (0x998 - 0x0)
// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
struct FTransformParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119[0x4];                                      // Fixing Size After Last Property..
	struct FMovieSceneFloatChannel               Translation[0x3];                                  // 0x8(0x330)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Rotation[0x3];                                     // 0x338(0x330)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Scale[0x3];                                        // 0x668(0x330)(NativeAccessSpecifierPublic)
};

// 0x60 (0x80 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FScalarParameterNameAndCurve>  Scalars;                                           // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBoolParameterNameAndCurve>    Bools;                                             // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVector2DParameterNameAndCurves> Vector2Ds;                                         // 0x40(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FVectorParameterNameAndCurves> Vectors;                                           // 0x50(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FColorParameterNameAndCurves>  Colors;                                            // 0x60(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransformParameterNameAndCurves> Transforms;                                        // 0x70(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x0 (0x108 - 0x108)
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
public:
};

// 0x108 (0x128 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneParticleChannel            ParticleKeys;                                      // 0x20(0x108)(NativeAccessSpecifierPublic)
};

// 0x100 (0x138 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolCurve;                                         // 0x38(0x100)(Protected, NativeAccessSpecifierProtected)
};

// 0x110 (0x148 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneStringChannel              StringCurve;                                       // 0x38(0x110)(Protected, NativeAccessSpecifierProtected)
};

// 0x110 (0x130 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneFloatChannel               SlomoCurve;                                        // 0x20(0x110)(NativeAccessSpecifierPrivate)
};

// 0x0 (0x138 - 0x138)
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
struct FLevelVisibilityComponentData
{
public:
	class UMovieSceneLevelVisibilitySection*     Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneDataLayerComponentData
struct FMovieSceneDataLayerComponentData
{
public:
	class UMovieSceneDataLayerSection*           Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.ConstraintComponentData
struct FConstraintComponentData
{
public:
	class FName                                  ConstraintName;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A[0xC];                                      // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
struct FMovieSceneSkeletalAnimationComponentData
{
public:
	class UMovieSceneSkeletalAnimationSection*   Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x20(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B[0x1C];                                     // Fixing Size Of Struct..
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FRotator                              Rotation;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x20(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C[0x1C];                                     // Fixing Size Of Struct..
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector3f                             Scale;                                             // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x14(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D[0x18];                                     // Fixing Size Of Struct..
};

// 0x58 (0x60 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector3f                             Scale;                                             // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x44(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E[0x18];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct FMovieSceneTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheParams
struct FMovieSceneBaseCacheParams
{
public:
	uint8                                        Pad_11F[0x8];                                      // Fixing Size After Last Property..
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120[0x7];                                      // Fixing Size Of Struct..
};

// 0x30 (0x38 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          Time;                                              // 0x18(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121[0x1C];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneConsoleVariableCollection
struct FMovieSceneConsoleVariableCollection
{
public:
	FInterfaceProperty_                          Interface;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyIncludeChecked;                               // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122[0x7];                                      // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCVarOverrides
struct FMovieSceneCVarOverrides
{
public:
	TMap<class FString, class FString>           ValuesByCVar;                                      // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5 : 7;                                      // Fixing Bit-Field Size..
	uint8                                        Pad_123[0x3];                                      // Fixing Size After Last Property..
	class FName                                  SlotName;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x28(0x110)(NativeAccessSpecifierPublic)
	bool                                         bSkipAnimNotifiers;                                // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceCustomMode;                                  // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESwapRootBone                     SwapRootBone;                                      // 0x13A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124[0x1];                                      // Fixing Size After Last Property..
	float                                        StartOffset;                                       // 0x13C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0x140(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125[0x4];                                      // Fixing Size Of Struct..
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
struct FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126[0x1C];                                     // Fixing Size Of Struct..
};

// 0x8 (0x30 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2fKeyStruct
struct FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	struct FVector2f                             Vector;                                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector3fKeyStruct
struct FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	struct FVector3f                             Vector;                                            // 0x28(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127[0x4];                                      // Fixing Size Of Struct..
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4fKeyStruct
struct FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	uint8                                        Pad_128[0x8];                                      // Fixing Size After Last Property..
	struct FVector4f                             Vector;                                            // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129[0x1C];                                     // Fixing Size Of Struct..
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	struct FVector2D                             Vector;                                            // 0x28(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector3dKeyStruct
struct FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	struct FVector3d                             Vector;                                            // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4dKeyStruct
struct FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	uint8                                        Pad_12A[0x8];                                      // Fixing Size After Last Property..
	struct FVector4d                             Vector;                                            // 0x30(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
struct FMovieSceneEventTriggerData
{
public:
	struct FMovieSceneEventPtrs                  Ptrs;                                              // 0x0(0x28)(NativeAccessSpecifierPublic)
	struct FGuid                                 ObjectBindingID;                                   // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B[0x10];                                     // Fixing Size Of Struct..
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
public:
	uint8                                        Pad_12C[0x80];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
