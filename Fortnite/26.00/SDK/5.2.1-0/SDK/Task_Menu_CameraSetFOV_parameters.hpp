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
// Function Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C.ReceiveActivate
struct UTask_Menu_CameraSetFOV_C_ReceiveActivate_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C.ReceiveTick
struct UTask_Menu_CameraSetFOV_C_ReceiveTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C.ExecuteUbergraph_Task_Menu_CameraSetFOV
struct UTask_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAction*>                       K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetViewTarget_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCameraActor*                          K2Node_DynamicCast_AsCamera_Actor;                 // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BFA[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C44[0x7];                                     // Fixing Size After Last Property 
	class UActionsSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast;           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast; // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C46[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


