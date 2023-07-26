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

// 0x49 (0x49 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnKeepOut
struct AB_Prj_Commando_FragGrenade_C_SpawnKeepOut_Params
{
public:
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortAreaOfEffectCloud*                CallFunc_SpawnAreaOfEffectCloud_ReturnValue;       // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAOE_Commando_KeepOutExplosion_C*      K2Node_DynamicCast_AsAOE_Commando_Keep_Out_Explosion; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnClusters
struct AB_Prj_Commando_FragGrenade_C_SpawnClusters_Params
{
public:
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_976F[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9770[0x4];                                     // Fixing Size After Last Property..
	struct FFortGameplayEffectContainerSpec      K2Node_Select_Default;                             // 0x78(0xB8)()
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9771[0x4];                                     // Fixing Size After Last Property..
	class AFortProjectileBase*                   CallFunc_SpawnProjectile_ReturnValue;              // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9772[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast; // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CalcGrenadeSpeed
struct AB_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed_Params
{
public:
	double                                       Angle;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GrenadeSpeedMin;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GrenadeSpeedMax;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxSpeedPitch;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinSpeedPitch;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeAxis_ReturnValue;                // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9773[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeAxis_Angle_ImplicitCast;         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9774[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FClamp_Value_ImplicitCast;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit
struct AB_Prj_Commando_FragGrenade_C_OnRep_StoredHit_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript
struct AB_Prj_Commando_FragGrenade_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay
struct AB_Prj_Commando_FragGrenade_C_ReceiveBeginPlay_Params
{
public:
};

// 0xE0 (0xE0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop
struct AB_Prj_Commando_FragGrenade_C_OnStop_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation
struct AB_Prj_Commando_FragGrenade_C_Stop_Rotation_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded
struct AB_Prj_Commando_FragGrenade_C_OnExploded_Params
{
public:
	TArray<class AActor*>                        HitActors;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                    HitResults;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x20 (0x20 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage
struct AB_Prj_Commando_FragGrenade_C_ReceiveAnyDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9775[0x4];                                     // Fixing Size After Last Property..
	class UDamageType*                           DamageType;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce
struct AB_Prj_Commando_FragGrenade_C_OnBounce_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.On Destroy Grenade
struct AB_Prj_Commando_FragGrenade_C_On_Destroy_Grenade_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Bind Destroy Grenade
struct AB_Prj_Commando_FragGrenade_C_Bind_Destroy_Grenade_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Force On Exploded Effects
struct AB_Prj_Commando_FragGrenade_C_Force_On_Exploded_Effects_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Unbind Destroy Grenade
struct AB_Prj_Commando_FragGrenade_C_Unbind_Destroy_Grenade_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.TriggerDoExplsoion
struct AB_Prj_Commando_FragGrenade_C_TriggerDoExplsoion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveDestroyed
struct AB_Prj_Commando_FragGrenade_C_ReceiveDestroyed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CheckKeepOutAndCluster
struct AB_Prj_Commando_FragGrenade_C_CheckKeepOutAndCluster_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveActorBeginOverlap
struct AB_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SendExplodedEvent
struct AB_Prj_Commando_FragGrenade_C_SendExplodedEvent_Params
{
public:
};

// 0x780 (0x780 - 0x0)
// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade
struct AB_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit_1;                                // 0x8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0xF0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnSameTeam_ReturnValue;                   // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9776[0x7];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        K2Node_Event_HitActors;                            // 0x1E0(0x10)(ConstParm, ReferenceParm)
	TArray<struct FHitResult>                    K2Node_Event_HitResults;                           // 0x1F0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	float                                        K2Node_Event_Damage;                               // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9777[0x4];                                     // Fixing Size After Last Property..
	class UDamageType*                           K2Node_Event_DamageType;                           // 0x208(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x220(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9778[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x248(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x260(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9779[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x350(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x368(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x380(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x398(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x3B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x3C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x3D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977B[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x3E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x3F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_DynamicCast_AsPawn;                         // 0x410(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x422(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_2;               // 0x423(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_3;               // 0x424(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_4;               // 0x425(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x426(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977D[0x1];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977E[0x3];                                     // Fixing Size After Last Property..
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0x438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x440(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_2;              // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_977F[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Abs_ReturnValue;                          // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x488(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DestroyedActor;                 // 0x4A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x4A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_2;                     // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_3;                     // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x4C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_4;                     // 0x4C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9780[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4C8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9781[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_OtherActor;                           // 0x4D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x4E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9782[0x7];                                     // Fixing Size After Last Property..
	class APawn*                                 K2Node_DynamicCast_AsPawn_1;                       // 0x4F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x502(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9783[0x5];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x508(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x520(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x538(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x540(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x558(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_3;              // 0x570(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9784[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x580(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9785[0xF];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetingLocationInfo K2Node_MakeStruct_GameplayAbilityTargetingLocationInfo; // 0x5F0(0xA0)(ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromLocations_ReturnValue; // 0x690(0x28)()
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x6B8(0xB0)()
	float                                        K2Node_VariableSet_ProjectileGravityScale_ImplicitCast; // 0x768(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayLocalForceFeedbackAtLocationMulti_InnerRadius_ImplicitCast; // 0x76C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayLocalForceFeedbackAtLocationMulti_OuterRadius_ImplicitCast; // 0x770(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1; // 0x774(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x778(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
