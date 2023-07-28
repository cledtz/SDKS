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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct FLevelSequenceCameraSettings
{
public:
	bool                                         bOverrideAspectRatioAxisConstraint;                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAspectRatioAxisConstraint        AspectRatioAxisConstraint;                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct FLevelSequenceLegacyObjectReference
{
public:
	uint8                                        Pad_27BB[0x20];                                    // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap
{
public:
	uint8                                        Pad_27BC[0x50];                                    // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy
{
public:
	uint8                                        Pad_27BD[0x1];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct FLevelSequenceAnimSequenceLinkItem
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       PathToAnimSequence;                                // 0x10(0x18)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportTransforms;                                 // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportMorphTargets;                               // 0x29(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportAttributeCurves;                            // 0x2A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportMaterialCurves;                             // 0x2B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimInterpolationType            Interpolation;                                     // 0x2C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              CurveInterpolation;                                // 0x2D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecordInWorldSpace;                               // 0x2E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEvaluateAllSkeletalMeshComponents;                // 0x2F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       ExternalObjectPath;                                // 0x10(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ObjectPath;                                        // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray
{
public:
	TArray<struct FLevelSequenceBindingReference> References;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0(0x50)(NativeAccessSpecifierPrivate)
	TSet<struct FGuid>                           AnimSequenceInstances;                             // 0x50(0x50)(NativeAccessSpecifierPrivate)
	TSet<struct FGuid>                           PostProcessInstances;                              // 0xA0(0x50)(NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject
{
public:
	TLazyObjectPtr<class UObject>                ObjectOrOwner;                                     // 0x0(0x1C)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27BE[0x4];                                     // Fixing Size After Last Property..
	class FString                                ComponentName;                                     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                CachedComponent;                                   // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings
{
public:
	uint8                                        Pad_27BF[0x1];                                     // Fixing Size Of Struct..
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot
{
public:
	class FString                                RootName;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   RootTime;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   SourceTime;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentShotName;                                   // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   CurrentShotLocalTime;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   CurrentShotSourceTime;                             // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceTimecode;                                    // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCameraComponent>       CameraComponent;                                   // 0x70(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        ActiveShot;                                        // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                 ShotID;                                            // 0xA0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C0[0x4];                                     // Fixing Size After Last Property..
	class FString                                MasterName;                                        // 0xA8(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FQualifiedFrameTime                   MasterTime;                                        // 0xB8(0x10)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
