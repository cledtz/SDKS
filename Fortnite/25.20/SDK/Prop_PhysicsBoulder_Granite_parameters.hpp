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

// 0x148 (0x148 - 0x0)
// Function Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.OnDeathPlayEffects
struct AProp_PhysicsBoulder_Granite_C_OnDeathPlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A26[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x148 (0x148 - 0x0)
// Function Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ReceiveHit
struct AProp_PhysicsBoulder_Granite_C_ReceiveHit_Params
{
public:
	class UPrimitiveComponent*                   MyComp;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Other;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bSelfMoved;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A27[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0x68(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ReceiveBeginPlay
struct AProp_PhysicsBoulder_Granite_C_ReceiveBeginPlay_Params
{
public:
};

// 0x368 (0x368 - 0x0)
// Function Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C.ExecuteUbergraph_Prop_PhysicsBoulder_Granite
struct AProp_PhysicsBoulder_Granite_C_ExecuteUbergraph_Prop_PhysicsBoulder_Granite_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A28[0x2];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A29[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x10(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x48(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             K2Node_Event_InstigatedBy;                         // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x138(0x18)()
	struct FVector                               CallFunc_GetComponentVelocity_ReturnValue;         // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_MyComp;                               // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_Other;                                // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_OtherComp;                            // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSelfMoved;                           // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A2A[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_Event_HitLocation;                          // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_HitNormal;                            // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_NormalImpulse;                        // 0x1D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x1E8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x2C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x2D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A2B[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetComponentVelocity_ReturnValue_1;       // 0x2E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A2C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetComponentVelocity_ReturnValue_2;       // 0x300(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A2D[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x328(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x340(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x348(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue_2;      // 0x360(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
