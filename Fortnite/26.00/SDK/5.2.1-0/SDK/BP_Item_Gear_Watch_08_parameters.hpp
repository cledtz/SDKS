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
// Function BP_Item_Gear_Watch_08.BP_Item_Gear_Watch_08_C.ReceiveBeginPlay
struct UBP_Item_Gear_Watch_08_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Item_Gear_Watch_08.BP_Item_Gear_Watch_08_C.Watch
struct UBP_Item_Gear_Watch_08_C_Watch_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_Item_Gear_Watch_08.BP_Item_Gear_Watch_08_C.SetCorrectiveFovMaterial
struct UBP_Item_Gear_Watch_08_C_SetCorrectiveFovMaterial_Params
{
public:
	bool                                         UseFovMaterial;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_Item_Gear_Watch_08.BP_Item_Gear_Watch_08_C.ExecuteUbergraph_BP_Item_Gear_Watch_08
struct UBP_Item_Gear_Watch_08_C_ExecuteUbergraph_BP_Item_Gear_Watch_08_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27CC[0x4];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_useFovMaterial;                       // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

