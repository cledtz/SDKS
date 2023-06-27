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
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateTurnAngleStored
struct UFortAIFaunaAnimInstance_UpdateTurnAngleStored_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateSwimmingYaw
struct UFortAIFaunaAnimInstance_UpdateSwimmingYaw_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateRidingMovePlayRate
struct UFortAIFaunaAnimInstance_UpdateRidingMovePlayRate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdatePlayLandAdditive
struct UFortAIFaunaAnimInstance_UpdatePlayLandAdditive_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateFootPhaseStop
struct UFortAIFaunaAnimInstance_UpdateFootPhaseStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBoostPlayRate
struct UFortAIFaunaAnimInstance_UpdateBoostPlayRate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBodyRoll
struct UFortAIFaunaAnimInstance_UpdateBodyRoll_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardVelocity
struct UFortAIFaunaAnimInstance_UpdateBackwardVelocity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardsPlayRate
struct UFortAIFaunaAnimInstance_UpdateBackwardsPlayRate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.FinishFootPhaseStopUpdate
struct UFortAIFaunaAnimInstance_FinishFootPhaseStopUpdate_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha
struct UFortAIFaunaAnimInstance_CalculateLookAtAlpha_Params
{
public:
	bool                                         bForceDisableLookAt;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211F[0x3];                                     // Fixing Size After Last Property..
	float                                        DeltaSeconds;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables
struct UFortAIFaunaAnimInstance_Grandma_UpdateStateVariables_Params
{
public:
	bool                                         bAccelerating;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace
struct UFortAIFaunaAnimInstance_Grandma_UpdateShouldPlayFullBodyInPlace_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates
struct UFortAIFaunaAnimInstance_Grandma_UpdateMovingRates_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale
struct UFortAIFaunaAnimInstance_Grandma_UpdateMeshScale_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha
struct UFortAIFaunaAnimInstance_Grandma_UpdateLocomotionPoseAlpha_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn
struct UFortAIFaunaAnimInstance_Grandma_UpdateIdleStartTurn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive
struct UFortAIFaunaAnimInstance_Grandma_UpdateEnableSniffAdditive_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive
struct UFortAIFaunaAnimInstance_Grandma_UpdateEnableAlertAdditive_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha
struct UFortAIFaunaAnimInstance_Grandma_UpdateBlinkAlpha_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace
struct UFortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn
struct UFortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive
struct UFortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive
struct UFortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate
struct UFortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale
struct UFortAIFaunaAnimInstance_Grandma_CalculateMeshScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha
struct UFortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha
struct UFortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables
struct UFortAIFaunaAnimInstance_Robert_UpdateStateVariables_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha
struct UFortAIFaunaAnimInstance_Robert_UpdateLocomotionPoseAdditiveAlpha_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace
struct UFortAIFaunaAnimInstance_Robert_UpdateIsFullBodyInPlace_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn
struct UFortAIFaunaAnimInstance_Robert_UpdateIdleStartTurn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive
struct UFortAIFaunaAnimInstance_Robert_UpdateEnableHeadTiltDownAdditive_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace
struct UFortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn
struct UFortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive
struct UFortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha
struct UFortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
