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

// 0x11 (0x11 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress
struct AFortnitePartyHeroSelect_Camera_C_HandleMousePress_Params
{
public:
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease
struct AFortnitePartyHeroSelect_Camera_C_HandleMouseRelease_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
struct AFortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
struct AFortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
struct AFortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0
struct AFortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnActivated
struct AFortnitePartyHeroSelect_Camera_C_BP_OnActivated_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnDeactivated
struct AFortnitePartyHeroSelect_Camera_C_BP_OnDeactivated_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick
struct AFortnitePartyHeroSelect_Camera_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x264 (0x264 - 0x0)
// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera
struct AFortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B4B[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_1;                        // 0x18(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x30(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable;                              // 0x48(0x18)(HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B4C[0x4];                                     // Fixing Size After Last Property..
	struct FKey                                  Temp_struct_Variable_1;                            // 0x68(0x18)(HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_Event_PlayerController_1;                   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_Event_PlayerController;                     // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_3;                        // 0x98(0x18)(HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B4D[0x4];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaX;                // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaY;                // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B4E[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B4F[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FKey                                  K2Node_InputKeyEvent_Key_2;                        // 0x120(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B50[0x7];                                     // Fixing Size After Last Property..
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x140(0x10)(ReferenceParm)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x158(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B51[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
