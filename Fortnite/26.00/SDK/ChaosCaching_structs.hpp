#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECacheMode : uint8
{
	None                           = 0,
	Play                           = 1,
	Record                         = 2,
	ECacheMode_MAX                 = 3,
};

enum class EStartMode : uint8
{
	Timed                          = 0,
	Triggered                      = 1,
	EStartMode_MAX                 = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct ChaosCaching.CacheEventBase
struct FCacheEventBase
{
public:
	uint8                                        Pad_5164[0x8];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ChaosCaching.EnableStateEvent
struct FEnableStateEvent : public FCacheEventBase
{
public:
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5165[0x3];                                     // Fixing Size Of Struct
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ChaosCaching.BreakingEvent
struct FBreakingEvent : public FCacheEventBase
{
public:
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5168[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Location;                                          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_516A[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               BoundingBoxMin;                                    // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoundingBoxMax;                                    // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct ChaosCaching.CollisionEvent
struct FCollisionEvent : public FCacheEventBase
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedImpulse;                                // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity1;                                         // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity2;                                         // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DeltaVelocity1;                                    // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DeltaVelocity2;                                    // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity1;                                  // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity2;                                  // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass1;                                             // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass2;                                             // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationDepth;                                  // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_516D[0x4];                                     // Fixing Size Of Struct
};

// 0x80 (0x88 - 0x8)
// ScriptStruct ChaosCaching.TrailingEvent
struct FTrailingEvent : public FCacheEventBase
{
public:
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5170[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Location;                                          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoundingBoxMin;                                    // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoundingBoxMax;                                    // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ChaosCaching.CacheEventTrack
struct FCacheEventTrack
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5171[0x4];                                     // Fixing Size After Last Property 
	class UScriptStruct*                         Struct;                                            // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                TimeStamps;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5173[0x18];                                    // Fixing Size Of Struct
};

// 0x160 (0x160 - 0x0)
// ScriptStruct ChaosCaching.ObservedComponent
struct FObservedComponent
{
public:
	class FName                                  CacheName;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5174[0x4];                                     // Fixing Size After Last Property 
	struct FComponentReference                   ComponentRef;                                      // 0x8(0x28)(NativeAccessSpecifierPublic)
	struct FSoftComponentReference               SoftComponentRef;                                  // 0x30(0x40)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIsSimulating;                                     // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlaybackEnabled;                                  // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5175[0xEE];                                    // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ChaosCaching.ParticleTransformTrack
struct FParticleTransformTrack
{
public:
	struct FRawAnimSequenceTrack                 RawTransformTrack;                                 // 0x0(0x30)(NativeAccessSpecifierPublic)
	float                                        BeginOffset;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeactivateOnEnd;                                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5178[0x3];                                     // Fixing Size After Last Property 
	TArray<float>                                KeyTimestamps;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ChaosCaching.PerParticleCacheData
struct FPerParticleCacheData
{
public:
	struct FParticleTransformTrack               TransformData;                                     // 0x0(0x48)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FRichCurve>         CurveData;                                         // 0x48(0x50)(NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ChaosCaching.CacheSpawnableTemplate
struct FCacheSpawnableTemplate
{
public:
	class UObject*                               DuplicatedTemplate;                                // 0x0(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5179[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            InitialTransform;                                  // 0x10(0x60)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ComponentTransform;                                // 0x70(0x60)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChaosCaching.RichCurves
struct FRichCurves
{
public:
	TArray<struct FRichCurve>                    RichCurves;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChaosCaching.CompressedRichCurves
struct FCompressedRichCurves
{
public:
	TArray<struct FCompressedRichCurve>          CompressedRichCurves;                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ChaosCaching.MovieSceneChaosCacheParams
struct FMovieSceneChaosCacheParams : public FMovieSceneBaseCacheParams
{
public:
	class UChaosCacheCollection*                 CacheCollection;                                   // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
struct FMovieSceneChaosCacheSectionTemplateParameters : public FMovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct FMovieSceneChaosCacheParams           ChaosCacheParams;                                  // 0x8(0x28)(NativeAccessSpecifierPublic)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplate
struct FMovieSceneChaosCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneChaosCacheSectionTemplateParameters Params;                                            // 0x20(0x30)(NativeAccessSpecifierPublic)
};

}


