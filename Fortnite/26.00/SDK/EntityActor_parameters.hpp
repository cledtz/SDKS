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

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorComponent.OnRep_ActorComponent
struct UEntityActorComponent_OnRep_ActorComponent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget
struct UEntityDynamicActivationComponent_OnRep_TransitionTarget_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EntityActor.EntityDynamicActivationComponent.OnEnabledChanged
struct UEntityDynamicActivationComponent_OnEnabledChanged_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorCollisionComponent.OnRep_PrimitiveComponent
struct UEntityActorCollisionComponent_OnRep_PrimitiveComponent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorCollisionComponent.OnRep_CollisionProfileName
struct UEntityActorCollisionComponent_OnRep_CollisionProfileName_Params
{
public:
};

// 0x110 (0x110 - 0x0)
// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentHit
struct UEntityActorCollisionComponent_OnNativeComponentHit_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x30(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap
struct UEntityActorCollisionComponent_OnNativeComponentEndOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1842[0x4];                                     // Fixing Size Of Struct
};

// 0x100 (0x100 - 0x0)
// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap
struct UEntityActorCollisionComponent_OnNativeComponentBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1844[0x3];                                     // Fixing Size After Last Property 
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EntityActor.EntityActorCollisionComponent.OnEnabledChanged
struct UEntityActorCollisionComponent_OnEnabledChanged_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorPlayerComponent.OnRep_PlayerId
struct UEntityActorPlayerComponent_OnRep_PlayerId_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MeshMaterials
struct UEntityActorStaticMeshRenderComponent_OnRep_MeshMaterials_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_MaxDrawDistance
struct UEntityActorStaticMeshRenderComponent_OnRep_MaxDrawDistance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorStaticMeshRenderComponent.OnRep_EnableCollision
struct UEntityActorStaticMeshRenderComponent_OnRep_EnableCollision_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.SetWorldSize
struct UEntityActorTextDisplayComponent_SetWorldSize_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment
struct UEntityActorTextDisplayComponent_SetVerticalAlignment_Params
{
public:
	enum class EVerticalTextAligment             Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor
struct UEntityActorTextDisplayComponent_SetTextRenderColor_Params
{
public:
	struct FColor                                Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.SetText
struct UEntityActorTextDisplayComponent_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeScale
struct UEntityActorTextDisplayComponent_SetRelativeScale_Params
{
public:
	struct FVector                               RelativeScale;                                     // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation
struct UEntityActorTextDisplayComponent_SetRelativeRotation_Params
{
public:
	struct FRotator                              RelativeRotation;                                  // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation
struct UEntityActorTextDisplayComponent_SetRelativeLocation_Params
{
public:
	struct FVector                               RelativeLocation;                                  // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment
struct UEntityActorTextDisplayComponent_SetHorizontalAlignment_Params
{
public:
	enum class EHorizTextAligment                Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.OnRep_WorldSize
struct UEntityActorTextDisplayComponent_OnRep_WorldSize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.OnRep_TextRenderColor
struct UEntityActorTextDisplayComponent_OnRep_TextRenderColor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.OnRep_DisplayText
struct UEntityActorTextDisplayComponent_OnRep_DisplayText_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.GetWorldSize
struct UEntityActorTextDisplayComponent_GetWorldSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment
struct UEntityActorTextDisplayComponent_GetVerticalAlignment_Params
{
public:
	enum class EVerticalTextAligment             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor
struct UEntityActorTextDisplayComponent_GetTextRenderColor_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.GetText
struct UEntityActorTextDisplayComponent_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation
struct UEntityActorTextDisplayComponent_GetRelativeLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment
struct UEntityActorTextDisplayComponent_GetHorizontalAlignment_Params
{
public:
	enum class EHorizTextAligment                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EntityActor.EntityActorPositionComponent.OnRootComponentChanged
struct UEntityActorPositionComponent_OnRootComponentChanged_Params
{
public:
	class USceneComponent*                       InRootComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRootComponent;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AA[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function EntityActor.EntityActorRotationComponent.OnRootComponentChanged
struct UEntityActorRotationComponent_OnRootComponentChanged_Params
{
public:
	class USceneComponent*                       InRootComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRootComponent;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B8[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function EntityActor.EntityActorScaleComponent.OnRootComponentChanged
struct UEntityActorScaleComponent_OnRootComponentChanged_Params
{
public:
	class USceneComponent*                       InRootComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRootComponent;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C2[0x7];                                     // Fixing Size Of Struct
};

}
}


