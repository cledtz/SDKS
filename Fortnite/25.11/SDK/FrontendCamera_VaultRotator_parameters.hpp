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

// 0x3A (0x3A - 0x0)
// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.SetVaultRotatorLighting
struct AFrontendCamera_VaultRotator_C_SetVaultRotatorLighting_Params
{
public:
	class FName                                  ItemRotatorTag;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AVaultWorld_C*>                 CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(ReferenceParm)
	class AVaultWorld_C*                         CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1809[0x4];                                     // Fixing Size After Last Property..
	class AVaultRotator_C*                       CallFunc_GetVaultRotator_VaultRotator;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.BP_OnActivated
struct AFrontendCamera_VaultRotator_C_BP_OnActivated_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.BP_OnDeactivated
struct AFrontendCamera_VaultRotator_C_BP_OnDeactivated_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.ExecuteUbergraph_FrontendCamera_VaultRotator
struct AFrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_180A[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_180B[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 K2Node_Event_PlayerController_1;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x28(0x10)(ReferenceParm)
	class AFortPlayerController*                 K2Node_Event_PlayerController;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_180C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
