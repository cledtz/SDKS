#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget
struct UGravityGunTargetTrackingComponent_IsValidTarget_Params
{
public:
	class AActor*                                OwningPlayer;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PotentialTarget;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReasonForFailure;                                  // 0x10(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BBD[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetProjectile
struct UGravityGunTargetTrackingComponent_FindTargetProjectile_Params
{
public:
	class AActor*                                OwningPlayer;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceStart;                                        // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetingRadius;                                   // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BBE[0x3];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetActor
struct UGravityGunTargetTrackingComponent_FindTargetActor_Params
{
public:
	class AActor*                                OwningPlayer;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceStart;                                        // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropPreviewPosition
struct UPropGunFunctionLibrary_UpdatePropPreviewPosition_Params
{
public:
	class USceneComponent*                       PropPreviewComponent;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BC6[0x4];                                     // Fixing Size After Last Property..
	class AFortPawn*                             AttachPawn;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocket;                                      // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BC7[0x4];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                WeaponMesh;                                        // 0x20(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DesiredRelativeTransform;                          // 0x28(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumZOffset;                                    // 0x40(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BC8[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              RelativeRotation;                                  // 0x48(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CachedScale;                                       // 0x60(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeed;                                       // 0x78(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BC9[0x4];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropIndexEventState
struct UPropGunFunctionLibrary_UpdatePropIndexEventState_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaddleGingerPropData                 Payload;                                           // 0x8(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MotherGameplayRuntime.PropGunFunctionLibrary.UpdatePropActivatedEventState
struct UPropGunFunctionLibrary_UpdatePropActivatedEventState_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaddleGingerPropActivatedData        Payload;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropIndexEventState
struct UPropGunFunctionLibrary_ClearPropIndexEventState_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MotherGameplayRuntime.PropGunFunctionLibrary.ClearPropActivatedEventState
struct UPropGunFunctionLibrary_ClearPropActivatedEventState_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint
struct AReactorGradeGameplayCue_ChargeUp_UpdateAimEndPoint_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointUpdated
struct AReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated_Params
{
public:
	struct FVector                               FoundPoint;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint
struct AReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
