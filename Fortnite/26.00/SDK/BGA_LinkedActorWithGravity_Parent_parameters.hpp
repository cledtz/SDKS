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

// 0x9 (0x9 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ShouldStopSimulationOnEnterWater
struct UBGA_LinkedActorWithGravity_Parent_C_ShouldStopSimulationOnEnterWater_Params
{
public:
	class UWaterBody*                            WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldStop;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE1 (0xE1 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ShouldStopSimulationOnHit
struct UBGA_LinkedActorWithGravity_Parent_C_ShouldStopSimulationOnHit_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         ShouldStop;                                        // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ReceiveHit
struct UBGA_LinkedActorWithGravity_Parent_C_ReceiveHit_Params
{
public:
	class UPrimitiveComponent*                   MyComp;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UActor*                                Other;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bSelfMoved;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336D[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0x68(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.OnSimulationResumed
struct UBGA_LinkedActorWithGravity_Parent_C_OnSimulationResumed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BeginSimulation
struct UBGA_LinkedActorWithGravity_Parent_C_BeginSimulation_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
struct UBGA_LinkedActorWithGravity_Parent_C_BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params
{
public:
	class UActor*                                DamageCauser;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.OnSimulationStopped
struct UBGA_LinkedActorWithGravity_Parent_C_OnSimulationStopped_Params
{
public:
	struct FHitResult                            StoppedHit;                                        // 0x0(0xE0)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.PlayDeathGC
struct UBGA_LinkedActorWithGravity_Parent_C_PlayDeathGC_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ReceiveBeginPlay
struct UBGA_LinkedActorWithGravity_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.OnDeathServer
struct UBGA_LinkedActorWithGravity_Parent_C_OnDeathServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3377[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UController*                           InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x11 (0x11 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BndEvt__BGA_LinkedActorWithGravity_Parent_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature
struct UBGA_LinkedActorWithGravity_Parent_C_BndEvt__BGA_LinkedActorWithGravity_Parent_FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature_Params
{
public:
	class UFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*        WaterInteractionComponent;                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFirstBody;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BndEvt__BGA_LinkedActorWithGravity_Parent_FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature
struct UBGA_LinkedActorWithGravity_Parent_C_BndEvt__BGA_LinkedActorWithGravity_Parent_FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature_Params
{
public:
	struct FHitResult                            ImpactResult;                                      // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.BndEvt__BGA_LinkedActorWithGravity_Parent_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedPhysicsObjectWake__DelegateSignature
struct UBGA_LinkedActorWithGravity_Parent_C_BndEvt__BGA_LinkedActorWithGravity_Parent_FortLinkToActor_K2Node_ComponentBoundEvent_1_OnLinkedPhysicsObjectWake__DelegateSignature_Params
{
public:
	class UActor*                                PhysicsObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x578 (0x578 - 0x0)
// Function BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C.ExecuteUbergraph_BGA_LinkedActorWithGravity_Parent
struct UBGA_LinkedActorWithGravity_Parent_C_ExecuteUbergraph_BGA_LinkedActorWithGravity_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3397[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                K2Node_ComponentBoundEvent_PhysicsObject;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3398[0x7];                                     // Fixing Size After Last Property 
	class UActor*                                K2Node_ComponentBoundEvent_DamageCauser;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_CustomEvent_StoppedHit;                     // 0x20(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        K2Node_Event_Damage;                               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339A[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x108(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x140(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UController*                           K2Node_Event_InstigatedBy;                         // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Event_DamageCauser;                         // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x230(0x18)(None)
	class UFortWaterBodyActor*                   K2Node_ComponentBoundEvent_WaterBody;              // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*        K2Node_ComponentBoundEvent_WaterInteractionComponent; // 0x250(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsFirstBody;           // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339C[0x7];                                     // Fixing Size After Last Property 
	struct FHitResult                            CallFunc_MakeHitResult_ReturnValue;                // 0x260(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldStopSimulationOnEnterWater_ShouldStop; // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339E[0x6];                                     // Fixing Size After Last Property 
	class UPrimitiveComponent*                   K2Node_Event_MyComp;                               // 0x348(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UActor*                                K2Node_Event_Other;                                // 0x350(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_OtherComp;                            // 0x358(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSelfMoved;                           // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A0[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               K2Node_Event_HitLocation;                          // 0x368(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_HitNormal;                            // 0x380(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_NormalImpulse;                        // 0x398(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x3B0(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_ShouldStopSimulationOnHit_ShouldStop;     // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A2[0x7];                                     // Fixing Size After Last Property 
	struct FHitResult                            K2Node_ComponentBoundEvent_ImpactResult;           // 0x498(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}


