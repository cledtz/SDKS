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
// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_ActivateAbility
struct UGA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_OnEndAbility
struct UGA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.TraceForTerrain
struct UGA_SurfaceChange_Ice_IceCheckOnTimer_C_TraceForTerrain_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.RemoveIceGE
struct UGA_SurfaceChange_Ice_IceCheckOnTimer_C_RemoveIceGE_Params
{
public:
};

// 0x2A3 (0x2A3 - 0x0)
// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer
struct UGA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9549[0x4];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x8(0x10)(ConstParm, ReferenceParm)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x78(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954A[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x15C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  CallFunc_GetFortPhysicalSurface_ReturnValue;       // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954B[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x170(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954C[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x17C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x188(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954D[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954E[0x6];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x1B0(0x10)(ConstParm, ReferenceParm)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit_1;                 // 0x1C0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue_1;            // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  CallFunc_GetFortPhysicalSurface_ReturnValue_1;     // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
