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

// 0x4 (0x4 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.TriggerCustomEvent
struct UFortActorComponent_StateDriven_TriggerCustomEvent_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.SetCurrentState
struct UFortActorComponent_StateDriven_SetCurrentState_Params
{
public:
	struct FStateDrivenState                     InCurrentState;                                    // 0x0(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.PopSlottedItem
struct UFortActorComponent_StateDriven_PopSlottedItem_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.PlayBurstGameplayCue
struct UFortActorComponent_StateDriven_PlayBurstGameplayCue_Params
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupOverlapEventSettings
struct UFortActorComponent_StateDriven_OnSetupOverlapEventSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupInteractionEventSettings
struct UFortActorComponent_StateDriven_OnSetupInteractionEventSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupDamageEventSettings
struct UFortActorComponent_StateDriven_OnSetupDamageEventSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnResetCollisionSettings
struct UFortActorComponent_StateDriven_OnResetCollisionSettings_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnMulticastStateTreeEvent
struct UFortActorComponent_StateDriven_OnMulticastStateTreeEvent_Params
{
public:
	struct FGameplayTag                          TransitionTag;                                     // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueTag                       BurstGameplayCueTag;                               // 0x4(0x4)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.OnHandleStateTreeEvent
struct UFortActorComponent_StateDriven_OnHandleStateTreeEvent_Params
{
public:
	struct FGameplayTag                          TransitionTag;                                     // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueTag                       BurstGameplayCueTag;                               // 0x4(0x4)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleInteraction
struct UFortActorComponent_StateDriven_HandleInteraction_Params
{
public:
	class UBuildingActor*                        SelfActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             InteractingPawn;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleEndOverlap
struct UFortActorComponent_StateDriven_HandleEndOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C6[0x4];                                     // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleDied
struct UFortActorComponent_StateDriven_HandleDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47CF[0x4];                                     // Fixing Size After Last Property 
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47D2[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleDamaged
struct UFortActorComponent_StateDriven_HandleDamaged_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47D7[0x4];                                     // Fixing Size After Last Property 
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47D8[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleBeginOverlap
struct UFortActorComponent_StateDriven_HandleBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47E5[0x3];                                     // Fixing Size After Last Property 
	struct FHitResult                            SweepResult;                                       // 0x20(0xE0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x198 (0x198 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.GetSlottedItemEntry
struct UFortActorComponent_StateDriven_GetSlottedItemEntry_Params
{
public:
	struct FFortItemEntry                        ReturnValue;                                       // 0x0(0x198)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.GetSlottedItemDisplayName
struct UFortActorComponent_StateDriven_GetSlottedItemDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.GetInteractionString
struct UFortActorComponent_StateDriven_GetInteractionString_Params
{
public:
	class UFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47E9[0x7];                                     // Fixing Size After Last Property 
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function StateDrivenActorRuntime.FortActorComponent_StateDriven.GetFailedInteractionString
struct UFortActorComponent_StateDriven_GetFailedInteractionString_Params
{
public:
	class UFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47EF[0x7];                                     // Fixing Size After Last Property 
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


