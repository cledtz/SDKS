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
// Function BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C.ReceiveBeginPlay
struct UBP_Item_Gear_Watch_04_C_ReceiveBeginPlay_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C.ReceiveTick
struct UBP_Item_Gear_Watch_04_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C.SetCorrectiveFovMaterial
struct UBP_Item_Gear_Watch_04_C_SetCorrectiveFovMaterial_Params
{
public:
	bool                                         UseFovMaterial;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C.ExecuteUbergraph_BP_Item_Gear_Watch_04
struct UBP_Item_Gear_Watch_04_C_ExecuteUbergraph_BP_Item_Gear_Watch_04_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28A5[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28A6[0x3];                                     // Fixing Size After Last Property 
	float                                        K2Node_Event_DeltaSeconds;                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_useFovMaterial;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28A7[0x7];                                     // Fixing Size After Last Property 
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x40(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}


