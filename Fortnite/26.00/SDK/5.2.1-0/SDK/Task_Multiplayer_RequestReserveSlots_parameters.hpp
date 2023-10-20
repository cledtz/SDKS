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
// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.ReceiveActivate
struct UTask_Multiplayer_RequestReserveSlots_C_ReceiveActivate_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnConnectionStateChange_Event
struct UTask_Multiplayer_RequestReserveSlots_C_OnConnectionStateChange_Event_Params
{
public:
	bool                                         bWasSuccessful;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnResponseReserveSlot_Event
struct UTask_Multiplayer_RequestReserveSlots_C_OnResponseReserveSlot_Event_Params
{
public:
	uint8                                        Payload;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnPutInQueue_Event
struct UTask_Multiplayer_RequestReserveSlots_C_OnPutInQueue_Event_Params
{
public:
	uint8                                        Number;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnClickLeave_Event
struct UTask_Multiplayer_RequestReserveSlots_C_OnClickLeave_Event_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.ReceiveFinished
struct UTask_Multiplayer_RequestReserveSlots_C_ReceiveFinished_Params
{
public:
	enum class EActionState                      Reason;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x237 (0x237 - 0x0)
// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.ExecuteUbergraph_Task_Multiplayer_RequestReserveSlots
struct UTask_Multiplayer_RequestReserveSlots_C_ExecuteUbergraph_Task_Multiplayer_RequestReserveSlots_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EActionState                      Temp_byte_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A3[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful;                 // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_Payload;                        // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A4[0x6];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A5[0x7];                                     // Fixing Size After Last Property 
	class UActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_BeaconClient*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A6[0x7];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0xD8(0x30)(HasGetValueTypeHash)
	TArray<class UBlueprintPartyMember*>         CallFunc_GetPartyMembers_OutPartyMembersArray;     // 0x108(0x10)(ReferenceParm)
	bool                                         CallFunc_GetPartyMembers_ReturnValue;              // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A8[0x7];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_1;   // 0x120(0x30)(HasGetValueTypeHash)
	class UBlueprintPartyMember*                 CallFunc_Array_Get_Item;                           // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A9[0x4];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetUserId_ReturnValue;                    // 0x160(0x30)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AA[0x7];                                     // Fixing Size After Last Property 
	struct FUniqueNetIdRepl                      CallFunc_GetControllerUniqueNetId_ReturnValue_2;   // 0x1A0(0x30)(HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_Number;                         // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AB[0x7];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_ByteToText_ReturnValue;              // 0x1D8(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AC[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1F4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EActionState                      K2Node_Event_Reason;                               // 0x204(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x205(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x206(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AD[0x1];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Multiplayer_Queue_C*               CallFunc_Create_ReturnValue;                       // 0x210(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOnlinePartySubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMemberLeader_ReturnValue;               // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AE[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x224(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ConnectToServer_ReturnValue;              // 0x235(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x236(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function Task_Multiplayer_RequestReserveSlots.Task_Multiplayer_RequestReserveSlots_C.OnFinished__DelegateSignature
struct UTask_Multiplayer_RequestReserveSlots_C_OnFinished__DelegateSignature_Params
{
public:
	bool                                         IsSuccessful;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        ErrorCode;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


