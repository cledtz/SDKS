#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct UChaosDestructionListener_SortTrailingEvents_Params
{
public:
	TArray<struct FChaosTrailingEventData>       TrailingEvents;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EChaosTrailingSortMethod          SortMethod;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33C[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
struct UChaosDestructionListener_SortRemovalEvents_Params
{
public:
	TArray<struct FChaosRemovalEventData>        RemovalEvents;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EChaosRemovalSortMethod           SortMethod;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_342[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct UChaosDestructionListener_SortCollisionEvents_Params
{
public:
	TArray<struct FChaosCollisionEventData>      CollisionEvents;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EChaosCollisionSortMethod         SortMethod;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct UChaosDestructionListener_SortBreakingEvents_Params
{
public:
	TArray<struct FChaosBreakingEventData>       BreakingEvents;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EChaosBreakingSortMethod          SortMethod;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct UChaosDestructionListener_SetTrailingEventRequestSettings_Params
{
public:
	struct FChaosTrailingEventRequestSettings    InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct UChaosDestructionListener_SetTrailingEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
struct UChaosDestructionListener_SetRemovalEventRequestSettings_Params
{
public:
	struct FChaosRemovalEventRequestSettings     InSettings;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
struct UChaosDestructionListener_SetRemovalEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct UChaosDestructionListener_SetCollisionEventRequestSettings_Params
{
public:
	struct FChaosCollisionEventRequestSettings   InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct UChaosDestructionListener_SetCollisionEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct UChaosDestructionListener_SetBreakingEventRequestSettings_Params
{
public:
	struct FChaosBreakingEventRequestSettings    InSettings;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct UChaosDestructionListener_SetBreakingEventEnabled_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct UChaosDestructionListener_RemoveGeometryCollectionActor_Params
{
public:
	class UGeometryCollectionActor*              GeometryCollectionActor;                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct UChaosDestructionListener_RemoveChaosSolverActor_Params
{
public:
	class UChaosSolverActor*                     ChaosSolverActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct UChaosDestructionListener_IsEventListening_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct UChaosDestructionListener_AddGeometryCollectionActor_Params
{
public:
	class UGeometryCollectionActor*              GeometryCollectionActor;                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct UChaosDestructionListener_AddChaosSolverActor_Params
{
public:
	class UChaosSolverActor*                     ChaosSolverActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct UGeometryCollectionActor_RaycastSingle_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            OutHit;                                            // 0x30(0xE8)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x118(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B4[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
struct UGeometryCollectionComponent_SetRestCollection_Params
{
public:
	class UGeometryCollection*                   RestCollectionIn;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
struct UGeometryCollectionComponent_SetNotifyRemovals_Params
{
public:
	bool                                         bNewNotifyRemovals;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
struct UGeometryCollectionComponent_SetNotifyCrumblings_Params
{
public:
	bool                                         bNewNotifyCrumblings;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewCrumblingEventIncludesChildren;                // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct UGeometryCollectionComponent_SetNotifyBreaks_Params
{
public:
	bool                                         bNewNotifyBreaks;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
struct UGeometryCollectionComponent_SetEnableDamageFromCollision_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
struct UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4[0x8];                                      // Fixing Size After Last Property 
	struct FTransform                            Transform;                                         // 0x40(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnchored;                                         // 0xA0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8[0x3];                                      // Fixing Size After Last Property 
	int32                                        MaxLevel;                                          // 0xA4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9[0x8];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
struct UGeometryCollectionComponent_SetAnchoredByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnchored;                                         // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA[0x3];                                      // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
struct UGeometryCollectionComponent_SetAnchoredByBox_Params
{
public:
	struct FBox                                  WorldSpaceBox;                                     // 0x0(0x38)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAnchored;                                         // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5[0x3];                                      // Fixing Size After Last Property 
	int32                                        MaxLevel;                                          // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
struct UGeometryCollectionComponent_RemoveAllAnchors_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct UGeometryCollectionComponent_ReceivePhysicsCollision_Params
{
public:
	struct FChaosPhysicsCollisionInfo            CollisionInfo;                                     // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params
{
public:
	class UGeometryCollectionComponent*          FracturedComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params
{
public:
	class UGeometryCollectionComponent*          FracturedComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
struct UGeometryCollectionComponent_GetRootIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
struct UGeometryCollectionComponent_GetMassAndExtents_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutMass;                                           // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  OutExtents;                                        // 0x8(0x38)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
struct UGeometryCollectionComponent_GetLocalBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
struct UGeometryCollectionComponent_GetInitialLevel_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
struct UGeometryCollectionComponent_GetDebugInfo_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
struct UGeometryCollectionComponent_CrumbleCluster_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
struct UGeometryCollectionComponent_CrumbleActiveClusters_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct UGeometryCollectionComponent_ApplyPhysicsField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryCollectionPhysicsTypeEnum Target;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414[0x6];                                      // Fixing Size After Last Property 
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
struct UGeometryCollectionComponent_ApplyLinearVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               LinearVelocity;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct UGeometryCollectionComponent_ApplyKinematicField_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               Position;                                          // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
struct UGeometryCollectionComponent_ApplyInternalStrain_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_427[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               Location;                                          // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PropagationDepth;                                  // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationFactor;                                 // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strain;                                            // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
struct UGeometryCollectionComponent_ApplyExternalStrain_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_431[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               Location;                                          // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PropagationDepth;                                  // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationFactor;                                 // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strain;                                            // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
struct UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               LinearVelocity;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
struct UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_444[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               AngularVelocity;                                   // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
struct UGeometryCollectionComponent_ApplyAngularVelocity_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44B[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               AngularVelocity;                                   // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


