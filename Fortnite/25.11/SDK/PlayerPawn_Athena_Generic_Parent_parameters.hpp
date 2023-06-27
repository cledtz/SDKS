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

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay
struct APlayerPawn_Athena_Generic_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle
struct APlayerPawn_Athena_Generic_Parent_C_OnEnteredVehicle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle
struct APlayerPawn_Athena_Generic_Parent_C_OnExitedVehicle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped
struct APlayerPawn_Athena_Generic_Parent_C_OnJumped_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch
struct APlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch_Params
{
public:
	float                                        HalfHeightAdjust;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaledHalfHeightAdjust;                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch
struct APlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch_Params
{
public:
	float                                        HalfHeightAdjust;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScaledHalfHeightAdjust;                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent
struct APlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8834[0xC];                                     // Fixing Size After Last Property..
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8835[0x7];                                     // Fixing Size After Last Property..
	class UPostProcessComponent*                 CallFunc_AddComponent_ReturnValue;                 // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8836[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_HalfHeightAdjust_1;                   // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_ScaledHalfHeightAdjust_1;             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_HalfHeightAdjust;                     // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_ScaledHalfHeightAdjust;               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicleDispatcher__DelegateSignature
struct APlayerPawn_Athena_Generic_Parent_C_OnExitedVehicleDispatcher__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicleDispatcher__DelegateSignature
struct APlayerPawn_Athena_Generic_Parent_C_OnEnteredVehicleDispatcher__DelegateSignature_Params
{
public:
};

// 0x108 (0x108 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnPlayHit__DelegateSignature
struct APlayerPawn_Athena_Generic_Parent_C_OnPlayHit__DelegateSignature_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0x28(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature
struct APlayerPawn_Athena_Generic_Parent_C_ShootingTargetReactToJump__DelegateSignature_Params
{
public:
	class AFortPlayerPawnAthena*                 JumpingPlayer;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
