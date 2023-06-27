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

enum class ESmartObjectChangeReason : uint8
{
	None                           = 0,
	OnEvent                        = 1,
	OnTagAdded                     = 2,
	OnTagRemoved                   = 3,
	OnClaimed                      = 4,
	OnOccupied                     = 5,
	OnReleased                     = 6,
	OnSlotEnabled                  = 7,
	OnSlotDisabled                 = 8,
	OnObjectEnabled                = 9,
	OnObjectDisabled               = 10,
	ESmartObjectChangeReason_MAX   = 11,
};

enum class ESmartObjectEntrancePriority : uint8
{
	Lowest                         = 0,
	Lower                          = 1,
	Low                            = 2,
	BelowNormal                    = 3,
	Normal                         = 4,
	AboveNormal                    = 5,
	High                           = 6,
	Higher                         = 7,
	Highest                        = 8,
	MIN                            = 0,
	MAX                            = 8,
};

enum class ESmartObjectSlotShape : uint8
{
	Circle                         = 0,
	Rectangle                      = 1,
	ESmartObjectSlotShape_MAX      = 2,
};

enum class ESmartObjectSlotState : uint8
{
	Invalid                        = 0,
	Free                           = 1,
	Claimed                        = 2,
	Occupied                       = 3,
	Disabled                       = 4,
	ESmartObjectSlotState_MAX      = 5,
};

enum class EFSmartObjectSlotEntrySelectionMethod : uint8
{
	First                          = 0,
	NearestToSearchLocation        = 1,
	FSmartObjectSlotEntrySelectionMethod_MAX = 2,
};

enum class ESmartObjectCollectionRegistrationResult : uint8
{
	Failed_InvalidCollection       = 0,
	Failed_AlreadyRegistered       = 1,
	Failed_NotFromPersistentLevel  = 2,
	Succeeded                      = 3,
	ESmartObjectCollectionRegistrationResult_MAX = 4,
};

enum class ESmartObjectUnregistrationMode : uint8
{
	KeepRuntimeInstanceActiveIfPartOfCollection = 0,
	DestroyRuntimeInstance         = 1,
	ESmartObjectUnregistrationMode_MAX = 2,
};

enum class ESmartObjectTagMergingPolicy : uint8
{
	Combine                        = 0,
	Override                       = 1,
	ESmartObjectTagMergingPolicy_MAX = 2,
};

enum class ESmartObjectTagFilteringPolicy : uint8
{
	NoFilter                       = 0,
	Combine                        = 1,
	Override                       = 2,
	ESmartObjectTagFilteringPolicy_MAX = 3,
};

enum class ESmartObjectSlotNavigationLocationType : uint8
{
	Entry                          = 0,
	Exit                           = 1,
	ESmartObjectSlotNavigationLocationType_MAX = 2,
};

enum class ESmartObjectTraceType : uint8
{
	ByChannel                      = 0,
	ByProfile                      = 1,
	ByObjectTypes                  = 2,
	ESmartObjectTraceType_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectHandle
struct FSmartObjectHandle
{
public:
	uint64                                       ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotHandle
struct FSmartObjectSlotHandle
{
public:
	uint8                                        Pad_4117[0x8];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectEventData
struct FSmartObjectEventData
{
public:
	struct FSmartObjectHandle                    SmartObjectHandle;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESmartObjectChangeReason          Reason;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4118[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Tag;                                               // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4119[0x10];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotDefinitionData
struct FSmartObjectSlotDefinitionData
{
public:
	uint8                                        Pad_411A[0x8];                                     // Fixing Size Of Struct..
};

// 0x0 (0x8 - 0x8)
// ScriptStruct SmartObjectsModule.SmartObjectSlotAnnotation
struct FSmartObjectSlotAnnotation : public FSmartObjectSlotDefinitionData
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionBase
struct FSmartObjectWorldConditionBase : public FWorldConditionBase
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectUserCapsuleParams
struct FSmartObjectUserCapsuleParams
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepHeight;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct SmartObjectsModule.SmartObjectAnnotation_SlotUserCollision
struct FSmartObjectAnnotation_SlotUserCollision : public FSmartObjectSlotAnnotation
{
public:
	bool                                         bUseUserCapsuleSize;                               // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411B[0x3];                                     // Fixing Size After Last Property..
	struct FSmartObjectUserCapsuleParams         Capsule;                                           // 0xC(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct SmartObjectsModule.SmartObjectSlotEntranceAnnotation
struct FSmartObjectSlotEntranceAnnotation : public FSmartObjectSlotAnnotation
{
public:
	struct FVector3f                             Offset;                                            // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator3f                            Rotation;                                          // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x20(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsEntry : 1;                                      // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsExit : 1;                                       // Mask: 0x2, PropSize: 0x10x24(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTraceGroundLocation : 1;                          // Mask: 0x4, PropSize: 0x10x24(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCheckTransitionTrajectory : 1;                    // Mask: 0x8, PropSize: 0x10x24(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_237 : 4;                                    // Fixing Bit-Field Size..
	enum class ESmartObjectEntrancePriority      SelectionPriority;                                 // 0x25(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411C[0x2];                                     // Fixing Size After Last Property..
	float                                        TrajectoryStartHeightOffset;                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrajectorySlotHeightOffset;                        // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionCheckRadius;                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411D[0x4];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotReference
struct FSmartObjectSlotReference
{
public:
	uint8                                        Index;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct SmartObjectsModule.SmartObjectSlotLinkAnnotation
struct FSmartObjectSlotLinkAnnotation : public FSmartObjectSlotAnnotation
{
public:
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotReference             LinkedSlot;                                        // 0xC(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_411E[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x70 - 0x68)
// ScriptStruct SmartObjectsModule.SmartObjectComponentInstanceData
struct FSmartObjectComponentInstanceData : public FActorComponentInstanceData
{
public:
	class USmartObjectDefinition*                DefinitionAsset;                                   // 0x68(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotDefinition
struct FSmartObjectSlotDefinition
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411F[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 RuntimeTags;                                       // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     UserTagFilter;                                     // 0x28(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ActivityTags;                                      // 0x70(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FWorldConditionQueryDefinition        SelectionPreconditions;                            // 0x90(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0xA8(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC0(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FInstancedStruct>              Data;                                              // 0xD8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class USmartObjectBehaviorDefinition*> BehaviorDefinitions;                               // 0xE8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectDefinitionPreviewData
struct FSmartObjectDefinitionPreviewData
{
public:
	TSoftClassPtr<class AActor>                  ObjectActorClass;                                  // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ObjectMeshPath;                                    // 0x28(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AActor>                  UserActorClass;                                    // 0x40(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class USmartObjectSlotValidationFilter> UserValidationFilterClass;                         // 0x68(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotDefinitionFragment
struct FSmartObjectSlotDefinitionFragment : public FMassSharedFragment
{
public:
	class USmartObjectDefinition*                SmartObjectDefinition;                             // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4120[0x8];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSpatialEntryData
struct FSmartObjectSpatialEntryData
{
public:
	uint8                                        Pad_4121[0x1];                                     // Fixing Size Of Struct..
};

// 0xB (0xC - 0x1)
// ScriptStruct SmartObjectsModule.SmartObjectHashGridEntryData
struct FSmartObjectHashGridEntryData : public FSmartObjectSpatialEntryData
{
public:
	uint8                                        Pad_4122[0xB];                                     // Fixing Size Of Struct..
};

// 0xF (0x10 - 0x1)
// ScriptStruct SmartObjectsModule.SmartObjectOctreeEntryData
struct FSmartObjectOctreeEntryData : public FSmartObjectSpatialEntryData
{
public:
	uint8                                        Pad_4123[0xF];                                     // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectCollectionEntry
struct FSmartObjectCollectionEntry
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       Path;                                              // 0x20(0x18)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4124[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x40(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox                                  Bounds;                                            // 0xA0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSmartObjectHandle                    Handle;                                            // 0xD8(0x8)(Edit, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       DefinitionIdx;                                     // 0xE0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4125[0xC];                                     // Fixing Size Of Struct..
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectContainer
struct FSmartObjectContainer
{
public:
	struct FBox                                  Bounds;                                            // 0x0(0x38)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSmartObjectCollectionEntry>   CollectionEntries;                                 // 0x38(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap;                           // 0x48(0x50)(Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectDefinition*>        Definitions;                                       // 0x98(0x10)(Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UObject*                               Owner;                                             // 0xA8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectUserHandle
struct FSmartObjectUserHandle
{
public:
	uint32                                       ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectClaimHandle
struct FSmartObjectClaimHandle
{
public:
	struct FSmartObjectHandle                    SmartObjectHandle;                                 // 0x0(0x8)(Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x8(0x8)(Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectUserHandle                UserHandle;                                        // 0x10(0x4)(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4126[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotStateData
struct FSmartObjectSlotStateData : public FMassFragment
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotTransform
struct FSmartObjectSlotTransform : public FSmartObjectSlotStateData
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRuntimeSlot
struct FSmartObjectRuntimeSlot
{
public:
	uint8                                        Pad_4127[0x50];                                    // Fixing Size After Last Property..
	struct FWorldConditionQueryState             PreconditionState;                                 // 0x50(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4128[0x8];                                     // Fixing Size Of Struct..
};

// 0x120 (0x120 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRuntime
struct FSmartObjectRuntime
{
public:
	struct FWorldConditionQueryState             PreconditionState;                                 // 0x0(0x30)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4129[0x10];                                    // Fixing Size After Last Property..
	class USmartObjectDefinition*                Definition;                                        // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class USmartObjectComponent>  OwnerComponent;                                    // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_412A[0xB0];                                    // Fixing Size After Last Property..
	struct FInstancedStruct                      SpatialEntryData;                                  // 0x100(0x10)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_412B[0x10];                                    // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotView
struct FSmartObjectSlotView
{
public:
	uint8                                        Pad_412C[0x28];                                    // Fixing Size Of Struct..
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequestFilter
struct FSmartObjectRequestFilter
{
public:
	class AActor*                                UserActor;                                         // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UserTags;                                          // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     ActivityRequirements;                              // 0x28(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSubclassOf<class USmartObjectBehaviorDefinition> BehaviorDefinitionClass;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USmartObjectBehaviorDefinition>> BehaviorDefinitionClasses;                         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bShouldEvaluateConditions;                         // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412D[0x67];                                    // Fixing Size Of Struct..
};

// 0x130 (0x130 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequest
struct FSmartObjectRequest
{
public:
	struct FBox                                  QueryBox;                                          // 0x0(0x38)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_412E[0x8];                                     // Fixing Size After Last Property..
	struct FSmartObjectRequestFilter             Filter;                                            // 0x40(0xF0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectRequestResult
struct FSmartObjectRequestResult
{
public:
	struct FSmartObjectHandle                    SmartObjectHandle;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x8(0x8)(Edit, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotEntranceHandle
struct FSmartObjectSlotEntranceHandle
{
public:
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_412F[0x8];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotEntranceLocationRequest
struct FSmartObjectSlotEntranceLocationRequest
{
public:
	uint8                                        Pad_4130[0x48];                                    // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotEntranceLocationResult
struct FSmartObjectSlotEntranceLocationResult
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4131[0x8];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Tag;                                               // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4132[0x4];                                     // Fixing Size After Last Property..
	struct FSmartObjectSlotEntranceHandle        EntranceHandle;                                    // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotIndex
struct FSmartObjectSlotIndex
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectTraceParams
struct FSmartObjectTraceParams
{
public:
	enum class ESmartObjectTraceType             Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4133[0x6];                                     // Fixing Size After Last Property..
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCollisionProfileName                 CollisionProfile;                                  // 0x18(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bTraceComplex;                                     // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4134[0x3];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectSlotValidationParams
struct FSmartObjectSlotValidationParams
{
public:
	TSubclassOf<class UNavigationQueryFilter>    NavigationFilter;                                  // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               SearchExtents;                                     // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectTraceParams               GroundTraceParameters;                             // 0x20(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FSmartObjectTraceParams               TransitionTraceParameters;                         // 0x40(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bTestUserOverlapOnEntrance;                        // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseNavigationCapsuleSize;                         // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4135[0x2];                                     // Fixing Size After Last Property..
	struct FSmartObjectUserCapsuleParams         UserCapsule;                                       // 0x64(0xC)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectActorUserData
struct FSmartObjectActorUserData
{
public:
	TWeakObjectPtr<class AActor>                 UserActor;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionObjectTagQueryState
struct FSmartObjectWorldConditionObjectTagQueryState
{
public:
	uint8                                        Pad_4136[0x8];                                     // Fixing Size Of Struct..
};

// 0x58 (0x68 - 0x10)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionObjectTagQuery
struct FSmartObjectWorldConditionObjectTagQuery : public FSmartObjectWorldConditionBase
{
public:
	uint8                                        Pad_4137[0x10];                                    // Fixing Size After Last Property..
	struct FGameplayTagQuery                     TagQuery;                                          // 0x20(0x48)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionSlotTagQueryState
struct FSmartObjectWorldConditionSlotTagQueryState
{
public:
	uint8                                        Pad_4138[0x10];                                    // Fixing Size Of Struct..
};

// 0x58 (0x68 - 0x10)
// ScriptStruct SmartObjectsModule.SmartObjectWorldConditionSlotTagQuery
struct FSmartObjectWorldConditionSlotTagQuery : public FSmartObjectWorldConditionBase
{
public:
	uint8                                        Pad_4139[0x10];                                    // Fixing Size After Last Property..
	struct FGameplayTagQuery                     TagQuery;                                          // 0x20(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SmartObjectsModule.WorldCondition_SmartObjectActorTagQueryState
struct FWorldCondition_SmartObjectActorTagQueryState
{
public:
	uint8                                        Pad_413A[0x8];                                     // Fixing Size Of Struct..
};

// 0x50 (0x60 - 0x10)
// ScriptStruct SmartObjectsModule.WorldCondition_SmartObjectActorTagQuery
struct FWorldCondition_SmartObjectActorTagQuery : public FSmartObjectWorldConditionBase
{
public:
	uint8                                        Pad_413B[0x8];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     TagQuery;                                          // 0x18(0x48)(Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
