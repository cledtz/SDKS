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

// 0x1 (0x1 - 0x0)
// Function BP_Item_Gear_Watch_05.BP_Item_Gear_Watch_05_C.SetCorrectiveFovMaterial
struct UBP_Item_Gear_Watch_05_C_SetCorrectiveFovMaterial_Params
{
public:
	bool                                         UseFovMaterial;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Item_Gear_Watch_05.BP_Item_Gear_Watch_05_C.ReceiveBeginPlay
struct UBP_Item_Gear_Watch_05_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Item_Gear_Watch_05.BP_Item_Gear_Watch_05_C.Watch
struct UBP_Item_Gear_Watch_05_C_Watch_Params
{
public:
};

// 0x31 (0x31 - 0x0)
// Function BP_Item_Gear_Watch_05.BP_Item_Gear_Watch_05_C.ExecuteUbergraph_BP_Item_Gear_Watch_05
struct UBP_Item_Gear_Watch_05_C_ExecuteUbergraph_BP_Item_Gear_Watch_05_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_useFovMaterial;                       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2837[0x3];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


